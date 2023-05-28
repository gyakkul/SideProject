// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConversationInstance.h"
#include "ConversationTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConversationInstance() {}
// Cross Module References
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationInstance();
	COMMONCONVERSATIONRUNTIME_API UClass* Z_Construct_UClass_UConversationInstance_NoRegister();
	COMMONCONVERSATIONRUNTIME_API UFunction* Z_Construct_UDelegateFunction_CommonConversationRuntime_OnAllParticipantsNotifiedOfStartEvent__DelegateSignature();
	COMMONCONVERSATIONRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FConversationParticipants();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_CommonConversationRuntime();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_CommonConversationRuntime_OnAllParticipantsNotifiedOfStartEvent__DelegateSignature_Statics
	{
		struct _Script_CommonConversationRuntime_eventOnAllParticipantsNotifiedOfStartEvent_Parms
		{
			UConversationInstance* ConversationInstance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ConversationInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CommonConversationRuntime_OnAllParticipantsNotifiedOfStartEvent__DelegateSignature_Statics::NewProp_ConversationInstance = { "ConversationInstance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CommonConversationRuntime_eventOnAllParticipantsNotifiedOfStartEvent_Parms, ConversationInstance), Z_Construct_UClass_UConversationInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CommonConversationRuntime_OnAllParticipantsNotifiedOfStartEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CommonConversationRuntime_OnAllParticipantsNotifiedOfStartEvent__DelegateSignature_Statics::NewProp_ConversationInstance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CommonConversationRuntime_OnAllParticipantsNotifiedOfStartEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ConversationInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CommonConversationRuntime_OnAllParticipantsNotifiedOfStartEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CommonConversationRuntime, nullptr, "OnAllParticipantsNotifiedOfStartEvent__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CommonConversationRuntime_OnAllParticipantsNotifiedOfStartEvent__DelegateSignature_Statics::_Script_CommonConversationRuntime_eventOnAllParticipantsNotifiedOfStartEvent_Parms), Z_Construct_UDelegateFunction_CommonConversationRuntime_OnAllParticipantsNotifiedOfStartEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonConversationRuntime_OnAllParticipantsNotifiedOfStartEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CommonConversationRuntime_OnAllParticipantsNotifiedOfStartEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CommonConversationRuntime_OnAllParticipantsNotifiedOfStartEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CommonConversationRuntime_OnAllParticipantsNotifiedOfStartEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CommonConversationRuntime_OnAllParticipantsNotifiedOfStartEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnAllParticipantsNotifiedOfStartEvent_DelegateWrapper(const FMulticastScriptDelegate& OnAllParticipantsNotifiedOfStartEvent, UConversationInstance* ConversationInstance)
{
	struct _Script_CommonConversationRuntime_eventOnAllParticipantsNotifiedOfStartEvent_Parms
	{
		UConversationInstance* ConversationInstance;
	};
	_Script_CommonConversationRuntime_eventOnAllParticipantsNotifiedOfStartEvent_Parms Parms;
	Parms.ConversationInstance=ConversationInstance;
	OnAllParticipantsNotifiedOfStartEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UConversationInstance::StaticRegisterNativesUConversationInstance()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConversationInstance);
	UClass* Z_Construct_UClass_UConversationInstance_NoRegister()
	{
		return UConversationInstance::StaticClass();
	}
	struct Z_Construct_UClass_UConversationInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Participants_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Participants;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConversationInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CommonConversationRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An active conversation between one or more participants\n */" },
		{ "IncludePath", "ConversationInstance.h" },
		{ "ModuleRelativePath", "Public/ConversationInstance.h" },
		{ "ToolTip", "An active conversation between one or more participants" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConversationInstance_Statics::NewProp_Participants_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConversationInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UConversationInstance_Statics::NewProp_Participants = { "Participants", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UConversationInstance, Participants), Z_Construct_UScriptStruct_FConversationParticipants, METADATA_PARAMS(Z_Construct_UClass_UConversationInstance_Statics::NewProp_Participants_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationInstance_Statics::NewProp_Participants_MetaData)) }; // 3858117654
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UConversationInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UConversationInstance_Statics::NewProp_Participants,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConversationInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConversationInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConversationInstance_Statics::ClassParams = {
		&UConversationInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UConversationInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UConversationInstance_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UConversationInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConversationInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConversationInstance()
	{
		if (!Z_Registration_Info_UClass_UConversationInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConversationInstance.OuterSingleton, Z_Construct_UClass_UConversationInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConversationInstance.OuterSingleton;
	}
	template<> COMMONCONVERSATIONRUNTIME_API UClass* StaticClass<UConversationInstance>()
	{
		return UConversationInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConversationInstance);
	UConversationInstance::~UConversationInstance() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationInstance_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConversationInstance, UConversationInstance::StaticClass, TEXT("UConversationInstance"), &Z_Registration_Info_UClass_UConversationInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConversationInstance), 1319995323U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationInstance_h_790378658(TEXT("/Script/CommonConversationRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_CommonConversation_Source_CommonConversationRuntime_Public_ConversationInstance_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
