// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/Framework/TypedElementListProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementListProxy() {}
// Cross Module References
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementListProxy();
	UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ScriptTypedElementListProxy;
class UScriptStruct* FScriptTypedElementListProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ScriptTypedElementListProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ScriptTypedElementListProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FScriptTypedElementListProxy, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("ScriptTypedElementListProxy"));
	}
	return Z_Registration_Info_UScriptStruct_ScriptTypedElementListProxy.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FScriptTypedElementListProxy>()
{
	return FScriptTypedElementListProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FScriptTypedElementListProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScriptTypedElementListProxy_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A list of script element handles (proxy to a FScriptTypedElementList instance).\n * Provides high-level access to groups of elements, including accessing elements that implement specific interfaces.\n * \n * Note: the script list proxy use should be avoided when not using it for the script exposure apis.\n * The weak model for the handles come with an additional cost to the runtime performance and the memory usage.\n */" },
		{ "DisplayName", "Typed Element List" },
		{ "ModuleRelativePath", "Public/Elements/Framework/TypedElementListProxy.h" },
		{ "ScriptName", "TypedElementList" },
		{ "ToolTip", "A list of script element handles (proxy to a FScriptTypedElementList instance).\nProvides high-level access to groups of elements, including accessing elements that implement specific interfaces.\n\nNote: the script list proxy use should be avoided when not using it for the script exposure apis.\nThe weak model for the handles come with an additional cost to the runtime performance and the memory usage." },
	};
#endif
	void* Z_Construct_UScriptStruct_FScriptTypedElementListProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScriptTypedElementListProxy>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScriptTypedElementListProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
		nullptr,
		&NewStructOps,
		"ScriptTypedElementListProxy",
		sizeof(FScriptTypedElementListProxy),
		alignof(FScriptTypedElementListProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScriptTypedElementListProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScriptTypedElementListProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementListProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_ScriptTypedElementListProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ScriptTypedElementListProxy.InnerSingleton, Z_Construct_UScriptStruct_FScriptTypedElementListProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ScriptTypedElementListProxy.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementListProxy_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementListProxy_h_Statics::ScriptStructInfo[] = {
		{ FScriptTypedElementListProxy::StaticStruct, Z_Construct_UScriptStruct_FScriptTypedElementListProxy_Statics::NewStructOps, TEXT("ScriptTypedElementListProxy"), &Z_Registration_Info_UScriptStruct_ScriptTypedElementListProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FScriptTypedElementListProxy), 1625917635U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementListProxy_h_798004145(TEXT("/Script/TypedElementFramework"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementListProxy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Framework_TypedElementListProxy_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
