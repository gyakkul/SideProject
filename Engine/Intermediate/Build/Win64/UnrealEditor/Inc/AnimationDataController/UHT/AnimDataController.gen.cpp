// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimDataController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimDataController() {}
// Cross Module References
	ANIMATIONDATACONTROLLER_API UClass* Z_Construct_UClass_UAnimDataController();
	ANIMATIONDATACONTROLLER_API UClass* Z_Construct_UClass_UAnimDataController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationDataController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationDataModel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimDataModel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_AnimationDataController();
// End Cross Module References
	void UAnimDataController::StaticRegisterNativesUAnimDataController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimDataController);
	UClass* Z_Construct_UClass_UAnimDataController_NoRegister()
	{
		return UAnimDataController::StaticClass();
	}
	struct Z_Construct_UClass_UAnimDataController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Model_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Model;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelInterface_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_ModelInterface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimDataController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationDataController,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDataController_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AnimDataController.h" },
		{ "ModuleRelativePath", "Public/AnimDataController.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDataController_Statics::NewProp_Model_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimDataController.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UAnimDataController_Statics::NewProp_Model = { "Model", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimDataController, Model), Z_Construct_UClass_UAnimDataModel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimDataController_Statics::NewProp_Model_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataController_Statics::NewProp_Model_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimDataController_Statics::NewProp_ModelInterface_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimDataController.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAnimDataController_Statics::NewProp_ModelInterface = { "ModelInterface", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimDataController, ModelInterface), Z_Construct_UClass_UAnimationDataModel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimDataController_Statics::NewProp_ModelInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataController_Statics::NewProp_ModelInterface_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimDataController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataController_Statics::NewProp_Model,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimDataController_Statics::NewProp_ModelInterface,
	};
#endif // WITH_EDITORONLY_DATA
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimDataController_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAnimationDataController_NoRegister, (int32)VTABLE_OFFSET(UAnimDataController, IAnimationDataController), false },  // 1775500573
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimDataController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimDataController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimDataController_Statics::ClassParams = {
		&UAnimDataController::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UAnimDataController_Statics::PropPointers, nullptr),
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataController_Statics::PropPointers), 0),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimDataController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimDataController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimDataController()
	{
		if (!Z_Registration_Info_UClass_UAnimDataController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimDataController.OuterSingleton, Z_Construct_UClass_UAnimDataController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimDataController.OuterSingleton;
	}
	template<> ANIMATIONDATACONTROLLER_API UClass* StaticClass<UAnimDataController>()
	{
		return UAnimDataController::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimDataController);
	UAnimDataController::~UAnimDataController() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Developer_AnimationDataController_Public_AnimDataController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AnimationDataController_Public_AnimDataController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimDataController, UAnimDataController::StaticClass, TEXT("UAnimDataController"), &Z_Registration_Info_UClass_UAnimDataController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimDataController), 1849421619U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Developer_AnimationDataController_Public_AnimDataController_h_3453750019(TEXT("/Script/AnimationDataController"),
		Z_CompiledInDeferFile_FID_Engine_Source_Developer_AnimationDataController_Public_AnimDataController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Developer_AnimationDataController_Public_AnimDataController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
