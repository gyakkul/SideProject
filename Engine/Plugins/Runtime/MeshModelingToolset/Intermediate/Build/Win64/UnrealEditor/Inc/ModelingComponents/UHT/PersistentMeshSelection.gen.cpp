// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Selection/PersistentMeshSelection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePersistentMeshSelection() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDEPRECATED_PersistentMeshSelection();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDEPRECATED_PersistentMeshSelection_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void UDEPRECATED_PersistentMeshSelection::StaticRegisterNativesUDEPRECATED_PersistentMeshSelection()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_PersistentMeshSelection);
	UClass* Z_Construct_UClass_UDEPRECATED_PersistentMeshSelection_NoRegister()
	{
		return UDEPRECATED_PersistentMeshSelection::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_PersistentMeshSelection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_PersistentMeshSelection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_PersistentMeshSelection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UPersistentMeshSelection is a UObject wrapper for a FGenericMeshSelection\n *///UE_DEPRECATED(5.2, \"UPersistentMeshSelection and related functions are deprecated\")\n" },
		{ "IncludePath", "Selection/PersistentMeshSelection.h" },
		{ "ModuleRelativePath", "Public/Selection/PersistentMeshSelection.h" },
		{ "ToolTip", "UPersistentMeshSelection is a UObject wrapper for a FGenericMeshSelection\n //UE_DEPRECATED(5.2, \"UPersistentMeshSelection and related functions are deprecated\")" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_PersistentMeshSelection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_PersistentMeshSelection>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_PersistentMeshSelection_Statics::ClassParams = {
		&UDEPRECATED_PersistentMeshSelection::StaticClass,
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
		0x021002A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_PersistentMeshSelection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PersistentMeshSelection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_PersistentMeshSelection()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_PersistentMeshSelection.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_PersistentMeshSelection.OuterSingleton, Z_Construct_UClass_UDEPRECATED_PersistentMeshSelection_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_PersistentMeshSelection.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UDEPRECATED_PersistentMeshSelection>()
	{
		return UDEPRECATED_PersistentMeshSelection::StaticClass();
	}
	UDEPRECATED_PersistentMeshSelection::UDEPRECATED_PersistentMeshSelection(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_PersistentMeshSelection);
	UDEPRECATED_PersistentMeshSelection::~UDEPRECATED_PersistentMeshSelection() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_PersistentMeshSelection_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_PersistentMeshSelection_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_PersistentMeshSelection, UDEPRECATED_PersistentMeshSelection::StaticClass, TEXT("UDEPRECATED_PersistentMeshSelection"), &Z_Registration_Info_UClass_UDEPRECATED_PersistentMeshSelection, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_PersistentMeshSelection), 3000302590U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_PersistentMeshSelection_h_2125130695(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_PersistentMeshSelection_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Selection_PersistentMeshSelection_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
