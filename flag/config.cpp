class CfgPatches
{
	class SHD_Mod_West
	{
		units[] = {"SHD_FlagCarrierEU"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {};
	};
};
class CfgFactionClasses
{
	class SHD_Flag
	{
		icon = "\SHD_Mod\flag\data\shd_pinup_512x256.paa";
		displayName = "Fahne (SHD)";
		priority = 5;
		side = 1;
	};
};
class CfgVehicles
{
	class SHD_FlagCarrierEU;
	class SHD_Flag: SHD_FlagCarrierEU
	{
		scope = 2;
		accuarcy = 1000;
		displayName = "Fahne (SHD)";
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""SHD_Mod\flag\data\shd_pinup_512x256.paa""";
		};
	};
};
