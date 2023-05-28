// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InstancedStructContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInstancedStructContainer() {}
// Cross Module References
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FInstancedStructContainer();
	UPackage* Z_Construct_UPackage__Script_StructUtils();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InstancedStructContainer;
class UScriptStruct* FInstancedStructContainer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InstancedStructContainer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InstancedStructContainer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInstancedStructContainer, (UObject*)Z_Construct_UPackage__Script_StructUtils(), TEXT("InstancedStructContainer"));
	}
	return Z_Registration_Info_UScriptStruct_InstancedStructContainer.OuterSingleton;
}
template<> STRUCTUTILS_API UScriptStruct* StaticStruct<FInstancedStructContainer>()
{
	return FInstancedStructContainer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInstancedStructContainer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInstancedStructContainer_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Array of heterogeneous structs. Can be used as a property, supports serialization,\n * but does not have type customizations (no editing in the UI).\n *\n * If you need UI editable array of heterogeneous structs, use TArray<FInstancedStruct> instead.\n *\n * The array item values and the index to an item are stored in one contiguous block of memory.\n * The size required to specific layout of structs is larger than the sum of their sizes due to alignment,\n * and because the index to the structs is stored along with the value memory. Each item takes extra 16 bytes\n * for index. If your items are roughly same size, a TArray<TVariant<>> might be more performant.\n *\n * Adding new items is more expensive than on regular TArray<>, layout of the structs needs to be updated,\n * and initialization is done via UScriptStruct. Adding and removing items should be done in chunks if possible.\n *\n * The allocation of new items does not allocate extra space as most array implementations do.\n * Use Reserve() to reserve certain sized buffer in bytes if that is applicable to your use case.\n */" },
		{ "ModuleRelativePath", "Public/InstancedStructContainer.h" },
		{ "ToolTip", "Array of heterogeneous structs. Can be used as a property, supports serialization,\nbut does not have type customizations (no editing in the UI).\n\nIf you need UI editable array of heterogeneous structs, use TArray<FInstancedStruct> instead.\n\nThe array item values and the index to an item are stored in one contiguous block of memory.\nThe size required to specific layout of structs is larger than the sum of their sizes due to alignment,\nand because the index to the structs is stored along with the value memory. Each item takes extra 16 bytes\nfor index. If your items are roughly same size, a TArray<TVariant<>> might be more performant.\n\nAdding new items is more expensive than on regular TArray<>, layout of the structs needs to be updated,\nand initialization is done via UScriptStruct. Adding and removing items should be done in chunks if possible.\n\nThe allocation of new items does not allocate extra space as most array implementations do.\nUse Reserve() to reserve certain sized buffer in bytes if that is applicable to your use case." },
	};
#endif
	void* Z_Construct_UScriptStruct_FInstancedStructContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInstancedStructContainer>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInstancedStructContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StructUtils,
		nullptr,
		&NewStructOps,
		"InstancedStructContainer",
		sizeof(FInstancedStructContainer),
		alignof(FInstancedStructContainer),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInstancedStructContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInstancedStructContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInstancedStructContainer()
	{
		if (!Z_Registration_Info_UScriptStruct_InstancedStructContainer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InstancedStructContainer.InnerSingleton, Z_Construct_UScriptStruct_FInstancedStructContainer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InstancedStructContainer.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_InstancedStructContainer_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_InstancedStructContainer_h_Statics::ScriptStructInfo[] = {
		{ FInstancedStructContainer::StaticStruct, Z_Construct_UScriptStruct_FInstancedStructContainer_Statics::NewStructOps, TEXT("InstancedStructContainer"), &Z_Registration_Info_UScriptStruct_InstancedStructContainer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInstancedStructContainer), 334302854U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_InstancedStructContainer_h_1016703595(TEXT("/Script/StructUtils"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_InstancedStructContainer_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_InstancedStructContainer_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
