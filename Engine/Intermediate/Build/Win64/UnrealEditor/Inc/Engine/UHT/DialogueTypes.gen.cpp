// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Sound/DialogueTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueTypes() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDialogueVoice_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDialogueWave_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGrammaticalGender();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EGrammaticalNumber();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueContext();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueWaveParameter();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGrammaticalGender;
	static UEnum* EGrammaticalGender_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGrammaticalGender.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGrammaticalGender.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EGrammaticalGender, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EGrammaticalGender"));
		}
		return Z_Registration_Info_UEnum_EGrammaticalGender.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EGrammaticalGender::Type>()
	{
		return EGrammaticalGender_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EGrammaticalGender_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EGrammaticalGender_Statics::Enumerators[] = {
		{ "EGrammaticalGender::Neuter", (int64)EGrammaticalGender::Neuter },
		{ "EGrammaticalGender::Masculine", (int64)EGrammaticalGender::Masculine },
		{ "EGrammaticalGender::Feminine", (int64)EGrammaticalGender::Feminine },
		{ "EGrammaticalGender::Mixed", (int64)EGrammaticalGender::Mixed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EGrammaticalGender_Statics::Enum_MetaDataParams[] = {
		{ "Feminine.DisplayName", "Feminine" },
		{ "Feminine.Name", "EGrammaticalGender::Feminine" },
		{ "Masculine.DisplayName", "Masculine" },
		{ "Masculine.Name", "EGrammaticalGender::Masculine" },
		{ "Mixed.DisplayName", "Mixed" },
		{ "Mixed.Name", "EGrammaticalGender::Mixed" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
		{ "Neuter.DisplayName", "Neuter" },
		{ "Neuter.Name", "EGrammaticalGender::Neuter" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EGrammaticalGender_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EGrammaticalGender",
		"EGrammaticalGender::Type",
		Z_Construct_UEnum_Engine_EGrammaticalGender_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EGrammaticalGender_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EGrammaticalGender_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EGrammaticalGender_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EGrammaticalGender()
	{
		if (!Z_Registration_Info_UEnum_EGrammaticalGender.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGrammaticalGender.InnerSingleton, Z_Construct_UEnum_Engine_EGrammaticalGender_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGrammaticalGender.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGrammaticalNumber;
	static UEnum* EGrammaticalNumber_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGrammaticalNumber.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGrammaticalNumber.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EGrammaticalNumber, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EGrammaticalNumber"));
		}
		return Z_Registration_Info_UEnum_EGrammaticalNumber.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EGrammaticalNumber::Type>()
	{
		return EGrammaticalNumber_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EGrammaticalNumber_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EGrammaticalNumber_Statics::Enumerators[] = {
		{ "EGrammaticalNumber::Singular", (int64)EGrammaticalNumber::Singular },
		{ "EGrammaticalNumber::Plural", (int64)EGrammaticalNumber::Plural },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EGrammaticalNumber_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
		{ "Plural.DisplayName", "Plural" },
		{ "Plural.Name", "EGrammaticalNumber::Plural" },
		{ "Singular.DisplayName", "Singular" },
		{ "Singular.Name", "EGrammaticalNumber::Singular" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EGrammaticalNumber_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EGrammaticalNumber",
		"EGrammaticalNumber::Type",
		Z_Construct_UEnum_Engine_EGrammaticalNumber_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EGrammaticalNumber_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EGrammaticalNumber_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EGrammaticalNumber_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EGrammaticalNumber()
	{
		if (!Z_Registration_Info_UEnum_EGrammaticalNumber.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGrammaticalNumber.InnerSingleton, Z_Construct_UEnum_Engine_EGrammaticalNumber_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGrammaticalNumber.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueContext;
class UScriptStruct* FDialogueContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueContext, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DialogueContext"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueContext.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDialogueContext>()
{
	return FDialogueContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDialogueContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speaker_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Speaker;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueContext_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogueContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Speaker_MetaData[] = {
		{ "Category", "DialogueContext" },
		{ "Comment", "/** The person speaking the dialogue. */" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
		{ "ToolTip", "The person speaking the dialogue." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Speaker = { "Speaker", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueContext, Speaker), Z_Construct_UClass_UDialogueVoice_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Speaker_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Speaker_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDialogueVoice_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Targets_MetaData[] = {
		{ "Category", "DialogueContext" },
		{ "Comment", "/** The people being spoken to. */" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
		{ "ToolTip", "The people being spoken to." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueContext, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Targets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Speaker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueContext_Statics::NewProp_Targets,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DialogueContext",
		sizeof(FDialogueContext),
		alignof(FDialogueContext),
		Z_Construct_UScriptStruct_FDialogueContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueContext()
	{
		if (!Z_Registration_Info_UScriptStruct_DialogueContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueContext.InnerSingleton, Z_Construct_UScriptStruct_FDialogueContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DialogueContext.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueWaveParameter;
class UScriptStruct* FDialogueWaveParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueWaveParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueWaveParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueWaveParameter, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DialogueWaveParameter"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueWaveParameter.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDialogueWaveParameter>()
{
	return FDialogueWaveParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWave_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DialogueWave;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueWaveParameter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::NewProp_DialogueWave_MetaData[] = {
		{ "Category", "DialogueWaveParameter" },
		{ "Comment", "/** The dialogue wave to play. */" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
		{ "ToolTip", "The dialogue wave to play." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::NewProp_DialogueWave = { "DialogueWave", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueWaveParameter, DialogueWave), Z_Construct_UClass_UDialogueWave_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::NewProp_DialogueWave_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::NewProp_DialogueWave_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::NewProp_Context_MetaData[] = {
		{ "Category", "DialogueWaveParameter" },
		{ "Comment", "/** The context to use for the dialogue wave. */" },
		{ "ModuleRelativePath", "Classes/Sound/DialogueTypes.h" },
		{ "ToolTip", "The context to use for the dialogue wave." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDialogueWaveParameter, Context), Z_Construct_UScriptStruct_FDialogueContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::NewProp_Context_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::NewProp_Context_MetaData)) }; // 190242271
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::NewProp_DialogueWave,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::NewProp_Context,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DialogueWaveParameter",
		sizeof(FDialogueWaveParameter),
		alignof(FDialogueWaveParameter),
		Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDialogueWaveParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_DialogueWaveParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueWaveParameter.InnerSingleton, Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DialogueWaveParameter.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueTypes_h_Statics::EnumInfo[] = {
		{ EGrammaticalGender_StaticEnum, TEXT("EGrammaticalGender"), &Z_Registration_Info_UEnum_EGrammaticalGender, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 826714519U) },
		{ EGrammaticalNumber_StaticEnum, TEXT("EGrammaticalNumber"), &Z_Registration_Info_UEnum_EGrammaticalNumber, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1195137937U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueTypes_h_Statics::ScriptStructInfo[] = {
		{ FDialogueContext::StaticStruct, Z_Construct_UScriptStruct_FDialogueContext_Statics::NewStructOps, TEXT("DialogueContext"), &Z_Registration_Info_UScriptStruct_DialogueContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueContext), 190242271U) },
		{ FDialogueWaveParameter::StaticStruct, Z_Construct_UScriptStruct_FDialogueWaveParameter_Statics::NewStructOps, TEXT("DialogueWaveParameter"), &Z_Registration_Info_UScriptStruct_DialogueWaveParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueWaveParameter), 2549395889U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueTypes_h_3467908474(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Sound_DialogueTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
