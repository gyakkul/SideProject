// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LiveLinkRigUnits.h"
#include "Roles/LiveLinkAnimationBlueprintStructs.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkRigUnits() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	LIVELINKCONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_LiveLinkBase();
	LIVELINKCONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation();
	LIVELINKCONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform();
	LIVELINKCONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName();
	LIVELINKCONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName();
	LIVELINKINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSubjectFrameHandle();
	RIGVM_API UEnum* Z_Construct_UEnum_RigVM_ERigVMTransformSpace();
	UPackage* Z_Construct_UPackage__Script_LiveLinkControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_LiveLinkBase>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_LiveLinkBase cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkBase;
class UScriptStruct* FRigUnit_LiveLinkBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_LiveLinkBase, (UObject*)Z_Construct_UPackage__Script_LiveLinkControlRig(), TEXT("RigUnit_LiveLinkBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkBase.OuterSingleton;
}
template<> LIVELINKCONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_LiveLinkBase>()
{
	return FRigUnit_LiveLinkBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_LiveLinkBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_LiveLinkBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "ModuleRelativePath", "Public/LiveLinkRigUnits.h" },
		{ "NodeColor", "0.3 0.1 0.1" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_LiveLinkBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_LiveLinkBase>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_LiveLinkBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_LiveLinkBase",
		sizeof(FRigUnit_LiveLinkBase),
		alignof(FRigUnit_LiveLinkBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_LiveLinkBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_LiveLinkBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_LiveLinkBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_LiveLinkBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_LiveLinkEvaluteFrameAnimation>() == std::is_polymorphic<FRigUnit_LiveLinkBase>(), "USTRUCT FRigUnit_LiveLinkEvaluteFrameAnimation cannot be polymorphic unless super FRigUnit_LiveLinkBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkEvaluteFrameAnimation;
class UScriptStruct* FRigUnit_LiveLinkEvaluteFrameAnimation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkEvaluteFrameAnimation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkEvaluteFrameAnimation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation, (UObject*)Z_Construct_UPackage__Script_LiveLinkControlRig(), TEXT("RigUnit_LiveLinkEvaluteFrameAnimation"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_LiveLinkEvaluteFrameAnimation_Execute;
		Arguments_FRigUnit_LiveLinkEvaluteFrameAnimation_Execute.Emplace(TEXT("SubjectName"), TEXT("FName"));
		Arguments_FRigUnit_LiveLinkEvaluteFrameAnimation_Execute.Emplace(TEXT("bDrawDebug"), TEXT("bool"));
		Arguments_FRigUnit_LiveLinkEvaluteFrameAnimation_Execute.Emplace(TEXT("DebugColor"), TEXT("FLinearColor"));
		Arguments_FRigUnit_LiveLinkEvaluteFrameAnimation_Execute.Emplace(TEXT("DebugDrawOffset"), TEXT("FTransform"));
		Arguments_FRigUnit_LiveLinkEvaluteFrameAnimation_Execute.Emplace(TEXT("SubjectFrame"), TEXT("FSubjectFrameHandle"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_LiveLinkEvaluteFrameAnimation::Execute"), &FRigUnit_LiveLinkEvaluteFrameAnimation::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkEvaluteFrameAnimation.OuterSingleton, Arguments_FRigUnit_LiveLinkEvaluteFrameAnimation_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkEvaluteFrameAnimation.OuterSingleton;
}
template<> LIVELINKCONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_LiveLinkEvaluteFrameAnimation>()
{
	return FRigUnit_LiveLinkEvaluteFrameAnimation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugDrawOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubjectFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Live Link" },
		{ "Comment", "/**\n * Evaluate current Live Link Animation associated with supplied subject\n */" },
		{ "DisplayName", "Evaluate Live Link Frame (Animation)" },
		{ "ModuleRelativePath", "Public/LiveLinkRigUnits.h" },
		{ "ToolTip", "Evaluate current Live Link Animation associated with supplied subject" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_LiveLinkEvaluteFrameAnimation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewProp_SubjectName_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/LiveLinkRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_LiveLinkEvaluteFrameAnimation, SubjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewProp_SubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewProp_SubjectName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/LiveLinkRigUnits.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((FRigUnit_LiveLinkEvaluteFrameAnimation*)Obj)->bDrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_LiveLinkEvaluteFrameAnimation), &Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewProp_bDrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewProp_bDrawDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewProp_DebugColor_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/LiveLinkRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_LiveLinkEvaluteFrameAnimation, DebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewProp_DebugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewProp_DebugColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewProp_DebugDrawOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/LiveLinkRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewProp_DebugDrawOffset = { "DebugDrawOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_LiveLinkEvaluteFrameAnimation, DebugDrawOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewProp_DebugDrawOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewProp_DebugDrawOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewProp_SubjectFrame_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/LiveLinkRigUnits.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewProp_SubjectFrame = { "SubjectFrame", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_LiveLinkEvaluteFrameAnimation, SubjectFrame), Z_Construct_UScriptStruct_FSubjectFrameHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewProp_SubjectFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewProp_SubjectFrame_MetaData)) }; // 872459058
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewProp_SubjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewProp_bDrawDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewProp_DebugColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewProp_DebugDrawOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewProp_SubjectFrame,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkControlRig,
		Z_Construct_UScriptStruct_FRigUnit_LiveLinkBase,
		&NewStructOps,
		"RigUnit_LiveLinkEvaluteFrameAnimation",
		sizeof(FRigUnit_LiveLinkEvaluteFrameAnimation),
		alignof(FRigUnit_LiveLinkEvaluteFrameAnimation),
		Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkEvaluteFrameAnimation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkEvaluteFrameAnimation.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkEvaluteFrameAnimation.InnerSingleton;
	}

void FRigUnit_LiveLinkEvaluteFrameAnimation::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_LiveLinkEvaluteFrameAnimation::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		SubjectName,
		bDrawDebug,
		DebugColor,
		DebugDrawOffset,
		SubjectFrame
	);
}


static_assert(std::is_polymorphic<FRigUnit_LiveLinkGetTransformByName>() == std::is_polymorphic<FRigUnit_LiveLinkBase>(), "USTRUCT FRigUnit_LiveLinkGetTransformByName cannot be polymorphic unless super FRigUnit_LiveLinkBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkGetTransformByName;
class UScriptStruct* FRigUnit_LiveLinkGetTransformByName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkGetTransformByName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkGetTransformByName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName, (UObject*)Z_Construct_UPackage__Script_LiveLinkControlRig(), TEXT("RigUnit_LiveLinkGetTransformByName"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_LiveLinkGetTransformByName_Execute;
		Arguments_FRigUnit_LiveLinkGetTransformByName_Execute.Emplace(TEXT("SubjectFrame"), TEXT("FSubjectFrameHandle"));
		Arguments_FRigUnit_LiveLinkGetTransformByName_Execute.Emplace(TEXT("TransformName"), TEXT("FName"));
		Arguments_FRigUnit_LiveLinkGetTransformByName_Execute.Emplace(TEXT("Space"), TEXT("ERigVMTransformSpace"));
		Arguments_FRigUnit_LiveLinkGetTransformByName_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_LiveLinkGetTransformByName::Execute"), &FRigUnit_LiveLinkGetTransformByName::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkGetTransformByName.OuterSingleton, Arguments_FRigUnit_LiveLinkGetTransformByName_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkGetTransformByName.OuterSingleton;
}
template<> LIVELINKCONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_LiveLinkGetTransformByName>()
{
	return FRigUnit_LiveLinkGetTransformByName::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubjectFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TransformName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Space_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Space;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Live Link" },
		{ "Comment", "/**\n * Get the transform value with supplied subject frame\n */" },
		{ "DisplayName", "Get Transform By Name" },
		{ "ModuleRelativePath", "Public/LiveLinkRigUnits.h" },
		{ "ToolTip", "Get the transform value with supplied subject frame" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_LiveLinkGetTransformByName>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::NewProp_SubjectFrame_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/LiveLinkRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::NewProp_SubjectFrame = { "SubjectFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_LiveLinkGetTransformByName, SubjectFrame), Z_Construct_UScriptStruct_FSubjectFrameHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::NewProp_SubjectFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::NewProp_SubjectFrame_MetaData)) }; // 872459058
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::NewProp_TransformName_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/LiveLinkRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::NewProp_TransformName = { "TransformName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_LiveLinkGetTransformByName, TransformName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::NewProp_TransformName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::NewProp_TransformName_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::NewProp_Space_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/LiveLinkRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_LiveLinkGetTransformByName, Space), Z_Construct_UEnum_RigVM_ERigVMTransformSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::NewProp_Space_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::NewProp_Space_MetaData)) }; // 1140043897
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/LiveLinkRigUnits.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_LiveLinkGetTransformByName, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::NewProp_SubjectFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::NewProp_TransformName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::NewProp_Space_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::NewProp_Space,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkControlRig,
		Z_Construct_UScriptStruct_FRigUnit_LiveLinkBase,
		&NewStructOps,
		"RigUnit_LiveLinkGetTransformByName",
		sizeof(FRigUnit_LiveLinkGetTransformByName),
		alignof(FRigUnit_LiveLinkGetTransformByName),
		Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkGetTransformByName.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkGetTransformByName.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkGetTransformByName.InnerSingleton;
	}

void FRigUnit_LiveLinkGetTransformByName::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_LiveLinkGetTransformByName::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		SubjectFrame,
		TransformName,
		Space,
		Transform
	);
}


static_assert(std::is_polymorphic<FRigUnit_LiveLinkGetParameterValueByName>() == std::is_polymorphic<FRigUnit_LiveLinkBase>(), "USTRUCT FRigUnit_LiveLinkGetParameterValueByName cannot be polymorphic unless super FRigUnit_LiveLinkBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkGetParameterValueByName;
class UScriptStruct* FRigUnit_LiveLinkGetParameterValueByName::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkGetParameterValueByName.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkGetParameterValueByName.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName, (UObject*)Z_Construct_UPackage__Script_LiveLinkControlRig(), TEXT("RigUnit_LiveLinkGetParameterValueByName"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_LiveLinkGetParameterValueByName_Execute;
		Arguments_FRigUnit_LiveLinkGetParameterValueByName_Execute.Emplace(TEXT("SubjectFrame"), TEXT("FSubjectFrameHandle"));
		Arguments_FRigUnit_LiveLinkGetParameterValueByName_Execute.Emplace(TEXT("ParameterName"), TEXT("FName"));
		Arguments_FRigUnit_LiveLinkGetParameterValueByName_Execute.Emplace(TEXT("Value"), TEXT("float"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_LiveLinkGetParameterValueByName::Execute"), &FRigUnit_LiveLinkGetParameterValueByName::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkGetParameterValueByName.OuterSingleton, Arguments_FRigUnit_LiveLinkGetParameterValueByName_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkGetParameterValueByName.OuterSingleton;
}
template<> LIVELINKCONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_LiveLinkGetParameterValueByName>()
{
	return FRigUnit_LiveLinkGetParameterValueByName::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectFrame_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubjectFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Live Link" },
		{ "Comment", "/**\n * Get the parameter value with supplied subject frame \n */" },
		{ "DisplayName", "Get Parameter Value By Name" },
		{ "ModuleRelativePath", "Public/LiveLinkRigUnits.h" },
		{ "ToolTip", "Get the parameter value with supplied subject frame" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_LiveLinkGetParameterValueByName>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics::NewProp_SubjectFrame_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/LiveLinkRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics::NewProp_SubjectFrame = { "SubjectFrame", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_LiveLinkGetParameterValueByName, SubjectFrame), Z_Construct_UScriptStruct_FSubjectFrameHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics::NewProp_SubjectFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics::NewProp_SubjectFrame_MetaData)) }; // 872459058
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics::NewProp_ParameterName_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/LiveLinkRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_LiveLinkGetParameterValueByName, ParameterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/LiveLinkRigUnits.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_LiveLinkGetParameterValueByName, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics::NewProp_SubjectFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkControlRig,
		Z_Construct_UScriptStruct_FRigUnit_LiveLinkBase,
		&NewStructOps,
		"RigUnit_LiveLinkGetParameterValueByName",
		sizeof(FRigUnit_LiveLinkGetParameterValueByName),
		alignof(FRigUnit_LiveLinkGetParameterValueByName),
		Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkGetParameterValueByName.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkGetParameterValueByName.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkGetParameterValueByName.InnerSingleton;
	}

void FRigUnit_LiveLinkGetParameterValueByName::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_LiveLinkGetParameterValueByName::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		SubjectFrame,
		ParameterName,
		Value
	);
}


static_assert(std::is_polymorphic<FRigUnit_LiveLinkEvaluteFrameTransform>() == std::is_polymorphic<FRigUnit_LiveLinkBase>(), "USTRUCT FRigUnit_LiveLinkEvaluteFrameTransform cannot be polymorphic unless super FRigUnit_LiveLinkBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkEvaluteFrameTransform;
class UScriptStruct* FRigUnit_LiveLinkEvaluteFrameTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkEvaluteFrameTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkEvaluteFrameTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform, (UObject*)Z_Construct_UPackage__Script_LiveLinkControlRig(), TEXT("RigUnit_LiveLinkEvaluteFrameTransform"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_LiveLinkEvaluteFrameTransform_Execute;
		Arguments_FRigUnit_LiveLinkEvaluteFrameTransform_Execute.Emplace(TEXT("SubjectName"), TEXT("FName"));
		Arguments_FRigUnit_LiveLinkEvaluteFrameTransform_Execute.Emplace(TEXT("bDrawDebug"), TEXT("bool"));
		Arguments_FRigUnit_LiveLinkEvaluteFrameTransform_Execute.Emplace(TEXT("DebugColor"), TEXT("FLinearColor"));
		Arguments_FRigUnit_LiveLinkEvaluteFrameTransform_Execute.Emplace(TEXT("DebugDrawOffset"), TEXT("FTransform"));
		Arguments_FRigUnit_LiveLinkEvaluteFrameTransform_Execute.Emplace(TEXT("Transform"), TEXT("FTransform"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_LiveLinkEvaluteFrameTransform::Execute"), &FRigUnit_LiveLinkEvaluteFrameTransform::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkEvaluteFrameTransform.OuterSingleton, Arguments_FRigUnit_LiveLinkEvaluteFrameTransform_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkEvaluteFrameTransform.OuterSingleton;
}
template<> LIVELINKCONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_LiveLinkEvaluteFrameTransform>()
{
	return FRigUnit_LiveLinkEvaluteFrameTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubjectName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SubjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugDrawOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::Struct_MetaDataParams[] = {
		{ "Category", "Live Link" },
		{ "Comment", "/**\n * Evaluate current Live Link Transform associated with supplied subject\n */" },
		{ "DisplayName", "Evaluate Live Link Frame (Transform)" },
		{ "ModuleRelativePath", "Public/LiveLinkRigUnits.h" },
		{ "ToolTip", "Evaluate current Live Link Transform associated with supplied subject" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_LiveLinkEvaluteFrameTransform>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewProp_SubjectName_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/LiveLinkRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewProp_SubjectName = { "SubjectName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_LiveLinkEvaluteFrameTransform, SubjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewProp_SubjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewProp_SubjectName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/LiveLinkRigUnits.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((FRigUnit_LiveLinkEvaluteFrameTransform*)Obj)->bDrawDebug = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_LiveLinkEvaluteFrameTransform), &Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewProp_bDrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewProp_bDrawDebug_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewProp_DebugColor_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/LiveLinkRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewProp_DebugColor = { "DebugColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_LiveLinkEvaluteFrameTransform, DebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewProp_DebugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewProp_DebugColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewProp_DebugDrawOffset_MetaData[] = {
		{ "Category", "Pins" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Public/LiveLinkRigUnits.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewProp_DebugDrawOffset = { "DebugDrawOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_LiveLinkEvaluteFrameTransform, DebugDrawOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewProp_DebugDrawOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewProp_DebugDrawOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Pins" },
		{ "ModuleRelativePath", "Public/LiveLinkRigUnits.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_LiveLinkEvaluteFrameTransform, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewProp_SubjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewProp_bDrawDebug,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewProp_DebugColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewProp_DebugDrawOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewProp_Transform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLinkControlRig,
		Z_Construct_UScriptStruct_FRigUnit_LiveLinkBase,
		&NewStructOps,
		"RigUnit_LiveLinkEvaluteFrameTransform",
		sizeof(FRigUnit_LiveLinkEvaluteFrameTransform),
		alignof(FRigUnit_LiveLinkEvaluteFrameTransform),
		Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkEvaluteFrameTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkEvaluteFrameTransform.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkEvaluteFrameTransform.InnerSingleton;
	}

void FRigUnit_LiveLinkEvaluteFrameTransform::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_LiveLinkEvaluteFrameTransform::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		SubjectName,
		bDrawDebug,
		DebugColor,
		DebugDrawOffset,
		Transform
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LiveLinkControlRig_Source_LiveLinkControlRig_Public_LiveLinkRigUnits_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LiveLinkControlRig_Source_LiveLinkControlRig_Public_LiveLinkRigUnits_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_LiveLinkBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_LiveLinkBase_Statics::NewStructOps, TEXT("RigUnit_LiveLinkBase"), &Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_LiveLinkBase), 1903925099U) },
		{ FRigUnit_LiveLinkEvaluteFrameAnimation::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameAnimation_Statics::NewStructOps, TEXT("RigUnit_LiveLinkEvaluteFrameAnimation"), &Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkEvaluteFrameAnimation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_LiveLinkEvaluteFrameAnimation), 1195085823U) },
		{ FRigUnit_LiveLinkGetTransformByName::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetTransformByName_Statics::NewStructOps, TEXT("RigUnit_LiveLinkGetTransformByName"), &Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkGetTransformByName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_LiveLinkGetTransformByName), 1739324970U) },
		{ FRigUnit_LiveLinkGetParameterValueByName::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_LiveLinkGetParameterValueByName_Statics::NewStructOps, TEXT("RigUnit_LiveLinkGetParameterValueByName"), &Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkGetParameterValueByName, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_LiveLinkGetParameterValueByName), 299474375U) },
		{ FRigUnit_LiveLinkEvaluteFrameTransform::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_LiveLinkEvaluteFrameTransform_Statics::NewStructOps, TEXT("RigUnit_LiveLinkEvaluteFrameTransform"), &Z_Registration_Info_UScriptStruct_RigUnit_LiveLinkEvaluteFrameTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_LiveLinkEvaluteFrameTransform), 3232040387U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LiveLinkControlRig_Source_LiveLinkControlRig_Public_LiveLinkRigUnits_h_533614010(TEXT("/Script/LiveLinkControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LiveLinkControlRig_Source_LiveLinkControlRig_Public_LiveLinkRigUnits_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LiveLinkControlRig_Source_LiveLinkControlRig_Public_LiveLinkRigUnits_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
