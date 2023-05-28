// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConversationGraphSchema.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationGraphSchema() {}
// Cross Module References
	AIGRAPH_API UClass* Z_Construct_UClass_UAIGraphSchema();
	COMMONCONVERSATIONGRAPH_API UClass* Z_Construct_UClass_UConversationGraphSchema();
	COMMONCONVERSATIONGRAPH_API UClass* Z_Construct_UClass_UConversationGraphSchema_NoRegister();
	COMMONCONVERSATIONGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FConversationGraphSchemaAction_AutoArrange();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
	UPackage* Z_Construct_UPackage__Script_CommonConversationGraph();
// End Cross Module References

static_assert(std::is_polymorphic<FConversationGraphSchemaAction_AutoArrange>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FConversationGraphSchemaAction_AutoArrange cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConversationGraphSchemaAction_AutoArrange;
class UScriptStruct* FConversationGraphSchemaAction_AutoArrange::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConversationGraphSchemaAction_AutoArrange.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConversationGraphSchemaAction_AutoArrange.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConversationGraphSchemaAction_AutoArrange, (UObject*)Z_Construct_UPackage__Script_CommonConversationGraph(), TEXT("ConversationGraphSchemaAction_AutoArrange"));
	}
	return Z_Registration_Info_UScriptStruct_ConversationGraphSchemaAction_AutoArrange.OuterSingleton;
}
template<> COMMONCONVERSATIONGRAPH_API UScriptStruct* StaticStruct<FConversationGraphSchemaAction_AutoArrange>()
{
	return FConversationGraphSchemaAction_AutoArrange::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConversationGraphSchemaAction_AutoArrange_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConversationGraphSchemaAction_AutoArrange_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Action to auto arrange the graph */" },
		{ "ModuleRelativePath", "Public/ConversationGraphSchema.h" },
		{ "ToolTip", "Action to auto arrange the graph" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConversationGraphSchemaAction_AutoArrange_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConversationGraphSchemaAction_AutoArrange>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConversationGraphSchemaAction_AutoArrange_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationGraph,
		Z_Construct_UScriptStruct_FEdGraphSchemaAction,
		&NewStructOps,
		"ConversationGraphSchemaAction_AutoArrange",
		sizeof(FConversationGraphSchemaAction_AutoArrange),
		alignof(FConversationGraphSchemaAction_AutoArrange),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConversationGraphSchemaAction_AutoArrange_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConversationGraphSchemaAction_AutoArrange_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConversationGraphSchemaAction_AutoArrange()
	{
		if (!Z_Registration_Info_UScriptStruct_ConversationGraphSchemaAction_AutoArrange.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConversationGraphSchemaAction_AutoArrange.InnerSingleton, Z_Construct_UScriptStruct_FConversationGraphSchemaAction_AutoArrange_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConversationGraphSchemaAction_AutoArrange.InnerSingleton;
	}
	void UConversationGraphSchema::StaticRegisterNativesUConversationGraphSchema()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConversationGraphSchema);
	UClass* Z_Construct_UClass_UConversationGraphSchema_NoRegister()
	{
		return UConversationGraphSchema::StaticClass();
	}
	struct Z_Construct_UClass_UConversationGraphSchema_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConversationGraphSchema_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAIGraphSchema,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationGraphSchema_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////\n" },
		{ "IncludePath", "ConversationGraphSchema.h" },
		{ "ModuleRelativePath", "Public/ConversationGraphSchema.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConversationGraphSchema_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationGraphSchema>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConversationGraphSchema_Statics::ClassParams = {
		&UConversationGraphSchema::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UConversationGraphSchema_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationGraphSchema_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConversationGraphSchema()
	{
		if (!Z_Registration_Info_UClass_UConversationGraphSchema.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConversationGraphSchema.OuterSingleton, Z_Construct_UClass_UConversationGraphSchema_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConversationGraphSchema.OuterSingleton;
	}
	template<> COMMONCONVERSATIONGRAPH_API UClass* StaticClass<UConversationGraphSchema>()
	{
		return UConversationGraphSchema::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationGraphSchema);
	UConversationGraphSchema::~UConversationGraphSchema() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphSchema_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphSchema_h_Statics::ScriptStructInfo[] = {
		{ FConversationGraphSchemaAction_AutoArrange::StaticStruct, Z_Construct_UScriptStruct_FConversationGraphSchemaAction_AutoArrange_Statics::NewStructOps, TEXT("ConversationGraphSchemaAction_AutoArrange"), &Z_Registration_Info_UScriptStruct_ConversationGraphSchemaAction_AutoArrange, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConversationGraphSchemaAction_AutoArrange), 1898943328U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphSchema_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConversationGraphSchema, UConversationGraphSchema::StaticClass, TEXT("UConversationGraphSchema"), &Z_Registration_Info_UClass_UConversationGraphSchema, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConversationGraphSchema), 1167563452U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphSchema_h_1922299048(TEXT("/Script/CommonConversationGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphSchema_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphSchema_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphSchema_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphSchema_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
