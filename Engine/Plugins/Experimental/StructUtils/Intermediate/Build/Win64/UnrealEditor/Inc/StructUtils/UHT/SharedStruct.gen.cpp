// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SharedStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSharedStruct() {}
// Cross Module References
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FConstSharedStruct();
	STRUCTUTILS_API UScriptStruct* Z_Construct_UScriptStruct_FSharedStruct();
	UPackage* Z_Construct_UPackage__Script_StructUtils();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConstSharedStruct;
class UScriptStruct* FConstSharedStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConstSharedStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConstSharedStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConstSharedStruct, (UObject*)Z_Construct_UPackage__Script_StructUtils(), TEXT("ConstSharedStruct"));
	}
	return Z_Registration_Info_UScriptStruct_ConstSharedStruct.OuterSingleton;
}
template<> STRUCTUTILS_API UScriptStruct* StaticStruct<FConstSharedStruct>()
{
	return FConstSharedStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConstSharedStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConstSharedStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * FConstSharedStruct is the same as the FSharedStruct but restrict the API to return const struct type. \n * \n * See FSharedStruct for more information.\n */" },
		{ "ModuleRelativePath", "Public/SharedStruct.h" },
		{ "ToolTip", "FConstSharedStruct is the same as the FSharedStruct but restrict the API to return const struct type.\n\nSee FSharedStruct for more information." },
	};
#endif
	void* Z_Construct_UScriptStruct_FConstSharedStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConstSharedStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConstSharedStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StructUtils,
		nullptr,
		&NewStructOps,
		"ConstSharedStruct",
		sizeof(FConstSharedStruct),
		alignof(FConstSharedStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConstSharedStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConstSharedStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConstSharedStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_ConstSharedStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConstSharedStruct.InnerSingleton, Z_Construct_UScriptStruct_FConstSharedStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConstSharedStruct.InnerSingleton;
	}

static_assert(std::is_polymorphic<FSharedStruct>() == std::is_polymorphic<FConstSharedStruct>(), "USTRUCT FSharedStruct cannot be polymorphic unless super FConstSharedStruct is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SharedStruct;
class UScriptStruct* FSharedStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SharedStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SharedStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSharedStruct, (UObject*)Z_Construct_UPackage__Script_StructUtils(), TEXT("SharedStruct"));
	}
	return Z_Registration_Info_UScriptStruct_SharedStruct.OuterSingleton;
}
template<> STRUCTUTILS_API UScriptStruct* StaticStruct<FSharedStruct>()
{
	return FSharedStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSharedStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSharedStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * FSharedStruct works similarly as a TSharedPtr<FInstancedStruct> but removes the double pointer indirection that would create.\n * (One pointer for the FInstancedStruct and one pointer for the struct memory it is wrapping).\n * Also note that because of its implementation, it is not possible for now to go from a struct reference or struct view back to a shared struct. \n * \n * This struct type is also convertible to a FStructView and is the preferable way of passing it as a parameter just as the FInstancedStruct.\n * If the calling code would like to keep a shared pointer to the struct, you may pass the FSharedStruct as a parameter but it is recommended to pass it as \n * a \"const FSharedStruct&\" to limit the unnecessary recounting.\n * \n */" },
		{ "ModuleRelativePath", "Public/SharedStruct.h" },
		{ "ToolTip", "FSharedStruct works similarly as a TSharedPtr<FInstancedStruct> but removes the double pointer indirection that would create.\n(One pointer for the FInstancedStruct and one pointer for the struct memory it is wrapping).\nAlso note that because of its implementation, it is not possible for now to go from a struct reference or struct view back to a shared struct.\n\nThis struct type is also convertible to a FStructView and is the preferable way of passing it as a parameter just as the FInstancedStruct.\nIf the calling code would like to keep a shared pointer to the struct, you may pass the FSharedStruct as a parameter but it is recommended to pass it as\na \"const FSharedStruct&\" to limit the unnecessary recounting." },
	};
#endif
	void* Z_Construct_UScriptStruct_FSharedStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSharedStruct>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSharedStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StructUtils,
		Z_Construct_UScriptStruct_FConstSharedStruct,
		&NewStructOps,
		"SharedStruct",
		sizeof(FSharedStruct),
		alignof(FSharedStruct),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSharedStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSharedStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_SharedStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SharedStruct.InnerSingleton, Z_Construct_UScriptStruct_FSharedStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SharedStruct.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_SharedStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_SharedStruct_h_Statics::ScriptStructInfo[] = {
		{ FConstSharedStruct::StaticStruct, Z_Construct_UScriptStruct_FConstSharedStruct_Statics::NewStructOps, TEXT("ConstSharedStruct"), &Z_Registration_Info_UScriptStruct_ConstSharedStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConstSharedStruct), 3923851708U) },
		{ FSharedStruct::StaticStruct, Z_Construct_UScriptStruct_FSharedStruct_Statics::NewStructOps, TEXT("SharedStruct"), &Z_Registration_Info_UScriptStruct_SharedStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSharedStruct), 1370459411U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_SharedStruct_h_3730260060(TEXT("/Script/StructUtils"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_SharedStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_StructUtils_Source_StructUtils_Public_SharedStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
