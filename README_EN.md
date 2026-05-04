# WolfHeaddressFix

Mini-mod that fixes a server/client crash when dealing damage to the `Headdress_Wolf` (Wolf Headdress) headgear.
https://feedback.bistudio.com/T199068

## Acknowledgments

Thanks to the entire OMDM team for their effort and patience in finding and assisting in the search for the issue, and for helping test this solution.

## The Bug

In DayZ's vanilla `config.cpp` (`DZ\characters\headgear\config.cpp`), the `Headdress_Wolf > DamageSystem > healthLevels` class at level **0.7** references the rvmat with **double backslashes**:

```
"DZ\characters\headgear\data\\wolfheaddress_fur_alpha_reversed.rvmat"
                            ^^
```

When the item reaches this health level (typical after a headshot that doesn't kill), the engine cannot resolve the path in the PBO, returns NULL, and dereferences the pointer causing an access violation. The damage is replicated via CDP to all clients viewing the wounded player, causing all of them to crash together.

## The Fix

This mod redefines `Headdress_Wolf > DamageSystem` with the correct path at all health levels.

## Verification

1. Reproduce the scenario: 3 players in the same session, one wearing Headdress_Wolf, another shoots in the head.
2. Without the fix: all 3 crash (access violation in DayZ_x64.exe).
3. With the fix: no crash.

