// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/AnimationBudgetBlueprintLibrary.h"
#include "AnimationBudgetAllocatorParameters.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationBudgetBlueprintLibrary() {}
// Cross Module References
	ANIMATIONBUDGETALLOCATOR_API UClass* Z_Construct_UClass_UAnimationBudgetBlueprintLibrary();
	ANIMATIONBUDGETALLOCATOR_API UClass* Z_Construct_UClass_UAnimationBudgetBlueprintLibrary_NoRegister();
	ANIMATIONBUDGETALLOCATOR_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AnimationBudgetAllocator();
// End Cross Module References
	DEFINE_FUNCTION(UAnimationBudgetBlueprintLibrary::execSetAnimationBudgetParameters)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT_REF(FAnimationBudgetAllocatorParameters,Z_Param_Out_InParameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBudgetBlueprintLibrary::SetAnimationBudgetParameters(Z_Param_WorldContextObject,Z_Param_Out_InParameters);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAnimationBudgetBlueprintLibrary::execEnableAnimationBudget)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAnimationBudgetBlueprintLibrary::EnableAnimationBudget(Z_Param_WorldContextObject,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	void UAnimationBudgetBlueprintLibrary::StaticRegisterNativesUAnimationBudgetBlueprintLibrary()
	{
		UClass* Class = UAnimationBudgetBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "EnableAnimationBudget", &UAnimationBudgetBlueprintLibrary::execEnableAnimationBudget },
			{ "SetAnimationBudgetParameters", &UAnimationBudgetBlueprintLibrary::execSetAnimationBudgetParameters },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Statics
	{
		struct AnimationBudgetBlueprintLibrary_eventEnableAnimationBudget_Parms
		{
			UObject* WorldContextObject;
			bool bEnabled;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBudgetBlueprintLibrary_eventEnableAnimationBudget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((AnimationBudgetBlueprintLibrary_eventEnableAnimationBudget_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AnimationBudgetBlueprintLibrary_eventEnableAnimationBudget_Parms), &Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation Budget" },
		{ "Comment", "/**\n\x09 * Enable/disable the animation budgeting system.\n\x09 * Note that the system can also be disabled globally via CVar, which overrides this setting.\n\x09 */" },
		{ "ModuleRelativePath", "Private/AnimationBudgetBlueprintLibrary.h" },
		{ "ToolTip", "Enable/disable the animation budgeting system.\nNote that the system can also be disabled globally via CVar, which overrides this setting." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBudgetBlueprintLibrary, nullptr, "EnableAnimationBudget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Statics::AnimationBudgetBlueprintLibrary_eventEnableAnimationBudget_Parms), Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_EnableAnimationBudget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_EnableAnimationBudget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Statics
	{
		struct AnimationBudgetBlueprintLibrary_eventSetAnimationBudgetParameters_Parms
		{
			UObject* WorldContextObject;
			FAnimationBudgetAllocatorParameters InParameters;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBudgetBlueprintLibrary_eventSetAnimationBudgetParameters_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Statics::NewProp_InParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Statics::NewProp_InParameters = { "InParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimationBudgetBlueprintLibrary_eventSetAnimationBudgetParameters_Parms, InParameters), Z_Construct_UScriptStruct_FAnimationBudgetAllocatorParameters, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Statics::NewProp_InParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Statics::NewProp_InParameters_MetaData)) }; // 679448343
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Statics::NewProp_InParameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation Budget" },
		{ "Comment", "/**\n\x09 * Set the parameters of the animation budgeting system.\n\x09 * Note that the parameters can also be set globally via CVar.\n\x09 */" },
		{ "ModuleRelativePath", "Private/AnimationBudgetBlueprintLibrary.h" },
		{ "ToolTip", "Set the parameters of the animation budgeting system.\nNote that the parameters can also be set globally via CVar." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimationBudgetBlueprintLibrary, nullptr, "SetAnimationBudgetParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Statics::AnimationBudgetBlueprintLibrary_eventSetAnimationBudgetParameters_Parms), Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimationBudgetBlueprintLibrary);
	UClass* Z_Construct_UClass_UAnimationBudgetBlueprintLibrary_NoRegister()
	{
		return UAnimationBudgetBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UAnimationBudgetBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimationBudgetBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationBudgetAllocator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimationBudgetBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_EnableAnimationBudget, "EnableAnimationBudget" }, // 3043113468
		{ &Z_Construct_UFunction_UAnimationBudgetBlueprintLibrary_SetAnimationBudgetParameters, "SetAnimationBudgetParameters" }, // 3502457656
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimationBudgetBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Function library to expose the budget allocator to Blueprints\n */" },
		{ "IncludePath", "AnimationBudgetBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Private/AnimationBudgetBlueprintLibrary.h" },
		{ "ScriptName", "AnimationBudget" },
		{ "ToolTip", "Function library to expose the budget allocator to Blueprints" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimationBudgetBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimationBudgetBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimationBudgetBlueprintLibrary_Statics::ClassParams = {
		&UAnimationBudgetBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimationBudgetBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimationBudgetBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimationBudgetBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UAnimationBudgetBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimationBudgetBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UAnimationBudgetBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimationBudgetBlueprintLibrary.OuterSingleton;
	}
	template<> ANIMATIONBUDGETALLOCATOR_API UClass* StaticClass<UAnimationBudgetBlueprintLibrary>()
	{
		return UAnimationBudgetBlueprintLibrary::StaticClass();
	}
	UAnimationBudgetBlueprintLibrary::UAnimationBudgetBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimationBudgetBlueprintLibrary);
	UAnimationBudgetBlueprintLibrary::~UAnimationBudgetBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimationBudgetBlueprintLibrary, UAnimationBudgetBlueprintLibrary::StaticClass, TEXT("UAnimationBudgetBlueprintLibrary"), &Z_Registration_Info_UClass_UAnimationBudgetBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimationBudgetBlueprintLibrary), 3214865857U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_362702400(TEXT("/Script/AnimationBudgetAllocator"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AnimationBudgetAllocator_Source_AnimationBudgetAllocator_Private_AnimationBudgetBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
