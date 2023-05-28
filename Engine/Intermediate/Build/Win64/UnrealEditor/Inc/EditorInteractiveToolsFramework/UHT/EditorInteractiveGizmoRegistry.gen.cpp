// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorInteractiveGizmoRegistry.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorInteractiveGizmoRegistry() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Accessory();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Accessory_NoRegister();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_ConditionalSelection();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_ConditionalSelection_NoRegister();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_NoRegister();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Primary();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Primary_NoRegister();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorInteractiveGizmoRegistry();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEditorInteractiveGizmoRegistry_NoRegister();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_EditorInteractiveToolsFramework_EEditorGizmoCategory();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveGizmoBuilder_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EditorInteractiveToolsFramework();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEditorGizmoCategory;
	static UEnum* EEditorGizmoCategory_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEditorGizmoCategory.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEditorGizmoCategory.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_EditorInteractiveToolsFramework_EEditorGizmoCategory, (UObject*)Z_Construct_UPackage__Script_EditorInteractiveToolsFramework(), TEXT("EEditorGizmoCategory"));
		}
		return Z_Registration_Info_UEnum_EEditorGizmoCategory.OuterSingleton;
	}
	template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EEditorGizmoCategory>()
	{
		return EEditorGizmoCategory_StaticEnum();
	}
	struct Z_Construct_UEnum_EditorInteractiveToolsFramework_EEditorGizmoCategory_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_EditorInteractiveToolsFramework_EEditorGizmoCategory_Statics::Enumerators[] = {
		{ "EEditorGizmoCategory::Accessory", (int64)EEditorGizmoCategory::Accessory },
		{ "EEditorGizmoCategory::Primary", (int64)EEditorGizmoCategory::Primary },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_EditorInteractiveToolsFramework_EEditorGizmoCategory_Statics::Enum_MetaDataParams[] = {
		{ "Accessory.Comment", "/** Accessory gizmos, built simultaneously with the Level Editor TRS gizmo. */" },
		{ "Accessory.Name", "EEditorGizmoCategory::Accessory" },
		{ "Accessory.ToolTip", "Accessory gizmos, built simultaneously with the Level Editor TRS gizmo." },
		{ "Comment", "/** Gizmo category used for registering Editor gizmo selection-based builders */" },
		{ "ModuleRelativePath", "Public/EditorInteractiveGizmoRegistry.h" },
		{ "Primary.Comment", "/** Primary gizmos, built in place of the Level Editor TRS gizmo.  */" },
		{ "Primary.Name", "EEditorGizmoCategory::Primary" },
		{ "Primary.ToolTip", "Primary gizmos, built in place of the Level Editor TRS gizmo." },
		{ "ToolTip", "Gizmo category used for registering Editor gizmo selection-based builders" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_EditorInteractiveToolsFramework_EEditorGizmoCategory_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_EditorInteractiveToolsFramework,
		nullptr,
		"EEditorGizmoCategory",
		"EEditorGizmoCategory",
		Z_Construct_UEnum_EditorInteractiveToolsFramework_EEditorGizmoCategory_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_EditorInteractiveToolsFramework_EEditorGizmoCategory_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_EditorInteractiveToolsFramework_EEditorGizmoCategory_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_EditorInteractiveToolsFramework_EEditorGizmoCategory_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_EditorInteractiveToolsFramework_EEditorGizmoCategory()
	{
		if (!Z_Registration_Info_UEnum_EEditorGizmoCategory.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEditorGizmoCategory.InnerSingleton, Z_Construct_UEnum_EditorInteractiveToolsFramework_EEditorGizmoCategory_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEditorGizmoCategory.InnerSingleton;
	}
	void UEditorGizmoRegistryCategoryEntry::StaticRegisterNativesUEditorGizmoRegistryCategoryEntry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorGizmoRegistryCategoryEntry);
	UClass* Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_NoRegister()
	{
		return UEditorGizmoRegistryCategoryEntry::StaticClass();
	}
	struct Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_GizmoTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CategoryName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CategoryName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorInteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorInteractiveGizmoRegistry.h" },
		{ "ModuleRelativePath", "Public/EditorInteractiveGizmoRegistry.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Statics::NewProp_GizmoTypes_Inner = { "GizmoTypes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UInteractiveGizmoBuilder_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Statics::NewProp_GizmoTypes_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorInteractiveGizmoRegistry.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Statics::NewProp_GizmoTypes = { "GizmoTypes", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorGizmoRegistryCategoryEntry, GizmoTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Statics::NewProp_GizmoTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Statics::NewProp_GizmoTypes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Statics::NewProp_CategoryName_MetaData[] = {
		{ "ModuleRelativePath", "Public/EditorInteractiveGizmoRegistry.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Statics::NewProp_CategoryName = { "CategoryName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorGizmoRegistryCategoryEntry, CategoryName), METADATA_PARAMS(Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Statics::NewProp_CategoryName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Statics::NewProp_CategoryName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Statics::NewProp_GizmoTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Statics::NewProp_GizmoTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Statics::NewProp_CategoryName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorGizmoRegistryCategoryEntry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Statics::ClassParams = {
		&UEditorGizmoRegistryCategoryEntry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry()
	{
		if (!Z_Registration_Info_UClass_UEditorGizmoRegistryCategoryEntry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorGizmoRegistryCategoryEntry.OuterSingleton, Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorGizmoRegistryCategoryEntry.OuterSingleton;
	}
	template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UEditorGizmoRegistryCategoryEntry>()
	{
		return UEditorGizmoRegistryCategoryEntry::StaticClass();
	}
	UEditorGizmoRegistryCategoryEntry::UEditorGizmoRegistryCategoryEntry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorGizmoRegistryCategoryEntry);
	UEditorGizmoRegistryCategoryEntry::~UEditorGizmoRegistryCategoryEntry() {}
	void UEditorGizmoRegistryCategoryEntry_ConditionalSelection::StaticRegisterNativesUEditorGizmoRegistryCategoryEntry_ConditionalSelection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorGizmoRegistryCategoryEntry_ConditionalSelection);
	UClass* Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_ConditionalSelection_NoRegister()
	{
		return UEditorGizmoRegistryCategoryEntry_ConditionalSelection::StaticClass();
	}
	struct Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_ConditionalSelection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_ConditionalSelection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorInteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_ConditionalSelection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorInteractiveGizmoRegistry.h" },
		{ "ModuleRelativePath", "Public/EditorInteractiveGizmoRegistry.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_ConditionalSelection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorGizmoRegistryCategoryEntry_ConditionalSelection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_ConditionalSelection_Statics::ClassParams = {
		&UEditorGizmoRegistryCategoryEntry_ConditionalSelection::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_ConditionalSelection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_ConditionalSelection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_ConditionalSelection()
	{
		if (!Z_Registration_Info_UClass_UEditorGizmoRegistryCategoryEntry_ConditionalSelection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorGizmoRegistryCategoryEntry_ConditionalSelection.OuterSingleton, Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_ConditionalSelection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorGizmoRegistryCategoryEntry_ConditionalSelection.OuterSingleton;
	}
	template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UEditorGizmoRegistryCategoryEntry_ConditionalSelection>()
	{
		return UEditorGizmoRegistryCategoryEntry_ConditionalSelection::StaticClass();
	}
	UEditorGizmoRegistryCategoryEntry_ConditionalSelection::UEditorGizmoRegistryCategoryEntry_ConditionalSelection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorGizmoRegistryCategoryEntry_ConditionalSelection);
	UEditorGizmoRegistryCategoryEntry_ConditionalSelection::~UEditorGizmoRegistryCategoryEntry_ConditionalSelection() {}
	void UEditorGizmoRegistryCategoryEntry_Primary::StaticRegisterNativesUEditorGizmoRegistryCategoryEntry_Primary()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorGizmoRegistryCategoryEntry_Primary);
	UClass* Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Primary_NoRegister()
	{
		return UEditorGizmoRegistryCategoryEntry_Primary::StaticClass();
	}
	struct Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Primary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Primary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_ConditionalSelection,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorInteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Primary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorInteractiveGizmoRegistry.h" },
		{ "ModuleRelativePath", "Public/EditorInteractiveGizmoRegistry.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Primary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorGizmoRegistryCategoryEntry_Primary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Primary_Statics::ClassParams = {
		&UEditorGizmoRegistryCategoryEntry_Primary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Primary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Primary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Primary()
	{
		if (!Z_Registration_Info_UClass_UEditorGizmoRegistryCategoryEntry_Primary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorGizmoRegistryCategoryEntry_Primary.OuterSingleton, Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Primary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorGizmoRegistryCategoryEntry_Primary.OuterSingleton;
	}
	template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UEditorGizmoRegistryCategoryEntry_Primary>()
	{
		return UEditorGizmoRegistryCategoryEntry_Primary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorGizmoRegistryCategoryEntry_Primary);
	UEditorGizmoRegistryCategoryEntry_Primary::~UEditorGizmoRegistryCategoryEntry_Primary() {}
	void UEditorGizmoRegistryCategoryEntry_Accessory::StaticRegisterNativesUEditorGizmoRegistryCategoryEntry_Accessory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorGizmoRegistryCategoryEntry_Accessory);
	UClass* Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Accessory_NoRegister()
	{
		return UEditorGizmoRegistryCategoryEntry_Accessory::StaticClass();
	}
	struct Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Accessory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Accessory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_ConditionalSelection,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorInteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Accessory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EditorInteractiveGizmoRegistry.h" },
		{ "ModuleRelativePath", "Public/EditorInteractiveGizmoRegistry.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Accessory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorGizmoRegistryCategoryEntry_Accessory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Accessory_Statics::ClassParams = {
		&UEditorGizmoRegistryCategoryEntry_Accessory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Accessory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Accessory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Accessory()
	{
		if (!Z_Registration_Info_UClass_UEditorGizmoRegistryCategoryEntry_Accessory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorGizmoRegistryCategoryEntry_Accessory.OuterSingleton, Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Accessory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorGizmoRegistryCategoryEntry_Accessory.OuterSingleton;
	}
	template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UEditorGizmoRegistryCategoryEntry_Accessory>()
	{
		return UEditorGizmoRegistryCategoryEntry_Accessory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorGizmoRegistryCategoryEntry_Accessory);
	UEditorGizmoRegistryCategoryEntry_Accessory::~UEditorGizmoRegistryCategoryEntry_Accessory() {}
	void UEditorInteractiveGizmoRegistry::StaticRegisterNativesUEditorInteractiveGizmoRegistry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorInteractiveGizmoRegistry);
	UClass* Z_Construct_UClass_UEditorInteractiveGizmoRegistry_NoRegister()
	{
		return UEditorInteractiveGizmoRegistry::StaticClass();
	}
	struct Z_Construct_UClass_UEditorInteractiveGizmoRegistry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GizmoCategoryMap_ValueProp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_GizmoCategoryMap_Key_KeyProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_GizmoCategoryMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GizmoCategoryMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_GizmoCategoryMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorInteractiveGizmoRegistry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorInteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorInteractiveGizmoRegistry_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Gizmo types should be registered in either UEditorInteractiveGizmoSubsystem or\n * UEditorInteractiveGizmoManager. This registry class is used internally by the\n * subsystem and manager which each maintain its own registry at different scopes:\n * the subystem is global to the Editor, the manager is local to the Interactive\n * Tools Context.\n */" },
		{ "IncludePath", "EditorInteractiveGizmoRegistry.h" },
		{ "ModuleRelativePath", "Public/EditorInteractiveGizmoRegistry.h" },
		{ "ToolTip", "Gizmo types should be registered in either UEditorInteractiveGizmoSubsystem or\nUEditorInteractiveGizmoManager. This registry class is used internally by the\nsubsystem and manager which each maintain its own registry at different scopes:\nthe subystem is global to the Editor, the manager is local to the Interactive\nTools Context." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEditorInteractiveGizmoRegistry_Statics::NewProp_GizmoCategoryMap_ValueProp = { "GizmoCategoryMap", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEditorInteractiveGizmoRegistry_Statics::NewProp_GizmoCategoryMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEditorInteractiveGizmoRegistry_Statics::NewProp_GizmoCategoryMap_Key_KeyProp = { "GizmoCategoryMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_EditorInteractiveToolsFramework_EEditorGizmoCategory, METADATA_PARAMS(nullptr, 0) }; // 910275437
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorInteractiveGizmoRegistry_Statics::NewProp_GizmoCategoryMap_MetaData[] = {
		{ "Comment", "/** Current set of Gizmo Builders */" },
		{ "ModuleRelativePath", "Public/EditorInteractiveGizmoRegistry.h" },
		{ "ToolTip", "Current set of Gizmo Builders" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEditorInteractiveGizmoRegistry_Statics::NewProp_GizmoCategoryMap = { "GizmoCategoryMap", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEditorInteractiveGizmoRegistry, GizmoCategoryMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEditorInteractiveGizmoRegistry_Statics::NewProp_GizmoCategoryMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorInteractiveGizmoRegistry_Statics::NewProp_GizmoCategoryMap_MetaData)) }; // 910275437
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEditorInteractiveGizmoRegistry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorInteractiveGizmoRegistry_Statics::NewProp_GizmoCategoryMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorInteractiveGizmoRegistry_Statics::NewProp_GizmoCategoryMap_Key_KeyProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorInteractiveGizmoRegistry_Statics::NewProp_GizmoCategoryMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEditorInteractiveGizmoRegistry_Statics::NewProp_GizmoCategoryMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorInteractiveGizmoRegistry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorInteractiveGizmoRegistry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorInteractiveGizmoRegistry_Statics::ClassParams = {
		&UEditorInteractiveGizmoRegistry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEditorInteractiveGizmoRegistry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEditorInteractiveGizmoRegistry_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorInteractiveGizmoRegistry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorInteractiveGizmoRegistry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorInteractiveGizmoRegistry()
	{
		if (!Z_Registration_Info_UClass_UEditorInteractiveGizmoRegistry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorInteractiveGizmoRegistry.OuterSingleton, Z_Construct_UClass_UEditorInteractiveGizmoRegistry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorInteractiveGizmoRegistry.OuterSingleton;
	}
	template<> EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UEditorInteractiveGizmoRegistry>()
	{
		return UEditorInteractiveGizmoRegistry::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorInteractiveGizmoRegistry);
	UEditorInteractiveGizmoRegistry::~UEditorInteractiveGizmoRegistry() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoRegistry_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoRegistry_h_Statics::EnumInfo[] = {
		{ EEditorGizmoCategory_StaticEnum, TEXT("EEditorGizmoCategory"), &Z_Registration_Info_UEnum_EEditorGizmoCategory, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 910275437U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoRegistry_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry, UEditorGizmoRegistryCategoryEntry::StaticClass, TEXT("UEditorGizmoRegistryCategoryEntry"), &Z_Registration_Info_UClass_UEditorGizmoRegistryCategoryEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorGizmoRegistryCategoryEntry), 1323824218U) },
		{ Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_ConditionalSelection, UEditorGizmoRegistryCategoryEntry_ConditionalSelection::StaticClass, TEXT("UEditorGizmoRegistryCategoryEntry_ConditionalSelection"), &Z_Registration_Info_UClass_UEditorGizmoRegistryCategoryEntry_ConditionalSelection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorGizmoRegistryCategoryEntry_ConditionalSelection), 1168536540U) },
		{ Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Primary, UEditorGizmoRegistryCategoryEntry_Primary::StaticClass, TEXT("UEditorGizmoRegistryCategoryEntry_Primary"), &Z_Registration_Info_UClass_UEditorGizmoRegistryCategoryEntry_Primary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorGizmoRegistryCategoryEntry_Primary), 1178700917U) },
		{ Z_Construct_UClass_UEditorGizmoRegistryCategoryEntry_Accessory, UEditorGizmoRegistryCategoryEntry_Accessory::StaticClass, TEXT("UEditorGizmoRegistryCategoryEntry_Accessory"), &Z_Registration_Info_UClass_UEditorGizmoRegistryCategoryEntry_Accessory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorGizmoRegistryCategoryEntry_Accessory), 425059313U) },
		{ Z_Construct_UClass_UEditorInteractiveGizmoRegistry, UEditorInteractiveGizmoRegistry::StaticClass, TEXT("UEditorInteractiveGizmoRegistry"), &Z_Registration_Info_UClass_UEditorInteractiveGizmoRegistry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorInteractiveGizmoRegistry), 90833855U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoRegistry_h_1274238910(TEXT("/Script/EditorInteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoRegistry_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoRegistry_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoRegistry_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_Experimental_EditorInteractiveToolsFramework_Public_EditorInteractiveGizmoRegistry_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
