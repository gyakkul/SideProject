// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CombineMeshesTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombineMeshesTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCombineMeshesTool();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCombineMeshesTool_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCombineMeshesToolBuilder();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCombineMeshesToolBuilder_NoRegister();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCombineMeshesToolProperties();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UCombineMeshesToolProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesBase_NoRegister();
	MODELINGCOMPONENTS_API UEnum* Z_Construct_UEnum_ModelingComponents_EBaseCreateFromSelectedTargetType();
	UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References
	void UCombineMeshesToolBuilder::StaticRegisterNativesUCombineMeshesToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombineMeshesToolBuilder);
	UClass* Z_Construct_UClass_UCombineMeshesToolBuilder_NoRegister()
	{
		return UCombineMeshesToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UCombineMeshesToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombineMeshesToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombineMeshesToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "CombineMeshesTool.h" },
		{ "ModuleRelativePath", "Public/CombineMeshesTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombineMeshesToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombineMeshesToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombineMeshesToolBuilder_Statics::ClassParams = {
		&UCombineMeshesToolBuilder::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCombineMeshesToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombineMeshesToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombineMeshesToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UCombineMeshesToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombineMeshesToolBuilder.OuterSingleton, Z_Construct_UClass_UCombineMeshesToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombineMeshesToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UCombineMeshesToolBuilder>()
	{
		return UCombineMeshesToolBuilder::StaticClass();
	}
	UCombineMeshesToolBuilder::UCombineMeshesToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombineMeshesToolBuilder);
	UCombineMeshesToolBuilder::~UCombineMeshesToolBuilder() {}
	void UCombineMeshesToolProperties::StaticRegisterNativesUCombineMeshesToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombineMeshesToolProperties);
	UClass* Z_Construct_UClass_UCombineMeshesToolProperties_NoRegister()
	{
		return UCombineMeshesToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UCombineMeshesToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDuplicateMode_MetaData[];
#endif
		static void NewProp_bIsDuplicateMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDuplicateMode;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_OutputWriteTo_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputWriteTo_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutputWriteTo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputNewName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputNewName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputExistingName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputExistingName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombineMeshesToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombineMeshesToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Common properties\n */" },
		{ "IncludePath", "CombineMeshesTool.h" },
		{ "ModuleRelativePath", "Public/CombineMeshesTool.h" },
		{ "ToolTip", "Common properties" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_bIsDuplicateMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombineMeshesTool.h" },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_bIsDuplicateMode_SetBit(void* Obj)
	{
		((UCombineMeshesToolProperties*)Obj)->bIsDuplicateMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_bIsDuplicateMode = { "bIsDuplicateMode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCombineMeshesToolProperties), &Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_bIsDuplicateMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_bIsDuplicateMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_bIsDuplicateMode_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_OutputWriteTo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_OutputWriteTo_MetaData[] = {
		{ "Category", "OutputObject" },
		{ "Comment", "/** Defines the object the tool output is written to. */" },
		{ "DisplayName", "Write To" },
		{ "EditCondition", "bIsDuplicateMode == false" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/CombineMeshesTool.h" },
		{ "ToolTip", "Defines the object the tool output is written to." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_OutputWriteTo = { "OutputWriteTo", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombineMeshesToolProperties, OutputWriteTo), Z_Construct_UEnum_ModelingComponents_EBaseCreateFromSelectedTargetType, METADATA_PARAMS(Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_OutputWriteTo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_OutputWriteTo_MetaData)) }; // 468756563
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_OutputNewName_MetaData[] = {
		{ "Category", "OutputObject" },
		{ "Comment", "/** Base name of the newly generated object to which the output is written to. */" },
		{ "DisplayName", "Name" },
		{ "EditCondition", "bIsDuplicateMode || OutputWriteTo == EBaseCreateFromSelectedTargetType::NewObject" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CombineMeshesTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Base name of the newly generated object to which the output is written to." },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_OutputNewName = { "OutputNewName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombineMeshesToolProperties, OutputNewName), METADATA_PARAMS(Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_OutputNewName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_OutputNewName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_OutputExistingName_MetaData[] = {
		{ "Category", "OutputObject" },
		{ "Comment", "/** Name of the existing object to which the output is written to. */" },
		{ "DisplayName", "Name" },
		{ "EditCondition", "bIsDuplicateMode == false && OutputWriteTo != EBaseCreateFromSelectedTargetType::NewObject" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/CombineMeshesTool.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "Name of the existing object to which the output is written to." },
		{ "TransientToolProperty", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_OutputExistingName = { "OutputExistingName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombineMeshesToolProperties, OutputExistingName), METADATA_PARAMS(Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_OutputExistingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_OutputExistingName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombineMeshesToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_bIsDuplicateMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_OutputWriteTo_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_OutputWriteTo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_OutputNewName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombineMeshesToolProperties_Statics::NewProp_OutputExistingName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombineMeshesToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombineMeshesToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombineMeshesToolProperties_Statics::ClassParams = {
		&UCombineMeshesToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCombineMeshesToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCombineMeshesToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCombineMeshesToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombineMeshesToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombineMeshesToolProperties()
	{
		if (!Z_Registration_Info_UClass_UCombineMeshesToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombineMeshesToolProperties.OuterSingleton, Z_Construct_UClass_UCombineMeshesToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombineMeshesToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UCombineMeshesToolProperties>()
	{
		return UCombineMeshesToolProperties::StaticClass();
	}
	UCombineMeshesToolProperties::UCombineMeshesToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombineMeshesToolProperties);
	UCombineMeshesToolProperties::~UCombineMeshesToolProperties() {}
	void UCombineMeshesTool::StaticRegisterNativesUCombineMeshesTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCombineMeshesTool);
	UClass* Z_Construct_UClass_UCombineMeshesTool_NoRegister()
	{
		return UCombineMeshesTool::StaticClass();
	}
	struct Z_Construct_UClass_UCombineMeshesTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BasicProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BasicProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputTypeProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OutputTypeProperties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandleSourceProperties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_HandleSourceProperties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCombineMeshesTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombineMeshesTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Simple tool to combine multiple meshes into a single mesh asset\n */" },
		{ "IncludePath", "CombineMeshesTool.h" },
		{ "ModuleRelativePath", "Public/CombineMeshesTool.h" },
		{ "ToolTip", "Simple tool to combine multiple meshes into a single mesh asset" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombineMeshesTool_Statics::NewProp_BasicProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombineMeshesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCombineMeshesTool_Statics::NewProp_BasicProperties = { "BasicProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombineMeshesTool, BasicProperties), Z_Construct_UClass_UCombineMeshesToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombineMeshesTool_Statics::NewProp_BasicProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombineMeshesTool_Statics::NewProp_BasicProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombineMeshesTool_Statics::NewProp_OutputTypeProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombineMeshesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCombineMeshesTool_Statics::NewProp_OutputTypeProperties = { "OutputTypeProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombineMeshesTool, OutputTypeProperties), Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombineMeshesTool_Statics::NewProp_OutputTypeProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombineMeshesTool_Statics::NewProp_OutputTypeProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCombineMeshesTool_Statics::NewProp_HandleSourceProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/CombineMeshesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCombineMeshesTool_Statics::NewProp_HandleSourceProperties = { "HandleSourceProperties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCombineMeshesTool, HandleSourceProperties), Z_Construct_UClass_UOnAcceptHandleSourcesPropertiesBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCombineMeshesTool_Statics::NewProp_HandleSourceProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCombineMeshesTool_Statics::NewProp_HandleSourceProperties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCombineMeshesTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombineMeshesTool_Statics::NewProp_BasicProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombineMeshesTool_Statics::NewProp_OutputTypeProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCombineMeshesTool_Statics::NewProp_HandleSourceProperties,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCombineMeshesTool_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_NoRegister, (int32)VTABLE_OFFSET(UCombineMeshesTool, IInteractiveToolExclusiveToolAPI), false },  // 3502411413
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCombineMeshesTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCombineMeshesTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCombineMeshesTool_Statics::ClassParams = {
		&UCombineMeshesTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCombineMeshesTool_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCombineMeshesTool_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCombineMeshesTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCombineMeshesTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCombineMeshesTool()
	{
		if (!Z_Registration_Info_UClass_UCombineMeshesTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCombineMeshesTool.OuterSingleton, Z_Construct_UClass_UCombineMeshesTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCombineMeshesTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UCombineMeshesTool>()
	{
		return UCombineMeshesTool::StaticClass();
	}
	UCombineMeshesTool::UCombineMeshesTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCombineMeshesTool);
	UCombineMeshesTool::~UCombineMeshesTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCombineMeshesToolBuilder, UCombineMeshesToolBuilder::StaticClass, TEXT("UCombineMeshesToolBuilder"), &Z_Registration_Info_UClass_UCombineMeshesToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombineMeshesToolBuilder), 1041359197U) },
		{ Z_Construct_UClass_UCombineMeshesToolProperties, UCombineMeshesToolProperties::StaticClass, TEXT("UCombineMeshesToolProperties"), &Z_Registration_Info_UClass_UCombineMeshesToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombineMeshesToolProperties), 1648111826U) },
		{ Z_Construct_UClass_UCombineMeshesTool, UCombineMeshesTool::StaticClass, TEXT("UCombineMeshesTool"), &Z_Registration_Info_UClass_UCombineMeshesTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCombineMeshesTool), 1700424030U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h_545401556(TEXT("/Script/MeshModelingTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_CombineMeshesTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
