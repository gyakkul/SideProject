// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DataprepSelectionTransforms.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataprepSelectionTransforms() {}
// Cross Module References
	DATAPREPCORE_API UClass* Z_Construct_UClass_UDataprepSelectionTransform();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepActorComponentsSelectionTransform();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepActorComponentsSelectionTransform_NoRegister();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepHierarchySelectionTransform();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepHierarchySelectionTransform_NoRegister();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepOwningActorSelectionTransform();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepOwningActorSelectionTransform_NoRegister();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepReferencedSelectionTransform();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepReferencedSelectionTransform_NoRegister();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepReferenceSelectionTransform();
	DATAPREPLIBRARIES_API UClass* Z_Construct_UClass_UDataprepReferenceSelectionTransform_NoRegister();
	DATAPREPLIBRARIES_API UEnum* Z_Construct_UEnum_DataprepLibraries_EDataprepHierarchySelectionPolicy();
	UPackage* Z_Construct_UPackage__Script_DataprepLibraries();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataprepHierarchySelectionPolicy;
	static UEnum* EDataprepHierarchySelectionPolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EDataprepHierarchySelectionPolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EDataprepHierarchySelectionPolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_DataprepLibraries_EDataprepHierarchySelectionPolicy, (UObject*)Z_Construct_UPackage__Script_DataprepLibraries(), TEXT("EDataprepHierarchySelectionPolicy"));
		}
		return Z_Registration_Info_UEnum_EDataprepHierarchySelectionPolicy.OuterSingleton;
	}
	template<> DATAPREPLIBRARIES_API UEnum* StaticEnum<EDataprepHierarchySelectionPolicy>()
	{
		return EDataprepHierarchySelectionPolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_DataprepLibraries_EDataprepHierarchySelectionPolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_DataprepLibraries_EDataprepHierarchySelectionPolicy_Statics::Enumerators[] = {
		{ "EDataprepHierarchySelectionPolicy::ImmediateChildren", (int64)EDataprepHierarchySelectionPolicy::ImmediateChildren },
		{ "EDataprepHierarchySelectionPolicy::AllDescendants", (int64)EDataprepHierarchySelectionPolicy::AllDescendants },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_DataprepLibraries_EDataprepHierarchySelectionPolicy_Statics::Enum_MetaDataParams[] = {
		{ "AllDescendants.Comment", "/** Select all descendants of the selected objects */" },
		{ "AllDescendants.Name", "EDataprepHierarchySelectionPolicy::AllDescendants" },
		{ "AllDescendants.ToolTip", "Select all descendants of the selected objects" },
		{ "ImmediateChildren.Comment", "/** Select immediate children of the selected objects */" },
		{ "ImmediateChildren.Name", "EDataprepHierarchySelectionPolicy::ImmediateChildren" },
		{ "ImmediateChildren.ToolTip", "Select immediate children of the selected objects" },
		{ "ModuleRelativePath", "Private/DataprepSelectionTransforms.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_DataprepLibraries_EDataprepHierarchySelectionPolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_DataprepLibraries,
		nullptr,
		"EDataprepHierarchySelectionPolicy",
		"EDataprepHierarchySelectionPolicy",
		Z_Construct_UEnum_DataprepLibraries_EDataprepHierarchySelectionPolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_DataprepLibraries_EDataprepHierarchySelectionPolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_DataprepLibraries_EDataprepHierarchySelectionPolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_DataprepLibraries_EDataprepHierarchySelectionPolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_DataprepLibraries_EDataprepHierarchySelectionPolicy()
	{
		if (!Z_Registration_Info_UEnum_EDataprepHierarchySelectionPolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataprepHierarchySelectionPolicy.InnerSingleton, Z_Construct_UEnum_DataprepLibraries_EDataprepHierarchySelectionPolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EDataprepHierarchySelectionPolicy.InnerSingleton;
	}
	void UDataprepReferenceSelectionTransform::StaticRegisterNativesUDataprepReferenceSelectionTransform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepReferenceSelectionTransform);
	UClass* Z_Construct_UClass_UDataprepReferenceSelectionTransform_NoRegister()
	{
		return UDataprepReferenceSelectionTransform::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepReferenceSelectionTransform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowIndirectReferences_MetaData[];
#endif
		static void NewProp_bAllowIndirectReferences_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowIndirectReferences;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepReferenceSelectionTransform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepSelectionTransform,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepLibraries,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepReferenceSelectionTransform_Statics::Class_MetaDataParams[] = {
		{ "Category", "SelectionTransform" },
		{ "DisplayName", "Select Referenced" },
		{ "IncludePath", "DataprepSelectionTransforms.h" },
		{ "ModuleRelativePath", "Private/DataprepSelectionTransforms.h" },
		{ "ToolTip", "Return assets directly used/referenced by the selected objects." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepReferenceSelectionTransform_Statics::NewProp_bAllowIndirectReferences_MetaData[] = {
		{ "Category", "HierarchySelectionOptions" },
		{ "ModuleRelativePath", "Private/DataprepSelectionTransforms.h" },
		{ "ToolTip", "Include assets referenced/used by assets directly referenced/used by selected objects" },
	};
#endif
	void Z_Construct_UClass_UDataprepReferenceSelectionTransform_Statics::NewProp_bAllowIndirectReferences_SetBit(void* Obj)
	{
		((UDataprepReferenceSelectionTransform*)Obj)->bAllowIndirectReferences = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDataprepReferenceSelectionTransform_Statics::NewProp_bAllowIndirectReferences = { "bAllowIndirectReferences", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDataprepReferenceSelectionTransform), &Z_Construct_UClass_UDataprepReferenceSelectionTransform_Statics::NewProp_bAllowIndirectReferences_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDataprepReferenceSelectionTransform_Statics::NewProp_bAllowIndirectReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepReferenceSelectionTransform_Statics::NewProp_bAllowIndirectReferences_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepReferenceSelectionTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepReferenceSelectionTransform_Statics::NewProp_bAllowIndirectReferences,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepReferenceSelectionTransform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepReferenceSelectionTransform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepReferenceSelectionTransform_Statics::ClassParams = {
		&UDataprepReferenceSelectionTransform::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepReferenceSelectionTransform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepReferenceSelectionTransform_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepReferenceSelectionTransform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepReferenceSelectionTransform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepReferenceSelectionTransform()
	{
		if (!Z_Registration_Info_UClass_UDataprepReferenceSelectionTransform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepReferenceSelectionTransform.OuterSingleton, Z_Construct_UClass_UDataprepReferenceSelectionTransform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepReferenceSelectionTransform.OuterSingleton;
	}
	template<> DATAPREPLIBRARIES_API UClass* StaticClass<UDataprepReferenceSelectionTransform>()
	{
		return UDataprepReferenceSelectionTransform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepReferenceSelectionTransform);
	UDataprepReferenceSelectionTransform::~UDataprepReferenceSelectionTransform() {}
	void UDataprepReferencedSelectionTransform::StaticRegisterNativesUDataprepReferencedSelectionTransform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepReferencedSelectionTransform);
	UClass* Z_Construct_UClass_UDataprepReferencedSelectionTransform_NoRegister()
	{
		return UDataprepReferencedSelectionTransform::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepReferencedSelectionTransform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepReferencedSelectionTransform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepSelectionTransform,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepLibraries,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepReferencedSelectionTransform_Statics::Class_MetaDataParams[] = {
		{ "Category", "SelectionTransform" },
		{ "DisplayName", "Select Referencers" },
		{ "IncludePath", "DataprepSelectionTransforms.h" },
		{ "ModuleRelativePath", "Private/DataprepSelectionTransforms.h" },
		{ "ToolTip", "Return assets directly using/referencing the objects from previous filtering" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepReferencedSelectionTransform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepReferencedSelectionTransform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepReferencedSelectionTransform_Statics::ClassParams = {
		&UDataprepReferencedSelectionTransform::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepReferencedSelectionTransform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepReferencedSelectionTransform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepReferencedSelectionTransform()
	{
		if (!Z_Registration_Info_UClass_UDataprepReferencedSelectionTransform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepReferencedSelectionTransform.OuterSingleton, Z_Construct_UClass_UDataprepReferencedSelectionTransform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepReferencedSelectionTransform.OuterSingleton;
	}
	template<> DATAPREPLIBRARIES_API UClass* StaticClass<UDataprepReferencedSelectionTransform>()
	{
		return UDataprepReferencedSelectionTransform::StaticClass();
	}
	UDataprepReferencedSelectionTransform::UDataprepReferencedSelectionTransform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepReferencedSelectionTransform);
	UDataprepReferencedSelectionTransform::~UDataprepReferencedSelectionTransform() {}
	void UDataprepHierarchySelectionTransform::StaticRegisterNativesUDataprepHierarchySelectionTransform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepHierarchySelectionTransform);
	UClass* Z_Construct_UClass_UDataprepHierarchySelectionTransform_NoRegister()
	{
		return UDataprepHierarchySelectionTransform::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepHierarchySelectionTransform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_SelectionPolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectionPolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SelectionPolicy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepHierarchySelectionTransform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepSelectionTransform,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepLibraries,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepHierarchySelectionTransform_Statics::Class_MetaDataParams[] = {
		{ "Category", "SelectionTransform" },
		{ "DisplayName", "Select Hierarchy" },
		{ "IncludePath", "DataprepSelectionTransforms.h" },
		{ "ModuleRelativePath", "Private/DataprepSelectionTransforms.h" },
		{ "ToolTip", "Return immediate children or all the descendants of the selected objects" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDataprepHierarchySelectionTransform_Statics::NewProp_SelectionPolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepHierarchySelectionTransform_Statics::NewProp_SelectionPolicy_MetaData[] = {
		{ "Category", "HierarchySelectionOptions" },
		{ "DisplayName", "Select" },
		{ "ModuleRelativePath", "Private/DataprepSelectionTransforms.h" },
		{ "ToolTip", "Specify policy of hierarchical parsing of selected objects" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDataprepHierarchySelectionTransform_Statics::NewProp_SelectionPolicy = { "SelectionPolicy", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDataprepHierarchySelectionTransform, SelectionPolicy), Z_Construct_UEnum_DataprepLibraries_EDataprepHierarchySelectionPolicy, METADATA_PARAMS(Z_Construct_UClass_UDataprepHierarchySelectionTransform_Statics::NewProp_SelectionPolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepHierarchySelectionTransform_Statics::NewProp_SelectionPolicy_MetaData)) }; // 442519867
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDataprepHierarchySelectionTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepHierarchySelectionTransform_Statics::NewProp_SelectionPolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDataprepHierarchySelectionTransform_Statics::NewProp_SelectionPolicy,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepHierarchySelectionTransform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepHierarchySelectionTransform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepHierarchySelectionTransform_Statics::ClassParams = {
		&UDataprepHierarchySelectionTransform::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDataprepHierarchySelectionTransform_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepHierarchySelectionTransform_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepHierarchySelectionTransform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepHierarchySelectionTransform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepHierarchySelectionTransform()
	{
		if (!Z_Registration_Info_UClass_UDataprepHierarchySelectionTransform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepHierarchySelectionTransform.OuterSingleton, Z_Construct_UClass_UDataprepHierarchySelectionTransform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepHierarchySelectionTransform.OuterSingleton;
	}
	template<> DATAPREPLIBRARIES_API UClass* StaticClass<UDataprepHierarchySelectionTransform>()
	{
		return UDataprepHierarchySelectionTransform::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepHierarchySelectionTransform);
	UDataprepHierarchySelectionTransform::~UDataprepHierarchySelectionTransform() {}
	void UDataprepActorComponentsSelectionTransform::StaticRegisterNativesUDataprepActorComponentsSelectionTransform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepActorComponentsSelectionTransform);
	UClass* Z_Construct_UClass_UDataprepActorComponentsSelectionTransform_NoRegister()
	{
		return UDataprepActorComponentsSelectionTransform::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepActorComponentsSelectionTransform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepActorComponentsSelectionTransform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepSelectionTransform,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepLibraries,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepActorComponentsSelectionTransform_Statics::Class_MetaDataParams[] = {
		{ "Category", "SelectionTransform" },
		{ "DisplayName", "Select Actor Components" },
		{ "IncludePath", "DataprepSelectionTransforms.h" },
		{ "ModuleRelativePath", "Private/DataprepSelectionTransforms.h" },
		{ "ToolTip", "Return components of the selected actors" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepActorComponentsSelectionTransform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepActorComponentsSelectionTransform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepActorComponentsSelectionTransform_Statics::ClassParams = {
		&UDataprepActorComponentsSelectionTransform::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepActorComponentsSelectionTransform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepActorComponentsSelectionTransform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepActorComponentsSelectionTransform()
	{
		if (!Z_Registration_Info_UClass_UDataprepActorComponentsSelectionTransform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepActorComponentsSelectionTransform.OuterSingleton, Z_Construct_UClass_UDataprepActorComponentsSelectionTransform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepActorComponentsSelectionTransform.OuterSingleton;
	}
	template<> DATAPREPLIBRARIES_API UClass* StaticClass<UDataprepActorComponentsSelectionTransform>()
	{
		return UDataprepActorComponentsSelectionTransform::StaticClass();
	}
	UDataprepActorComponentsSelectionTransform::UDataprepActorComponentsSelectionTransform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepActorComponentsSelectionTransform);
	UDataprepActorComponentsSelectionTransform::~UDataprepActorComponentsSelectionTransform() {}
	void UDataprepOwningActorSelectionTransform::StaticRegisterNativesUDataprepOwningActorSelectionTransform()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDataprepOwningActorSelectionTransform);
	UClass* Z_Construct_UClass_UDataprepOwningActorSelectionTransform_NoRegister()
	{
		return UDataprepOwningActorSelectionTransform::StaticClass();
	}
	struct Z_Construct_UClass_UDataprepOwningActorSelectionTransform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDataprepOwningActorSelectionTransform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataprepSelectionTransform,
		(UObject* (*)())Z_Construct_UPackage__Script_DataprepLibraries,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDataprepOwningActorSelectionTransform_Statics::Class_MetaDataParams[] = {
		{ "Category", "SelectionTransform" },
		{ "DisplayName", "Select Owning Actor" },
		{ "IncludePath", "DataprepSelectionTransforms.h" },
		{ "ModuleRelativePath", "Private/DataprepSelectionTransforms.h" },
		{ "ToolTip", "Return the owning actors of selected components" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDataprepOwningActorSelectionTransform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDataprepOwningActorSelectionTransform>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDataprepOwningActorSelectionTransform_Statics::ClassParams = {
		&UDataprepOwningActorSelectionTransform::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDataprepOwningActorSelectionTransform_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDataprepOwningActorSelectionTransform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDataprepOwningActorSelectionTransform()
	{
		if (!Z_Registration_Info_UClass_UDataprepOwningActorSelectionTransform.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDataprepOwningActorSelectionTransform.OuterSingleton, Z_Construct_UClass_UDataprepOwningActorSelectionTransform_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDataprepOwningActorSelectionTransform.OuterSingleton;
	}
	template<> DATAPREPLIBRARIES_API UClass* StaticClass<UDataprepOwningActorSelectionTransform>()
	{
		return UDataprepOwningActorSelectionTransform::StaticClass();
	}
	UDataprepOwningActorSelectionTransform::UDataprepOwningActorSelectionTransform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDataprepOwningActorSelectionTransform);
	UDataprepOwningActorSelectionTransform::~UDataprepOwningActorSelectionTransform() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepSelectionTransforms_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepSelectionTransforms_h_Statics::EnumInfo[] = {
		{ EDataprepHierarchySelectionPolicy_StaticEnum, TEXT("EDataprepHierarchySelectionPolicy"), &Z_Registration_Info_UEnum_EDataprepHierarchySelectionPolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 442519867U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepSelectionTransforms_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDataprepReferenceSelectionTransform, UDataprepReferenceSelectionTransform::StaticClass, TEXT("UDataprepReferenceSelectionTransform"), &Z_Registration_Info_UClass_UDataprepReferenceSelectionTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepReferenceSelectionTransform), 3072316063U) },
		{ Z_Construct_UClass_UDataprepReferencedSelectionTransform, UDataprepReferencedSelectionTransform::StaticClass, TEXT("UDataprepReferencedSelectionTransform"), &Z_Registration_Info_UClass_UDataprepReferencedSelectionTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepReferencedSelectionTransform), 3497988385U) },
		{ Z_Construct_UClass_UDataprepHierarchySelectionTransform, UDataprepHierarchySelectionTransform::StaticClass, TEXT("UDataprepHierarchySelectionTransform"), &Z_Registration_Info_UClass_UDataprepHierarchySelectionTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepHierarchySelectionTransform), 1397416173U) },
		{ Z_Construct_UClass_UDataprepActorComponentsSelectionTransform, UDataprepActorComponentsSelectionTransform::StaticClass, TEXT("UDataprepActorComponentsSelectionTransform"), &Z_Registration_Info_UClass_UDataprepActorComponentsSelectionTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepActorComponentsSelectionTransform), 2691789515U) },
		{ Z_Construct_UClass_UDataprepOwningActorSelectionTransform, UDataprepOwningActorSelectionTransform::StaticClass, TEXT("UDataprepOwningActorSelectionTransform"), &Z_Registration_Info_UClass_UDataprepOwningActorSelectionTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDataprepOwningActorSelectionTransform), 4099033742U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepSelectionTransforms_h_816651768(TEXT("/Script/DataprepLibraries"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepSelectionTransforms_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepSelectionTransforms_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepSelectionTransforms_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_DataprepEditor_Source_DataprepLibraries_Private_DataprepSelectionTransforms_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
