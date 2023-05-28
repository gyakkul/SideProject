// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelSequenceBurnIn.h"
#include "LevelSequencePlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelSequenceBurnIn() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnIn();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnIn_NoRegister();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister();
	LEVELSEQUENCE_API UScriptStruct* Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_LevelSequence();
// End Cross Module References
	DEFINE_FUNCTION(ULevelSequenceBurnIn::execGetSettingsClass)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<ULevelSequenceBurnInInitSettings> *)Z_Param__Result=P_THIS->GetSettingsClass_Implementation();
		P_NATIVE_END;
	}
	struct LevelSequenceBurnIn_eventGetSettingsClass_Parms
	{
		TSubclassOf<ULevelSequenceBurnInInitSettings>  ReturnValue;

		/** Constructor, initializes return property only **/
		LevelSequenceBurnIn_eventGetSettingsClass_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct LevelSequenceBurnIn_eventSetSettings_Parms
	{
		UObject* InSettings;
	};
	static FName NAME_ULevelSequenceBurnIn_GetSettingsClass = FName(TEXT("GetSettingsClass"));
	TSubclassOf<ULevelSequenceBurnInInitSettings>  ULevelSequenceBurnIn::GetSettingsClass() const
	{
		LevelSequenceBurnIn_eventGetSettingsClass_Parms Parms;
		const_cast<ULevelSequenceBurnIn*>(this)->ProcessEvent(FindFunctionChecked(NAME_ULevelSequenceBurnIn_GetSettingsClass),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_ULevelSequenceBurnIn_SetSettings = FName(TEXT("SetSettings"));
	void ULevelSequenceBurnIn::SetSettings(UObject* InSettings)
	{
		LevelSequenceBurnIn_eventSetSettings_Parms Parms;
		Parms.InSettings=InSettings;
		ProcessEvent(FindFunctionChecked(NAME_ULevelSequenceBurnIn_SetSettings),&Parms);
	}
	void ULevelSequenceBurnIn::StaticRegisterNativesULevelSequenceBurnIn()
	{
		UClass* Class = ULevelSequenceBurnIn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSettingsClass", &ULevelSequenceBurnIn::execGetSettingsClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceBurnIn_eventGetSettingsClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_ULevelSequenceBurnInInitSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Burn In" },
		{ "Comment", "/** Get the settings class to use for this burn in */" },
		{ "ModuleRelativePath", "Public/LevelSequenceBurnIn.h" },
		{ "ToolTip", "Get the settings class to use for this burn in" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceBurnIn, nullptr, "GetSettingsClass", nullptr, nullptr, sizeof(LevelSequenceBurnIn_eventGetSettingsClass_Parms), Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelSequenceBurnIn_eventSetSettings_Parms, InSettings), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings_Statics::NewProp_InSettings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Burn In" },
		{ "Comment", "/** Called when this burn in is receiving its settings */" },
		{ "ModuleRelativePath", "Public/LevelSequenceBurnIn.h" },
		{ "ToolTip", "Called when this burn in is receiving its settings" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelSequenceBurnIn, nullptr, "SetSettings", nullptr, nullptr, sizeof(LevelSequenceBurnIn_eventSetSettings_Parms), Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelSequenceBurnIn);
	UClass* Z_Construct_UClass_ULevelSequenceBurnIn_NoRegister()
	{
		return ULevelSequenceBurnIn::StaticClass();
	}
	struct Z_Construct_UClass_ULevelSequenceBurnIn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameInformation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrameInformation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequenceActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LevelSequenceActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelSequenceBurnIn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_LevelSequence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelSequenceBurnIn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelSequenceBurnIn_GetSettingsClass, "GetSettingsClass" }, // 1148485078
		{ &Z_Construct_UFunction_ULevelSequenceBurnIn_SetSettings, "SetSettings" }, // 648125042
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceBurnIn_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for level sequence burn ins\n */" },
		{ "IncludePath", "LevelSequenceBurnIn.h" },
		{ "ModuleRelativePath", "Public/LevelSequenceBurnIn.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Base class for level sequence burn ins" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceBurnIn_Statics::NewProp_FrameInformation_MetaData[] = {
		{ "Category", "Burn In" },
		{ "Comment", "/** Snapshot of frame information. */" },
		{ "ModuleRelativePath", "Public/LevelSequenceBurnIn.h" },
		{ "ToolTip", "Snapshot of frame information." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULevelSequenceBurnIn_Statics::NewProp_FrameInformation = { "FrameInformation", nullptr, (EPropertyFlags)0x0020088000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSequenceBurnIn, FrameInformation), Z_Construct_UScriptStruct_FLevelSequencePlayerSnapshot, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceBurnIn_Statics::NewProp_FrameInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnIn_Statics::NewProp_FrameInformation_MetaData)) }; // 1129801625
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelSequenceBurnIn_Statics::NewProp_LevelSequenceActor_MetaData[] = {
		{ "Category", "Burn In" },
		{ "Comment", "/** The actor to get our burn in frames from */" },
		{ "ModuleRelativePath", "Public/LevelSequenceBurnIn.h" },
		{ "ToolTip", "The actor to get our burn in frames from" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevelSequenceBurnIn_Statics::NewProp_LevelSequenceActor = { "LevelSequenceActor", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelSequenceBurnIn, LevelSequenceActor), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceBurnIn_Statics::NewProp_LevelSequenceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnIn_Statics::NewProp_LevelSequenceActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelSequenceBurnIn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceBurnIn_Statics::NewProp_FrameInformation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelSequenceBurnIn_Statics::NewProp_LevelSequenceActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelSequenceBurnIn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelSequenceBurnIn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelSequenceBurnIn_Statics::ClassParams = {
		&ULevelSequenceBurnIn::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelSequenceBurnIn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnIn_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelSequenceBurnIn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelSequenceBurnIn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelSequenceBurnIn()
	{
		if (!Z_Registration_Info_UClass_ULevelSequenceBurnIn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelSequenceBurnIn.OuterSingleton, Z_Construct_UClass_ULevelSequenceBurnIn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelSequenceBurnIn.OuterSingleton;
	}
	template<> LEVELSEQUENCE_API UClass* StaticClass<ULevelSequenceBurnIn>()
	{
		return ULevelSequenceBurnIn::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelSequenceBurnIn);
	ULevelSequenceBurnIn::~ULevelSequenceBurnIn() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelSequenceBurnIn, ULevelSequenceBurnIn::StaticClass, TEXT("ULevelSequenceBurnIn"), &Z_Registration_Info_UClass_ULevelSequenceBurnIn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelSequenceBurnIn), 1406603725U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_471543419(TEXT("/Script/LevelSequence"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_LevelSequence_Public_LevelSequenceBurnIn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
