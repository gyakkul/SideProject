// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigVMFunctions/Animation/RigVMFunction_AnimRichCurve.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigVMFunction_AnimRichCurve() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AnimBase();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AnimRichCurve();
	UPackage* Z_Construct_UPackage__Script_RigVM();
// End Cross Module References

static_assert(std::is_polymorphic<FRigVMFunction_AnimRichCurve>() == std::is_polymorphic<FRigVMFunction_AnimBase>(), "USTRUCT FRigVMFunction_AnimRichCurve cannot be polymorphic unless super FRigVMFunction_AnimBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigVMFunction_AnimRichCurve;
class UScriptStruct* FRigVMFunction_AnimRichCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AnimRichCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigVMFunction_AnimRichCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_AnimRichCurve, (UObject*)Z_Construct_UPackage__Script_RigVM(), TEXT("RigVMFunction_AnimRichCurve"));
		TArray<FRigVMFunctionArgument> Arguments_FRigVMFunction_AnimRichCurve_Execute;
		Arguments_FRigVMFunction_AnimRichCurve_Execute.Emplace(TEXT("Curve"), TEXT("FRuntimeFloatCurve"));
		FRigVMRegistry::Get().Register(TEXT("FRigVMFunction_AnimRichCurve::Execute"), &FRigVMFunction_AnimRichCurve::RigVMExecute, Z_Registration_Info_UScriptStruct_RigVMFunction_AnimRichCurve.OuterSingleton, Arguments_FRigVMFunction_AnimRichCurve_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigVMFunction_AnimRichCurve.OuterSingleton;
}
template<> RIGVM_API UScriptStruct* StaticStruct<FRigVMFunction_AnimRichCurve>()
{
	return FRigVMFunction_AnimRichCurve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigVMFunction_AnimRichCurve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Curve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Curve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AnimRichCurve_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Provides a constant curve to be used for multiple curve evaluations\n */" },
		{ "DisplayName", "Curve" },
		{ "Keywords", "Curve,Profile" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_AnimRichCurve.h" },
		{ "ToolTip", "Provides a constant curve to be used for multiple curve evaluations" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigVMFunction_AnimRichCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigVMFunction_AnimRichCurve>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigVMFunction_AnimRichCurve_Statics::NewProp_Curve_MetaData[] = {
		{ "Category", "Pins" },
		{ "Constant", "" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/RigVMFunctions/Animation/RigVMFunction_AnimRichCurve.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigVMFunction_AnimRichCurve_Statics::NewProp_Curve = { "Curve", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigVMFunction_AnimRichCurve, Curve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AnimRichCurve_Statics::NewProp_Curve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AnimRichCurve_Statics::NewProp_Curve_MetaData)) }; // 1477693291
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigVMFunction_AnimRichCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigVMFunction_AnimRichCurve_Statics::NewProp_Curve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigVMFunction_AnimRichCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RigVM,
		Z_Construct_UScriptStruct_FRigVMFunction_AnimBase,
		&NewStructOps,
		"RigVMFunction_AnimRichCurve",
		sizeof(FRigVMFunction_AnimRichCurve),
		alignof(FRigVMFunction_AnimRichCurve),
		Z_Construct_UScriptStruct_FRigVMFunction_AnimRichCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AnimRichCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigVMFunction_AnimRichCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigVMFunction_AnimRichCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigVMFunction_AnimRichCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_RigVMFunction_AnimRichCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigVMFunction_AnimRichCurve.InnerSingleton, Z_Construct_UScriptStruct_FRigVMFunction_AnimRichCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigVMFunction_AnimRichCurve.InnerSingleton;
	}

void FRigVMFunction_AnimRichCurve::Execute()
{
	FRigVMExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigVMFunction_AnimRichCurve::Execute(const FRigVMExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Curve
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_AnimRichCurve_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_AnimRichCurve_h_Statics::ScriptStructInfo[] = {
		{ FRigVMFunction_AnimRichCurve::StaticStruct, Z_Construct_UScriptStruct_FRigVMFunction_AnimRichCurve_Statics::NewStructOps, TEXT("RigVMFunction_AnimRichCurve"), &Z_Registration_Info_UScriptStruct_RigVMFunction_AnimRichCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigVMFunction_AnimRichCurve), 1689897776U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_AnimRichCurve_h_3194349530(TEXT("/Script/RigVM"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_AnimRichCurve_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_RigVM_Public_RigVMFunctions_Animation_RigVMFunction_AnimRichCurve_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
