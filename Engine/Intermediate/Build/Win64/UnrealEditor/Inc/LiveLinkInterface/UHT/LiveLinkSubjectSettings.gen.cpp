// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkSubjectSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkSubjectSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameRate();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFramePreProcessor_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFrameTranslator_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkRole_NoRegister();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSubjectSettings();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_LiveLinkInterface();
// End Cross Module References
	void ULiveLinkSubjectSettings::StaticRegisterNativesULiveLinkSubjectSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkSubjectSettings);
	UClass* Z_Construct_UClass_ULiveLinkSubjectSettings_NoRegister()
	{
		return ULiveLinkSubjectSettings::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkSubjectSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreProcessors_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreProcessors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreProcessors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreProcessors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationProcessor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InterpolationProcessor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Translators_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Translators_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Translators_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Translators;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_Role;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRebroadcastSubject_MetaData[];
#endif
		static void NewProp_bRebroadcastSubject_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebroadcastSubject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkInterface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Base class for live link subject settings\n" },
		{ "IncludePath", "LiveLinkSubjectSettings.h" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "Base class for live link subject settings" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_PreProcessors_Inner_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** List of available preprocessor the subject will use. */" },
		{ "DisplayName", "Pre Processors" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "List of available preprocessor the subject will use." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_PreProcessors_Inner = { "PreProcessors", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULiveLinkFramePreProcessor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_PreProcessors_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_PreProcessors_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_PreProcessors_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** List of available preprocessor the subject will use. */" },
		{ "DisplayName", "Pre Processors" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "List of available preprocessor the subject will use." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_PreProcessors = { "PreProcessors", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkSubjectSettings, PreProcessors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_PreProcessors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_PreProcessors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_InterpolationProcessor_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** The interpolation processor the subject will use. */" },
		{ "DisplayName", "Interpolation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "The interpolation processor the subject will use." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_InterpolationProcessor = { "InterpolationProcessor", nullptr, (EPropertyFlags)0x0016000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkSubjectSettings, InterpolationProcessor), Z_Construct_UClass_ULiveLinkFrameInterpolationProcessor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_InterpolationProcessor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_InterpolationProcessor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Translators_Inner_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** List of available translator the subject can use. */" },
		{ "DisplayName", "Translators" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "List of available translator the subject can use." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Translators_Inner = { "Translators", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULiveLinkFrameTranslator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Translators_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Translators_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Translators_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** List of available translator the subject can use. */" },
		{ "DisplayName", "Translators" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "List of available translator the subject can use." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Translators = { "Translators", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkSubjectSettings, Translators), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Translators_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Translators_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Role_MetaData[] = {
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkSubjectSettings, Role), Z_Construct_UClass_UClass, Z_Construct_UClass_ULiveLinkRole_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Role_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Last FrameRate estimated by the subject. If in Timecode mode, this will come directly from the QualifiedFrameTime. */" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "Last FrameRate estimated by the subject. If in Timecode mode, this will come directly from the QualifiedFrameTime." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkSubjectSettings, FrameRate), Z_Construct_UScriptStruct_FFrameRate, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_bRebroadcastSubject_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** If enabled, rebroadcast this subject */" },
		{ "ModuleRelativePath", "Public/LiveLinkSubjectSettings.h" },
		{ "ToolTip", "If enabled, rebroadcast this subject" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_bRebroadcastSubject_SetBit(void* Obj)
	{
		((ULiveLinkSubjectSettings*)Obj)->bRebroadcastSubject = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_bRebroadcastSubject = { "bRebroadcastSubject", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveLinkSubjectSettings), &Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_bRebroadcastSubject_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_bRebroadcastSubject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_bRebroadcastSubject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_PreProcessors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_PreProcessors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_InterpolationProcessor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Translators_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Translators,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_Role,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::NewProp_bRebroadcastSubject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkSubjectSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::ClassParams = {
		&ULiveLinkSubjectSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkSubjectSettings()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkSubjectSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkSubjectSettings.OuterSingleton, Z_Construct_UClass_ULiveLinkSubjectSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkSubjectSettings.OuterSingleton;
	}
	template<> LIVELINKINTERFACE_API UClass* StaticClass<ULiveLinkSubjectSettings>()
	{
		return ULiveLinkSubjectSettings::StaticClass();
	}
	ULiveLinkSubjectSettings::ULiveLinkSubjectSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkSubjectSettings);
	ULiveLinkSubjectSettings::~ULiveLinkSubjectSettings() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkSubjectSettings, ULiveLinkSubjectSettings::StaticClass, TEXT("ULiveLinkSubjectSettings"), &Z_Registration_Info_UClass_ULiveLinkSubjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkSubjectSettings), 2213940174U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h_1922488654(TEXT("/Script/LiveLinkInterface"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LiveLinkInterface_Public_LiveLinkSubjectSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
