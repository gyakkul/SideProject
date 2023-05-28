// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Elements/Actor/ActorElementEditorCopyAndPaste.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorElementEditorCopyAndPaste() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UNREALED_API UClass* Z_Construct_UClass_UActorElementsCopy();
	UNREALED_API UClass* Z_Construct_UClass_UActorElementsCopy_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorElementsExporterT3D();
	UNREALED_API UClass* Z_Construct_UClass_UActorElementsExporterT3D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorElementsCopy::StaticRegisterNativesUActorElementsCopy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorElementsCopy);
	UClass* Z_Construct_UClass_UActorElementsCopy_NoRegister()
	{
		return UActorElementsCopy::StaticClass();
	}
	struct Z_Construct_UClass_UActorElementsCopy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActorsToCopy_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToCopy_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorsToCopy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorElementsCopy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorElementsCopy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Elements/Actor/ActorElementEditorCopyAndPaste.h" },
		{ "ModuleRelativePath", "Public/Elements/Actor/ActorElementEditorCopyAndPaste.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UActorElementsCopy_Statics::NewProp_ActorsToCopy_Inner = { "ActorsToCopy", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorElementsCopy_Statics::NewProp_ActorsToCopy_MetaData[] = {
		{ "Category", "TypedElement|Actor|Copy" },
		{ "ModuleRelativePath", "Public/Elements/Actor/ActorElementEditorCopyAndPaste.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorElementsCopy_Statics::NewProp_ActorsToCopy = { "ActorsToCopy", nullptr, (EPropertyFlags)0x0014000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorElementsCopy, ActorsToCopy), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActorElementsCopy_Statics::NewProp_ActorsToCopy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorElementsCopy_Statics::NewProp_ActorsToCopy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorElementsCopy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorElementsCopy_Statics::NewProp_ActorsToCopy_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorElementsCopy_Statics::NewProp_ActorsToCopy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorElementsCopy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorElementsCopy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorElementsCopy_Statics::ClassParams = {
		&UActorElementsCopy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorElementsCopy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorElementsCopy_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActorElementsCopy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorElementsCopy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorElementsCopy()
	{
		if (!Z_Registration_Info_UClass_UActorElementsCopy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorElementsCopy.OuterSingleton, Z_Construct_UClass_UActorElementsCopy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorElementsCopy.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorElementsCopy>()
	{
		return UActorElementsCopy::StaticClass();
	}
	UActorElementsCopy::UActorElementsCopy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorElementsCopy);
	UActorElementsCopy::~UActorElementsCopy() {}
	void UActorElementsExporterT3D::StaticRegisterNativesUActorElementsExporterT3D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorElementsExporterT3D);
	UClass* Z_Construct_UClass_UActorElementsExporterT3D_NoRegister()
	{
		return UActorElementsExporterT3D::StaticClass();
	}
	struct Z_Construct_UClass_UActorElementsExporterT3D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorElementsExporterT3D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorElementsExporterT3D_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Actor/ActorElementEditorCopyAndPaste.h" },
		{ "ModuleRelativePath", "Public/Elements/Actor/ActorElementEditorCopyAndPaste.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorElementsExporterT3D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorElementsExporterT3D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorElementsExporterT3D_Statics::ClassParams = {
		&UActorElementsExporterT3D::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UActorElementsExporterT3D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorElementsExporterT3D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorElementsExporterT3D()
	{
		if (!Z_Registration_Info_UClass_UActorElementsExporterT3D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorElementsExporterT3D.OuterSingleton, Z_Construct_UClass_UActorElementsExporterT3D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorElementsExporterT3D.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorElementsExporterT3D>()
	{
		return UActorElementsExporterT3D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorElementsExporterT3D);
	UActorElementsExporterT3D::~UActorElementsExporterT3D() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementEditorCopyAndPaste_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementEditorCopyAndPaste_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorElementsCopy, UActorElementsCopy::StaticClass, TEXT("UActorElementsCopy"), &Z_Registration_Info_UClass_UActorElementsCopy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorElementsCopy), 3659109980U) },
		{ Z_Construct_UClass_UActorElementsExporterT3D, UActorElementsExporterT3D::StaticClass, TEXT("UActorElementsExporterT3D"), &Z_Registration_Info_UClass_UActorElementsExporterT3D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorElementsExporterT3D), 4053316390U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementEditorCopyAndPaste_h_3121483568(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementEditorCopyAndPaste_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementEditorCopyAndPaste_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
