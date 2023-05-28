// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Rigs/RigCurveContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigCurveContainer() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigCurve();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigCurveContainer();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElement();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigCurve>() == std::is_polymorphic<FRigElement>(), "USTRUCT FRigCurve cannot be polymorphic unless super FRigElement is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigCurve;
class UScriptStruct* FRigCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigCurve, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigCurve"));
	}
	return Z_Registration_Info_UScriptStruct_RigCurve.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigCurve>()
{
	return FRigCurve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigCurve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigCurve_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigCurveContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigCurve>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigCurve_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "FRigElement" },
		{ "ModuleRelativePath", "Public/Rigs/RigCurveContainer.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigCurve_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigCurve, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigCurve_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigCurve_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigCurve_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigElement,
		&NewStructOps,
		"RigCurve",
		sizeof(FRigCurve),
		alignof(FRigCurve),
		Z_Construct_UScriptStruct_FRigCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_RigCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigCurve.InnerSingleton, Z_Construct_UScriptStruct_FRigCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigCurve.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigCurveContainer;
class UScriptStruct* FRigCurveContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigCurveContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigCurveContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigCurveContainer, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigCurveContainer"));
	}
	return Z_Registration_Info_UScriptStruct_RigCurveContainer.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigCurveContainer>()
{
	return FRigCurveContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigCurveContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Curves_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curves_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Curves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigCurveContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Rigs/RigCurveContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigCurveContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigCurveContainer>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigCurveContainer_Statics::NewProp_Curves_Inner = { "Curves", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigCurve, METADATA_PARAMS(nullptr, 0) }; // 3738962408
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigCurveContainer_Statics::NewProp_Curves_MetaData[] = {
		{ "Category", "FRigCurveContainer" },
		{ "ModuleRelativePath", "Public/Rigs/RigCurveContainer.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigCurveContainer_Statics::NewProp_Curves = { "Curves", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigCurveContainer, Curves), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigCurveContainer_Statics::NewProp_Curves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigCurveContainer_Statics::NewProp_Curves_MetaData)) }; // 3738962408
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigCurveContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigCurveContainer_Statics::NewProp_Curves_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigCurveContainer_Statics::NewProp_Curves,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigCurveContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		nullptr,
		&NewStructOps,
		"RigCurveContainer",
		sizeof(FRigCurveContainer),
		alignof(FRigCurveContainer),
		Z_Construct_UScriptStruct_FRigCurveContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigCurveContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigCurveContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigCurveContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigCurveContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_RigCurveContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigCurveContainer.InnerSingleton, Z_Construct_UScriptStruct_FRigCurveContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigCurveContainer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigCurveContainer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigCurveContainer_h_Statics::ScriptStructInfo[] = {
		{ FRigCurve::StaticStruct, Z_Construct_UScriptStruct_FRigCurve_Statics::NewStructOps, TEXT("RigCurve"), &Z_Registration_Info_UScriptStruct_RigCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigCurve), 3738962408U) },
		{ FRigCurveContainer::StaticStruct, Z_Construct_UScriptStruct_FRigCurveContainer_Statics::NewStructOps, TEXT("RigCurveContainer"), &Z_Registration_Info_UScriptStruct_RigCurveContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigCurveContainer), 3673889521U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigCurveContainer_h_25008666(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigCurveContainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_Rigs_RigCurveContainer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
