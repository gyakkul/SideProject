// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_WheelController.h"
#include "AnimNode_WheelController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_WheelController() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	CHAOSVEHICLES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_WheelController();
	CHAOSVEHICLESEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_WheelController();
	CHAOSVEHICLESEDITOR_API UClass* Z_Construct_UClass_UAnimGraphNode_WheelController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ChaosVehiclesEditor();
// End Cross Module References
	void UAnimGraphNode_WheelController::StaticRegisterNativesUAnimGraphNode_WheelController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_WheelController);
	UClass* Z_Construct_UClass_UAnimGraphNode_WheelController_NoRegister()
	{
		return UAnimGraphNode_WheelController::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_WheelController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosVehiclesEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_WheelController.h" },
		{ "Keywords", "Modify Wheel Vehicle" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_WheelController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_WheelController.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_WheelController, Node), Z_Construct_UScriptStruct_FAnimNode_WheelController, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::NewProp_Node_MetaData)) }; // 239075169
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_WheelController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::ClassParams = {
		&UAnimGraphNode_WheelController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_WheelController()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_WheelController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_WheelController.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_WheelController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_WheelController.OuterSingleton;
	}
	template<> CHAOSVEHICLESEDITOR_API UClass* StaticClass<UAnimGraphNode_WheelController>()
	{
		return UAnimGraphNode_WheelController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_WheelController);
	UAnimGraphNode_WheelController::~UAnimGraphNode_WheelController() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehiclesEditor_Public_AnimGraphNode_WheelController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehiclesEditor_Public_AnimGraphNode_WheelController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_WheelController, UAnimGraphNode_WheelController::StaticClass, TEXT("UAnimGraphNode_WheelController"), &Z_Registration_Info_UClass_UAnimGraphNode_WheelController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_WheelController), 1295125562U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehiclesEditor_Public_AnimGraphNode_WheelController_h_1177110258(TEXT("/Script/ChaosVehiclesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehiclesEditor_Public_AnimGraphNode_WheelController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosVehiclesPlugin_Source_ChaosVehiclesEditor_Public_AnimGraphNode_WheelController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
