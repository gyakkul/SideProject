// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCO/CustomizableSkeletalMeshActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableSkeletalMeshActor() {}
// Cross Module References
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_ACustomizableSkeletalMeshActor();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_ACustomizableSkeletalMeshActor_NoRegister();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableSkeletalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ASkeletalMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObject();
// End Cross Module References
	void ACustomizableSkeletalMeshActor::StaticRegisterNativesACustomizableSkeletalMeshActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACustomizableSkeletalMeshActor);
	UClass* Z_Construct_UClass_ACustomizableSkeletalMeshActor_NoRegister()
	{
		return ACustomizableSkeletalMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CustomizableSkeletalComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomizableSkeletalComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CustomizableSkeletalComponents;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMeshComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SkeletalMeshComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomizableSkeletalComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CustomizableSkeletalComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ASkeletalMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ChildCanTick", "" },
		{ "ClassGroupNames", "CustomizableObject" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "MuCO/CustomizableSkeletalMeshActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableSkeletalMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::NewProp_CustomizableSkeletalComponents_Inner = { "CustomizableSkeletalComponents", nullptr, (EPropertyFlags)0x00040000000a0008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCustomizableSkeletalComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::NewProp_CustomizableSkeletalComponents_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CustomizableSkeletalMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableSkeletalMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::NewProp_CustomizableSkeletalComponents = { "CustomizableSkeletalComponents", nullptr, (EPropertyFlags)0x004400800002001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACustomizableSkeletalMeshActor, CustomizableSkeletalComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::NewProp_CustomizableSkeletalComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::NewProp_CustomizableSkeletalComponents_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::NewProp_SkeletalMeshComponents_Inner = { "SkeletalMeshComponents", nullptr, (EPropertyFlags)0x00040000000a0008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::NewProp_SkeletalMeshComponents_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CustomizableSkeletalMesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableSkeletalMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::NewProp_SkeletalMeshComponents = { "SkeletalMeshComponents", nullptr, (EPropertyFlags)0x004400800002001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACustomizableSkeletalMeshActor, SkeletalMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::NewProp_SkeletalMeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::NewProp_SkeletalMeshComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::NewProp_CustomizableSkeletalComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CustomizableSkeletalMesh" },
		{ "Comment", "// TODO: This is a temporary fix to not break the demos, we should update the demos to support the arrays of components\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableSkeletalMeshActor.h" },
		{ "ToolTip", "TODO: This is a temporary fix to not break the demos, we should update the demos to support the arrays of components" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::NewProp_CustomizableSkeletalComponent = { "CustomizableSkeletalComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACustomizableSkeletalMeshActor, CustomizableSkeletalComponent), Z_Construct_UClass_UCustomizableSkeletalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::NewProp_CustomizableSkeletalComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::NewProp_CustomizableSkeletalComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::NewProp_CustomizableSkeletalComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::NewProp_CustomizableSkeletalComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::NewProp_SkeletalMeshComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::NewProp_SkeletalMeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::NewProp_CustomizableSkeletalComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACustomizableSkeletalMeshActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::ClassParams = {
		&ACustomizableSkeletalMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACustomizableSkeletalMeshActor()
	{
		if (!Z_Registration_Info_UClass_ACustomizableSkeletalMeshActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACustomizableSkeletalMeshActor.OuterSingleton, Z_Construct_UClass_ACustomizableSkeletalMeshActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACustomizableSkeletalMeshActor.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECT_API UClass* StaticClass<ACustomizableSkeletalMeshActor>()
	{
		return ACustomizableSkeletalMeshActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACustomizableSkeletalMeshActor);
	ACustomizableSkeletalMeshActor::~ACustomizableSkeletalMeshActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableSkeletalMeshActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableSkeletalMeshActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACustomizableSkeletalMeshActor, ACustomizableSkeletalMeshActor::StaticClass, TEXT("ACustomizableSkeletalMeshActor"), &Z_Registration_Info_UClass_ACustomizableSkeletalMeshActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACustomizableSkeletalMeshActor), 35419899U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableSkeletalMeshActor_h_3728693867(TEXT("/Script/CustomizableObject"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableSkeletalMeshActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableSkeletalMeshActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
