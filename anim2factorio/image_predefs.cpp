#include "image_predefs.h"

std::array<imagedat_info_t, 999> image_predefs = {
  imagedat_info_t
  { false, false, true }, // Scourge
  { false, true, true }, // Scourge Shadow
  { false, false, false }, // Scourge Birth
  { false, false, false }, // Scourge Death
  { true, false, false }, // Scourge Explosion
  { false, false, true }, // Broodling
  { false, true, true }, // Broodling Shadow
  { false, false, false }, // Broodling Remnants
  { false, false, true }, // Infested Terran
  { false, true, true }, // Infested Terran Shadow
  { true, false, false }, // Infested Terran Explosion
  { false, false, false }, // Guardian Cocoon
  { false, true, false }, // Guardian Cocoon Shadow
  { false, false, true }, // Defiler
  { false, true, true }, // Defiler Shadow
  { false, false, false }, // Defiler Birth
  { false, false, false }, // Defiler Remnants
  { false, false, true }, // Drone
  { false, true, true }, // Drone Shadow
  { false, false, false }, // Drone Birth
  { false, false, false }, // Drone Remnants
  { false, false, false }, // Egg
  { false, true, false }, // Egg Shadow
  { false, false, false }, // Egg Spawn
  { false, false, false }, // Egg Remnants
  { false, false, true }, // Guardian
  { false, true, true }, // Guardian Shadow
  { false, false, false }, // Guardian Birth
  { false, false, false }, // Guardian Death
  { false, false, true }, // Hydralisk
  { false, true, true }, // Hydralisk Shadow
  { false, false, false }, // Hydralisk Birth
  { false, false, false }, // Hydralisk Remnants
  { false, false, true }, // Infested Kerrigan
  { false, true, true }, // Infested Kerrigan Shadow
  { false, false, true }, // Needle Spines
  { false, false, true }, // Larva
  { false, false, false }, // Larva Remnants
  { false, false, true }, // Mutalisk
  { false, true, true }, // Mutalisk Shadow
  { false, false, false }, // Mutalisk Birth
  { false, false, false }, // Mutalisk Death
  { false, false, true }, // Overlord
  { false, true, true }, // Overlord Shadow
  { false, false, false }, // Overlord Birth
  { false, false, false }, // Overlord Death
  { false, false, true }, // Queen
  { false, true, true }, // Queen Shadow
  { false, false, false }, // Queen Death
  { false, false, false }, // Queen Birth
  { false, false, true }, // Ultralisk
  { false, true, true }, // Ultralisk Shadow
  { false, false, false }, // Ultralisk Birth
  { false, false, false }, // Ultralisk Remnants
  { false, false, true }, // Zergling
  { false, true, true }, // Zergling Shadow
  { false, false, false }, // Zergling Birth
  { false, false, false }, // Zergling Remnants
  { false, false, false }, // Zerg Air Death Explosion (Large)
  { false, false, false }, // Zerg Air Death Explosion (Small)
  { false, false, false }, // Zerg Building Explosion
  { false, false, false }, // Cerebrate
  { false, true, false }, // Cerebrate Shadow
  { false, false, false }, // Infested Command Center
  { false, false, false }, // Spawning Pool
  { false, true, false }, // Spawning Pool Shadow
  { false, false, false }, // Evolution Chamber
  { false, true, false }, // Evolution Chamber Shadow
  { false, false, false }, // Creep Colony
  { false, true, false }, // Creep Colony Shadow
  { false, false, false }, // Hatchery
  { false, true, false }, // Hatchery Shadow
  { false, false, false }, // Hive
  { false, true, false }, // Hive Shadow
  { false, false, false }, // Lair
  { false, true, false }, // Lair Shadow
  { false, false, false }, // Sunken Colony
  { false, true, false }, // Sunken Colony Shadow
  { false, false, false }, // Mature Chrysalis
  { false, true, false }, // Mature Chrysalis Shadow
  { false, false, false }, // Greater Spire
  { false, true, false }, // Greater Spire Shadow
  { false, false, false }, // Defiler Mound
  { false, true, false }, // Defiler Mound Shadow
  { false, false, false }, // Queen's Nest
  { false, true, false }, // Queen Nest Shadow
  { false, false, false }, // Nydus Canal
  { false, true, false }, // Nydus Canal Shadow
  { false, false, false }, // Overmind With Shell
  { false, false, false }, // Overmind Remnants
  { false, false, false }, // Overmind Without Shell
  { false, false, false }, // Ultralisk Cavern
  { false, true, false }, // Ultralisk Cavern Shadow
  { false, false, false }, // Extractor
  { false, true, false }, // Extractor Shadow
  { false, false, false }, // Hydralisk Den
  { false, true, false }, // Hydralisk Den Shadow
  { false, false, false }, // Spire
  { false, true, false }, // Spire Shadow
  { false, false, false }, // Spore Colony
  { false, true, false }, // Spore Colony Shadow
  { false, false, false }, // Infested Command Center Overlay
  { false, false, false }, // Zerg Construction (Large)
  { false, false, false }, // Zerg Building Morph
  { false, false, false }, // Zerg Construction (Medium)
  { false, false, false }, // Zerg Construction (Small)
  { false, true, false }, // Zerg Building Construction Shadow
  { false, false, false }, // Zerg Building Spawn (Small)
  { false, false, false }, // Zerg Building Spawn (Medium)
  { false, false, false }, // Zerg Building Spawn (Large)
  { false, false, false }, // Zerg Building Rubble (Small)
  { false, false, false }, // Zerg Building Rubble (Large)
  { false, false, true }, // Carrier
  { false, true, true }, // Carrier Shadow
  { true, false, true }, // Carrier Engines
  {}, // Carrier Warp Flash
  { false, false, true }, // Interceptor
  { false, true, true }, // Interceptor Shadow
  { false, false, true }, // Shuttle
  { false, true, true }, // Shuttle Shadow
  { true, false, true }, // Shuttle Engines
  {}, // Shuttle Warp Flash
  { false, false, true }, // Dragoon
  { false, true, true }, // Dragoon Shadow
  { false, false, false }, // Dragoon Remnants
  {}, // Dragoon Warp Flash
  { false, false, true }, // High Templar
  { false, true, true }, // High Templar Shadow
  {}, // High Templar Warp Flash
  { false, false, true }, // Dark Templar (Hero)
  { false, false, true }, // Arbiter
  { false, true, true }, // Arbiter Shadow
  { true, false, true }, // Arbiter Engines
  {}, // Arbiter Warp Flash
  { true, false, false }, // Archon Energy
  { true, false, true }, // Archon Being
  { true, false, false }, // Archon Swirl
  { false, false, true }, // Probe
  { false, true, true }, // Probe Shadow
  {}, // Probe Warp Flash
  { false, false, true }, // Scout
  { false, true, true }, // Scout Shadow
  { true, false, true }, // Scout Engines
  {}, // Scout Warp Flash
  { false, false, true }, // Reaver
  { false, true, true }, // Reaver Shadow
  {}, // Reaver Warp Flash
  { false, false, true }, // Scarab
  { false, false, true }, // Observer
  { false, true, true }, // Observer Shadow
  {}, // Observer Warp Flash
  { false, false, true }, // Zealot
  { false, true, true }, // Zealot Shadow
  { false, false, false }, // Zealot Death
  {}, // Zealot Warp Flash
  { false, false, false }, // Templar Archives
  { true, false, false }, // Templar Archives Warp Flash
  { false, true, false }, // Templar Archives Shadow
  { false, false, false }, // Assimilator
  { true, false, false }, // Assimilator Warp Flash
  { false, true, false }, // Assimilator Shadow
  { false, false, false }, // Observatory
  { true, false, false }, // Observatory Warp Flash
  { false, true, false }, // Observatory Shadow
  { false, false, false }, // Citadel of Adun
  { true, false, false }, // Citadel of Adun Warp Flash
  { false, true, false }, // Citadel of Adun Shadow
  { false, false, false }, // Forge
  { false, false, false }, // Forge Overlay
  { true, false, false }, // Forge Warp Flash
  { false, true, false }, // Forge Shadow
  { false, false, false }, // Gateway
  { true, false, false }, // Gateway Warp Flash
  { false, true, false }, // Gateway Shadow
  { false, false, false }, // Cybernetics Core
  { true, false, false }, // Cybernetics Core Warp Flash
  { false, false, false }, // Cybernetics Core Overlay
  { false, true, false }, // Cybernetics Core Shadow
  { false, false, false }, // Khaydarin Crystal Formation
  { false, false, false }, // Nexus
  { true, false, false }, // Nexus Warp Flash
  { true, false, false }, // Nexus Overlay
  { false, true, false }, // Nexus Shadow
  { false, false, false }, // Photon Cannon
  { false, true, false }, // Photon Cannon Shadow
  { true, false, false }, // Photon Cannon Warp Flash
  { false, false, false }, // Arbiter Tribunal
  { true, false, false }, // Arbiter Tribunal Warp Flash
  { false, true, false }, // Arbiter Tribunal Shadow
  { false, false, false }, // Pylon
  { true, false, false }, // Pylon Warp Flash
  { false, true, false }, // Pylon Shadow
  { false, false, false }, // Robotics Facility
  { true, false, false }, // Robotics Facility Warp Flash
  { false, true, false }, // Robotics Facility Shadow
  { false, false, false }, // Shield Battery
  { true, false, false }, // Shield Battery Overlay
  { true, false, false }, // Shileld Battery Warp Flash
  { false, true, false }, // Shield Battery Shadow
  { false, false, false }, // Stargate
  { true, false, false }, // Stargate Overlay
  { true, false, false }, // Stargate Warp Flash
  { false, true, false }, // Stargate Shadow
  { false, false, false }, // Stasis Cell/Prison
  { false, false, false }, // Robotics Support Bay
  { true, false, false }, // Robotics Support Bay Warp Flash
  { false, true, false }, // Robotics Support Bay Shadow
  { false, false, false }, // Protoss Temple
  { false, false, false }, // Fleet Beacon
  { true, false, false }, // Fleet Beacon Warp Flash
  { true, false, false }, // Warp Texture
  { true, false, false }, // Warp Anchor
  { false, true, false }, // Fleet Beacon Shadow
  { true, false, false }, // Explosion1 (Small)
  { true, false, false }, // Explosion1 (Medium)
  { true, false, false }, // Explosion (Large)
  { false, false, false }, // Protoss Building Rubble (Small)
  { false, false, false }, // Protoss Building Rubble (Large)
  { false, false, true }, // Battlecruiser
  { false, true, true }, // Battlecruiser Shadow
  { true, false, true }, // Battlecruiser Engines
  { false, false, true }, // Civilian
  { false, true, true }, // Civilian Shadow
  { false, false, true }, // Dropship
  { false, true, true }, // Dropship Shadow
  { true, false, true }, // Dropship Engines
  { false, false, true }, // Firebat
  { false, true, true }, // Firebat Shadow
  { false, false, true }, // Ghost
  { false, true, true }, // Ghost Shadow
  { false, false, false }, // Ghost Remnants
  { false, false, false }, // Ghost Death
  { true, false, true }, // Nuke Beam
  { true, false, false }, // Nuke Target Dot
  { false, false, true }, // Goliath Base
  { false, false, true }, // Goliath Turret
  { false, true, true }, // Goliath Shadow
  { false, false, true }, // Sarah Kerrigan
  { false, true, true }, // Sarah Kerrigan Shadow
  { false, false, true }, // Marine
  { false, true, true }, // Marine Shadow
  { false, false, false }, // Marine Remnants
  { false, false, false }, // Marine Death
  { false, false, true }, // Wraith
  { false, true, true }, // Wraith Shadow
  { true, false, true }, // Wraith Engines
  { false, false, false }, // Scanner Sweep
  { false, false, true }, // SCV
  { false, true, true }, // SCV Shadow
  { true, false, true }, // SCV Glow
  { false, false, true }, // Siege Tank (Tank) Base
  { false, false, true }, // Siege Tank (Tank) Turret
  { false, true, true }, // Siege Tank (Tank) Base Shadow
  { false, false, false }, // Siege Tank (Siege) Base
  { false, false, true }, // Siege Tank (Siege) Turret
  { false, true, false }, // Siege Tank (Siege) Base Shadow
  { false, false, true }, // Vulture
  { false, true, true }, // Vulture Shadow
  { false, false, false }, // Spider Mine
  { false, true, false }, // Spider Mine Shadow
  { false, false, false }, // Science Vessel (Base)
  { false, false, true }, // Science Vessel (Turret)
  { false, true, false }, // Science Vessel Shadow
  { false, false, false }, // Terran Academy
  { false, false, false }, // Academy Overlay
  { false, true, false }, // Academy Shadow
  { false, false, false }, // Barracks
  { false, true, false }, // Barracks Shadow
  { false, false, false }, // Armory
  { false, false, false }, // Armory Overlay
  { false, true, false }, // Armory Shadow
  { false, false, false }, // Comsat Station
  { false, false, false }, // Comsat Station Connector
  { false, false, false }, // Comsat Station Overlay
  { false, true, false }, // Comsat Station Shadow
  { false, false, false }, // Command Center
  { false, false, false }, // Command Center Overlay
  { false, true, false }, // Command Center Shadow
  { false, false, false }, // Supply Depot
  { false, false, false }, // Supply Depot Overlay
  { false, true, false }, // Supply Depot Shadow
  { false, false, false }, // Control Tower
  { false, false, false }, // Control Tower Connector
  { true, false, false }, // Control Tower Overlay
  { false, true, false }, // Control Tower Shadow
  { false, false, false }, // Factory
  { true, false, false }, // Factory Overlay
  { false, true, false }, // Factory Shadow
  { false, false, false }, // Covert Ops
  { false, false, false }, // Covert Ops Connector
  { false, false, false }, // Covert Ops Overlay
  { false, true, false }, // Covert Ops Shadow
  { false, false, false }, // Ion Cannon
  { false, false, false }, // Machine Shop
  { false, false, false }, // Machine Shop Connector
  { false, true, false }, // Machine Shop Shadow
  { false, false, false }, // Missile Turret (Base)
  { false, false, true }, // Missile Turret (Turret)
  { false, true, false }, // Missile Turret (Base) Shadow
  { false, false, false }, // Crashed Batlecruiser
  { false, true, false }, // Crashed Battlecruiser Shadow
  { false, false, false }, // Physics Lab
  { false, false, false }, // Physics Lab Connector
  { false, true, false }, // Physics Lab Shadow
  { false, false, false }, // Bunker
  { false, true, false }, // Bunker Shadow
  { true, false, true }, // Bunker Overlay
  { false, false, false }, // Refinery
  { false, true, false }, // Refinery Shadow
  { false, false, false }, // Science Facility
  { false, false, false }, // Science Facility Overlay
  { false, true, false }, // Science Facility Shadow
  { false, false, false }, // Nuclear Silo
  { false, false, false }, // Nuclear Silo Connector
  { false, false, false }, // Nuclear Silo Overlay
  { false, true, false }, // Nuclear Silo Shadow
  { false, false, true }, // Nuclear Missile
  { false, true, true }, // Nuclear Missile Shadow
  { true, false, false }, // Nuke Hit
  { false, false, false }, // Starport
  { true, false, false }, // Starport Overlay
  { false, true, false }, // Starport Shadow
  { false, false, false }, // Engineering Bay
  { false, false, false }, // Engineering Bay Overlay
  { false, true, false }, // Engineering Bay Shadow
  { false, false, false }, // Terran Construction (Large)
  { false, true, false }, // Terran Construction (Large) Shadow
  { false, false, false }, // Terran Construction (Medium)
  { false, true, false }, // Terran Construction (Medium) Shadow
  { false, false, false }, // Addon Construction
  { false, false, false }, // Terran Construction (Small)
  { false, true, false }, // Terran Construction (Small) Shadow
  { true, false, false }, // Explosion2 (Small)
  { true, false, false }, // Explosion2 (Medium)
  { true, false, false }, // Building Explosion (Large)
  { false, false, false }, // Terran Building Rubble (Small)
  { false, false, false }, // Terran Building Rubble (Large)
  { true, false, false }, // Dark Swarm
  { false, false, true }, // Ragnasaur (Ash)
  { false, true, true }, // Ragnasaur (Ash) Shadow
  { false, false, true }, // Rhynadon (Badlands)
  { false, true, true }, // Rhynadon (Badlands) Shadow
  { false, false, true }, // Bengalaas (Jungle)
  { false, true, true }, // Bengalaas (Jungle) Shadow
  { false, false, false }, // Vespene Geyser
  { false, false, false }, // Vespene Geyser2
  { false, true, false }, // Vespene Geyser Shadow
  { false, false, false }, // Mineral Field Type1
  { false, true, false }, // Mineral Field Type1 Shadow
  { false, false, false }, // Mineral Field Type2
  { false, true, false }, // Mineral Field Type2 Shadow
  { false, false, false }, // Mineral Field Type3
  { false, true, false }, // Mineral Field Type3 Shadow
  {}, // Independent Starport (Unused)
  { false, false, false }, // Zerg Beacon
  { true, false, false }, // Zerg Beacon Overlay
  { false, false, false }, // Terran Beacon
  { true, false, false }, // Terran Beacon Overlay
  { false, false, false }, // Protoss Beacon
  { true, false, false }, // Protoss Beacon Overlay
  {}, // Magna Pulse (Unused)
  { true, false, false }, // Lockdown Field (Small)
  { true, false, false }, // Lockdown Field (Medium)
  { true, false, false }, // Lockdown Field (Large)
  { true, false, false }, // Stasis Field Hit
  { true, false, false }, // Stasis Field (Small)
  { true, false, false }, // Stasis Field (Medium)
  { true, false, false }, // Stasis Field (Large)
  { true, false, false }, // Recharge Shields (Small)
  { true, false, false }, // Recharge Shields (Medium)
  { true, false, false }, // Recharge Shields (Large)
  { true, false, false }, // Defensive Matrix Front (Small)
  { true, false, false }, // Defensive Matrix Front (Medium)
  { true, false, false }, // Defensive Matrix Front (Large)
  { true, false, false }, // Defensive Matrix Back (Small)
  { true, false, false }, // Defensive Matrix Back (Medium)
  { true, false, false }, // Defensive Matrix Back (Large)
  { true, false, false }, // Defensive Matrix Hit (Small)
  { true, false, false }, // Defensive Matrix Hit (Medium)
  { true, false, false }, // Defensive Matrix Hit (Large)
  { true, false, false }, // Irradiate (Small)
  { true, false, false }, // Irradiate (Medium)
  { true, false, false }, // Irradiate (Large)
  { false, false, false }, // Ensnare Cloud
  { false, false, false }, // Ensnare Overlay (Small)
  { false, false, false }, // Ensnare Overlay (Medium)
  { false, false, false }, // Ensnare Overlay (Large)
  { false, false, false }, // Plague Cloud
  { false, false, false }, // Plague Overlay (Small)
  { false, false, false }, // Plague Overlay (Medium)
  { false, false, false }, // Plague Overlay (Large)
  { true, false, false }, // Recall Field
  { false, false, false }, // Flag
  { false, false, true }, // Young Chrysalis
  { false, false, false }, // Psi Emitter
  { false, false, true }, // Data Disc
  { false, false, false }, // Khaydarin Crystal
  { false, false, true }, // Mineral Chunk Type1
  { false, false, true }, // Mineral Chunk Type2
  { false, false, true }, // Protoss Gas Orb Type1
  { false, false, true }, // Protoss Gas Orb Type2
  { false, false, true }, // Zerg Gas Sac Type1
  { false, false, true }, // Zerg Gas Sac Type2
  { false, false, false }, // Terran Gas Tank Type1
  { false, false, false }, // Terran Gas Tank Type2
  { false, true, true }, // Mineral Chunk Shadow
  { false, true, true }, // Protoss Gas Orb Shadow
  { false, true, true }, // Zerg Gas Sac Shadow
  { false, true, false }, // Terran Gas Tank Shadow
  { false, true, false }, // Data Disk Shadow (Ground)
  { false, true, true }, // Data Disk Shadow (Carried)
  { false, true, false }, // Flag Shadow (Ground)
  { false, true, false }, // Flag Shadow (Carried)
  { false, true, false }, // Crystal Shadow (Ground)
  { false, true, false }, // Crystal Shadow (Carried)
  { false, true, false }, // Young Chrysalis Shadow (Ground)
  { false, true, true }, // Young Chrysalis Shadow (Carried)
  { false, true, false }, // Psi Emitter Shadow (Ground)
  { false, true, false }, // Psi Emitter Shadow (Carried)
  {}, // Acid Spray (Unused)
  {}, // Plasma Drip (Unused)
  { true, false, true }, // FlameThrower
  { true, false, false }, // Longbolt/Gemini Missiles Trail
  { false, false, false }, // Burrowing Dust
  { true, false, false }, // Shield Overlay
  {}, // Small Explosion (Unused)
  { true, false, false }, // Double Explosion
  { true, false, false }, // Phase Disruptor Hit
  { true, false, false }, // Nuclear Missile Death
  { true, false, false }, // Spider Mine Death
  { true, false, false }, // Vespene Geyser Smoke1
  { true, false, false }, // Vespene Geyser Smoke2
  { true, false, false }, // Vespene Geyser Smoke3
  { true, false, false }, // Vespene Geyser Smoke4
  { true, false, false }, // Vespene Geyser Smoke5
  { true, false, false }, // Vespene Geyser Smoke1 Overlay
  { true, false, false }, // Vespene Geyser Smoke2 Overlay
  { true, false, false }, // Vespene Geyser Smoke3 Overlay
  { true, false, false }, // Vespene Geyser Smoke4 Overlay
  { true, false, false }, // Vespene Geyser Smoke5 Overlay
  { true, false, false }, // Fragmentation Grenade Hit
  { false, false, false }, // Grenade Shot Smoke
  { false, false, false }, // Anti-Matter Missile Hit
  { true, false, false }, // Scarab/Anti-Matter Missile Overlay
  { true, false, false }, // Scarab Hit
  { true, false, false }, // Cursor Marker
  { true, false, true }, // Battlecruiser Attack Overlay
  { true, false, false }, // Burst Lasers Hit
  {}, // Burst Lasers Overlay (Unused)
  { true, false, true }, // High Templar Glow
  { true, false, false }, // Flames1 Type1 (Small)
  { true, false, false }, // Flames1 Type2 (Small)
  { true, false, false }, // Flames1 Type3 (Small)
  { true, false, false }, // Flames2 Type3 (Small)
  { true, false, false }, // Flames3 Type3 (Small)
  { true, false, false }, // Flames4 Type3 (Small)
  { true, false, false }, // Flames5 Type3 (Small)
  { true, false, false }, // Flames6 Type3 (Small)
  { false, false, false }, // Bleeding Variant1 Type1 (Small)
  { false, false, false }, // Bleeding Variant1 Type2 (Small)
  { false, false, false }, // Bleeding Variant1 Type3 (Small)
  { false, false, false }, // Bleeding Variant1 Type4 (Small)
  { false, false, false }, // Bleeding Variant2 Type1 (Small)
  { false, false, false }, // Bleeding Variant2 Type2 (Small)
  { false, false, false }, // Bleeding Variant2 Type3 (Small)
  { false, false, false }, // Bleeding Variant2 Type4 (Small)
  { true, false, false }, // Flames2 Type1 (Small)
  { true, false, false }, // Flames2 Type2 (Small)
  { true, false, false }, // Flames7 Type3 (Small)
  { true, false, false }, // Flames3 Type1 (Small)
  { true, false, false }, // Flames3 Type2 (Small)
  { true, false, false }, // Flames8 Type3 (Small)
  { true, false, false }, // Flames1 Type1 (Large)
  { true, false, false }, // Flames1 Type2 (Large)
  { true, false, false }, // Flames1 Type3 (Large)
  { true, false, false }, // Flames2 Type3 (Large)
  { true, false, false }, // Flames3 Type3 (Large)
  { true, false, false }, // Flames4 Type3 (Large)
  { true, false, false }, // Flames5 Type3 (Large)
  { true, false, false }, // Flames6 Type3 (Large)
  { false, false, false }, // Bleeding Variant1 Type1 (Large)
  { false, false, false }, // Bleeding Variant1 Type2 (Large)
  { false, false, false }, // Bleeding Variant1 Type3 (Large)
  { false, false, false }, // Bleeding Variant1 Type4 (Large)
  { false, false, false }, // Bleeding Variant2 Type1 (Large)
  { false, false, false }, // Bleeding Variant2 Type3 (Large)
  { false, false, false }, // Bleeding Variant3 Type3 (Large)
  { false, false, false }, // Bleeding Variant2 Type4 (Large)
  { true, false, false }, // Flames2 Type1 (Large)
  { true, false, false }, // Flames2 Type2 (Large)
  { true, false, false }, // Flames7 Type3 (Large)
  { true, false, false }, // Flames3 Type1 (Large)
  { true, false, false }, // Flames3 Type2 (Large)
  { true, false, false }, // Flames8 Type3 (Large)
  { false, false, false }, // Building Landing Dust Type1
  { false, false, false }, // Building Landing Dust Type2
  { false, false, false }, // Building Landing Dust Type3
  { false, false, false }, // Building Landing Dust Type4
  { false, false, false }, // Building Landing Dust Type5
  { false, false, false }, // Building Lifting Dust Type1
  { false, false, false }, // Building Lifting Dust Type2
  { false, false, false }, // Building Lifting Dust Type3
  { false, false, false }, // Building Lifting Dust Type4
  { false, false, false }, // White Circle
  { true, false, false }, // Needle Spine Hit
  {}, // Plasma Drip Hit (Unused)
  { false, false, false }, // Sunken Colony Tentacle
  {}, // Venom (Unused Zerg Weapon)
  {}, // Venom Hit (Unused)
  { true, false, false }, // Acid Spore
  { true, false, false }, // Acid Spore Hit
  { false, false, false }, // Glave Wurm
  { true, false, false }, // Glave Wurm/Seeker Spores Hit
  { true, false, false }, // Glave Wurm Trail
  { true, false, false }, // Seeker Spores Overlay
  { false, false, false }, // Seeker Spores
  { false, false, false }, // Queen Spell Holder
  { true, false, false }, // Consume
  { true, false, true }, // Guardian Attack Overlay
  { true, false, false }, // Dual Photon Blasters Hit
  { true, false, false }, // Particle Beam Hit
  { false, false, true }, // Anti-Matter Missile
  { true, false, true }, // Pulse Cannon
  { true, false, false }, // Phase Disruptor
  { true, false, false }, // STA/STS Photon Cannon Overlay
  { true, false, false }, // Psionic Storm
  { true, false, false }, // Fusion Cutter Hit
  { true, false, false }, // Gauss Rifle Hit
  { false, false, true }, // Gemini Missiles
  { false, false, true }, // Lockdown/LongBolt/Hellfire Missile
  { true, false, false }, // Gemini Missiles Explosion
  { true, false, false }, // C-10 Canister Rifle Hit
  { false, false, false }, // Fragmentation Grenade
  { true, false, false }, // Arclite Shock Cannon Hit
  { true, false, true }, // ATS/ATA Laser Battery
  { true, false, true }, // Burst Lasers
  { true, false, true }, // Siege Tank(Tank) Turret Attack Overlay
  { true, false, true }, // Siege Tank(Siege) Turret Attack Overlay
  { true, false, false }, // Science Vessel Overlay (Part1)
  { true, false, false }, // Science Vessel Overlay (Part2)
  { true, false, false }, // Science Vessel Overlay (Part3)
  { true, false, true }, // Yamato Gun
  { true, false, true }, // Yamato Gun Trail
  { true, false, false }, // Yamato Gun Overlay
  { true, false, false }, // Yamato Gun Hit
  { true, false, false }, // Hallucination Hit
  { true, false, false }, // Scanner Sweep Hit
  {}, // Archon Birth (Unused)
  { true, false, false }, // Psionic Shockwave Hit
  { true, false, true }, // Archon Beam
  { true, false, false }, // Psionic Storm Part1
  { true, false, false }, // Psionic Storm Part2
  { true, false, false }, // Psionic Storm Part3
  { true, false, false }, // Psionic Storm Part4
  { false, false, true }, // EMP Shockwave Missile
  { true, false, false }, // EMP Shockwave Hit (Part1)
  { true, false, false }, // EMP Shockwave Hit (Part2)
  { true, false, false }, // Hallucination Death1
  { true, false, false }, // Hallucination Death2
  { true, false, false }, // Hallucination Death3
  {}, // Circle Marker1
  { true, false, false }, // Selection Circle (22pixels)
  { true, false, false }, // Selection Circle (32pixels)
  { true, false, false }, // Selection Circle (48pixels)
  { true, false, false }, // Selection Circle (62pixels)
  { true, false, false }, // Selection Circle (72pixels)
  { true, false, false }, // Selection Circle (94pixels)
  { true, false, false }, // Selection Circle (110pixels)
  { true, false, false }, // Selection Circle (122pixels)
  { true, false, false }, // Selection Circle (146pixels)
  { true, false, false }, // Selection Circle (224pixels)
  { true, false, false }, // Selection Circle Dashed (22pixels)
  { true, false, false }, // Selection Circle Dashed (32pixels)
  { true, false, false }, // Selection Circle Dashed (48pixels)
  { true, false, false }, // Selection Circle Dashed (62pixels)
  { true, false, false }, // Selection Circle Dashed (72pixels)
  { true, false, false }, // Selection Circle Dashed (94pixels)
  { true, false, false }, // Selection Circle Dashed (110pixels)
  { true, false, false }, // Selection Circle Dashed (122pixels)
  { true, false, false }, // Selection Circle Dashed (146pixels)
  { true, false, false }, // Selection Circle Dashed (224pixels)
  {}, // Circle Marker2
  { false, false, false }, // Map Revealer
  {}, // Circle Marker3
  { true, false, false }, // Psi Field1 (Right Upper)
  { true, false, false }, // Psi Field1 (Right Lower)
  { true, false, false }, // Psi Field2 (Right Upper)
  { true, false, false }, // Psi Field2 (Right Lower)
  { false, false, false }, // Start Location
  { false, false, false }, // 2/38 Ash
  { false, true, false }, // 2/38 Ash Shadow
  { false, false, false }, // 2/39 Ash
  { false, true, false }, // 2/39 Ash Shadow
  { false, false, false }, // 2/41 Ash
  { false, true, false }, // 2/41 Ash Shadow
  { false, false, false }, // 2/40 Ash
  { false, true, false }, // 2/40 Ash Shadow
  { false, false, false }, // 2/42 Ash
  { false, true, false }, // 2/42 Ash Shadow
  { false, false, false }, // 2/43 Ash
  { false, false, false }, // 2/44 Ash
  { false, false, false }, // 2/1 Ash
  { false, false, false }, // 2/4 Ash
  { false, false, false }, // 2/5 Ash
  { false, false, false }, // 2/30 Ash
  { false, false, false }, // 2/28 Ash
  { false, false, false }, // 2/29 Ash
  { false, false, false }, // 4/1 Ash
  { false, false, false }, // 4/2 Ash
  { false, false, false }, // 4/3 Ash
  { false, false, false }, // 4/56 Jungle
  { false, true, false }, // 4/56 Jungle Shadow
  { false, false, false }, // 4/57 Jungle
  { false, true, false }, // 4/57 Jungle Shadow
  { false, false, false }, // 4/58 Jungle
  { false, true, false }, // 4/58 Jungle Shadow
  { false, false, false }, // 4/59 Jungle
  { false, true, false }, // 4/59 Jungle Shadow
  { false, false, false }, // 9/5 Jungle
  { false, true, false }, // 9/5 Jungle Shadow
  { false, false, false }, // 9/6 Jungle
  { false, true, false }, // 9/6 Jungle Shadow
  { false, false, false }, // 9/7 Jungle
  { false, true, false }, // 9/7 Jungle Shadow
  { false, false, false }, // 4/51 Jungle
  { false, true, false }, // 4/51 Jungle Shadow
  { false, false, false }, // 4/52 Jungle
  { false, true, false }, // 4/52 Jungle Shadow
  { false, false, false }, // 4/54 Jungle
  { false, true, false }, // 4/54 Jungle Shadow
  { false, false, false }, // 4/53 Jungle
  { false, true, false }, // 4/53 Jungle Shadow
  { false, false, false }, // 9/1 Jungle
  { false, true, false }, // 9/1 Jungle Shadow
  { false, false, false }, // 9/2 Jungle
  { false, true, false }, // 9/2 Jungle Shadow
  { false, false, false }, // 9/3 Jungle
  { false, true, false }, // 9/3 Jungle Shadow
  { false, false, false }, // 9/4 Jungle
  { false, true, false }, // 9/4 Jungle Shadow
  { false, false, false }, // 4/12 Jungle
  { false, false, false }, // 4/13 Jungle
  { false, false, false }, // 4/1 Jungle
  { false, false, false }, // 4/3 Jungle
  { false, false, false }, // 4/2 Jungle
  { false, false, false }, // 4/5 Jungle
  { false, false, false }, // 4/4 Jungle
  { false, false, false }, // 4/9 Jungle
  { false, false, false }, // 4/10 Jungle
  { false, false, false }, // 5/5 Jungle
  { false, false, false }, // 5/7 Jungle
  { false, false, false }, // 5/6 Jungle
  { false, false, false }, // 5/9 Jungle
  { false, false, false }, // 5/8 Jungle
  { false, false, false }, // 4/6 Jungle
  { false, false, false }, // 4/7 Jungle
  { false, false, false }, // 4/17 Jungle
  { false, false, false }, // 13/4 Jungle
  { false, false, false }, // 11/5 Jungle
  { false, false, false }, // 11/6 Jungle
  { false, false, false }, // 11/7 Jungle
  { false, false, false }, // 11/8 Jungle
  { false, false, false }, // 11/10 Jungle
  { false, false, false }, // 11/11 Jungle
  { false, false, false }, // 11/12 Jungle
  { false, false, false }, // 7/4 Platform
  { false, true, false }, // 7/4 Platform Shadow
  { false, false, false }, // 7/5 Platform
  { false, true, false }, // 7/5 Platform Shadow
  { false, false, false }, // 7/6 Platform
  { false, true, false }, // 7/6 Platform Shadow
  { false, false, false }, // 7/1 Platform
  { false, true, false }, // 7/1 Platform Shadow
  { false, false, false }, // 7/2 Platform
  { false, true, false }, // 7/2 Platform Shadow
  { false, false, false }, // 7/3 Platform
  { false, true, false }, // 7/3 Platform Shadow
  { false, false, false }, // 7/9 Platform
  { false, false, false }, // 7/10 Platform
  { false, false, false }, // 7/8 Platform
  { false, false, false }, // 7/7 Platform
  { false, false, false }, // 7/26 Platform
  { false, false, false }, // 7/24 Platform
  { false, false, false }, // 7/28 Platform
  { false, false, false }, // 7/27 Platform
  { false, false, false }, // 7/25 Platform
  { false, false, false }, // 7/29 Platform
  { false, false, false }, // 7/30 Platform
  { false, false, false }, // 7/31 Platform
  { false, false, false }, // 12/1 Platform
  { false, false, false }, // 9/27 Platform
  { false, false, false }, // 5/54 Badlands
  { false, true, false }, // 5/54 Badlands Shadow
  { false, false, false }, // 5/55 Badlands
  { false, true, false }, // 5/55 Badlands Shadow
  { false, false, false }, // 5/56 Badlands
  { false, true, false }, // 5/56 Badlands Shadow
  { false, false, false }, // 5/57 Badlands
  { false, true, false }, // 5/57 Badlands Shadow
  { false, false, false }, // 6/16 Badlands
  { false, false, false }, // 6/17 Badlands
  { false, false, false }, // 6/20 Badlands
  { false, false, false }, // 6/21 Badlands
  { false, false, false }, // 5/10 Badlands
  { false, false, false }, // 5/50 Badlands
  { false, true, false }, // 5/50 Badlands Shadow
  { false, false, false }, // 5/52 Badlands
  { false, true, false }, // 5/52 Badlands Shadow
  { false, false, false }, // 5/53 Badlands
  { false, true, false }, // 5/53 Badlands Shadow
  { false, false, false }, // 5/51 Badlands
  { false, true, false }, // 5/51 Badlands Shadow
  { false, false, false }, // 6/3 Badlands
  { false, false, false }, // 11/3 Badlands
  { false, false, false }, // 11/8 Badlands
  { false, false, false }, // 11/6 Badlands
  { false, false, false }, // 11/7 Badlands
  { false, false, false }, // 11/9 Badlands
  { false, false, false }, // 11/10 Badlands
  { false, false, false }, // 11/11 Badlands
  { false, false, false }, // 11/12 Badlands
  { false, false, false }, // 11/13 Badlands
  { false, false, false }, // 11/14 Badlands
  { false, false, false }, // 1/13 Badlands
  { false, false, false }, // 1/9 Badlands
  { false, false, false }, // 1/11 Badlands
  { false, false, false }, // 1/14 Badlands
  { false, false, false }, // 1/10 Badlands
  { false, false, false }, // 1/12 Badlands
  { false, false, false }, // 1/15 Badlands
  { false, false, false }, // 1/7 Badlands
  { false, false, false }, // 1/5 Badlands
  { false, false, false }, // 1/16 Badlands
  { false, false, false }, // 1/8 Badlands
  { false, false, false }, // 1/6 Badlands
  { false, false, false }, // Floor Gun Trap
  { false, false, false }, // Floor Missile Trap
  { false, false, true }, // Floor Missile Trap Turret
  { false, false, false }, // Wall Missile Trap
  { false, false, false }, // Wall Missile Trap2
  { false, false, false }, // Wall Flame Trap
  { false, false, false }, // Wall Flame Trap2
  { false, false, false }, // Left Upper Level Door
  { false, false, false }, // Right Upper Level Door
  { false, false, false }, // 4/15 Installation1
  { false, false, false }, // 4/15 Installation2
  { false, false, false }, // 3/9 Installation
  { false, false, false }, // 3/10 Installation
  { false, false, false }, // 3/11 Installation
  { false, false, false }, // 3/12 Installation
  { false, false, false }, // Substructure Left Door
  { false, false, false }, // Substructure Right Door
  { false, false, false }, // 3/1 Installation
  { false, false, false }, // 3/2 Installation
  { false, false, false }, // Substructure Opening Hole
  { false, false, false }, // 7/21 Twilight
  { false, false, false }, // Unknown Twilight
  { false, false, false }, // 7/13 Twilight
  { false, false, false }, // 7/14 Twilight
  { false, false, false }, // 7/16 Twilight
  { false, false, false }, // 7/15 Twilight
  { false, false, false }, // 7/19 Twilight
  { false, false, false }, // 7/20 Twilight
  { false, false, false }, // 7/17 Twilight
  { false, false, false }, // 6/1 Twilight
  { false, false, false }, // 6/2 Twilight
  { false, false, false }, // 6/3 Twilight
  { false, false, false }, // 6/4 Twilight
  { false, false, false }, // 6/5 Twilight
  { false, false, false }, // 8/3 Twilight1
  { false, false, false }, // 8/3 Twilight2
  { false, false, false }, // 9/29 Ice
  { false, true, false }, // 9/29 Ice Shadow
  { false, false, false }, // 9/28 Ice
  { false, true, false }, // 9/28 Ice Shadow
  { false, false, false }, // 12/38 Ice
  { false, true, false }, // 12/38 Ice Shadow
  { false, false, false }, // 12/37 Ice
  { false, true, false }, // 12/37 Ice Shadow
  { false, false, false }, // 12/33 Ice1
  { false, true, false }, // 12/33 Ice1 Shadow
  { false, false, false }, // 9/21 Ice
  { false, true, false }, // 9/21 Ice Shadow
  { false, false, false }, // 9/15 Ice
  { false, true, false }, // 9/15 Ice Shadow
  { false, false, false }, // 9/16 Ice
  { false, true, false }, // 9/16 Ice Shadow
  { false, false, false }, // Unknown787
  { false, false, false }, // Unknown788
  { false, false, false }, // 12/9 Ice1
  { false, false, false }, // 12/10 Ice1
  { false, false, false }, // 9/24 Ice
  { false, true, false }, // 9/24 Ice Shadow
  { false, false, false }, // 9/23 Ice
  { false, true, false }, // 9/23 Ice Shadow
  { false, false, false }, // Unknown795
  { false, true, false }, // Unknown Ice Shadow
  { false, false, false }, // 12/7 Ice
  { false, true, false }, // 12/7 Ice Shadow
  { false, false, false }, // 12/8 Ice
  { false, true, false }, // 12/8 Ice Shadow
  { false, false, false }, // 12/9 Ice2
  { false, true, false }, // 12/9 Ice2 Shadow
  { false, false, false }, // 12/10 Ice2
  { false, true, false }, // 12/10 Ice2 Shadow
  { false, false, false }, // 12/40 Ice
  { false, true, false }, // 12/40 Ice Shadow
  { false, false, false }, // 12/41 Ice
  { false, true, false }, // 12/41 Ice Shadow
  { false, false, false }, // 12/42 Ice
  { false, true, false }, // 12/42 Ice Shadow
  { false, false, false }, // 12/5 Ice
  { false, true, false }, // 12/5 Ice Shadow
  { false, false, false }, // 12/6 Ice
  { false, true, false }, // 12/6 Ice Shadow
  { false, false, false }, // 12/36 Ice
  { false, true, false }, // 12/36 Ice Shadow
  { false, false, false }, // 12/32 Ice
  { false, true, false }, // 12/32 Ice Shadow
  { false, false, false }, // 12/33 Ice2
  { false, true, false }, // 12/33 Ice2 Shadow
  { false, false, false }, // 12/34 Ice
  { false, true, false }, // 12/34 Ice Shadow
  { false, false, false }, // 12/24 Ice1
  { false, true, false }, // 12/24 Ice1 Shadow
  { false, false, false }, // 12/25 Ice1
  { false, true, false }, // 12/25 Ice1 Shadow
  { false, false, false }, // 12/30 Ice1
  { false, true, false }, // 12/30 Ice1 Shadow
  { false, false, false }, // 12/31 Ice
  { false, true, false }, // 12/31 Ice Shadow
  { false, false, false }, // 12/20 Ice
  { false, false, false }, // 12/30 Ice2
  { false, true, false }, // 12/30 Ice2 Shadow
  { false, false, false }, // 9/22 Ice
  { false, true, false }, // 9/22 Ice Shadow
  { false, false, false }, // 12/24 Ice2
  { false, true, false }, // 12/24 Ice2 Shadow
  { false, false, false }, // 12/25 Ice2
  { false, true, false }, // 12/25 Ice2 Shadow
  { false, false, false }, // Unknown840
  { false, false, false }, // 4/1 Ice
  { false, false, false }, // 6/1 Ice
  { false, false, false }, // 5/6 Ice
  { false, true, false }, // 5/6 Ice Shadow
  { false, false, false }, // 5/7 Ice
  { false, true, false }, // 5/7 Ice Shadow
  { false, false, false }, // 5/8 Ice
  { false, true, false }, // 5/8 Ice Shadow
  { false, false, false }, // 5/9 Ice
  { false, true, false }, // 5/9 Ice Shadow
  { false, false, false }, // 10/10 Desert1
  { false, false, false }, // 10/12 Desert1
  { false, true, false }, // 10/12 Desert1 Shadow
  { false, false, false }, // 10/8 Desert1
  { false, true, false }, // 10/8 Desert1 Shadow
  { false, false, false }, // 10/9 Desert1
  { false, true, false }, // 10/9 Desert1 Shadow
  { false, false, false }, // 6/10 Desert
  { false, true, false }, // 6/10 Desert Shadow
  { false, false, false }, // 6/13 Desert1
  { false, true, false }, // 6/13 Desert1 Shadow
  { false, false, false }, // Unknown Desert
  { false, true, false }, // Unknown Desert Shadow
  { false, false, false }, // 10/12 Desert2
  { false, true, false }, // 10/12 Desert2 Shadow
  { false, false, false }, // 10/9 Desert2
  { false, true, false }, // 10/9 Desert2 Shadow
  { false, false, false }, // 10/10 Desert2
  { false, true, false }, // 10/10 Desert2 Shadow
  { false, false, false }, // 10/11 Desert
  { false, true, false }, // 10/11 Desert Shadow
  { false, false, false }, // 10/14 Desert
  { false, true, false }, // 10/14 Desert Shadow
  { false, false, false }, // 10/41 Desert
  { false, true, false }, // 10/41 Desert Shadow
  { false, false, false }, // 10/39 Desert
  { false, true, false }, // 1/39 Desert Shadow
  { false, false, false }, // 10/8 Desert2
  { false, true, false }, // 10/8 Desert2 Shadow
  { false, false, false }, // 10/6 Desert
  { false, false, false }, // 10/7 Desert
  { false, true, false }, // 10/7 Desert Shadow
  { false, false, false }, // 4/6 Desert
  { false, true, false }, // 4/6 Desert Shadow
  { false, false, false }, // 4/11 Desert
  { false, true, false }, // 4/11 Desert Shadow
  { false, false, false }, // 4/10 Desert
  { false, true, false }, // 4/10 Desert Shadow
  { false, false, false }, // 4/9 Desert
  { false, false, false }, // 4/7 Desert
  { false, true, false }, // 4/7 Desert Shadow
  { false, false, false }, // 4/12 Desert
  { false, true, false }, // 4/12 Desert Shadow
  { false, false, false }, // 4/8 Desert
  { false, false, false }, // 4/13 Desert
  { false, true, false }, // 4/13 Desert Shadow
  { false, false, false }, // 4/17 Desert
  { false, false, false }, // 4/15 Desert1
  { false, true, false }, // 4/15 Desert1 Shadow
  { false, false, false }, // 10/23 Desert
  { false, true, false }, // 10/23 Desert Shadow
  { false, false, false }, // 10/5 Desert
  { false, true, false }, // 10/5 Desert Shadow
  { false, false, false }, // 6/13 Desert2
  { false, true, false }, // 6/13 Desert2 Shadow
  { false, false, false }, // 6/20 Desert
  { false, false, false }, // 4/15 Desert2
  { false, true, false }, // 4/15 Desert2 Shadow
  { false, false, false }, // 8/23 Desert
  { false, true, false }, // 8/23 Desert Shadow
  { false, false, false }, // 12/1 Desert Overlay
  { false, false, false }, // 11/3 Desert
  { false, false, false }, // Unknown913
  { false, false, false }, // Lurker Egg
  { false, false, true }, // Devourer
  { false, true, true }, // Devourer Shadow
  { false, false, false }, // Devourer Birth
  { false, false, false }, // Devourer Death
  { false, false, false }, // Lurker Birth
  { false, false, false }, // Lurker Remnants
  { false, false, true }, // Lurker
  { false, true, true }, // Lurker Shadow
  { false, false, false }, // Overmind Cocoon
  { false, true, false }, // Overmind Cocoon Shadow
  { true, false, false }, // Dark Archon Energy
  { true, false, true }, // Dark Archon Being
  { true, false, false }, // Dark Archon Swirl
  { true, false, false }, // Dark Archon Death
  { false, false, true }, // Corsair
  { false, true, true }, // Corsair Shadow
  { true, false, true }, // Corsair Engines
  {}, // Neutron Flare Overlay (Unused)
  { false, false, true }, // Dark Templar (Unit)
  { false, false, false }, // Warp Gate
  { false, true, false }, // Warp Gate Shadow
  { true, false, false }, // Warp Gate Overlay
  { false, false, false }, // Xel'Naga Temple
  { false, true, false }, // Xel'Naga Temple Shadow
  { false, false, true }, // Valkyrie
  { false, true, true }, // Valkyrie Shadow
  { true, false, true }, // Valkyrie Engines
  {}, // Valkyrie Engines2 (Unused)
  {}, // Valkyrie Afterburners (Unused)
  { false, false, true }, // Medic
  { false, true, true }, // Medic Shadow
  { false, false, false }, // Medic Remnants
  { false, false, false }, // Psi Disrupter
  { false, true, false }, // Psi Disrupter Shadow
  { false, false, false }, // Power Generator
  { false, true, false }, // Power Generator Shadow
  { true, false, false }, // Disruption Web
  { false, false, true }, // Scantid (Desert)
  { false, true, true }, // Scantid (Desert) Shadow
  { false, false, true }, // Kakaru (Twilight)
  { false, true, true }, // Kakaru (Twilight) Shadow
  { false, false, true }, // Ursadon (Ice)
  { false, true, true }, // Ursadon (Ice) Shadow
  { false, false, false }, // Uraj
  { false, false, false }, // Khalis
  { true, false, false }, // Halo Rockets Trail
  { false, false, false }, // Subterranean Spines
  { false, false, true }, // Corrosive Acid Shot
  { false, false, false }, // Corrosive Acid Hit
  { true, false, false }, // Neutron Flare
  { false, false, true }, // Halo Rockets
  { false, false, false }, // Optical Flare Grenade
  { true, false, false }, // Restoration Hit (Small)
  { true, false, false }, // Restoration Hit (Medium)
  { true, false, false }, // Restoration Hit (Large)
  {}, // Unused Heal (Small)
  {}, // Unused Heal (Medium)
  {}, // Unused Heal (Large)
  { true, false, false }, // Mind Control Hit (Small)
  { true, false, false }, // Mind Control Hit (Medium)
  { true, false, false }, // Mind Control Hit (Large)
  { true, false, false }, // Optical Flare Hit (Small)
  { true, false, false }, // Optical Flare Hit (Medium)
  { true, false, false }, // Optical Flare Hit (Large)
  { true, false, false }, // Feedback (Small)
  { true, false, false }, // Feedback (Medium)
  { true, false, false }, // Feedback Hit (Large)
  { true, false, false }, // Maelstorm Overlay (Small)
  { true, false, false }, // Maelstorm Overlay (Medium)
  { true, false, false }, // Maelstorm Overlay (Large)
  { false, false, false }, // Subterranean Spines Hit
  { false, false, false }, // Acid Spores (1) Overlay (Small)
  { false, false, false }, // Acid Spores (2-3) Overlay (Small)
  { false, false, false }, // Acid Spores (4-5) Overlay (Small)
  { false, false, false }, // Acid Spores (6-9) Overlay (Small)
  { false, false, false }, // Acid Spores (1) Overlay (Medium)
  { false, false, false }, // Acid Spores (2-3) Overlay (Medium)
  { false, false, false }, // Acid Spores (4-5) Overlay (Medium)
  { false, false, false }, // Acid Spores (6-9) Overlay (Medium)
  { false, false, false }, // Acid Spores (1) Overlay (Large)
  { false, false, false }, // Acid Spores (2-3) Overlay (Large)
  { false, false, false }, // Acid Spores (4-5) Overlay (Large)
  { false, false, false }, // Acid Spores (6-9) Overlay (Large)
  { true, false, false } // Maelstorm Hit
};

