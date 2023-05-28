// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_AnimNodeReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_AnimNodeReference() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UK2Node_AnimNodeReference();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UK2Node_AnimNodeReference_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UK2Node_AnimNodeReference::StaticRegisterNativesUK2Node_AnimNodeReference()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_AnimNodeReference);
	UClass* Z_Construct_UClass_UK2Node_AnimNodeReference_NoRegister()
	{
		return UK2Node_AnimNodeReference::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_AnimNodeReference_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Tag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_AnimNodeReference_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AnimNodeReference_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_AnimNodeReference.h" },
		{ "ModuleRelativePath", "Public/K2Node_AnimNodeReference.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_AnimNodeReference_Statics::NewProp_Tag_MetaData[] = {
		{ "Comment", "/** The node tag we reference */" },
		{ "ModuleRelativePath", "Public/K2Node_AnimNodeReference.h" },
		{ "ToolTip", "The node tag we reference" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UK2Node_AnimNodeReference_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_AnimNodeReference, Tag), METADATA_PARAMS(Z_Construct_UClass_UK2Node_AnimNodeReference_Statics::NewProp_Tag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AnimNodeReference_Statics::NewProp_Tag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_AnimNodeReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_AnimNodeReference_Statics::NewProp_Tag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_AnimNodeReference_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_AnimNodeReference>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_AnimNodeReference_Statics::ClassParams = {
		&UK2Node_AnimNodeReference::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_AnimNodeReference_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AnimNodeReference_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_AnimNodeReference_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_AnimNodeReference_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_AnimNodeReference()
	{
		if (!Z_Registration_Info_UClass_UK2Node_AnimNodeReference.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_AnimNodeReference.OuterSingleton, Z_Construct_UClass_UK2Node_AnimNodeReference_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_AnimNodeReference.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UK2Node_AnimNodeReference>()
	{
		return UK2Node_AnimNodeReference::StaticClass();
	}
	UK2Node_AnimNodeReference::UK2Node_AnimNodeReference(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_AnimNodeReference);
	UK2Node_AnimNodeReference::~UK2Node_AnimNodeReference() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_K2Node_AnimNodeReference_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_K2Node_AnimNodeReference_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_AnimNodeReference, UK2Node_AnimNodeReference::StaticClass, TEXT("UK2Node_AnimNodeReference"), &Z_Registration_Info_UClass_UK2Node_AnimNodeReference, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_AnimNodeReference), 191487293U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_K2Node_AnimNodeReference_h_3812221290(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_K2Node_AnimNodeReference_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_K2Node_AnimNodeReference_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
