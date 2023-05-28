// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Graph/NodeSpawners/ControlRigUnitNodeSpawner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigUnitNodeSpawner() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UBlueprintNodeSpawner();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigUnitNodeSpawner();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigUnitNodeSpawner_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	UPackage* Z_Construct_UPackage__Script_ControlRigEditor();
// End Cross Module References
	void UControlRigUnitNodeSpawner::StaticRegisterNativesUControlRigUnitNodeSpawner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigUnitNodeSpawner);
	UClass* Z_Construct_UClass_UControlRigUnitNodeSpawner_NoRegister()
	{
		return UControlRigUnitNodeSpawner::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigUnitNodeSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StructTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StructTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MethodName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MethodName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigUnitNodeSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintNodeSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigUnitNodeSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Graph/NodeSpawners/ControlRigUnitNodeSpawner.h" },
		{ "ModuleRelativePath", "Private/Graph/NodeSpawners/ControlRigUnitNodeSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigUnitNodeSpawner_Statics::NewProp_StructTemplate_MetaData[] = {
		{ "Comment", "/** The unit type we will spawn */" },
		{ "ModuleRelativePath", "Private/Graph/NodeSpawners/ControlRigUnitNodeSpawner.h" },
		{ "ToolTip", "The unit type we will spawn" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UControlRigUnitNodeSpawner_Statics::NewProp_StructTemplate = { "StructTemplate", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigUnitNodeSpawner, StructTemplate), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UClass_UControlRigUnitNodeSpawner_Statics::NewProp_StructTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigUnitNodeSpawner_Statics::NewProp_StructTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigUnitNodeSpawner_Statics::NewProp_MethodName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Graph/NodeSpawners/ControlRigUnitNodeSpawner.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UControlRigUnitNodeSpawner_Statics::NewProp_MethodName = { "MethodName", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigUnitNodeSpawner, MethodName), METADATA_PARAMS(Z_Construct_UClass_UControlRigUnitNodeSpawner_Statics::NewProp_MethodName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigUnitNodeSpawner_Statics::NewProp_MethodName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigUnitNodeSpawner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigUnitNodeSpawner_Statics::NewProp_StructTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigUnitNodeSpawner_Statics::NewProp_MethodName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigUnitNodeSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigUnitNodeSpawner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigUnitNodeSpawner_Statics::ClassParams = {
		&UControlRigUnitNodeSpawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UControlRigUnitNodeSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigUnitNodeSpawner_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigUnitNodeSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigUnitNodeSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigUnitNodeSpawner()
	{
		if (!Z_Registration_Info_UClass_UControlRigUnitNodeSpawner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigUnitNodeSpawner.OuterSingleton, Z_Construct_UClass_UControlRigUnitNodeSpawner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigUnitNodeSpawner.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UControlRigUnitNodeSpawner>()
	{
		return UControlRigUnitNodeSpawner::StaticClass();
	}
	UControlRigUnitNodeSpawner::UControlRigUnitNodeSpawner(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigUnitNodeSpawner);
	UControlRigUnitNodeSpawner::~UControlRigUnitNodeSpawner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Graph_NodeSpawners_ControlRigUnitNodeSpawner_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Graph_NodeSpawners_ControlRigUnitNodeSpawner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigUnitNodeSpawner, UControlRigUnitNodeSpawner::StaticClass, TEXT("UControlRigUnitNodeSpawner"), &Z_Registration_Info_UClass_UControlRigUnitNodeSpawner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigUnitNodeSpawner), 732712616U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Graph_NodeSpawners_ControlRigUnitNodeSpawner_h_807045442(TEXT("/Script/ControlRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Graph_NodeSpawners_ControlRigUnitNodeSpawner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_Graph_NodeSpawners_ControlRigUnitNodeSpawner_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
