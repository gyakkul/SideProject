// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Tests/SequenceCameraShakeTestUtil.h"
#include "../../Source/Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/Scene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSequenceCameraShakeTestUtil() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMinimalViewInfo();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_USequenceCameraShakeTestUtil();
	TEMPLATESEQUENCE_API UClass* Z_Construct_UClass_USequenceCameraShakeTestUtil_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TemplateSequence();
// End Cross Module References
	DEFINE_FUNCTION(USequenceCameraShakeTestUtil::execGetPostProcessBlendCache)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_GET_PROPERTY(FIntProperty,Z_Param_PPIndex);
		P_GET_STRUCT_REF(FPostProcessSettings,Z_Param_Out_OutPPSettings);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutPPBlendWeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USequenceCameraShakeTestUtil::GetPostProcessBlendCache(Z_Param_PlayerController,Z_Param_PPIndex,Z_Param_Out_OutPPSettings,Z_Param_Out_OutPPBlendWeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequenceCameraShakeTestUtil::execGetLastFrameCameraCachePOV)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMinimalViewInfo*)Z_Param__Result=USequenceCameraShakeTestUtil::GetLastFrameCameraCachePOV(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USequenceCameraShakeTestUtil::execGetCameraCachePOV)
	{
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMinimalViewInfo*)Z_Param__Result=USequenceCameraShakeTestUtil::GetCameraCachePOV(Z_Param_PlayerController);
		P_NATIVE_END;
	}
	void USequenceCameraShakeTestUtil::StaticRegisterNativesUSequenceCameraShakeTestUtil()
	{
		UClass* Class = USequenceCameraShakeTestUtil::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCameraCachePOV", &USequenceCameraShakeTestUtil::execGetCameraCachePOV },
			{ "GetLastFrameCameraCachePOV", &USequenceCameraShakeTestUtil::execGetLastFrameCameraCachePOV },
			{ "GetPostProcessBlendCache", &USequenceCameraShakeTestUtil::execGetPostProcessBlendCache },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics
	{
		struct SequenceCameraShakeTestUtil_eventGetCameraCachePOV_Parms
		{
			APlayerController* PlayerController;
			FMinimalViewInfo ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceCameraShakeTestUtil_eventGetCameraCachePOV_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceCameraShakeTestUtil_eventGetCameraCachePOV_Parms, ReturnValue), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(nullptr, 0) }; // 1056960465
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/SequenceCameraShakeTestUtil.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequenceCameraShakeTestUtil, nullptr, "GetCameraCachePOV", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics::SequenceCameraShakeTestUtil_eventGetCameraCachePOV_Parms), Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics
	{
		struct SequenceCameraShakeTestUtil_eventGetLastFrameCameraCachePOV_Parms
		{
			APlayerController* PlayerController;
			FMinimalViewInfo ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceCameraShakeTestUtil_eventGetLastFrameCameraCachePOV_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceCameraShakeTestUtil_eventGetLastFrameCameraCachePOV_Parms, ReturnValue), Z_Construct_UScriptStruct_FMinimalViewInfo, METADATA_PARAMS(nullptr, 0) }; // 1056960465
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/SequenceCameraShakeTestUtil.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequenceCameraShakeTestUtil, nullptr, "GetLastFrameCameraCachePOV", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics::SequenceCameraShakeTestUtil_eventGetLastFrameCameraCachePOV_Parms), Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics
	{
		struct SequenceCameraShakeTestUtil_eventGetPostProcessBlendCache_Parms
		{
			APlayerController* PlayerController;
			int32 PPIndex;
			FPostProcessSettings OutPPSettings;
			float OutPPBlendWeight;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PPIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPPSettings;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutPPBlendWeight;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceCameraShakeTestUtil_eventGetPostProcessBlendCache_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::NewProp_PPIndex = { "PPIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceCameraShakeTestUtil_eventGetPostProcessBlendCache_Parms, PPIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::NewProp_OutPPSettings = { "OutPPSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceCameraShakeTestUtil_eventGetPostProcessBlendCache_Parms, OutPPSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(nullptr, 0) }; // 1889339962
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::NewProp_OutPPBlendWeight = { "OutPPBlendWeight", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SequenceCameraShakeTestUtil_eventGetPostProcessBlendCache_Parms, OutPPBlendWeight), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SequenceCameraShakeTestUtil_eventGetPostProcessBlendCache_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SequenceCameraShakeTestUtil_eventGetPostProcessBlendCache_Parms), &Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::NewProp_PPIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::NewProp_OutPPSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::NewProp_OutPPBlendWeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "Private/Tests/SequenceCameraShakeTestUtil.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USequenceCameraShakeTestUtil, nullptr, "GetPostProcessBlendCache", nullptr, nullptr, sizeof(Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::SequenceCameraShakeTestUtil_eventGetPostProcessBlendCache_Parms), Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USequenceCameraShakeTestUtil);
	UClass* Z_Construct_UClass_USequenceCameraShakeTestUtil_NoRegister()
	{
		return USequenceCameraShakeTestUtil::StaticClass();
	}
	struct Z_Construct_UClass_USequenceCameraShakeTestUtil_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USequenceCameraShakeTestUtil_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TemplateSequence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USequenceCameraShakeTestUtil_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetCameraCachePOV, "GetCameraCachePOV" }, // 378445718
		{ &Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV, "GetLastFrameCameraCachePOV" }, // 3811566096
		{ &Z_Construct_UFunction_USequenceCameraShakeTestUtil_GetPostProcessBlendCache, "GetPostProcessBlendCache" }, // 2831427274
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USequenceCameraShakeTestUtil_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Tests/SequenceCameraShakeTestUtil.h" },
		{ "ModuleRelativePath", "Private/Tests/SequenceCameraShakeTestUtil.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USequenceCameraShakeTestUtil_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USequenceCameraShakeTestUtil>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USequenceCameraShakeTestUtil_Statics::ClassParams = {
		&USequenceCameraShakeTestUtil::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USequenceCameraShakeTestUtil_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USequenceCameraShakeTestUtil_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USequenceCameraShakeTestUtil()
	{
		if (!Z_Registration_Info_UClass_USequenceCameraShakeTestUtil.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USequenceCameraShakeTestUtil.OuterSingleton, Z_Construct_UClass_USequenceCameraShakeTestUtil_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USequenceCameraShakeTestUtil.OuterSingleton;
	}
	template<> TEMPLATESEQUENCE_API UClass* StaticClass<USequenceCameraShakeTestUtil>()
	{
		return USequenceCameraShakeTestUtil::StaticClass();
	}
	USequenceCameraShakeTestUtil::USequenceCameraShakeTestUtil(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USequenceCameraShakeTestUtil);
	USequenceCameraShakeTestUtil::~USequenceCameraShakeTestUtil() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Private_Tests_SequenceCameraShakeTestUtil_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Private_Tests_SequenceCameraShakeTestUtil_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USequenceCameraShakeTestUtil, USequenceCameraShakeTestUtil::StaticClass, TEXT("USequenceCameraShakeTestUtil"), &Z_Registration_Info_UClass_USequenceCameraShakeTestUtil, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USequenceCameraShakeTestUtil), 1355573393U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Private_Tests_SequenceCameraShakeTestUtil_h_1787971454(TEXT("/Script/TemplateSequence"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Private_Tests_SequenceCameraShakeTestUtil_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_TemplateSequence_Source_TemplateSequence_Private_Tests_SequenceCameraShakeTestUtil_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
