// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AppleVisionBlueprintSupport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppleVisionBlueprintSupport() {}
// Cross Module References
	APPLEVISIONBLUEPRINTSUPPORT_API UClass* Z_Construct_UClass_UK2Node_DetectFaces();
	APPLEVISIONBLUEPRINTSUPPORT_API UClass* Z_Construct_UClass_UK2Node_DetectFaces_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_BaseAsyncTask();
	UPackage* Z_Construct_UPackage__Script_AppleVisionBlueprintSupport();
// End Cross Module References
	void UK2Node_DetectFaces::StaticRegisterNativesUK2Node_DetectFaces()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_DetectFaces);
	UClass* Z_Construct_UClass_UK2Node_DetectFaces_NoRegister()
	{
		return UK2Node_DetectFaces::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_DetectFaces_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_DetectFaces_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node_BaseAsyncTask,
		(UObject* (*)())Z_Construct_UPackage__Script_AppleVisionBlueprintSupport,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_DetectFaces_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AppleVisionBlueprintSupport.h" },
		{ "ModuleRelativePath", "Classes/AppleVisionBlueprintSupport.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_DetectFaces_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_DetectFaces>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_DetectFaces_Statics::ClassParams = {
		&UK2Node_DetectFaces::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_DetectFaces_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_DetectFaces_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_DetectFaces()
	{
		if (!Z_Registration_Info_UClass_UK2Node_DetectFaces.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_DetectFaces.OuterSingleton, Z_Construct_UClass_UK2Node_DetectFaces_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_DetectFaces.OuterSingleton;
	}
	template<> APPLEVISIONBLUEPRINTSUPPORT_API UClass* StaticClass<UK2Node_DetectFaces>()
	{
		return UK2Node_DetectFaces::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_DetectFaces);
	UK2Node_DetectFaces::~UK2Node_DetectFaces() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AppleVision_Source_AppleVisionBlueprintSupport_Classes_AppleVisionBlueprintSupport_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AppleVision_Source_AppleVisionBlueprintSupport_Classes_AppleVisionBlueprintSupport_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_DetectFaces, UK2Node_DetectFaces::StaticClass, TEXT("UK2Node_DetectFaces"), &Z_Registration_Info_UClass_UK2Node_DetectFaces, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_DetectFaces), 3097580637U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AppleVision_Source_AppleVisionBlueprintSupport_Classes_AppleVisionBlueprintSupport_h_1917924675(TEXT("/Script/AppleVisionBlueprintSupport"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AppleVision_Source_AppleVisionBlueprintSupport_Classes_AppleVisionBlueprintSupport_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AppleVision_Source_AppleVisionBlueprintSupport_Classes_AppleVisionBlueprintSupport_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
