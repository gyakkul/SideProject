// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComputeFramework/ComputeKernelSource.h"
#include "ComputeFramework/ComputeKernelPermutationSet.h"
#include "ComputeFramework/ShaderParamTypeDefinition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComputeKernelSource() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeKernelSource();
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeKernelSource_NoRegister();
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeSource_NoRegister();
	COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FComputeKernelDefinitionSet();
	COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FComputeKernelPermutationSet();
	COMPUTEFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FShaderFunctionDefinition();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntVector();
	UPackage* Z_Construct_UPackage__Script_ComputeFramework();
// End Cross Module References
	void UComputeKernelSource::StaticRegisterNativesUComputeKernelSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComputeKernelSource);
	UClass* Z_Construct_UClass_UComputeKernelSource_NoRegister()
	{
		return UComputeKernelSource::StaticClass();
	}
	struct Z_Construct_UClass_UComputeKernelSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_EntryPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GroupSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PermutationSet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PermutationSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefinitionsSet_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefinitionsSet;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AdditionalSources_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AdditionalSources_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AdditionalSources;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalInputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalInputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalInputs;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExternalOutputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExternalOutputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ExternalOutputs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComputeKernelSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComputeKernelSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Class representing the source for a UComputeKernel \n * We derive from this for each authoring mechanism. (HLSL text, VPL graph, ML Meta Lang, etc.)\n */" },
		{ "IncludePath", "ComputeFramework/ComputeKernelSource.h" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelSource.h" },
		{ "ToolTip", "Class representing the source for a UComputeKernel\nWe derive from this for each authoring mechanism. (HLSL text, VPL graph, ML Meta Lang, etc.)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_EntryPoint_MetaData[] = {
		{ "Category", "Kernel" },
		{ "Comment", "/** Kernel entry point. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelSource.h" },
		{ "ToolTip", "Kernel entry point." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_EntryPoint = { "EntryPoint", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComputeKernelSource, EntryPoint), METADATA_PARAMS(Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_EntryPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_EntryPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_GroupSize_MetaData[] = {
		{ "Category", "Kernel" },
		{ "Comment", "/** Kernel group size. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelSource.h" },
		{ "ToolTip", "Kernel group size." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_GroupSize = { "GroupSize", nullptr, (EPropertyFlags)0x0010010000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComputeKernelSource, GroupSize), Z_Construct_UScriptStruct_FIntVector, METADATA_PARAMS(Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_GroupSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_GroupSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_PermutationSet_MetaData[] = {
		{ "Category", "Kernel" },
		{ "Comment", "/** Base permutations exposed by the kernel. These will be extended by further permutations declared in any linked data providers. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelSource.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Base permutations exposed by the kernel. These will be extended by further permutations declared in any linked data providers." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_PermutationSet = { "PermutationSet", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComputeKernelSource, PermutationSet), Z_Construct_UScriptStruct_FComputeKernelPermutationSet, METADATA_PARAMS(Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_PermutationSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_PermutationSet_MetaData)) }; // 1233773543
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_DefinitionsSet_MetaData[] = {
		{ "Category", "Kernel" },
		{ "Comment", "/** Base environment defines for kernel compilation. These will be extended by further defines declared in any linked data providers. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelSource.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Base environment defines for kernel compilation. These will be extended by further defines declared in any linked data providers." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_DefinitionsSet = { "DefinitionsSet", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComputeKernelSource, DefinitionsSet), Z_Construct_UScriptStruct_FComputeKernelDefinitionSet, METADATA_PARAMS(Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_DefinitionsSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_DefinitionsSet_MetaData)) }; // 267567538
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_AdditionalSources_Inner = { "AdditionalSources", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UComputeSource_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_AdditionalSources_MetaData[] = {
		{ "Category", "External" },
		{ "Comment", "/** An array of additional independent source assets that the kernel source depends on. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelSource.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "An array of additional independent source assets that the kernel source depends on." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_AdditionalSources = { "AdditionalSources", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComputeKernelSource, AdditionalSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_AdditionalSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_AdditionalSources_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_ExternalInputs_Inner = { "ExternalInputs", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FShaderFunctionDefinition, METADATA_PARAMS(nullptr, 0) }; // 2817853605
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_ExternalInputs_MetaData[] = {
		{ "Category", "External" },
		{ "Comment", "/* Named external inputs for the kernel. These must be fulfilled by linked data providers. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelSource.h" },
		{ "ToolTip", "Named external inputs for the kernel. These must be fulfilled by linked data providers." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_ExternalInputs = { "ExternalInputs", nullptr, (EPropertyFlags)0x0010000000020041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComputeKernelSource, ExternalInputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_ExternalInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_ExternalInputs_MetaData)) }; // 2817853605
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_ExternalOutputs_Inner = { "ExternalOutputs", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FShaderFunctionDefinition, METADATA_PARAMS(nullptr, 0) }; // 2817853605
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_ExternalOutputs_MetaData[] = {
		{ "Category", "External" },
		{ "Comment", "/* Named external outputs for the kernel. These must be fulfilled by linked data providers. */" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelSource.h" },
		{ "ToolTip", "Named external outputs for the kernel. These must be fulfilled by linked data providers." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_ExternalOutputs = { "ExternalOutputs", nullptr, (EPropertyFlags)0x0010000000020041, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComputeKernelSource, ExternalOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_ExternalOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_ExternalOutputs_MetaData)) }; // 2817853605
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComputeKernelSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_EntryPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_GroupSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_PermutationSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_DefinitionsSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_AdditionalSources_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_AdditionalSources,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_ExternalInputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_ExternalInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_ExternalOutputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeKernelSource_Statics::NewProp_ExternalOutputs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComputeKernelSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComputeKernelSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComputeKernelSource_Statics::ClassParams = {
		&UComputeKernelSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComputeKernelSource_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComputeKernelSource_Statics::PropPointers),
		0,
		0x001010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UComputeKernelSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComputeKernelSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComputeKernelSource()
	{
		if (!Z_Registration_Info_UClass_UComputeKernelSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComputeKernelSource.OuterSingleton, Z_Construct_UClass_UComputeKernelSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComputeKernelSource.OuterSingleton;
	}
	template<> COMPUTEFRAMEWORK_API UClass* StaticClass<UComputeKernelSource>()
	{
		return UComputeKernelSource::StaticClass();
	}
	UComputeKernelSource::UComputeKernelSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComputeKernelSource);
	UComputeKernelSource::~UComputeKernelSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelSource_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelSource_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComputeKernelSource, UComputeKernelSource::StaticClass, TEXT("UComputeKernelSource"), &Z_Registration_Info_UClass_UComputeKernelSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComputeKernelSource), 495590000U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelSource_h_3442308737(TEXT("/Script/ComputeFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelSource_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelSource_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
