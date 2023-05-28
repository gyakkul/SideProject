// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/MaterialEditor/DEditorVectorParameterValue.h"
#include "../../Source/Runtime/Engine/Public/MaterialTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDEditorVectorParameterValue() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParameterChannelNames();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorParameterValue();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorVectorParameterValue();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorVectorParameterValue_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UDEditorVectorParameterValue::StaticRegisterNativesUDEditorVectorParameterValue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEditorVectorParameterValue);
	UClass* Z_Construct_UClass_UDEditorVectorParameterValue_NoRegister()
	{
		return UDEditorVectorParameterValue::StaticClass();
	}
	struct Z_Construct_UClass_UDEditorVectorParameterValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUsedAsChannelMask_MetaData[];
#endif
		static void NewProp_bIsUsedAsChannelMask_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUsedAsChannelMask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelNames_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEditorVectorParameterValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDEditorParameterValue,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorVectorParameterValue_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialEditor/DEditorVectorParameterValue.h" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorVectorParameterValue.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "DEditorVectorParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorVectorParameterValue.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEditorVectorParameterValue, ParameterValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_bIsUsedAsChannelMask_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorVectorParameterValue.h" },
	};
#endif
	void Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_bIsUsedAsChannelMask_SetBit(void* Obj)
	{
		((UDEditorVectorParameterValue*)Obj)->bIsUsedAsChannelMask = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_bIsUsedAsChannelMask = { "bIsUsedAsChannelMask", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDEditorVectorParameterValue), &Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_bIsUsedAsChannelMask_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_bIsUsedAsChannelMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_bIsUsedAsChannelMask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_ChannelNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorVectorParameterValue.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_ChannelNames = { "ChannelNames", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEditorVectorParameterValue, ChannelNames), Z_Construct_UScriptStruct_FParameterChannelNames, METADATA_PARAMS(Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_ChannelNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_ChannelNames_MetaData)) }; // 2209706662
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEditorVectorParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_ParameterValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_bIsUsedAsChannelMask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorVectorParameterValue_Statics::NewProp_ChannelNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEditorVectorParameterValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEditorVectorParameterValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEditorVectorParameterValue_Statics::ClassParams = {
		&UDEditorVectorParameterValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEditorVectorParameterValue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorVectorParameterValue_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEditorVectorParameterValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorVectorParameterValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEditorVectorParameterValue()
	{
		if (!Z_Registration_Info_UClass_UDEditorVectorParameterValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEditorVectorParameterValue.OuterSingleton, Z_Construct_UClass_UDEditorVectorParameterValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEditorVectorParameterValue.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UDEditorVectorParameterValue>()
	{
		return UDEditorVectorParameterValue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEditorVectorParameterValue);
	UDEditorVectorParameterValue::~UDEditorVectorParameterValue() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorVectorParameterValue_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorVectorParameterValue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEditorVectorParameterValue, UDEditorVectorParameterValue::StaticClass, TEXT("UDEditorVectorParameterValue"), &Z_Registration_Info_UClass_UDEditorVectorParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEditorVectorParameterValue), 173627103U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorVectorParameterValue_h_2905047805(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorVectorParameterValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorVectorParameterValue_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
