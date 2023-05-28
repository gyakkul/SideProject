// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimStateNode.h"
#include "../../Source/Runtime/Engine/Public/Animation/AnimTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimStateNode() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateNode();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateNode_NoRegister();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateNodeBase();
	ANIMGRAPH_API UEnum* Z_Construct_UEnum_AnimGraph_EAnimStateType();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNotifyEvent();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAnimStateType;
	static UEnum* EAnimStateType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EAnimStateType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EAnimStateType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AnimGraph_EAnimStateType, (UObject*)Z_Construct_UPackage__Script_AnimGraph(), TEXT("EAnimStateType"));
		}
		return Z_Registration_Info_UEnum_EAnimStateType.OuterSingleton;
	}
	template<> ANIMGRAPH_API UEnum* StaticEnum<EAnimStateType>()
	{
		return EAnimStateType_StaticEnum();
	}
	struct Z_Construct_UEnum_AnimGraph_EAnimStateType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AnimGraph_EAnimStateType_Statics::Enumerators[] = {
		{ "AST_SingleAnimation", (int64)AST_SingleAnimation },
		{ "AST_BlendGraph", (int64)AST_BlendGraph },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AnimGraph_EAnimStateType_Statics::Enum_MetaDataParams[] = {
		{ "AST_BlendGraph.DisplayName", "Blend graph" },
		{ "AST_BlendGraph.Name", "AST_BlendGraph" },
		{ "AST_SingleAnimation.DisplayName", "Single animation" },
		{ "AST_SingleAnimation.Name", "AST_SingleAnimation" },
		{ "ModuleRelativePath", "Public/AnimStateNode.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AnimGraph_EAnimStateType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AnimGraph,
		nullptr,
		"EAnimStateType",
		"EAnimStateType",
		Z_Construct_UEnum_AnimGraph_EAnimStateType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraph_EAnimStateType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_AnimGraph_EAnimStateType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AnimGraph_EAnimStateType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AnimGraph_EAnimStateType()
	{
		if (!Z_Registration_Info_UEnum_EAnimStateType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAnimStateType.InnerSingleton, Z_Construct_UEnum_AnimGraph_EAnimStateType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EAnimStateType.InnerSingleton;
	}
	void UAnimStateNode::StaticRegisterNativesUAnimStateNode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimStateNode);
	UClass* Z_Construct_UClass_UAnimStateNode_NoRegister()
	{
		return UAnimStateNode::StaticClass();
	}
	struct Z_Construct_UClass_UAnimStateNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundGraph_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BoundGraph;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateType_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_StateType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateEntered_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateEntered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateLeft_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateFullyBlended_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StateFullyBlended;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysResetOnEntry_MetaData[];
#endif
		static void NewProp_bAlwaysResetOnEntry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysResetOnEntry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimStateNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimStateNodeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateNode_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimStateNode.h" },
		{ "ModuleRelativePath", "Public/AnimStateNode.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateNode_Statics::NewProp_BoundGraph_MetaData[] = {
		{ "Comment", "// The animation graph for this state\n" },
		{ "ModuleRelativePath", "Public/AnimStateNode.h" },
		{ "ToolTip", "The animation graph for this state" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimStateNode_Statics::NewProp_BoundGraph = { "BoundGraph", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStateNode, BoundGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimStateNode_Statics::NewProp_BoundGraph_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateNode_Statics::NewProp_BoundGraph_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateType_MetaData[] = {
		{ "Comment", "// The type of the contents of this state\n" },
		{ "ModuleRelativePath", "Public/AnimStateNode.h" },
		{ "ToolTip", "The type of the contents of this state" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateType = { "StateType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStateNode, StateType), Z_Construct_UEnum_AnimGraph_EAnimStateType, METADATA_PARAMS(Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateType_MetaData)) }; // 160787167
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateEntered_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/AnimStateNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateEntered = { "StateEntered", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStateNode, StateEntered), Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateEntered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateEntered_MetaData)) }; // 3418516681
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateLeft_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/AnimStateNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateLeft = { "StateLeft", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStateNode, StateLeft), Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateLeft_MetaData)) }; // 3418516681
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateFullyBlended_MetaData[] = {
		{ "Category", "Events" },
		{ "ModuleRelativePath", "Public/AnimStateNode.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateFullyBlended = { "StateFullyBlended", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimStateNode, StateFullyBlended), Z_Construct_UScriptStruct_FAnimNotifyEvent, METADATA_PARAMS(Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateFullyBlended_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateFullyBlended_MetaData)) }; // 3418516681
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateNode_Statics::NewProp_bAlwaysResetOnEntry_MetaData[] = {
		{ "Category", "Events" },
		{ "Comment", "// Whether or not this state will ALWAYS reset it's state on reentry, regardless of remaining weight\n" },
		{ "ModuleRelativePath", "Public/AnimStateNode.h" },
		{ "ToolTip", "Whether or not this state will ALWAYS reset it's state on reentry, regardless of remaining weight" },
	};
#endif
	void Z_Construct_UClass_UAnimStateNode_Statics::NewProp_bAlwaysResetOnEntry_SetBit(void* Obj)
	{
		((UAnimStateNode*)Obj)->bAlwaysResetOnEntry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimStateNode_Statics::NewProp_bAlwaysResetOnEntry = { "bAlwaysResetOnEntry", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimStateNode), &Z_Construct_UClass_UAnimStateNode_Statics::NewProp_bAlwaysResetOnEntry_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimStateNode_Statics::NewProp_bAlwaysResetOnEntry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateNode_Statics::NewProp_bAlwaysResetOnEntry_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimStateNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateNode_Statics::NewProp_BoundGraph,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateEntered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateNode_Statics::NewProp_StateFullyBlended,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimStateNode_Statics::NewProp_bAlwaysResetOnEntry,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimStateNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimStateNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimStateNode_Statics::ClassParams = {
		&UAnimStateNode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimStateNode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateNode_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimStateNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimStateNode()
	{
		if (!Z_Registration_Info_UClass_UAnimStateNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimStateNode.OuterSingleton, Z_Construct_UClass_UAnimStateNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimStateNode.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimStateNode>()
	{
		return UAnimStateNode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimStateNode);
	UAnimStateNode::~UAnimStateNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_Statics::EnumInfo[] = {
		{ EAnimStateType_StaticEnum, TEXT("EAnimStateType"), &Z_Registration_Info_UEnum_EAnimStateType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 160787167U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimStateNode, UAnimStateNode::StaticClass, TEXT("UAnimStateNode"), &Z_Registration_Info_UClass_UAnimStateNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimStateNode), 3793877189U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_3054095629(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
