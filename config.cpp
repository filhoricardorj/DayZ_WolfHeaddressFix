class CfgPatches
{
    class WolfHeaddressFix
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = { "DZ_Characters_Headgear" };
    };
};

class CfgMods
{
    class WolfHeaddressFix
    {
        dir = "WolfHeaddressFix";
        name = "Wolf Headdress Crash Fix";
        credits = "Time OMDM";
        author = "Time OMDM";
        version = "1.0.0";
        type = "mod";
        dependencies[] = { "Game", "World", "Mission" };
    };
};

class CfgVehicles
{
    class Headdress_Colorbase;

    class Headdress_Wolf: Headdress_Colorbase
    {
        class DamageSystem
        {
            class GlobalHealth
            {
                class Health
                {
                    hitpoints = 200;
                    healthLevels[] =
                    {
                        {
                            1,
                            {
                                "DZ\characters\headgear\data\wolfheaddress.rvmat",
                                "DZ\characters\headgear\data\wolfheaddress_fur_alpha.rvmat",
                                "DZ\characters\headgear\data\wolfheaddress_fur_alpha_reversed.rvmat"
                            }
                        },
                        {
                            0.69999999,
                            {
                                "DZ\characters\headgear\data\wolfheaddress.rvmat",
                                "DZ\characters\headgear\data\wolfheaddress_fur_alpha.rvmat",
                                "DZ\characters\headgear\data\wolfheaddress_fur_alpha_reversed.rvmat"
                            }
                        },
                        {
                            0.5,
                            {
                                "DZ\characters\headgear\data\wolfheaddress_damage.rvmat",
                                "DZ\characters\headgear\data\wolfheaddress_fur_alpha_damage.rvmat",
                                "DZ\characters\headgear\data\wolfheaddress_fur_alpha_reversed_damage.rvmat"
                            }
                        },
                        {
                            0.30000001,
                            {
                                "DZ\characters\headgear\data\wolfheaddress_damage.rvmat",
                                "DZ\characters\headgear\data\wolfheaddress_fur_alpha_damage.rvmat",
                                "DZ\characters\headgear\data\wolfheaddress_fur_alpha_reversed_damage.rvmat"
                            }
                        },
                        {
                            0,
                            {
                                "DZ\characters\headgear\data\wolfheaddress_destruct.rvmat",
                                "DZ\characters\headgear\data\wolfheaddress_fur_alpha_destruct.rvmat",
                                "DZ\characters\headgear\data\wolfheaddress_fur_alpha_reversed_destruct.rvmat"
                            }
                        }
                    };
                };
            };
            class GlobalArmor
            {
                class Projectile
                {
                    class Health    { damage = 0.89999998; };
                    class Blood     { damage = 0; };
                    class Shock     { damage = 0.89999998; };
                };
                class Melee
                {
                    class Health    { damage = 0.64999998; };
                    class Blood     { damage = 0.80000001; };
                    class Shock     { damage = 0.85000002; };
                };
                class Infected
                {
                    class Health    { damage = 0.64999998; };
                    class Blood     { damage = 0.80000001; };
                    class Shock     { damage = 0.85000002; };
                };
                class FragGrenade
                {
                    class Health    { damage = 0.5; };
                    class Blood     { damage = 0; };
                    class Shock     { damage = 0.5; };
                };
            };
        };
    };
};
