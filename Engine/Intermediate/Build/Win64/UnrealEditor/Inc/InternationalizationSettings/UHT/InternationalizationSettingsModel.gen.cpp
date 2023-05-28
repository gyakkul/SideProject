// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InternationalizationSettingsModel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInternationalizationSettingsModel() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERNATIONALIZATIONSETTINGS_API UClass* Z_Construct_UClass_UInternationalizationSettingsModel();
	INTERNATIONALIZATIONSETTINGS_API UClass* Z_Construct_UClass_UInternationalizationSettingsModel_NoRegister();
	INTERNATIONALIZATIONSETTINGS_API UEnum* Z_Construct_UEnum_InternationalizationSettings_ETimezoneSetting();
	UPackage* Z_Construct_UPackage__Script_InternationalizationSettings();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETimezoneSetting;
	static UEnum* ETimezoneSetting_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETimezoneSetting.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETimezoneSetting.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InternationalizationSettings_ETimezoneSetting, (UObject*)Z_Construct_UPackage__Script_InternationalizationSettings(), TEXT("ETimezoneSetting"));
		}
		return Z_Registration_Info_UEnum_ETimezoneSetting.OuterSingleton;
	}
	template<> INTERNATIONALIZATIONSETTINGS_API UEnum* StaticEnum<ETimezoneSetting>()
	{
		return ETimezoneSetting_StaticEnum();
	}
	struct Z_Construct_UEnum_InternationalizationSettings_ETimezoneSetting_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InternationalizationSettings_ETimezoneSetting_Statics::Enumerators[] = {
		{ "ETimezoneSetting::InternationalDateLineWest", (int64)ETimezoneSetting::InternationalDateLineWest },
		{ "ETimezoneSetting::CoordinatedUniversalTimeNeg11", (int64)ETimezoneSetting::CoordinatedUniversalTimeNeg11 },
		{ "ETimezoneSetting::Samoa", (int64)ETimezoneSetting::Samoa },
		{ "ETimezoneSetting::Hawaii", (int64)ETimezoneSetting::Hawaii },
		{ "ETimezoneSetting::Alaska", (int64)ETimezoneSetting::Alaska },
		{ "ETimezoneSetting::PacificTime_USCAN", (int64)ETimezoneSetting::PacificTime_USCAN },
		{ "ETimezoneSetting::BajaCalifornia", (int64)ETimezoneSetting::BajaCalifornia },
		{ "ETimezoneSetting::MountainTime_USCAN", (int64)ETimezoneSetting::MountainTime_USCAN },
		{ "ETimezoneSetting::Chihuahua_LaPaz_Mazatlan", (int64)ETimezoneSetting::Chihuahua_LaPaz_Mazatlan },
		{ "ETimezoneSetting::Arizona", (int64)ETimezoneSetting::Arizona },
		{ "ETimezoneSetting::Saskatchewan", (int64)ETimezoneSetting::Saskatchewan },
		{ "ETimezoneSetting::CentralAmerica", (int64)ETimezoneSetting::CentralAmerica },
		{ "ETimezoneSetting::CentralTime_USCAN", (int64)ETimezoneSetting::CentralTime_USCAN },
		{ "ETimezoneSetting::Guadalajara_MexicoCity_Monterrey", (int64)ETimezoneSetting::Guadalajara_MexicoCity_Monterrey },
		{ "ETimezoneSetting::EasternTime_USCAN", (int64)ETimezoneSetting::EasternTime_USCAN },
		{ "ETimezoneSetting::Bogota_Lima_Quito", (int64)ETimezoneSetting::Bogota_Lima_Quito },
		{ "ETimezoneSetting::Indiana_US", (int64)ETimezoneSetting::Indiana_US },
		{ "ETimezoneSetting::Caracas", (int64)ETimezoneSetting::Caracas },
		{ "ETimezoneSetting::AtlanticTime_Canada", (int64)ETimezoneSetting::AtlanticTime_Canada },
		{ "ETimezoneSetting::Cuiaba", (int64)ETimezoneSetting::Cuiaba },
		{ "ETimezoneSetting::Santiago", (int64)ETimezoneSetting::Santiago },
		{ "ETimezoneSetting::Georgetown_LaPaz_Manaus_SanJuan", (int64)ETimezoneSetting::Georgetown_LaPaz_Manaus_SanJuan },
		{ "ETimezoneSetting::Asuncion", (int64)ETimezoneSetting::Asuncion },
		{ "ETimezoneSetting::Newfoundland", (int64)ETimezoneSetting::Newfoundland },
		{ "ETimezoneSetting::Brasilia", (int64)ETimezoneSetting::Brasilia },
		{ "ETimezoneSetting::Greenland", (int64)ETimezoneSetting::Greenland },
		{ "ETimezoneSetting::Montevideo", (int64)ETimezoneSetting::Montevideo },
		{ "ETimezoneSetting::Cayenne_Fortaleza", (int64)ETimezoneSetting::Cayenne_Fortaleza },
		{ "ETimezoneSetting::BuenosAires", (int64)ETimezoneSetting::BuenosAires },
		{ "ETimezoneSetting::MidAtlantic", (int64)ETimezoneSetting::MidAtlantic },
		{ "ETimezoneSetting::CoordinatedUniversalTimeNeg02", (int64)ETimezoneSetting::CoordinatedUniversalTimeNeg02 },
		{ "ETimezoneSetting::Azores", (int64)ETimezoneSetting::Azores },
		{ "ETimezoneSetting::CaboVerdeIs", (int64)ETimezoneSetting::CaboVerdeIs },
		{ "ETimezoneSetting::Dublin_Edinburgh_Lisbon_London", (int64)ETimezoneSetting::Dublin_Edinburgh_Lisbon_London },
		{ "ETimezoneSetting::Monrovia_Reykjavik", (int64)ETimezoneSetting::Monrovia_Reykjavik },
		{ "ETimezoneSetting::Casablanca", (int64)ETimezoneSetting::Casablanca },
		{ "ETimezoneSetting::UTC", (int64)ETimezoneSetting::UTC },
		{ "ETimezoneSetting::Belgrade_Bratislava_Budapest_Ljubljana_Prague", (int64)ETimezoneSetting::Belgrade_Bratislava_Budapest_Ljubljana_Prague },
		{ "ETimezoneSetting::Sarajevo_Skopje_Warsaw_Zagreb", (int64)ETimezoneSetting::Sarajevo_Skopje_Warsaw_Zagreb },
		{ "ETimezoneSetting::Brussels_Copenhagen_Madrid_Paris", (int64)ETimezoneSetting::Brussels_Copenhagen_Madrid_Paris },
		{ "ETimezoneSetting::WestCentralAfrica", (int64)ETimezoneSetting::WestCentralAfrica },
		{ "ETimezoneSetting::Amsterdam_Berlin_Bern_Rome_Stockholm_Vienna", (int64)ETimezoneSetting::Amsterdam_Berlin_Bern_Rome_Stockholm_Vienna },
		{ "ETimezoneSetting::Windhoek", (int64)ETimezoneSetting::Windhoek },
		{ "ETimezoneSetting::Minsk", (int64)ETimezoneSetting::Minsk },
		{ "ETimezoneSetting::Cairo", (int64)ETimezoneSetting::Cairo },
		{ "ETimezoneSetting::Helsinki_Kyiv_Riga_Sofia_Tallinn_Vilnius", (int64)ETimezoneSetting::Helsinki_Kyiv_Riga_Sofia_Tallinn_Vilnius },
		{ "ETimezoneSetting::Athens_Bucharest", (int64)ETimezoneSetting::Athens_Bucharest },
		{ "ETimezoneSetting::Jerusalem", (int64)ETimezoneSetting::Jerusalem },
		{ "ETimezoneSetting::Amman", (int64)ETimezoneSetting::Amman },
		{ "ETimezoneSetting::Beirut", (int64)ETimezoneSetting::Beirut },
		{ "ETimezoneSetting::Harare_Pretoria", (int64)ETimezoneSetting::Harare_Pretoria },
		{ "ETimezoneSetting::Damascus", (int64)ETimezoneSetting::Damascus },
		{ "ETimezoneSetting::Istanbul", (int64)ETimezoneSetting::Istanbul },
		{ "ETimezoneSetting::Kuwait_Riyadh", (int64)ETimezoneSetting::Kuwait_Riyadh },
		{ "ETimezoneSetting::Baghdad", (int64)ETimezoneSetting::Baghdad },
		{ "ETimezoneSetting::Nairobi", (int64)ETimezoneSetting::Nairobi },
		{ "ETimezoneSetting::Kaliningrad", (int64)ETimezoneSetting::Kaliningrad },
		{ "ETimezoneSetting::Tehran", (int64)ETimezoneSetting::Tehran },
		{ "ETimezoneSetting::Moscow_StPetersburg_Volgograd", (int64)ETimezoneSetting::Moscow_StPetersburg_Volgograd },
		{ "ETimezoneSetting::AbuDhabi_Muscat", (int64)ETimezoneSetting::AbuDhabi_Muscat },
		{ "ETimezoneSetting::Baku", (int64)ETimezoneSetting::Baku },
		{ "ETimezoneSetting::Yerevan", (int64)ETimezoneSetting::Yerevan },
		{ "ETimezoneSetting::Tbilisi", (int64)ETimezoneSetting::Tbilisi },
		{ "ETimezoneSetting::PortLouis", (int64)ETimezoneSetting::PortLouis },
		{ "ETimezoneSetting::Kabul", (int64)ETimezoneSetting::Kabul },
		{ "ETimezoneSetting::Tashkent", (int64)ETimezoneSetting::Tashkent },
		{ "ETimezoneSetting::Islamabad_Karachi", (int64)ETimezoneSetting::Islamabad_Karachi },
		{ "ETimezoneSetting::Chennai_Kolkata_Mumbai_NewDelhi", (int64)ETimezoneSetting::Chennai_Kolkata_Mumbai_NewDelhi },
		{ "ETimezoneSetting::SriJayawardenepura", (int64)ETimezoneSetting::SriJayawardenepura },
		{ "ETimezoneSetting::Kathmandu", (int64)ETimezoneSetting::Kathmandu },
		{ "ETimezoneSetting::Ekaterinburg", (int64)ETimezoneSetting::Ekaterinburg },
		{ "ETimezoneSetting::Astana", (int64)ETimezoneSetting::Astana },
		{ "ETimezoneSetting::Dhaka", (int64)ETimezoneSetting::Dhaka },
		{ "ETimezoneSetting::Yangon_Rangoon", (int64)ETimezoneSetting::Yangon_Rangoon },
		{ "ETimezoneSetting::Novosibirsk", (int64)ETimezoneSetting::Novosibirsk },
		{ "ETimezoneSetting::Bangkok_Hanoi_Jakarta", (int64)ETimezoneSetting::Bangkok_Hanoi_Jakarta },
		{ "ETimezoneSetting::Krasnoyarsk", (int64)ETimezoneSetting::Krasnoyarsk },
		{ "ETimezoneSetting::Beijing_Chongqing_HongKong_Urumqi", (int64)ETimezoneSetting::Beijing_Chongqing_HongKong_Urumqi },
		{ "ETimezoneSetting::KualaLumpur_Singapore", (int64)ETimezoneSetting::KualaLumpur_Singapore },
		{ "ETimezoneSetting::Taipei", (int64)ETimezoneSetting::Taipei },
		{ "ETimezoneSetting::Perth", (int64)ETimezoneSetting::Perth },
		{ "ETimezoneSetting::Ulaanbaatar", (int64)ETimezoneSetting::Ulaanbaatar },
		{ "ETimezoneSetting::Irkutsk", (int64)ETimezoneSetting::Irkutsk },
		{ "ETimezoneSetting::Seoul", (int64)ETimezoneSetting::Seoul },
		{ "ETimezoneSetting::Osaka_Sapporo_Tokyo", (int64)ETimezoneSetting::Osaka_Sapporo_Tokyo },
		{ "ETimezoneSetting::Darwin", (int64)ETimezoneSetting::Darwin },
		{ "ETimezoneSetting::Adelaide", (int64)ETimezoneSetting::Adelaide },
		{ "ETimezoneSetting::Yakutsk", (int64)ETimezoneSetting::Yakutsk },
		{ "ETimezoneSetting::Canberra_Melbourne_Sydney", (int64)ETimezoneSetting::Canberra_Melbourne_Sydney },
		{ "ETimezoneSetting::Brisbane", (int64)ETimezoneSetting::Brisbane },
		{ "ETimezoneSetting::Hobart", (int64)ETimezoneSetting::Hobart },
		{ "ETimezoneSetting::Guam_PortMoresby", (int64)ETimezoneSetting::Guam_PortMoresby },
		{ "ETimezoneSetting::Vladivostok", (int64)ETimezoneSetting::Vladivostok },
		{ "ETimezoneSetting::SolomonIs_NewCaledonia", (int64)ETimezoneSetting::SolomonIs_NewCaledonia },
		{ "ETimezoneSetting::Magadan", (int64)ETimezoneSetting::Magadan },
		{ "ETimezoneSetting::Fiji", (int64)ETimezoneSetting::Fiji },
		{ "ETimezoneSetting::Auckland_Wellington", (int64)ETimezoneSetting::Auckland_Wellington },
		{ "ETimezoneSetting::CoordinatedUniversalTime12", (int64)ETimezoneSetting::CoordinatedUniversalTime12 },
		{ "ETimezoneSetting::Nukualofa", (int64)ETimezoneSetting::Nukualofa },
		{ "ETimezoneSetting::LocalTime", (int64)ETimezoneSetting::LocalTime },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InternationalizationSettings_ETimezoneSetting_Statics::Enum_MetaDataParams[] = {
		{ "AbuDhabi_Muscat.DisplayName", "(UTC+04:00) Abu Dhabi, Muscat" },
		{ "AbuDhabi_Muscat.Name", "ETimezoneSetting::AbuDhabi_Muscat" },
		{ "Adelaide.DisplayName", "(UTC+09:30) Adelaide" },
		{ "Adelaide.Name", "ETimezoneSetting::Adelaide" },
		{ "Alaska.DisplayName", "(UTC-09:00) Alaska" },
		{ "Alaska.Name", "ETimezoneSetting::Alaska" },
		{ "Amman.DisplayName", "(UTC+02:00) Amman" },
		{ "Amman.Name", "ETimezoneSetting::Amman" },
		{ "Amsterdam_Berlin_Bern_Rome_Stockholm_Vienna.DisplayName", "(UTC+01:00) Amsterdam, Berlin, Bern, Rome, Stockholm, Vienna" },
		{ "Amsterdam_Berlin_Bern_Rome_Stockholm_Vienna.Name", "ETimezoneSetting::Amsterdam_Berlin_Bern_Rome_Stockholm_Vienna" },
		{ "Arizona.DisplayName", "(UTC-07:00) Arizona" },
		{ "Arizona.Name", "ETimezoneSetting::Arizona" },
		{ "Astana.DisplayName", "(UTC+06:00) Astana" },
		{ "Astana.Name", "ETimezoneSetting::Astana" },
		{ "Asuncion.DisplayName", "(UTC-04:00) Asuncion" },
		{ "Asuncion.Name", "ETimezoneSetting::Asuncion" },
		{ "Athens_Bucharest.DisplayName", "(UTC+02:00) Athens, Bucharest" },
		{ "Athens_Bucharest.Name", "ETimezoneSetting::Athens_Bucharest" },
		{ "AtlanticTime_Canada.DisplayName", "(UTC-04:00) Atlantic Time (Canada)" },
		{ "AtlanticTime_Canada.Name", "ETimezoneSetting::AtlanticTime_Canada" },
		{ "Auckland_Wellington.DisplayName", "(UTC+12:00) Auckland, Wellington" },
		{ "Auckland_Wellington.Name", "ETimezoneSetting::Auckland_Wellington" },
		{ "Azores.DisplayName", "(UTC-01:00) Azores" },
		{ "Azores.Name", "ETimezoneSetting::Azores" },
		{ "Baghdad.DisplayName", "(UTC+03:00) Baghdad" },
		{ "Baghdad.Name", "ETimezoneSetting::Baghdad" },
		{ "BajaCalifornia.DisplayName", "(UTC-08:00) Baja California" },
		{ "BajaCalifornia.Name", "ETimezoneSetting::BajaCalifornia" },
		{ "Baku.DisplayName", "(UTC+04:00) Baku" },
		{ "Baku.Name", "ETimezoneSetting::Baku" },
		{ "Bangkok_Hanoi_Jakarta.DisplayName", "(UTC+07:00) Bangkok, Hanoi, Jakarta" },
		{ "Bangkok_Hanoi_Jakarta.Name", "ETimezoneSetting::Bangkok_Hanoi_Jakarta" },
		{ "Beijing_Chongqing_HongKong_Urumqi.DisplayName", "(UTC+08:00) Beijing, Chongqing, Hong Kong, Urumqi" },
		{ "Beijing_Chongqing_HongKong_Urumqi.Name", "ETimezoneSetting::Beijing_Chongqing_HongKong_Urumqi" },
		{ "Beirut.DisplayName", "(UTC+02:00) Beirut" },
		{ "Beirut.Name", "ETimezoneSetting::Beirut" },
		{ "Belgrade_Bratislava_Budapest_Ljubljana_Prague.DisplayName", "(UTC+01:00) Belgrade, Bratislava, Budapest, Ljubljana, Prague" },
		{ "Belgrade_Bratislava_Budapest_Ljubljana_Prague.Name", "ETimezoneSetting::Belgrade_Bratislava_Budapest_Ljubljana_Prague" },
		{ "Bogota_Lima_Quito.DisplayName", "(UTC-05:00) Bogota, Lima, Quito" },
		{ "Bogota_Lima_Quito.Name", "ETimezoneSetting::Bogota_Lima_Quito" },
		{ "Brasilia.DisplayName", "(UTC-03:00) Brasilia" },
		{ "Brasilia.Name", "ETimezoneSetting::Brasilia" },
		{ "Brisbane.DisplayName", "(UTC+10:00) Brisbane" },
		{ "Brisbane.Name", "ETimezoneSetting::Brisbane" },
		{ "Brussels_Copenhagen_Madrid_Paris.DisplayName", "(UTC+01:00) Brussels, Copenhagen, Madrid, Paris" },
		{ "Brussels_Copenhagen_Madrid_Paris.Name", "ETimezoneSetting::Brussels_Copenhagen_Madrid_Paris" },
		{ "BuenosAires.DisplayName", "(UTC-03:00) Buenos Aires" },
		{ "BuenosAires.Name", "ETimezoneSetting::BuenosAires" },
		{ "CaboVerdeIs.DisplayName", "(UTC-01:00) Cabo Verde Is." },
		{ "CaboVerdeIs.Name", "ETimezoneSetting::CaboVerdeIs" },
		{ "Cairo.DisplayName", "(UTC+02:00) Cairo" },
		{ "Cairo.Name", "ETimezoneSetting::Cairo" },
		{ "Canberra_Melbourne_Sydney.DisplayName", "(UTC+10:00) Canberra, Melbourne, Sydney" },
		{ "Canberra_Melbourne_Sydney.Name", "ETimezoneSetting::Canberra_Melbourne_Sydney" },
		{ "Caracas.DisplayName", "(UTC-04:30) Caracas" },
		{ "Caracas.Name", "ETimezoneSetting::Caracas" },
		{ "Casablanca.DisplayName", "(UTC) Casablanca" },
		{ "Casablanca.Name", "ETimezoneSetting::Casablanca" },
		{ "Cayenne_Fortaleza.DisplayName", "(UTC-03:00) Cayenne, Fortaleza" },
		{ "Cayenne_Fortaleza.Name", "ETimezoneSetting::Cayenne_Fortaleza" },
		{ "CentralAmerica.DisplayName", "(UTC-06:00) Central America" },
		{ "CentralAmerica.Name", "ETimezoneSetting::CentralAmerica" },
		{ "CentralTime_USCAN.DisplayName", "(UTC-06:00) Central Time (US and Canada)" },
		{ "CentralTime_USCAN.Name", "ETimezoneSetting::CentralTime_USCAN" },
		{ "Chennai_Kolkata_Mumbai_NewDelhi.DisplayName", "(UTC+05:30) Chennai, Kolkata, Mumbai, New Delhi" },
		{ "Chennai_Kolkata_Mumbai_NewDelhi.Name", "ETimezoneSetting::Chennai_Kolkata_Mumbai_NewDelhi" },
		{ "Chihuahua_LaPaz_Mazatlan.DisplayName", "(UTC-07:00) Chihuahua, La Paz, Mazatlan" },
		{ "Chihuahua_LaPaz_Mazatlan.Name", "ETimezoneSetting::Chihuahua_LaPaz_Mazatlan" },
		{ "CoordinatedUniversalTime12.DisplayName", "(UTC+12:00) Coordinated Universal Time +12" },
		{ "CoordinatedUniversalTime12.Name", "ETimezoneSetting::CoordinatedUniversalTime12" },
		{ "CoordinatedUniversalTimeNeg02.DisplayName", "(UTC-02:00) Coordinated Universal Time -02" },
		{ "CoordinatedUniversalTimeNeg02.Name", "ETimezoneSetting::CoordinatedUniversalTimeNeg02" },
		{ "CoordinatedUniversalTimeNeg11.DisplayName", "(UTC-11:00) Coordinated Universal Time -11" },
		{ "CoordinatedUniversalTimeNeg11.Name", "ETimezoneSetting::CoordinatedUniversalTimeNeg11" },
		{ "Cuiaba.DisplayName", "(UTC-04:00) Cuiaba" },
		{ "Cuiaba.Name", "ETimezoneSetting::Cuiaba" },
		{ "Damascus.DisplayName", "(UTC+02:00) Damascus" },
		{ "Damascus.Name", "ETimezoneSetting::Damascus" },
		{ "Darwin.DisplayName", "(UTC+09:30) Darwin" },
		{ "Darwin.Name", "ETimezoneSetting::Darwin" },
		{ "Dhaka.DisplayName", "(UTC+06:00) Dhaka" },
		{ "Dhaka.Name", "ETimezoneSetting::Dhaka" },
		{ "Dublin_Edinburgh_Lisbon_London.DisplayName", "(UTC) Dublin, Edinburgh, Lisbon, London" },
		{ "Dublin_Edinburgh_Lisbon_London.Name", "ETimezoneSetting::Dublin_Edinburgh_Lisbon_London" },
		{ "EasternTime_USCAN.DisplayName", "(UTC-05:00) Eastern Time (US and Canada)" },
		{ "EasternTime_USCAN.Name", "ETimezoneSetting::EasternTime_USCAN" },
		{ "Ekaterinburg.DisplayName", "(UTC+06:00) Ekaterinburg" },
		{ "Ekaterinburg.Name", "ETimezoneSetting::Ekaterinburg" },
		{ "Fiji.DisplayName", "(UTC+12:00) Fiji" },
		{ "Fiji.Name", "ETimezoneSetting::Fiji" },
		{ "Georgetown_LaPaz_Manaus_SanJuan.DisplayName", "(UTC-04:00) Georgetown, La Paz, Manaus, San Juan" },
		{ "Georgetown_LaPaz_Manaus_SanJuan.Name", "ETimezoneSetting::Georgetown_LaPaz_Manaus_SanJuan" },
		{ "Greenland.DisplayName", "(UTC-03:00) Greenland" },
		{ "Greenland.Name", "ETimezoneSetting::Greenland" },
		{ "Guadalajara_MexicoCity_Monterrey.DisplayName", "(UTC-06:00) Guadalajara, Mexico City, Monterrey" },
		{ "Guadalajara_MexicoCity_Monterrey.Name", "ETimezoneSetting::Guadalajara_MexicoCity_Monterrey" },
		{ "Guam_PortMoresby.DisplayName", "(UTC+10:00) Guam, Port Moresby" },
		{ "Guam_PortMoresby.Name", "ETimezoneSetting::Guam_PortMoresby" },
		{ "Harare_Pretoria.DisplayName", "(UTC+02:00) Harare, Pretoria" },
		{ "Harare_Pretoria.Name", "ETimezoneSetting::Harare_Pretoria" },
		{ "Hawaii.DisplayName", "(UTC-10:00) Hawaii" },
		{ "Hawaii.Name", "ETimezoneSetting::Hawaii" },
		{ "Helsinki_Kyiv_Riga_Sofia_Tallinn_Vilnius.DisplayName", "(UTC+02:00) Helsinki, Kyiv, Riga, Sofia, Tallinn, Vilnius" },
		{ "Helsinki_Kyiv_Riga_Sofia_Tallinn_Vilnius.Name", "ETimezoneSetting::Helsinki_Kyiv_Riga_Sofia_Tallinn_Vilnius" },
		{ "Hobart.DisplayName", "(UTC+10:00) Hobart" },
		{ "Hobart.Name", "ETimezoneSetting::Hobart" },
		{ "Indiana_US.DisplayName", "(UTC-05:00) Indiana (East)" },
		{ "Indiana_US.Name", "ETimezoneSetting::Indiana_US" },
		{ "InternationalDateLineWest.DisplayName", "(UTC-12:00) International Date Line West" },
		{ "InternationalDateLineWest.Name", "ETimezoneSetting::InternationalDateLineWest" },
		{ "Irkutsk.DisplayName", "(UTC+09:00) Irkutsk" },
		{ "Irkutsk.Name", "ETimezoneSetting::Irkutsk" },
		{ "Islamabad_Karachi.DisplayName", "(UTC+05:00) Islamabad, Karachi" },
		{ "Islamabad_Karachi.Name", "ETimezoneSetting::Islamabad_Karachi" },
		{ "Istanbul.DisplayName", "(UTC+02:00) Istanbul" },
		{ "Istanbul.Name", "ETimezoneSetting::Istanbul" },
		{ "Jerusalem.DisplayName", "(UTC+02:00) Jerusalem" },
		{ "Jerusalem.Name", "ETimezoneSetting::Jerusalem" },
		{ "Kabul.DisplayName", "(UTC+04:30) Kabul" },
		{ "Kabul.Name", "ETimezoneSetting::Kabul" },
		{ "Kaliningrad.DisplayName", "(UTC+03:00) Kaliningrad" },
		{ "Kaliningrad.Name", "ETimezoneSetting::Kaliningrad" },
		{ "Kathmandu.DisplayName", "(UTC+05:45) Kathmandu" },
		{ "Kathmandu.Name", "ETimezoneSetting::Kathmandu" },
		{ "Krasnoyarsk.DisplayName", "(UTC+08:00) Krasnoyarsk" },
		{ "Krasnoyarsk.Name", "ETimezoneSetting::Krasnoyarsk" },
		{ "KualaLumpur_Singapore.DisplayName", "(UTC+08:00) Kuala Lumpur, Singapore" },
		{ "KualaLumpur_Singapore.Name", "ETimezoneSetting::KualaLumpur_Singapore" },
		{ "Kuwait_Riyadh.DisplayName", "(UTC+03:00) Kuwait, Riyadh" },
		{ "Kuwait_Riyadh.Name", "ETimezoneSetting::Kuwait_Riyadh" },
		{ "LocalTime.Name", "ETimezoneSetting::LocalTime" },
		{ "Magadan.DisplayName", "(UTC+12:00) Magadan" },
		{ "Magadan.Name", "ETimezoneSetting::Magadan" },
		{ "MidAtlantic.DisplayName", "(UTC-02:00) Mid-Atlantic" },
		{ "MidAtlantic.Name", "ETimezoneSetting::MidAtlantic" },
		{ "Minsk.DisplayName", "(UTC+02:00) Minsk" },
		{ "Minsk.Name", "ETimezoneSetting::Minsk" },
		{ "ModuleRelativePath", "Classes/InternationalizationSettingsModel.h" },
		{ "Monrovia_Reykjavik.DisplayName", "(UTC) Monrovia, Reykjavik" },
		{ "Monrovia_Reykjavik.Name", "ETimezoneSetting::Monrovia_Reykjavik" },
		{ "Montevideo.DisplayName", "(UTC-03:00) Montevideo" },
		{ "Montevideo.Name", "ETimezoneSetting::Montevideo" },
		{ "Moscow_StPetersburg_Volgograd.DisplayName", "(UTC+04:00) Moscow, St. Petersburg, Volgograd" },
		{ "Moscow_StPetersburg_Volgograd.Name", "ETimezoneSetting::Moscow_StPetersburg_Volgograd" },
		{ "MountainTime_USCAN.DisplayName", "(UTC-07:00) Mountain Time (US and Canada)" },
		{ "MountainTime_USCAN.Name", "ETimezoneSetting::MountainTime_USCAN" },
		{ "Nairobi.DisplayName", "(UTC+03:00) Nairobi" },
		{ "Nairobi.Name", "ETimezoneSetting::Nairobi" },
		{ "Newfoundland.DisplayName", "(UTC-03:30) Newfoundland" },
		{ "Newfoundland.Name", "ETimezoneSetting::Newfoundland" },
		{ "Novosibirsk.DisplayName", "(UTC+07:00) Novosibirsk" },
		{ "Novosibirsk.Name", "ETimezoneSetting::Novosibirsk" },
		{ "Nukualofa.DisplayName", "(UTC+13:00) Nuku'alofa" },
		{ "Nukualofa.Name", "ETimezoneSetting::Nukualofa" },
		{ "Osaka_Sapporo_Tokyo.DisplayName", "(UTC+09:00) Osaka, Sapporo, Tokyo" },
		{ "Osaka_Sapporo_Tokyo.Name", "ETimezoneSetting::Osaka_Sapporo_Tokyo" },
		{ "PacificTime_USCAN.DisplayName", "(UTC-08:00) Pacific Time (US and Canada)" },
		{ "PacificTime_USCAN.Name", "ETimezoneSetting::PacificTime_USCAN" },
		{ "Perth.DisplayName", "(UTC+08:00) Perth" },
		{ "Perth.Name", "ETimezoneSetting::Perth" },
		{ "PortLouis.DisplayName", "(UTC+04:00) Port Louis" },
		{ "PortLouis.Name", "ETimezoneSetting::PortLouis" },
		{ "Samoa.DisplayName", "(UTC-11:00) Samoa" },
		{ "Samoa.Name", "ETimezoneSetting::Samoa" },
		{ "Santiago.DisplayName", "(UTC-04:00) Santiago" },
		{ "Santiago.Name", "ETimezoneSetting::Santiago" },
		{ "Sarajevo_Skopje_Warsaw_Zagreb.DisplayName", "(UTC+01:00) Sarajevo, Skopje, Warsaw, Zagreb" },
		{ "Sarajevo_Skopje_Warsaw_Zagreb.Name", "ETimezoneSetting::Sarajevo_Skopje_Warsaw_Zagreb" },
		{ "Saskatchewan.DisplayName", "(UTC-06:00) Saskatchewan" },
		{ "Saskatchewan.Name", "ETimezoneSetting::Saskatchewan" },
		{ "Seoul.DisplayName", "(UTC+09:00) Seoul" },
		{ "Seoul.Name", "ETimezoneSetting::Seoul" },
		{ "SolomonIs_NewCaledonia.DisplayName", "(UTC+11:00) Solomon Is., New Caledonia" },
		{ "SolomonIs_NewCaledonia.Name", "ETimezoneSetting::SolomonIs_NewCaledonia" },
		{ "SriJayawardenepura.DisplayName", "(UTC+05:30) Sri Jayawardenepura" },
		{ "SriJayawardenepura.Name", "ETimezoneSetting::SriJayawardenepura" },
		{ "Taipei.DisplayName", "(UTC+08:00) Taipei" },
		{ "Taipei.Name", "ETimezoneSetting::Taipei" },
		{ "Tashkent.DisplayName", "(UTC+05:00) Tashkent" },
		{ "Tashkent.Name", "ETimezoneSetting::Tashkent" },
		{ "Tbilisi.DisplayName", "(UTC+04:00) Tbilisi" },
		{ "Tbilisi.Name", "ETimezoneSetting::Tbilisi" },
		{ "Tehran.DisplayName", "(UTC+03:30) Tehran" },
		{ "Tehran.Name", "ETimezoneSetting::Tehran" },
		{ "Ulaanbaatar.DisplayName", "(UTC+08:00) Ulaanbaatar" },
		{ "Ulaanbaatar.Name", "ETimezoneSetting::Ulaanbaatar" },
		{ "UTC.DisplayName", "(UTC) Coordinated Universal Time" },
		{ "UTC.Name", "ETimezoneSetting::UTC" },
		{ "Vladivostok.DisplayName", "(UTC+11:00) Vladivostok" },
		{ "Vladivostok.Name", "ETimezoneSetting::Vladivostok" },
		{ "WestCentralAfrica.DisplayName", "(UTC+01:00) West Central Africa" },
		{ "WestCentralAfrica.Name", "ETimezoneSetting::WestCentralAfrica" },
		{ "Windhoek.DisplayName", "(UTC+01:00) Windhoek" },
		{ "Windhoek.Name", "ETimezoneSetting::Windhoek" },
		{ "Yakutsk.DisplayName", "(UTC+10:00) Yakutsk" },
		{ "Yakutsk.Name", "ETimezoneSetting::Yakutsk" },
		{ "Yangon_Rangoon.DisplayName", "(UTC+06:30) Yangon (Rangoon)" },
		{ "Yangon_Rangoon.Name", "ETimezoneSetting::Yangon_Rangoon" },
		{ "Yerevan.DisplayName", "(UTC+04:00) Yerevan" },
		{ "Yerevan.Name", "ETimezoneSetting::Yerevan" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InternationalizationSettings_ETimezoneSetting_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InternationalizationSettings,
		nullptr,
		"ETimezoneSetting",
		"ETimezoneSetting",
		Z_Construct_UEnum_InternationalizationSettings_ETimezoneSetting_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InternationalizationSettings_ETimezoneSetting_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InternationalizationSettings_ETimezoneSetting_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InternationalizationSettings_ETimezoneSetting_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InternationalizationSettings_ETimezoneSetting()
	{
		if (!Z_Registration_Info_UEnum_ETimezoneSetting.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETimezoneSetting.InnerSingleton, Z_Construct_UEnum_InternationalizationSettings_ETimezoneSetting_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETimezoneSetting.InnerSingleton;
	}
	void UInternationalizationSettingsModel::StaticRegisterNativesUInternationalizationSettingsModel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInternationalizationSettingsModel);
	UClass* Z_Construct_UClass_UInternationalizationSettingsModel_NoRegister()
	{
		return UInternationalizationSettingsModel::StaticClass();
	}
	struct Z_Construct_UClass_UInternationalizationSettingsModel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DisplayTimezone_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplayTimezone_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DisplayTimezone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInternationalizationSettingsModel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InternationalizationSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternationalizationSettingsModel_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements loading and saving of internationalization settings.\n */" },
		{ "IncludePath", "InternationalizationSettingsModel.h" },
		{ "ModuleRelativePath", "Classes/InternationalizationSettingsModel.h" },
		{ "ToolTip", "Implements loading and saving of internationalization settings." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UInternationalizationSettingsModel_Statics::NewProp_DisplayTimezone_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInternationalizationSettingsModel_Statics::NewProp_DisplayTimezone_MetaData[] = {
		{ "Category", "Time" },
		{ "Comment", "/**\n\x09 * Timezone to use for display purposes in FDateTime\n\x09 */" },
		{ "ModuleRelativePath", "Classes/InternationalizationSettingsModel.h" },
		{ "ToolTip", "Timezone to use for display purposes in FDateTime" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UInternationalizationSettingsModel_Statics::NewProp_DisplayTimezone = { "DisplayTimezone", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInternationalizationSettingsModel, DisplayTimezone), Z_Construct_UEnum_InternationalizationSettings_ETimezoneSetting, METADATA_PARAMS(Z_Construct_UClass_UInternationalizationSettingsModel_Statics::NewProp_DisplayTimezone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInternationalizationSettingsModel_Statics::NewProp_DisplayTimezone_MetaData)) }; // 82691238
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInternationalizationSettingsModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternationalizationSettingsModel_Statics::NewProp_DisplayTimezone_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInternationalizationSettingsModel_Statics::NewProp_DisplayTimezone,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInternationalizationSettingsModel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInternationalizationSettingsModel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInternationalizationSettingsModel_Statics::ClassParams = {
		&UInternationalizationSettingsModel::StaticClass,
		"EditorSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInternationalizationSettingsModel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInternationalizationSettingsModel_Statics::PropPointers),
		0,
		0x001000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInternationalizationSettingsModel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInternationalizationSettingsModel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInternationalizationSettingsModel()
	{
		if (!Z_Registration_Info_UClass_UInternationalizationSettingsModel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInternationalizationSettingsModel.OuterSingleton, Z_Construct_UClass_UInternationalizationSettingsModel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInternationalizationSettingsModel.OuterSingleton;
	}
	template<> INTERNATIONALIZATIONSETTINGS_API UClass* StaticClass<UInternationalizationSettingsModel>()
	{
		return UInternationalizationSettingsModel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInternationalizationSettingsModel);
	UInternationalizationSettingsModel::~UInternationalizationSettingsModel() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_Statics::EnumInfo[] = {
		{ ETimezoneSetting_StaticEnum, TEXT("ETimezoneSetting"), &Z_Registration_Info_UEnum_ETimezoneSetting, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 82691238U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInternationalizationSettingsModel, UInternationalizationSettingsModel::StaticClass, TEXT("UInternationalizationSettingsModel"), &Z_Registration_Info_UClass_UInternationalizationSettingsModel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInternationalizationSettingsModel), 3617911299U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_1036795106(TEXT("/Script/InternationalizationSettings"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_InternationalizationSettings_Classes_InternationalizationSettingsModel_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
