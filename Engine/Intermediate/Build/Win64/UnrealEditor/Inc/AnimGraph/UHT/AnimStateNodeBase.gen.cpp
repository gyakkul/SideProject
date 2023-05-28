// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimStateNodeBase.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimStateNodeBase() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateNodeBase();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimStateNodeBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
	UPackage* Z_Construct_UPackage__Script_AnimGraph();
// End Cross Module References
	void UAnimStateNodeBase::StaticRegisterNativesUAnimStateNodeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimStateNodeBase);
	UClass* Z_Construct_UClass_UAnimStateNodeBase_NoRegister()
	{
		return UAnimStateNodeBase::StaticClass();
	}
	struct Z_Construct_UClass_UAnimStateNodeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimStateNodeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimStateNodeBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimStateNodeBase.h" },
		{ "ModuleRelativePath", "Public/AnimStateNodeBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimStateNodeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimStateNodeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimStateNodeBase_Statics::ClassParams = {
		&UAnimStateNodeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimStateNodeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimStateNodeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimStateNodeBase()
	{
		if (!Z_Registration_Info_UClass_UAnimStateNodeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimStateNodeBase.OuterSingleton, Z_Construct_UClass_UAnimStateNodeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimStateNodeBase.OuterSingleton;
	}
	template<> ANIMGRAPH_API UClass* StaticClass<UAnimStateNodeBase>()
	{
		return UAnimStateNodeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimStateNodeBase);
	UAnimStateNodeBase::~UAnimStateNodeBase() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAnimStateNodeBase)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimStateNodeBase, UAnimStateNodeBase::StaticClass, TEXT("UAnimStateNodeBase"), &Z_Registration_Info_UClass_UAnimStateNodeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimStateNodeBase), 2759881565U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_3652500048(TEXT("/Script/AnimGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_AnimGraph_Public_AnimStateNodeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
