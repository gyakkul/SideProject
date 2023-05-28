// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RigUnit_AnimNextInterfaceParameter.h"
#include "../Internal/AnimNextInterfaceExecuteContext.h"
#include "RigVMCore/RigVMExecuteContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_AnimNextInterfaceParameter() {}
// Cross Module References
	ANIMNEXTINTERFACE_API UClass* Z_Construct_UClass_UAnimNextInterface_NoRegister();
	ANIMNEXTINTERFACEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextInterfaceExecuteContext();
	ANIMNEXTINTERFACEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextInterfaceParameter();
	ANIMNEXTINTERFACEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_AnimNextInterface();
	ANIMNEXTINTERFACEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Bool();
	ANIMNEXTINTERFACEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Float();
	ANIMNEXTINTERFACEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Int();
	ANIMNEXTINTERFACEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNextInterfaceParameters1();
	ANIMNEXTINTERFACEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FAnimSequenceParameters();
	ANIMNEXTINTERFACEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface();
	ANIMNEXTINTERFACEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Float();
	ANIMNEXTINTERFACEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer();
	ANIMNEXTINTERFACEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBase();
	ANIMNEXTINTERFACEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter();
	ANIMNEXTINTERFACEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_AnimNextInterface();
	ANIMNEXTINTERFACEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Float();
	ANIMNEXTINTERFACEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FloatOperator();
	ANIMNEXTINTERFACEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PoseOperator();
	ANIMNEXTINTERFACEGRAPH_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TestFloatState();
	RIGVM_API UScriptStruct* Z_Construct_UScriptStruct_FRigVMExecuteContext();
	UPackage* Z_Construct_UPackage__Script_AnimNextInterfaceGraph();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_AnimNextInterfaceParameter>() == std::is_polymorphic<FRigUnit_AnimNextInterfaceBase>(), "USTRUCT FRigUnit_AnimNextInterfaceParameter cannot be polymorphic unless super FRigUnit_AnimNextInterfaceBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceParameter;
class UScriptStruct* FRigUnit_AnimNextInterfaceParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter, (UObject*)Z_Construct_UPackage__Script_AnimNextInterfaceGraph(), TEXT("RigUnit_AnimNextInterfaceParameter"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceParameter.OuterSingleton;
}
template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<FRigUnit_AnimNextInterfaceParameter>()
{
	return FRigUnit_AnimNextInterfaceParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameter_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Parameter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** Unit for reading parameters from context */" },
		{ "DisplayName", "Parameter" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Unit for reading parameters from context" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AnimNextInterfaceParameter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Statics::NewProp_Parameter_MetaData[] = {
		{ "Category", "Parameter" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Statics::NewProp_Parameter = { "Parameter", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AnimNextInterfaceParameter, Parameter), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Statics::NewProp_Parameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Statics::NewProp_Parameter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Statics::NewProp_Parameter,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraph,
		Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBase,
		&NewStructOps,
		"RigUnit_AnimNextInterfaceParameter",
		sizeof(FRigUnit_AnimNextInterfaceParameter),
		alignof(FRigUnit_AnimNextInterfaceParameter),
		Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceParameter.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceParameter.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_AnimNextInterfaceParameter_Float>() == std::is_polymorphic<FRigUnit_AnimNextInterfaceParameter>(), "USTRUCT FRigUnit_AnimNextInterfaceParameter_Float cannot be polymorphic unless super FRigUnit_AnimNextInterfaceParameter is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceParameter_Float;
class UScriptStruct* FRigUnit_AnimNextInterfaceParameter_Float::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceParameter_Float.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceParameter_Float.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Float, (UObject*)Z_Construct_UPackage__Script_AnimNextInterfaceGraph(), TEXT("RigUnit_AnimNextInterfaceParameter_Float"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_AnimNextInterfaceParameter_Float_Execute;
		Arguments_FRigUnit_AnimNextInterfaceParameter_Float_Execute.Emplace(TEXT("Result"), TEXT("float"));
		Arguments_FRigUnit_AnimNextInterfaceParameter_Float_Execute.Emplace(TEXT("Parameter"), TEXT("FName"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AnimNextInterfaceParameter_Float::Execute"), &FRigUnit_AnimNextInterfaceParameter_Float::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceParameter_Float.OuterSingleton, Arguments_FRigUnit_AnimNextInterfaceParameter_Float_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceParameter_Float.OuterSingleton;
}
template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<FRigUnit_AnimNextInterfaceParameter_Float>()
{
	return FRigUnit_AnimNextInterfaceParameter_Float::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Float_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Float_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** Unit for reading float parameter from context */" },
		{ "DisplayName", "Float Parameter" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Unit for reading float parameter from context" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Float_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AnimNextInterfaceParameter_Float>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Float_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Float_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AnimNextInterfaceParameter_Float, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Float_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Float_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Float_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Float_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Float_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraph,
		Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter,
		&NewStructOps,
		"RigUnit_AnimNextInterfaceParameter_Float",
		sizeof(FRigUnit_AnimNextInterfaceParameter_Float),
		alignof(FRigUnit_AnimNextInterfaceParameter_Float),
		Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Float_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Float_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Float_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Float_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Float()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceParameter_Float.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceParameter_Float.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Float_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceParameter_Float.InnerSingleton;
	}

void FRigUnit_AnimNextInterfaceParameter_Float::Execute()
{
	FAnimNextInterfaceExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_AnimNextInterfaceParameter_Float::Execute(const FAnimNextInterfaceExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Result,
		Parameter
	);
}


static_assert(std::is_polymorphic<FRigUnit_AnimNextInterfaceParameter_AnimNextInterface>() == std::is_polymorphic<FRigUnit_AnimNextInterfaceParameter>(), "USTRUCT FRigUnit_AnimNextInterfaceParameter_AnimNextInterface cannot be polymorphic unless super FRigUnit_AnimNextInterfaceParameter is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceParameter_AnimNextInterface;
class UScriptStruct* FRigUnit_AnimNextInterfaceParameter_AnimNextInterface::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceParameter_AnimNextInterface.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceParameter_AnimNextInterface.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_AnimNextInterface, (UObject*)Z_Construct_UPackage__Script_AnimNextInterfaceGraph(), TEXT("RigUnit_AnimNextInterfaceParameter_AnimNextInterface"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_AnimNextInterfaceParameter_AnimNextInterface_Execute;
		Arguments_FRigUnit_AnimNextInterfaceParameter_AnimNextInterface_Execute.Emplace(TEXT("Result"), TEXT("TScriptInterface<IAnimNextInterface>"));
		Arguments_FRigUnit_AnimNextInterfaceParameter_AnimNextInterface_Execute.Emplace(TEXT("Parameter"), TEXT("FName"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AnimNextInterfaceParameter_AnimNextInterface::Execute"), &FRigUnit_AnimNextInterfaceParameter_AnimNextInterface::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceParameter_AnimNextInterface.OuterSingleton, Arguments_FRigUnit_AnimNextInterfaceParameter_AnimNextInterface_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceParameter_AnimNextInterface.OuterSingleton;
}
template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<FRigUnit_AnimNextInterfaceParameter_AnimNextInterface>()
{
	return FRigUnit_AnimNextInterfaceParameter_AnimNextInterface::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_AnimNextInterface_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_AnimNextInterface_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** Unit for reading anim interface graph parameter from context */" },
		{ "DisplayName", "Anim Interface Parameter" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Unit for reading anim interface graph parameter from context" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_AnimNextInterface_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AnimNextInterfaceParameter_AnimNextInterface>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_AnimNextInterface_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_AnimNextInterface_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AnimNextInterfaceParameter_AnimNextInterface, Result), Z_Construct_UClass_UAnimNextInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_AnimNextInterface_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_AnimNextInterface_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_AnimNextInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_AnimNextInterface_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_AnimNextInterface_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraph,
		Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter,
		&NewStructOps,
		"RigUnit_AnimNextInterfaceParameter_AnimNextInterface",
		sizeof(FRigUnit_AnimNextInterfaceParameter_AnimNextInterface),
		alignof(FRigUnit_AnimNextInterfaceParameter_AnimNextInterface),
		Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_AnimNextInterface_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_AnimNextInterface_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_AnimNextInterface_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_AnimNextInterface_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_AnimNextInterface()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceParameter_AnimNextInterface.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceParameter_AnimNextInterface.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_AnimNextInterface_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceParameter_AnimNextInterface.InnerSingleton;
	}

void FRigUnit_AnimNextInterfaceParameter_AnimNextInterface::Execute()
{
	FAnimNextInterfaceExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_AnimNextInterfaceParameter_AnimNextInterface::Execute(const FAnimNextInterfaceExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Result,
		Parameter
	);
}

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter;
class UScriptStruct* FAnimNextInterfaceParameter::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter, (UObject*)Z_Construct_UPackage__Script_AnimNextInterfaceGraph(), TEXT("AnimNextInterfaceParameter"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter.OuterSingleton;
}
template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<FAnimNextInterfaceParameter>()
{
	return FAnimNextInterfaceParameter::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextInterfaceParameter>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Anim Interface" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNextInterfaceParameter, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Statics::NewProp_Name,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraph,
		nullptr,
		&NewStructOps,
		"AnimNextInterfaceParameter",
		sizeof(FAnimNextInterfaceParameter),
		alignof(FAnimNextInterfaceParameter),
		Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextInterfaceParameter()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_Float;
class UScriptStruct* FAnimNextInterfaceParameter_Float::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_Float.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_Float.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Float, (UObject*)Z_Construct_UPackage__Script_AnimNextInterfaceGraph(), TEXT("AnimNextInterfaceParameter_Float"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_Float.OuterSingleton;
}
template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<FAnimNextInterfaceParameter_Float>()
{
	return FAnimNextInterfaceParameter_Float::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Float_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Float_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Float_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextInterfaceParameter_Float>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Float_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Anim Interface" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Float_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNextInterfaceParameter_Float, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Float_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Float_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Float_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Anim Interface" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Float_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNextInterfaceParameter_Float, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Float_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Float_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Float_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Float_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Float_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Float_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraph,
		nullptr,
		&NewStructOps,
		"AnimNextInterfaceParameter_Float",
		sizeof(FAnimNextInterfaceParameter_Float),
		alignof(FAnimNextInterfaceParameter_Float),
		Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Float_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Float_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Float_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Float_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Float()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_Float.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_Float.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Float_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_Float.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_Int;
class UScriptStruct* FAnimNextInterfaceParameter_Int::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_Int.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_Int.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Int, (UObject*)Z_Construct_UPackage__Script_AnimNextInterfaceGraph(), TEXT("AnimNextInterfaceParameter_Int"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_Int.OuterSingleton;
}
template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<FAnimNextInterfaceParameter_Int>()
{
	return FAnimNextInterfaceParameter_Int::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Int_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Int_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Int_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextInterfaceParameter_Int>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Int_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Anim Interface" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Int_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNextInterfaceParameter_Int, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Int_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Int_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Int_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Anim Interface" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Int_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNextInterfaceParameter_Int, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Int_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Int_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Int_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Int_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Int_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Int_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraph,
		nullptr,
		&NewStructOps,
		"AnimNextInterfaceParameter_Int",
		sizeof(FAnimNextInterfaceParameter_Int),
		alignof(FAnimNextInterfaceParameter_Int),
		Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Int_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Int_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Int_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Int_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Int()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_Int.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_Int.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Int_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_Int.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_Bool;
class UScriptStruct* FAnimNextInterfaceParameter_Bool::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_Bool.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_Bool.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Bool, (UObject*)Z_Construct_UPackage__Script_AnimNextInterfaceGraph(), TEXT("AnimNextInterfaceParameter_Bool"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_Bool.OuterSingleton;
}
template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<FAnimNextInterfaceParameter_Bool>()
{
	return FAnimNextInterfaceParameter_Bool::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Bool_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValue_MetaData[];
#endif
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Bool_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Bool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextInterfaceParameter_Bool>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Bool_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Anim Interface" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Bool_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNextInterfaceParameter_Bool, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Bool_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Bool_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Bool_Statics::NewProp_bValue_MetaData[] = {
		{ "Category", "Anim Interface" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Bool_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((FAnimNextInterfaceParameter_Bool*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Bool_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNextInterfaceParameter_Bool), &Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Bool_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Bool_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Bool_Statics::NewProp_bValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Bool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Bool_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Bool_Statics::NewProp_bValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Bool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraph,
		nullptr,
		&NewStructOps,
		"AnimNextInterfaceParameter_Bool",
		sizeof(FAnimNextInterfaceParameter_Bool),
		alignof(FAnimNextInterfaceParameter_Bool),
		Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Bool_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Bool_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Bool_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Bool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Bool()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_Bool.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_Bool.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Bool_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_Bool.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameters1;
class UScriptStruct* FAnimNextInterfaceParameters1::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameters1.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameters1.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextInterfaceParameters1, (UObject*)Z_Construct_UPackage__Script_AnimNextInterfaceGraph(), TEXT("AnimNextInterfaceParameters1"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameters1.OuterSingleton;
}
template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<FAnimNextInterfaceParameters1>()
{
	return FAnimNextInterfaceParameters1::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextInterfaceParameters1_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Param0_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Param0;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatParam_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatParam;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextInterfaceParameters1_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextInterfaceParameters1_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextInterfaceParameters1>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextInterfaceParameters1_Statics::NewProp_Param0_MetaData[] = {
		{ "Category", "Anim Interface" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNextInterfaceParameters1_Statics::NewProp_Param0 = { "Param0", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNextInterfaceParameters1, Param0), Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Int, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNextInterfaceParameters1_Statics::NewProp_Param0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextInterfaceParameters1_Statics::NewProp_Param0_MetaData)) }; // 3299926553
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextInterfaceParameters1_Statics::NewProp_FloatParam_MetaData[] = {
		{ "Category", "Anim Interface" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNextInterfaceParameters1_Statics::NewProp_FloatParam = { "FloatParam", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNextInterfaceParameters1, FloatParam), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNextInterfaceParameters1_Statics::NewProp_FloatParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextInterfaceParameters1_Statics::NewProp_FloatParam_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNextInterfaceParameters1_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNextInterfaceParameters1_Statics::NewProp_Param0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNextInterfaceParameters1_Statics::NewProp_FloatParam,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextInterfaceParameters1_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraph,
		nullptr,
		&NewStructOps,
		"AnimNextInterfaceParameters1",
		sizeof(FAnimNextInterfaceParameters1),
		alignof(FAnimNextInterfaceParameters1),
		Z_Construct_UScriptStruct_FAnimNextInterfaceParameters1_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextInterfaceParameters1_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNextInterfaceParameters1_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextInterfaceParameters1_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextInterfaceParameters1()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameters1.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameters1.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextInterfaceParameters1_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameters1.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNextInterfaceParameter_AnimNextInterface>() == std::is_polymorphic<FAnimNextInterfaceParameter>(), "USTRUCT FAnimNextInterfaceParameter_AnimNextInterface cannot be polymorphic unless super FAnimNextInterfaceParameter is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_AnimNextInterface;
class UScriptStruct* FAnimNextInterfaceParameter_AnimNextInterface::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_AnimNextInterface.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_AnimNextInterface.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_AnimNextInterface, (UObject*)Z_Construct_UPackage__Script_AnimNextInterfaceGraph(), TEXT("AnimNextInterfaceParameter_AnimNextInterface"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_AnimNextInterface.OuterSingleton;
}
template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<FAnimNextInterfaceParameter_AnimNextInterface>()
{
	return FAnimNextInterfaceParameter_AnimNextInterface::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_AnimNextInterface_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_AnimNextInterface_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_AnimNextInterface_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNextInterfaceParameter_AnimNextInterface>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_AnimNextInterface_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Anim Interface" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_AnimNextInterface_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNextInterfaceParameter_AnimNextInterface, Value), Z_Construct_UClass_UAnimNextInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_AnimNextInterface_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_AnimNextInterface_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_AnimNextInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_AnimNextInterface_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_AnimNextInterface_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraph,
		Z_Construct_UScriptStruct_FAnimNextInterfaceParameter,
		&NewStructOps,
		"AnimNextInterfaceParameter_AnimNextInterface",
		sizeof(FAnimNextInterfaceParameter_AnimNextInterface),
		alignof(FAnimNextInterfaceParameter_AnimNextInterface),
		Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_AnimNextInterface_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_AnimNextInterface_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_AnimNextInterface_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_AnimNextInterface_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_AnimNextInterface()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_AnimNextInterface.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_AnimNextInterface.InnerSingleton, Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_AnimNextInterface_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_AnimNextInterface.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_AnimNextInterface>() == std::is_polymorphic<FRigUnit_AnimNextInterfaceBase>(), "USTRUCT FRigUnit_AnimNextInterface cannot be polymorphic unless super FRigUnit_AnimNextInterfaceBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterface;
class UScriptStruct* FRigUnit_AnimNextInterface::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterface.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterface.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface, (UObject*)Z_Construct_UPackage__Script_AnimNextInterfaceGraph(), TEXT("RigUnit_AnimNextInterface"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterface.OuterSingleton;
}
template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<FRigUnit_AnimNextInterface>()
{
	return FRigUnit_AnimNextInterface::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimNextInterface_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_AnimNextInterface;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Execution" },
		{ "Comment", "/** Base unit for calling anim interfaces from graphs */" },
		{ "DisplayName", "Anim Interface" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Base unit for calling anim interfaces from graphs" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AnimNextInterface>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Statics::NewProp_AnimNextInterface_MetaData[] = {
		{ "Category", "Anim Interface" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Statics::NewProp_AnimNextInterface = { "AnimNextInterface", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AnimNextInterface, AnimNextInterface), Z_Construct_UClass_UAnimNextInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Statics::NewProp_AnimNextInterface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Statics::NewProp_AnimNextInterface_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Statics::NewProp_AnimNextInterface,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraph,
		Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBase,
		&NewStructOps,
		"RigUnit_AnimNextInterface",
		sizeof(FRigUnit_AnimNextInterface),
		alignof(FRigUnit_AnimNextInterface),
		Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterface.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterface.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterface.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_AnimNextInterface_Float>() == std::is_polymorphic<FRigUnit_AnimNextInterface>(), "USTRUCT FRigUnit_AnimNextInterface_Float cannot be polymorphic unless super FRigUnit_AnimNextInterface is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterface_Float;
class UScriptStruct* FRigUnit_AnimNextInterface_Float::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterface_Float.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterface_Float.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Float, (UObject*)Z_Construct_UPackage__Script_AnimNextInterfaceGraph(), TEXT("RigUnit_AnimNextInterface_Float"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_AnimNextInterface_Float_Execute;
		Arguments_FRigUnit_AnimNextInterface_Float_Execute.Emplace(TEXT("Parameters"), TEXT("TArray<FAnimNextInterfaceParameter_AnimNextInterface>"));
		Arguments_FRigUnit_AnimNextInterface_Float_Execute.Emplace(TEXT("Result"), TEXT("float"));
		Arguments_FRigUnit_AnimNextInterface_Float_Execute.Emplace(TEXT("AnimNextInterface"), TEXT("TScriptInterface<IAnimNextInterface>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AnimNextInterface_Float::Execute"), &FRigUnit_AnimNextInterface_Float::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterface_Float.OuterSingleton, Arguments_FRigUnit_AnimNextInterface_Float_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterface_Float.OuterSingleton;
}
template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<FRigUnit_AnimNextInterface_Float>()
{
	return FRigUnit_AnimNextInterface_Float::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Float_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Parameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Float_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Parameters" },
		{ "Comment", "/** Unit for getting a float via an anim interface */" },
		{ "DisplayName", "Anim Interface Float" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Unit for getting a float via an anim interface" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Float_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AnimNextInterface_Float>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Float_Statics::NewProp_Parameters_Inner = { "Parameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_AnimNextInterface, METADATA_PARAMS(nullptr, 0) }; // 2417713356
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Float_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "Anim Interface" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Float_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AnimNextInterface_Float, Parameters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Float_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Float_Statics::NewProp_Parameters_MetaData)) }; // 2417713356
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Float_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Result" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Float_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AnimNextInterface_Float, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Float_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Float_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Float_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Float_Statics::NewProp_Parameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Float_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Float_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Float_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraph,
		Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface,
		&NewStructOps,
		"RigUnit_AnimNextInterface_Float",
		sizeof(FRigUnit_AnimNextInterface_Float),
		alignof(FRigUnit_AnimNextInterface_Float),
		Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Float_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Float_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Float_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Float_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Float()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterface_Float.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterface_Float.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Float_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterface_Float.InnerSingleton;
	}

void FRigUnit_AnimNextInterface_Float::Execute()
{
	FAnimNextInterfaceExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_AnimNextInterface_Float::Execute(const FAnimNextInterfaceExecuteContext& InExecuteContext)
{
	TArrayView<const FAnimNextInterfaceParameter_AnimNextInterface> Parameters_0_Array(Parameters);
	
	StaticExecute(
		InExecuteContext,
		Parameters_0_Array,
		Result,
		AnimNextInterface
	);
}


static_assert(std::is_polymorphic<FRigUnit_FloatOperator>() == std::is_polymorphic<FRigUnit_AnimNextInterfaceBase>(), "USTRUCT FRigUnit_FloatOperator cannot be polymorphic unless super FRigUnit_AnimNextInterfaceBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_FloatOperator;
class UScriptStruct* FRigUnit_FloatOperator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_FloatOperator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_FloatOperator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_FloatOperator, (UObject*)Z_Construct_UPackage__Script_AnimNextInterfaceGraph(), TEXT("RigUnit_FloatOperator"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_FloatOperator_Execute;
		Arguments_FRigUnit_FloatOperator_Execute.Emplace(TEXT("Operator"), TEXT("TScriptInterface<IAnimNextInterface>"));
		Arguments_FRigUnit_FloatOperator_Execute.Emplace(TEXT("ParamA"), TEXT("float"));
		Arguments_FRigUnit_FloatOperator_Execute.Emplace(TEXT("ParamB"), TEXT("float"));
		Arguments_FRigUnit_FloatOperator_Execute.Emplace(TEXT("Result"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_FloatOperator::Execute"), &FRigUnit_FloatOperator::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_FloatOperator.OuterSingleton, Arguments_FRigUnit_FloatOperator_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_FloatOperator.OuterSingleton;
}
template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<FRigUnit_FloatOperator>()
{
	return FRigUnit_FloatOperator::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Operator;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamA_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParamA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamB_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParamB;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Operators" },
		{ "Comment", "/** Unit for getting a pose via an anim interface */" },
		{ "DisplayName", "Float Operator" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Unit for getting a pose via an anim interface" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_FloatOperator>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::NewProp_Operator_MetaData[] = {
		{ "Category", "Pose Interface" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FloatOperator, Operator), Z_Construct_UClass_UAnimNextInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::NewProp_Operator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::NewProp_Operator_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::NewProp_ParamA_MetaData[] = {
		{ "Category", "Pose Interface" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::NewProp_ParamA = { "ParamA", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FloatOperator, ParamA), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::NewProp_ParamA_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::NewProp_ParamA_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::NewProp_ParamB_MetaData[] = {
		{ "Category", "Pose Interface" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::NewProp_ParamB = { "ParamB", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FloatOperator, ParamB), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::NewProp_ParamB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::NewProp_ParamB_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "BeginExecution" },
		{ "DisplayName", "Result" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0020080000002015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_FloatOperator, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::NewProp_Operator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::NewProp_ParamA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::NewProp_ParamB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraph,
		Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBase,
		&NewStructOps,
		"RigUnit_FloatOperator",
		sizeof(FRigUnit_FloatOperator),
		alignof(FRigUnit_FloatOperator),
		Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_FloatOperator()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_FloatOperator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_FloatOperator.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_FloatOperator.InnerSingleton;
	}

void FRigUnit_FloatOperator::Execute()
{
	FAnimNextInterfaceExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_FloatOperator::Execute(const FAnimNextInterfaceExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Operator,
		ParamA,
		ParamB,
		Result
	);
}


static_assert(std::is_polymorphic<FRigUnit_PoseOperator>() == std::is_polymorphic<FRigUnit_AnimNextInterfaceBase>(), "USTRUCT FRigUnit_PoseOperator cannot be polymorphic unless super FRigUnit_AnimNextInterfaceBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_PoseOperator;
class UScriptStruct* FRigUnit_PoseOperator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_PoseOperator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_PoseOperator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_PoseOperator, (UObject*)Z_Construct_UPackage__Script_AnimNextInterfaceGraph(), TEXT("RigUnit_PoseOperator"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_PoseOperator_Execute;
		Arguments_FRigUnit_PoseOperator_Execute.Emplace(TEXT("Operator"), TEXT("TScriptInterface<IAnimNextInterface>"));
		Arguments_FRigUnit_PoseOperator_Execute.Emplace(TEXT("InputPoses"), TEXT("TArray<FRigVMExecuteContext>"));
		Arguments_FRigUnit_PoseOperator_Execute.Emplace(TEXT("Parameters"), TEXT("FAnimNextInterfaceParameters1"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_PoseOperator::Execute"), &FRigUnit_PoseOperator::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_PoseOperator.OuterSingleton, Arguments_FRigUnit_PoseOperator_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_PoseOperator.OuterSingleton;
}
template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<FRigUnit_PoseOperator>()
{
	return FRigUnit_PoseOperator::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Operator;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputPoses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPoses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputPoses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Operators" },
		{ "Comment", "/** Unit for getting a pose via an anim interface */" },
		{ "DisplayName", "Pose Operator" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Unit for getting a pose via an anim interface" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_PoseOperator>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::NewProp_Operator_MetaData[] = {
		{ "Category", "Pose Interface" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseOperator, Operator), Z_Construct_UClass_UAnimNextInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::NewProp_Operator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::NewProp_Operator_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::NewProp_InputPoses_Inner = { "InputPoses", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FRigVMExecuteContext, METADATA_PARAMS(nullptr, 0) }; // 322465941
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::NewProp_InputPoses_MetaData[] = {
		{ "Category", "Pose Interface" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::NewProp_InputPoses = { "InputPoses", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseOperator, InputPoses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::NewProp_InputPoses_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::NewProp_InputPoses_MetaData)) }; // 322465941
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "Pose Interface" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseOperator, Parameters), Z_Construct_UScriptStruct_FAnimNextInterfaceParameters1, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::NewProp_Parameters_MetaData)) }; // 1252901769
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "BeginExecution" },
		{ "DisplayName", "Result" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0020080000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_PoseOperator, Result), Z_Construct_UScriptStruct_FAnimNextInterfaceExecuteContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::NewProp_Result_MetaData)) }; // 1836530780
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::NewProp_Operator,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::NewProp_InputPoses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::NewProp_InputPoses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraph,
		Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBase,
		&NewStructOps,
		"RigUnit_PoseOperator",
		sizeof(FRigUnit_PoseOperator),
		alignof(FRigUnit_PoseOperator),
		Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_PoseOperator()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_PoseOperator.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_PoseOperator.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_PoseOperator.InnerSingleton;
	}

void FRigUnit_PoseOperator::Execute()
{
	FAnimNextInterfaceExecuteContext& TemporaryExecuteContext = Result;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_PoseOperator::Execute(FAnimNextInterfaceExecuteContext& InExecuteContext)
{
	TArrayView<const FRigVMExecuteContext> InputPoses_1_Array(InputPoses);
	
	StaticExecute(
		InExecuteContext,
		Operator,
		InputPoses_1_Array,
		Parameters
	);
}

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimSequenceParameters;
class UScriptStruct* FAnimSequenceParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimSequenceParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimSequenceParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimSequenceParameters, (UObject*)Z_Construct_UPackage__Script_AnimNextInterfaceGraph(), TEXT("AnimSequenceParameters"));
	}
	return Z_Registration_Info_UScriptStruct_AnimSequenceParameters.OuterSingleton;
}
template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<FAnimSequenceParameters>()
{
	return FAnimSequenceParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoop_MetaData[];
#endif
		static void NewProp_bLoop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoop;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimSequenceParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Anim Sequence" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimSequenceParameters, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_StartPosition_MetaData[] = {
		{ "Category", "Anim Sequence" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimSequenceParameters, StartPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_StartPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_bLoop_MetaData[] = {
		{ "Category", "Anim Sequence" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_bLoop_SetBit(void* Obj)
	{
		((FAnimSequenceParameters*)Obj)->bLoop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_bLoop = { "bLoop", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimSequenceParameters), &Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_bLoop_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_bLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_bLoop_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_StartPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewProp_bLoop,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraph,
		nullptr,
		&NewStructOps,
		"AnimSequenceParameters",
		sizeof(FAnimSequenceParameters),
		alignof(FAnimSequenceParameters),
		Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimSequenceParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimSequenceParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimSequenceParameters.InnerSingleton, Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimSequenceParameters.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_AnimNextInterface_SequencePlayer>() == std::is_polymorphic<FRigUnit_AnimNextInterfaceBase>(), "USTRUCT FRigUnit_AnimNextInterface_SequencePlayer cannot be polymorphic unless super FRigUnit_AnimNextInterfaceBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterface_SequencePlayer;
class UScriptStruct* FRigUnit_AnimNextInterface_SequencePlayer::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterface_SequencePlayer.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterface_SequencePlayer.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer, (UObject*)Z_Construct_UPackage__Script_AnimNextInterfaceGraph(), TEXT("RigUnit_AnimNextInterface_SequencePlayer"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_AnimNextInterface_SequencePlayer_Execute;
		Arguments_FRigUnit_AnimNextInterface_SequencePlayer_Execute.Emplace(TEXT("Parameters"), TEXT("FAnimSequenceParameters"));
		Arguments_FRigUnit_AnimNextInterface_SequencePlayer_Execute.Emplace(TEXT("Sequence"), TEXT("TScriptInterface<IAnimNextInterface>"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_AnimNextInterface_SequencePlayer::Execute"), &FRigUnit_AnimNextInterface_SequencePlayer::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterface_SequencePlayer.OuterSingleton, Arguments_FRigUnit_AnimNextInterface_SequencePlayer_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterface_SequencePlayer.OuterSingleton;
}
template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<FRigUnit_AnimNextInterface_SequencePlayer>()
{
	return FRigUnit_AnimNextInterface_SequencePlayer::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequence_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Sequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Unit for getting a pose via an anim interface */" },
		{ "DisplayName", "Anim Sequence" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Unit for getting a pose via an anim interface" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_AnimNextInterface_SequencePlayer>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer_Statics::NewProp_Parameters_MetaData[] = {
		{ "Category", "Anim Interface" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AnimNextInterface_SequencePlayer, Parameters), Z_Construct_UScriptStruct_FAnimSequenceParameters, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer_Statics::NewProp_Parameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer_Statics::NewProp_Parameters_MetaData)) }; // 3386618242
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer_Statics::NewProp_Sequence_MetaData[] = {
		{ "Category", "Anim Interface" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer_Statics::NewProp_Sequence = { "Sequence", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AnimNextInterface_SequencePlayer, Sequence), Z_Construct_UClass_UAnimNextInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer_Statics::NewProp_Sequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer_Statics::NewProp_Sequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "BeginExecution" },
		{ "DisplayName", "Result" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0020080000002015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_AnimNextInterface_SequencePlayer, Result), Z_Construct_UScriptStruct_FAnimNextInterfaceExecuteContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer_Statics::NewProp_Result_MetaData)) }; // 1836530780
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer_Statics::NewProp_Parameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer_Statics::NewProp_Sequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraph,
		Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBase,
		&NewStructOps,
		"RigUnit_AnimNextInterface_SequencePlayer",
		sizeof(FRigUnit_AnimNextInterface_SequencePlayer),
		alignof(FRigUnit_AnimNextInterface_SequencePlayer),
		Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterface_SequencePlayer.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterface_SequencePlayer.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterface_SequencePlayer.InnerSingleton;
	}

void FRigUnit_AnimNextInterface_SequencePlayer::Execute()
{
	FAnimNextInterfaceExecuteContext& TemporaryExecuteContext = Result;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_AnimNextInterface_SequencePlayer::Execute(FAnimNextInterfaceExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Parameters,
		Sequence
	);
}


static_assert(std::is_polymorphic<FRigUnit_TestFloatState>() == std::is_polymorphic<FRigUnit_AnimNextInterfaceBase>(), "USTRUCT FRigUnit_TestFloatState cannot be polymorphic unless super FRigUnit_AnimNextInterfaceBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_TestFloatState;
class UScriptStruct* FRigUnit_TestFloatState::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_TestFloatState.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_TestFloatState.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_TestFloatState, (UObject*)Z_Construct_UPackage__Script_AnimNextInterfaceGraph(), TEXT("RigUnit_TestFloatState"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_TestFloatState_Execute;
		Arguments_FRigUnit_TestFloatState_Execute.Emplace(TEXT("TargetValue"), TEXT("float"));
		Arguments_FRigUnit_TestFloatState_Execute.Emplace(TEXT("TargetValueRate"), TEXT("float"));
		Arguments_FRigUnit_TestFloatState_Execute.Emplace(TEXT("SmoothingTime"), TEXT("float"));
		Arguments_FRigUnit_TestFloatState_Execute.Emplace(TEXT("DampingRatio"), TEXT("float"));
		Arguments_FRigUnit_TestFloatState_Execute.Emplace(TEXT("Result"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_TestFloatState::Execute"), &FRigUnit_TestFloatState::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_TestFloatState.OuterSingleton, Arguments_FRigUnit_TestFloatState_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_TestFloatState.OuterSingleton;
}
template<> ANIMNEXTINTERFACEGRAPH_API UScriptStruct* StaticStruct<FRigUnit_TestFloatState>()
{
	return FRigUnit_TestFloatState::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetValueRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TargetValueRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmoothingTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothingTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DampingRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DampingRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** Unit for getting a pose via an anim interface */" },
		{ "DisplayName", "Test Float State - Spring Damper Smoothing" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
		{ "NodeColor", "1 1 1" },
		{ "TitleColor", "1 0 0" },
		{ "ToolTip", "Unit for getting a pose via an anim interface" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_TestFloatState>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::NewProp_TargetValue_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::NewProp_TargetValue = { "TargetValue", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TestFloatState, TargetValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::NewProp_TargetValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::NewProp_TargetValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::NewProp_TargetValueRate_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::NewProp_TargetValueRate = { "TargetValueRate", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TestFloatState, TargetValueRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::NewProp_TargetValueRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::NewProp_TargetValueRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::NewProp_SmoothingTime_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::NewProp_SmoothingTime = { "SmoothingTime", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TestFloatState, SmoothingTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::NewProp_SmoothingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::NewProp_SmoothingTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::NewProp_DampingRatio_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::NewProp_DampingRatio = { "DampingRatio", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TestFloatState, DampingRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::NewProp_DampingRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::NewProp_DampingRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Parameters" },
		{ "ModuleRelativePath", "Private/RigUnit_AnimNextInterfaceParameter.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_TestFloatState, Result), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::NewProp_Result_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::NewProp_TargetValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::NewProp_TargetValueRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::NewProp_SmoothingTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::NewProp_DampingRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::NewProp_Result,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraph,
		Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceBase,
		&NewStructOps,
		"RigUnit_TestFloatState",
		sizeof(FRigUnit_TestFloatState),
		alignof(FRigUnit_TestFloatState),
		Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_TestFloatState()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_TestFloatState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_TestFloatState.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_TestFloatState.InnerSingleton;
	}

void FRigUnit_TestFloatState::Execute()
{
	FAnimNextInterfaceExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_TestFloatState::Execute(const FAnimNextInterfaceExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		TargetValue,
		TargetValueRate,
		SmoothingTime,
		DampingRatio,
		Result
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_RigUnit_AnimNextInterfaceParameter_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_RigUnit_AnimNextInterfaceParameter_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_AnimNextInterfaceParameter::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Statics::NewStructOps, TEXT("RigUnit_AnimNextInterfaceParameter"), &Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AnimNextInterfaceParameter), 1292312440U) },
		{ FRigUnit_AnimNextInterfaceParameter_Float::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_Float_Statics::NewStructOps, TEXT("RigUnit_AnimNextInterfaceParameter_Float"), &Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceParameter_Float, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AnimNextInterfaceParameter_Float), 3545214400U) },
		{ FRigUnit_AnimNextInterfaceParameter_AnimNextInterface::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AnimNextInterfaceParameter_AnimNextInterface_Statics::NewStructOps, TEXT("RigUnit_AnimNextInterfaceParameter_AnimNextInterface"), &Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterfaceParameter_AnimNextInterface, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AnimNextInterfaceParameter_AnimNextInterface), 3012205086U) },
		{ FAnimNextInterfaceParameter::StaticStruct, Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Statics::NewStructOps, TEXT("AnimNextInterfaceParameter"), &Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextInterfaceParameter), 3910463511U) },
		{ FAnimNextInterfaceParameter_Float::StaticStruct, Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Float_Statics::NewStructOps, TEXT("AnimNextInterfaceParameter_Float"), &Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_Float, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextInterfaceParameter_Float), 3545902785U) },
		{ FAnimNextInterfaceParameter_Int::StaticStruct, Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Int_Statics::NewStructOps, TEXT("AnimNextInterfaceParameter_Int"), &Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_Int, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextInterfaceParameter_Int), 3299926553U) },
		{ FAnimNextInterfaceParameter_Bool::StaticStruct, Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_Bool_Statics::NewStructOps, TEXT("AnimNextInterfaceParameter_Bool"), &Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_Bool, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextInterfaceParameter_Bool), 3399772003U) },
		{ FAnimNextInterfaceParameters1::StaticStruct, Z_Construct_UScriptStruct_FAnimNextInterfaceParameters1_Statics::NewStructOps, TEXT("AnimNextInterfaceParameters1"), &Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameters1, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextInterfaceParameters1), 1252901769U) },
		{ FAnimNextInterfaceParameter_AnimNextInterface::StaticStruct, Z_Construct_UScriptStruct_FAnimNextInterfaceParameter_AnimNextInterface_Statics::NewStructOps, TEXT("AnimNextInterfaceParameter_AnimNextInterface"), &Z_Registration_Info_UScriptStruct_AnimNextInterfaceParameter_AnimNextInterface, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNextInterfaceParameter_AnimNextInterface), 2417713356U) },
		{ FRigUnit_AnimNextInterface::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Statics::NewStructOps, TEXT("RigUnit_AnimNextInterface"), &Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterface, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AnimNextInterface), 4160284771U) },
		{ FRigUnit_AnimNextInterface_Float::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_Float_Statics::NewStructOps, TEXT("RigUnit_AnimNextInterface_Float"), &Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterface_Float, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AnimNextInterface_Float), 1359901554U) },
		{ FRigUnit_FloatOperator::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_FloatOperator_Statics::NewStructOps, TEXT("RigUnit_FloatOperator"), &Z_Registration_Info_UScriptStruct_RigUnit_FloatOperator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_FloatOperator), 1147134102U) },
		{ FRigUnit_PoseOperator::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_PoseOperator_Statics::NewStructOps, TEXT("RigUnit_PoseOperator"), &Z_Registration_Info_UScriptStruct_RigUnit_PoseOperator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_PoseOperator), 1480281610U) },
		{ FAnimSequenceParameters::StaticStruct, Z_Construct_UScriptStruct_FAnimSequenceParameters_Statics::NewStructOps, TEXT("AnimSequenceParameters"), &Z_Registration_Info_UScriptStruct_AnimSequenceParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimSequenceParameters), 3386618242U) },
		{ FRigUnit_AnimNextInterface_SequencePlayer::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_AnimNextInterface_SequencePlayer_Statics::NewStructOps, TEXT("RigUnit_AnimNextInterface_SequencePlayer"), &Z_Registration_Info_UScriptStruct_RigUnit_AnimNextInterface_SequencePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_AnimNextInterface_SequencePlayer), 33370866U) },
		{ FRigUnit_TestFloatState::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_TestFloatState_Statics::NewStructOps, TEXT("RigUnit_TestFloatState"), &Z_Registration_Info_UScriptStruct_RigUnit_TestFloatState, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_TestFloatState), 3624132197U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_RigUnit_AnimNextInterfaceParameter_h_3017473547(TEXT("/Script/AnimNextInterfaceGraph"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_RigUnit_AnimNextInterfaceParameter_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_RigUnit_AnimNextInterfaceParameter_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
