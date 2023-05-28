// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PersonaPreviewSceneDescription.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersonaPreviewSceneDescription() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAnimBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPreviewMeshCollection_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod();
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneController_NoRegister();
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneDescription();
	PERSONA_API UClass* Z_Construct_UClass_UPersonaPreviewSceneDescription_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Persona();
// End Cross Module References
	void UPersonaPreviewSceneDescription::StaticRegisterNativesUPersonaPreviewSceneDescription()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPersonaPreviewSceneDescription);
	UClass* Z_Construct_UClass_UPersonaPreviewSceneDescription_NoRegister()
	{
		return UPersonaPreviewSceneDescription::StaticClass();
	}
	struct Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewController_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_PreviewController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewControllerInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewControllerInstance;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewControllerInstances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewControllerInstances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreviewControllerInstances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewAnimationBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_PreviewAnimationBlueprint;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ApplicationMethod_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplicationMethod_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ApplicationMethod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkedAnimGraphTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_LinkedAnimGraphTag;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_AdditionalMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultAdditionalMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DefaultAdditionalMeshes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Persona,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PersonaPreviewSceneDescription.h" },
		{ "ModuleRelativePath", "Private/PersonaPreviewSceneDescription.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewController_MetaData[] = {
		{ "Category", "Animation" },
		{ "Comment", "// The method by which the preview is animated\n" },
		{ "ModuleRelativePath", "Private/PersonaPreviewSceneDescription.h" },
		{ "ToolTip", "The method by which the preview is animated" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewController = { "PreviewController", nullptr, (EPropertyFlags)0x0014000002000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaPreviewSceneDescription, PreviewController), Z_Construct_UClass_UClass, Z_Construct_UClass_UPersonaPreviewSceneController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewControllerInstance_MetaData[] = {
		{ "ModuleRelativePath", "Private/PersonaPreviewSceneDescription.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewControllerInstance = { "PreviewControllerInstance", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaPreviewSceneDescription, PreviewControllerInstance), Z_Construct_UClass_UPersonaPreviewSceneController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewControllerInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewControllerInstance_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewControllerInstances_Inner = { "PreviewControllerInstances", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPersonaPreviewSceneController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewControllerInstances_MetaData[] = {
		{ "ModuleRelativePath", "Private/PersonaPreviewSceneDescription.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewControllerInstances = { "PreviewControllerInstances", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaPreviewSceneDescription, PreviewControllerInstances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewControllerInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewControllerInstances_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** The preview mesh to use */" },
		{ "DisplayThumbnail", "TRUE" },
		{ "ModuleRelativePath", "Private/PersonaPreviewSceneDescription.h" },
		{ "ToolTip", "The preview mesh to use" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaPreviewSceneDescription, PreviewMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewAnimationBlueprint_MetaData[] = {
		{ "Category", "Animation Blueprint" },
		{ "Comment", "/** The preview anim blueprint to use */" },
		{ "DisplayThumbnail", "TRUE" },
		{ "ModuleRelativePath", "Private/PersonaPreviewSceneDescription.h" },
		{ "ToolTip", "The preview anim blueprint to use" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewAnimationBlueprint = { "PreviewAnimationBlueprint", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaPreviewSceneDescription, PreviewAnimationBlueprint), Z_Construct_UClass_UAnimBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewAnimationBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewAnimationBlueprint_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_ApplicationMethod_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_ApplicationMethod_MetaData[] = {
		{ "Category", "Animation Blueprint" },
		{ "Comment", "/** The method by which a preview animation blueprint is applied, either as an overlay layer, or as a linked instance */" },
		{ "ModuleRelativePath", "Private/PersonaPreviewSceneDescription.h" },
		{ "ToolTip", "The method by which a preview animation blueprint is applied, either as an overlay layer, or as a linked instance" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_ApplicationMethod = { "ApplicationMethod", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaPreviewSceneDescription, ApplicationMethod), Z_Construct_UEnum_Engine_EPreviewAnimationBlueprintApplicationMethod, METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_ApplicationMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_ApplicationMethod_MetaData)) }; // 3755832417
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_LinkedAnimGraphTag_MetaData[] = {
		{ "Category", "Animation Blueprint" },
		{ "Comment", "/** The tag to use when applying a preview animation blueprint via LinkAnimGraphByTag */" },
		{ "ModuleRelativePath", "Private/PersonaPreviewSceneDescription.h" },
		{ "ToolTip", "The tag to use when applying a preview animation blueprint via LinkAnimGraphByTag" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_LinkedAnimGraphTag = { "LinkedAnimGraphTag", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaPreviewSceneDescription, LinkedAnimGraphTag), METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_LinkedAnimGraphTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_LinkedAnimGraphTag_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_AdditionalMeshes_MetaData[] = {
		{ "Category", "Additional Meshes" },
		{ "ModuleRelativePath", "Private/PersonaPreviewSceneDescription.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_AdditionalMeshes = { "AdditionalMeshes", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaPreviewSceneDescription, AdditionalMeshes), Z_Construct_UClass_UDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_AdditionalMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_AdditionalMeshes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_DefaultAdditionalMeshes_MetaData[] = {
		{ "ModuleRelativePath", "Private/PersonaPreviewSceneDescription.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_DefaultAdditionalMeshes = { "DefaultAdditionalMeshes", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPersonaPreviewSceneDescription, DefaultAdditionalMeshes), Z_Construct_UClass_UPreviewMeshCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_DefaultAdditionalMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_DefaultAdditionalMeshes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewControllerInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewControllerInstances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewControllerInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_PreviewAnimationBlueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_ApplicationMethod_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_ApplicationMethod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_LinkedAnimGraphTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_AdditionalMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::NewProp_DefaultAdditionalMeshes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPersonaPreviewSceneDescription>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::ClassParams = {
		&UPersonaPreviewSceneDescription::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPersonaPreviewSceneDescription()
	{
		if (!Z_Registration_Info_UClass_UPersonaPreviewSceneDescription.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPersonaPreviewSceneDescription.OuterSingleton, Z_Construct_UClass_UPersonaPreviewSceneDescription_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPersonaPreviewSceneDescription.OuterSingleton;
	}
	template<> PERSONA_API UClass* StaticClass<UPersonaPreviewSceneDescription>()
	{
		return UPersonaPreviewSceneDescription::StaticClass();
	}
	UPersonaPreviewSceneDescription::UPersonaPreviewSceneDescription(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPersonaPreviewSceneDescription);
	UPersonaPreviewSceneDescription::~UPersonaPreviewSceneDescription() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneDescription_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneDescription_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPersonaPreviewSceneDescription, UPersonaPreviewSceneDescription::StaticClass, TEXT("UPersonaPreviewSceneDescription"), &Z_Registration_Info_UClass_UPersonaPreviewSceneDescription, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPersonaPreviewSceneDescription), 3553165407U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneDescription_h_2505151107(TEXT("/Script/Persona"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneDescription_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Persona_Private_PersonaPreviewSceneDescription_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
