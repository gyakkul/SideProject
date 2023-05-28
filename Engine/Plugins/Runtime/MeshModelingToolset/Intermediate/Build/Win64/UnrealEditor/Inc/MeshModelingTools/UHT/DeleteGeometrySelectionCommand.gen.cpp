// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Commands/DeleteGeometrySelectionCommand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeleteGeometrySelectionCommand() {}
// Cross Module References
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UDeleteGeometrySelectionCommand();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_UDeleteGeometrySelectionCommand_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UGeometrySelectionEditCommand();
	UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References
	void UDeleteGeometrySelectionCommand::StaticRegisterNativesUDeleteGeometrySelectionCommand()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeleteGeometrySelectionCommand);
	UClass* Z_Construct_UClass_UDeleteGeometrySelectionCommand_NoRegister()
	{
		return UDeleteGeometrySelectionCommand::StaticClass();
	}
	struct Z_Construct_UClass_UDeleteGeometrySelectionCommand_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeleteGeometrySelectionCommand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGeometrySelectionEditCommand,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeleteGeometrySelectionCommand_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UDeleteGeometrySelectionCommand deletes the geometric elements identified by the Selection.\n * Currently only supports mesh selections (Triangle and Polygroup types)\n * Deletes selected faces, or faces connected to selected edges, or faces connected to selected vertices.\n */" },
		{ "IncludePath", "Commands/DeleteGeometrySelectionCommand.h" },
		{ "ModuleRelativePath", "Public/Commands/DeleteGeometrySelectionCommand.h" },
		{ "ToolTip", "UDeleteGeometrySelectionCommand deletes the geometric elements identified by the Selection.\nCurrently only supports mesh selections (Triangle and Polygroup types)\nDeletes selected faces, or faces connected to selected edges, or faces connected to selected vertices." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeleteGeometrySelectionCommand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeleteGeometrySelectionCommand>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeleteGeometrySelectionCommand_Statics::ClassParams = {
		&UDeleteGeometrySelectionCommand::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDeleteGeometrySelectionCommand_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeleteGeometrySelectionCommand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeleteGeometrySelectionCommand()
	{
		if (!Z_Registration_Info_UClass_UDeleteGeometrySelectionCommand.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeleteGeometrySelectionCommand.OuterSingleton, Z_Construct_UClass_UDeleteGeometrySelectionCommand_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDeleteGeometrySelectionCommand.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<UDeleteGeometrySelectionCommand>()
	{
		return UDeleteGeometrySelectionCommand::StaticClass();
	}
	UDeleteGeometrySelectionCommand::UDeleteGeometrySelectionCommand(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeleteGeometrySelectionCommand);
	UDeleteGeometrySelectionCommand::~UDeleteGeometrySelectionCommand() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_DeleteGeometrySelectionCommand_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_DeleteGeometrySelectionCommand_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDeleteGeometrySelectionCommand, UDeleteGeometrySelectionCommand::StaticClass, TEXT("UDeleteGeometrySelectionCommand"), &Z_Registration_Info_UClass_UDeleteGeometrySelectionCommand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeleteGeometrySelectionCommand), 704276496U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_DeleteGeometrySelectionCommand_h_1112992580(TEXT("/Script/MeshModelingTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_DeleteGeometrySelectionCommand_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_DeleteGeometrySelectionCommand_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
