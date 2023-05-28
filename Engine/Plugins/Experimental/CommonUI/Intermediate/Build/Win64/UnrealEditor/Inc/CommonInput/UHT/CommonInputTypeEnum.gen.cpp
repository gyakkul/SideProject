// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CommonInputTypeEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommonInputTypeEnum() {}
// Cross Module References
	COMMONINPUT_API UEnum* Z_Construct_UEnum_CommonInput_ECommonInputType();
	UPackage* Z_Construct_UPackage__Script_CommonInput();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECommonInputType;
	static UEnum* ECommonInputType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECommonInputType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECommonInputType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CommonInput_ECommonInputType, (UObject*)Z_Construct_UPackage__Script_CommonInput(), TEXT("ECommonInputType"));
		}
		return Z_Registration_Info_UEnum_ECommonInputType.OuterSingleton;
	}
	template<> COMMONINPUT_API UEnum* StaticEnum<ECommonInputType>()
	{
		return ECommonInputType_StaticEnum();
	}
	struct Z_Construct_UEnum_CommonInput_ECommonInputType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CommonInput_ECommonInputType_Statics::Enumerators[] = {
		{ "ECommonInputType::MouseAndKeyboard", (int64)ECommonInputType::MouseAndKeyboard },
		{ "ECommonInputType::Gamepad", (int64)ECommonInputType::Gamepad },
		{ "ECommonInputType::Touch", (int64)ECommonInputType::Touch },
		{ "ECommonInputType::Count", (int64)ECommonInputType::Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CommonInput_ECommonInputType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Count.Name", "ECommonInputType::Count" },
		{ "Gamepad.Name", "ECommonInputType::Gamepad" },
		{ "ModuleRelativePath", "Public/CommonInputTypeEnum.h" },
		{ "MouseAndKeyboard.Name", "ECommonInputType::MouseAndKeyboard" },
		{ "Touch.Name", "ECommonInputType::Touch" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CommonInput_ECommonInputType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CommonInput,
		nullptr,
		"ECommonInputType",
		"ECommonInputType",
		Z_Construct_UEnum_CommonInput_ECommonInputType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CommonInput_ECommonInputType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CommonInput_ECommonInputType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CommonInput_ECommonInputType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CommonInput_ECommonInputType()
	{
		if (!Z_Registration_Info_UEnum_ECommonInputType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECommonInputType.InnerSingleton, Z_Construct_UEnum_CommonInput_ECommonInputType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECommonInputType.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputTypeEnum_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputTypeEnum_h_Statics::EnumInfo[] = {
		{ ECommonInputType_StaticEnum, TEXT("ECommonInputType"), &Z_Registration_Info_UEnum_ECommonInputType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3567225506U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputTypeEnum_h_2654940635(TEXT("/Script/CommonInput"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputTypeEnum_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonUI_Source_CommonInput_Public_CommonInputTypeEnum_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
