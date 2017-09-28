class CfgVehicles
{
	class SHD_FlagCarrierEU;
	class SHD_Flag: SHD_FlagCarrierEU
	{
		scope = 2;
		accuarcy = 1000;
		displayName = STR_SHD_flag_DisplayName;
		class EventHandlers
		{
			init = "(_this select 0) setFlagTexture ""SHD_Mod\flag\data\shd_pinup_512x256.paa""";
		};
	};
};
