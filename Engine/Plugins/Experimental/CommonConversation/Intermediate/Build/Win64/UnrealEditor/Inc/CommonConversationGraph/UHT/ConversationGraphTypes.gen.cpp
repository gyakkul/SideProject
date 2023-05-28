// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConversationGraphTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationGraphTypes() {}
// Cross Module References
	COMMONCONVERSATIONGRAPH_API UClass* Z_Construct_UClass_UConversationGraphTypes();
	COMMONCONVERSATIONGRAPH_API UClass* Z_Construct_UClass_UConversationGraphTypes_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CommonConversationGraph();
// End Cross Module References
	void UConversationGraphTypes::StaticRegisterNativesUConversationGraphTypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConversationGraphTypes);
	UClass* Z_Construct_UClass_UConversationGraphTypes_NoRegister()
	{
		return UConversationGraphTypes::StaticClass();
	}
	struct Z_Construct_UClass_UConversationGraphTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConversationGraphTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationGraphTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ConversationGraphTypes.h" },
		{ "ModuleRelativePath", "Public/ConversationGraphTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConversationGraphTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationGraphTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConversationGraphTypes_Statics::ClassParams = {
		&UConversationGraphTypes::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UConversationGraphTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationGraphTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConversationGraphTypes()
	{
		if (!Z_Registration_Info_UClass_UConversationGraphTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConversationGraphTypes.OuterSingleton, Z_Construct_UClass_UConversationGraphTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConversationGraphTypes.OuterSingleton;
	}
	template<> COMMONCONVERSATIONGRAPH_API UClass* StaticClass<UConversationGraphTypes>()
	{
		return UConversationGraphTypes::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationGraphTypes);
	UConversationGraphTypes::~UConversationGraphTypes() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphTypes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConversationGraphTypes, UConversationGraphTypes::StaticClass, TEXT("UConversationGraphTypes"), &Z_Registration_Info_UClass_UConversationGraphTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConversationGraphTypes), 1397072839U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphTypes_h_1958160541(TEXT("/Script/CommonConversationGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationGraph_Public_ConversationGraphTypes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
