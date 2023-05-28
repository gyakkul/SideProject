// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ComputeFramework/ComputeKernelFromText.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComputeKernelFromText() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeKernelFromText();
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeKernelFromText_NoRegister();
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeKernelSource();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	UPackage* Z_Construct_UPackage__Script_ComputeFramework();
// End Cross Module References
	void UComputeKernelFromText::StaticRegisterNativesUComputeKernelFromText()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComputeKernelFromText);
	UClass* Z_Construct_UClass_UComputeKernelFromText_NoRegister()
	{
		return UComputeKernelFromText::StaticClass();
	}
	struct Z_Construct_UClass_UComputeKernelFromText_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceFile_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourceFile;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComputeKernelFromText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComputeKernelSource,
		(UObject* (*)())Z_Construct_UPackage__Script_ComputeFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComputeKernelFromText_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Class responsible for loading HLSL text and parsing the options available.\n */" },
		{ "IncludePath", "ComputeFramework/ComputeKernelFromText.h" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelFromText.h" },
		{ "ToolTip", "Class responsible for loading HLSL text and parsing the options available." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComputeKernelFromText_Statics::NewProp_SourceFile_MetaData[] = {
		{ "Category", "Kernel" },
		{ "Comment", "/** Filepath to the source file containing the kernel entry points and all options for parsing. */" },
		{ "ContentDir", "" },
		{ "FilePathFilter", "Unreal Shader File (*.usf)|*.usf" },
		{ "ModuleRelativePath", "Public/ComputeFramework/ComputeKernelFromText.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "Filepath to the source file containing the kernel entry points and all options for parsing." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UComputeKernelFromText_Statics::NewProp_SourceFile = { "SourceFile", nullptr, (EPropertyFlags)0x0010010000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComputeKernelFromText, SourceFile), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UComputeKernelFromText_Statics::NewProp_SourceFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComputeKernelFromText_Statics::NewProp_SourceFile_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComputeKernelFromText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComputeKernelFromText_Statics::NewProp_SourceFile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComputeKernelFromText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComputeKernelFromText>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComputeKernelFromText_Statics::ClassParams = {
		&UComputeKernelFromText::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComputeKernelFromText_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComputeKernelFromText_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UComputeKernelFromText_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComputeKernelFromText_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComputeKernelFromText()
	{
		if (!Z_Registration_Info_UClass_UComputeKernelFromText.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComputeKernelFromText.OuterSingleton, Z_Construct_UClass_UComputeKernelFromText_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComputeKernelFromText.OuterSingleton;
	}
	template<> COMPUTEFRAMEWORK_API UClass* StaticClass<UComputeKernelFromText>()
	{
		return UComputeKernelFromText::StaticClass();
	}
	UComputeKernelFromText::UComputeKernelFromText(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComputeKernelFromText);
	UComputeKernelFromText::~UComputeKernelFromText() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelFromText_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelFromText_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComputeKernelFromText, UComputeKernelFromText::StaticClass, TEXT("UComputeKernelFromText"), &Z_Registration_Info_UClass_UComputeKernelFromText, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComputeKernelFromText), 993989722U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelFromText_h_771470190(TEXT("/Script/ComputeFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelFromText_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ComputeFramework_Source_ComputeFramework_Public_ComputeFramework_ComputeKernelFromText_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
