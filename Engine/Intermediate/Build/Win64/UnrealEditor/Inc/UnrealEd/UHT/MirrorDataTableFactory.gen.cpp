// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Factories/MirrorDataTableFactory.h"
#include "../../Source/Runtime/Engine/Classes/Animation/MirrorDataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMirrorDataTableFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMirrorFindReplaceExpression();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UNREALED_API UClass* Z_Construct_UClass_UMirrorDataTableFactory();
	UNREALED_API UClass* Z_Construct_UClass_UMirrorDataTableFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UMirrorTableFindReplaceExpressions();
	UNREALED_API UClass* Z_Construct_UClass_UMirrorTableFindReplaceExpressions_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UMirrorTableFindReplaceExpressions::StaticRegisterNativesUMirrorTableFindReplaceExpressions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMirrorTableFindReplaceExpressions);
	UClass* Z_Construct_UClass_UMirrorTableFindReplaceExpressions_NoRegister()
	{
		return UMirrorTableFindReplaceExpressions::StaticClass();
	}
	struct Z_Construct_UClass_UMirrorTableFindReplaceExpressions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FindReplaceExpressions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FindReplaceExpressions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FindReplaceExpressions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMirrorTableFindReplaceExpressions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorTableFindReplaceExpressions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/MirrorDataTableFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/MirrorDataTableFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMirrorTableFindReplaceExpressions_Statics::NewProp_FindReplaceExpressions_Inner = { "FindReplaceExpressions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMirrorFindReplaceExpression, METADATA_PARAMS(nullptr, 0) }; // 633994333
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorTableFindReplaceExpressions_Statics::NewProp_FindReplaceExpressions_MetaData[] = {
		{ "Category", "TableCreation" },
		{ "Comment", "// Collection of animations for motion matching\n" },
		{ "ModuleRelativePath", "Classes/Factories/MirrorDataTableFactory.h" },
		{ "ToolTip", "Collection of animations for motion matching" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMirrorTableFindReplaceExpressions_Statics::NewProp_FindReplaceExpressions = { "FindReplaceExpressions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMirrorTableFindReplaceExpressions, FindReplaceExpressions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMirrorTableFindReplaceExpressions_Statics::NewProp_FindReplaceExpressions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorTableFindReplaceExpressions_Statics::NewProp_FindReplaceExpressions_MetaData)) }; // 633994333
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMirrorTableFindReplaceExpressions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorTableFindReplaceExpressions_Statics::NewProp_FindReplaceExpressions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorTableFindReplaceExpressions_Statics::NewProp_FindReplaceExpressions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMirrorTableFindReplaceExpressions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMirrorTableFindReplaceExpressions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMirrorTableFindReplaceExpressions_Statics::ClassParams = {
		&UMirrorTableFindReplaceExpressions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMirrorTableFindReplaceExpressions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorTableFindReplaceExpressions_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMirrorTableFindReplaceExpressions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorTableFindReplaceExpressions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMirrorTableFindReplaceExpressions()
	{
		if (!Z_Registration_Info_UClass_UMirrorTableFindReplaceExpressions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMirrorTableFindReplaceExpressions.OuterSingleton, Z_Construct_UClass_UMirrorTableFindReplaceExpressions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMirrorTableFindReplaceExpressions.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UMirrorTableFindReplaceExpressions>()
	{
		return UMirrorTableFindReplaceExpressions::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMirrorTableFindReplaceExpressions);
	UMirrorTableFindReplaceExpressions::~UMirrorTableFindReplaceExpressions() {}
	void UMirrorDataTableFactory::StaticRegisterNativesUMirrorDataTableFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMirrorDataTableFactory);
	UClass* Z_Construct_UClass_UMirrorDataTableFactory_NoRegister()
	{
		return UMirrorDataTableFactory::StaticClass();
	}
	struct Z_Construct_UClass_UMirrorDataTableFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Struct_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Struct;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Skeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MirrorFindReplaceExpressions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MirrorFindReplaceExpressions;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMirrorDataTableFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorDataTableFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Factories/MirrorDataTableFactory.h" },
		{ "ModuleRelativePath", "Classes/Factories/MirrorDataTableFactory.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorDataTableFactory_Statics::NewProp_Struct_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/MirrorDataTableFactory.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMirrorDataTableFactory_Statics::NewProp_Struct = { "Struct", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMirrorDataTableFactory, Struct), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UClass_UMirrorDataTableFactory_Statics::NewProp_Struct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorDataTableFactory_Statics::NewProp_Struct_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorDataTableFactory_Statics::NewProp_Skeleton_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/MirrorDataTableFactory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMirrorDataTableFactory_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMirrorDataTableFactory, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMirrorDataTableFactory_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorDataTableFactory_Statics::NewProp_Skeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMirrorDataTableFactory_Statics::NewProp_MirrorFindReplaceExpressions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Factories/MirrorDataTableFactory.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMirrorDataTableFactory_Statics::NewProp_MirrorFindReplaceExpressions = { "MirrorFindReplaceExpressions", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMirrorDataTableFactory, MirrorFindReplaceExpressions), Z_Construct_UClass_UMirrorTableFindReplaceExpressions_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMirrorDataTableFactory_Statics::NewProp_MirrorFindReplaceExpressions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorDataTableFactory_Statics::NewProp_MirrorFindReplaceExpressions_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMirrorDataTableFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorDataTableFactory_Statics::NewProp_Struct,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorDataTableFactory_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMirrorDataTableFactory_Statics::NewProp_MirrorFindReplaceExpressions,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMirrorDataTableFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMirrorDataTableFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMirrorDataTableFactory_Statics::ClassParams = {
		&UMirrorDataTableFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMirrorDataTableFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorDataTableFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMirrorDataTableFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMirrorDataTableFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMirrorDataTableFactory()
	{
		if (!Z_Registration_Info_UClass_UMirrorDataTableFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMirrorDataTableFactory.OuterSingleton, Z_Construct_UClass_UMirrorDataTableFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMirrorDataTableFactory.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UMirrorDataTableFactory>()
	{
		return UMirrorDataTableFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMirrorDataTableFactory);
	UMirrorDataTableFactory::~UMirrorDataTableFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MirrorDataTableFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MirrorDataTableFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMirrorTableFindReplaceExpressions, UMirrorTableFindReplaceExpressions::StaticClass, TEXT("UMirrorTableFindReplaceExpressions"), &Z_Registration_Info_UClass_UMirrorTableFindReplaceExpressions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMirrorTableFindReplaceExpressions), 2072539611U) },
		{ Z_Construct_UClass_UMirrorDataTableFactory, UMirrorDataTableFactory::StaticClass, TEXT("UMirrorDataTableFactory"), &Z_Registration_Info_UClass_UMirrorDataTableFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMirrorDataTableFactory), 1294830616U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MirrorDataTableFactory_h_757051131(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MirrorDataTableFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Factories_MirrorDataTableFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
