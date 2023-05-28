// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodeProjectItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCodeProjectItem() {}
// Cross Module References
	CODEEDITOR_API UClass* Z_Construct_UClass_UCodeProjectItem();
	CODEEDITOR_API UClass* Z_Construct_UClass_UCodeProjectItem_NoRegister();
	CODEEDITOR_API UEnum* Z_Construct_UEnum_CodeEditor_ECodeProjectItemType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CodeEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECodeProjectItemType;
	static UEnum* ECodeProjectItemType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECodeProjectItemType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECodeProjectItemType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CodeEditor_ECodeProjectItemType, (UObject*)Z_Construct_UPackage__Script_CodeEditor(), TEXT("ECodeProjectItemType"));
		}
		return Z_Registration_Info_UEnum_ECodeProjectItemType.OuterSingleton;
	}
	template<> CODEEDITOR_API UEnum* StaticEnum<ECodeProjectItemType::Type>()
	{
		return ECodeProjectItemType_StaticEnum();
	}
	struct Z_Construct_UEnum_CodeEditor_ECodeProjectItemType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CodeEditor_ECodeProjectItemType_Statics::Enumerators[] = {
		{ "ECodeProjectItemType::Project", (int64)ECodeProjectItemType::Project },
		{ "ECodeProjectItemType::Folder", (int64)ECodeProjectItemType::Folder },
		{ "ECodeProjectItemType::File", (int64)ECodeProjectItemType::File },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CodeEditor_ECodeProjectItemType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Types of project items. Note that the enum ordering determines the tree sorting */" },
		{ "File.Name", "ECodeProjectItemType::File" },
		{ "Folder.Name", "ECodeProjectItemType::Folder" },
		{ "ModuleRelativePath", "Private/CodeProjectItem.h" },
		{ "Project.Name", "ECodeProjectItemType::Project" },
		{ "ToolTip", "Types of project items. Note that the enum ordering determines the tree sorting" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CodeEditor_ECodeProjectItemType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CodeEditor,
		nullptr,
		"ECodeProjectItemType",
		"ECodeProjectItemType::Type",
		Z_Construct_UEnum_CodeEditor_ECodeProjectItemType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CodeEditor_ECodeProjectItemType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_CodeEditor_ECodeProjectItemType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CodeEditor_ECodeProjectItemType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CodeEditor_ECodeProjectItemType()
	{
		if (!Z_Registration_Info_UEnum_ECodeProjectItemType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECodeProjectItemType.InnerSingleton, Z_Construct_UEnum_CodeEditor_ECodeProjectItemType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECodeProjectItemType.InnerSingleton;
	}
	void UCodeProjectItem::StaticRegisterNativesUCodeProjectItem()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCodeProjectItem);
	UClass* Z_Construct_UClass_UCodeProjectItem_NoRegister()
	{
		return UCodeProjectItem::StaticClass();
	}
	struct Z_Construct_UClass_UCodeProjectItem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extension_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Extension;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Path_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Path;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCodeProjectItem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CodeEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCodeProjectItem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CodeProjectItem.h" },
		{ "ModuleRelativePath", "Private/CodeProjectItem.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCodeProjectItem_Statics::NewProp_Type_MetaData[] = {
		{ "ModuleRelativePath", "Private/CodeProjectItem.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCodeProjectItem_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCodeProjectItem, Type), Z_Construct_UEnum_CodeEditor_ECodeProjectItemType, METADATA_PARAMS(Z_Construct_UClass_UCodeProjectItem_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCodeProjectItem_Statics::NewProp_Type_MetaData)) }; // 2082553276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCodeProjectItem_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Private/CodeProjectItem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCodeProjectItem_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCodeProjectItem, Name), METADATA_PARAMS(Z_Construct_UClass_UCodeProjectItem_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCodeProjectItem_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCodeProjectItem_Statics::NewProp_Extension_MetaData[] = {
		{ "ModuleRelativePath", "Private/CodeProjectItem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCodeProjectItem_Statics::NewProp_Extension = { "Extension", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCodeProjectItem, Extension), METADATA_PARAMS(Z_Construct_UClass_UCodeProjectItem_Statics::NewProp_Extension_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCodeProjectItem_Statics::NewProp_Extension_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCodeProjectItem_Statics::NewProp_Path_MetaData[] = {
		{ "ModuleRelativePath", "Private/CodeProjectItem.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCodeProjectItem_Statics::NewProp_Path = { "Path", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCodeProjectItem, Path), METADATA_PARAMS(Z_Construct_UClass_UCodeProjectItem_Statics::NewProp_Path_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCodeProjectItem_Statics::NewProp_Path_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCodeProjectItem_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCodeProjectItem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCodeProjectItem_Statics::NewProp_Children_MetaData[] = {
		{ "ModuleRelativePath", "Private/CodeProjectItem.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCodeProjectItem_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCodeProjectItem, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCodeProjectItem_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCodeProjectItem_Statics::NewProp_Children_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCodeProjectItem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCodeProjectItem_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCodeProjectItem_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCodeProjectItem_Statics::NewProp_Extension,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCodeProjectItem_Statics::NewProp_Path,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCodeProjectItem_Statics::NewProp_Children_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCodeProjectItem_Statics::NewProp_Children,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCodeProjectItem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCodeProjectItem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCodeProjectItem_Statics::ClassParams = {
		&UCodeProjectItem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCodeProjectItem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCodeProjectItem_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCodeProjectItem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCodeProjectItem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCodeProjectItem()
	{
		if (!Z_Registration_Info_UClass_UCodeProjectItem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCodeProjectItem.OuterSingleton, Z_Construct_UClass_UCodeProjectItem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCodeProjectItem.OuterSingleton;
	}
	template<> CODEEDITOR_API UClass* StaticClass<UCodeProjectItem>()
	{
		return UCodeProjectItem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCodeProjectItem);
	UCodeProjectItem::~UCodeProjectItem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_Statics::EnumInfo[] = {
		{ ECodeProjectItemType_StaticEnum, TEXT("ECodeProjectItemType"), &Z_Registration_Info_UEnum_ECodeProjectItemType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2082553276U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCodeProjectItem, UCodeProjectItem::StaticClass, TEXT("UCodeProjectItem"), &Z_Registration_Info_UClass_UCodeProjectItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCodeProjectItem), 3431879302U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_907235201(TEXT("/Script/CodeEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CodeEditor_Source_CodeEditor_Private_CodeProjectItem_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
