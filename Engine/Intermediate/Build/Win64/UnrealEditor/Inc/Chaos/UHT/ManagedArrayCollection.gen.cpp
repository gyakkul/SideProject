// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollection/ManagedArrayCollection.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManagedArrayCollection() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection();
	UPackage* Z_Construct_UPackage__Script_Chaos();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ManagedArrayCollection;
class UScriptStruct* FManagedArrayCollection::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ManagedArrayCollection.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ManagedArrayCollection.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FManagedArrayCollection, (UObject*)Z_Construct_UPackage__Script_Chaos(), TEXT("ManagedArrayCollection"));
	}
	return Z_Registration_Info_UScriptStruct_ManagedArrayCollection.OuterSingleton;
}
template<> CHAOS_API UScriptStruct* StaticStruct<FManagedArrayCollection>()
{
	return FManagedArrayCollection::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FManagedArrayCollection_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FManagedArrayCollection_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* ManagedArrayCollection\n*\n*   The ManagedArrayCollection is an entity system that implements a homogeneous, dynamically allocated, manager of\n*   primitive TArray structures. The collection stores groups of TArray attributes, where each attribute within a\n*   group is the same length. The collection will make use of the TManagedArray class, providing limited interaction\n*   with the underlying TArray. \n*\n*   For example:\n*\n\x09""FManagedArrayCollection* Collection(NewObject<FManagedArrayCollection>());\n\x09""Collection->AddElements(10, \"GroupBar\"); // Create a group GroupBar and add 10 elements.\n\x09""Collection->AddAttribute<FVector3f>(\"AttributeFoo\", \"GroupBar\"); // Add a FVector array named AttributeFoo to GroupBar.\n\x09TManagedArray<FVector3f>&  Foo = Collection->GetAttribute<FVector3f>(\"AttributeFoo\", \"GroupBar\"); // Get AttributeFoo\n\x09""for (int32 i = 0; i < Foo.Num(); i++)\n\x09{\n\x09\x09""Foo[i] = FVector(i, i, i); // Update AttribureFoo's elements\n\x09}\n*\n*\n*\n*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/ManagedArrayCollection.h" },
		{ "ToolTip", "ManagedArrayCollection\n\n  The ManagedArrayCollection is an entity system that implements a homogeneous, dynamically allocated, manager of\n  primitive TArray structures. The collection stores groups of TArray attributes, where each attribute within a\n  group is the same length. The collection will make use of the TManagedArray class, providing limited interaction\n  with the underlying TArray.\n\n  For example:\n\n       FManagedArrayCollection* Collection(NewObject<FManagedArrayCollection>());\n       Collection->AddElements(10, \"GroupBar\"); // Create a group GroupBar and add 10 elements.\n       Collection->AddAttribute<FVector3f>(\"AttributeFoo\", \"GroupBar\"); // Add a FVector array named AttributeFoo to GroupBar.\n       TManagedArray<FVector3f>&  Foo = Collection->GetAttribute<FVector3f>(\"AttributeFoo\", \"GroupBar\"); // Get AttributeFoo\n       for (int32 i = 0; i < Foo.Num(); i++)\n       {\n               Foo[i] = FVector(i, i, i); // Update AttribureFoo's elements\n       }" },
	};
#endif
	void* Z_Construct_UScriptStruct_FManagedArrayCollection_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FManagedArrayCollection>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FManagedArrayCollection_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Chaos,
		nullptr,
		&NewStructOps,
		"ManagedArrayCollection",
		sizeof(FManagedArrayCollection),
		alignof(FManagedArrayCollection),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FManagedArrayCollection_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FManagedArrayCollection_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FManagedArrayCollection()
	{
		if (!Z_Registration_Info_UScriptStruct_ManagedArrayCollection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ManagedArrayCollection.InnerSingleton, Z_Construct_UScriptStruct_FManagedArrayCollection_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ManagedArrayCollection.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_ManagedArrayCollection_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_ManagedArrayCollection_h_Statics::ScriptStructInfo[] = {
		{ FManagedArrayCollection::StaticStruct, Z_Construct_UScriptStruct_FManagedArrayCollection_Statics::NewStructOps, TEXT("ManagedArrayCollection"), &Z_Registration_Info_UScriptStruct_ManagedArrayCollection, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FManagedArrayCollection), 4011818293U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_ManagedArrayCollection_h_1914363662(TEXT("/Script/Chaos"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_ManagedArrayCollection_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Chaos_Public_GeometryCollection_ManagedArrayCollection_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
