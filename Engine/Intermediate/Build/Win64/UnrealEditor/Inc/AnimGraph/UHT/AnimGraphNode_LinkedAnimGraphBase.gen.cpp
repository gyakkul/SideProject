// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimGraphNode_LinkedAnimGraphBase.h"
#include "../../Source/Runtime/Engine/Classes/Engine/MemberReference.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_LinkedAnimGraphBase() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_CustomProperty();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_EventNodeInterface_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMemberReference();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimGraphNode_LinkedAnimGraphBase::StaticRegisterNativesUAnimGraphNode_LinkedAnimGraphBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_LinkedAnimGraphBase);
	UClass* Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase_NoRegister()
	{
		return UAnimGraphNode_LinkedAnimGraphBase::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FunctionReference;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_CustomProperty,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_LinkedAnimGraphBase.h" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_LinkedAnimGraphBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase_Statics::NewProp_FunctionReference_MetaData[] = {
		{ "Comment", "// Reference to the stub function that this node uses\n" },
		{ "ModuleRelativePath", "Public/AnimGraphNode_LinkedAnimGraphBase.h" },
		{ "ToolTip", "Reference to the stub function that this node uses" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase_Statics::NewProp_FunctionReference = { "FunctionReference", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_LinkedAnimGraphBase, FunctionReference), Z_Construct_UScriptStruct_FMemberReference, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase_Statics::NewProp_FunctionReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase_Statics::NewProp_FunctionReference_MetaData)) }; // 2112165407
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase_Statics::NewProp_FunctionReference,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UK2Node_EventNodeInterface_NoRegister, (int32)VTABLE_OFFSET(UAnimGraphNode_LinkedAnimGraphBase, IK2Node_EventNodeInterface), false },  // 152586591
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_LinkedAnimGraphBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase_Statics::ClassParams = {
		&UAnimGraphNode_LinkedAnimGraphBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_LinkedAnimGraphBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_LinkedAnimGraphBase.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_LinkedAnimGraphBase.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimGraphNode_LinkedAnimGraphBase>()
	{
		return UAnimGraphNode_LinkedAnimGraphBase::StaticClass();
	}
	UAnimGraphNode_LinkedAnimGraphBase::UAnimGraphNode_LinkedAnimGraphBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_LinkedAnimGraphBase);
	UAnimGraphNode_LinkedAnimGraphBase::~UAnimGraphNode_LinkedAnimGraphBase() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimGraphNode_LinkedAnimGraphBase)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimGraphBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimGraphBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_LinkedAnimGraphBase, UAnimGraphNode_LinkedAnimGraphBase::StaticClass, TEXT("UAnimGraphNode_LinkedAnimGraphBase"), &Z_Registration_Info_UClass_UAnimGraphNode_LinkedAnimGraphBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_LinkedAnimGraphBase), 2762352795U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimGraphBase_h_762392963(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimGraphBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimGraphNode_LinkedAnimGraphBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
