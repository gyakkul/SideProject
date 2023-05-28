// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialFunctionInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UThumbnailInfo_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialFunctionUsage();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMaterialFunctionUsage;
	static UEnum* EMaterialFunctionUsage_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMaterialFunctionUsage.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMaterialFunctionUsage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMaterialFunctionUsage, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMaterialFunctionUsage"));
		}
		return Z_Registration_Info_UEnum_EMaterialFunctionUsage.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMaterialFunctionUsage>()
	{
		return EMaterialFunctionUsage_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMaterialFunctionUsage_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMaterialFunctionUsage_Statics::Enumerators[] = {
		{ "EMaterialFunctionUsage::Default", (int64)EMaterialFunctionUsage::Default },
		{ "EMaterialFunctionUsage::MaterialLayer", (int64)EMaterialFunctionUsage::MaterialLayer },
		{ "EMaterialFunctionUsage::MaterialLayerBlend", (int64)EMaterialFunctionUsage::MaterialLayerBlend },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMaterialFunctionUsage_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Usage set on a material function determines feature compatibility and validation. */" },
		{ "Default.Name", "EMaterialFunctionUsage::Default" },
		{ "MaterialLayer.Name", "EMaterialFunctionUsage::MaterialLayer" },
		{ "MaterialLayerBlend.Name", "EMaterialFunctionUsage::MaterialLayerBlend" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
		{ "ToolTip", "Usage set on a material function determines feature compatibility and validation." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMaterialFunctionUsage_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMaterialFunctionUsage",
		"EMaterialFunctionUsage",
		Z_Construct_UEnum_Engine_EMaterialFunctionUsage_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialFunctionUsage_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMaterialFunctionUsage_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMaterialFunctionUsage_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMaterialFunctionUsage()
	{
		if (!Z_Registration_Info_UEnum_EMaterialFunctionUsage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMaterialFunctionUsage.InnerSingleton, Z_Construct_UEnum_Engine_EMaterialFunctionUsage_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMaterialFunctionUsage.InnerSingleton;
	}
	void UMaterialFunctionInterfaceEditorOnlyData::StaticRegisterNativesUMaterialFunctionInterfaceEditorOnlyData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialFunctionInterfaceEditorOnlyData);
	UClass* Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData_NoRegister()
	{
		return UMaterialFunctionInterfaceEditorOnlyData::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Materials/MaterialFunctionInterface.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionInterfaceEditorOnlyData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData_Statics::ClassParams = {
		&UMaterialFunctionInterfaceEditorOnlyData::StaticClass,
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
		0x000000B0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData()
	{
		if (!Z_Registration_Info_UClass_UMaterialFunctionInterfaceEditorOnlyData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialFunctionInterfaceEditorOnlyData.OuterSingleton, Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialFunctionInterfaceEditorOnlyData.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialFunctionInterfaceEditorOnlyData>()
	{
		return UMaterialFunctionInterfaceEditorOnlyData::StaticClass();
	}
	UMaterialFunctionInterfaceEditorOnlyData::UMaterialFunctionInterfaceEditorOnlyData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionInterfaceEditorOnlyData);
	UMaterialFunctionInterfaceEditorOnlyData::~UMaterialFunctionInterfaceEditorOnlyData() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UMaterialFunctionInterfaceEditorOnlyData)
	void UMaterialFunctionInterface::StaticRegisterNativesUMaterialFunctionInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialFunctionInterface);
	UClass* Z_Construct_UClass_UMaterialFunctionInterface_NoRegister()
	{
		return UMaterialFunctionInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialFunctionInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorOnlyData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorOnlyData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialFunctionUsage_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialFunctionUsage_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialFunctionUsage;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombinedInputTypes_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_CombinedInputTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CombinedOutputTypes_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_CombinedOutputTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailInfo_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ThumbnailInfo;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialFunctionInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInterface_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A Material Function is a collection of material expressions that can be reused in different materials\n */" },
		{ "HideCategories", "object" },
		{ "IncludePath", "Materials/MaterialFunctionInterface.h" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
		{ "ToolTip", "A Material Function is a collection of material expressions that can be reused in different materials" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_EditorOnlyData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_EditorOnlyData = { "EditorOnlyData", nullptr, (EPropertyFlags)0x0024080800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunctionInterface, EditorOnlyData), Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_EditorOnlyData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_EditorOnlyData_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_StateId_MetaData[] = {
		{ "Comment", "/** Used by materials using this function to know when to recompile. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
		{ "ToolTip", "Used by materials using this function to know when to recompile." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_StateId = { "StateId", nullptr, (EPropertyFlags)0x0010000000200000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunctionInterface, StateId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_StateId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_StateId_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_MaterialFunctionUsage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_MaterialFunctionUsage_MetaData[] = {
		{ "Comment", "/** The intended usage of this function, required for material layers. */" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
		{ "ToolTip", "The intended usage of this function, required for material layers." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_MaterialFunctionUsage = { "MaterialFunctionUsage", nullptr, (EPropertyFlags)0x0020090000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunctionInterface, MaterialFunctionUsage), Z_Construct_UEnum_Engine_EMaterialFunctionUsage, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_MaterialFunctionUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_MaterialFunctionUsage_MetaData)) }; // 4120711685
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_CombinedInputTypes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_CombinedInputTypes = { "CombinedInputTypes", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunctionInterface, CombinedInputTypes), METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_CombinedInputTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_CombinedInputTypes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_CombinedOutputTypes_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_CombinedOutputTypes = { "CombinedOutputTypes", nullptr, (EPropertyFlags)0x0010010800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunctionInterface, CombinedOutputTypes), METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_CombinedOutputTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_CombinedOutputTypes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_ThumbnailInfo_MetaData[] = {
		{ "Category", "Thumbnail" },
		{ "Comment", "/** Information for thumbnail rendering */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Materials/MaterialFunctionInterface.h" },
		{ "ToolTip", "Information for thumbnail rendering" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_ThumbnailInfo = { "ThumbnailInfo", nullptr, (EPropertyFlags)0x00160008000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialFunctionInterface, ThumbnailInfo), Z_Construct_UClass_UThumbnailInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_ThumbnailInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_ThumbnailInfo_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialFunctionInterface_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_EditorOnlyData,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_StateId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_MaterialFunctionUsage_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_MaterialFunctionUsage,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_CombinedInputTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_CombinedOutputTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialFunctionInterface_Statics::NewProp_ThumbnailInfo,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialFunctionInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialFunctionInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialFunctionInterface_Statics::ClassParams = {
		&UMaterialFunctionInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaterialFunctionInterface_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInterface_Statics::PropPointers),
		0,
		0x008800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialFunctionInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialFunctionInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialFunctionInterface()
	{
		if (!Z_Registration_Info_UClass_UMaterialFunctionInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialFunctionInterface.OuterSingleton, Z_Construct_UClass_UMaterialFunctionInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialFunctionInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialFunctionInterface>()
	{
		return UMaterialFunctionInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialFunctionInterface);
	UMaterialFunctionInterface::~UMaterialFunctionInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInterface_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInterface_h_Statics::EnumInfo[] = {
		{ EMaterialFunctionUsage_StaticEnum, TEXT("EMaterialFunctionUsage"), &Z_Registration_Info_UEnum_EMaterialFunctionUsage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4120711685U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialFunctionInterfaceEditorOnlyData, UMaterialFunctionInterfaceEditorOnlyData::StaticClass, TEXT("UMaterialFunctionInterfaceEditorOnlyData"), &Z_Registration_Info_UClass_UMaterialFunctionInterfaceEditorOnlyData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialFunctionInterfaceEditorOnlyData), 3930563798U) },
		{ Z_Construct_UClass_UMaterialFunctionInterface, UMaterialFunctionInterface::StaticClass, TEXT("UMaterialFunctionInterface"), &Z_Registration_Info_UClass_UMaterialFunctionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialFunctionInterface), 58992387U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInterface_h_3805353596(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInterface_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Materials_MaterialFunctionInterface_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
