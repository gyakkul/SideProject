// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/DataLayer/DeprecatedDataLayerInstance.h"
#include "../../Source/Runtime/Engine/Public/WorldPartition/DataLayer/WorldDataLayers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeprecatedDataLayerInstance() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UDataLayerInstance();
	ENGINE_API UClass* Z_Construct_UClass_UDeprecatedDataLayerInstance();
	ENGINE_API UClass* Z_Construct_UClass_UDeprecatedDataLayerInstance_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDataLayerType();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDeprecatedDataLayerInstance::StaticRegisterNativesUDeprecatedDataLayerInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeprecatedDataLayerInstance);
	UClass* Z_Construct_UClass_UDeprecatedDataLayerInstance_NoRegister()
	{
		return UDeprecatedDataLayerInstance::StaticClass();
	}
	struct Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Label;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeprecatedDataLayerFName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DeprecatedDataLayerFName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_DataLayerType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLayerType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_DataLayerType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataLayerInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::Class_MetaDataParams[] = {
		{ "AutoCollapseCategories", "Data Layer|Advanced Data Layer|Advanced" },
		{ "AutoExpandCategories", "Data Layer|Editor Data Layer|Advanced|Runtime Data Layer|Editor Data Layer|Advanced|Runtime" },
		{ "Comment", "// Class used for Runtime Conversion of the Deprecated UDataLayer Class to UDataLayerInstance + UDataLayerAsset.\n// This class is not to be inherited. It is solely used by AWorldDatalayers to convert UDataLayers to UDataLayerInstances on Level Boot.\n// You will need to run the DataLayerToAsset CommandLet to convert the deprecated datalayers to UDataLayerAssets and UDataLayerInstanceWithAsset.\n" },
		{ "IncludePath", "WorldPartition/DataLayer/DeprecatedDataLayerInstance.h" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DeprecatedDataLayerInstance.h" },
		{ "ToolTip", "Class used for Runtime Conversion of the Deprecated UDataLayer Class to UDataLayerInstance + UDataLayerAsset.\nThis class is not to be inherited. It is solely used by AWorldDatalayers to convert UDataLayers to UDataLayerInstances on Level Boot.\nYou will need to run the DataLayerToAsset CommandLet to convert the deprecated datalayers to UDataLayerAssets and UDataLayerInstanceWithAsset." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::NewProp_Label_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DeprecatedDataLayerInstance.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeprecatedDataLayerInstance, Label), METADATA_PARAMS(Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::NewProp_Label_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::NewProp_DeprecatedDataLayerFName_MetaData[] = {
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DeprecatedDataLayerInstance.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::NewProp_DeprecatedDataLayerFName = { "DeprecatedDataLayerFName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeprecatedDataLayerInstance, DeprecatedDataLayerFName), METADATA_PARAMS(Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::NewProp_DeprecatedDataLayerFName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::NewProp_DeprecatedDataLayerFName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::NewProp_DataLayerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::NewProp_DataLayerType_MetaData[] = {
		{ "Category", "Data Layer" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DeprecatedDataLayerInstance.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::NewProp_DataLayerType = { "DataLayerType", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeprecatedDataLayerInstance, DataLayerType), Z_Construct_UEnum_Engine_EDataLayerType, METADATA_PARAMS(Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::NewProp_DataLayerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::NewProp_DataLayerType_MetaData)) }; // 3721880825
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::NewProp_DebugColor_MetaData[] = {
		{ "Category", "Data Layer|Runtime" },
		{ "EditCondition", "DataLayerType == EDataLayerType::Runtime" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/WorldPartition/DataLayer/DeprecatedDataLayerInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDeprecatedDataLayerInstance, DebugColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::NewProp_DebugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::NewProp_DebugColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::NewProp_DeprecatedDataLayerFName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::NewProp_DataLayerType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::NewProp_DataLayerType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::NewProp_DebugColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeprecatedDataLayerInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::ClassParams = {
		&UDeprecatedDataLayerInstance::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::PropPointers),
		0,
		0x001004A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeprecatedDataLayerInstance()
	{
		if (!Z_Registration_Info_UClass_UDeprecatedDataLayerInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeprecatedDataLayerInstance.OuterSingleton, Z_Construct_UClass_UDeprecatedDataLayerInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDeprecatedDataLayerInstance.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDeprecatedDataLayerInstance>()
	{
		return UDeprecatedDataLayerInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeprecatedDataLayerInstance);
	UDeprecatedDataLayerInstance::~UDeprecatedDataLayerInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DeprecatedDataLayerInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DeprecatedDataLayerInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDeprecatedDataLayerInstance, UDeprecatedDataLayerInstance::StaticClass, TEXT("UDeprecatedDataLayerInstance"), &Z_Registration_Info_UClass_UDeprecatedDataLayerInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeprecatedDataLayerInstance), 1295889474U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DeprecatedDataLayerInstance_h_70541805(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DeprecatedDataLayerInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_WorldPartition_DataLayer_DeprecatedDataLayerInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
