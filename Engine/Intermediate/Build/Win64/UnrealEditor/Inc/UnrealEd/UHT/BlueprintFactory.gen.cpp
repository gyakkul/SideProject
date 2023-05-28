// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/BlueprintFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlueprintType();
	UNREALED_API UClass* Z_Construct_UClass_UBlueprintFactory();
	UNREALED_API UClass* Z_Construct_UClass_UBlueprintFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UBlueprintFactory::StaticRegisterNativesUBlueprintFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintFactory);
	UClass* Z_Construct_UClass_UBlueprintFactory_NoRegister()
	{
		return UBlueprintFactory::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlueprintType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlueprintType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipClassPicker_MetaData[];
#endif
		static void NewProp_bSkipClassPicker_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipClassPicker;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/BlueprintFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/BlueprintFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintFactory_Statics::NewProp_ParentClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "BlueprintBaseOnly", "" },
		{ "Category", "BlueprintFactory" },
		{ "Comment", "// The parent class of the created blueprint\n" },
		{ "ModuleRelativePath", "Classes/Factories/BlueprintFactory.h" },
		{ "ToolTip", "The parent class of the created blueprint" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBlueprintFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBlueprintFactory_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintFactory_Statics::NewProp_ParentClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintFactory_Statics::NewProp_BlueprintType_MetaData[] = {
		{ "Comment", "// The type of Blueprint to create in FactoryCreateNew\n" },
		{ "ModuleRelativePath", "Classes/Factories/BlueprintFactory.h" },
		{ "ToolTip", "The type of Blueprint to create in FactoryCreateNew" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBlueprintFactory_Statics::NewProp_BlueprintType = { "BlueprintType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBlueprintFactory, BlueprintType), Z_Construct_UEnum_Engine_EBlueprintType, METADATA_PARAMS(Z_Construct_UClass_UBlueprintFactory_Statics::NewProp_BlueprintType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintFactory_Statics::NewProp_BlueprintType_MetaData)) }; // 594944057
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintFactory_Statics::NewProp_bSkipClassPicker_MetaData[] = {
		{ "Comment", "// Skips the class choosing dialog and uses the ParentClass as the blueprint base class\n" },
		{ "ModuleRelativePath", "Classes/Factories/BlueprintFactory.h" },
		{ "ToolTip", "Skips the class choosing dialog and uses the ParentClass as the blueprint base class" },
	};
#endif
	void Z_Construct_UClass_UBlueprintFactory_Statics::NewProp_bSkipClassPicker_SetBit(void* Obj)
	{
		((UBlueprintFactory*)Obj)->bSkipClassPicker = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBlueprintFactory_Statics::NewProp_bSkipClassPicker = { "bSkipClassPicker", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBlueprintFactory), &Z_Construct_UClass_UBlueprintFactory_Statics::NewProp_bSkipClassPicker_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBlueprintFactory_Statics::NewProp_bSkipClassPicker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintFactory_Statics::NewProp_bSkipClassPicker_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlueprintFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintFactory_Statics::NewProp_ParentClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintFactory_Statics::NewProp_BlueprintType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlueprintFactory_Statics::NewProp_bSkipClassPicker,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintFactory_Statics::ClassParams = {
		&UBlueprintFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBlueprintFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintFactory_Statics::PropPointers),
		0,
		0x001020A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintFactory()
	{
		if (!Z_Registration_Info_UClass_UBlueprintFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintFactory.OuterSingleton, Z_Construct_UClass_UBlueprintFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UBlueprintFactory>()
	{
		return UBlueprintFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintFactory);
	UBlueprintFactory::~UBlueprintFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintFactory, UBlueprintFactory::StaticClass, TEXT("UBlueprintFactory"), &Z_Registration_Info_UClass_UBlueprintFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintFactory), 2243101524U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_1011324943(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_BlueprintFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
