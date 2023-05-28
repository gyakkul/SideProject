// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Nodes/OptimusNode_ComponentSource.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNode_ComponentSource() {}
// Cross Module References
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentBindingProvider_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ComponentSource();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNode_ComponentSource_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusNode_ComponentSource::StaticRegisterNativesUOptimusNode_ComponentSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNode_ComponentSource);
	UClass* Z_Construct_UClass_UOptimusNode_ComponentSource_NoRegister()
	{
		return UOptimusNode_ComponentSource::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusNode_ComponentSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Binding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusNode,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nodes/OptimusNode_ComponentSource.h" },
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ComponentSource.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::NewProp_Binding_MetaData[] = {
		{ "ModuleRelativePath", "Private/Nodes/OptimusNode_ComponentSource.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNode_ComponentSource, Binding), Z_Construct_UClass_UOptimusComponentSourceBinding_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::NewProp_Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::NewProp_Binding_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::NewProp_Binding,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOptimusComponentBindingProvider_NoRegister, (int32)VTABLE_OFFSET(UOptimusNode_ComponentSource, IOptimusComponentBindingProvider), false },  // 524365484
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNode_ComponentSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::ClassParams = {
		&UOptimusNode_ComponentSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x010000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusNode_ComponentSource()
	{
		if (!Z_Registration_Info_UClass_UOptimusNode_ComponentSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNode_ComponentSource.OuterSingleton, Z_Construct_UClass_UOptimusNode_ComponentSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusNode_ComponentSource.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNode_ComponentSource>()
	{
		return UOptimusNode_ComponentSource::StaticClass();
	}
	UOptimusNode_ComponentSource::UOptimusNode_ComponentSource() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNode_ComponentSource);
	UOptimusNode_ComponentSource::~UOptimusNode_ComponentSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComponentSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComponentSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNode_ComponentSource, UOptimusNode_ComponentSource::StaticClass, TEXT("UOptimusNode_ComponentSource"), &Z_Registration_Info_UClass_UOptimusNode_ComponentSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNode_ComponentSource), 3652929057U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComponentSource_h_1008011927(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComponentSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_Nodes_OptimusNode_ComponentSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
