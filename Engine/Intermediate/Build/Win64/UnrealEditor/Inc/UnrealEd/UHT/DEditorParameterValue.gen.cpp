// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/MaterialEditor/DEditorParameterValue.h"
#include "../../Source/Runtime/Engine/Public/MaterialTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDEditorParameterValue() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorParameterValue();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorParameterValue_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UDEditorParameterValue::StaticRegisterNativesUDEditorParameterValue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEditorParameterValue);
	UClass* Z_Construct_UClass_UDEditorParameterValue_NoRegister()
	{
		return UDEditorParameterValue::StaticClass();
	}
	struct Z_Construct_UClass_UDEditorParameterValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MetaData[];
#endif
		static void NewProp_bOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExpressionId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExpressionId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SortPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SortPriority;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEditorParameterValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorParameterValue_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "MaterialEditor/DEditorParameterValue.h" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorParameterValue.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_bOverride_MetaData[] = {
		{ "Category", "DEditorParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorParameterValue.h" },
	};
#endif
	void Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_bOverride_SetBit(void* Obj)
	{
		((UDEditorParameterValue*)Obj)->bOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_bOverride = { "bOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UDEditorParameterValue), &Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_bOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_bOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_bOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "Category", "DEditorParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorParameterValue.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEditorParameterValue, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_ParameterInfo_MetaData)) }; // 1695244105
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_ExpressionId_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorParameterValue.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_ExpressionId = { "ExpressionId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEditorParameterValue, ExpressionId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_ExpressionId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_ExpressionId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_Description_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorParameterValue.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEditorParameterValue, Description), METADATA_PARAMS(Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_AssetPath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorParameterValue.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEditorParameterValue, AssetPath), METADATA_PARAMS(Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_AssetPath_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_SortPriority_MetaData[] = {
		{ "Comment", "/** Controls where this parameter is displayed in a material instance parameter list.  The lower the number the higher up in the parameter list. */" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorParameterValue.h" },
		{ "ToolTip", "Controls where this parameter is displayed in a material instance parameter list.  The lower the number the higher up in the parameter list." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_SortPriority = { "SortPriority", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEditorParameterValue, SortPriority), METADATA_PARAMS(Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_SortPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_SortPriority_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEditorParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_bOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_ParameterInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_ExpressionId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_AssetPath,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorParameterValue_Statics::NewProp_SortPriority,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEditorParameterValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEditorParameterValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEditorParameterValue_Statics::ClassParams = {
		&UDEditorParameterValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEditorParameterValue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorParameterValue_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEditorParameterValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorParameterValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEditorParameterValue()
	{
		if (!Z_Registration_Info_UClass_UDEditorParameterValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEditorParameterValue.OuterSingleton, Z_Construct_UClass_UDEditorParameterValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEditorParameterValue.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UDEditorParameterValue>()
	{
		return UDEditorParameterValue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEditorParameterValue);
	UDEditorParameterValue::~UDEditorParameterValue() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorParameterValue_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorParameterValue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEditorParameterValue, UDEditorParameterValue::StaticClass, TEXT("UDEditorParameterValue"), &Z_Registration_Info_UClass_UDEditorParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEditorParameterValue), 3871326844U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorParameterValue_h_376670429(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorParameterValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorParameterValue_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
