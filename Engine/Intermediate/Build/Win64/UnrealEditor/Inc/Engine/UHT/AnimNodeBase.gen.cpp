// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNodeFunctionRef.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNodeBase() {}
// Cross Module References
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPinHidingMode();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNodeFunctionRef();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentSpacePoseLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLink();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPoseLinkBase();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPinHidingMode;
	static UEnum* EPinHidingMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPinHidingMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPinHidingMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EPinHidingMode, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EPinHidingMode"));
		}
		return Z_Registration_Info_UEnum_EPinHidingMode.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EPinHidingMode::Type>()
	{
		return EPinHidingMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EPinHidingMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EPinHidingMode_Statics::Enumerators[] = {
		{ "EPinHidingMode::NeverAsPin", (int64)EPinHidingMode::NeverAsPin },
		{ "EPinHidingMode::PinHiddenByDefault", (int64)EPinHidingMode::PinHiddenByDefault },
		{ "EPinHidingMode::PinShownByDefault", (int64)EPinHidingMode::PinShownByDefault },
		{ "EPinHidingMode::AlwaysAsPin", (int64)EPinHidingMode::AlwaysAsPin },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EPinHidingMode_Statics::Enum_MetaDataParams[] = {
		{ "AlwaysAsPin.Comment", "/** Always show this property as a pin; it never makes sense to edit it in the details panel (default for FPoseLink properties). */" },
		{ "AlwaysAsPin.Name", "EPinHidingMode::AlwaysAsPin" },
		{ "AlwaysAsPin.ToolTip", "Always show this property as a pin; it never makes sense to edit it in the details panel (default for FPoseLink properties)." },
		{ "Comment", "/** The display mode of editable values on an animation node. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
		{ "NeverAsPin.Comment", "/** Never show this property as a pin, it is only editable in the details panel (default for everything but FPoseLink properties). */" },
		{ "NeverAsPin.Name", "EPinHidingMode::NeverAsPin" },
		{ "NeverAsPin.ToolTip", "Never show this property as a pin, it is only editable in the details panel (default for everything but FPoseLink properties)." },
		{ "PinHiddenByDefault.Comment", "/** Hide this property by default, but allow the user to expose it as a pin via the details panel. */" },
		{ "PinHiddenByDefault.Name", "EPinHidingMode::PinHiddenByDefault" },
		{ "PinHiddenByDefault.ToolTip", "Hide this property by default, but allow the user to expose it as a pin via the details panel." },
		{ "PinShownByDefault.Comment", "/** Show this property as a pin by default, but allow the user to hide it via the details panel. */" },
		{ "PinShownByDefault.Name", "EPinHidingMode::PinShownByDefault" },
		{ "PinShownByDefault.ToolTip", "Show this property as a pin by default, but allow the user to hide it via the details panel." },
		{ "ToolTip", "The display mode of editable values on an animation node." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EPinHidingMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EPinHidingMode",
		"EPinHidingMode::Type",
		Z_Construct_UEnum_Engine_EPinHidingMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPinHidingMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EPinHidingMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EPinHidingMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EPinHidingMode()
	{
		if (!Z_Registration_Info_UEnum_EPinHidingMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPinHidingMode.InnerSingleton, Z_Construct_UEnum_Engine_EPinHidingMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPinHidingMode.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseLinkBase;
class UScriptStruct* FPoseLinkBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseLinkBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseLinkBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseLinkBase, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PoseLinkBase"));
	}
	return Z_Registration_Info_UScriptStruct_PoseLinkBase.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPoseLinkBase>()
{
	return FPoseLinkBase::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseLinkBase_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LinkID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LinkID;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceLinkID_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SourceLinkID;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseLinkBase_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** A pose link to another node */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
		{ "ToolTip", "A pose link to another node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseLinkBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseLinkBase>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseLinkBase_Statics::NewProp_LinkID_MetaData[] = {
		{ "BlueprintCompilerGeneratedDefaults", "" },
		{ "Comment", "/** Serialized link ID, used to build the non-serialized pointer map. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
		{ "ToolTip", "Serialized link ID, used to build the non-serialized pointer map." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseLinkBase_Statics::NewProp_LinkID = { "LinkID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseLinkBase, LinkID), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseLinkBase_Statics::NewProp_LinkID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseLinkBase_Statics::NewProp_LinkID_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseLinkBase_Statics::NewProp_SourceLinkID_MetaData[] = {
		{ "BlueprintCompilerGeneratedDefaults", "" },
		{ "Comment", "/** The source link ID, used for debug visualization. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
		{ "ToolTip", "The source link ID, used for debug visualization." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPoseLinkBase_Statics::NewProp_SourceLinkID = { "SourceLinkID", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPoseLinkBase, SourceLinkID), METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseLinkBase_Statics::NewProp_SourceLinkID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseLinkBase_Statics::NewProp_SourceLinkID_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPoseLinkBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseLinkBase_Statics::NewProp_LinkID,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPoseLinkBase_Statics::NewProp_SourceLinkID,
#endif // WITH_EDITORONLY_DATA
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseLinkBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"PoseLinkBase",
		sizeof(FPoseLinkBase),
		alignof(FPoseLinkBase),
		Z_Construct_UScriptStruct_FPoseLinkBase_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseLinkBase_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseLinkBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseLinkBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseLinkBase()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseLinkBase.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseLinkBase.InnerSingleton, Z_Construct_UScriptStruct_FPoseLinkBase_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseLinkBase.InnerSingleton;
	}

static_assert(std::is_polymorphic<FPoseLink>() == std::is_polymorphic<FPoseLinkBase>(), "USTRUCT FPoseLink cannot be polymorphic unless super FPoseLinkBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PoseLink;
class UScriptStruct* FPoseLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PoseLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PoseLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPoseLink, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("PoseLink"));
	}
	return Z_Registration_Info_UScriptStruct_PoseLink.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FPoseLink>()
{
	return FPoseLink::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPoseLink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPoseLink_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** A local-space pose link to another node */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
		{ "ToolTip", "A local-space pose link to another node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPoseLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPoseLink>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPoseLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FPoseLinkBase,
		&NewStructOps,
		"PoseLink",
		sizeof(FPoseLink),
		alignof(FPoseLink),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPoseLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPoseLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPoseLink()
	{
		if (!Z_Registration_Info_UScriptStruct_PoseLink.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PoseLink.InnerSingleton, Z_Construct_UScriptStruct_FPoseLink_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PoseLink.InnerSingleton;
	}

static_assert(std::is_polymorphic<FComponentSpacePoseLink>() == std::is_polymorphic<FPoseLinkBase>(), "USTRUCT FComponentSpacePoseLink cannot be polymorphic unless super FPoseLinkBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ComponentSpacePoseLink;
class UScriptStruct* FComponentSpacePoseLink::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ComponentSpacePoseLink.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ComponentSpacePoseLink.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FComponentSpacePoseLink, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("ComponentSpacePoseLink"));
	}
	return Z_Registration_Info_UScriptStruct_ComponentSpacePoseLink.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FComponentSpacePoseLink>()
{
	return FComponentSpacePoseLink::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FComponentSpacePoseLink_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FComponentSpacePoseLink_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/** A component-space pose link to another node */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
		{ "ToolTip", "A component-space pose link to another node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FComponentSpacePoseLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FComponentSpacePoseLink>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FComponentSpacePoseLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FPoseLinkBase,
		&NewStructOps,
		"ComponentSpacePoseLink",
		sizeof(FComponentSpacePoseLink),
		alignof(FComponentSpacePoseLink),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FComponentSpacePoseLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FComponentSpacePoseLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FComponentSpacePoseLink()
	{
		if (!Z_Registration_Info_UScriptStruct_ComponentSpacePoseLink.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ComponentSpacePoseLink.InnerSingleton, Z_Construct_UScriptStruct_FComponentSpacePoseLink_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ComponentSpacePoseLink.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_Base;
class UScriptStruct* FAnimNode_Base::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_Base.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_Base.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_Base, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("AnimNode_Base"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_Base.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FAnimNode_Base>()
{
	return FAnimNode_Base::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_Base_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialUpdateFunction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InitialUpdateFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BecomeRelevantFunction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BecomeRelevantFunction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdateFunction_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateFunction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Base_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * This is the base of all runtime animation nodes\n *\n * To create a new animation node:\n *   Create a struct derived from FAnimNode_Base - this is your runtime node\n *   Create a class derived from UAnimGraphNode_Base, containing an instance of your runtime node as a member - this is your visual/editor-only node\n */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
		{ "ToolTip", "This is the base of all runtime animation nodes\n\nTo create a new animation node:\n  Create a struct derived from FAnimNode_Base - this is your runtime node\n  Create a class derived from UAnimGraphNode_Base, containing an instance of your runtime node as a member - this is your visual/editor-only node" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_Base_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_Base>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Base_Statics::NewProp_InitialUpdateFunction_MetaData[] = {
		{ "Comment", "// Function called on initial update\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
		{ "ToolTip", "Function called on initial update" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Base_Statics::NewProp_InitialUpdateFunction = { "InitialUpdateFunction", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Base, InitialUpdateFunction), Z_Construct_UScriptStruct_FAnimNodeFunctionRef, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Base_Statics::NewProp_InitialUpdateFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Base_Statics::NewProp_InitialUpdateFunction_MetaData)) }; // 258600643
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Base_Statics::NewProp_BecomeRelevantFunction_MetaData[] = {
		{ "Comment", "// Function called on become relevant\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
		{ "ToolTip", "Function called on become relevant" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Base_Statics::NewProp_BecomeRelevantFunction = { "BecomeRelevantFunction", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Base, BecomeRelevantFunction), Z_Construct_UScriptStruct_FAnimNodeFunctionRef, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Base_Statics::NewProp_BecomeRelevantFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Base_Statics::NewProp_BecomeRelevantFunction_MetaData)) }; // 258600643
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_Base_Statics::NewProp_UpdateFunction_MetaData[] = {
		{ "Comment", "// Function called on update\n" },
		{ "FoldProperty", "" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNodeBase.h" },
		{ "ToolTip", "Function called on update" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_Base_Statics::NewProp_UpdateFunction = { "UpdateFunction", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_Base, UpdateFunction), Z_Construct_UScriptStruct_FAnimNodeFunctionRef, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Base_Statics::NewProp_UpdateFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Base_Statics::NewProp_UpdateFunction_MetaData)) }; // 258600643
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_Base_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Base_Statics::NewProp_InitialUpdateFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Base_Statics::NewProp_BecomeRelevantFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_Base_Statics::NewProp_UpdateFunction,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_Base_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"AnimNode_Base",
		sizeof(FAnimNode_Base),
		alignof(FAnimNode_Base),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FAnimNode_Base_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Base_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_Base_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_Base_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_Base()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_Base.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_Base.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_Base_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_Base.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_Statics::EnumInfo[] = {
		{ EPinHidingMode_StaticEnum, TEXT("EPinHidingMode"), &Z_Registration_Info_UEnum_EPinHidingMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2551332562U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_Statics::ScriptStructInfo[] = {
		{ FPoseLinkBase::StaticStruct, Z_Construct_UScriptStruct_FPoseLinkBase_Statics::NewStructOps, TEXT("PoseLinkBase"), &Z_Registration_Info_UScriptStruct_PoseLinkBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseLinkBase), 3027046394U) },
		{ FPoseLink::StaticStruct, Z_Construct_UScriptStruct_FPoseLink_Statics::NewStructOps, TEXT("PoseLink"), &Z_Registration_Info_UScriptStruct_PoseLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPoseLink), 2393943538U) },
		{ FComponentSpacePoseLink::StaticStruct, Z_Construct_UScriptStruct_FComponentSpacePoseLink_Statics::NewStructOps, TEXT("ComponentSpacePoseLink"), &Z_Registration_Info_UScriptStruct_ComponentSpacePoseLink, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FComponentSpacePoseLink), 4052600424U) },
		{ FAnimNode_Base::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_Base_Statics::NewStructOps, TEXT("AnimNode_Base"), &Z_Registration_Info_UScriptStruct_AnimNode_Base, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_Base), 3183406492U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_1721934689(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNodeBase_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
