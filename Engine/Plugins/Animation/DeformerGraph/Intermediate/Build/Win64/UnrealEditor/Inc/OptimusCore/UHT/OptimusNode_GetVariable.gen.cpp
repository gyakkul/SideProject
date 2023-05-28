// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Nodes/OptimusNode_GetVariable.h"
#include "OptimusDataType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNode_GetVariable() {}
// Cross Module References
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_GetVariable();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_GetVariable_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusValueProvider_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusVariableDescription_NoRegister();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDataTypeRef();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusNode_GetVariable_DuplicationInfo;
class UScriptStruct* FOptimusNode_GetVariable_DuplicationInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusNode_GetVariable_DuplicationInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusNode_GetVariable_DuplicationInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusNode_GetVariable_DuplicationInfo"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusNode_GetVariable_DuplicationInfo.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusNode_GetVariable_DuplicationInfo>()
{
	return FOptimusNode_GetVariable_DuplicationInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_VariableName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "// Information to hold data on the variable definition that persists over node duplication.\n// FIXME: This could be generalized in a better fashion.\n" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_GetVariable.h" },
		{ "ToolTip", "Information to hold data on the variable definition that persists over node duplication.\nFIXME: This could be generalized in a better fashion." },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusNode_GetVariable_DuplicationInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::NewProp_VariableName_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_GetVariable.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::NewProp_VariableName = { "VariableName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusNode_GetVariable_DuplicationInfo, VariableName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::NewProp_VariableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::NewProp_VariableName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::NewProp_DataType_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_GetVariable.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::NewProp_DataType = { "DataType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusNode_GetVariable_DuplicationInfo, DataType), Z_Construct_UScriptStruct_FOptimusDataTypeRef, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::NewProp_DataType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::NewProp_DataType_MetaData)) }; // 2733180919
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_GetVariable.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusNode_GetVariable_DuplicationInfo, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::NewProp_VariableName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::NewProp_DataType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		&NewStructOps,
		"OptimusNode_GetVariable_DuplicationInfo",
		sizeof(FOptimusNode_GetVariable_DuplicationInfo),
		alignof(FOptimusNode_GetVariable_DuplicationInfo),
		Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusNode_GetVariable_DuplicationInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusNode_GetVariable_DuplicationInfo.InnerSingleton, Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusNode_GetVariable_DuplicationInfo.InnerSingleton;
	}
	void UOptimusNode_GetVariable::StaticRegisterNativesUOptimusNode_GetVariable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_GetVariable);
	UClass* Z_Construct_UClass_UOptimusNode_GetVariable_NoRegister()
	{
		return UOptimusNode_GetVariable::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusNode_GetVariable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariableDesc_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_VariableDesc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DuplicationInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DuplicationInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusNode_GetVariable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusNode,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_GetVariable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/OptimusNode_GetVariable.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_GetVariable.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_GetVariable_Statics::NewProp_VariableDesc_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_GetVariable.h" },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UOptimusNode_GetVariable_Statics::NewProp_VariableDesc = { "VariableDesc", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode_GetVariable, VariableDesc), Z_Construct_UClass_UOptimusVariableDescription_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_GetVariable_Statics::NewProp_VariableDesc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_GetVariable_Statics::NewProp_VariableDesc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_GetVariable_Statics::NewProp_DuplicationInfo_MetaData[] = {
		{ "Comment", "// Duplication data across graphs\n" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_GetVariable.h" },
		{ "ToolTip", "Duplication data across graphs" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusNode_GetVariable_Statics::NewProp_DuplicationInfo = { "DuplicationInfo", nullptr, (EPropertyFlags)0x0040000000200000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode_GetVariable, DuplicationInfo), Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo, METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_GetVariable_Statics::NewProp_DuplicationInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_GetVariable_Statics::NewProp_DuplicationInfo_MetaData)) }; // 2013054495
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNode_GetVariable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_GetVariable_Statics::NewProp_VariableDesc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_GetVariable_Statics::NewProp_DuplicationInfo,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusNode_GetVariable_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOptimusValueProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_GetVariable, IOptimusValueProvider), false },  // 2326769200
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusNode_GetVariable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_GetVariable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_GetVariable_Statics::ClassParams = {
		&UOptimusNode_GetVariable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusNode_GetVariable_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_GetVariable_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x010000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_GetVariable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_GetVariable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusNode_GetVariable()
	{
		if (!Z_Registration_Info_UClass_UOptimusNode_GetVariable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_GetVariable.OuterSingleton, Z_Construct_UClass_UOptimusNode_GetVariable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusNode_GetVariable.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_GetVariable>()
	{
		return UOptimusNode_GetVariable::StaticClass();
	}
	UOptimusNode_GetVariable::UOptimusNode_GetVariable() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_GetVariable);
	UOptimusNode_GetVariable::~UOptimusNode_GetVariable() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GetVariable_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GetVariable_h_Statics::ScriptStructInfo[] = {
		{ FOptimusNode_GetVariable_DuplicationInfo::StaticStruct, Z_Construct_UScriptStruct_FOptimusNode_GetVariable_DuplicationInfo_Statics::NewStructOps, TEXT("OptimusNode_GetVariable_DuplicationInfo"), &Z_Registration_Info_UScriptStruct_OptimusNode_GetVariable_DuplicationInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusNode_GetVariable_DuplicationInfo), 2013054495U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GetVariable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNode_GetVariable, UOptimusNode_GetVariable::StaticClass, TEXT("UOptimusNode_GetVariable"), &Z_Registration_Info_UClass_UOptimusNode_GetVariable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_GetVariable), 1147201562U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GetVariable_h_86064027(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GetVariable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GetVariable_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GetVariable_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_GetVariable_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
