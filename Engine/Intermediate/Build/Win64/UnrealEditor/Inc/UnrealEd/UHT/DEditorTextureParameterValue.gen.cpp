// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/MaterialEditor/DEditorTextureParameterValue.h"
#include "../../Source/Runtime/Engine/Public/MaterialTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDEditorTextureParameterValue() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FParameterChannelNames();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorParameterValue();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorTextureParameterValue();
	UNREALED_API UClass* Z_Construct_UClass_UDEditorTextureParameterValue_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UDEditorTextureParameterValue::StaticRegisterNativesUDEditorTextureParameterValue()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEditorTextureParameterValue);
	UClass* Z_Construct_UClass_UDEditorTextureParameterValue_NoRegister()
	{
		return UDEditorTextureParameterValue::StaticClass();
	}
	struct Z_Construct_UClass_UDEditorTextureParameterValue_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParameterValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChannelNames_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ChannelNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEditorTextureParameterValue_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDEditorParameterValue,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorTextureParameterValue_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "MaterialEditor/DEditorTextureParameterValue.h" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorTextureParameterValue.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorTextureParameterValue_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "Category", "DEditorTextureParameterValue" },
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorTextureParameterValue.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDEditorTextureParameterValue_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEditorTextureParameterValue, ParameterValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDEditorTextureParameterValue_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorTextureParameterValue_Statics::NewProp_ParameterValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEditorTextureParameterValue_Statics::NewProp_ChannelNames_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MaterialEditor/DEditorTextureParameterValue.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDEditorTextureParameterValue_Statics::NewProp_ChannelNames = { "ChannelNames", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEditorTextureParameterValue, ChannelNames), Z_Construct_UScriptStruct_FParameterChannelNames, METADATA_PARAMS(Z_Construct_UClass_UDEditorTextureParameterValue_Statics::NewProp_ChannelNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorTextureParameterValue_Statics::NewProp_ChannelNames_MetaData)) }; // 2209706662
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEditorTextureParameterValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorTextureParameterValue_Statics::NewProp_ParameterValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEditorTextureParameterValue_Statics::NewProp_ChannelNames,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEditorTextureParameterValue_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEditorTextureParameterValue>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEditorTextureParameterValue_Statics::ClassParams = {
		&UDEditorTextureParameterValue::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEditorTextureParameterValue_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorTextureParameterValue_Statics::PropPointers),
		0,
		0x001030A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEditorTextureParameterValue_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEditorTextureParameterValue_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEditorTextureParameterValue()
	{
		if (!Z_Registration_Info_UClass_UDEditorTextureParameterValue.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEditorTextureParameterValue.OuterSingleton, Z_Construct_UClass_UDEditorTextureParameterValue_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEditorTextureParameterValue.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UDEditorTextureParameterValue>()
	{
		return UDEditorTextureParameterValue::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEditorTextureParameterValue);
	UDEditorTextureParameterValue::~UDEditorTextureParameterValue() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorTextureParameterValue_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorTextureParameterValue_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEditorTextureParameterValue, UDEditorTextureParameterValue::StaticClass, TEXT("UDEditorTextureParameterValue"), &Z_Registration_Info_UClass_UDEditorTextureParameterValue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEditorTextureParameterValue), 4238768681U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorTextureParameterValue_h_1632961398(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorTextureParameterValue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_MaterialEditor_DEditorTextureParameterValue_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
