// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SharedMemoryMediaOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSharedMemoryMediaOutput() {}
// Cross Module References
	DISPLAYCLUSTERMEDIA_API UClass* Z_Construct_UClass_USharedMemoryMediaOutput();
	DISPLAYCLUSTERMEDIA_API UClass* Z_Construct_UClass_USharedMemoryMediaOutput_NoRegister();
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaOutput();
	UPackage* Z_Construct_UPackage__Script_DisplayClusterMedia();
// End Cross Module References
	void USharedMemoryMediaOutput::StaticRegisterNativesUSharedMemoryMediaOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USharedMemoryMediaOutput);
	UClass* Z_Construct_UClass_USharedMemoryMediaOutput_NoRegister()
	{
		return USharedMemoryMediaOutput::StaticClass();
	}
	struct Z_Construct_UClass_USharedMemoryMediaOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UniqueName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_UniqueName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USharedMemoryMediaOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMediaOutput,
		(UObject* (*)())Z_Construct_UPackage__Script_DisplayClusterMedia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USharedMemoryMediaOutput_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Output information for a SharedMemory media capture.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "SharedMemoryMediaOutput.h" },
		{ "ModuleRelativePath", "Public/SharedMemoryMediaOutput.h" },
		{ "ToolTip", "Output information for a SharedMemory media capture." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USharedMemoryMediaOutput_Statics::NewProp_UniqueName_MetaData[] = {
		{ "Category", "Output" },
		{ "Comment", "/** Shared memory will be opened by using this name. Should be unique per media output. */" },
		{ "ModuleRelativePath", "Public/SharedMemoryMediaOutput.h" },
		{ "ToolTip", "Shared memory will be opened by using this name. Should be unique per media output." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USharedMemoryMediaOutput_Statics::NewProp_UniqueName = { "UniqueName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USharedMemoryMediaOutput, UniqueName), METADATA_PARAMS(Z_Construct_UClass_USharedMemoryMediaOutput_Statics::NewProp_UniqueName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USharedMemoryMediaOutput_Statics::NewProp_UniqueName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USharedMemoryMediaOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USharedMemoryMediaOutput_Statics::NewProp_UniqueName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USharedMemoryMediaOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USharedMemoryMediaOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USharedMemoryMediaOutput_Statics::ClassParams = {
		&USharedMemoryMediaOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USharedMemoryMediaOutput_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USharedMemoryMediaOutput_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USharedMemoryMediaOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USharedMemoryMediaOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USharedMemoryMediaOutput()
	{
		if (!Z_Registration_Info_UClass_USharedMemoryMediaOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USharedMemoryMediaOutput.OuterSingleton, Z_Construct_UClass_USharedMemoryMediaOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USharedMemoryMediaOutput.OuterSingleton;
	}
	template<> DISPLAYCLUSTERMEDIA_API UClass* StaticClass<USharedMemoryMediaOutput>()
	{
		return USharedMemoryMediaOutput::StaticClass();
	}
	USharedMemoryMediaOutput::USharedMemoryMediaOutput(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USharedMemoryMediaOutput);
	USharedMemoryMediaOutput::~USharedMemoryMediaOutput() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_SharedMemoryMediaOutput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_SharedMemoryMediaOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USharedMemoryMediaOutput, USharedMemoryMediaOutput::StaticClass, TEXT("USharedMemoryMediaOutput"), &Z_Registration_Info_UClass_USharedMemoryMediaOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USharedMemoryMediaOutput), 767917561U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_SharedMemoryMediaOutput_h_4187453400(TEXT("/Script/DisplayClusterMedia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_SharedMemoryMediaOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_nDisplay_Source_DisplayClusterMedia_Public_SharedMemoryMediaOutput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
