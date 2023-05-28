// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Elements/Component/ComponentElementEditorCopyAndPaste.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentElementEditorCopyAndPaste() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UExporter();
	UNREALED_API UClass* Z_Construct_UClass_UComponentElementsCopy();
	UNREALED_API UClass* Z_Construct_UClass_UComponentElementsCopy_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UComponentElementsExporterT3D();
	UNREALED_API UClass* Z_Construct_UClass_UComponentElementsExporterT3D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UComponentElementsCopy::StaticRegisterNativesUComponentElementsCopy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComponentElementsCopy);
	UClass* Z_Construct_UClass_UComponentElementsCopy_NoRegister()
	{
		return UComponentElementsCopy::StaticClass();
	}
	struct Z_Construct_UClass_UComponentElementsCopy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ComponentsToCopy_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentsToCopy_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ComponentsToCopy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponentElementsCopy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponentElementsCopy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Elements/Component/ComponentElementEditorCopyAndPaste.h" },
		{ "ModuleRelativePath", "Public/Elements/Component/ComponentElementEditorCopyAndPaste.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComponentElementsCopy_Statics::NewProp_ComponentsToCopy_Inner = { "ComponentsToCopy", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponentElementsCopy_Statics::NewProp_ComponentsToCopy_MetaData[] = {
		{ "Category", "TypedElement|Component|Copy" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Elements/Component/ComponentElementEditorCopyAndPaste.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComponentElementsCopy_Statics::NewProp_ComponentsToCopy = { "ComponentsToCopy", nullptr, (EPropertyFlags)0x001400800000000c, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComponentElementsCopy, ComponentsToCopy), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UComponentElementsCopy_Statics::NewProp_ComponentsToCopy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComponentElementsCopy_Statics::NewProp_ComponentsToCopy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComponentElementsCopy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponentElementsCopy_Statics::NewProp_ComponentsToCopy_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComponentElementsCopy_Statics::NewProp_ComponentsToCopy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponentElementsCopy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponentElementsCopy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComponentElementsCopy_Statics::ClassParams = {
		&UComponentElementsCopy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComponentElementsCopy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComponentElementsCopy_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UComponentElementsCopy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponentElementsCopy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponentElementsCopy()
	{
		if (!Z_Registration_Info_UClass_UComponentElementsCopy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComponentElementsCopy.OuterSingleton, Z_Construct_UClass_UComponentElementsCopy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComponentElementsCopy.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UComponentElementsCopy>()
	{
		return UComponentElementsCopy::StaticClass();
	}
	UComponentElementsCopy::UComponentElementsCopy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponentElementsCopy);
	UComponentElementsCopy::~UComponentElementsCopy() {}
	void UComponentElementsExporterT3D::StaticRegisterNativesUComponentElementsExporterT3D()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComponentElementsExporterT3D);
	UClass* Z_Construct_UClass_UComponentElementsExporterT3D_NoRegister()
	{
		return UComponentElementsExporterT3D::StaticClass();
	}
	struct Z_Construct_UClass_UComponentElementsExporterT3D_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponentElementsExporterT3D_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UExporter,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponentElementsExporterT3D_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Component/ComponentElementEditorCopyAndPaste.h" },
		{ "ModuleRelativePath", "Public/Elements/Component/ComponentElementEditorCopyAndPaste.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponentElementsExporterT3D_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponentElementsExporterT3D>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComponentElementsExporterT3D_Statics::ClassParams = {
		&UComponentElementsExporterT3D::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UComponentElementsExporterT3D_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponentElementsExporterT3D_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponentElementsExporterT3D()
	{
		if (!Z_Registration_Info_UClass_UComponentElementsExporterT3D.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComponentElementsExporterT3D.OuterSingleton, Z_Construct_UClass_UComponentElementsExporterT3D_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComponentElementsExporterT3D.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UComponentElementsExporterT3D>()
	{
		return UComponentElementsExporterT3D::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponentElementsExporterT3D);
	UComponentElementsExporterT3D::~UComponentElementsExporterT3D() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorCopyAndPaste_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorCopyAndPaste_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComponentElementsCopy, UComponentElementsCopy::StaticClass, TEXT("UComponentElementsCopy"), &Z_Registration_Info_UClass_UComponentElementsCopy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComponentElementsCopy), 1817290914U) },
		{ Z_Construct_UClass_UComponentElementsExporterT3D, UComponentElementsExporterT3D::StaticClass, TEXT("UComponentElementsExporterT3D"), &Z_Registration_Info_UClass_UComponentElementsExporterT3D, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComponentElementsExporterT3D), 2069015904U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorCopyAndPaste_h_1917877255(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorCopyAndPaste_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementEditorCopyAndPaste_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
