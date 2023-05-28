// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraComponentPoolMethodEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraComponentPoolMethodEnum() {}
// Cross Module References
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENCPoolMethod();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENCPoolMethod;
	static UEnum* ENCPoolMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENCPoolMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENCPoolMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENCPoolMethod, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENCPoolMethod"));
		}
		return Z_Registration_Info_UEnum_ENCPoolMethod.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENCPoolMethod>()
	{
		return ENCPoolMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENCPoolMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENCPoolMethod_Statics::Enumerators[] = {
		{ "ENCPoolMethod::None", (int64)ENCPoolMethod::None },
		{ "ENCPoolMethod::AutoRelease", (int64)ENCPoolMethod::AutoRelease },
		{ "ENCPoolMethod::ManualRelease", (int64)ENCPoolMethod::ManualRelease },
		{ "ENCPoolMethod::ManualRelease_OnComplete", (int64)ENCPoolMethod::ManualRelease_OnComplete },
		{ "ENCPoolMethod::FreeInPool", (int64)ENCPoolMethod::FreeInPool },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENCPoolMethod_Statics::Enum_MetaDataParams[] = {
		{ "AutoRelease.Comment", "/**\n\x09* The component is allocated from the pool and will be automatically released back to it.\n\x09* User need not handle this any more that other NCs but interaction with the NC after the tick it's spawned in are unsafe.\n\x09* This method is useful for one-shot fx that you don't need to keep a reference to and can fire and forget.\n\x09*/" },
		{ "AutoRelease.Name", "ENCPoolMethod::AutoRelease" },
		{ "AutoRelease.ToolTip", "The component is allocated from the pool and will be automatically released back to it.\nUser need not handle this any more that other NCs but interaction with the NC after the tick it's spawned in are unsafe.\nThis method is useful for one-shot fx that you don't need to keep a reference to and can fire and forget." },
		{ "FreeInPool.Comment", "/**\n\x09Special entry that marks a NC as having been returned to the pool. All NCs currently in the pool are marked this way.\n\x09*/" },
		{ "FreeInPool.Hidden", "" },
		{ "FreeInPool.Name", "ENCPoolMethod::FreeInPool" },
		{ "FreeInPool.ToolTip", "Special entry that marks a NC as having been returned to the pool. All NCs currently in the pool are marked this way." },
		{ "ManualRelease.Comment", "/**\n\x09* NC is allocated from the pool but will NOT be automatically released back to it. User has ownership of the NC and must call ReleaseToPool when finished with it otherwise the NC will leak.\n\x09* Interaction with the NC after it has been released are unsafe.\n\x09* This method is useful for persistent FX that you need to modify parameters upon etc over it's lifetime.\n\x09*/" },
		{ "ManualRelease.Name", "ENCPoolMethod::ManualRelease" },
		{ "ManualRelease.ToolTip", "NC is allocated from the pool but will NOT be automatically released back to it. User has ownership of the NC and must call ReleaseToPool when finished with it otherwise the NC will leak.\nInteraction with the NC after it has been released are unsafe.\nThis method is useful for persistent FX that you need to modify parameters upon etc over it's lifetime." },
		{ "ManualRelease_OnComplete.Comment", "/**\n\x09Special entry allowing manual release NCs to be manually released but wait until completion to be returned to the pool.\n\x09*/" },
		{ "ManualRelease_OnComplete.Hidden", "" },
		{ "ManualRelease_OnComplete.Name", "ENCPoolMethod::ManualRelease_OnComplete" },
		{ "ManualRelease_OnComplete.ToolTip", "Special entry allowing manual release NCs to be manually released but wait until completion to be returned to the pool." },
		{ "ModuleRelativePath", "Public/NiagaraComponentPoolMethodEnum.h" },
		{ "None.Comment", "/**\n\x09* The component will be created fresh and not allocated from the pool.\n\x09*/" },
		{ "None.Name", "ENCPoolMethod::None" },
		{ "None.ToolTip", "The component will be created fresh and not allocated from the pool." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENCPoolMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENCPoolMethod",
		"ENCPoolMethod",
		Z_Construct_UEnum_Niagara_ENCPoolMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENCPoolMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENCPoolMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENCPoolMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENCPoolMethod()
	{
		if (!Z_Registration_Info_UEnum_ENCPoolMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENCPoolMethod.InnerSingleton, Z_Construct_UEnum_Niagara_ENCPoolMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENCPoolMethod.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPoolMethodEnum_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPoolMethodEnum_h_Statics::EnumInfo[] = {
		{ ENCPoolMethod_StaticEnum, TEXT("ENCPoolMethod"), &Z_Registration_Info_UEnum_ENCPoolMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 852487868U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPoolMethodEnum_h_270325423(TEXT("/Script/Niagara"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPoolMethodEnum_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentPoolMethodEnum_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
