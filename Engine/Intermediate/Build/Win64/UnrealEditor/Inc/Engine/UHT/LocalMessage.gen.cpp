// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/LocalMessage.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLocalMessage() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULocalMessage();
	ENGINE_API UClass* Z_Construct_UClass_ULocalMessage_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FClientReceiveData();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ClientReceiveData;
class UScriptStruct* FClientReceiveData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ClientReceiveData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ClientReceiveData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FClientReceiveData, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ClientReceiveData"));
	}
	return Z_Registration_Info_UScriptStruct_ClientReceiveData.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FClientReceiveData>()
{
	return FClientReceiveData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FClientReceiveData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LocalPC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LocalPC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MessageType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MessageIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_MessageString;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelatedPlayerState_1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RelatedPlayerState_1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelatedPlayerState_2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RelatedPlayerState_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptionalObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OptionalObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientReceiveData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Handles the many pieces of data passed into Client Receive */" },
		{ "ModuleRelativePath", "Classes/GameFramework/LocalMessage.h" },
		{ "ToolTip", "Handles the many pieces of data passed into Client Receive" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClientReceiveData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_LocalPC_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/LocalMessage.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_LocalPC = { "LocalPC", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClientReceiveData, LocalPC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_LocalPC_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_LocalPC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageType_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/LocalMessage.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageType = { "MessageType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClientReceiveData, MessageType), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/LocalMessage.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageIndex = { "MessageIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClientReceiveData, MessageIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageString_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/LocalMessage.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageString = { "MessageString", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClientReceiveData, MessageString), METADATA_PARAMS(Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageString_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_RelatedPlayerState_1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/LocalMessage.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_RelatedPlayerState_1 = { "RelatedPlayerState_1", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClientReceiveData, RelatedPlayerState_1), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_RelatedPlayerState_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_RelatedPlayerState_1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_RelatedPlayerState_2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/LocalMessage.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_RelatedPlayerState_2 = { "RelatedPlayerState_2", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClientReceiveData, RelatedPlayerState_2), Z_Construct_UClass_APlayerState_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_RelatedPlayerState_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_RelatedPlayerState_2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_OptionalObject_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GameFramework/LocalMessage.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_OptionalObject = { "OptionalObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FClientReceiveData, OptionalObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_OptionalObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_OptionalObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClientReceiveData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_LocalPC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_MessageString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_RelatedPlayerState_1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_RelatedPlayerState_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewProp_OptionalObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClientReceiveData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"ClientReceiveData",
		sizeof(FClientReceiveData),
		alignof(FClientReceiveData),
		Z_Construct_UScriptStruct_FClientReceiveData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReceiveData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClientReceiveData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClientReceiveData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClientReceiveData()
	{
		if (!Z_Registration_Info_UScriptStruct_ClientReceiveData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ClientReceiveData.InnerSingleton, Z_Construct_UScriptStruct_FClientReceiveData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ClientReceiveData.InnerSingleton;
	}
	void ULocalMessage::StaticRegisterNativesULocalMessage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocalMessage);
	UClass* Z_Construct_UClass_ULocalMessage_NoRegister()
	{
		return ULocalMessage::StaticClass();
	}
	struct Z_Construct_UClass_ULocalMessage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalMessage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalMessage_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameFramework/LocalMessage.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/LocalMessage.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalMessage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalMessage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocalMessage_Statics::ClassParams = {
		&ULocalMessage::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULocalMessage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalMessage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalMessage()
	{
		if (!Z_Registration_Info_UClass_ULocalMessage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocalMessage.OuterSingleton, Z_Construct_UClass_ULocalMessage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULocalMessage.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ULocalMessage>()
	{
		return ULocalMessage::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalMessage);
	ULocalMessage::~ULocalMessage() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_Statics::ScriptStructInfo[] = {
		{ FClientReceiveData::StaticStruct, Z_Construct_UScriptStruct_FClientReceiveData_Statics::NewStructOps, TEXT("ClientReceiveData"), &Z_Registration_Info_UScriptStruct_ClientReceiveData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FClientReceiveData), 1058042731U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULocalMessage, ULocalMessage::StaticClass, TEXT("ULocalMessage"), &Z_Registration_Info_UClass_ULocalMessage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocalMessage), 2155589684U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_4080319664(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_LocalMessage_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
