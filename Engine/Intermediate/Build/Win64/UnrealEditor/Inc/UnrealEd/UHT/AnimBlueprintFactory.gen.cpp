// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/AnimBlueprintFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimBlueprintFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlueprintType();
	UNREALED_API UClass* Z_Construct_UClass_UAnimBlueprintFactory();
	UNREALED_API UClass* Z_Construct_UClass_UAnimBlueprintFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UAnimLayerInterfaceFactory();
	UNREALED_API UClass* Z_Construct_UClass_UAnimLayerInterfaceFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UAnimBlueprintFactory::StaticRegisterNativesUAnimBlueprintFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimBlueprintFactory);
	UClass* Z_Construct_UClass_UAnimBlueprintFactory_NoRegister()
	{
		return UAnimBlueprintFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAnimBlueprintFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlueprintType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetSkeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TargetSkeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTemplate_MetaData[];
#endif
		static void NewProp_bTemplate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTemplate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimBlueprintFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/AnimBlueprintFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/AnimBlueprintFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintFactory_Statics::NewProp_BlueprintType_MetaData[] = {
		{ "Category", "AnimBlueprintFactory" },
		{ "Comment", "// The type of blueprint that will be created\n" },
		{ "ModuleRelativePath", "Classes/Factories/AnimBlueprintFactory.h" },
		{ "ToolTip", "The type of blueprint that will be created" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimBlueprintFactory_Statics::NewProp_BlueprintType = { "BlueprintType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimBlueprintFactory, BlueprintType), Z_Construct_UEnum_Engine_EBlueprintType, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintFactory_Statics::NewProp_BlueprintType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintFactory_Statics::NewProp_BlueprintType_MetaData)) }; // 594944057
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintFactory_Statics::NewProp_ParentClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "AnimBlueprintFactory" },
		{ "Comment", "// The parent class of the created blueprint\n" },
		{ "ModuleRelativePath", "Classes/Factories/AnimBlueprintFactory.h" },
		{ "ToolTip", "The parent class of the created blueprint" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAnimBlueprintFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimBlueprintFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintFactory_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintFactory_Statics::NewProp_ParentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintFactory_Statics::NewProp_TargetSkeleton_MetaData[] = {
		{ "Category", "AnimBlueprintFactory" },
		{ "Comment", "// The kind of skeleton that animation graphs compiled from the blueprint will animate\n" },
		{ "ModuleRelativePath", "Classes/Factories/AnimBlueprintFactory.h" },
		{ "ToolTip", "The kind of skeleton that animation graphs compiled from the blueprint will animate" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimBlueprintFactory_Statics::NewProp_TargetSkeleton = { "TargetSkeleton", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimBlueprintFactory, TargetSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintFactory_Statics::NewProp_TargetSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintFactory_Statics::NewProp_TargetSkeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintFactory_Statics::NewProp_PreviewSkeletalMesh_MetaData[] = {
		{ "Category", "AnimBlueprintFactory" },
		{ "Comment", "// The preview mesh to use with this animation blueprint\n" },
		{ "ModuleRelativePath", "Classes/Factories/AnimBlueprintFactory.h" },
		{ "ToolTip", "The preview mesh to use with this animation blueprint" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimBlueprintFactory_Statics::NewProp_PreviewSkeletalMesh = { "PreviewSkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimBlueprintFactory, PreviewSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintFactory_Statics::NewProp_PreviewSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintFactory_Statics::NewProp_PreviewSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimBlueprintFactory_Statics::NewProp_bTemplate_MetaData[] = {
		{ "Category", "AnimBlueprintFactory" },
		{ "Comment", "// Whether the created blueprint should be a template with no target skeleton\n" },
		{ "ModuleRelativePath", "Classes/Factories/AnimBlueprintFactory.h" },
		{ "ToolTip", "Whether the created blueprint should be a template with no target skeleton" },
	};
#endif
	void Z_Construct_UClass_UAnimBlueprintFactory_Statics::NewProp_bTemplate_SetBit(void* Obj)
	{
		((UAnimBlueprintFactory*)Obj)->bTemplate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimBlueprintFactory_Statics::NewProp_bTemplate = { "bTemplate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimBlueprintFactory), &Z_Construct_UClass_UAnimBlueprintFactory_Statics::NewProp_bTemplate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintFactory_Statics::NewProp_bTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintFactory_Statics::NewProp_bTemplate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimBlueprintFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintFactory_Statics::NewProp_BlueprintType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintFactory_Statics::NewProp_ParentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintFactory_Statics::NewProp_TargetSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintFactory_Statics::NewProp_PreviewSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimBlueprintFactory_Statics::NewProp_bTemplate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimBlueprintFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimBlueprintFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimBlueprintFactory_Statics::ClassParams = {
		&UAnimBlueprintFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimBlueprintFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintFactory_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimBlueprintFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimBlueprintFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimBlueprintFactory()
	{
		if (!Z_Registration_Info_UClass_UAnimBlueprintFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimBlueprintFactory.OuterSingleton, Z_Construct_UClass_UAnimBlueprintFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimBlueprintFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UAnimBlueprintFactory>()
	{
		return UAnimBlueprintFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimBlueprintFactory);
	UAnimBlueprintFactory::~UAnimBlueprintFactory() {}
	void UAnimLayerInterfaceFactory::StaticRegisterNativesUAnimLayerInterfaceFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimLayerInterfaceFactory);
	UClass* Z_Construct_UClass_UAnimLayerInterfaceFactory_NoRegister()
	{
		return UAnimLayerInterfaceFactory::StaticClass();
	}
	struct Z_Construct_UClass_UAnimLayerInterfaceFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimLayerInterfaceFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimBlueprintFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimLayerInterfaceFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Factories/AnimBlueprintFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/AnimBlueprintFactory.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimLayerInterfaceFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimLayerInterfaceFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimLayerInterfaceFactory_Statics::ClassParams = {
		&UAnimLayerInterfaceFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimLayerInterfaceFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimLayerInterfaceFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimLayerInterfaceFactory()
	{
		if (!Z_Registration_Info_UClass_UAnimLayerInterfaceFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimLayerInterfaceFactory.OuterSingleton, Z_Construct_UClass_UAnimLayerInterfaceFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimLayerInterfaceFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UAnimLayerInterfaceFactory>()
	{
		return UAnimLayerInterfaceFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimLayerInterfaceFactory);
	UAnimLayerInterfaceFactory::~UAnimLayerInterfaceFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBlueprintFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBlueprintFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimBlueprintFactory, UAnimBlueprintFactory::StaticClass, TEXT("UAnimBlueprintFactory"), &Z_Registration_Info_UClass_UAnimBlueprintFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimBlueprintFactory), 3568988597U) },
		{ Z_Construct_UClass_UAnimLayerInterfaceFactory, UAnimLayerInterfaceFactory::StaticClass, TEXT("UAnimLayerInterfaceFactory"), &Z_Registration_Info_UClass_UAnimLayerInterfaceFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimLayerInterfaceFactory), 204390148U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBlueprintFactory_h_1048207932(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBlueprintFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_AnimBlueprintFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
