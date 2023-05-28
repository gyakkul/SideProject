// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeProjectorParameter.h"
#include "../Public/MuCO/CustomizableObjectParameterTypeDefinitions.h"
#include "../Public/MuCO/CustomizableObjectUIData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeProjectorParameter() {}
// Cross Module References
	CUSTOMIZABLEOBJECT_API UEnum* Z_Construct_UEnum_CustomizableObject_ECustomizableObjectProjectorType();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectProjector();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMutableParamUIMetadata();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNode();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectNodeProjectorParameter::StaticRegisterNativesUCustomizableObjectNodeProjectorParameter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeProjectorParameter);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_NoRegister()
	{
		return UCustomizableObjectNodeProjectorParameter::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamUIMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParamUIMetadata;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ProjectionType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ProjectionType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ProjectionAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceSkeletonIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ReferenceSkeletonIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectorBone_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProjectorBone;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "CustomizableObjectHide" },
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeProjectorParameter.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeProjectorParameter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "CustomizableObjectHide" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeProjectorParameter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeProjectorParameter, DefaultValue), Z_Construct_UScriptStruct_FCustomizableObjectProjector, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_DefaultValue_MetaData)) }; // 574198591
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeProjectorParameter.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeProjectorParameter, ParameterName), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ParamUIMetadata_MetaData[] = {
		{ "Category", "UI" },
		{ "DisplayName", "Parameter UI Metadata" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeProjectorParameter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ParamUIMetadata = { "ParamUIMetadata", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeProjectorParameter, ParamUIMetadata), Z_Construct_UScriptStruct_FMutableParamUIMetadata, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ParamUIMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ParamUIMetadata_MetaData)) }; // 1713445463
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ProjectionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ProjectionType_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeProjectorParameter.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ProjectionType = { "ProjectionType", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeProjectorParameter, ProjectionType), Z_Construct_UEnum_CustomizableObject_ECustomizableObjectProjectorType, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ProjectionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ProjectionType_MetaData)) }; // 4204272212
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ProjectionAngle_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "DisplayName", "Projection Angle (degrees)" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeProjectorParameter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ProjectionAngle = { "ProjectionAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeProjectorParameter, ProjectionAngle), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ProjectionAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ProjectionAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ReferenceSkeletonIndex_MetaData[] = {
		{ "Category", "ProjectorSnapToBone" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeProjectorParameter.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ReferenceSkeletonIndex = { "ReferenceSkeletonIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeProjectorParameter, ReferenceSkeletonIndex), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ReferenceSkeletonIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ReferenceSkeletonIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ProjectorBone_MetaData[] = {
		{ "Category", "ProjectorSnapToBone" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeProjectorParameter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ProjectorBone = { "ProjectorBone", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeProjectorParameter, ProjectorBone), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ProjectorBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ProjectorBone_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_DefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ParamUIMetadata,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ProjectionType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ProjectionType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ProjectionAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ReferenceSkeletonIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::NewProp_ProjectorBone,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeProjectorParameter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::ClassParams = {
		&UCustomizableObjectNodeProjectorParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeProjectorParameter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeProjectorParameter.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeProjectorParameter.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeProjectorParameter>()
	{
		return UCustomizableObjectNodeProjectorParameter::StaticClass();
	}
	UCustomizableObjectNodeProjectorParameter::UCustomizableObjectNodeProjectorParameter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeProjectorParameter);
	UCustomizableObjectNodeProjectorParameter::~UCustomizableObjectNodeProjectorParameter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeProjectorParameter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeProjectorParameter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeProjectorParameter, UCustomizableObjectNodeProjectorParameter::StaticClass, TEXT("UCustomizableObjectNodeProjectorParameter"), &Z_Registration_Info_UClass_UCustomizableObjectNodeProjectorParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeProjectorParameter), 2538186221U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeProjectorParameter_h_159765828(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeProjectorParameter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeProjectorParameter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
