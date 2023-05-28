// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ToolMenusEditor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeToolMenusEditor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility();
	TOOLMENUS_API UClass* Z_Construct_UClass_UToolMenu_NoRegister();
	TOOLMENUSEDITOR_API UClass* Z_Construct_UClass_UToolMenuEditorDialogBlock();
	TOOLMENUSEDITOR_API UClass* Z_Construct_UClass_UToolMenuEditorDialogBlock_NoRegister();
	TOOLMENUSEDITOR_API UClass* Z_Construct_UClass_UToolMenuEditorDialogEntry();
	TOOLMENUSEDITOR_API UClass* Z_Construct_UClass_UToolMenuEditorDialogEntry_NoRegister();
	TOOLMENUSEDITOR_API UClass* Z_Construct_UClass_UToolMenuEditorDialogMenu();
	TOOLMENUSEDITOR_API UClass* Z_Construct_UClass_UToolMenuEditorDialogMenu_NoRegister();
	TOOLMENUSEDITOR_API UClass* Z_Construct_UClass_UToolMenuEditorDialogObject();
	TOOLMENUSEDITOR_API UClass* Z_Construct_UClass_UToolMenuEditorDialogObject_NoRegister();
	TOOLMENUSEDITOR_API UClass* Z_Construct_UClass_UToolMenuEditorDialogSection();
	TOOLMENUSEDITOR_API UClass* Z_Construct_UClass_UToolMenuEditorDialogSection_NoRegister();
	TOOLMENUSEDITOR_API UEnum* Z_Construct_UEnum_ToolMenusEditor_ESelectedEditMenuEntryType();
	UPackage* Z_Construct_UPackage__Script_ToolMenusEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESelectedEditMenuEntryType;
	static UEnum* ESelectedEditMenuEntryType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESelectedEditMenuEntryType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESelectedEditMenuEntryType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ToolMenusEditor_ESelectedEditMenuEntryType, (UObject*)Z_Construct_UPackage__Script_ToolMenusEditor(), TEXT("ESelectedEditMenuEntryType"));
		}
		return Z_Registration_Info_UEnum_ESelectedEditMenuEntryType.OuterSingleton;
	}
	template<> TOOLMENUSEDITOR_API UEnum* StaticEnum<ESelectedEditMenuEntryType>()
	{
		return ESelectedEditMenuEntryType_StaticEnum();
	}
	struct Z_Construct_UEnum_ToolMenusEditor_ESelectedEditMenuEntryType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ToolMenusEditor_ESelectedEditMenuEntryType_Statics::Enumerators[] = {
		{ "ESelectedEditMenuEntryType::None", (int64)ESelectedEditMenuEntryType::None },
		{ "ESelectedEditMenuEntryType::Entry", (int64)ESelectedEditMenuEntryType::Entry },
		{ "ESelectedEditMenuEntryType::Section", (int64)ESelectedEditMenuEntryType::Section },
		{ "ESelectedEditMenuEntryType::Menu", (int64)ESelectedEditMenuEntryType::Menu },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ToolMenusEditor_ESelectedEditMenuEntryType_Statics::Enum_MetaDataParams[] = {
		{ "Entry.Name", "ESelectedEditMenuEntryType::Entry" },
		{ "Menu.Name", "ESelectedEditMenuEntryType::Menu" },
		{ "ModuleRelativePath", "Public/ToolMenusEditor.h" },
		{ "None.Name", "ESelectedEditMenuEntryType::None" },
		{ "Section.Name", "ESelectedEditMenuEntryType::Section" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ToolMenusEditor_ESelectedEditMenuEntryType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ToolMenusEditor,
		nullptr,
		"ESelectedEditMenuEntryType",
		"ESelectedEditMenuEntryType",
		Z_Construct_UEnum_ToolMenusEditor_ESelectedEditMenuEntryType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ToolMenusEditor_ESelectedEditMenuEntryType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ToolMenusEditor_ESelectedEditMenuEntryType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ToolMenusEditor_ESelectedEditMenuEntryType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ToolMenusEditor_ESelectedEditMenuEntryType()
	{
		if (!Z_Registration_Info_UEnum_ESelectedEditMenuEntryType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESelectedEditMenuEntryType.InnerSingleton, Z_Construct_UEnum_ToolMenusEditor_ESelectedEditMenuEntryType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESelectedEditMenuEntryType.InnerSingleton;
	}
	void UToolMenuEditorDialogObject::StaticRegisterNativesUToolMenuEditorDialogObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolMenuEditorDialogObject);
	UClass* Z_Construct_UClass_UToolMenuEditorDialogObject_NoRegister()
	{
		return UToolMenuEditorDialogObject::StaticClass();
	}
	struct Z_Construct_UClass_UToolMenuEditorDialogObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolMenuEditorDialogObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ToolMenusEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenuEditorDialogObject_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ToolMenusEditor.h" },
		{ "ModuleRelativePath", "Public/ToolMenusEditor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToolMenuEditorDialogObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolMenuEditorDialogObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolMenuEditorDialogObject_Statics::ClassParams = {
		&UToolMenuEditorDialogObject::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UToolMenuEditorDialogObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuEditorDialogObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToolMenuEditorDialogObject()
	{
		if (!Z_Registration_Info_UClass_UToolMenuEditorDialogObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolMenuEditorDialogObject.OuterSingleton, Z_Construct_UClass_UToolMenuEditorDialogObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UToolMenuEditorDialogObject.OuterSingleton;
	}
	template<> TOOLMENUSEDITOR_API UClass* StaticClass<UToolMenuEditorDialogObject>()
	{
		return UToolMenuEditorDialogObject::StaticClass();
	}
	UToolMenuEditorDialogObject::UToolMenuEditorDialogObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolMenuEditorDialogObject);
	UToolMenuEditorDialogObject::~UToolMenuEditorDialogObject() {}
	void UToolMenuEditorDialogMenu::StaticRegisterNativesUToolMenuEditorDialogMenu()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolMenuEditorDialogMenu);
	UClass* Z_Construct_UClass_UToolMenuEditorDialogMenu_NoRegister()
	{
		return UToolMenuEditorDialogMenu::StaticClass();
	}
	struct Z_Construct_UClass_UToolMenuEditorDialogMenu_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Menu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Menu;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolMenuEditorDialogMenu_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UToolMenuEditorDialogObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ToolMenusEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenuEditorDialogMenu_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ToolMenusEditor.h" },
		{ "ModuleRelativePath", "Public/ToolMenusEditor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenuEditorDialogMenu_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/ToolMenusEditor.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UToolMenuEditorDialogMenu_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UToolMenuEditorDialogMenu, Name), METADATA_PARAMS(Z_Construct_UClass_UToolMenuEditorDialogMenu_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuEditorDialogMenu_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenuEditorDialogMenu_Statics::NewProp_Menu_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolMenusEditor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UToolMenuEditorDialogMenu_Statics::NewProp_Menu = { "Menu", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UToolMenuEditorDialogMenu, Menu), Z_Construct_UClass_UToolMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UToolMenuEditorDialogMenu_Statics::NewProp_Menu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuEditorDialogMenu_Statics::NewProp_Menu_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToolMenuEditorDialogMenu_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenuEditorDialogMenu_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenuEditorDialogMenu_Statics::NewProp_Menu,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToolMenuEditorDialogMenu_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolMenuEditorDialogMenu>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolMenuEditorDialogMenu_Statics::ClassParams = {
		&UToolMenuEditorDialogMenu::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UToolMenuEditorDialogMenu_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuEditorDialogMenu_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UToolMenuEditorDialogMenu_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuEditorDialogMenu_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToolMenuEditorDialogMenu()
	{
		if (!Z_Registration_Info_UClass_UToolMenuEditorDialogMenu.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolMenuEditorDialogMenu.OuterSingleton, Z_Construct_UClass_UToolMenuEditorDialogMenu_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UToolMenuEditorDialogMenu.OuterSingleton;
	}
	template<> TOOLMENUSEDITOR_API UClass* StaticClass<UToolMenuEditorDialogMenu>()
	{
		return UToolMenuEditorDialogMenu::StaticClass();
	}
	UToolMenuEditorDialogMenu::UToolMenuEditorDialogMenu(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolMenuEditorDialogMenu);
	UToolMenuEditorDialogMenu::~UToolMenuEditorDialogMenu() {}
	void UToolMenuEditorDialogBlock::StaticRegisterNativesUToolMenuEditorDialogBlock()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolMenuEditorDialogBlock);
	UClass* Z_Construct_UClass_UToolMenuEditorDialogBlock_NoRegister()
	{
		return UToolMenuEditorDialogBlock::StaticClass();
	}
	struct Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Visibility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Visibility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Visibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Menu_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Menu;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UToolMenuEditorDialogObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ToolMenusEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ToolMenusEditor.h" },
		{ "ModuleRelativePath", "Public/ToolMenusEditor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/ToolMenusEditor.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UToolMenuEditorDialogBlock, Name), METADATA_PARAMS(Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/ToolMenusEditor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UToolMenuEditorDialogBlock, Type), Z_Construct_UEnum_ToolMenusEditor_ESelectedEditMenuEntryType, METADATA_PARAMS(Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::NewProp_Type_MetaData)) }; // 2005059413
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::NewProp_Visibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::NewProp_Visibility_MetaData[] = {
		{ "Category", "Misc" },
		{ "ModuleRelativePath", "Public/ToolMenusEditor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UToolMenuEditorDialogBlock, Visibility), Z_Construct_UEnum_Slate_ECustomizedToolMenuVisibility, METADATA_PARAMS(Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::NewProp_Visibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::NewProp_Visibility_MetaData)) }; // 113334925
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::NewProp_Menu_MetaData[] = {
		{ "ModuleRelativePath", "Public/ToolMenusEditor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::NewProp_Menu = { "Menu", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UToolMenuEditorDialogBlock, Menu), Z_Construct_UClass_UToolMenu_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::NewProp_Menu_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::NewProp_Menu_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::NewProp_Visibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::NewProp_Visibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::NewProp_Menu,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolMenuEditorDialogBlock>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::ClassParams = {
		&UToolMenuEditorDialogBlock::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToolMenuEditorDialogBlock()
	{
		if (!Z_Registration_Info_UClass_UToolMenuEditorDialogBlock.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolMenuEditorDialogBlock.OuterSingleton, Z_Construct_UClass_UToolMenuEditorDialogBlock_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UToolMenuEditorDialogBlock.OuterSingleton;
	}
	template<> TOOLMENUSEDITOR_API UClass* StaticClass<UToolMenuEditorDialogBlock>()
	{
		return UToolMenuEditorDialogBlock::StaticClass();
	}
	UToolMenuEditorDialogBlock::UToolMenuEditorDialogBlock(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolMenuEditorDialogBlock);
	UToolMenuEditorDialogBlock::~UToolMenuEditorDialogBlock() {}
	void UToolMenuEditorDialogSection::StaticRegisterNativesUToolMenuEditorDialogSection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolMenuEditorDialogSection);
	UClass* Z_Construct_UClass_UToolMenuEditorDialogSection_NoRegister()
	{
		return UToolMenuEditorDialogSection::StaticClass();
	}
	struct Z_Construct_UClass_UToolMenuEditorDialogSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolMenuEditorDialogSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UToolMenuEditorDialogBlock,
		(UObject* (*)())Z_Construct_UPackage__Script_ToolMenusEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenuEditorDialogSection_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ToolMenusEditor.h" },
		{ "ModuleRelativePath", "Public/ToolMenusEditor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToolMenuEditorDialogSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolMenuEditorDialogSection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolMenuEditorDialogSection_Statics::ClassParams = {
		&UToolMenuEditorDialogSection::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UToolMenuEditorDialogSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuEditorDialogSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToolMenuEditorDialogSection()
	{
		if (!Z_Registration_Info_UClass_UToolMenuEditorDialogSection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolMenuEditorDialogSection.OuterSingleton, Z_Construct_UClass_UToolMenuEditorDialogSection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UToolMenuEditorDialogSection.OuterSingleton;
	}
	template<> TOOLMENUSEDITOR_API UClass* StaticClass<UToolMenuEditorDialogSection>()
	{
		return UToolMenuEditorDialogSection::StaticClass();
	}
	UToolMenuEditorDialogSection::UToolMenuEditorDialogSection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolMenuEditorDialogSection);
	UToolMenuEditorDialogSection::~UToolMenuEditorDialogSection() {}
	void UToolMenuEditorDialogEntry::StaticRegisterNativesUToolMenuEditorDialogEntry()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UToolMenuEditorDialogEntry);
	UClass* Z_Construct_UClass_UToolMenuEditorDialogEntry_NoRegister()
	{
		return UToolMenuEditorDialogEntry::StaticClass();
	}
	struct Z_Construct_UClass_UToolMenuEditorDialogEntry_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UToolMenuEditorDialogEntry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UToolMenuEditorDialogBlock,
		(UObject* (*)())Z_Construct_UPackage__Script_ToolMenusEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UToolMenuEditorDialogEntry_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ToolMenusEditor.h" },
		{ "ModuleRelativePath", "Public/ToolMenusEditor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UToolMenuEditorDialogEntry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UToolMenuEditorDialogEntry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UToolMenuEditorDialogEntry_Statics::ClassParams = {
		&UToolMenuEditorDialogEntry::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UToolMenuEditorDialogEntry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UToolMenuEditorDialogEntry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UToolMenuEditorDialogEntry()
	{
		if (!Z_Registration_Info_UClass_UToolMenuEditorDialogEntry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UToolMenuEditorDialogEntry.OuterSingleton, Z_Construct_UClass_UToolMenuEditorDialogEntry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UToolMenuEditorDialogEntry.OuterSingleton;
	}
	template<> TOOLMENUSEDITOR_API UClass* StaticClass<UToolMenuEditorDialogEntry>()
	{
		return UToolMenuEditorDialogEntry::StaticClass();
	}
	UToolMenuEditorDialogEntry::UToolMenuEditorDialogEntry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UToolMenuEditorDialogEntry);
	UToolMenuEditorDialogEntry::~UToolMenuEditorDialogEntry() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_ToolMenusEditor_Public_ToolMenusEditor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ToolMenusEditor_Public_ToolMenusEditor_h_Statics::EnumInfo[] = {
		{ ESelectedEditMenuEntryType_StaticEnum, TEXT("ESelectedEditMenuEntryType"), &Z_Registration_Info_UEnum_ESelectedEditMenuEntryType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2005059413U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ToolMenusEditor_Public_ToolMenusEditor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UToolMenuEditorDialogObject, UToolMenuEditorDialogObject::StaticClass, TEXT("UToolMenuEditorDialogObject"), &Z_Registration_Info_UClass_UToolMenuEditorDialogObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolMenuEditorDialogObject), 2511668899U) },
		{ Z_Construct_UClass_UToolMenuEditorDialogMenu, UToolMenuEditorDialogMenu::StaticClass, TEXT("UToolMenuEditorDialogMenu"), &Z_Registration_Info_UClass_UToolMenuEditorDialogMenu, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolMenuEditorDialogMenu), 7984526U) },
		{ Z_Construct_UClass_UToolMenuEditorDialogBlock, UToolMenuEditorDialogBlock::StaticClass, TEXT("UToolMenuEditorDialogBlock"), &Z_Registration_Info_UClass_UToolMenuEditorDialogBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolMenuEditorDialogBlock), 1791345671U) },
		{ Z_Construct_UClass_UToolMenuEditorDialogSection, UToolMenuEditorDialogSection::StaticClass, TEXT("UToolMenuEditorDialogSection"), &Z_Registration_Info_UClass_UToolMenuEditorDialogSection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolMenuEditorDialogSection), 3342971818U) },
		{ Z_Construct_UClass_UToolMenuEditorDialogEntry, UToolMenuEditorDialogEntry::StaticClass, TEXT("UToolMenuEditorDialogEntry"), &Z_Registration_Info_UClass_UToolMenuEditorDialogEntry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UToolMenuEditorDialogEntry), 1648038368U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_ToolMenusEditor_Public_ToolMenusEditor_h_1638148604(TEXT("/Script/ToolMenusEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ToolMenusEditor_Public_ToolMenusEditor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ToolMenusEditor_Public_ToolMenusEditor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_ToolMenusEditor_Public_ToolMenusEditor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_ToolMenusEditor_Public_ToolMenusEditor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
