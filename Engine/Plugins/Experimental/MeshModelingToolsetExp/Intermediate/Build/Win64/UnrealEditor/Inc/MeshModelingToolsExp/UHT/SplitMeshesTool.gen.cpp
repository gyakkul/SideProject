// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SplitMeshesTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplitMeshesTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USplitMeshesTool();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USplitMeshesTool_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USplitMeshesToolBuilder();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USplitMeshesToolBuilder_NoRegister();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USplitMeshesToolProperties();
	MESHMODELINGTOOLSEXP_API UClass* Z_Construct_UClass_USplitMeshesToolProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingTool();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsExp();
// End Cross Module References
	void USplitMeshesToolBuilder::StaticRegisterNativesUSplitMeshesToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USplitMeshesToolBuilder);
	UClass* Z_Construct_UClass_USplitMeshesToolBuilder_NoRegister()
	{
		return USplitMeshesToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_USplitMeshesToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USplitMeshesToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplitMeshesToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SplitMeshesTool.h" },
		{ "ModuleRelativePath", "Public/SplitMeshesTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USplitMeshesToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplitMeshesToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USplitMeshesToolBuilder_Statics::ClassParams = {
		&USplitMeshesToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USplitMeshesToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USplitMeshesToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USplitMeshesToolBuilder()
	{
		if (!Z_Registration_Info_UClass_USplitMeshesToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USplitMeshesToolBuilder.OuterSingleton, Z_Construct_UClass_USplitMeshesToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USplitMeshesToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USplitMeshesToolBuilder>()
	{
		return USplitMeshesToolBuilder::StaticClass();
	}
	USplitMeshesToolBuilder::USplitMeshesToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USplitMeshesToolBuilder);
	USplitMeshesToolBuilder::~USplitMeshesToolBuilder() {}
	void USplitMeshesToolProperties::StaticRegisterNativesUSplitMeshesToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USplitMeshesToolProperties);
	UClass* Z_Construct_UClass_USplitMeshesToolProperties_NoRegister()
	{
		return USplitMeshesToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_USplitMeshesToolProperties_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USplitMeshesToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplitMeshesToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SplitMeshesTool.h" },
		{ "ModuleRelativePath", "Public/SplitMeshesTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplitMeshesToolProperties_Statics::NewProp_bTransferMaterials_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/SplitMeshesTool.h" },
	};
#endif
	void Z_Construct_UClass_USplitMeshesToolProperties_Statics::NewProp_bTransferMaterials_SetBit(void* Obj)
	{
		((USplitMeshesToolProperties*)Obj)->bTransferMaterials = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USplitMeshesToolProperties_Statics::NewProp_bTransferMaterials = { "bTransferMaterials", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USplitMeshesToolProperties), &Z_Construct_UClass_USplitMeshesToolProperties_Statics::NewProp_bTransferMaterials_SetBit, METADATA_PARAMS(Z_Construct_UClass_USplitMeshesToolProperties_Statics::NewProp_bTransferMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplitMeshesToolProperties_Statics::NewProp_bTransferMaterials_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USplitMeshesToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitMeshesToolProperties_Statics::NewProp_bTransferMaterials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USplitMeshesToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplitMeshesToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USplitMeshesToolProperties_Statics::ClassParams = {
		&USplitMeshesToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USplitMeshesToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USplitMeshesToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USplitMeshesToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USplitMeshesToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USplitMeshesToolProperties()
	{
		if (!Z_Registration_Info_UClass_USplitMeshesToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USplitMeshesToolProperties.OuterSingleton, Z_Construct_UClass_USplitMeshesToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USplitMeshesToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USplitMeshesToolProperties>()
	{
		return USplitMeshesToolProperties::StaticClass();
	}
	USplitMeshesToolProperties::USplitMeshesToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USplitMeshesToolProperties);
	USplitMeshesToolProperties::~USplitMeshesToolProperties() {}
	void USplitMeshesTool::StaticRegisterNativesUSplitMeshesTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USplitMeshesTool);
	UClass* Z_Construct_UClass_USplitMeshesTool_NoRegister()
	{
		return USplitMeshesTool::StaticClass();
	}
	struct Z_Construct_UClass_USplitMeshesTool_Statics
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USplitMeshesTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMultiSelectionMeshEditingTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplitMeshesTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SplitMeshesTool.h" },
		{ "ModuleRelativePath", "Public/SplitMeshesTool.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplitMeshesTool_Statics::NewProp_BasicProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/SplitMeshesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USplitMeshesTool_Statics::NewProp_BasicProperties = { "BasicProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplitMeshesTool, BasicProperties), Z_Construct_UClass_USplitMeshesToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USplitMeshesTool_Statics::NewProp_BasicProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplitMeshesTool_Statics::NewProp_BasicProperties_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USplitMeshesTool_Statics::NewProp_OutputTypeProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/SplitMeshesTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USplitMeshesTool_Statics::NewProp_OutputTypeProperties = { "OutputTypeProperties", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USplitMeshesTool, OutputTypeProperties), Z_Construct_UClass_UCreateMeshObjectTypeProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USplitMeshesTool_Statics::NewProp_OutputTypeProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USplitMeshesTool_Statics::NewProp_OutputTypeProperties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USplitMeshesTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitMeshesTool_Statics::NewProp_BasicProperties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USplitMeshesTool_Statics::NewProp_OutputTypeProperties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USplitMeshesTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USplitMeshesTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USplitMeshesTool_Statics::ClassParams = {
		&USplitMeshesTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USplitMeshesTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USplitMeshesTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_USplitMeshesTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USplitMeshesTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USplitMeshesTool()
	{
		if (!Z_Registration_Info_UClass_USplitMeshesTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USplitMeshesTool.OuterSingleton, Z_Construct_UClass_USplitMeshesTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USplitMeshesTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEXP_API UClass* StaticClass<USplitMeshesTool>()
	{
		return USplitMeshesTool::StaticClass();
	}
	USplitMeshesTool::USplitMeshesTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USplitMeshesTool);
	USplitMeshesTool::~USplitMeshesTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SplitMeshesTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SplitMeshesTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USplitMeshesToolBuilder, USplitMeshesToolBuilder::StaticClass, TEXT("USplitMeshesToolBuilder"), &Z_Registration_Info_UClass_USplitMeshesToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USplitMeshesToolBuilder), 501407258U) },
		{ Z_Construct_UClass_USplitMeshesToolProperties, USplitMeshesToolProperties::StaticClass, TEXT("USplitMeshesToolProperties"), &Z_Registration_Info_UClass_USplitMeshesToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USplitMeshesToolProperties), 2623187617U) },
		{ Z_Construct_UClass_USplitMeshesTool, USplitMeshesTool::StaticClass, TEXT("USplitMeshesTool"), &Z_Registration_Info_UClass_USplitMeshesTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USplitMeshesTool), 224733309U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SplitMeshesTool_h_3249479222(TEXT("/Script/MeshModelingToolsExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SplitMeshesTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsExp_Public_SplitMeshesTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
