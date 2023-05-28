// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimSequencerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimSequencerController() {}
// Cross Module References
	ANIMATIONDATA_API UClass* Z_Construct_UClass_UAnimationSequencerDataModel_NoRegister();
	ANIMATIONDATA_API UClass* Z_Construct_UClass_UAnimSequencerController();
	ANIMATIONDATA_API UClass* Z_Construct_UClass_UAnimSequencerController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationDataController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationDataModel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimationData();
// End Cross Module References
	void UAnimSequencerController::StaticRegisterNativesUAnimSequencerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimSequencerController);
	UClass* Z_Construct_UClass_UAnimSequencerController_NoRegister()
	{
		return UAnimSequencerController::StaticClass();
	}
	struct Z_Construct_UClass_UAnimSequencerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Model;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelInterface_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ModelInterface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimSequencerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequencerController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AnimSequencerController.h" },
		{ "ModuleRelativePath", "Private/AnimSequencerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequencerController_Statics::NewProp_Model_MetaData[] = {
		{ "Comment", "// UObject (typed) pointer to Model\n" },
		{ "ModuleRelativePath", "Private/AnimSequencerController.h" },
		{ "ToolTip", "UObject (typed) pointer to Model" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAnimSequencerController_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSequencerController, Model), Z_Construct_UClass_UAnimationSequencerDataModel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimSequencerController_Statics::NewProp_Model_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequencerController_Statics::NewProp_Model_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimSequencerController_Statics::NewProp_ModelInterface_MetaData[] = {
		{ "ModuleRelativePath", "Private/AnimSequencerController.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAnimSequencerController_Statics::NewProp_ModelInterface = { "ModelInterface", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimSequencerController, ModelInterface), Z_Construct_UClass_UAnimationDataModel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimSequencerController_Statics::NewProp_ModelInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequencerController_Statics::NewProp_ModelInterface_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimSequencerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequencerController_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimSequencerController_Statics::NewProp_ModelInterface,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimSequencerController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAnimationDataController_NoRegister, (int32)VTABLE_OFFSET(UAnimSequencerController, IAnimationDataController), false },  // 1775500573
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimSequencerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimSequencerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimSequencerController_Statics::ClassParams = {
		&UAnimSequencerController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimSequencerController_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequencerController_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimSequencerController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimSequencerController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimSequencerController()
	{
		if (!Z_Registration_Info_UClass_UAnimSequencerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimSequencerController.OuterSingleton, Z_Construct_UClass_UAnimSequencerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimSequencerController.OuterSingleton;
	}
	template<> ANIMATIONDATA_API UClass* StaticClass<UAnimSequencerController>()
	{
		return UAnimSequencerController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimSequencerController);
	UAnimSequencerController::~UAnimSequencerController() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimSequencerController, UAnimSequencerController::StaticClass, TEXT("UAnimSequencerController"), &Z_Registration_Info_UClass_UAnimSequencerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimSequencerController), 3051061409U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerController_h_1927912649(TEXT("/Script/AnimationData"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_AnimationData_Source_AnimationData_Private_AnimSequencerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
