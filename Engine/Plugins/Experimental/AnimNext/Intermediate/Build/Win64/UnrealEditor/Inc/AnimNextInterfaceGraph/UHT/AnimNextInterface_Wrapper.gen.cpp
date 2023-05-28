// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNextInterface_Wrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNextInterface_Wrapper() {}
// Cross Module References
	ANIMNEXTINTERFACE_API UClass* Z_Construct_UClass_UAnimNextInterface_NoRegister();
	ANIMNEXTINTERFACEGRAPH_API UClass* Z_Construct_UClass_UAnimNextInterface_Wrapper();
	ANIMNEXTINTERFACEGRAPH_API UClass* Z_Construct_UClass_UAnimNextInterface_Wrapper_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AnimNextInterfaceGraph();
// End Cross Module References
	void UAnimNextInterface_Wrapper::StaticRegisterNativesUAnimNextInterface_Wrapper()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNextInterface_Wrapper);
	UClass* Z_Construct_UClass_UAnimNextInterface_Wrapper_NoRegister()
	{
		return UAnimNextInterface_Wrapper::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNextInterface_Wrapper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Output_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Output;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNextInterface_Wrapper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterfaceGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterface_Wrapper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimNextInterface_Wrapper.h" },
		{ "ModuleRelativePath", "Private/AnimNextInterface_Wrapper.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterface_Wrapper_Statics::NewProp_Output_MetaData[] = {
		{ "Category", "Parameters" },
		{ "Comment", "//\x09UPROPERTY(EditAnywhere, Category = \"Parameters\")\n//\x09TArray<FAnimNextInterfaceParameter> Inputs;\n" },
		{ "ModuleRelativePath", "Private/AnimNextInterface_Wrapper.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = \"Parameters\")\nTArray<FAnimNextInterfaceParameter> Inputs;" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UAnimNextInterface_Wrapper_Statics::NewProp_Output = { "Output", nullptr, (EPropertyFlags)0x0044000000000001, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNextInterface_Wrapper, Output), Z_Construct_UClass_UAnimNextInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterface_Wrapper_Statics::NewProp_Output_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterface_Wrapper_Statics::NewProp_Output_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNextInterface_Wrapper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNextInterface_Wrapper_Statics::NewProp_Output,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UAnimNextInterface_Wrapper_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAnimNextInterface_NoRegister, (int32)VTABLE_OFFSET(UAnimNextInterface_Wrapper, IAnimNextInterface), false },  // 3851592269
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNextInterface_Wrapper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNextInterface_Wrapper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNextInterface_Wrapper_Statics::ClassParams = {
		&UAnimNextInterface_Wrapper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNextInterface_Wrapper_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterface_Wrapper_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterface_Wrapper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterface_Wrapper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNextInterface_Wrapper()
	{
		if (!Z_Registration_Info_UClass_UAnimNextInterface_Wrapper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNextInterface_Wrapper.OuterSingleton, Z_Construct_UClass_UAnimNextInterface_Wrapper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNextInterface_Wrapper.OuterSingleton;
	}
	template<> ANIMNEXTINTERFACEGRAPH_API UClass* StaticClass<UAnimNextInterface_Wrapper>()
	{
		return UAnimNextInterface_Wrapper::StaticClass();
	}
	UAnimNextInterface_Wrapper::UAnimNextInterface_Wrapper(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNextInterface_Wrapper);
	UAnimNextInterface_Wrapper::~UAnimNextInterface_Wrapper() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_AnimNextInterface_Wrapper_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_AnimNextInterface_Wrapper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNextInterface_Wrapper, UAnimNextInterface_Wrapper::StaticClass, TEXT("UAnimNextInterface_Wrapper"), &Z_Registration_Info_UClass_UAnimNextInterface_Wrapper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNextInterface_Wrapper), 3499799911U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_AnimNextInterface_Wrapper_h_2563679883(TEXT("/Script/AnimNextInterfaceGraph"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_AnimNextInterface_Wrapper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterfaceGraph_Private_AnimNextInterface_Wrapper_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
