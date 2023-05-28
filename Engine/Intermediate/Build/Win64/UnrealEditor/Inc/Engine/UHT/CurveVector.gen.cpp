// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveVector.h"
#include "../../Source/Runtime/Engine/Classes/Curves/RichCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveVector() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UCurveBase();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeVectorCurve();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeVectorCurve;
class UScriptStruct* FRuntimeVectorCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeVectorCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeVectorCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeVectorCurve, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RuntimeVectorCurve"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeVectorCurve.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRuntimeVectorCurve>()
{
	return FRuntimeVectorCurve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeVectorCurve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorCurves_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorCurves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExternalCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeVectorCurve_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Curves/CurveVector.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeVectorCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeVectorCurve>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeVectorCurve_Statics::NewProp_VectorCurves_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveVector.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeVectorCurve_Statics::NewProp_VectorCurves = { "VectorCurves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(VectorCurves, FRuntimeVectorCurve), nullptr, nullptr, STRUCT_OFFSET(FRuntimeVectorCurve, VectorCurves), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeVectorCurve_Statics::NewProp_VectorCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeVectorCurve_Statics::NewProp_VectorCurves_MetaData)) }; // 778017158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeVectorCurve_Statics::NewProp_ExternalCurve_MetaData[] = {
		{ "Category", "RuntimeFloatCurve" },
		{ "ModuleRelativePath", "Classes/Curves/CurveVector.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRuntimeVectorCurve_Statics::NewProp_ExternalCurve = { "ExternalCurve", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeVectorCurve, ExternalCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeVectorCurve_Statics::NewProp_ExternalCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeVectorCurve_Statics::NewProp_ExternalCurve_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeVectorCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeVectorCurve_Statics::NewProp_VectorCurves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeVectorCurve_Statics::NewProp_ExternalCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeVectorCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RuntimeVectorCurve",
		sizeof(FRuntimeVectorCurve),
		alignof(FRuntimeVectorCurve),
		Z_Construct_UScriptStruct_FRuntimeVectorCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeVectorCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeVectorCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeVectorCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeVectorCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeVectorCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeVectorCurve.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeVectorCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeVectorCurve.InnerSingleton;
	}
	DEFINE_FUNCTION(UCurveVector::execGetVectorValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetVectorValue(Z_Param_InTime);
		P_NATIVE_END;
	}
	void UCurveVector::StaticRegisterNativesUCurveVector()
	{
		UClass* Class = UCurveVector::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVectorValue", &UCurveVector::execGetVectorValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCurveVector_GetVectorValue_Statics
	{
		struct CurveVector_eventGetVectorValue_Parms
		{
			float InTime;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTime;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveVector_GetVectorValue_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CurveVector_eventGetVectorValue_Parms, InTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCurveVector_GetVectorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CurveVector_eventGetVectorValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveVector_GetVectorValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveVector_GetVectorValue_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveVector_GetVectorValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurveVector_GetVectorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "Comment", "/** Evaluate this float curve at the specified time */" },
		{ "ModuleRelativePath", "Classes/Curves/CurveVector.h" },
		{ "ToolTip", "Evaluate this float curve at the specified time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveVector_GetVectorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveVector, nullptr, "GetVectorValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCurveVector_GetVectorValue_Statics::CurveVector_eventGetVectorValue_Parms), Z_Construct_UFunction_UCurveVector_GetVectorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveVector_GetVectorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820403, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCurveVector_GetVectorValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveVector_GetVectorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCurveVector_GetVectorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurveVector_GetVectorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveVector);
	UClass* Z_Construct_UClass_UCurveVector_NoRegister()
	{
		return UCurveVector::StaticClass();
	}
	struct Z_Construct_UClass_UCurveVector_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatCurves_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatCurves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveVector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCurveBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCurveVector_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurveVector_GetVectorValue, "GetVectorValue" }, // 3831239348
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveVector_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Curves/CurveVector.h" },
		{ "ModuleRelativePath", "Classes/Curves/CurveVector.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveVector_Statics::NewProp_FloatCurves_MetaData[] = {
		{ "Comment", "/** Keyframe data, one curve for X, Y and Z */" },
		{ "ModuleRelativePath", "Classes/Curves/CurveVector.h" },
		{ "ToolTip", "Keyframe data, one curve for X, Y and Z" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveVector_Statics::NewProp_FloatCurves = { "FloatCurves", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(FloatCurves, UCurveVector), nullptr, nullptr, STRUCT_OFFSET(UCurveVector, FloatCurves), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UCurveVector_Statics::NewProp_FloatCurves_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveVector_Statics::NewProp_FloatCurves_MetaData)) }; // 778017158
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveVector_Statics::NewProp_FloatCurves,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveVector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveVector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveVector_Statics::ClassParams = {
		&UCurveVector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCurveVector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCurveVector_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveVector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveVector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveVector()
	{
		if (!Z_Registration_Info_UClass_UCurveVector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveVector.OuterSingleton, Z_Construct_UClass_UCurveVector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurveVector.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UCurveVector>()
	{
		return UCurveVector::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveVector);
	UCurveVector::~UCurveVector() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_Statics::ScriptStructInfo[] = {
		{ FRuntimeVectorCurve::StaticStruct, Z_Construct_UScriptStruct_FRuntimeVectorCurve_Statics::NewStructOps, TEXT("RuntimeVectorCurve"), &Z_Registration_Info_UScriptStruct_RuntimeVectorCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeVectorCurve), 3220264638U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCurveVector, UCurveVector::StaticClass, TEXT("UCurveVector"), &Z_Registration_Info_UClass_UCurveVector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveVector), 3258315086U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_2586978243(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveVector_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
