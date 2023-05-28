// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OptimusNodeLink.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusNodeLink() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeLink();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodeLink_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusNodePin_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	void UOptimusNodeLink::StaticRegisterNativesUOptimusNodeLink()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusNodeLink);
	UClass* Z_Construct_UClass_UOptimusNodeLink_NoRegister()
	{
		return UOptimusNodeLink::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusNodeLink_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeOutputPin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NodeOutputPin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeInputPin_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NodeInputPin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusNodeLink_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodeLink_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OptimusNodeLink.h" },
		{ "ModuleRelativePath", "Public/OptimusNodeLink.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodeLink_Statics::NewProp_NodeOutputPin_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusNodeLink.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusNodeLink_Statics::NewProp_NodeOutputPin = { "NodeOutputPin", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNodeLink, NodeOutputPin), Z_Construct_UClass_UOptimusNodePin_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusNodeLink_Statics::NewProp_NodeOutputPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeLink_Statics::NewProp_NodeOutputPin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusNodeLink_Statics::NewProp_NodeInputPin_MetaData[] = {
		{ "ModuleRelativePath", "Public/OptimusNodeLink.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusNodeLink_Statics::NewProp_NodeInputPin = { "NodeInputPin", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusNodeLink, NodeInputPin), Z_Construct_UClass_UOptimusNodePin_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusNodeLink_Statics::NewProp_NodeInputPin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeLink_Statics::NewProp_NodeInputPin_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusNodeLink_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeLink_Statics::NewProp_NodeOutputPin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusNodeLink_Statics::NewProp_NodeInputPin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusNodeLink_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusNodeLink>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusNodeLink_Statics::ClassParams = {
		&UOptimusNodeLink::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusNodeLink_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeLink_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusNodeLink_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusNodeLink_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusNodeLink()
	{
		if (!Z_Registration_Info_UClass_UOptimusNodeLink.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusNodeLink.OuterSingleton, Z_Construct_UClass_UOptimusNodeLink_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusNodeLink.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusNodeLink>()
	{
		return UOptimusNodeLink::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusNodeLink);
	UOptimusNodeLink::~UOptimusNodeLink() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeLink_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeLink_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusNodeLink, UOptimusNodeLink::StaticClass, TEXT("UOptimusNodeLink"), &Z_Registration_Info_UClass_UOptimusNodeLink, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusNodeLink), 1866980599U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeLink_h_1245708765(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeLink_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Public_OptimusNodeLink_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
