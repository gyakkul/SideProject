// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Commands/DisconnectGeometrySelectionCommand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDisconnectGeometrySelectionCommand() {}
// Cross Module References
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UDisconnectGeometrySelectionCommand();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UDisconnectGeometrySelectionCommand_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UGeometrySelectionEditCommand();
	UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References
	void UDisconnectGeometrySelectionCommand::StaticRegisterNativesUDisconnectGeometrySelectionCommand()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDisconnectGeometrySelectionCommand);
	UClass* Z_Construct_UClass_UDisconnectGeometrySelectionCommand_NoRegister()
	{
		return UDisconnectGeometrySelectionCommand::StaticClass();
	}
	struct Z_Construct_UClass_UDisconnectGeometrySelectionCommand_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDisconnectGeometrySelectionCommand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGeometrySelectionEditCommand,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDisconnectGeometrySelectionCommand_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UDisconnectGeometrySelectionCommand disconnects the geometric elements identified by the Selection.\n * Currently only supports mesh selections (Triangle and Polygroup types)\n * Disconnects selected faces, or faces connected to selected edges, or faces connected to selected vertices.\n */" },
		{ "IncludePath", "Commands/DisconnectGeometrySelectionCommand.h" },
		{ "ModuleRelativePath", "Public/Commands/DisconnectGeometrySelectionCommand.h" },
		{ "ToolTip", "UDisconnectGeometrySelectionCommand disconnects the geometric elements identified by the Selection.\nCurrently only supports mesh selections (Triangle and Polygroup types)\nDisconnects selected faces, or faces connected to selected edges, or faces connected to selected vertices." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDisconnectGeometrySelectionCommand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDisconnectGeometrySelectionCommand>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDisconnectGeometrySelectionCommand_Statics::ClassParams = {
		&UDisconnectGeometrySelectionCommand::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDisconnectGeometrySelectionCommand_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDisconnectGeometrySelectionCommand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDisconnectGeometrySelectionCommand()
	{
		if (!Z_Registration_Info_UClass_UDisconnectGeometrySelectionCommand.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDisconnectGeometrySelectionCommand.OuterSingleton, Z_Construct_UClass_UDisconnectGeometrySelectionCommand_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDisconnectGeometrySelectionCommand.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UDisconnectGeometrySelectionCommand>()
	{
		return UDisconnectGeometrySelectionCommand::StaticClass();
	}
	UDisconnectGeometrySelectionCommand::UDisconnectGeometrySelectionCommand(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDisconnectGeometrySelectionCommand);
	UDisconnectGeometrySelectionCommand::~UDisconnectGeometrySelectionCommand() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_DisconnectGeometrySelectionCommand_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_DisconnectGeometrySelectionCommand_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDisconnectGeometrySelectionCommand, UDisconnectGeometrySelectionCommand::StaticClass, TEXT("UDisconnectGeometrySelectionCommand"), &Z_Registration_Info_UClass_UDisconnectGeometrySelectionCommand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDisconnectGeometrySelectionCommand), 4124904003U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_DisconnectGeometrySelectionCommand_h_917630097(TEXT("/Script/MeshModelingTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_DisconnectGeometrySelectionCommand_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_DisconnectGeometrySelectionCommand_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
