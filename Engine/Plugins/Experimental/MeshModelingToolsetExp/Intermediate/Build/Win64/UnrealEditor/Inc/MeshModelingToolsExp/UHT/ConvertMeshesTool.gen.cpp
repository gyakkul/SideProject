// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConvertMeshesTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConvertMeshesTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UConvertMeshesTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UConvertMeshesTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UConvertMeshesToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UConvertMeshesToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UConvertMeshesToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_UConvertMeshesToolProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void UConvertMeshesToolBuilder::StaticRegisterNativesUConvertMeshesToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConvertMeshesToolBuilder);
	UClass* Z_Construct_UClass_UConvertMeshesToolBuilder_NoRegister()
	{
		return UConvertMeshesToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UConvertMeshesToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConvertMeshesToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertMeshesToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "ConvertMeshesTool.h" },
		{ "ModuleRelativePath", "Public/ConvertMeshesTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConvertMeshesToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConvertMeshesToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConvertMeshesToolBuilder_Statics::ClassParams = {
		&UConvertMeshesToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UConvertMeshesToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertMeshesToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConvertMeshesToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UConvertMeshesToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConvertMeshesToolBuilder.OuterSingleton, Z_Construct_UClass_UConvertMeshesToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConvertMeshesToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UConvertMeshesToolBuilder>()
	{
		return UConvertMeshesToolBuilder::StaticClass();
	}
	UConvertMeshesToolBuilder::UConvertMeshesToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConvertMeshesToolBuilder);
	UConvertMeshesToolBuilder::~UConvertMeshesToolBuilder() {}
	void UConvertMeshesToolProperties::StaticRegisterNativesUConvertMeshesToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConvertMeshesToolProperties);
	UClass* Z_Construct_UClass_UConvertMeshesToolProperties_NoRegister()
	{
		return UConvertMeshesToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UConvertMeshesToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTransferMaterials_MetaData[];
#endif
		static void NewProp_bTransferMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTransferMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowTransferMaterials_MetaData[];
#endif
		static void NewProp_bShowTransferMaterials_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTransferMaterials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConvertMeshesToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertMeshesToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Standard properties of the Transfer operation\n */" },
		{ "IncludePath", "ConvertMeshesTool.h" },
		{ "ModuleRelativePath", "Public/ConvertMeshesTool.h" },
		{ "ToolTip", "Standard properties of the Transfer operation" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertMeshesToolProperties_Statics::NewProp_bTransferMaterials_MetaData[] = {
		{ "Category", "Options" },
		{ "EditCondition", "bShowTransferMaterials == true" },
		{ "EditConditionHides", "" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/ConvertMeshesTool.h" },
	};
#endif
	void Z_Construct_UClass_UConvertMeshesToolProperties_Statics::NewProp_bTransferMaterials_SetBit(void* Obj)
	{
		((UConvertMeshesToolProperties*)Obj)->bTransferMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConvertMeshesToolProperties_Statics::NewProp_bTransferMaterials = { "bTransferMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConvertMeshesToolProperties), &Z_Construct_UClass_UConvertMeshesToolProperties_Statics::NewProp_bTransferMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConvertMeshesToolProperties_Statics::NewProp_bTransferMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertMeshesToolProperties_Statics::NewProp_bTransferMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertMeshesToolProperties_Statics::NewProp_bShowTransferMaterials_MetaData[] = {
		{ "Comment", "// control whether the transfer materials option is displayed\n" },
		{ "ModuleRelativePath", "Public/ConvertMeshesTool.h" },
		{ "ToolTip", "control whether the transfer materials option is displayed" },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_UConvertMeshesToolProperties_Statics::NewProp_bShowTransferMaterials_SetBit(void* Obj)
	{
		((UConvertMeshesToolProperties*)Obj)->bShowTransferMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UConvertMeshesToolProperties_Statics::NewProp_bShowTransferMaterials = { "bShowTransferMaterials", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UConvertMeshesToolProperties), &Z_Construct_UClass_UConvertMeshesToolProperties_Statics::NewProp_bShowTransferMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_UConvertMeshesToolProperties_Statics::NewProp_bShowTransferMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertMeshesToolProperties_Statics::NewProp_bShowTransferMaterials_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConvertMeshesToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertMeshesToolProperties_Statics::NewProp_bTransferMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertMeshesToolProperties_Statics::NewProp_bShowTransferMaterials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConvertMeshesToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConvertMeshesToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConvertMeshesToolProperties_Statics::ClassParams = {
		&UConvertMeshesToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConvertMeshesToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConvertMeshesToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UConvertMeshesToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertMeshesToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConvertMeshesToolProperties()
	{
		if (!Z_Registration_Info_UClass_UConvertMeshesToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConvertMeshesToolProperties.OuterSingleton, Z_Construct_UClass_UConvertMeshesToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConvertMeshesToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UConvertMeshesToolProperties>()
	{
		return UConvertMeshesToolProperties::StaticClass();
	}
	UConvertMeshesToolProperties::UConvertMeshesToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConvertMeshesToolProperties);
	UConvertMeshesToolProperties::~UConvertMeshesToolProperties() {}
	void UConvertMeshesTool::StaticRegisterNativesUConvertMeshesTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConvertMeshesTool);
	UClass* Z_Construct_UClass_UConvertMeshesTool_NoRegister()
	{
		return UConvertMeshesTool::StaticClass();
	}
	struct Z_Construct_UClass_UConvertMeshesTool_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConvertMeshesTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertMeshesTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConvertMeshesTool.h" },
		{ "ModuleRelativePath", "Public/ConvertMeshesTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertMeshesTool_Statics::NewProp_BasicProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConvertMeshesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConvertMeshesTool_Statics::NewProp_BasicProperties = { "BasicProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConvertMeshesTool, BasicProperties), Z_Construct_UClass_UConvertMeshesToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConvertMeshesTool_Statics::NewProp_BasicProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertMeshesTool_Statics::NewProp_BasicProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConvertMeshesTool_Statics::NewProp_OutputTypeProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConvertMeshesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UConvertMeshesTool_Statics::NewProp_OutputTypeProperties = { "OutputTypeProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConvertMeshesTool, OutputTypeProperties), Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UConvertMeshesTool_Statics::NewProp_OutputTypeProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertMeshesTool_Statics::NewProp_OutputTypeProperties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConvertMeshesTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertMeshesTool_Statics::NewProp_BasicProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConvertMeshesTool_Statics::NewProp_OutputTypeProperties,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UConvertMeshesTool_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractiveToolExclusiveToolAPI_NoRegister, (int32)VTABLE_OFFSET(UConvertMeshesTool, IInteractiveToolExclusiveToolAPI), false },  // 3502411413
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConvertMeshesTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConvertMeshesTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConvertMeshesTool_Statics::ClassParams = {
		&UConvertMeshesTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConvertMeshesTool_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConvertMeshesTool_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UConvertMeshesTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConvertMeshesTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConvertMeshesTool()
	{
		if (!Z_Registration_Info_UClass_UConvertMeshesTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConvertMeshesTool.OuterSingleton, Z_Construct_UClass_UConvertMeshesTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConvertMeshesTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<UConvertMeshesTool>()
	{
		return UConvertMeshesTool::StaticClass();
	}
	UConvertMeshesTool::UConvertMeshesTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConvertMeshesTool);
	UConvertMeshesTool::~UConvertMeshesTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertMeshesTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertMeshesTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConvertMeshesToolBuilder, UConvertMeshesToolBuilder::StaticClass, TEXT("UConvertMeshesToolBuilder"), &Z_Registration_Info_UClass_UConvertMeshesToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConvertMeshesToolBuilder), 4280836238U) },
		{ Z_Construct_UClass_UConvertMeshesToolProperties, UConvertMeshesToolProperties::StaticClass, TEXT("UConvertMeshesToolProperties"), &Z_Registration_Info_UClass_UConvertMeshesToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConvertMeshesToolProperties), 1468702669U) },
		{ Z_Construct_UClass_UConvertMeshesTool, UConvertMeshesTool::StaticClass, TEXT("UConvertMeshesTool"), &Z_Registration_Info_UClass_UConvertMeshesTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConvertMeshesTool), 3209773849U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertMeshesTool_h_1020327439(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertMeshesTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_ConvertMeshesTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
