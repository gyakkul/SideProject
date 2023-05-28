// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dataflow/DataflowSelection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataflowSelection() {}
// Cross Module References
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowFaceSelection();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowSelection();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowTransformSelection();
	DATAFLOWCORE_API UScriptStruct* Z_Construct_UScriptStruct_FDataflowVertexSelection();
	UPackage* Z_Construct_UPackage__Script_DataflowCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowSelection;
class UScriptStruct* FDataflowSelection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowSelection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowSelection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowSelection, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowSelection"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowSelection.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowSelection>()
{
	return FDataflowSelection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataflowSelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataflowSelection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSelection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataflowSelection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowSelection>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowSelection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
		nullptr,
		&NewStructOps,
		"DataflowSelection",
		sizeof(FDataflowSelection),
		alignof(FDataflowSelection),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataflowSelection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowSelection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataflowSelection()
	{
		if (!Z_Registration_Info_UScriptStruct_DataflowSelection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowSelection.InnerSingleton, Z_Construct_UScriptStruct_FDataflowSelection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataflowSelection.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDataflowTransformSelection>() == std::is_polymorphic<FDataflowSelection>(), "USTRUCT FDataflowTransformSelection cannot be polymorphic unless super FDataflowSelection is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowTransformSelection;
class UScriptStruct* FDataflowTransformSelection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowTransformSelection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowTransformSelection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowTransformSelection, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowTransformSelection"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowTransformSelection.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowTransformSelection>()
{
	return FDataflowTransformSelection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataflowTransformSelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataflowTransformSelection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSelection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataflowTransformSelection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowTransformSelection>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowTransformSelection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
		Z_Construct_UScriptStruct_FDataflowSelection,
		&NewStructOps,
		"DataflowTransformSelection",
		sizeof(FDataflowTransformSelection),
		alignof(FDataflowTransformSelection),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataflowTransformSelection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowTransformSelection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataflowTransformSelection()
	{
		if (!Z_Registration_Info_UScriptStruct_DataflowTransformSelection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowTransformSelection.InnerSingleton, Z_Construct_UScriptStruct_FDataflowTransformSelection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataflowTransformSelection.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDataflowVertexSelection>() == std::is_polymorphic<FDataflowSelection>(), "USTRUCT FDataflowVertexSelection cannot be polymorphic unless super FDataflowSelection is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowVertexSelection;
class UScriptStruct* FDataflowVertexSelection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowVertexSelection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowVertexSelection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVertexSelection, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowVertexSelection"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowVertexSelection.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowVertexSelection>()
{
	return FDataflowVertexSelection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataflowVertexSelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataflowVertexSelection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSelection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataflowVertexSelection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowVertexSelection>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowVertexSelection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
		Z_Construct_UScriptStruct_FDataflowSelection,
		&NewStructOps,
		"DataflowVertexSelection",
		sizeof(FDataflowVertexSelection),
		alignof(FDataflowVertexSelection),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataflowVertexSelection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowVertexSelection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataflowVertexSelection()
	{
		if (!Z_Registration_Info_UScriptStruct_DataflowVertexSelection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowVertexSelection.InnerSingleton, Z_Construct_UScriptStruct_FDataflowVertexSelection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataflowVertexSelection.InnerSingleton;
	}

static_assert(std::is_polymorphic<FDataflowFaceSelection>() == std::is_polymorphic<FDataflowSelection>(), "USTRUCT FDataflowFaceSelection cannot be polymorphic unless super FDataflowSelection is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DataflowFaceSelection;
class UScriptStruct* FDataflowFaceSelection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DataflowFaceSelection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DataflowFaceSelection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataflowFaceSelection, (UObject*)Z_Construct_UPackage__Script_DataflowCore(), TEXT("DataflowFaceSelection"));
	}
	return Z_Registration_Info_UScriptStruct_DataflowFaceSelection.OuterSingleton;
}
template<> DATAFLOWCORE_API UScriptStruct* StaticStruct<FDataflowFaceSelection>()
{
	return FDataflowFaceSelection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDataflowFaceSelection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataflowFaceSelection_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Dataflow/DataflowSelection.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataflowFaceSelection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataflowFaceSelection>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataflowFaceSelection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataflowCore,
		Z_Construct_UScriptStruct_FDataflowSelection,
		&NewStructOps,
		"DataflowFaceSelection",
		sizeof(FDataflowFaceSelection),
		alignof(FDataflowFaceSelection),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataflowFaceSelection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataflowFaceSelection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataflowFaceSelection()
	{
		if (!Z_Registration_Info_UScriptStruct_DataflowFaceSelection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DataflowFaceSelection.InnerSingleton, Z_Construct_UScriptStruct_FDataflowFaceSelection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DataflowFaceSelection.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSelection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSelection_h_Statics::ScriptStructInfo[] = {
		{ FDataflowSelection::StaticStruct, Z_Construct_UScriptStruct_FDataflowSelection_Statics::NewStructOps, TEXT("DataflowSelection"), &Z_Registration_Info_UScriptStruct_DataflowSelection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowSelection), 3720860970U) },
		{ FDataflowTransformSelection::StaticStruct, Z_Construct_UScriptStruct_FDataflowTransformSelection_Statics::NewStructOps, TEXT("DataflowTransformSelection"), &Z_Registration_Info_UScriptStruct_DataflowTransformSelection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowTransformSelection), 2616302354U) },
		{ FDataflowVertexSelection::StaticStruct, Z_Construct_UScriptStruct_FDataflowVertexSelection_Statics::NewStructOps, TEXT("DataflowVertexSelection"), &Z_Registration_Info_UScriptStruct_DataflowVertexSelection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowVertexSelection), 227078363U) },
		{ FDataflowFaceSelection::StaticStruct, Z_Construct_UScriptStruct_FDataflowFaceSelection_Statics::NewStructOps, TEXT("DataflowFaceSelection"), &Z_Registration_Info_UScriptStruct_DataflowFaceSelection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDataflowFaceSelection), 3632086580U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSelection_h_1161437429(TEXT("/Script/DataflowCore"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSelection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Dataflow_Core_Public_Dataflow_DataflowSelection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
