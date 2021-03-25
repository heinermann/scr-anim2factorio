#include <iostream>
#include <string>
#include <filesystem>

#include "../cxxopts/include/cxxopts.hpp"

#include "convert.h"

void configure(cxxopts::Options& cmd) {
  cmd.add_options()
    ("i,input", "input file (.anim)", cxxopts::value<std::string>())
    ("o,output", "output directory", cxxopts::value<std::string>())
    ("h,help", "show help")
    ;

  cmd.parse_positional({ "input", "output" });
  cmd.positional_help("INPUT_FILE OUTPUT_DIR");
}

void show_help(cxxopts::Options& cmd) {
  std::cerr << cmd.help() << std::endl;
}

int main(int argc, const char** argv)
{
  cxxopts::Options cmd("anim2factorio", "Convert Starcraft: Remastered .anim files to Factorio sprite sheets");
  configure(cmd);

  // Parse and validate cmdline
  auto parsed = cmd.parse(argc, argv);

  if (parsed.count("help")) {
    show_help(cmd);
    return 0;
  }

  if (!parsed.count("input") || !parsed.count("output")) {
    std::cerr << "Missing arguments.\n";
    show_help(cmd);
    return 1;
  }

  // Get cmdline args
  std::string input_file = parsed["input"].as<std::string>();
  std::string output_dir = parsed["output"].as<std::string>();

#ifdef _DEBUG
  std::cerr << "Attach debugger, then press enter..." << std::endl;
  std::cin.ignore();
#endif

  try {
    convert(
      std::filesystem::absolute(input_file).string(),
      std::filesystem::absolute(output_dir).string()
    );
  }
  catch (std::exception& e) {
    std::cerr << "Failed with: " << e.what() << std::endl;
    return 2;
  }

  return 0;
}
