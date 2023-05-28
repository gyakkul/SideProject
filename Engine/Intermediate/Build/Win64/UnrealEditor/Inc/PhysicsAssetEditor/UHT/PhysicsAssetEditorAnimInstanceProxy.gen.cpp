// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../PhysicsAssetEditor/Private/PhysicsAssetEditorAnimInstanceProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsAssetEditorAnimInstanceProxy() {}
// Cross Module References
	ANIMGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy();
	PHYSICSASSETEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPhysicsAssetEditorAnimInstanceProxy();
	UPackage* Z_Construct_UPackage__Script_PhysicsAssetEditor();
// End Cross Module References

static_assert(std::is_polymorphic<FPhysicsAssetEditorAnimInstanceProxy>() == std::is_polymorphic<FAnimPreviewInstanceProxy>(), "USTRUCT FPhysicsAssetEditorAnimInstanceProxy cannot be polymorphic unless super FAnimPreviewInstanceProxy is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PhysicsAssetEditorAnimInstanceProxy;
class UScriptStruct* FPhysicsAssetEditorAnimInstanceProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PhysicsAssetEditorAnimInstanceProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PhysicsAssetEditorAnimInstanceProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsAssetEditorAnimInstanceProxy, (UObject*)Z_Construct_UPackage__Script_PhysicsAssetEditor(), TEXT("PhysicsAssetEditorAnimInstanceProxy"));
	}
	return Z_Registration_Info_UScriptStruct_PhysicsAssetEditorAnimInstanceProxy.OuterSingleton;
}
template<> PHYSICSASSETEDITOR_API UScriptStruct* StaticStruct<FPhysicsAssetEditorAnimInstanceProxy>()
{
	return FPhysicsAssetEditorAnimInstanceProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPhysicsAssetEditorAnimInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhysicsAssetEditorAnimInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Proxy override for this UAnimInstance-derived class */" },
		{ "ModuleRelativePath", "Private/PhysicsAssetEditorAnimInstanceProxy.h" },
		{ "ToolTip", "Proxy override for this UAnimInstance-derived class" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhysicsAssetEditorAnimInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhysicsAssetEditorAnimInstanceProxy>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhysicsAssetEditorAnimInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PhysicsAssetEditor,
		Z_Construct_UScriptStruct_FAnimPreviewInstanceProxy,
		&NewStructOps,
		"PhysicsAssetEditorAnimInstanceProxy",
		sizeof(FPhysicsAssetEditorAnimInstanceProxy),
		alignof(FPhysicsAssetEditorAnimInstanceProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhysicsAssetEditorAnimInstanceProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhysicsAssetEditorAnimInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhysicsAssetEditorAnimInstanceProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_PhysicsAssetEditorAnimInstanceProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PhysicsAssetEditorAnimInstanceProxy.InnerSingleton, Z_Construct_UScriptStruct_FPhysicsAssetEditorAnimInstanceProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PhysicsAssetEditorAnimInstanceProxy.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorAnimInstanceProxy_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorAnimInstanceProxy_h_Statics::ScriptStructInfo[] = {
		{ FPhysicsAssetEditorAnimInstanceProxy::StaticStruct, Z_Construct_UScriptStruct_FPhysicsAssetEditorAnimInstanceProxy_Statics::NewStructOps, TEXT("PhysicsAssetEditorAnimInstanceProxy"), &Z_Registration_Info_UScriptStruct_PhysicsAssetEditorAnimInstanceProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPhysicsAssetEditorAnimInstanceProxy), 2471312064U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorAnimInstanceProxy_h_1473929799(TEXT("/Script/PhysicsAssetEditor"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorAnimInstanceProxy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_PhysicsAssetEditor_Private_PhysicsAssetEditorAnimInstanceProxy_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
