// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivermaxMediaCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRivermaxMediaCapture() {}
// Cross Module References
	MEDIAIOCORE_API UClass* Z_Construct_UClass_UMediaCapture();
	RIVERMAXMEDIA_API UClass* Z_Construct_UClass_URivermaxMediaCapture();
	RIVERMAXMEDIA_API UClass* Z_Construct_UClass_URivermaxMediaCapture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RivermaxMedia();
// End Cross Module References
	void URivermaxMediaCapture::StaticRegisterNativesURivermaxMediaCapture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URivermaxMediaCapture);
	UClass* Z_Construct_UClass_URivermaxMediaCapture_NoRegister()
	{
		return URivermaxMediaCapture::StaticClass();
	}
	struct Z_Construct_UClass_URivermaxMediaCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URivermaxMediaCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMediaCapture,
		(UObject* (*)())Z_Construct_UPackage__Script_RivermaxMedia,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxMediaCapture_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Output Media for Rivermax streams.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "RivermaxMediaCapture.h" },
		{ "ModuleRelativePath", "Public/RivermaxMediaCapture.h" },
		{ "ToolTip", "Output Media for Rivermax streams." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URivermaxMediaCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URivermaxMediaCapture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URivermaxMediaCapture_Statics::ClassParams = {
		&URivermaxMediaCapture::StaticClass,
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
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URivermaxMediaCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URivermaxMediaCapture()
	{
		if (!Z_Registration_Info_UClass_URivermaxMediaCapture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URivermaxMediaCapture.OuterSingleton, Z_Construct_UClass_URivermaxMediaCapture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URivermaxMediaCapture.OuterSingleton;
	}
	template<> RIVERMAXMEDIA_API UClass* StaticClass<URivermaxMediaCapture>()
	{
		return URivermaxMediaCapture::StaticClass();
	}
	URivermaxMediaCapture::URivermaxMediaCapture() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URivermaxMediaCapture);
	URivermaxMediaCapture::~URivermaxMediaCapture() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaCapture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaCapture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URivermaxMediaCapture, URivermaxMediaCapture::StaticClass, TEXT("URivermaxMediaCapture"), &Z_Registration_Info_UClass_URivermaxMediaCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URivermaxMediaCapture), 1402183734U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaCapture_h_40505644(TEXT("/Script/RivermaxMedia"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMedia_Public_RivermaxMediaCapture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
