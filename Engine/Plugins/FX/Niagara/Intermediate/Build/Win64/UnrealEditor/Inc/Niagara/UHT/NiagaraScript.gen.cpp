// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraScript.h"
#include "../Classes/NiagaraParameterDefinitionsSubscriber.h"
#include "../Public/NiagaraCommon.h"
#include "../Public/NiagaraParameters.h"
#include "../Public/NiagaraParameterStore.h"
#include "../Public/NiagaraScriptExecutionParameterStore.h"
#include "../Public/NiagaraStackSection.h"
#include "../Public/NiagaraTypes.h"
#include "NiagaraCompileHash.h"
#include "NiagaraScriptBase.h"
#include "NiagaraShared.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraScript() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraParameterCollection_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScript();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScript_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraScriptSourceBase_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraValidationRule_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyUsage();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptCompileStatus();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptUsage();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraAssetVersion();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraBoundParameter();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileDependency();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompilerTag();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetID();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraDataSetProperties();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraFunctionSignature();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraModuleDependency();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameters();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraParameterStore();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStackSection();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraStatScope();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariable();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableBase();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVMExecutableData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FParameterDefinitionsSubscription();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FVersionedNiagaraScriptData();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo();
	NIAGARACORE_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileHash();
	NIAGARASHADER_API UClass* Z_Construct_UClass_UNiagaraScriptBase();
	NIAGARASHADER_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompileEvent();
	NIAGARASHADER_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata();
	NIAGARASHADER_API UScriptStruct* Z_Construct_UScriptStruct_FSimulationStageMetaData();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUnusedAttributeBehaviour;
	static UEnum* EUnusedAttributeBehaviour_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUnusedAttributeBehaviour.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUnusedAttributeBehaviour.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("EUnusedAttributeBehaviour"));
		}
		return Z_Registration_Info_UEnum_EUnusedAttributeBehaviour.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<EUnusedAttributeBehaviour>()
	{
		return EUnusedAttributeBehaviour_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour_Statics::Enumerators[] = {
		{ "EUnusedAttributeBehaviour::Copy", (int64)EUnusedAttributeBehaviour::Copy },
		{ "EUnusedAttributeBehaviour::Zero", (int64)EUnusedAttributeBehaviour::Zero },
		{ "EUnusedAttributeBehaviour::None", (int64)EUnusedAttributeBehaviour::None },
		{ "EUnusedAttributeBehaviour::MarkInvalid", (int64)EUnusedAttributeBehaviour::MarkInvalid },
		{ "EUnusedAttributeBehaviour::PassThrough", (int64)EUnusedAttributeBehaviour::PassThrough },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Defines what will happen to unused attributes when a script is run. */" },
		{ "Copy.Comment", "/** The previous value of the attribute is copied across. */" },
		{ "Copy.Name", "EUnusedAttributeBehaviour::Copy" },
		{ "Copy.ToolTip", "The previous value of the attribute is copied across." },
		{ "MarkInvalid.Comment", "/** The memory for the attribute is set to NIAGARA_INVALID_MEMORY. */" },
		{ "MarkInvalid.Name", "EUnusedAttributeBehaviour::MarkInvalid" },
		{ "MarkInvalid.ToolTip", "The memory for the attribute is set to NIAGARA_INVALID_MEMORY." },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "None.Comment", "/** The attribute is untouched. */" },
		{ "None.Name", "EUnusedAttributeBehaviour::None" },
		{ "None.ToolTip", "The attribute is untouched." },
		{ "PassThrough.Comment", "/** The attribute is passed through without double buffering */" },
		{ "PassThrough.Name", "EUnusedAttributeBehaviour::PassThrough" },
		{ "PassThrough.ToolTip", "The attribute is passed through without double buffering" },
		{ "ToolTip", "Defines what will happen to unused attributes when a script is run." },
		{ "Zero.Comment", "/** The attribute is set to zero. */" },
		{ "Zero.Name", "EUnusedAttributeBehaviour::Zero" },
		{ "Zero.ToolTip", "The attribute is set to zero." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"EUnusedAttributeBehaviour",
		"EUnusedAttributeBehaviour",
		Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour()
	{
		if (!Z_Registration_Info_UEnum_EUnusedAttributeBehaviour.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUnusedAttributeBehaviour.InnerSingleton, Z_Construct_UEnum_Niagara_EUnusedAttributeBehaviour_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUnusedAttributeBehaviour.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraModuleDependencyType;
	static UEnum* ENiagaraModuleDependencyType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraModuleDependencyType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraModuleDependencyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraModuleDependencyType"));
		}
		return Z_Registration_Info_UEnum_ENiagaraModuleDependencyType.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraModuleDependencyType>()
	{
		return ENiagaraModuleDependencyType_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType_Statics::Enumerators[] = {
		{ "ENiagaraModuleDependencyType::PreDependency", (int64)ENiagaraModuleDependencyType::PreDependency },
		{ "ENiagaraModuleDependencyType::PostDependency", (int64)ENiagaraModuleDependencyType::PostDependency },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "PostDependency.Comment", "/** The dependency belongs after the module. */" },
		{ "PostDependency.Name", "ENiagaraModuleDependencyType::PostDependency" },
		{ "PostDependency.ToolTip", "The dependency belongs after the module." },
		{ "PreDependency.Comment", "/** The dependency belongs before the module. */" },
		{ "PreDependency.Name", "ENiagaraModuleDependencyType::PreDependency" },
		{ "PreDependency.ToolTip", "The dependency belongs before the module." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraModuleDependencyType",
		"ENiagaraModuleDependencyType",
		Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraModuleDependencyType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraModuleDependencyType.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraModuleDependencyType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraModuleDependencyScriptConstraint;
	static UEnum* ENiagaraModuleDependencyScriptConstraint_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraModuleDependencyScriptConstraint.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraModuleDependencyScriptConstraint.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraModuleDependencyScriptConstraint"));
		}
		return Z_Registration_Info_UEnum_ENiagaraModuleDependencyScriptConstraint.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraModuleDependencyScriptConstraint>()
	{
		return ENiagaraModuleDependencyScriptConstraint_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint_Statics::Enumerators[] = {
		{ "ENiagaraModuleDependencyScriptConstraint::SameScript", (int64)ENiagaraModuleDependencyScriptConstraint::SameScript },
		{ "ENiagaraModuleDependencyScriptConstraint::AllScripts", (int64)ENiagaraModuleDependencyScriptConstraint::AllScripts },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint_Statics::Enum_MetaDataParams[] = {
		{ "AllScripts.Comment", "/** The module providing the dependency can be in any script as long as it satisfies the dependency type, e.g. if the module requiring the dependency is in \"Particle Spawn\" the module providing the dependency could be in \"Emitter Spawn\". */" },
		{ "AllScripts.Name", "ENiagaraModuleDependencyScriptConstraint::AllScripts" },
		{ "AllScripts.ToolTip", "The module providing the dependency can be in any script as long as it satisfies the dependency type, e.g. if the module requiring the dependency is in \"Particle Spawn\" the module providing the dependency could be in \"Emitter Spawn\"." },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "SameScript.Comment", "/** The module providing the dependency must be in the same script e.g. if the module requiring the dependency is in \"Particle Spawn\" the module providing the dependency must also be in \"Particle Spawn\". */" },
		{ "SameScript.Name", "ENiagaraModuleDependencyScriptConstraint::SameScript" },
		{ "SameScript.ToolTip", "The module providing the dependency must be in the same script e.g. if the module requiring the dependency is in \"Particle Spawn\" the module providing the dependency must also be in \"Particle Spawn\"." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraModuleDependencyScriptConstraint",
		"ENiagaraModuleDependencyScriptConstraint",
		Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraModuleDependencyScriptConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraModuleDependencyScriptConstraint.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraModuleDependencyScriptConstraint.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraScriptLibraryVisibility;
	static UEnum* ENiagaraScriptLibraryVisibility_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraScriptLibraryVisibility.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraScriptLibraryVisibility.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraScriptLibraryVisibility"));
		}
		return Z_Registration_Info_UEnum_ENiagaraScriptLibraryVisibility.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraScriptLibraryVisibility>()
	{
		return ENiagaraScriptLibraryVisibility_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility_Statics::Enumerators[] = {
		{ "ENiagaraScriptLibraryVisibility::Invalid", (int64)ENiagaraScriptLibraryVisibility::Invalid },
		{ "ENiagaraScriptLibraryVisibility::Unexposed", (int64)ENiagaraScriptLibraryVisibility::Unexposed },
		{ "ENiagaraScriptLibraryVisibility::Library", (int64)ENiagaraScriptLibraryVisibility::Library },
		{ "ENiagaraScriptLibraryVisibility::Hidden", (int64)ENiagaraScriptLibraryVisibility::Hidden },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility_Statics::Enum_MetaDataParams[] = {
		{ "Hidden.Comment", "/** The script is never visible to the user. This is useful to \"soft deprecate\" assets that should not be shown to a user, but should also not generate errors for existing usages. */" },
		{ "Hidden.DisplayName", "Hidden" },
		{ "Hidden.Name", "ENiagaraScriptLibraryVisibility::Hidden" },
		{ "Hidden.ToolTip", "The script is never visible to the user. This is useful to \"soft deprecate\" assets that should not be shown to a user, but should also not generate errors for existing usages." },
		{ "Invalid.Hidden", "" },
		{ "Invalid.Name", "ENiagaraScriptLibraryVisibility::Invalid" },
		{ "Library.Comment", "/** The script is exposed to the asset library and always visible to the user. */" },
		{ "Library.DisplayName", "Exposed" },
		{ "Library.Name", "ENiagaraScriptLibraryVisibility::Library" },
		{ "Library.ToolTip", "The script is exposed to the asset library and always visible to the user." },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "Unexposed.Comment", "/** The script is not visible by default to the user, but can be made visible by disabling the \"Library only\" filter option. */" },
		{ "Unexposed.DisplayName", "Unexposed" },
		{ "Unexposed.Name", "ENiagaraScriptLibraryVisibility::Unexposed" },
		{ "Unexposed.ToolTip", "The script is not visible by default to the user, but can be made visible by disabling the \"Library only\" filter option." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraScriptLibraryVisibility",
		"ENiagaraScriptLibraryVisibility",
		Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraScriptLibraryVisibility.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraScriptLibraryVisibility.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraScriptLibraryVisibility.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraScriptTemplateSpecification;
	static UEnum* ENiagaraScriptTemplateSpecification_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraScriptTemplateSpecification.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraScriptTemplateSpecification.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraScriptTemplateSpecification"));
		}
		return Z_Registration_Info_UEnum_ENiagaraScriptTemplateSpecification.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraScriptTemplateSpecification>()
	{
		return ENiagaraScriptTemplateSpecification_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification_Statics::Enumerators[] = {
		{ "ENiagaraScriptTemplateSpecification::None", (int64)ENiagaraScriptTemplateSpecification::None },
		{ "ENiagaraScriptTemplateSpecification::Template", (int64)ENiagaraScriptTemplateSpecification::Template },
		{ "ENiagaraScriptTemplateSpecification::Behavior", (int64)ENiagaraScriptTemplateSpecification::Behavior },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification_Statics::Enum_MetaDataParams[] = {
		{ "Behavior.DisplayName", "Behavior Example" },
		{ "Behavior.Name", "ENiagaraScriptTemplateSpecification::Behavior" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "None.Name", "ENiagaraScriptTemplateSpecification::None" },
		{ "Template.Name", "ENiagaraScriptTemplateSpecification::Template" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraScriptTemplateSpecification",
		"ENiagaraScriptTemplateSpecification",
		Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraScriptTemplateSpecification.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraScriptTemplateSpecification.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraScriptTemplateSpecification_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraScriptTemplateSpecification.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENiagaraModuleDependencyUsage;
	static UEnum* ENiagaraModuleDependencyUsage_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraModuleDependencyUsage.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENiagaraModuleDependencyUsage.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyUsage, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENiagaraModuleDependencyUsage"));
		}
		return Z_Registration_Info_UEnum_ENiagaraModuleDependencyUsage.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENiagaraModuleDependencyUsage>()
	{
		return ENiagaraModuleDependencyUsage_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyUsage_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyUsage_Statics::Enumerators[] = {
		{ "ENiagaraModuleDependencyUsage::None", (int64)ENiagaraModuleDependencyUsage::None },
		{ "ENiagaraModuleDependencyUsage::Spawn", (int64)ENiagaraModuleDependencyUsage::Spawn },
		{ "ENiagaraModuleDependencyUsage::Update", (int64)ENiagaraModuleDependencyUsage::Update },
		{ "ENiagaraModuleDependencyUsage::Event", (int64)ENiagaraModuleDependencyUsage::Event },
		{ "ENiagaraModuleDependencyUsage::SimulationStage", (int64)ENiagaraModuleDependencyUsage::SimulationStage },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyUsage_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Defines different usages for a niagara script's module dependecies. */" },
		{ "Event.Comment", "/** Evaluate when the script is called in an event context. */" },
		{ "Event.Name", "ENiagaraModuleDependencyUsage::Event" },
		{ "Event.ToolTip", "Evaluate when the script is called in an event context." },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "None.Comment", "/** Default entry to catch invalid usages */" },
		{ "None.Hidden", "" },
		{ "None.Name", "ENiagaraModuleDependencyUsage::None" },
		{ "None.ToolTip", "Default entry to catch invalid usages" },
		{ "SimulationStage.Comment", "/** Evaluate when the script is called in a simulation stage. */" },
		{ "SimulationStage.Name", "ENiagaraModuleDependencyUsage::SimulationStage" },
		{ "SimulationStage.ToolTip", "Evaluate when the script is called in a simulation stage." },
		{ "Spawn.Comment", "/** Evaluate when the script is called during the spawn phase. */" },
		{ "Spawn.Name", "ENiagaraModuleDependencyUsage::Spawn" },
		{ "Spawn.ToolTip", "Evaluate when the script is called during the spawn phase." },
		{ "ToolTip", "Defines different usages for a niagara script's module dependecies." },
		{ "Update.Comment", "/** Evaluate when the script is called during the update phase. */" },
		{ "Update.Name", "ENiagaraModuleDependencyUsage::Update" },
		{ "Update.ToolTip", "Evaluate when the script is called during the update phase." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyUsage_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENiagaraModuleDependencyUsage",
		"ENiagaraModuleDependencyUsage",
		Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyUsage_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyUsage_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyUsage_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyUsage_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyUsage()
	{
		if (!Z_Registration_Info_UEnum_ENiagaraModuleDependencyUsage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENiagaraModuleDependencyUsage.InnerSingleton, Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyUsage_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENiagaraModuleDependencyUsage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraModuleDependency;
class UScriptStruct* FNiagaraModuleDependency::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraModuleDependency.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraModuleDependency.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraModuleDependency, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraModuleDependency"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraModuleDependency.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraModuleDependency>()
{
	return FNiagaraModuleDependency::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Id;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScriptConstraint_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptConstraint_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScriptConstraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_RequiredVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnlyEvaluateInScriptUsage_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_OnlyEvaluateInScriptUsage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraModuleDependency>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Specifies the provided id of the required dependent module (e.g. 'ProvidesNormalizedAge') */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Specifies the provided id of the required dependent module (e.g. 'ProvidesNormalizedAge')" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraModuleDependency, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Id_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Whether the dependency belongs before or after this module */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Whether the dependency belongs before or after this module" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraModuleDependency, Type), Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Type_MetaData)) }; // 2334382662
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_ScriptConstraint_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_ScriptConstraint_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Specifies constraints related to the source script a modules provides as dependency. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Specifies constraints related to the source script a modules provides as dependency." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_ScriptConstraint = { "ScriptConstraint", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraModuleDependency, ScriptConstraint), Z_Construct_UEnum_Niagara_ENiagaraModuleDependencyScriptConstraint, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_ScriptConstraint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_ScriptConstraint_MetaData)) }; // 681966962
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_RequiredVersion_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "// Specifies the version constraint that module providing the dependency must fulfill.\n// Example usages:\n// '1.2' requires the exact version 1.2 of the source script\n// '1.2+' requires at least version 1.2, but any higher version is also ok\n// '1.2-2.0' requires any version between 1.2 and 2.0\n" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Specifies the version constraint that module providing the dependency must fulfill.\nExample usages:\n'1.2' requires the exact version 1.2 of the source script\n'1.2+' requires at least version 1.2, but any higher version is also ok\n'1.2-2.0' requires any version between 1.2 and 2.0" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_RequiredVersion = { "RequiredVersion", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraModuleDependency, RequiredVersion), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_RequiredVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_RequiredVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_OnlyEvaluateInScriptUsage_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/Niagara.ENiagaraModuleDependencyUsage" },
		{ "Category", "Script" },
		{ "Comment", "/** This property can limit where the dependency is evaluated. By default, the dependency is enforced in all script usages */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "This property can limit where the dependency is evaluated. By default, the dependency is enforced in all script usages" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_OnlyEvaluateInScriptUsage = { "OnlyEvaluateInScriptUsage", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraModuleDependency, OnlyEvaluateInScriptUsage), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_OnlyEvaluateInScriptUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_OnlyEvaluateInScriptUsage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Detailed description of the dependency */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "Detailed description of the dependency" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010010000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraModuleDependency, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Description_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_ScriptConstraint_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_ScriptConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_RequiredVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_OnlyEvaluateInScriptUsage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewProp_Description,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraModuleDependency",
		sizeof(FNiagaraModuleDependency),
		alignof(FNiagaraModuleDependency),
		Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraModuleDependency()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraModuleDependency.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraModuleDependency.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraModuleDependency.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraCompilerTag;
class UScriptStruct* FNiagaraCompilerTag::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraCompilerTag.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraCompilerTag.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraCompilerTag, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraCompilerTag"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraCompilerTag.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraCompilerTag>()
{
	return FNiagaraCompilerTag::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variable_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Variable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StringValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StringValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraCompilerTag>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::NewProp_Variable_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::NewProp_Variable = { "Variable", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraCompilerTag, Variable), Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::NewProp_Variable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::NewProp_Variable_MetaData)) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::NewProp_StringValue_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::NewProp_StringValue = { "StringValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraCompilerTag, StringValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::NewProp_StringValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::NewProp_StringValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::NewProp_Variable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::NewProp_StringValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraCompilerTag",
		sizeof(FNiagaraCompilerTag),
		alignof(FNiagaraCompilerTag),
		Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraCompilerTag()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraCompilerTag.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraCompilerTag.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraCompilerTag.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraVMExecutableDataId;
class UScriptStruct* FNiagaraVMExecutableDataId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVMExecutableDataId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraVMExecutableDataId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVMExecutableDataId"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVMExecutableDataId.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVMExecutableDataId>()
{
	return FNiagaraVMExecutableDataId::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompilerVersionID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompilerVersionID;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScriptUsageType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptUsageType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ScriptUsageType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptUsageTypeID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScriptUsageTypeID;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStrPropertyParams NewProp_AdditionalDefines_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalDefines_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalDefines;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalVariables_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalVariables_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalVariables;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsesRapidIterationParams_MetaData[];
#endif
		static void NewProp_bUsesRapidIterationParams_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsesRapidIterationParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDisableDebugSwitches_MetaData[];
#endif
		static void NewProp_bDisableDebugSwitches_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisableDebugSwitches;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInterpolatedSpawn_MetaData[];
#endif
		static void NewProp_bInterpolatedSpawn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInterpolatedSpawn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRequiresPersistentIDs_MetaData[];
#endif
		static void NewProp_bRequiresPersistentIDs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRequiresPersistentIDs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseScriptID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseScriptID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseScriptCompileHash_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BaseScriptCompileHash;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReferencedCompileHashes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedCompileHashes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencedCompileHashes;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptVersionID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScriptVersionID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct containing all of the data necessary to look up a NiagaraScript's VM executable results from the Derived Data Cache.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Struct containing all of the data necessary to look up a NiagaraScript's VM executable results from the Derived Data Cache." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVMExecutableDataId>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_CompilerVersionID_MetaData[] = {
		{ "Comment", "/** The version of the compiler that this needs to be built against.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The version of the compiler that this needs to be built against." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_CompilerVersionID = { "CompilerVersionID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableDataId, CompilerVersionID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_CompilerVersionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_CompilerVersionID_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageType_MetaData[] = {
		{ "Comment", "/** The type of script this was used for.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The type of script this was used for." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageType = { "ScriptUsageType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableDataId, ScriptUsageType), Z_Construct_UEnum_Niagara_ENiagaraScriptUsage, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageType_MetaData)) }; // 2772325717
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageTypeID_MetaData[] = {
		{ "Comment", "/** The instance id of this script usage type.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The instance id of this script usage type." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageTypeID = { "ScriptUsageTypeID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableDataId, ScriptUsageTypeID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageTypeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageTypeID_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalDefines_Inner = { "AdditionalDefines", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalDefines_MetaData[] = {
		{ "Comment", "/** Configuration options*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Configuration options" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalDefines = { "AdditionalDefines", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableDataId, AdditionalDefines), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalDefines_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalDefines_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalVariables_Inner = { "AdditionalVariables", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(nullptr, 0) }; // 1114376608
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalVariables_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalVariables = { "AdditionalVariables", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableDataId, AdditionalVariables), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalVariables_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalVariables_MetaData)) }; // 1114376608
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bUsesRapidIterationParams_MetaData[] = {
		{ "Comment", "/** Whether or not we need to bake Rapid Iteration params. True to keep params, false to bake.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Whether or not we need to bake Rapid Iteration params. True to keep params, false to bake." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bUsesRapidIterationParams_SetBit(void* Obj)
	{
		((FNiagaraVMExecutableDataId*)Obj)->bUsesRapidIterationParams = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bUsesRapidIterationParams = { "bUsesRapidIterationParams", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraVMExecutableDataId), &Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bUsesRapidIterationParams_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bUsesRapidIterationParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bUsesRapidIterationParams_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bDisableDebugSwitches_MetaData[] = {
		{ "Comment", "/** Whether or not we allow debug switches to be used. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Whether or not we allow debug switches to be used." },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bDisableDebugSwitches_SetBit(void* Obj)
	{
		((FNiagaraVMExecutableDataId*)Obj)->bDisableDebugSwitches = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bDisableDebugSwitches = { "bDisableDebugSwitches", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraVMExecutableDataId), &Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bDisableDebugSwitches_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bDisableDebugSwitches_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bDisableDebugSwitches_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bInterpolatedSpawn_MetaData[] = {
		{ "Comment", "/** Do we require interpolated spawning */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Do we require interpolated spawning" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bInterpolatedSpawn_SetBit(void* Obj)
	{
		((FNiagaraVMExecutableDataId*)Obj)->bInterpolatedSpawn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bInterpolatedSpawn = { "bInterpolatedSpawn", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraVMExecutableDataId), &Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bInterpolatedSpawn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bInterpolatedSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bInterpolatedSpawn_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bRequiresPersistentIDs_MetaData[] = {
		{ "Comment", "/** Do we require persistent IDs */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Do we require persistent IDs" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bRequiresPersistentIDs_SetBit(void* Obj)
	{
		((FNiagaraVMExecutableDataId*)Obj)->bRequiresPersistentIDs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bRequiresPersistentIDs = { "bRequiresPersistentIDs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraVMExecutableDataId), &Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bRequiresPersistentIDs_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bRequiresPersistentIDs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bRequiresPersistentIDs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_BaseScriptID_MetaData[] = {
		{ "Comment", "/**\n\x09* The GUID of the subgraph this shader primarily represents.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The GUID of the subgraph this shader primarily represents." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_BaseScriptID = { "BaseScriptID", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableDataId, BaseScriptID_DEPRECATED), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_BaseScriptID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_BaseScriptID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_BaseScriptCompileHash_MetaData[] = {
		{ "Comment", "/**\n\x09* The hash of the subgraph this shader primarily represents.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The hash of the subgraph this shader primarily represents." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_BaseScriptCompileHash = { "BaseScriptCompileHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableDataId, BaseScriptCompileHash), Z_Construct_UScriptStruct_FNiagaraCompileHash, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_BaseScriptCompileHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_BaseScriptCompileHash_MetaData)) }; // 118874400
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ReferencedCompileHashes_Inner = { "ReferencedCompileHashes", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraCompileHash, METADATA_PARAMS(nullptr, 0) }; // 118874400
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ReferencedCompileHashes_MetaData[] = {
		{ "Comment", "/** Compile hashes of any top level scripts the script was dependent on that might trigger a recompile if they change. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Compile hashes of any top level scripts the script was dependent on that might trigger a recompile if they change." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ReferencedCompileHashes = { "ReferencedCompileHashes", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableDataId, ReferencedCompileHashes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ReferencedCompileHashes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ReferencedCompileHashes_MetaData)) }; // 118874400
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptVersionID_MetaData[] = {
		{ "Comment", "/** The version of the script that was compiled. If empty then just the latest version. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The version of the script that was compiled. If empty then just the latest version." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptVersionID = { "ScriptVersionID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableDataId, ScriptVersionID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptVersionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptVersionID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_CompilerVersionID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptUsageTypeID,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalDefines_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalDefines,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalVariables_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_AdditionalVariables,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bUsesRapidIterationParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bDisableDebugSwitches,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bInterpolatedSpawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_bRequiresPersistentIDs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_BaseScriptID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_BaseScriptCompileHash,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ReferencedCompileHashes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ReferencedCompileHashes,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewProp_ScriptVersionID,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraVMExecutableDataId",
		sizeof(FNiagaraVMExecutableDataId),
		alignof(FNiagaraVMExecutableDataId),
		Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraVMExecutableDataId.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraVMExecutableDataId.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraVMExecutableDataId.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraVMExecutableByteCode;
class UScriptStruct* FNiagaraVMExecutableByteCode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVMExecutableByteCode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraVMExecutableByteCode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVMExecutableByteCode"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVMExecutableByteCode.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVMExecutableByteCode>()
{
	return FNiagaraVMExecutableByteCode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UncompressedSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UncompressedSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVMExecutableByteCode>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::NewProp_Data_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableByteCode, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::NewProp_Data_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::NewProp_UncompressedSize_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::NewProp_UncompressedSize = { "UncompressedSize", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableByteCode, UncompressedSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::NewProp_UncompressedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::NewProp_UncompressedSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::NewProp_UncompressedSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraVMExecutableByteCode",
		sizeof(FNiagaraVMExecutableByteCode),
		alignof(FNiagaraVMExecutableByteCode),
		Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraVMExecutableByteCode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraVMExecutableByteCode.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraVMExecutableByteCode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraVMExecutableData;
class UScriptStruct* FNiagaraVMExecutableData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraVMExecutableData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraVMExecutableData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVMExecutableData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraVMExecutableData"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraVMExecutableData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraVMExecutableData>()
{
	return FNiagaraVMExecutableData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ByteCode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ByteCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OptimizedByteCode_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OptimizedByteCode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumTempRegisters_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumTempRegisters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumUserPtrs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumUserPtrs;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InternalParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalDependencies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalDependencies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalDependencies;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BakedRapidIterationParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BakedRapidIterationParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BakedRapidIterationParameters;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompileTags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompileTags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CompileTags;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScriptLiterals_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptLiterals_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScriptLiterals;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Attributes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Attributes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Attributes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataUsage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataUsage;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataSetToParameters_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DataSetToParameters_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataSetToParameters_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DataSetToParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AdditionalExternalFunctions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalExternalFunctions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalExternalFunctions;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataInterfaceInfo_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataInterfaceInfo_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DataInterfaceInfo;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CalledVMExternalFunctions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CalledVMExternalFunctions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CalledVMExternalFunctions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReadDataSets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReadDataSets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReadDataSets;
		static const UECodeGen_Private::FStructPropertyParams NewProp_WriteDataSets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WriteDataSets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WriteDataSets;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StatScopes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StatScopes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StatScopes;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastHlslTranslation_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LastHlslTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastHlslTranslationGPU_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LastHlslTranslationGPU;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastAssemblyTranslation_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LastAssemblyTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastOpCount_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_LastOpCount;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShaderScriptParametersMetadata_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShaderScriptParametersMetadata;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParameterCollectionPaths_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterCollectionPaths_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterCollectionPaths;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_LastCompileStatus_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastCompileStatus_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LastCompileStatus;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SimulationStageMetaData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SimulationStageMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SimulationStageMetaData;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReadsAttributeData_MetaData[];
#endif
		static void NewProp_bReadsAttributeData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadsAttributeData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributesWritten_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributesWritten_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AttributesWritten;
		static const UECodeGen_Private::FStructPropertyParams NewProp_StaticVariablesWritten_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticVariablesWritten_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StaticVariablesWritten;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMsg_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMsg;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastCompileEvents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastCompileEvents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LastCompileEvents;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_ExperimentalContextData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExperimentalContextData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExperimentalContextData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReadsSignificanceIndex_MetaData[];
#endif
		static void NewProp_bReadsSignificanceIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReadsSignificanceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNeedsGPUContextInit_MetaData[];
#endif
		static void NewProp_bNeedsGPUContextInit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNeedsGPUContextInit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct containing all of the data needed to run a Niagara VM executable script.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Struct containing all of the data needed to run a Niagara VM executable script." },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraVMExecutableData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ByteCode_MetaData[] = {
		{ "Comment", "/** Byte code to execute for this system. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Byte code to execute for this system." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ByteCode = { "ByteCode", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, ByteCode), Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ByteCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ByteCode_MetaData)) }; // 1091965267
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_OptimizedByteCode_MetaData[] = {
		{ "Comment", "/** Optimized version of the byte code to execute for this system */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Optimized version of the byte code to execute for this system" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_OptimizedByteCode = { "OptimizedByteCode", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, OptimizedByteCode), Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_OptimizedByteCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_OptimizedByteCode_MetaData)) }; // 1091965267
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_NumTempRegisters_MetaData[] = {
		{ "Comment", "/** Number of temp registers used by this script. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Number of temp registers used by this script." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_NumTempRegisters = { "NumTempRegisters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, NumTempRegisters), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_NumTempRegisters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_NumTempRegisters_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_NumUserPtrs_MetaData[] = {
		{ "Comment", "/** Number of user pointers we must pass to the VM. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Number of user pointers we must pass to the VM." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_NumUserPtrs = { "NumUserPtrs", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, NumUserPtrs), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_NumUserPtrs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_NumUserPtrs_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Parameters_MetaData[] = {
		{ "Comment", "/** All the data for using external constants in the script, laid out in the order they are expected in the uniform table.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "All the data for using external constants in the script, laid out in the order they are expected in the uniform table." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, Parameters), Z_Construct_UScriptStruct_FNiagaraParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Parameters_MetaData)) }; // 2881145709
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_InternalParameters_MetaData[] = {
		{ "Comment", "/** All the data for using external constants in the script, laid out in the order they are expected in the uniform table.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "All the data for using external constants in the script, laid out in the order they are expected in the uniform table." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_InternalParameters = { "InternalParameters", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, InternalParameters), Z_Construct_UScriptStruct_FNiagaraParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_InternalParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_InternalParameters_MetaData)) }; // 2881145709
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ExternalDependencies_Inner = { "ExternalDependencies", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraCompileDependency, METADATA_PARAMS(nullptr, 0) }; // 3696746606
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ExternalDependencies_MetaData[] = {
		{ "Comment", "/** List of all external dependencies of this script. If not met, linking should result in an error.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "List of all external dependencies of this script. If not met, linking should result in an error." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ExternalDependencies = { "ExternalDependencies", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, ExternalDependencies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ExternalDependencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ExternalDependencies_MetaData)) }; // 3696746606
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_BakedRapidIterationParameters_Inner = { "BakedRapidIterationParameters", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_BakedRapidIterationParameters_MetaData[] = {
		{ "Comment", "/** The default set of rapid iteration parameters defined by the script that this data represents.  In the case of baked\n\x09    in RI parameters this will be the values that are baked in, otherwise it will be the set of defaults based on the graphs. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The default set of rapid iteration parameters defined by the script that this data represents.  In the case of baked\n          in RI parameters this will be the values that are baked in, otherwise it will be the set of defaults based on the graphs." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_BakedRapidIterationParameters = { "BakedRapidIterationParameters", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, BakedRapidIterationParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_BakedRapidIterationParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_BakedRapidIterationParameters_MetaData)) }; // 2575088255
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CompileTags_Inner = { "CompileTags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraCompilerTag, METADATA_PARAMS(nullptr, 0) }; // 1976064538
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CompileTags_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CompileTags = { "CompileTags", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, CompileTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CompileTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CompileTags_MetaData)) }; // 1976064538
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ScriptLiterals_Inner = { "ScriptLiterals", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ScriptLiterals_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ScriptLiterals = { "ScriptLiterals", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, ScriptLiterals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ScriptLiterals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ScriptLiterals_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Attributes_Inner = { "Attributes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Attributes_MetaData[] = {
		{ "Comment", "/** Attributes used by this script. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Attributes used by this script." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Attributes = { "Attributes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, Attributes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Attributes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Attributes_MetaData)) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataUsage_MetaData[] = {
		{ "Comment", "/** Contains various usage information for this script. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Contains various usage information for this script." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataUsage = { "DataUsage", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, DataUsage), Z_Construct_UScriptStruct_FNiagaraScriptDataUsageInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataUsage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataUsage_MetaData)) }; // 2203210763
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataSetToParameters_ValueProp = { "DataSetToParameters", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FNiagaraParameters, METADATA_PARAMS(nullptr, 0) }; // 2881145709
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataSetToParameters_Key_KeyProp = { "DataSetToParameters_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataSetToParameters_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataSetToParameters = { "DataSetToParameters", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, DataSetToParameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataSetToParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataSetToParameters_MetaData)) }; // 2881145709
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AdditionalExternalFunctions_Inner = { "AdditionalExternalFunctions", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraFunctionSignature, METADATA_PARAMS(nullptr, 0) }; // 2580596167
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AdditionalExternalFunctions_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AdditionalExternalFunctions = { "AdditionalExternalFunctions", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, AdditionalExternalFunctions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AdditionalExternalFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AdditionalExternalFunctions_MetaData)) }; // 2580596167
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataInterfaceInfo_Inner = { "DataInterfaceInfo", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceCompileInfo, METADATA_PARAMS(nullptr, 0) }; // 1001342821
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataInterfaceInfo_MetaData[] = {
		{ "Comment", "/** Information about all data interfaces used by this script. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Information about all data interfaces used by this script." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataInterfaceInfo = { "DataInterfaceInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, DataInterfaceInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataInterfaceInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataInterfaceInfo_MetaData)) }; // 1001342821
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CalledVMExternalFunctions_Inner = { "CalledVMExternalFunctions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVMExternalFunctionBindingInfo, METADATA_PARAMS(nullptr, 0) }; // 207317690
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CalledVMExternalFunctions_MetaData[] = {
		{ "Comment", "/** Array of ordered vm external functions to place in the function table. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Array of ordered vm external functions to place in the function table." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CalledVMExternalFunctions = { "CalledVMExternalFunctions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, CalledVMExternalFunctions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CalledVMExternalFunctions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CalledVMExternalFunctions_MetaData)) }; // 207317690
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ReadDataSets_Inner = { "ReadDataSets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraDataSetID, METADATA_PARAMS(nullptr, 0) }; // 1812770562
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ReadDataSets_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ReadDataSets = { "ReadDataSets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, ReadDataSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ReadDataSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ReadDataSets_MetaData)) }; // 1812770562
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_WriteDataSets_Inner = { "WriteDataSets", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraDataSetProperties, METADATA_PARAMS(nullptr, 0) }; // 3083523917
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_WriteDataSets_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_WriteDataSets = { "WriteDataSets", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, WriteDataSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_WriteDataSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_WriteDataSets_MetaData)) }; // 3083523917
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StatScopes_Inner = { "StatScopes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraStatScope, METADATA_PARAMS(nullptr, 0) }; // 3655907096
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StatScopes_MetaData[] = {
		{ "Comment", "/** Scopes we'll track with stats.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Scopes we'll track with stats." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StatScopes = { "StatScopes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, StatScopes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StatScopes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StatScopes_MetaData)) }; // 3655907096
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastHlslTranslation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastHlslTranslation = { "LastHlslTranslation", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, LastHlslTranslation), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastHlslTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastHlslTranslation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastHlslTranslationGPU_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastHlslTranslationGPU = { "LastHlslTranslationGPU", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, LastHlslTranslationGPU), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastHlslTranslationGPU_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastHlslTranslationGPU_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastAssemblyTranslation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastAssemblyTranslation = { "LastAssemblyTranslation", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, LastAssemblyTranslation), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastAssemblyTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastAssemblyTranslation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastOpCount_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastOpCount = { "LastOpCount", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, LastOpCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastOpCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastOpCount_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ShaderScriptParametersMetadata_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ShaderScriptParametersMetadata = { "ShaderScriptParametersMetadata", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, ShaderScriptParametersMetadata), Z_Construct_UScriptStruct_FNiagaraShaderScriptParametersMetadata, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ShaderScriptParametersMetadata_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ShaderScriptParametersMetadata_MetaData)) }; // 2227102801
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ParameterCollectionPaths_Inner = { "ParameterCollectionPaths", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ParameterCollectionPaths_MetaData[] = {
		{ "Comment", "/** The parameter collections used by this script. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The parameter collections used by this script." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ParameterCollectionPaths = { "ParameterCollectionPaths", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, ParameterCollectionPaths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ParameterCollectionPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ParameterCollectionPaths_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileStatus_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileStatus_MetaData[] = {
		{ "Comment", "/** Last known compile status. Lets us determine the latest state of the script byte buffer.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Last known compile status. Lets us determine the latest state of the script byte buffer." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileStatus = { "LastCompileStatus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, LastCompileStatus), Z_Construct_UEnum_Niagara_ENiagaraScriptCompileStatus, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileStatus_MetaData)) }; // 2615206437
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_SimulationStageMetaData_Inner = { "SimulationStageMetaData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSimulationStageMetaData, METADATA_PARAMS(nullptr, 0) }; // 1804114677
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_SimulationStageMetaData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_SimulationStageMetaData = { "SimulationStageMetaData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, SimulationStageMetaData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_SimulationStageMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_SimulationStageMetaData_MetaData)) }; // 1804114677
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsAttributeData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsAttributeData_SetBit(void* Obj)
	{
		((FNiagaraVMExecutableData*)Obj)->bReadsAttributeData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsAttributeData = { "bReadsAttributeData", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraVMExecutableData), &Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsAttributeData_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsAttributeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsAttributeData_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AttributesWritten_Inner = { "AttributesWritten", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariableBase, METADATA_PARAMS(nullptr, 0) }; // 1114376608
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AttributesWritten_MetaData[] = {
		{ "Comment", "/** List of all attributes explicitly written by this VM script graph. Used to verify external dependencies.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "List of all attributes explicitly written by this VM script graph. Used to verify external dependencies." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AttributesWritten = { "AttributesWritten", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, AttributesWritten), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AttributesWritten_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AttributesWritten_MetaData)) }; // 1114376608
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StaticVariablesWritten_Inner = { "StaticVariablesWritten", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraVariable, METADATA_PARAMS(nullptr, 0) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StaticVariablesWritten_MetaData[] = {
		{ "Comment", "/** List of all attributes explicitly written by this VM script graph. Used to verify external dependencies.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "List of all attributes explicitly written by this VM script graph. Used to verify external dependencies." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StaticVariablesWritten = { "StaticVariablesWritten", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, StaticVariablesWritten), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StaticVariablesWritten_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StaticVariablesWritten_MetaData)) }; // 2575088255
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ErrorMsg_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ErrorMsg = { "ErrorMsg", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, ErrorMsg), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ErrorMsg_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ErrorMsg_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileEvents_Inner = { "LastCompileEvents", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraCompileEvent, METADATA_PARAMS(nullptr, 0) }; // 1933586685
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileEvents_MetaData[] = {
		{ "Comment", "/** Array of all compile events generated last time the script was compiled.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Array of all compile events generated last time the script was compiled." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileEvents = { "LastCompileEvents", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, LastCompileEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileEvents_MetaData)) }; // 1933586685
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ExperimentalContextData_Inner = { "ExperimentalContextData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ExperimentalContextData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ExperimentalContextData = { "ExperimentalContextData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraVMExecutableData, ExperimentalContextData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ExperimentalContextData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ExperimentalContextData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsSignificanceIndex_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsSignificanceIndex_SetBit(void* Obj)
	{
		((FNiagaraVMExecutableData*)Obj)->bReadsSignificanceIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsSignificanceIndex = { "bReadsSignificanceIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraVMExecutableData), &Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsSignificanceIndex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsSignificanceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsSignificanceIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bNeedsGPUContextInit_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bNeedsGPUContextInit_SetBit(void* Obj)
	{
		((FNiagaraVMExecutableData*)Obj)->bNeedsGPUContextInit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bNeedsGPUContextInit = { "bNeedsGPUContextInit", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FNiagaraVMExecutableData), &Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bNeedsGPUContextInit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bNeedsGPUContextInit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bNeedsGPUContextInit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ByteCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_OptimizedByteCode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_NumTempRegisters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_NumUserPtrs,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_InternalParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ExternalDependencies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ExternalDependencies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_BakedRapidIterationParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_BakedRapidIterationParameters,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CompileTags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CompileTags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ScriptLiterals_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ScriptLiterals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Attributes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_Attributes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataUsage,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataSetToParameters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataSetToParameters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataSetToParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AdditionalExternalFunctions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AdditionalExternalFunctions,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataInterfaceInfo_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_DataInterfaceInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CalledVMExternalFunctions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_CalledVMExternalFunctions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ReadDataSets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ReadDataSets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_WriteDataSets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_WriteDataSets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StatScopes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StatScopes,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastHlslTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastHlslTranslationGPU,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastAssemblyTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastOpCount,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ShaderScriptParametersMetadata,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ParameterCollectionPaths_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ParameterCollectionPaths,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileStatus_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_SimulationStageMetaData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_SimulationStageMetaData,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsAttributeData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AttributesWritten_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_AttributesWritten,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StaticVariablesWritten_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_StaticVariablesWritten,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ErrorMsg,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileEvents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_LastCompileEvents,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ExperimentalContextData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_ExperimentalContextData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bReadsSignificanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewProp_bNeedsGPUContextInit,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraVMExecutableData",
		sizeof(FNiagaraVMExecutableData),
		alignof(FNiagaraVMExecutableData),
		Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVMExecutableData()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraVMExecutableData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraVMExecutableData.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraVMExecutableData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VersionedNiagaraScriptData;
class UScriptStruct* FVersionedNiagaraScriptData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VersionedNiagaraScriptData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VersionedNiagaraScriptData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("VersionedNiagaraScriptData"));
	}
	return Z_Registration_Info_UScriptStruct_VersionedNiagaraScriptData.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FVersionedNiagaraScriptData>()
{
	return FVersionedNiagaraScriptData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Version_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Version;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VersionChangeDescription_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_VersionChangeDescription;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleUsageBitmask_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ModuleUsageBitmask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Category;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuggested_MetaData[];
#endif
		static void NewProp_bSuggested_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuggested;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProvidedDependencies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProvidedDependencies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProvidedDependencies;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredDependencies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredDependencies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RequiredDependencies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeprecated_MetaData[];
#endif
		static void NewProp_bDeprecated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeprecated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeprecationMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DeprecationMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeprecationRecommendation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DeprecationRecommendation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversionUtility_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ConversionUtility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExperimental_MetaData[];
#endif
		static void NewProp_bExperimental_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExperimental;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExperimentalMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ExperimentalMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoteMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NoteMessage;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LibraryVisibility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LibraryVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LibraryVisibility;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NumericOutputTypeSelectionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumericOutputTypeSelectionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NumericOutputTypeSelectionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keywords_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Keywords;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollapsedViewFormat_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_CollapsedViewFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanBeUsedForTypeConversions_MetaData[];
#endif
		static void NewProp_bCanBeUsedForTypeConversions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanBeUsedForTypeConversions;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ScriptMetaData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ScriptMetaData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ScriptMetaData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputSections_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputSections_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputSections;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastGeneratedVMId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastGeneratedVMId;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UpdateScriptExecution_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateScriptExecution_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UpdateScriptExecution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PythonUpdateScript_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PythonUpdateScript;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptAsset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScriptAsset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterDefinitionsSubscriptions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterDefinitionsSubscriptions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ParameterDefinitionsSubscriptions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Source;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct containing all of the data that can be different between different script versions.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Struct containing all of the data that can be different between different script versions." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVersionedNiagaraScriptData>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Version_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Version = { "Version", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVersionedNiagaraScriptData, Version), Z_Construct_UScriptStruct_FNiagaraAssetVersion, METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Version_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Version_MetaData)) }; // 2189298161
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_VersionChangeDescription_MetaData[] = {
		{ "Comment", "/** What changed in this version compared to the last? Displayed to the user when upgrading to a new script version. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "What changed in this version compared to the last? Displayed to the user when upgrading to a new script version." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_VersionChangeDescription = { "VersionChangeDescription", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVersionedNiagaraScriptData, VersionChangeDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_VersionChangeDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_VersionChangeDescription_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ModuleUsageBitmask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/Niagara.ENiagaraScriptUsage" },
		{ "Category", "Script" },
		{ "Comment", "/** When used as a module, what are the appropriate script types for referencing this module?*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "When used as a module, what are the appropriate script types for referencing this module?" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ModuleUsageBitmask = { "ModuleUsageBitmask", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVersionedNiagaraScriptData, ModuleUsageBitmask), METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ModuleUsageBitmask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ModuleUsageBitmask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Used to break up scripts of the same Usage type in UI display.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Used to break up scripts of the same Usage type in UI display." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVersionedNiagaraScriptData, Category), METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Category_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bSuggested_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** If true, this script will be added to a 'Suggested' category at the top of menus during searches */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "If true, this script will be added to a 'Suggested' category at the top of menus during searches" },
	};
#endif
	void Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bSuggested_SetBit(void* Obj)
	{
		((FVersionedNiagaraScriptData*)Obj)->bSuggested = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bSuggested = { "bSuggested", nullptr, (EPropertyFlags)0x0010010800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVersionedNiagaraScriptData), &Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bSuggested_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bSuggested_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bSuggested_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ProvidedDependencies_Inner = { "ProvidedDependencies", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ProvidedDependencies_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Array of Ids of dependencies provided by this module to other modules on the stack (e.g. 'ProvidesNormalizedAge') */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Array of Ids of dependencies provided by this module to other modules on the stack (e.g. 'ProvidesNormalizedAge')" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ProvidedDependencies = { "ProvidedDependencies", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVersionedNiagaraScriptData, ProvidedDependencies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ProvidedDependencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ProvidedDependencies_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_RequiredDependencies_Inner = { "RequiredDependencies", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraModuleDependency, METADATA_PARAMS(nullptr, 0) }; // 2527442462
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_RequiredDependencies_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Dependencies required by this module from other modules on the stack */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Dependencies required by this module from other modules on the stack" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_RequiredDependencies = { "RequiredDependencies", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVersionedNiagaraScriptData, RequiredDependencies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_RequiredDependencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_RequiredDependencies_MetaData)) }; // 2527442462
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bDeprecated_MetaData[] = {
		{ "Comment", "/* If this script is no longer meant to be used, this option should be set.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "If this script is no longer meant to be used, this option should be set." },
	};
#endif
	void Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bDeprecated_SetBit(void* Obj)
	{
		((FVersionedNiagaraScriptData*)Obj)->bDeprecated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bDeprecated = { "bDeprecated", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FVersionedNiagaraScriptData), &Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bDeprecated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bDeprecated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bDeprecated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_DeprecationMessage_MetaData[] = {
		{ "Comment", "/* Message to display when the script is deprecated. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Message to display when the script is deprecated." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_DeprecationMessage = { "DeprecationMessage", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVersionedNiagaraScriptData, DeprecationMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_DeprecationMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_DeprecationMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_DeprecationRecommendation_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/* Which script to use if this is deprecated.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Which script to use if this is deprecated." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_DeprecationRecommendation = { "DeprecationRecommendation", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVersionedNiagaraScriptData, DeprecationRecommendation), Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_DeprecationRecommendation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_DeprecationRecommendation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ConversionUtility_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/* Custom logic to convert the contents of an existing script assignment to this script.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Custom logic to convert the contents of an existing script assignment to this script." },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ConversionUtility = { "ConversionUtility", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVersionedNiagaraScriptData, ConversionUtility), Z_Construct_UClass_UClass, Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ConversionUtility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ConversionUtility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bExperimental_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** Is this script experimental and less supported? */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Is this script experimental and less supported?" },
	};
#endif
	void Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bExperimental_SetBit(void* Obj)
	{
		((FVersionedNiagaraScriptData*)Obj)->bExperimental = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bExperimental = { "bExperimental", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FVersionedNiagaraScriptData), &Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bExperimental_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bExperimental_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bExperimental_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ExperimentalMessage_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** The message to display when a function is marked experimental. */" },
		{ "EditCondition", "bExperimental" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "The message to display when a function is marked experimental." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ExperimentalMessage = { "ExperimentalMessage", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVersionedNiagaraScriptData, ExperimentalMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ExperimentalMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ExperimentalMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_NoteMessage_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** A message to display when adding the module to the stack. This is useful to highlight pitfalls or weird behavior of the module. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "MultiLine", "TRUE" },
		{ "ToolTip", "A message to display when adding the module to the stack. This is useful to highlight pitfalls or weird behavior of the module." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_NoteMessage = { "NoteMessage", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVersionedNiagaraScriptData, NoteMessage), METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_NoteMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_NoteMessage_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_LibraryVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_LibraryVisibility_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/* Defines if this script is visible to the user when searching for modules to add to an emitter.  */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Defines if this script is visible to the user when searching for modules to add to an emitter." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_LibraryVisibility = { "LibraryVisibility", nullptr, (EPropertyFlags)0x0010010800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVersionedNiagaraScriptData, LibraryVisibility), Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility, METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_LibraryVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_LibraryVisibility_MetaData)) }; // 2823837420
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_NumericOutputTypeSelectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_NumericOutputTypeSelectionMode_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** The mode to use when deducing the type of numeric output pins from the types of the input pins. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The mode to use when deducing the type of numeric output pins from the types of the input pins." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_NumericOutputTypeSelectionMode = { "NumericOutputTypeSelectionMode", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVersionedNiagaraScriptData, NumericOutputTypeSelectionMode), Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_NumericOutputTypeSelectionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_NumericOutputTypeSelectionMode_MetaData)) }; // 3866916965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "Script" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "MultiLine", "TRUE" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010010800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVersionedNiagaraScriptData, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Keywords_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** A list of space separated keywords which can be used to find this script in editor menus. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "A list of space separated keywords which can be used to find this script in editor menus." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Keywords = { "Keywords", nullptr, (EPropertyFlags)0x0010010800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVersionedNiagaraScriptData, Keywords), METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Keywords_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Keywords_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_CollapsedViewFormat_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/** The format for the text to display in the stack if the value is collapsed.\n\x09*  This supports formatting placeholders for the function inputs, for example \"myfunc({0}, {1})\" will be converted to \"myfunc(1.23, Particles.Position)\". */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The format for the text to display in the stack if the value is collapsed.\nThis supports formatting placeholders for the function inputs, for example \"myfunc({0}, {1})\" will be converted to \"myfunc(1.23, Particles.Position)\"." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_CollapsedViewFormat = { "CollapsedViewFormat", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVersionedNiagaraScriptData, CollapsedViewFormat), METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_CollapsedViewFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_CollapsedViewFormat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bCanBeUsedForTypeConversions_MetaData[] = {
		{ "Category", "Script" },
		{ "Comment", "/* If used as a dynamic input with exactly one input and output of different types, setting this to true will auto-insert this script to convert from one type to another when dragging and dropping parameters in the stack.\n\x09   For example, a script with a bool as input and a float as output will be automatically inserted in the stack when dropping a bool parameter into the float input of a module in the stack. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "If used as a dynamic input with exactly one input and output of different types, setting this to true will auto-insert this script to convert from one type to another when dragging and dropping parameters in the stack.\n         For example, a script with a bool as input and a float as output will be automatically inserted in the stack when dropping a bool parameter into the float input of a module in the stack." },
	};
#endif
	void Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bCanBeUsedForTypeConversions_SetBit(void* Obj)
	{
		((FVersionedNiagaraScriptData*)Obj)->bCanBeUsedForTypeConversions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bCanBeUsedForTypeConversions = { "bCanBeUsedForTypeConversions", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FVersionedNiagaraScriptData), &Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bCanBeUsedForTypeConversions_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bCanBeUsedForTypeConversions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bCanBeUsedForTypeConversions_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ScriptMetaData_ValueProp = { "ScriptMetaData", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ScriptMetaData_Key_KeyProp = { "ScriptMetaData_Key", nullptr, (EPropertyFlags)0x0000000800000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ScriptMetaData_MetaData[] = {
		{ "Category", "Script" },
		{ "DisplayName", "Script Metadata" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Script Metadata" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ScriptMetaData = { "ScriptMetaData", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVersionedNiagaraScriptData, ScriptMetaData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ScriptMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ScriptMetaData_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_InputSections_Inner = { "InputSections", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraStackSection, METADATA_PARAMS(nullptr, 0) }; // 672969363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_InputSections_MetaData[] = {
		{ "Category", "Script" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_InputSections = { "InputSections", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVersionedNiagaraScriptData, InputSections), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_InputSections_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_InputSections_MetaData)) }; // 672969363
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_LastGeneratedVMId_MetaData[] = {
		{ "Comment", "/** Adjusted every time ComputeVMCompilationId is called.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Adjusted every time ComputeVMCompilationId is called." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_LastGeneratedVMId = { "LastGeneratedVMId", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVersionedNiagaraScriptData, LastGeneratedVMId), Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId, METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_LastGeneratedVMId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_LastGeneratedVMId_MetaData)) }; // 2131928882
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_UpdateScriptExecution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_UpdateScriptExecution_MetaData[] = {
		{ "Comment", "/** Reference to a python script that is executed when the user updates from a previous version to this version. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Reference to a python script that is executed when the user updates from a previous version to this version." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_UpdateScriptExecution = { "UpdateScriptExecution", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVersionedNiagaraScriptData, UpdateScriptExecution), Z_Construct_UEnum_Niagara_ENiagaraPythonUpdateScriptReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_UpdateScriptExecution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_UpdateScriptExecution_MetaData)) }; // 3851770141
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_PythonUpdateScript_MetaData[] = {
		{ "Comment", "/** Python script to run when updating to this script version. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Python script to run when updating to this script version." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_PythonUpdateScript = { "PythonUpdateScript", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVersionedNiagaraScriptData, PythonUpdateScript), METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_PythonUpdateScript_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_PythonUpdateScript_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ScriptAsset_MetaData[] = {
		{ "Comment", "/** Asset reference to a python script to run when updating to this script version. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Asset reference to a python script to run when updating to this script version." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ScriptAsset = { "ScriptAsset", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVersionedNiagaraScriptData, ScriptAsset), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ScriptAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ScriptAsset_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ParameterDefinitionsSubscriptions_Inner = { "ParameterDefinitionsSubscriptions", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FParameterDefinitionsSubscription, METADATA_PARAMS(nullptr, 0) }; // 1729836513
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ParameterDefinitionsSubscriptions_MetaData[] = {
		{ "Comment", "/** Subscriptions to parameter definitions for this script version */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Subscriptions to parameter definitions for this script version" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ParameterDefinitionsSubscriptions = { "ParameterDefinitionsSubscriptions", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVersionedNiagaraScriptData, ParameterDefinitionsSubscriptions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ParameterDefinitionsSubscriptions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ParameterDefinitionsSubscriptions_MetaData)) }; // 1729836513
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Source_MetaData[] = {
		{ "Comment", "/** 'Source' data/graphs for this script */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "'Source' data/graphs for this script" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVersionedNiagaraScriptData, Source), Z_Construct_UClass_UNiagaraScriptSourceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Source_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Version,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_VersionChangeDescription,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ModuleUsageBitmask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bSuggested,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ProvidedDependencies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ProvidedDependencies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_RequiredDependencies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_RequiredDependencies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bDeprecated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_DeprecationMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_DeprecationRecommendation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ConversionUtility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bExperimental,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ExperimentalMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_NoteMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_LibraryVisibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_LibraryVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_NumericOutputTypeSelectionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_NumericOutputTypeSelectionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Keywords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_CollapsedViewFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_bCanBeUsedForTypeConversions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ScriptMetaData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ScriptMetaData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ScriptMetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_InputSections_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_InputSections,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_LastGeneratedVMId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_UpdateScriptExecution_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_UpdateScriptExecution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_PythonUpdateScript,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ScriptAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ParameterDefinitionsSubscriptions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_ParameterDefinitionsSubscriptions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewProp_Source,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"VersionedNiagaraScriptData",
		sizeof(FVersionedNiagaraScriptData),
		alignof(FVersionedNiagaraScriptData),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVersionedNiagaraScriptData()
	{
		if (!Z_Registration_Info_UScriptStruct_VersionedNiagaraScriptData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VersionedNiagaraScriptData.InnerSingleton, Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VersionedNiagaraScriptData.InnerSingleton;
	}
	DEFINE_FUNCTION(UNiagaraScript::execRaiseOnGPUCompilationComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RaiseOnGPUCompilationComplete();
		P_NATIVE_END;
	}
	void UNiagaraScript::StaticRegisterNativesUNiagaraScript()
	{
		UClass* Class = UNiagaraScript::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RaiseOnGPUCompilationComplete", &UNiagaraScript::execRaiseOnGPUCompilationComplete },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraScript_RaiseOnGPUCompilationComplete_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraScript_RaiseOnGPUCompilationComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraScript_RaiseOnGPUCompilationComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraScript, nullptr, "RaiseOnGPUCompilationComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraScript_RaiseOnGPUCompilationComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraScript_RaiseOnGPUCompilationComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraScript_RaiseOnGPUCompilationComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraScript_RaiseOnGPUCompilationComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraScript);
	UClass* Z_Construct_UClass_UNiagaraScript_NoRegister()
	{
		return UNiagaraScript::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraScript_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidationRules_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ValidationRules_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ValidationRules_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidationRules;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_Usage_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Usage_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Usage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsageId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UsageId;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExposedVersion_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExposedVersion;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVersioningEnabled_MetaData[];
#endif
		static void NewProp_bVersioningEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVersioningEnabled;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VersionData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VersionData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VersionData;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RapidIterationParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RapidIterationParameters;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RapidIterationParametersCookedEditorCache_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RapidIterationParametersCookedEditorCache;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VersionToOpenInEditor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VersionToOpenInEditor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UsageIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UsageIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModuleUsageBitmask_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_ModuleUsageBitmask;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Category;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProvidedDependencies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProvidedDependencies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProvidedDependencies;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RequiredDependencies_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RequiredDependencies_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RequiredDependencies;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDeprecated_MetaData[];
#endif
		static void NewProp_bDeprecated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDeprecated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeprecationMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_DeprecationMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DeprecationRecommendation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DeprecationRecommendation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversionUtility_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ConversionUtility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExperimental_MetaData[];
#endif
		static void NewProp_bExperimental_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExperimental;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExperimentalMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_ExperimentalMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoteMessage_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_NoteMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExposeToLibrary_MetaData[];
#endif
		static void NewProp_bExposeToLibrary_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExposeToLibrary;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LibraryVisibility_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LibraryVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LibraryVisibility;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NumericOutputTypeSelectionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumericOutputTypeSelectionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NumericOutputTypeSelectionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keywords_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Keywords;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollapsedViewFormat_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_CollapsedViewFormat;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ScriptMetaData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ScriptMetaData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptMetaData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ScriptMetaData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Source_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptExecutionParamStoreCPU_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScriptExecutionParamStoreCPU;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptExecutionParamStoreGPU_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScriptExecutionParamStoreGPU;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptExecutionParamStore_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScriptExecutionParamStore;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScriptExecutionBoundParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScriptExecutionBoundParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScriptExecutionBoundParameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedScriptVMId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedScriptVMId;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveCompileRoots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveCompileRoots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveCompileRoots;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedScriptVM_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedScriptVM;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedParameterCollectionReferences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedParameterCollectionReferences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedParameterCollectionReferences;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedDefaultDataInterfaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedDefaultDataInterfaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CachedDefaultDataInterfaces;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraScript_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraScriptBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraScript_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraScript_RaiseOnGPUCompilationComplete, "RaiseOnGPUCompilationComplete" }, // 1825297387
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Runtime script for a Niagara system */" },
		{ "IncludePath", "NiagaraScript.h" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Runtime script for a Niagara system" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ValidationRules_Inner_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** A set of rules to apply when this script is used in the stack. To create your own rules, write a custom class that extends UNiagaraValidationRule. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "A set of rules to apply when this script is used in the stack. To create your own rules, write a custom class that extends UNiagaraValidationRule." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ValidationRules_Inner = { "ValidationRules", nullptr, (EPropertyFlags)0x0006000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraValidationRule_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ValidationRules_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ValidationRules_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ValidationRules_MetaData[] = {
		{ "Category", "Validation" },
		{ "Comment", "/** A set of rules to apply when this script is used in the stack. To create your own rules, write a custom class that extends UNiagaraValidationRule. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "A set of rules to apply when this script is used in the stack. To create your own rules, write a custom class that extends UNiagaraValidationRule." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ValidationRules = { "ValidationRules", nullptr, (EPropertyFlags)0x0014008800000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, ValidationRules), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ValidationRules_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ValidationRules_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Usage_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Usage_MetaData[] = {
		{ "Comment", "// how this script is to be used. cannot be private due to use of GET_MEMBER_NAME_CHECKED\n" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "how this script is to be used. cannot be private due to use of GET_MEMBER_NAME_CHECKED" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Usage = { "Usage", nullptr, (EPropertyFlags)0x0010010000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, Usage), Z_Construct_UEnum_Niagara_ENiagaraScriptUsage, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Usage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Usage_MetaData)) }; // 2772325717
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_UsageId_MetaData[] = {
		{ "Comment", "/** Specifies a unique id for use when there are multiple scripts with the same usage, e.g. events. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Specifies a unique id for use when there are multiple scripts with the same usage, e.g. events." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_UsageId = { "UsageId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, UsageId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_UsageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_UsageId_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ExposedVersion_MetaData[] = {
		{ "Comment", "/** The exposed version is the version that is used by default when a user adds this script somewhere. It is basically the published version and allows a script maintainer to create and test newer versions that are not used by normal users. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The exposed version is the version that is used by default when a user adds this script somewhere. It is basically the published version and allows a script maintainer to create and test newer versions that are not used by normal users." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ExposedVersion = { "ExposedVersion", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, ExposedVersion), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ExposedVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ExposedVersion_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bVersioningEnabled_MetaData[] = {
		{ "Comment", "/** If true then this script asset uses active version control to track changes. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "If true then this script asset uses active version control to track changes." },
	};
#endif
	void Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bVersioningEnabled_SetBit(void* Obj)
	{
		((UNiagaraScript*)Obj)->bVersioningEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bVersioningEnabled = { "bVersioningEnabled", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraScript), &Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bVersioningEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bVersioningEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bVersioningEnabled_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_VersionData_Inner = { "VersionData", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVersionedNiagaraScriptData, METADATA_PARAMS(nullptr, 0) }; // 2903579601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_VersionData_MetaData[] = {
		{ "Comment", "/** Contains all of the versioned script data. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Contains all of the versioned script data." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_VersionData = { "VersionData", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, VersionData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_VersionData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_VersionData_MetaData)) }; // 2903579601
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RapidIterationParameters_MetaData[] = {
		{ "Comment", "/** Contains all of the top-level values that are iterated on in the UI. These are usually \"Module\" variables in the graph. They don't necessarily have to be in the order that they are expected in the uniform table.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Contains all of the top-level values that are iterated on in the UI. These are usually \"Module\" variables in the graph. They don't necessarily have to be in the order that they are expected in the uniform table." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RapidIterationParameters = { "RapidIterationParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, RapidIterationParameters), Z_Construct_UScriptStruct_FNiagaraParameterStore, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RapidIterationParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RapidIterationParameters_MetaData)) }; // 2939422465
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RapidIterationParametersCookedEditorCache_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RapidIterationParametersCookedEditorCache = { "RapidIterationParametersCookedEditorCache", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, RapidIterationParametersCookedEditorCache), Z_Construct_UScriptStruct_FNiagaraParameterStore, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RapidIterationParametersCookedEditorCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RapidIterationParametersCookedEditorCache_MetaData)) }; // 2939422465
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_VersionToOpenInEditor_MetaData[] = {
		{ "Comment", "/** This is used as a transient value to open a specific version in the graph editor */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "This is used as a transient value to open a specific version in the graph editor" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_VersionToOpenInEditor = { "VersionToOpenInEditor", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, VersionToOpenInEditor), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_VersionToOpenInEditor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_VersionToOpenInEditor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_UsageIndex_MetaData[] = {
		{ "Comment", "/** Which instance of the usage in the graph to use.  This is now deprecated and is handled by UsageId. */" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Which instance of the usage in the graph to use.  This is now deprecated and is handled by UsageId." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_UsageIndex = { "UsageIndex", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, UsageIndex_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_UsageIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_UsageIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ModuleUsageBitmask_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ModuleUsageBitmask = { "ModuleUsageBitmask", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, ModuleUsageBitmask_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ModuleUsageBitmask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ModuleUsageBitmask_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Category_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, Category_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Category_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ProvidedDependencies_Inner = { "ProvidedDependencies", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ProvidedDependencies_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ProvidedDependencies = { "ProvidedDependencies", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, ProvidedDependencies_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ProvidedDependencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ProvidedDependencies_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RequiredDependencies_Inner = { "RequiredDependencies", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraModuleDependency, METADATA_PARAMS(nullptr, 0) }; // 2527442462
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RequiredDependencies_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RequiredDependencies = { "RequiredDependencies", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, RequiredDependencies_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RequiredDependencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RequiredDependencies_MetaData)) }; // 2527442462
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bDeprecated_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
#endif
	void Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bDeprecated_SetBit(void* Obj)
	{
		((UNiagaraScript*)Obj)->bDeprecated_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bDeprecated = { "bDeprecated", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraScript), &Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bDeprecated_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bDeprecated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bDeprecated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_DeprecationMessage_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_DeprecationMessage = { "DeprecationMessage", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, DeprecationMessage_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_DeprecationMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_DeprecationMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_DeprecationRecommendation_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_DeprecationRecommendation = { "DeprecationRecommendation", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, DeprecationRecommendation_DEPRECATED), Z_Construct_UClass_UNiagaraScript_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_DeprecationRecommendation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_DeprecationRecommendation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ConversionUtility_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ConversionUtility = { "ConversionUtility", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, ConversionUtility_DEPRECATED), Z_Construct_UClass_UClass, Z_Construct_UClass_UNiagaraConvertInPlaceUtilityBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ConversionUtility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ConversionUtility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExperimental_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
#endif
	void Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExperimental_SetBit(void* Obj)
	{
		((UNiagaraScript*)Obj)->bExperimental_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExperimental = { "bExperimental", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraScript), &Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExperimental_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExperimental_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExperimental_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ExperimentalMessage_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ExperimentalMessage = { "ExperimentalMessage", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, ExperimentalMessage_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ExperimentalMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ExperimentalMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_NoteMessage_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_NoteMessage = { "NoteMessage", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, NoteMessage_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_NoteMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_NoteMessage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExposeToLibrary_MetaData[] = {
		{ "Comment", "/* Deprecated, use LibraryVisibility instead. */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Deprecated, use LibraryVisibility instead." },
	};
#endif
	void Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExposeToLibrary_SetBit(void* Obj)
	{
		((UNiagaraScript*)Obj)->bExposeToLibrary_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExposeToLibrary = { "bExposeToLibrary", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UNiagaraScript), &Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExposeToLibrary_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExposeToLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExposeToLibrary_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_LibraryVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_LibraryVisibility_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_LibraryVisibility = { "LibraryVisibility", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, LibraryVisibility_DEPRECATED), Z_Construct_UEnum_Niagara_ENiagaraScriptLibraryVisibility, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_LibraryVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_LibraryVisibility_MetaData)) }; // 2823837420
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_NumericOutputTypeSelectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_NumericOutputTypeSelectionMode_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_NumericOutputTypeSelectionMode = { "NumericOutputTypeSelectionMode", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, NumericOutputTypeSelectionMode_DEPRECATED), Z_Construct_UEnum_Niagara_ENiagaraNumericOutputTypeSelectionMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_NumericOutputTypeSelectionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_NumericOutputTypeSelectionMode_MetaData)) }; // 3866916965
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Description_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, Description_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Keywords_MetaData[] = {
		{ "Comment", "/** Use property in struct returned from GetScriptData() instead */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Use property in struct returned from GetScriptData() instead" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Keywords = { "Keywords", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, Keywords_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Keywords_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Keywords_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CollapsedViewFormat_MetaData[] = {
		{ "Comment", "/* Deprecated, use LibraryVisibility instead. */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Deprecated, use LibraryVisibility instead." },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CollapsedViewFormat = { "CollapsedViewFormat", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, CollapsedViewFormat_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CollapsedViewFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CollapsedViewFormat_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptMetaData_ValueProp = { "ScriptMetaData", nullptr, (EPropertyFlags)0x0000000820000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptMetaData_Key_KeyProp = { "ScriptMetaData_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptMetaData_MetaData[] = {
		{ "Comment", "/* Deprecated, use LibraryVisibility instead. */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Deprecated, use LibraryVisibility instead." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptMetaData = { "ScriptMetaData", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, ScriptMetaData_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptMetaData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptMetaData_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Source_MetaData[] = {
		{ "Comment", "/** 'Source' data/graphs for this script */" },
		{ "DeprecatedProperty", "" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "'Source' data/graphs for this script" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Source = { "Source", nullptr, (EPropertyFlags)0x0014000820000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, Source_DEPRECATED), Z_Construct_UClass_UNiagaraScriptSourceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Source_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Source_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStoreCPU_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStoreCPU = { "ScriptExecutionParamStoreCPU", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, ScriptExecutionParamStoreCPU), Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStoreCPU_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStoreCPU_MetaData)) }; // 3574274879
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStoreGPU_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStoreGPU = { "ScriptExecutionParamStoreGPU", nullptr, (EPropertyFlags)0x0040000800002000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, ScriptExecutionParamStoreGPU), Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStoreGPU_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStoreGPU_MetaData)) }; // 3574274879
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStore_MetaData[] = {
		{ "Comment", "/** The equivalent of ScriptExecutionParamStoreCPU (or GPU) cooked for the given platform.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The equivalent of ScriptExecutionParamStoreCPU (or GPU) cooked for the given platform." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStore = { "ScriptExecutionParamStore", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, ScriptExecutionParamStore), Z_Construct_UScriptStruct_FNiagaraScriptExecutionParameterStore, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStore_MetaData)) }; // 3574274879
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionBoundParameters_Inner = { "ScriptExecutionBoundParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraBoundParameter, METADATA_PARAMS(nullptr, 0) }; // 1823501731
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionBoundParameters_MetaData[] = {
		{ "Comment", "/** The cooked binding data between ScriptExecutionParamStore and RapidIterationParameters.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "The cooked binding data between ScriptExecutionParamStore and RapidIterationParameters." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionBoundParameters = { "ScriptExecutionBoundParameters", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, ScriptExecutionBoundParameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionBoundParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionBoundParameters_MetaData)) }; // 1823501731
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedScriptVMId_MetaData[] = {
		{ "Comment", "/** Adjusted every time that we compile this script. Lets us know that we might differ from any cached versions.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Adjusted every time that we compile this script. Lets us know that we might differ from any cached versions." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedScriptVMId = { "CachedScriptVMId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, CachedScriptVMId), Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedScriptVMId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedScriptVMId_MetaData)) }; // 2131928882
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ActiveCompileRoots_Inner = { "ActiveCompileRoots", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ActiveCompileRoots_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ActiveCompileRoots = { "ActiveCompileRoots", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, ActiveCompileRoots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ActiveCompileRoots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ActiveCompileRoots_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedScriptVM_MetaData[] = {
		{ "Comment", "/** Compiled VM bytecode and data necessary to run this script.*/" },
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
		{ "ToolTip", "Compiled VM bytecode and data necessary to run this script." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedScriptVM = { "CachedScriptVM", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, CachedScriptVM), Z_Construct_UScriptStruct_FNiagaraVMExecutableData, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedScriptVM_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedScriptVM_MetaData)) }; // 3593132306
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedParameterCollectionReferences_Inner = { "CachedParameterCollectionReferences", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UNiagaraParameterCollection_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedParameterCollectionReferences_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedParameterCollectionReferences = { "CachedParameterCollectionReferences", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, CachedParameterCollectionReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedParameterCollectionReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedParameterCollectionReferences_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedDefaultDataInterfaces_Inner = { "CachedDefaultDataInterfaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraScriptDataInterfaceInfo, METADATA_PARAMS(nullptr, 0) }; // 1256432025
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedDefaultDataInterfaces_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraScript.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedDefaultDataInterfaces = { "CachedDefaultDataInterfaces", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraScript, CachedDefaultDataInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedDefaultDataInterfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedDefaultDataInterfaces_MetaData)) }; // 1256432025
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraScript_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ValidationRules_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ValidationRules,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Usage_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Usage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_UsageId,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ExposedVersion,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bVersioningEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_VersionData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_VersionData,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RapidIterationParameters,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RapidIterationParametersCookedEditorCache,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_VersionToOpenInEditor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_UsageIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ModuleUsageBitmask,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Category,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ProvidedDependencies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ProvidedDependencies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RequiredDependencies_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_RequiredDependencies,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bDeprecated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_DeprecationMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_DeprecationRecommendation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ConversionUtility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExperimental,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ExperimentalMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_NoteMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_bExposeToLibrary,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_LibraryVisibility_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_LibraryVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_NumericOutputTypeSelectionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_NumericOutputTypeSelectionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Keywords,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CollapsedViewFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptMetaData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptMetaData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptMetaData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_Source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStoreCPU,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStoreGPU,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionParamStore,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionBoundParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ScriptExecutionBoundParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedScriptVMId,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ActiveCompileRoots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_ActiveCompileRoots,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedScriptVM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedParameterCollectionReferences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedParameterCollectionReferences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedDefaultDataInterfaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraScript_Statics::NewProp_CachedDefaultDataInterfaces,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraScript_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraScript>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraScript_Statics::ClassParams = {
		&UNiagaraScript::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNiagaraScript_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraScript_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraScript_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraScript()
	{
		if (!Z_Registration_Info_UClass_UNiagaraScript.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraScript.OuterSingleton, Z_Construct_UClass_UNiagaraScript_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraScript.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraScript>()
	{
		return UNiagaraScript::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraScript);
	UNiagaraScript::~UNiagaraScript() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UNiagaraScript)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_Statics::EnumInfo[] = {
		{ EUnusedAttributeBehaviour_StaticEnum, TEXT("EUnusedAttributeBehaviour"), &Z_Registration_Info_UEnum_EUnusedAttributeBehaviour, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2055288136U) },
		{ ENiagaraModuleDependencyType_StaticEnum, TEXT("ENiagaraModuleDependencyType"), &Z_Registration_Info_UEnum_ENiagaraModuleDependencyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2334382662U) },
		{ ENiagaraModuleDependencyScriptConstraint_StaticEnum, TEXT("ENiagaraModuleDependencyScriptConstraint"), &Z_Registration_Info_UEnum_ENiagaraModuleDependencyScriptConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 681966962U) },
		{ ENiagaraScriptLibraryVisibility_StaticEnum, TEXT("ENiagaraScriptLibraryVisibility"), &Z_Registration_Info_UEnum_ENiagaraScriptLibraryVisibility, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2823837420U) },
		{ ENiagaraScriptTemplateSpecification_StaticEnum, TEXT("ENiagaraScriptTemplateSpecification"), &Z_Registration_Info_UEnum_ENiagaraScriptTemplateSpecification, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 295162963U) },
		{ ENiagaraModuleDependencyUsage_StaticEnum, TEXT("ENiagaraModuleDependencyUsage"), &Z_Registration_Info_UEnum_ENiagaraModuleDependencyUsage, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2948376302U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraModuleDependency::StaticStruct, Z_Construct_UScriptStruct_FNiagaraModuleDependency_Statics::NewStructOps, TEXT("NiagaraModuleDependency"), &Z_Registration_Info_UScriptStruct_NiagaraModuleDependency, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraModuleDependency), 2527442462U) },
		{ FNiagaraCompilerTag::StaticStruct, Z_Construct_UScriptStruct_FNiagaraCompilerTag_Statics::NewStructOps, TEXT("NiagaraCompilerTag"), &Z_Registration_Info_UScriptStruct_NiagaraCompilerTag, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraCompilerTag), 1976064538U) },
		{ FNiagaraVMExecutableDataId::StaticStruct, Z_Construct_UScriptStruct_FNiagaraVMExecutableDataId_Statics::NewStructOps, TEXT("NiagaraVMExecutableDataId"), &Z_Registration_Info_UScriptStruct_NiagaraVMExecutableDataId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraVMExecutableDataId), 2131928882U) },
		{ FNiagaraVMExecutableByteCode::StaticStruct, Z_Construct_UScriptStruct_FNiagaraVMExecutableByteCode_Statics::NewStructOps, TEXT("NiagaraVMExecutableByteCode"), &Z_Registration_Info_UScriptStruct_NiagaraVMExecutableByteCode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraVMExecutableByteCode), 1091965267U) },
		{ FNiagaraVMExecutableData::StaticStruct, Z_Construct_UScriptStruct_FNiagaraVMExecutableData_Statics::NewStructOps, TEXT("NiagaraVMExecutableData"), &Z_Registration_Info_UScriptStruct_NiagaraVMExecutableData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraVMExecutableData), 3593132306U) },
		{ FVersionedNiagaraScriptData::StaticStruct, Z_Construct_UScriptStruct_FVersionedNiagaraScriptData_Statics::NewStructOps, TEXT("VersionedNiagaraScriptData"), &Z_Registration_Info_UScriptStruct_VersionedNiagaraScriptData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVersionedNiagaraScriptData), 2903579601U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraScript, UNiagaraScript::StaticClass, TEXT("UNiagaraScript"), &Z_Registration_Info_UClass_UNiagaraScript, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraScript), 2050961137U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_2967766127(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraScript_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
