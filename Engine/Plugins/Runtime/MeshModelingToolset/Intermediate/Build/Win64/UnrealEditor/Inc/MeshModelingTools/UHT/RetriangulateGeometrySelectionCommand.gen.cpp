// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Commands/RetriangulateGeometrySelectionCommand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRetriangulateGeometrySelectionCommand() {}
// Cross Module References
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_URetriangulateGeometrySelectionCommand();
	MESHMODELINGTOOLS_API UClass* Z_Construct_UClass_URetriangulateGeometrySelectionCommand_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UGeometrySelectionEditCommand();
	UPackage* Z_Construct_UPackage__Script_MeshModelingTools();
// End Cross Module References
	void URetriangulateGeometrySelectionCommand::StaticRegisterNativesURetriangulateGeometrySelectionCommand()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URetriangulateGeometrySelectionCommand);
	UClass* Z_Construct_UClass_URetriangulateGeometrySelectionCommand_NoRegister()
	{
		return URetriangulateGeometrySelectionCommand::StaticClass();
	}
	struct Z_Construct_UClass_URetriangulateGeometrySelectionCommand_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URetriangulateGeometrySelectionCommand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGeometrySelectionEditCommand,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetriangulateGeometrySelectionCommand_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * URetriangulateGeometrySelectionCommand \n */" },
		{ "IncludePath", "Commands/RetriangulateGeometrySelectionCommand.h" },
		{ "ModuleRelativePath", "Public/Commands/RetriangulateGeometrySelectionCommand.h" },
		{ "ToolTip", "URetriangulateGeometrySelectionCommand" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URetriangulateGeometrySelectionCommand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URetriangulateGeometrySelectionCommand>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URetriangulateGeometrySelectionCommand_Statics::ClassParams = {
		&URetriangulateGeometrySelectionCommand::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URetriangulateGeometrySelectionCommand_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URetriangulateGeometrySelectionCommand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URetriangulateGeometrySelectionCommand()
	{
		if (!Z_Registration_Info_UClass_URetriangulateGeometrySelectionCommand.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URetriangulateGeometrySelectionCommand.OuterSingleton, Z_Construct_UClass_URetriangulateGeometrySelectionCommand_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URetriangulateGeometrySelectionCommand.OuterSingleton;
	}
	template<> MESHMODELINGTOOLS_API UClass* StaticClass<URetriangulateGeometrySelectionCommand>()
	{
		return URetriangulateGeometrySelectionCommand::StaticClass();
	}
	URetriangulateGeometrySelectionCommand::URetriangulateGeometrySelectionCommand(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URetriangulateGeometrySelectionCommand);
	URetriangulateGeometrySelectionCommand::~URetriangulateGeometrySelectionCommand() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_RetriangulateGeometrySelectionCommand_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_RetriangulateGeometrySelectionCommand_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URetriangulateGeometrySelectionCommand, URetriangulateGeometrySelectionCommand::StaticClass, TEXT("URetriangulateGeometrySelectionCommand"), &Z_Registration_Info_UClass_URetriangulateGeometrySelectionCommand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URetriangulateGeometrySelectionCommand), 2168504409U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_RetriangulateGeometrySelectionCommand_h_1622309782(TEXT("/Script/MeshModelingTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_RetriangulateGeometrySelectionCommand_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_MeshModelingTools_Public_Commands_RetriangulateGeometrySelectionCommand_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
