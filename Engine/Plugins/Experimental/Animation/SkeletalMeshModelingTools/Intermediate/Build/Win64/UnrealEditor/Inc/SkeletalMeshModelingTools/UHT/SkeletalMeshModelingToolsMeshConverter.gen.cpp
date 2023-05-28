// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SkeletalMeshModelingToolsMeshConverter.h"
#include "../../Source/Runtime/Engine/Public/BoneContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkeletalMeshModelingToolsMeshConverter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_UBoneReferenceSkeletonProvider_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FBoneReference();
	SKELETALMESHMODELINGTOOLS_API UClass* Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory();
	SKELETALMESHMODELINGTOOLS_API UClass* Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory_NoRegister();
	SKELETALMESHMODELINGTOOLS_API UClass* Z_Construct_UClass_USkeletonFromStaticMeshFactory();
	SKELETALMESHMODELINGTOOLS_API UClass* Z_Construct_UClass_USkeletonFromStaticMeshFactory_NoRegister();
	SKELETALMESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions();
	SKELETALMESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_NoRegister();
	SKELETALMESHMODELINGTOOLS_API UEnum* Z_Construct_UEnum_SkeletalMeshModelingTools_EReferenceSkeletonImportOption();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_SkeletalMeshModelingTools();
// End Cross Module References
	void USkeletonFromStaticMeshFactory::StaticRegisterNativesUSkeletonFromStaticMeshFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletonFromStaticMeshFactory);
	UClass* Z_Construct_UClass_USkeletonFromStaticMeshFactory_NoRegister()
	{
		return USkeletonFromStaticMeshFactory::StaticClass();
	}
	struct Z_Construct_UClass_USkeletonFromStaticMeshFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletonFromStaticMeshFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SkeletalMeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletonFromStaticMeshFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkeletalMeshModelingToolsMeshConverter.h" },
		{ "ModuleRelativePath", "Private/SkeletalMeshModelingToolsMeshConverter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletonFromStaticMeshFactory_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "ModuleRelativePath", "Private/SkeletalMeshModelingToolsMeshConverter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletonFromStaticMeshFactory_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletonFromStaticMeshFactory, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletonFromStaticMeshFactory_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletonFromStaticMeshFactory_Statics::NewProp_StaticMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkeletonFromStaticMeshFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletonFromStaticMeshFactory_Statics::NewProp_StaticMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletonFromStaticMeshFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletonFromStaticMeshFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletonFromStaticMeshFactory_Statics::ClassParams = {
		&USkeletonFromStaticMeshFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkeletonFromStaticMeshFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USkeletonFromStaticMeshFactory_Statics::PropPointers),
		0,
		0x010800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USkeletonFromStaticMeshFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletonFromStaticMeshFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletonFromStaticMeshFactory()
	{
		if (!Z_Registration_Info_UClass_USkeletonFromStaticMeshFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletonFromStaticMeshFactory.OuterSingleton, Z_Construct_UClass_USkeletonFromStaticMeshFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletonFromStaticMeshFactory.OuterSingleton;
	}
	template<> SKELETALMESHMODELINGTOOLS_API UClass* StaticClass<USkeletonFromStaticMeshFactory>()
	{
		return USkeletonFromStaticMeshFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletonFromStaticMeshFactory);
	USkeletonFromStaticMeshFactory::~USkeletonFromStaticMeshFactory() {}
	void USkeletalMeshFromStaticMeshFactory::StaticRegisterNativesUSkeletalMeshFromStaticMeshFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USkeletalMeshFromStaticMeshFactory);
	UClass* Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory_NoRegister()
	{
		return USkeletalMeshFromStaticMeshFactory::StaticClass();
	}
	struct Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Skeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BindBoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_SkeletalMeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SkeletalMeshModelingToolsMeshConverter.h" },
		{ "ModuleRelativePath", "Private/SkeletalMeshModelingToolsMeshConverter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory_Statics::NewProp_Skeleton_MetaData[] = {
		{ "ModuleRelativePath", "Private/SkeletalMeshModelingToolsMeshConverter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshFromStaticMeshFactory, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory_Statics::NewProp_Skeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "ModuleRelativePath", "Private/SkeletalMeshModelingToolsMeshConverter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshFromStaticMeshFactory, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory_Statics::NewProp_StaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory_Statics::NewProp_StaticMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory_Statics::NewProp_BindBoneName_MetaData[] = {
		{ "ModuleRelativePath", "Private/SkeletalMeshModelingToolsMeshConverter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory_Statics::NewProp_BindBoneName = { "BindBoneName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USkeletalMeshFromStaticMeshFactory, BindBoneName), METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory_Statics::NewProp_BindBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory_Statics::NewProp_BindBoneName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory_Statics::NewProp_StaticMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory_Statics::NewProp_BindBoneName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USkeletalMeshFromStaticMeshFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory_Statics::ClassParams = {
		&USkeletalMeshFromStaticMeshFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory_Statics::PropPointers),
		0,
		0x010800A0u,
		METADATA_PARAMS(Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory()
	{
		if (!Z_Registration_Info_UClass_USkeletalMeshFromStaticMeshFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USkeletalMeshFromStaticMeshFactory.OuterSingleton, Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USkeletalMeshFromStaticMeshFactory.OuterSingleton;
	}
	template<> SKELETALMESHMODELINGTOOLS_API UClass* StaticClass<USkeletalMeshFromStaticMeshFactory>()
	{
		return USkeletalMeshFromStaticMeshFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USkeletalMeshFromStaticMeshFactory);
	USkeletalMeshFromStaticMeshFactory::~USkeletalMeshFromStaticMeshFactory() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EReferenceSkeletonImportOption;
	static UEnum* EReferenceSkeletonImportOption_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EReferenceSkeletonImportOption.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EReferenceSkeletonImportOption.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SkeletalMeshModelingTools_EReferenceSkeletonImportOption, (UObject*)Z_Construct_UPackage__Script_SkeletalMeshModelingTools(), TEXT("EReferenceSkeletonImportOption"));
		}
		return Z_Registration_Info_UEnum_EReferenceSkeletonImportOption.OuterSingleton;
	}
	template<> SKELETALMESHMODELINGTOOLS_API UEnum* StaticEnum<EReferenceSkeletonImportOption>()
	{
		return EReferenceSkeletonImportOption_StaticEnum();
	}
	struct Z_Construct_UEnum_SkeletalMeshModelingTools_EReferenceSkeletonImportOption_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SkeletalMeshModelingTools_EReferenceSkeletonImportOption_Statics::Enumerators[] = {
		{ "EReferenceSkeletonImportOption::CreateNew", (int64)EReferenceSkeletonImportOption::CreateNew },
		{ "EReferenceSkeletonImportOption::UseExistingSkeleton", (int64)EReferenceSkeletonImportOption::UseExistingSkeleton },
		{ "EReferenceSkeletonImportOption::UseExistingSkeletalMesh", (int64)EReferenceSkeletonImportOption::UseExistingSkeletalMesh },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SkeletalMeshModelingTools_EReferenceSkeletonImportOption_Statics::Enum_MetaDataParams[] = {
		{ "CreateNew.Name", "EReferenceSkeletonImportOption::CreateNew" },
		{ "ModuleRelativePath", "Private/SkeletalMeshModelingToolsMeshConverter.h" },
		{ "UseExistingSkeletalMesh.Name", "EReferenceSkeletonImportOption::UseExistingSkeletalMesh" },
		{ "UseExistingSkeleton.Name", "EReferenceSkeletonImportOption::UseExistingSkeleton" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SkeletalMeshModelingTools_EReferenceSkeletonImportOption_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SkeletalMeshModelingTools,
		nullptr,
		"EReferenceSkeletonImportOption",
		"EReferenceSkeletonImportOption",
		Z_Construct_UEnum_SkeletalMeshModelingTools_EReferenceSkeletonImportOption_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SkeletalMeshModelingTools_EReferenceSkeletonImportOption_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SkeletalMeshModelingTools_EReferenceSkeletonImportOption_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SkeletalMeshModelingTools_EReferenceSkeletonImportOption_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SkeletalMeshModelingTools_EReferenceSkeletonImportOption()
	{
		if (!Z_Registration_Info_UEnum_EReferenceSkeletonImportOption.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EReferenceSkeletonImportOption.InnerSingleton, Z_Construct_UEnum_SkeletalMeshModelingTools_EReferenceSkeletonImportOption_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EReferenceSkeletonImportOption.InnerSingleton;
	}
	void UStaticMeshToSkeletalMeshConvertOptions::StaticRegisterNativesUStaticMeshToSkeletalMeshConvertOptions()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStaticMeshToSkeletalMeshConvertOptions);
	UClass* Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_NoRegister()
	{
		return UStaticMeshToSkeletalMeshConvertOptions::StaticClass();
	}
	struct Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_SkeletonImportOption_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletonImportOption_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SkeletonImportOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Skeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingBoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_SkeletalMeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "SkeletalMeshModelingToolsMeshConverter.h" },
		{ "ModuleRelativePath", "Private/SkeletalMeshModelingToolsMeshConverter.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::NewProp_SkeletonImportOption_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::NewProp_SkeletonImportOption_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Private/SkeletalMeshModelingToolsMeshConverter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::NewProp_SkeletonImportOption = { "SkeletonImportOption", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshToSkeletalMeshConvertOptions, SkeletonImportOption), Z_Construct_UEnum_SkeletalMeshModelingTools_EReferenceSkeletonImportOption, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::NewProp_SkeletonImportOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::NewProp_SkeletonImportOption_MetaData)) }; // 2014070529
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::NewProp_Skeleton_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.Skeleton" },
		{ "Category", "Import" },
		{ "EditCondition", "SkeletonImportOption==EReferenceSkeletonImportOption::UseExistingSkeleton" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/SkeletalMeshModelingToolsMeshConverter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshToSkeletalMeshConvertOptions, Skeleton), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::NewProp_Skeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "AllowedClasses", "/Script/Engine.SkeletalMesh" },
		{ "Category", "Import" },
		{ "EditCondition", "SkeletonImportOption==EReferenceSkeletonImportOption::UseExistingSkeletalMesh" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/SkeletalMeshModelingToolsMeshConverter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshToSkeletalMeshConvertOptions, SkeletalMesh), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::NewProp_BindingBoneName_MetaData[] = {
		{ "Category", "Import" },
		{ "EditCondition", "SkeletonImportOption!=EReferenceSkeletonImportOption::CreateNew" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Private/SkeletalMeshModelingToolsMeshConverter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::NewProp_BindingBoneName = { "BindingBoneName", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStaticMeshToSkeletalMeshConvertOptions, BindingBoneName), Z_Construct_UScriptStruct_FBoneReference, METADATA_PARAMS(Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::NewProp_BindingBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::NewProp_BindingBoneName_MetaData)) }; // 2906976723
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::NewProp_SkeletonImportOption_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::NewProp_SkeletonImportOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::NewProp_BindingBoneName,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBoneReferenceSkeletonProvider_NoRegister, (int32)VTABLE_OFFSET(UStaticMeshToSkeletalMeshConvertOptions, IBoneReferenceSkeletonProvider), false },  // 3827725125
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStaticMeshToSkeletalMeshConvertOptions>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::ClassParams = {
		&UStaticMeshToSkeletalMeshConvertOptions::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions()
	{
		if (!Z_Registration_Info_UClass_UStaticMeshToSkeletalMeshConvertOptions.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStaticMeshToSkeletalMeshConvertOptions.OuterSingleton, Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStaticMeshToSkeletalMeshConvertOptions.OuterSingleton;
	}
	template<> SKELETALMESHMODELINGTOOLS_API UClass* StaticClass<UStaticMeshToSkeletalMeshConvertOptions>()
	{
		return UStaticMeshToSkeletalMeshConvertOptions::StaticClass();
	}
	UStaticMeshToSkeletalMeshConvertOptions::UStaticMeshToSkeletalMeshConvertOptions(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStaticMeshToSkeletalMeshConvertOptions);
	UStaticMeshToSkeletalMeshConvertOptions::~UStaticMeshToSkeletalMeshConvertOptions() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_SkeletalMeshModelingToolsMeshConverter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_SkeletalMeshModelingToolsMeshConverter_h_Statics::EnumInfo[] = {
		{ EReferenceSkeletonImportOption_StaticEnum, TEXT("EReferenceSkeletonImportOption"), &Z_Registration_Info_UEnum_EReferenceSkeletonImportOption, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2014070529U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_SkeletalMeshModelingToolsMeshConverter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USkeletonFromStaticMeshFactory, USkeletonFromStaticMeshFactory::StaticClass, TEXT("USkeletonFromStaticMeshFactory"), &Z_Registration_Info_UClass_USkeletonFromStaticMeshFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletonFromStaticMeshFactory), 1004391828U) },
		{ Z_Construct_UClass_USkeletalMeshFromStaticMeshFactory, USkeletalMeshFromStaticMeshFactory::StaticClass, TEXT("USkeletalMeshFromStaticMeshFactory"), &Z_Registration_Info_UClass_USkeletalMeshFromStaticMeshFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USkeletalMeshFromStaticMeshFactory), 1456133386U) },
		{ Z_Construct_UClass_UStaticMeshToSkeletalMeshConvertOptions, UStaticMeshToSkeletalMeshConvertOptions::StaticClass, TEXT("UStaticMeshToSkeletalMeshConvertOptions"), &Z_Registration_Info_UClass_UStaticMeshToSkeletalMeshConvertOptions, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStaticMeshToSkeletalMeshConvertOptions), 2589946914U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_SkeletalMeshModelingToolsMeshConverter_h_2766115666(TEXT("/Script/SkeletalMeshModelingTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_SkeletalMeshModelingToolsMeshConverter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_SkeletalMeshModelingToolsMeshConverter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_SkeletalMeshModelingToolsMeshConverter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_SkeletalMeshModelingTools_Source_SkeletalMeshModelingTools_Private_SkeletalMeshModelingToolsMeshConverter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
