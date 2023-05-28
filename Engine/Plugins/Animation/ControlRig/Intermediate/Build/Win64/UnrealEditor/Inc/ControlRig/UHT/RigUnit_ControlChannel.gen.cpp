// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Units/Hierarchy/RigUnit_ControlChannel.h"
#include "Rigs/RigHierarchyDefines.h"
#include "Units/RigUnitContext.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRigUnit_ControlChannel() {}
// Cross Module References
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FControlRigExecuteContext();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigElementKey();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannel();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannel();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannel();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannel();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannel();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannel();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannel();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannel();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannel();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannel();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannel();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannel();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannel();
	CONTROLRIG_API UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannel();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References

static_assert(std::is_polymorphic<FRigUnit_GetAnimationChannelBase>() == std::is_polymorphic<FRigUnit>(), "USTRUCT FRigUnit_GetAnimationChannelBase cannot be polymorphic unless super FRigUnit is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetAnimationChannelBase;
class UScriptStruct* FRigUnit_GetAnimationChannelBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetAnimationChannelBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetAnimationChannelBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetAnimationChannelBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetAnimationChannelBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetAnimationChannelBase>()
{
	return FRigUnit_GetAnimationChannelBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Control_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Control;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Channel_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Channel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitial_MetaData[];
#endif
		static void NewProp_bInitial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedChannelKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CachedChannelKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedChannelHash_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CachedChannelHash;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Category", "Controls" },
		{ "Comment", "/**\n * Get Animation Channel is used to retrieve a control's animation channel value\n */" },
		{ "DocumentationPolicy", "Strict" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "NodeColor", "0.462745, 1,0, 0.329412" },
		{ "ToolTip", "Get Animation Channel is used to retrieve a control's animation channel value" },
		{ "Varying", "" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetAnimationChannelBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewProp_Control_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the Control to retrieve the value for.\n\x09 */" },
		{ "CustomWidget", "ControlName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "ToolTip", "The name of the Control to retrieve the value for." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewProp_Control = { "Control", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetAnimationChannelBase, Control), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewProp_Control_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewProp_Control_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewProp_Channel_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * The name of the animation channel to retrieve the value for.\n\x09 */" },
		{ "CustomWidget", "AnimationChannelName" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "ToolTip", "The name of the animation channel to retrieve the value for." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetAnimationChannelBase, Channel), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewProp_Channel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewProp_Channel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewProp_bInitial_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "/**\n\x09 * If set to true the initial value will be returned\n\x09 */" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "ToolTip", "If set to true the initial value will be returned" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewProp_bInitial_SetBit(void* Obj)
	{
		((FRigUnit_GetAnimationChannelBase*)Obj)->bInitial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewProp_bInitial = { "bInitial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_GetAnimationChannelBase), &Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewProp_bInitial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewProp_bInitial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewProp_bInitial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewProp_CachedChannelKey_MetaData[] = {
		{ "Comment", "// Used to cache the internally used bone index\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "ToolTip", "Used to cache the internally used bone index" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewProp_CachedChannelKey = { "CachedChannelKey", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetAnimationChannelBase, CachedChannelKey), Z_Construct_UScriptStruct_FRigElementKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewProp_CachedChannelKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewProp_CachedChannelKey_MetaData)) }; // 2461395651
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewProp_CachedChannelHash_MetaData[] = {
		{ "Comment", "// A hash combining the control, channel and topology identifiers\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "ToolTip", "A hash combining the control, channel and topology identifiers" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewProp_CachedChannelHash = { "CachedChannelHash", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetAnimationChannelBase, CachedChannelHash), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewProp_CachedChannelHash_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewProp_CachedChannelHash_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewProp_Control,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewProp_Channel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewProp_bInitial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewProp_CachedChannelKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewProp_CachedChannelHash,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit,
		&NewStructOps,
		"RigUnit_GetAnimationChannelBase",
		sizeof(FRigUnit_GetAnimationChannelBase),
		alignof(FRigUnit_GetAnimationChannelBase),
		Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_GetAnimationChannelBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetAnimationChannelBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_GetAnimationChannelBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_GetBoolAnimationChannel>() == std::is_polymorphic<FRigUnit_GetAnimationChannelBase>(), "USTRUCT FRigUnit_GetBoolAnimationChannel cannot be polymorphic unless super FRigUnit_GetAnimationChannelBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetBoolAnimationChannel;
class UScriptStruct* FRigUnit_GetBoolAnimationChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetBoolAnimationChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetBoolAnimationChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannel, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetBoolAnimationChannel"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetBoolAnimationChannel_Execute;
		Arguments_FRigUnit_GetBoolAnimationChannel_Execute.Emplace(TEXT("Value"), TEXT("bool"));
		Arguments_FRigUnit_GetBoolAnimationChannel_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_GetBoolAnimationChannel_Execute.Emplace(TEXT("Channel"), TEXT("FName"));
		Arguments_FRigUnit_GetBoolAnimationChannel_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		Arguments_FRigUnit_GetBoolAnimationChannel_Execute.Emplace(TEXT("CachedChannelKey"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_GetBoolAnimationChannel_Execute.Emplace(TEXT("CachedChannelHash"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetBoolAnimationChannel::Execute"), &FRigUnit_GetBoolAnimationChannel::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetBoolAnimationChannel.OuterSingleton, Arguments_FRigUnit_GetBoolAnimationChannel_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetBoolAnimationChannel.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetBoolAnimationChannel>()
{
	return FRigUnit_GetBoolAnimationChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannel_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Get Bool Channel is used to retrieve a control's animation channel value\n */" },
		{ "DisplayName", "Get Bool Channel" },
		{ "Keywords", "Animation,Channel" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "TemplateName", "GetAnimationChannel" },
		{ "ToolTip", "Get Bool Channel is used to retrieve a control's animation channel value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetBoolAnimationChannel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannel_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The current value of the animation channel\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "Output", "" },
		{ "ToolTip", "The current value of the animation channel" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannel_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((FRigUnit_GetBoolAnimationChannel*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannel_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_GetBoolAnimationChannel), &Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannel_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannel_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannel_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannel_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase,
		&NewStructOps,
		"RigUnit_GetBoolAnimationChannel",
		sizeof(FRigUnit_GetBoolAnimationChannel),
		alignof(FRigUnit_GetBoolAnimationChannel),
		Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_GetBoolAnimationChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetBoolAnimationChannel.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_GetBoolAnimationChannel.InnerSingleton;
	}

void FRigUnit_GetBoolAnimationChannel::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_GetBoolAnimationChannel::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Control,
		Channel,
		bInitial,
		CachedChannelKey,
		CachedChannelHash
	);
}


static_assert(std::is_polymorphic<FRigUnit_GetFloatAnimationChannel>() == std::is_polymorphic<FRigUnit_GetAnimationChannelBase>(), "USTRUCT FRigUnit_GetFloatAnimationChannel cannot be polymorphic unless super FRigUnit_GetAnimationChannelBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetFloatAnimationChannel;
class UScriptStruct* FRigUnit_GetFloatAnimationChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetFloatAnimationChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetFloatAnimationChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannel, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetFloatAnimationChannel"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetFloatAnimationChannel_Execute;
		Arguments_FRigUnit_GetFloatAnimationChannel_Execute.Emplace(TEXT("Value"), TEXT("float"));
		Arguments_FRigUnit_GetFloatAnimationChannel_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_GetFloatAnimationChannel_Execute.Emplace(TEXT("Channel"), TEXT("FName"));
		Arguments_FRigUnit_GetFloatAnimationChannel_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		Arguments_FRigUnit_GetFloatAnimationChannel_Execute.Emplace(TEXT("CachedChannelKey"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_GetFloatAnimationChannel_Execute.Emplace(TEXT("CachedChannelHash"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetFloatAnimationChannel::Execute"), &FRigUnit_GetFloatAnimationChannel::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetFloatAnimationChannel.OuterSingleton, Arguments_FRigUnit_GetFloatAnimationChannel_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetFloatAnimationChannel.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetFloatAnimationChannel>()
{
	return FRigUnit_GetFloatAnimationChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannel_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Get Float Channel is used to retrieve a control's animation channel value\n */" },
		{ "DisplayName", "Get Float Channel" },
		{ "Keywords", "Animation,Channel" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "TemplateName", "GetAnimationChannel" },
		{ "ToolTip", "Get Float Channel is used to retrieve a control's animation channel value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetFloatAnimationChannel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannel_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The current value of the animation channel\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "Output", "" },
		{ "ToolTip", "The current value of the animation channel" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannel_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetFloatAnimationChannel, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannel_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannel_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannel_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase,
		&NewStructOps,
		"RigUnit_GetFloatAnimationChannel",
		sizeof(FRigUnit_GetFloatAnimationChannel),
		alignof(FRigUnit_GetFloatAnimationChannel),
		Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_GetFloatAnimationChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetFloatAnimationChannel.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_GetFloatAnimationChannel.InnerSingleton;
	}

void FRigUnit_GetFloatAnimationChannel::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_GetFloatAnimationChannel::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Control,
		Channel,
		bInitial,
		CachedChannelKey,
		CachedChannelHash
	);
}


static_assert(std::is_polymorphic<FRigUnit_GetIntAnimationChannel>() == std::is_polymorphic<FRigUnit_GetAnimationChannelBase>(), "USTRUCT FRigUnit_GetIntAnimationChannel cannot be polymorphic unless super FRigUnit_GetAnimationChannelBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetIntAnimationChannel;
class UScriptStruct* FRigUnit_GetIntAnimationChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetIntAnimationChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetIntAnimationChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannel, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetIntAnimationChannel"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetIntAnimationChannel_Execute;
		Arguments_FRigUnit_GetIntAnimationChannel_Execute.Emplace(TEXT("Value"), TEXT("int32"));
		Arguments_FRigUnit_GetIntAnimationChannel_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_GetIntAnimationChannel_Execute.Emplace(TEXT("Channel"), TEXT("FName"));
		Arguments_FRigUnit_GetIntAnimationChannel_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		Arguments_FRigUnit_GetIntAnimationChannel_Execute.Emplace(TEXT("CachedChannelKey"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_GetIntAnimationChannel_Execute.Emplace(TEXT("CachedChannelHash"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetIntAnimationChannel::Execute"), &FRigUnit_GetIntAnimationChannel::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetIntAnimationChannel.OuterSingleton, Arguments_FRigUnit_GetIntAnimationChannel_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetIntAnimationChannel.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetIntAnimationChannel>()
{
	return FRigUnit_GetIntAnimationChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannel_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Get Int Channel is used to retrieve a control's animation channel value\n */" },
		{ "DisplayName", "Get Int Channel" },
		{ "Keywords", "Animation,Channel" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "TemplateName", "GetAnimationChannel" },
		{ "ToolTip", "Get Int Channel is used to retrieve a control's animation channel value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetIntAnimationChannel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannel_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The current value of the animation channel\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "Output", "" },
		{ "ToolTip", "The current value of the animation channel" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannel_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetIntAnimationChannel, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannel_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannel_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannel_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase,
		&NewStructOps,
		"RigUnit_GetIntAnimationChannel",
		sizeof(FRigUnit_GetIntAnimationChannel),
		alignof(FRigUnit_GetIntAnimationChannel),
		Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_GetIntAnimationChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetIntAnimationChannel.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_GetIntAnimationChannel.InnerSingleton;
	}

void FRigUnit_GetIntAnimationChannel::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_GetIntAnimationChannel::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Control,
		Channel,
		bInitial,
		CachedChannelKey,
		CachedChannelHash
	);
}


static_assert(std::is_polymorphic<FRigUnit_GetVector2DAnimationChannel>() == std::is_polymorphic<FRigUnit_GetAnimationChannelBase>(), "USTRUCT FRigUnit_GetVector2DAnimationChannel cannot be polymorphic unless super FRigUnit_GetAnimationChannelBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetVector2DAnimationChannel;
class UScriptStruct* FRigUnit_GetVector2DAnimationChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetVector2DAnimationChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetVector2DAnimationChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannel, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetVector2DAnimationChannel"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetVector2DAnimationChannel_Execute;
		Arguments_FRigUnit_GetVector2DAnimationChannel_Execute.Emplace(TEXT("Value"), TEXT("FVector2D"));
		Arguments_FRigUnit_GetVector2DAnimationChannel_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_GetVector2DAnimationChannel_Execute.Emplace(TEXT("Channel"), TEXT("FName"));
		Arguments_FRigUnit_GetVector2DAnimationChannel_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		Arguments_FRigUnit_GetVector2DAnimationChannel_Execute.Emplace(TEXT("CachedChannelKey"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_GetVector2DAnimationChannel_Execute.Emplace(TEXT("CachedChannelHash"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetVector2DAnimationChannel::Execute"), &FRigUnit_GetVector2DAnimationChannel::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetVector2DAnimationChannel.OuterSingleton, Arguments_FRigUnit_GetVector2DAnimationChannel_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetVector2DAnimationChannel.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetVector2DAnimationChannel>()
{
	return FRigUnit_GetVector2DAnimationChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannel_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Get Vector2D Channel is used to retrieve a control's animation channel value\n */" },
		{ "DisplayName", "Get Vector2D Channel" },
		{ "Keywords", "Animation,Channel" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "TemplateName", "GetAnimationChannel" },
		{ "ToolTip", "Get Vector2D Channel is used to retrieve a control's animation channel value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetVector2DAnimationChannel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannel_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The current value of the animation channel\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "Output", "" },
		{ "ToolTip", "The current value of the animation channel" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannel_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetVector2DAnimationChannel, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannel_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannel_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannel_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase,
		&NewStructOps,
		"RigUnit_GetVector2DAnimationChannel",
		sizeof(FRigUnit_GetVector2DAnimationChannel),
		alignof(FRigUnit_GetVector2DAnimationChannel),
		Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_GetVector2DAnimationChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetVector2DAnimationChannel.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_GetVector2DAnimationChannel.InnerSingleton;
	}

void FRigUnit_GetVector2DAnimationChannel::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_GetVector2DAnimationChannel::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Control,
		Channel,
		bInitial,
		CachedChannelKey,
		CachedChannelHash
	);
}


static_assert(std::is_polymorphic<FRigUnit_GetVectorAnimationChannel>() == std::is_polymorphic<FRigUnit_GetAnimationChannelBase>(), "USTRUCT FRigUnit_GetVectorAnimationChannel cannot be polymorphic unless super FRigUnit_GetAnimationChannelBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetVectorAnimationChannel;
class UScriptStruct* FRigUnit_GetVectorAnimationChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetVectorAnimationChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetVectorAnimationChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannel, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetVectorAnimationChannel"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetVectorAnimationChannel_Execute;
		Arguments_FRigUnit_GetVectorAnimationChannel_Execute.Emplace(TEXT("Value"), TEXT("FVector"));
		Arguments_FRigUnit_GetVectorAnimationChannel_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_GetVectorAnimationChannel_Execute.Emplace(TEXT("Channel"), TEXT("FName"));
		Arguments_FRigUnit_GetVectorAnimationChannel_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		Arguments_FRigUnit_GetVectorAnimationChannel_Execute.Emplace(TEXT("CachedChannelKey"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_GetVectorAnimationChannel_Execute.Emplace(TEXT("CachedChannelHash"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetVectorAnimationChannel::Execute"), &FRigUnit_GetVectorAnimationChannel::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetVectorAnimationChannel.OuterSingleton, Arguments_FRigUnit_GetVectorAnimationChannel_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetVectorAnimationChannel.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetVectorAnimationChannel>()
{
	return FRigUnit_GetVectorAnimationChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannel_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Get Vector Channel is used to retrieve a control's animation channel value\n */" },
		{ "DisplayName", "Get Vector Channel" },
		{ "Keywords", "Animation,Channel" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "TemplateName", "GetAnimationChannel" },
		{ "ToolTip", "Get Vector Channel is used to retrieve a control's animation channel value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetVectorAnimationChannel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannel_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The current value of the animation channel\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "Output", "" },
		{ "ToolTip", "The current value of the animation channel" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannel_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetVectorAnimationChannel, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannel_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannel_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannel_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase,
		&NewStructOps,
		"RigUnit_GetVectorAnimationChannel",
		sizeof(FRigUnit_GetVectorAnimationChannel),
		alignof(FRigUnit_GetVectorAnimationChannel),
		Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_GetVectorAnimationChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetVectorAnimationChannel.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_GetVectorAnimationChannel.InnerSingleton;
	}

void FRigUnit_GetVectorAnimationChannel::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_GetVectorAnimationChannel::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Control,
		Channel,
		bInitial,
		CachedChannelKey,
		CachedChannelHash
	);
}


static_assert(std::is_polymorphic<FRigUnit_GetRotatorAnimationChannel>() == std::is_polymorphic<FRigUnit_GetAnimationChannelBase>(), "USTRUCT FRigUnit_GetRotatorAnimationChannel cannot be polymorphic unless super FRigUnit_GetAnimationChannelBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetRotatorAnimationChannel;
class UScriptStruct* FRigUnit_GetRotatorAnimationChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetRotatorAnimationChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetRotatorAnimationChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannel, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetRotatorAnimationChannel"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetRotatorAnimationChannel_Execute;
		Arguments_FRigUnit_GetRotatorAnimationChannel_Execute.Emplace(TEXT("Value"), TEXT("FRotator"));
		Arguments_FRigUnit_GetRotatorAnimationChannel_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_GetRotatorAnimationChannel_Execute.Emplace(TEXT("Channel"), TEXT("FName"));
		Arguments_FRigUnit_GetRotatorAnimationChannel_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		Arguments_FRigUnit_GetRotatorAnimationChannel_Execute.Emplace(TEXT("CachedChannelKey"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_GetRotatorAnimationChannel_Execute.Emplace(TEXT("CachedChannelHash"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetRotatorAnimationChannel::Execute"), &FRigUnit_GetRotatorAnimationChannel::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetRotatorAnimationChannel.OuterSingleton, Arguments_FRigUnit_GetRotatorAnimationChannel_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetRotatorAnimationChannel.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetRotatorAnimationChannel>()
{
	return FRigUnit_GetRotatorAnimationChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannel_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Get Rotator Channel is used to retrieve a control's animation channel value\n */" },
		{ "DisplayName", "Get Rotator Channel" },
		{ "Keywords", "Animation,Channel" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "TemplateName", "GetAnimationChannel" },
		{ "ToolTip", "Get Rotator Channel is used to retrieve a control's animation channel value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetRotatorAnimationChannel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannel_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The current value of the animation channel\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "Output", "" },
		{ "ToolTip", "The current value of the animation channel" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannel_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetRotatorAnimationChannel, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannel_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannel_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannel_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase,
		&NewStructOps,
		"RigUnit_GetRotatorAnimationChannel",
		sizeof(FRigUnit_GetRotatorAnimationChannel),
		alignof(FRigUnit_GetRotatorAnimationChannel),
		Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_GetRotatorAnimationChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetRotatorAnimationChannel.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_GetRotatorAnimationChannel.InnerSingleton;
	}

void FRigUnit_GetRotatorAnimationChannel::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_GetRotatorAnimationChannel::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Control,
		Channel,
		bInitial,
		CachedChannelKey,
		CachedChannelHash
	);
}


static_assert(std::is_polymorphic<FRigUnit_GetTransformAnimationChannel>() == std::is_polymorphic<FRigUnit_GetAnimationChannelBase>(), "USTRUCT FRigUnit_GetTransformAnimationChannel cannot be polymorphic unless super FRigUnit_GetAnimationChannelBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_GetTransformAnimationChannel;
class UScriptStruct* FRigUnit_GetTransformAnimationChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_GetTransformAnimationChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_GetTransformAnimationChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannel, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_GetTransformAnimationChannel"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_GetTransformAnimationChannel_Execute;
		Arguments_FRigUnit_GetTransformAnimationChannel_Execute.Emplace(TEXT("Value"), TEXT("FTransform"));
		Arguments_FRigUnit_GetTransformAnimationChannel_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_GetTransformAnimationChannel_Execute.Emplace(TEXT("Channel"), TEXT("FName"));
		Arguments_FRigUnit_GetTransformAnimationChannel_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		Arguments_FRigUnit_GetTransformAnimationChannel_Execute.Emplace(TEXT("CachedChannelKey"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_GetTransformAnimationChannel_Execute.Emplace(TEXT("CachedChannelHash"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_GetTransformAnimationChannel::Execute"), &FRigUnit_GetTransformAnimationChannel::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_GetTransformAnimationChannel.OuterSingleton, Arguments_FRigUnit_GetTransformAnimationChannel_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_GetTransformAnimationChannel.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_GetTransformAnimationChannel>()
{
	return FRigUnit_GetTransformAnimationChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannel_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Get Transform Channel is used to retrieve a control's animation channel value\n */" },
		{ "DisplayName", "Get Transform Channel" },
		{ "Keywords", "Animation,Channel" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "TemplateName", "GetAnimationChannel" },
		{ "ToolTip", "Get Transform Channel is used to retrieve a control's animation channel value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_GetTransformAnimationChannel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannel_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The current value of the animation channel\n" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "Output", "" },
		{ "ToolTip", "The current value of the animation channel" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannel_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_GetTransformAnimationChannel, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannel_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannel_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannel_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase,
		&NewStructOps,
		"RigUnit_GetTransformAnimationChannel",
		sizeof(FRigUnit_GetTransformAnimationChannel),
		alignof(FRigUnit_GetTransformAnimationChannel),
		Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_GetTransformAnimationChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_GetTransformAnimationChannel.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_GetTransformAnimationChannel.InnerSingleton;
	}

void FRigUnit_GetTransformAnimationChannel::Execute()
{
	FControlRigExecuteContext TemporaryExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_GetTransformAnimationChannel::Execute(const FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Control,
		Channel,
		bInitial,
		CachedChannelKey,
		CachedChannelHash
	);
}


static_assert(std::is_polymorphic<FRigUnit_SetAnimationChannelBase>() == std::is_polymorphic<FRigUnit_GetAnimationChannelBase>(), "USTRUCT FRigUnit_SetAnimationChannelBase cannot be polymorphic unless super FRigUnit_GetAnimationChannelBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetAnimationChannelBase;
class UScriptStruct* FRigUnit_SetAnimationChannelBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetAnimationChannelBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetAnimationChannelBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetAnimationChannelBase"));
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetAnimationChannelBase.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetAnimationChannelBase>()
{
	return FRigUnit_SetAnimationChannelBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExecuteContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExecuteContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase_Statics::Struct_MetaDataParams[] = {
		{ "Abstract", "" },
		{ "Comment", "/**\n * Set Animation Channel is used to change a control's animation channel value\n */" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "ToolTip", "Set Animation Channel is used to change a control's animation channel value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetAnimationChannelBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase_Statics::NewProp_ExecuteContext_MetaData[] = {
		{ "Category", "Pins" },
		{ "DisplayName", "Execute" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "Output", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase_Statics::NewProp_ExecuteContext = { "ExecuteContext", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetAnimationChannelBase, ExecuteContext), Z_Construct_UScriptStruct_FControlRigExecuteContext, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase_Statics::NewProp_ExecuteContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase_Statics::NewProp_ExecuteContext_MetaData)) }; // 1930646767
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase_Statics::NewProp_ExecuteContext,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase,
		&NewStructOps,
		"RigUnit_SetAnimationChannelBase",
		sizeof(FRigUnit_SetAnimationChannelBase),
		alignof(FRigUnit_SetAnimationChannelBase),
		Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SetAnimationChannelBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetAnimationChannelBase.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SetAnimationChannelBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FRigUnit_SetBoolAnimationChannel>() == std::is_polymorphic<FRigUnit_SetAnimationChannelBase>(), "USTRUCT FRigUnit_SetBoolAnimationChannel cannot be polymorphic unless super FRigUnit_SetAnimationChannelBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetBoolAnimationChannel;
class UScriptStruct* FRigUnit_SetBoolAnimationChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetBoolAnimationChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetBoolAnimationChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannel, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetBoolAnimationChannel"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetBoolAnimationChannel_Execute;
		Arguments_FRigUnit_SetBoolAnimationChannel_Execute.Emplace(TEXT("Value"), TEXT("bool"));
		Arguments_FRigUnit_SetBoolAnimationChannel_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_SetBoolAnimationChannel_Execute.Emplace(TEXT("Channel"), TEXT("FName"));
		Arguments_FRigUnit_SetBoolAnimationChannel_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		Arguments_FRigUnit_SetBoolAnimationChannel_Execute.Emplace(TEXT("CachedChannelKey"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SetBoolAnimationChannel_Execute.Emplace(TEXT("CachedChannelHash"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetBoolAnimationChannel::Execute"), &FRigUnit_SetBoolAnimationChannel::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetBoolAnimationChannel.OuterSingleton, Arguments_FRigUnit_SetBoolAnimationChannel_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetBoolAnimationChannel.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetBoolAnimationChannel>()
{
	return FRigUnit_SetBoolAnimationChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannel_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Set Bool Channel is used to set a control's animation channel value\n */" },
		{ "DisplayName", "Set Bool Channel" },
		{ "Keywords", "Animation,Channel" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "TemplateName", "SetAnimationChannel" },
		{ "ToolTip", "Set Bool Channel is used to set a control's animation channel value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetBoolAnimationChannel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannel_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The new value of the animation channel\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "ToolTip", "The new value of the animation channel" },
	};
#endif
	void Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannel_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((FRigUnit_SetBoolAnimationChannel*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannel_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FRigUnit_SetBoolAnimationChannel), &Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannel_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannel_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannel_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannel_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase,
		&NewStructOps,
		"RigUnit_SetBoolAnimationChannel",
		sizeof(FRigUnit_SetBoolAnimationChannel),
		alignof(FRigUnit_SetBoolAnimationChannel),
		Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SetBoolAnimationChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetBoolAnimationChannel.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SetBoolAnimationChannel.InnerSingleton;
	}

void FRigUnit_SetBoolAnimationChannel::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SetBoolAnimationChannel::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Control,
		Channel,
		bInitial,
		CachedChannelKey,
		CachedChannelHash
	);
}


static_assert(std::is_polymorphic<FRigUnit_SetFloatAnimationChannel>() == std::is_polymorphic<FRigUnit_SetAnimationChannelBase>(), "USTRUCT FRigUnit_SetFloatAnimationChannel cannot be polymorphic unless super FRigUnit_SetAnimationChannelBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetFloatAnimationChannel;
class UScriptStruct* FRigUnit_SetFloatAnimationChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetFloatAnimationChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetFloatAnimationChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannel, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetFloatAnimationChannel"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetFloatAnimationChannel_Execute;
		Arguments_FRigUnit_SetFloatAnimationChannel_Execute.Emplace(TEXT("Value"), TEXT("float"));
		Arguments_FRigUnit_SetFloatAnimationChannel_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_SetFloatAnimationChannel_Execute.Emplace(TEXT("Channel"), TEXT("FName"));
		Arguments_FRigUnit_SetFloatAnimationChannel_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		Arguments_FRigUnit_SetFloatAnimationChannel_Execute.Emplace(TEXT("CachedChannelKey"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SetFloatAnimationChannel_Execute.Emplace(TEXT("CachedChannelHash"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetFloatAnimationChannel::Execute"), &FRigUnit_SetFloatAnimationChannel::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetFloatAnimationChannel.OuterSingleton, Arguments_FRigUnit_SetFloatAnimationChannel_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetFloatAnimationChannel.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetFloatAnimationChannel>()
{
	return FRigUnit_SetFloatAnimationChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannel_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Set Float Channel is used to set a control's animation channel value\n */" },
		{ "DisplayName", "Set Float Channel" },
		{ "Keywords", "Animation,Channel" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "TemplateName", "SetAnimationChannel" },
		{ "ToolTip", "Set Float Channel is used to set a control's animation channel value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetFloatAnimationChannel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannel_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The new value of the animation channel\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "ToolTip", "The new value of the animation channel" },
		{ "UIMax", "1" },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannel_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetFloatAnimationChannel, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannel_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannel_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannel_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase,
		&NewStructOps,
		"RigUnit_SetFloatAnimationChannel",
		sizeof(FRigUnit_SetFloatAnimationChannel),
		alignof(FRigUnit_SetFloatAnimationChannel),
		Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SetFloatAnimationChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetFloatAnimationChannel.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SetFloatAnimationChannel.InnerSingleton;
	}

void FRigUnit_SetFloatAnimationChannel::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SetFloatAnimationChannel::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Control,
		Channel,
		bInitial,
		CachedChannelKey,
		CachedChannelHash
	);
}


static_assert(std::is_polymorphic<FRigUnit_SetIntAnimationChannel>() == std::is_polymorphic<FRigUnit_SetAnimationChannelBase>(), "USTRUCT FRigUnit_SetIntAnimationChannel cannot be polymorphic unless super FRigUnit_SetAnimationChannelBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetIntAnimationChannel;
class UScriptStruct* FRigUnit_SetIntAnimationChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetIntAnimationChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetIntAnimationChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannel, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetIntAnimationChannel"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetIntAnimationChannel_Execute;
		Arguments_FRigUnit_SetIntAnimationChannel_Execute.Emplace(TEXT("Value"), TEXT("int32"));
		Arguments_FRigUnit_SetIntAnimationChannel_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_SetIntAnimationChannel_Execute.Emplace(TEXT("Channel"), TEXT("FName"));
		Arguments_FRigUnit_SetIntAnimationChannel_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		Arguments_FRigUnit_SetIntAnimationChannel_Execute.Emplace(TEXT("CachedChannelKey"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SetIntAnimationChannel_Execute.Emplace(TEXT("CachedChannelHash"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetIntAnimationChannel::Execute"), &FRigUnit_SetIntAnimationChannel::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetIntAnimationChannel.OuterSingleton, Arguments_FRigUnit_SetIntAnimationChannel_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetIntAnimationChannel.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetIntAnimationChannel>()
{
	return FRigUnit_SetIntAnimationChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannel_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Set Int Channel is used to set a control's animation channel value\n */" },
		{ "DisplayName", "Set Int Channel" },
		{ "Keywords", "Animation,Channel" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "TemplateName", "SetAnimationChannel" },
		{ "ToolTip", "Set Int Channel is used to set a control's animation channel value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetIntAnimationChannel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannel_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The new value of the animation channel\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "ToolTip", "The new value of the animation channel" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannel_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetIntAnimationChannel, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannel_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannel_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannel_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase,
		&NewStructOps,
		"RigUnit_SetIntAnimationChannel",
		sizeof(FRigUnit_SetIntAnimationChannel),
		alignof(FRigUnit_SetIntAnimationChannel),
		Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SetIntAnimationChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetIntAnimationChannel.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SetIntAnimationChannel.InnerSingleton;
	}

void FRigUnit_SetIntAnimationChannel::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SetIntAnimationChannel::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Control,
		Channel,
		bInitial,
		CachedChannelKey,
		CachedChannelHash
	);
}


static_assert(std::is_polymorphic<FRigUnit_SetVector2DAnimationChannel>() == std::is_polymorphic<FRigUnit_SetAnimationChannelBase>(), "USTRUCT FRigUnit_SetVector2DAnimationChannel cannot be polymorphic unless super FRigUnit_SetAnimationChannelBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetVector2DAnimationChannel;
class UScriptStruct* FRigUnit_SetVector2DAnimationChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetVector2DAnimationChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetVector2DAnimationChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannel, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetVector2DAnimationChannel"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetVector2DAnimationChannel_Execute;
		Arguments_FRigUnit_SetVector2DAnimationChannel_Execute.Emplace(TEXT("Value"), TEXT("FVector2D"));
		Arguments_FRigUnit_SetVector2DAnimationChannel_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_SetVector2DAnimationChannel_Execute.Emplace(TEXT("Channel"), TEXT("FName"));
		Arguments_FRigUnit_SetVector2DAnimationChannel_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		Arguments_FRigUnit_SetVector2DAnimationChannel_Execute.Emplace(TEXT("CachedChannelKey"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SetVector2DAnimationChannel_Execute.Emplace(TEXT("CachedChannelHash"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetVector2DAnimationChannel::Execute"), &FRigUnit_SetVector2DAnimationChannel::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetVector2DAnimationChannel.OuterSingleton, Arguments_FRigUnit_SetVector2DAnimationChannel_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetVector2DAnimationChannel.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetVector2DAnimationChannel>()
{
	return FRigUnit_SetVector2DAnimationChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannel_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Set Vector2D Channel is used to set a control's animation channel value\n */" },
		{ "DisplayName", "Set Vector2D Channel" },
		{ "Keywords", "Animation,Channel" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "TemplateName", "SetAnimationChannel" },
		{ "ToolTip", "Set Vector2D Channel is used to set a control's animation channel value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetVector2DAnimationChannel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannel_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The new value of the animation channel\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "ToolTip", "The new value of the animation channel" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannel_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetVector2DAnimationChannel, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannel_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannel_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannel_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase,
		&NewStructOps,
		"RigUnit_SetVector2DAnimationChannel",
		sizeof(FRigUnit_SetVector2DAnimationChannel),
		alignof(FRigUnit_SetVector2DAnimationChannel),
		Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SetVector2DAnimationChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetVector2DAnimationChannel.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SetVector2DAnimationChannel.InnerSingleton;
	}

void FRigUnit_SetVector2DAnimationChannel::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SetVector2DAnimationChannel::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Control,
		Channel,
		bInitial,
		CachedChannelKey,
		CachedChannelHash
	);
}


static_assert(std::is_polymorphic<FRigUnit_SetVectorAnimationChannel>() == std::is_polymorphic<FRigUnit_SetAnimationChannelBase>(), "USTRUCT FRigUnit_SetVectorAnimationChannel cannot be polymorphic unless super FRigUnit_SetAnimationChannelBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetVectorAnimationChannel;
class UScriptStruct* FRigUnit_SetVectorAnimationChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetVectorAnimationChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetVectorAnimationChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannel, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetVectorAnimationChannel"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetVectorAnimationChannel_Execute;
		Arguments_FRigUnit_SetVectorAnimationChannel_Execute.Emplace(TEXT("Value"), TEXT("FVector"));
		Arguments_FRigUnit_SetVectorAnimationChannel_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_SetVectorAnimationChannel_Execute.Emplace(TEXT("Channel"), TEXT("FName"));
		Arguments_FRigUnit_SetVectorAnimationChannel_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		Arguments_FRigUnit_SetVectorAnimationChannel_Execute.Emplace(TEXT("CachedChannelKey"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SetVectorAnimationChannel_Execute.Emplace(TEXT("CachedChannelHash"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetVectorAnimationChannel::Execute"), &FRigUnit_SetVectorAnimationChannel::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetVectorAnimationChannel.OuterSingleton, Arguments_FRigUnit_SetVectorAnimationChannel_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetVectorAnimationChannel.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetVectorAnimationChannel>()
{
	return FRigUnit_SetVectorAnimationChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannel_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Set Vector Channel is used to set a control's animation channel value\n */" },
		{ "DisplayName", "Set Vector Channel" },
		{ "Keywords", "Animation,Channel" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "TemplateName", "SetAnimationChannel" },
		{ "ToolTip", "Set Vector Channel is used to set a control's animation channel value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetVectorAnimationChannel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannel_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The new value of the animation channel\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "ToolTip", "The new value of the animation channel" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannel_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetVectorAnimationChannel, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannel_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannel_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannel_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase,
		&NewStructOps,
		"RigUnit_SetVectorAnimationChannel",
		sizeof(FRigUnit_SetVectorAnimationChannel),
		alignof(FRigUnit_SetVectorAnimationChannel),
		Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SetVectorAnimationChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetVectorAnimationChannel.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SetVectorAnimationChannel.InnerSingleton;
	}

void FRigUnit_SetVectorAnimationChannel::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SetVectorAnimationChannel::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Control,
		Channel,
		bInitial,
		CachedChannelKey,
		CachedChannelHash
	);
}


static_assert(std::is_polymorphic<FRigUnit_SetRotatorAnimationChannel>() == std::is_polymorphic<FRigUnit_SetAnimationChannelBase>(), "USTRUCT FRigUnit_SetRotatorAnimationChannel cannot be polymorphic unless super FRigUnit_SetAnimationChannelBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetRotatorAnimationChannel;
class UScriptStruct* FRigUnit_SetRotatorAnimationChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetRotatorAnimationChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetRotatorAnimationChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannel, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetRotatorAnimationChannel"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetRotatorAnimationChannel_Execute;
		Arguments_FRigUnit_SetRotatorAnimationChannel_Execute.Emplace(TEXT("Value"), TEXT("FRotator"));
		Arguments_FRigUnit_SetRotatorAnimationChannel_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_SetRotatorAnimationChannel_Execute.Emplace(TEXT("Channel"), TEXT("FName"));
		Arguments_FRigUnit_SetRotatorAnimationChannel_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		Arguments_FRigUnit_SetRotatorAnimationChannel_Execute.Emplace(TEXT("CachedChannelKey"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SetRotatorAnimationChannel_Execute.Emplace(TEXT("CachedChannelHash"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetRotatorAnimationChannel::Execute"), &FRigUnit_SetRotatorAnimationChannel::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetRotatorAnimationChannel.OuterSingleton, Arguments_FRigUnit_SetRotatorAnimationChannel_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetRotatorAnimationChannel.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetRotatorAnimationChannel>()
{
	return FRigUnit_SetRotatorAnimationChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannel_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Set Rotator Channel is used to set a control's animation channel value\n */" },
		{ "DisplayName", "Set Rotator Channel" },
		{ "Keywords", "Animation,Channel" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "TemplateName", "SetAnimationChannel" },
		{ "ToolTip", "Set Rotator Channel is used to set a control's animation channel value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetRotatorAnimationChannel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannel_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The new value of the animation channel\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "ToolTip", "The new value of the animation channel" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannel_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetRotatorAnimationChannel, Value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannel_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannel_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannel_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase,
		&NewStructOps,
		"RigUnit_SetRotatorAnimationChannel",
		sizeof(FRigUnit_SetRotatorAnimationChannel),
		alignof(FRigUnit_SetRotatorAnimationChannel),
		Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SetRotatorAnimationChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetRotatorAnimationChannel.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SetRotatorAnimationChannel.InnerSingleton;
	}

void FRigUnit_SetRotatorAnimationChannel::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SetRotatorAnimationChannel::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Control,
		Channel,
		bInitial,
		CachedChannelKey,
		CachedChannelHash
	);
}


static_assert(std::is_polymorphic<FRigUnit_SetTransformAnimationChannel>() == std::is_polymorphic<FRigUnit_SetAnimationChannelBase>(), "USTRUCT FRigUnit_SetTransformAnimationChannel cannot be polymorphic unless super FRigUnit_SetAnimationChannelBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RigUnit_SetTransformAnimationChannel;
class UScriptStruct* FRigUnit_SetTransformAnimationChannel::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RigUnit_SetTransformAnimationChannel.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RigUnit_SetTransformAnimationChannel.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannel, (UObject*)Z_Construct_UPackage__Script_ControlRig(), TEXT("RigUnit_SetTransformAnimationChannel"));
		TArray<FRigVMFunctionArgument> Arguments_FRigUnit_SetTransformAnimationChannel_Execute;
		Arguments_FRigUnit_SetTransformAnimationChannel_Execute.Emplace(TEXT("Value"), TEXT("FTransform"));
		Arguments_FRigUnit_SetTransformAnimationChannel_Execute.Emplace(TEXT("Control"), TEXT("FName"));
		Arguments_FRigUnit_SetTransformAnimationChannel_Execute.Emplace(TEXT("Channel"), TEXT("FName"));
		Arguments_FRigUnit_SetTransformAnimationChannel_Execute.Emplace(TEXT("bInitial"), TEXT("bool"));
		Arguments_FRigUnit_SetTransformAnimationChannel_Execute.Emplace(TEXT("CachedChannelKey"), TEXT("FRigElementKey"));
		Arguments_FRigUnit_SetTransformAnimationChannel_Execute.Emplace(TEXT("CachedChannelHash"), TEXT("int32"));
		FRigVMRegistry::Get().Register(TEXT("FRigUnit_SetTransformAnimationChannel::Execute"), &FRigUnit_SetTransformAnimationChannel::RigVMExecute, Z_Registration_Info_UScriptStruct_RigUnit_SetTransformAnimationChannel.OuterSingleton, Arguments_FRigUnit_SetTransformAnimationChannel_Execute);
	}
	return Z_Registration_Info_UScriptStruct_RigUnit_SetTransformAnimationChannel.OuterSingleton;
}
template<> CONTROLRIG_API UScriptStruct* StaticStruct<FRigUnit_SetTransformAnimationChannel>()
{
	return FRigUnit_SetTransformAnimationChannel::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannel_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannel_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Set Transform Channel is used to set a control's animation channel value\n */" },
		{ "DisplayName", "Set Transform Channel" },
		{ "Keywords", "Animation,Channel" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "TemplateName", "SetAnimationChannel" },
		{ "ToolTip", "Set Transform Channel is used to set a control's animation channel value" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannel_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRigUnit_SetTransformAnimationChannel>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannel_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Pins" },
		{ "Comment", "// The new value of the animation channel\n" },
		{ "Input", "" },
		{ "ModuleRelativePath", "Private/Units/Hierarchy/RigUnit_ControlChannel.h" },
		{ "ToolTip", "The new value of the animation channel" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannel_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRigUnit_SetTransformAnimationChannel, Value), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannel_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannel_Statics::NewProp_Value_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannel_Statics::NewProp_Value,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannel_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
		Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase,
		&NewStructOps,
		"RigUnit_SetTransformAnimationChannel",
		sizeof(FRigUnit_SetTransformAnimationChannel),
		alignof(FRigUnit_SetTransformAnimationChannel),
		Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannel_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannel_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannel_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannel_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannel()
	{
		if (!Z_Registration_Info_UScriptStruct_RigUnit_SetTransformAnimationChannel.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RigUnit_SetTransformAnimationChannel.InnerSingleton, Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannel_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RigUnit_SetTransformAnimationChannel.InnerSingleton;
	}

void FRigUnit_SetTransformAnimationChannel::Execute()
{
	FControlRigExecuteContext& TemporaryExecuteContext = ExecuteContext;
	TemporaryExecuteContext.Initialize();
	Execute(TemporaryExecuteContext);
}

void FRigUnit_SetTransformAnimationChannel::Execute(FControlRigExecuteContext& InExecuteContext)
{
	StaticExecute(
		InExecuteContext,
		Value,
		Control,
		Channel,
		bInitial,
		CachedChannelKey,
		CachedChannelHash
	);
}

	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ControlChannel_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ControlChannel_h_Statics::ScriptStructInfo[] = {
		{ FRigUnit_GetAnimationChannelBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetAnimationChannelBase_Statics::NewStructOps, TEXT("RigUnit_GetAnimationChannelBase"), &Z_Registration_Info_UScriptStruct_RigUnit_GetAnimationChannelBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetAnimationChannelBase), 766871856U) },
		{ FRigUnit_GetBoolAnimationChannel::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetBoolAnimationChannel_Statics::NewStructOps, TEXT("RigUnit_GetBoolAnimationChannel"), &Z_Registration_Info_UScriptStruct_RigUnit_GetBoolAnimationChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetBoolAnimationChannel), 3251631548U) },
		{ FRigUnit_GetFloatAnimationChannel::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetFloatAnimationChannel_Statics::NewStructOps, TEXT("RigUnit_GetFloatAnimationChannel"), &Z_Registration_Info_UScriptStruct_RigUnit_GetFloatAnimationChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetFloatAnimationChannel), 3258887897U) },
		{ FRigUnit_GetIntAnimationChannel::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetIntAnimationChannel_Statics::NewStructOps, TEXT("RigUnit_GetIntAnimationChannel"), &Z_Registration_Info_UScriptStruct_RigUnit_GetIntAnimationChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetIntAnimationChannel), 93156692U) },
		{ FRigUnit_GetVector2DAnimationChannel::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetVector2DAnimationChannel_Statics::NewStructOps, TEXT("RigUnit_GetVector2DAnimationChannel"), &Z_Registration_Info_UScriptStruct_RigUnit_GetVector2DAnimationChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetVector2DAnimationChannel), 4117211139U) },
		{ FRigUnit_GetVectorAnimationChannel::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetVectorAnimationChannel_Statics::NewStructOps, TEXT("RigUnit_GetVectorAnimationChannel"), &Z_Registration_Info_UScriptStruct_RigUnit_GetVectorAnimationChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetVectorAnimationChannel), 1849396424U) },
		{ FRigUnit_GetRotatorAnimationChannel::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetRotatorAnimationChannel_Statics::NewStructOps, TEXT("RigUnit_GetRotatorAnimationChannel"), &Z_Registration_Info_UScriptStruct_RigUnit_GetRotatorAnimationChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetRotatorAnimationChannel), 156264130U) },
		{ FRigUnit_GetTransformAnimationChannel::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_GetTransformAnimationChannel_Statics::NewStructOps, TEXT("RigUnit_GetTransformAnimationChannel"), &Z_Registration_Info_UScriptStruct_RigUnit_GetTransformAnimationChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_GetTransformAnimationChannel), 443223292U) },
		{ FRigUnit_SetAnimationChannelBase::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetAnimationChannelBase_Statics::NewStructOps, TEXT("RigUnit_SetAnimationChannelBase"), &Z_Registration_Info_UScriptStruct_RigUnit_SetAnimationChannelBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetAnimationChannelBase), 128429764U) },
		{ FRigUnit_SetBoolAnimationChannel::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetBoolAnimationChannel_Statics::NewStructOps, TEXT("RigUnit_SetBoolAnimationChannel"), &Z_Registration_Info_UScriptStruct_RigUnit_SetBoolAnimationChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetBoolAnimationChannel), 2988772133U) },
		{ FRigUnit_SetFloatAnimationChannel::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetFloatAnimationChannel_Statics::NewStructOps, TEXT("RigUnit_SetFloatAnimationChannel"), &Z_Registration_Info_UScriptStruct_RigUnit_SetFloatAnimationChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetFloatAnimationChannel), 3914255579U) },
		{ FRigUnit_SetIntAnimationChannel::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetIntAnimationChannel_Statics::NewStructOps, TEXT("RigUnit_SetIntAnimationChannel"), &Z_Registration_Info_UScriptStruct_RigUnit_SetIntAnimationChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetIntAnimationChannel), 3795731048U) },
		{ FRigUnit_SetVector2DAnimationChannel::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetVector2DAnimationChannel_Statics::NewStructOps, TEXT("RigUnit_SetVector2DAnimationChannel"), &Z_Registration_Info_UScriptStruct_RigUnit_SetVector2DAnimationChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetVector2DAnimationChannel), 3240148100U) },
		{ FRigUnit_SetVectorAnimationChannel::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetVectorAnimationChannel_Statics::NewStructOps, TEXT("RigUnit_SetVectorAnimationChannel"), &Z_Registration_Info_UScriptStruct_RigUnit_SetVectorAnimationChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetVectorAnimationChannel), 2808026867U) },
		{ FRigUnit_SetRotatorAnimationChannel::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetRotatorAnimationChannel_Statics::NewStructOps, TEXT("RigUnit_SetRotatorAnimationChannel"), &Z_Registration_Info_UScriptStruct_RigUnit_SetRotatorAnimationChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetRotatorAnimationChannel), 164290134U) },
		{ FRigUnit_SetTransformAnimationChannel::StaticStruct, Z_Construct_UScriptStruct_FRigUnit_SetTransformAnimationChannel_Statics::NewStructOps, TEXT("RigUnit_SetTransformAnimationChannel"), &Z_Registration_Info_UScriptStruct_RigUnit_SetTransformAnimationChannel, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRigUnit_SetTransformAnimationChannel), 1922321864U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ControlChannel_h_3852692093(TEXT("/Script/ControlRig"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ControlChannel_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Private_Units_Hierarchy_RigUnit_ControlChannel_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
