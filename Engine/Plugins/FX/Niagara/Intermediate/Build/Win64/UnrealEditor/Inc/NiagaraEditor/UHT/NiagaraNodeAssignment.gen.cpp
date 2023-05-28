// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraNodeAssignment.h"
#include "../Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraNodeAssignment() {}
// Cross Module References
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeAssignment();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeAssignment_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeFunctionCall();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	void UNiagaraNodeAssignment::StaticRegisterNativesUNiagaraNodeAssignment()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraNodeAssignment);
	UClass* Z_Construct_UClass_UNiagaraNodeAssignment_NoRegister()
	{
		return UNiagaraNodeAssignment::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraNodeAssignment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssignmentTarget_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssignmentTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssignmentDefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssignmentDefaultValue;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AssignmentTargets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssignmentTargets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssignmentTargets;
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssignmentDefaultValues_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssignmentDefaultValues_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AssignmentDefaultValues;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OldFunctionCallName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OldFunctionCallName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraNodeAssignment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraNodeFunctionCall,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeAssignment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraNodeAssignment.h" },
		{ "ModuleRelativePath", "Public/NiagaraNodeAssignment.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_AssignmentTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraNodeAssignment.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_AssignmentTarget = { "AssignmentTarget", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeAssignment, AssignmentTarget_DEPRECATED), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_AssignmentTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_AssignmentTarget_MetaData)) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_AssignmentDefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraNodeAssignment.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_AssignmentDefaultValue = { "AssignmentDefaultValue", nullptr, (EPropertyFlags)0x0020080020000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeAssignment, AssignmentDefaultValue_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_AssignmentDefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_AssignmentDefaultValue_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_AssignmentTargets_Inner = { "AssignmentTargets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_AssignmentTargets_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraNodeAssignment.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_AssignmentTargets = { "AssignmentTargets", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeAssignment, AssignmentTargets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_AssignmentTargets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_AssignmentTargets_MetaData)) }; // 2575088255
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_AssignmentDefaultValues_Inner = { "AssignmentDefaultValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_AssignmentDefaultValues_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraNodeAssignment.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_AssignmentDefaultValues = { "AssignmentDefaultValues", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeAssignment, AssignmentDefaultValues), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_AssignmentDefaultValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_AssignmentDefaultValues_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_OldFunctionCallName_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraNodeAssignment.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_OldFunctionCallName = { "OldFunctionCallName", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeAssignment, OldFunctionCallName), METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_OldFunctionCallName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_OldFunctionCallName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraNodeAssignment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_AssignmentTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_AssignmentDefaultValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_AssignmentTargets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_AssignmentTargets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_AssignmentDefaultValues_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_AssignmentDefaultValues,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeAssignment_Statics::NewProp_OldFunctionCallName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraNodeAssignment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraNodeAssignment>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraNodeAssignment_Statics::ClassParams = {
		&UNiagaraNodeAssignment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraNodeAssignment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeAssignment_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeAssignment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeAssignment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraNodeAssignment()
	{
		if (!Z_Registration_Info_UClass_UNiagaraNodeAssignment.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraNodeAssignment.OuterSingleton, Z_Construct_UClass_UNiagaraNodeAssignment_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraNodeAssignment.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraNodeAssignment>()
	{
		return UNiagaraNodeAssignment::StaticClass();
	}
	UNiagaraNodeAssignment::UNiagaraNodeAssignment(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraNodeAssignment);
	UNiagaraNodeAssignment::~UNiagaraNodeAssignment() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeAssignment_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeAssignment_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraNodeAssignment, UNiagaraNodeAssignment::StaticClass, TEXT("UNiagaraNodeAssignment"), &Z_Registration_Info_UClass_UNiagaraNodeAssignment, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraNodeAssignment), 250294841U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeAssignment_h_2771880354(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeAssignment_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeAssignment_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
