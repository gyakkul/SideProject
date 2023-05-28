// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraMessages.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraMessages() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraMessageDataBase();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraMessageData();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraMessageData_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraMessageDataText();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraMessageDataText_NoRegister();
	NIAGARAEDITOR_API UEnum* Z_Construct_UEnum_NiagaraEditor_ENiagaraMessageSeverity();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStackMessage();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraMessageSeverity;
	static UEnum* ENiagaraMessageSeverity_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraMessageSeverity.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraMessageSeverity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NiagaraEditor_ENiagaraMessageSeverity, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("ENiagaraMessageSeverity"));
		}
		return Z_Registration_Info_UEnum_ENiagaraMessageSeverity.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UEnum* StaticEnum<ENiagaraMessageSeverity>()
	{
		return ENiagaraMessageSeverity_StaticEnum();
	}
	struct Z_Construct_UEnum_NiagaraEditor_ENiagaraMessageSeverity_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NiagaraEditor_ENiagaraMessageSeverity_Statics::Enumerators[] = {
		{ "ENiagaraMessageSeverity::CriticalError", (int64)ENiagaraMessageSeverity::CriticalError },
		{ "ENiagaraMessageSeverity::Error", (int64)ENiagaraMessageSeverity::Error },
		{ "ENiagaraMessageSeverity::PerformanceWarning", (int64)ENiagaraMessageSeverity::PerformanceWarning },
		{ "ENiagaraMessageSeverity::Warning", (int64)ENiagaraMessageSeverity::Warning },
		{ "ENiagaraMessageSeverity::Info", (int64)ENiagaraMessageSeverity::Info },
		{ "ENiagaraMessageSeverity::CustomNote", (int64)ENiagaraMessageSeverity::CustomNote },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NiagaraEditor_ENiagaraMessageSeverity_Statics::Enum_MetaDataParams[] = {
		{ "CriticalError.Name", "ENiagaraMessageSeverity::CriticalError" },
		{ "CustomNote.Name", "ENiagaraMessageSeverity::CustomNote" },
		{ "Error.Name", "ENiagaraMessageSeverity::Error" },
		{ "Info.Name", "ENiagaraMessageSeverity::Info" },
		{ "ModuleRelativePath", "Public/NiagaraMessages.h" },
		{ "PerformanceWarning.Name", "ENiagaraMessageSeverity::PerformanceWarning" },
		{ "Warning.Name", "ENiagaraMessageSeverity::Warning" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NiagaraEditor_ENiagaraMessageSeverity_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		"ENiagaraMessageSeverity",
		"ENiagaraMessageSeverity",
		Z_Construct_UEnum_NiagaraEditor_ENiagaraMessageSeverity_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_ENiagaraMessageSeverity_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NiagaraEditor_ENiagaraMessageSeverity_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NiagaraEditor_ENiagaraMessageSeverity_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NiagaraEditor_ENiagaraMessageSeverity()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraMessageSeverity.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraMessageSeverity.InnerSingleton, Z_Construct_UEnum_NiagaraEditor_ENiagaraMessageSeverity_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraMessageSeverity.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraStackMessage;
class UScriptStruct* FNiagaraStackMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraStackMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraStackMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraStackMessage, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraStackMessage"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraStackMessage.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraStackMessage>()
{
	return FNiagaraStackMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_MessageText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShortDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ShortDescription;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MessageSeverity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageSeverity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MessageSeverity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDismissal_MetaData[];
#endif
		static void NewProp_bAllowDismissal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDismissal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraMessages.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraStackMessage>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_MessageText_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMessages.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_MessageText = { "MessageText", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraStackMessage, MessageText), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_MessageText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_MessageText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_ShortDescription_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMessages.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_ShortDescription = { "ShortDescription", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraStackMessage, ShortDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_ShortDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_ShortDescription_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_MessageSeverity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_MessageSeverity_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMessages.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_MessageSeverity = { "MessageSeverity", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraStackMessage, MessageSeverity), Z_Construct_UEnum_NiagaraEditor_ENiagaraMessageSeverity, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_MessageSeverity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_MessageSeverity_MetaData)) }; // 2767433261
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_bAllowDismissal_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMessages.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_bAllowDismissal_SetBit(void* Obj)
	{
		((FNiagaraStackMessage*)Obj)->bAllowDismissal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_bAllowDismissal = { "bAllowDismissal", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraStackMessage), &Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_bAllowDismissal_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_bAllowDismissal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_bAllowDismissal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMessages.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraStackMessage, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_Guid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_MessageText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_ShortDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_MessageSeverity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_MessageSeverity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_bAllowDismissal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewProp_Guid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraStackMessage",
		sizeof(FNiagaraStackMessage),
		alignof(FNiagaraStackMessage),
		Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStackMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraStackMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraStackMessage.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraStackMessage.InnerSingleton;
	}
	void UNiagaraMessageData::StaticRegisterNativesUNiagaraMessageData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraMessageData);
	UClass* Z_Construct_UClass_UNiagaraMessageData_NoRegister()
	{
		return UNiagaraMessageData::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraMessageData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraMessageData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraMessageDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMessageData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraMessages.h" },
		{ "ModuleRelativePath", "Public/NiagaraMessages.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraMessageData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraMessageData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraMessageData_Statics::ClassParams = {
		&UNiagaraMessageData::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraMessageData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMessageData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraMessageData()
	{
		if (!Z_Registration_Info_UClass_UNiagaraMessageData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraMessageData.OuterSingleton, Z_Construct_UClass_UNiagaraMessageData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraMessageData.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraMessageData>()
	{
		return UNiagaraMessageData::StaticClass();
	}
	UNiagaraMessageData::UNiagaraMessageData() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraMessageData);
	UNiagaraMessageData::~UNiagaraMessageData() {}
	void UNiagaraMessageDataText::StaticRegisterNativesUNiagaraMessageDataText()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraMessageDataText);
	UClass* Z_Construct_UClass_UNiagaraMessageDataText_NoRegister()
	{
		return UNiagaraMessageDataText::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraMessageDataText_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageText_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_MessageText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShortDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ShortDescription;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_MessageSeverity_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MessageSeverity_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MessageSeverity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDismissal_MetaData[];
#endif
		static void NewProp_bAllowDismissal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDismissal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TopicName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TopicName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraMessageDataText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraMessageData,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMessageDataText_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraMessages.h" },
		{ "ModuleRelativePath", "Public/NiagaraMessages.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_MessageText_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMessages.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_MessageText = { "MessageText", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMessageDataText, MessageText), METADATA_PARAMS(Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_MessageText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_MessageText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_ShortDescription_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMessages.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_ShortDescription = { "ShortDescription", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMessageDataText, ShortDescription), METADATA_PARAMS(Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_ShortDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_ShortDescription_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_MessageSeverity_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_MessageSeverity_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMessages.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_MessageSeverity = { "MessageSeverity", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMessageDataText, MessageSeverity), Z_Construct_UEnum_NiagaraEditor_ENiagaraMessageSeverity, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_MessageSeverity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_MessageSeverity_MetaData)) }; // 2767433261
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_bAllowDismissal_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMessages.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_bAllowDismissal_SetBit(void* Obj)
	{
		((UNiagaraMessageDataText*)Obj)->bAllowDismissal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_bAllowDismissal = { "bAllowDismissal", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraMessageDataText), &Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_bAllowDismissal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_bAllowDismissal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_bAllowDismissal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_TopicName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraMessages.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_TopicName = { "TopicName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraMessageDataText, TopicName), METADATA_PARAMS(Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_TopicName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_TopicName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraMessageDataText_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_MessageText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_ShortDescription,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_MessageSeverity_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_MessageSeverity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_bAllowDismissal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraMessageDataText_Statics::NewProp_TopicName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraMessageDataText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraMessageDataText>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraMessageDataText_Statics::ClassParams = {
		&UNiagaraMessageDataText::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraMessageDataText_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMessageDataText_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraMessageDataText_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraMessageDataText_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraMessageDataText()
	{
		if (!Z_Registration_Info_UClass_UNiagaraMessageDataText.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraMessageDataText.OuterSingleton, Z_Construct_UClass_UNiagaraMessageDataText_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraMessageDataText.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraMessageDataText>()
	{
		return UNiagaraMessageDataText::StaticClass();
	}
	UNiagaraMessageDataText::UNiagaraMessageDataText() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraMessageDataText);
	UNiagaraMessageDataText::~UNiagaraMessageDataText() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_Statics::EnumInfo[] = {
		{ ENiagaraMessageSeverity_StaticEnum, TEXT("ENiagaraMessageSeverity"), &Z_Registration_Info_UEnum_ENiagaraMessageSeverity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2767433261U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraStackMessage::StaticStruct, Z_Construct_UScriptStruct_FNiagaraStackMessage_Statics::NewStructOps, TEXT("NiagaraStackMessage"), &Z_Registration_Info_UScriptStruct_NiagaraStackMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraStackMessage), 3317954190U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraMessageData, UNiagaraMessageData::StaticClass, TEXT("UNiagaraMessageData"), &Z_Registration_Info_UClass_UNiagaraMessageData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraMessageData), 2787705906U) },
		{ Z_Construct_UClass_UNiagaraMessageDataText, UNiagaraMessageDataText::StaticClass, TEXT("UNiagaraMessageDataText"), &Z_Registration_Info_UClass_UNiagaraMessageDataText, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraMessageDataText), 1729688637U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_2299028388(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraMessages_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
