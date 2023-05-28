// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EditorModelingObjectsCreationAPI.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEditorModelingObjectsCreationAPI() {}
// Cross Module References
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UModelingObjectsCreationAPI();
	MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_UEditorModelingObjectsCreationAPI();
	MODELINGCOMPONENTSEDITORONLY_API UClass* Z_Construct_UClass_UEditorModelingObjectsCreationAPI_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponentsEditorOnly();
// End Cross Module References
	void UEditorModelingObjectsCreationAPI::StaticRegisterNativesUEditorModelingObjectsCreationAPI()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEditorModelingObjectsCreationAPI);
	UClass* Z_Construct_UClass_UEditorModelingObjectsCreationAPI_NoRegister()
	{
		return UEditorModelingObjectsCreationAPI::StaticClass();
	}
	struct Z_Construct_UClass_UEditorModelingObjectsCreationAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEditorModelingObjectsCreationAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UModelingObjectsCreationAPI,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponentsEditorOnly,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEditorModelingObjectsCreationAPI_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implementation of UModelingObjectsCreationAPI suitable for use in UE Editor.\n * - CreateMeshObject() currently creates a StaticMesh Asset/Actor\n * - CreateTextureObject() currently creates a UTexture2D Asset\n * \n * This is intended to be registered in the ToolsContext ContextObjectStore.\n * Static utility functions ::Register() / ::Find() / ::Deregister() can be used to do this in a consistent way.\n * \n * Several client-provided callbacks can be used to customize functionality (eg in Modeling Mode) \n *  - GetNewAssetPathNameCallback is called to determine an asset path. This can be used to do\n *    things like pop up an interactive path-selection dialog, use project-defined paths, etc\n *  - OnModelingMeshCreated is broadcast for each new created mesh object\n *  - OnModelingTextureCreated is broadcast for each new created texture object\n */" },
		{ "IncludePath", "EditorModelingObjectsCreationAPI.h" },
		{ "ModuleRelativePath", "Public/EditorModelingObjectsCreationAPI.h" },
		{ "ToolTip", "Implementation of UModelingObjectsCreationAPI suitable for use in UE Editor.\n- CreateMeshObject() currently creates a StaticMesh Asset/Actor\n- CreateTextureObject() currently creates a UTexture2D Asset\n\nThis is intended to be registered in the ToolsContext ContextObjectStore.\nStatic utility functions ::Register() / ::Find() / ::Deregister() can be used to do this in a consistent way.\n\nSeveral client-provided callbacks can be used to customize functionality (eg in Modeling Mode)\n - GetNewAssetPathNameCallback is called to determine an asset path. This can be used to do\n   things like pop up an interactive path-selection dialog, use project-defined paths, etc\n - OnModelingMeshCreated is broadcast for each new created mesh object\n - OnModelingTextureCreated is broadcast for each new created texture object" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEditorModelingObjectsCreationAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEditorModelingObjectsCreationAPI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEditorModelingObjectsCreationAPI_Statics::ClassParams = {
		&UEditorModelingObjectsCreationAPI::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEditorModelingObjectsCreationAPI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEditorModelingObjectsCreationAPI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEditorModelingObjectsCreationAPI()
	{
		if (!Z_Registration_Info_UClass_UEditorModelingObjectsCreationAPI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEditorModelingObjectsCreationAPI.OuterSingleton, Z_Construct_UClass_UEditorModelingObjectsCreationAPI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEditorModelingObjectsCreationAPI.OuterSingleton;
	}
	template<> MODELINGCOMPONENTSEDITORONLY_API UClass* StaticClass<UEditorModelingObjectsCreationAPI>()
	{
		return UEditorModelingObjectsCreationAPI::StaticClass();
	}
	UEditorModelingObjectsCreationAPI::UEditorModelingObjectsCreationAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEditorModelingObjectsCreationAPI);
	UEditorModelingObjectsCreationAPI::~UEditorModelingObjectsCreationAPI() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_EditorModelingObjectsCreationAPI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_EditorModelingObjectsCreationAPI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEditorModelingObjectsCreationAPI, UEditorModelingObjectsCreationAPI::StaticClass, TEXT("UEditorModelingObjectsCreationAPI"), &Z_Registration_Info_UClass_UEditorModelingObjectsCreationAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEditorModelingObjectsCreationAPI), 1106608650U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_EditorModelingObjectsCreationAPI_h_2434666761(TEXT("/Script/ModelingComponentsEditorOnly"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_EditorModelingObjectsCreationAPI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponentsEditorOnly_Public_EditorModelingObjectsCreationAPI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
