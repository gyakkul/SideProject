// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "../../Source/Runtime/Engine/Classes/Curves/RichCurve.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCurveFloat() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCurveBase();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRichCurve();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RuntimeFloatCurve;
class UScriptStruct* FRuntimeFloatCurve::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RuntimeFloatCurve.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RuntimeFloatCurve.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRuntimeFloatCurve, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("RuntimeFloatCurve"));
	}
	return Z_Registration_Info_UScriptStruct_RuntimeFloatCurve.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FRuntimeFloatCurve>()
{
	return FRuntimeFloatCurve::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorCurveData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EditorCurveData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ExternalCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Curves/CurveFloat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRuntimeFloatCurve>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewProp_EditorCurveData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Curves/CurveFloat.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewProp_EditorCurveData = { "EditorCurveData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeFloatCurve, EditorCurveData), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewProp_EditorCurveData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewProp_EditorCurveData_MetaData)) }; // 778017158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewProp_ExternalCurve_MetaData[] = {
		{ "Category", "RuntimeFloatCurve" },
		{ "ModuleRelativePath", "Classes/Curves/CurveFloat.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewProp_ExternalCurve = { "ExternalCurve", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRuntimeFloatCurve, ExternalCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewProp_ExternalCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewProp_ExternalCurve_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewProp_EditorCurveData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewProp_ExternalCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"RuntimeFloatCurve",
		sizeof(FRuntimeFloatCurve),
		alignof(FRuntimeFloatCurve),
		Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve()
	{
		if (!Z_Registration_Info_UScriptStruct_RuntimeFloatCurve.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RuntimeFloatCurve.InnerSingleton, Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RuntimeFloatCurve.InnerSingleton;
	}
	DEFINE_FUNCTION(UCurveFloat::execGetFloatValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFloatValue(Z_Param_InTime);
		P_NATIVE_END;
	}
	void UCurveFloat::StaticRegisterNativesUCurveFloat()
	{
		UClass* Class = UCurveFloat::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFloatValue", &UCurveFloat::execGetFloatValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics
	{
		struct CurveFloat_eventGetFloatValue_Parms
		{
			float InTime;
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InTime;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::NewProp_InTime = { "InTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CurveFloat_eventGetFloatValue_Parms, InTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CurveFloat_eventGetFloatValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::NewProp_InTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Math|Curves" },
		{ "Comment", "/** Evaluate this float curve at the specified time */" },
		{ "ModuleRelativePath", "Classes/Curves/CurveFloat.h" },
		{ "ToolTip", "Evaluate this float curve at the specified time" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCurveFloat, nullptr, "GetFloatValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::CurveFloat_eventGetFloatValue_Parms), Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCurveFloat_GetFloatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCurveFloat_GetFloatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCurveFloat);
	UClass* Z_Construct_UClass_UCurveFloat_NoRegister()
	{
		return UCurveFloat::StaticClass();
	}
	struct Z_Construct_UClass_UCurveFloat_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEventCurve_MetaData[];
#endif
		static void NewProp_bIsEventCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEventCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCurveFloat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCurveBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCurveFloat_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCurveFloat_GetFloatValue, "GetFloatValue" }, // 2734193931
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveFloat_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Curves/CurveFloat.h" },
		{ "ModuleRelativePath", "Classes/Curves/CurveFloat.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveFloat_Statics::NewProp_FloatCurve_MetaData[] = {
		{ "Comment", "/** Keyframe data */" },
		{ "ModuleRelativePath", "Classes/Curves/CurveFloat.h" },
		{ "ToolTip", "Keyframe data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCurveFloat_Statics::NewProp_FloatCurve = { "FloatCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCurveFloat, FloatCurve), Z_Construct_UScriptStruct_FRichCurve, METADATA_PARAMS(Z_Construct_UClass_UCurveFloat_Statics::NewProp_FloatCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveFloat_Statics::NewProp_FloatCurve_MetaData)) }; // 778017158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCurveFloat_Statics::NewProp_bIsEventCurve_MetaData[] = {
		{ "Comment", "/** Flag to represent event curve */" },
		{ "ModuleRelativePath", "Classes/Curves/CurveFloat.h" },
		{ "ToolTip", "Flag to represent event curve" },
	};
#endif
	void Z_Construct_UClass_UCurveFloat_Statics::NewProp_bIsEventCurve_SetBit(void* Obj)
	{
		((UCurveFloat*)Obj)->bIsEventCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCurveFloat_Statics::NewProp_bIsEventCurve = { "bIsEventCurve", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCurveFloat), &Z_Construct_UClass_UCurveFloat_Statics::NewProp_bIsEventCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCurveFloat_Statics::NewProp_bIsEventCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveFloat_Statics::NewProp_bIsEventCurve_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCurveFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveFloat_Statics::NewProp_FloatCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCurveFloat_Statics::NewProp_bIsEventCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCurveFloat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCurveFloat>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCurveFloat_Statics::ClassParams = {
		&UCurveFloat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCurveFloat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCurveFloat_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCurveFloat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCurveFloat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCurveFloat()
	{
		if (!Z_Registration_Info_UClass_UCurveFloat.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCurveFloat.OuterSingleton, Z_Construct_UClass_UCurveFloat_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCurveFloat.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UCurveFloat>()
	{
		return UCurveFloat::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCurveFloat);
	UCurveFloat::~UCurveFloat() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_Statics::ScriptStructInfo[] = {
		{ FRuntimeFloatCurve::StaticStruct, Z_Construct_UScriptStruct_FRuntimeFloatCurve_Statics::NewStructOps, TEXT("RuntimeFloatCurve"), &Z_Registration_Info_UScriptStruct_RuntimeFloatCurve, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRuntimeFloatCurve), 1477693291U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCurveFloat, UCurveFloat::StaticClass, TEXT("UCurveFloat"), &Z_Registration_Info_UClass_UCurveFloat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCurveFloat), 379089293U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_1445249705(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Curves_CurveFloat_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
