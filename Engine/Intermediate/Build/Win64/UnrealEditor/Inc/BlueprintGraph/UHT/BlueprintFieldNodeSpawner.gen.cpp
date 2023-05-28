// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BlueprintFieldNodeSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintFieldNodeSpawner() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintFieldNodeSpawner();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintFieldNodeSpawner_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintNodeSpawner();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UField();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UBlueprintFieldNodeSpawner::StaticRegisterNativesUBlueprintFieldNodeSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintFieldNodeSpawner);
	UClass* Z_Construct_UClass_UBlueprintFieldNodeSpawner_NoRegister()
	{
		return UBlueprintFieldNodeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_OwnerClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Field;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Property_MetaData[];
#endif
		static const UECodeGen_Private::FFieldPathPropertyParams NewProp_Property;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintNodeSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Takes care of spawning various field related nodes (nodes associated with \n * functions, enums, structs, properties, etc.). Acts as the \"action\" portion\n * for certain FBlueprintActionMenuItems. \n */" },
		{ "IncludePath", "BlueprintFieldNodeSpawner.h" },
		{ "ModuleRelativePath", "Classes/BlueprintFieldNodeSpawner.h" },
		{ "ToolTip", "Takes care of spawning various field related nodes (nodes associated with\nfunctions, enums, structs, properties, etc.). Acts as the \"action\" portion\nfor certain FBlueprintActionMenuItems." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::NewProp_OwnerClass_MetaData[] = {
		{ "Comment", "/** The owning class to configure new nodes with. */" },
		{ "ModuleRelativePath", "Classes/BlueprintFieldNodeSpawner.h" },
		{ "NativeConstTemplateArg", "" },
		{ "ToolTip", "The owning class to configure new nodes with." },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::NewProp_OwnerClass = { "OwnerClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintFieldNodeSpawner, OwnerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::NewProp_OwnerClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::NewProp_OwnerClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::NewProp_Field_MetaData[] = {
		{ "Comment", "/** The field to configure new nodes with. */" },
		{ "ModuleRelativePath", "Classes/BlueprintFieldNodeSpawner.h" },
		{ "ToolTip", "The field to configure new nodes with." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintFieldNodeSpawner, Field), Z_Construct_UClass_UField, METADATA_PARAMS(Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::NewProp_Field_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::NewProp_Field_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::NewProp_Property_MetaData[] = {
		{ "ModuleRelativePath", "Classes/BlueprintFieldNodeSpawner.h" },
	};
#endif
	const UECodeGen_Private::FFieldPathPropertyParams Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::FieldPath, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintFieldNodeSpawner, Property), &FProperty::StaticClass, METADATA_PARAMS(Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::NewProp_Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::NewProp_Property_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::NewProp_OwnerClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::NewProp_Property,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintFieldNodeSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::ClassParams = {
		&UBlueprintFieldNodeSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintFieldNodeSpawner()
	{
		if (!Z_Registration_Info_UClass_UBlueprintFieldNodeSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintFieldNodeSpawner.OuterSingleton, Z_Construct_UClass_UBlueprintFieldNodeSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintFieldNodeSpawner.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UBlueprintFieldNodeSpawner>()
	{
		return UBlueprintFieldNodeSpawner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintFieldNodeSpawner);
	UBlueprintFieldNodeSpawner::~UBlueprintFieldNodeSpawner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintFieldNodeSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintFieldNodeSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintFieldNodeSpawner, UBlueprintFieldNodeSpawner::StaticClass, TEXT("UBlueprintFieldNodeSpawner"), &Z_Registration_Info_UClass_UBlueprintFieldNodeSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintFieldNodeSpawner), 1520383034U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintFieldNodeSpawner_h_1605237433(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintFieldNodeSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_BlueprintFieldNodeSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
