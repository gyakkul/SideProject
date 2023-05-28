// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../../../../ControlRigSpline/Source/ControlRigSpline/Public/ControlRigSplineTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigSplineTypes() {}
// Cross Module References
	CONTROLRIGSPLINE_API UEnum* Z_Construct_UEnum_ControlRigSpline_ESplineType();
	CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigSpline();
	CONTROLRIGSPLINE_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigSplineImpl();
	UPackage* Z_Construct_UPackage__Script_ControlRigSpline();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESplineType;
	static UEnum* ESplineType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESplineType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESplineType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ControlRigSpline_ESplineType, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("ESplineType"));
		}
		return Z_Registration_Info_UEnum_ESplineType.OuterSingleton;
	}
	template<> CONTROLRIGSPLINE_API UEnum* StaticEnum<ESplineType>()
	{
		return ESplineType_StaticEnum();
	}
	struct Z_Construct_UEnum_ControlRigSpline_ESplineType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ControlRigSpline_ESplineType_Statics::Enumerators[] = {
		{ "ESplineType::BSpline", (int64)ESplineType::BSpline },
		{ "ESplineType::Hermite", (int64)ESplineType::Hermite },
		{ "ESplineType::Max", (int64)ESplineType::Max },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ControlRigSpline_ESplineType_Statics::Enum_MetaDataParams[] = {
		{ "BSpline.Comment", "/** The smooth curve will pass through the first and last control points */" },
		{ "BSpline.Name", "ESplineType::BSpline" },
		{ "BSpline.ToolTip", "The smooth curve will pass through the first and last control points" },
		{ "Hermite.Comment", "/** The curve will pass through the control points */" },
		{ "Hermite.Name", "ESplineType::Hermite" },
		{ "Hermite.ToolTip", "The curve will pass through the control points" },
		{ "Max.Comment", "/** MAX - invalid */" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "ESplineType::Max" },
		{ "Max.ToolTip", "MAX - invalid" },
		{ "ModuleRelativePath", "Public/ControlRigSplineTypes.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ControlRigSpline_ESplineType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ControlRigSpline,
		nullptr,
		"ESplineType",
		"ESplineType",
		Z_Construct_UEnum_ControlRigSpline_ESplineType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRigSpline_ESplineType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ControlRigSpline_ESplineType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ControlRigSpline_ESplineType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ControlRigSpline_ESplineType()
	{
		if (!Z_Registration_Info_UEnum_ESplineType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESplineType.InnerSingleton, Z_Construct_UEnum_ControlRigSpline_ESplineType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESplineType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigSplineImpl;
class UScriptStruct* FControlRigSplineImpl::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigSplineImpl.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigSplineImpl.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigSplineImpl, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("ControlRigSplineImpl"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigSplineImpl.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FControlRigSplineImpl>()
{
	return FControlRigSplineImpl::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigSplineImpl_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigSplineImpl_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ControlRigSplineTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigSplineImpl_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigSplineImpl>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigSplineImpl_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
		nullptr,
		&NewStructOps,
		"ControlRigSplineImpl",
		sizeof(FControlRigSplineImpl),
		alignof(FControlRigSplineImpl),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigSplineImpl_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSplineImpl_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigSplineImpl()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigSplineImpl.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigSplineImpl.InnerSingleton, Z_Construct_UScriptStruct_FControlRigSplineImpl_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigSplineImpl.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ControlRigSpline;
class UScriptStruct* FControlRigSpline::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ControlRigSpline.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ControlRigSpline.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FControlRigSpline, (UObject*)Z_Construct_UPackage__Script_ControlRigSpline(), TEXT("ControlRigSpline"));
	}
	return Z_Registration_Info_UScriptStruct_ControlRigSpline.OuterSingleton;
}
template<> CONTROLRIGSPLINE_API UScriptStruct* StaticStruct<FControlRigSpline>()
{
	return FControlRigSpline::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FControlRigSpline_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FControlRigSpline_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ControlRigSplineTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FControlRigSpline_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FControlRigSpline>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FControlRigSpline_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigSpline,
		nullptr,
		&NewStructOps,
		"ControlRigSpline",
		sizeof(FControlRigSpline),
		alignof(FControlRigSpline),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FControlRigSpline_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FControlRigSpline_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FControlRigSpline()
	{
		if (!Z_Registration_Info_UScriptStruct_ControlRigSpline.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ControlRigSpline.InnerSingleton, Z_Construct_UScriptStruct_FControlRigSpline_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ControlRigSpline.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineTypes_h_Statics::EnumInfo[] = {
		{ ESplineType_StaticEnum, TEXT("ESplineType"), &Z_Registration_Info_UEnum_ESplineType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2330869612U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineTypes_h_Statics::ScriptStructInfo[] = {
		{ FControlRigSplineImpl::StaticStruct, Z_Construct_UScriptStruct_FControlRigSplineImpl_Statics::NewStructOps, TEXT("ControlRigSplineImpl"), &Z_Registration_Info_UScriptStruct_ControlRigSplineImpl, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigSplineImpl), 3864626912U) },
		{ FControlRigSpline::StaticStruct, Z_Construct_UScriptStruct_FControlRigSpline_Statics::NewStructOps, TEXT("ControlRigSpline"), &Z_Registration_Info_UScriptStruct_ControlRigSpline, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FControlRigSpline), 568790116U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineTypes_h_1905806319(TEXT("/Script/ControlRigSpline"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRigSpline_Source_ControlRigSpline_Public_ControlRigSplineTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
