// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraNodeInput.h"
#include "../Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraNodeInput() {}
// Cross Module References
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraInputNodeUsage();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNode();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeInput();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeInput_NoRegister();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraInputExposureOptions();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraInputExposureOptions;
class UScriptStruct* FNiagaraInputExposureOptions::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraInputExposureOptions.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraInputExposureOptions.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraInputExposureOptions, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("NiagaraInputExposureOptions"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraInputExposureOptions.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FNiagaraInputExposureOptions>()
{
	return FNiagaraInputExposureOptions::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExposed_MetaData[];
#endif
		static void NewProp_bExposed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExposed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequired_MetaData[];
#endif
		static void NewProp_bRequired_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequired;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanAutoBind_MetaData[];
#endif
		static void NewProp_bCanAutoBind_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanAutoBind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHidden_MetaData[];
#endif
		static void NewProp_bHidden_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHidden;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraNodeInput.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraInputExposureOptions>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewProp_bExposed_MetaData[] = {
		{ "Category", "Exposure" },
		{ "Comment", "/** If this input is exposed to it's caller. */" },
		{ "ModuleRelativePath", "Public/NiagaraNodeInput.h" },
		{ "ToolTip", "If this input is exposed to it's caller." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewProp_bExposed_SetBit(void* Obj)
	{
		((FNiagaraInputExposureOptions*)Obj)->bExposed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewProp_bExposed = { "bExposed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraInputExposureOptions), &Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewProp_bExposed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewProp_bExposed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewProp_bExposed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewProp_bRequired_MetaData[] = {
		{ "Category", "Exposure" },
		{ "Comment", "/** If this input is required to be bound. */" },
		{ "editcondition", "bExposed" },
		{ "ModuleRelativePath", "Public/NiagaraNodeInput.h" },
		{ "ToolTip", "If this input is required to be bound." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewProp_bRequired_SetBit(void* Obj)
	{
		((FNiagaraInputExposureOptions*)Obj)->bRequired = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewProp_bRequired = { "bRequired", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraInputExposureOptions), &Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewProp_bRequired_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewProp_bRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewProp_bRequired_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewProp_bCanAutoBind_MetaData[] = {
		{ "Category", "Exposure" },
		{ "Comment", "/** If this input can auto-bind to system parameters and emitter attributes. Will never auto bind to custom parameters. */" },
		{ "editcondition", "bExposed" },
		{ "ModuleRelativePath", "Public/NiagaraNodeInput.h" },
		{ "ToolTip", "If this input can auto-bind to system parameters and emitter attributes. Will never auto bind to custom parameters." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewProp_bCanAutoBind_SetBit(void* Obj)
	{
		((FNiagaraInputExposureOptions*)Obj)->bCanAutoBind = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewProp_bCanAutoBind = { "bCanAutoBind", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraInputExposureOptions), &Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewProp_bCanAutoBind_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewProp_bCanAutoBind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewProp_bCanAutoBind_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewProp_bHidden_MetaData[] = {
		{ "Category", "Exposure" },
		{ "Comment", "/** If this input should be hidden in the advanced pin section of it's caller. */" },
		{ "editcondition", "bExposed" },
		{ "ModuleRelativePath", "Public/NiagaraNodeInput.h" },
		{ "ToolTip", "If this input should be hidden in the advanced pin section of it's caller." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewProp_bHidden_SetBit(void* Obj)
	{
		((FNiagaraInputExposureOptions*)Obj)->bHidden = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewProp_bHidden = { "bHidden", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraInputExposureOptions), &Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewProp_bHidden_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewProp_bHidden_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewProp_bHidden_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewProp_bExposed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewProp_bRequired,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewProp_bCanAutoBind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewProp_bHidden,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"NiagaraInputExposureOptions",
		sizeof(FNiagaraInputExposureOptions),
		alignof(FNiagaraInputExposureOptions),
		Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraInputExposureOptions()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraInputExposureOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraInputExposureOptions.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraInputExposureOptions.InnerSingleton;
	}
	void UNiagaraNodeInput::StaticRegisterNativesUNiagaraNodeInput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraNodeInput);
	UClass* Z_Construct_UClass_UNiagaraNodeInput_NoRegister()
	{
		return UNiagaraNodeInput::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraNodeInput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Usage_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Usage_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Usage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CallSortPriority_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CallSortPriority;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExposureOptions_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExposureOptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataInterface_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DataInterface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraNodeInput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraNode,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeInput_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraNodeInput.h" },
		{ "ModuleRelativePath", "Public/NiagaraNodeInput.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeInput_Statics::NewProp_Input_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NiagaraNodeInput.h" },
		{ "SkipForCompileHash", "true" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeInput_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeInput, Input), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeInput_Statics::NewProp_Input_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeInput_Statics::NewProp_Input_MetaData)) }; // 2575088255
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraNodeInput_Statics::NewProp_Usage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeInput_Statics::NewProp_Usage_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "Public/NiagaraNodeInput.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraNodeInput_Statics::NewProp_Usage = { "Usage", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeInput, Usage), Z_Construct_UEnum_Niagara_ENiagaraInputNodeUsage, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeInput_Statics::NewProp_Usage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeInput_Statics::NewProp_Usage_MetaData)) }; // 2971802532
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeInput_Statics::NewProp_CallSortPriority_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Controls where this input is relative to others in the calling node. */" },
		{ "ModuleRelativePath", "Public/NiagaraNodeInput.h" },
		{ "SkipForCompileHash", "true" },
		{ "ToolTip", "Controls where this input is relative to others in the calling node." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraNodeInput_Statics::NewProp_CallSortPriority = { "CallSortPriority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeInput, CallSortPriority), METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeInput_Statics::NewProp_CallSortPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeInput_Statics::NewProp_CallSortPriority_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeInput_Statics::NewProp_ExposureOptions_MetaData[] = {
		{ "Category", "Input" },
		{ "Comment", "/** Controls this inputs exposure to callers. */" },
		{ "ModuleRelativePath", "Public/NiagaraNodeInput.h" },
		{ "ToolTip", "Controls this inputs exposure to callers." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeInput_Statics::NewProp_ExposureOptions = { "ExposureOptions", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeInput, ExposureOptions), Z_Construct_UScriptStruct_FNiagaraInputExposureOptions, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeInput_Statics::NewProp_ExposureOptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeInput_Statics::NewProp_ExposureOptions_MetaData)) }; // 176545661
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeInput_Statics::NewProp_DataInterface_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraNodeInput.h" },
		{ "SkipForCompileHash", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraNodeInput_Statics::NewProp_DataInterface = { "DataInterface", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeInput, DataInterface), Z_Construct_UClass_UNiagaraDataInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeInput_Statics::NewProp_DataInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeInput_Statics::NewProp_DataInterface_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraNodeInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeInput_Statics::NewProp_Input,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeInput_Statics::NewProp_Usage_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeInput_Statics::NewProp_Usage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeInput_Statics::NewProp_CallSortPriority,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeInput_Statics::NewProp_ExposureOptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeInput_Statics::NewProp_DataInterface,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraNodeInput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraNodeInput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraNodeInput_Statics::ClassParams = {
		&UNiagaraNodeInput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraNodeInput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeInput_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeInput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeInput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraNodeInput()
	{
		if (!Z_Registration_Info_UClass_UNiagaraNodeInput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraNodeInput.OuterSingleton, Z_Construct_UClass_UNiagaraNodeInput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraNodeInput.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraNodeInput>()
	{
		return UNiagaraNodeInput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraNodeInput);
	UNiagaraNodeInput::~UNiagaraNodeInput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeInput_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeInput_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraInputExposureOptions::StaticStruct, Z_Construct_UScriptStruct_FNiagaraInputExposureOptions_Statics::NewStructOps, TEXT("NiagaraInputExposureOptions"), &Z_Registration_Info_UScriptStruct_NiagaraInputExposureOptions, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraInputExposureOptions), 176545661U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeInput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraNodeInput, UNiagaraNodeInput::StaticClass, TEXT("UNiagaraNodeInput"), &Z_Registration_Info_UClass_UNiagaraNodeInput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraNodeInput), 937325548U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeInput_h_3059779407(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeInput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeInput_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeInput_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeInput_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
