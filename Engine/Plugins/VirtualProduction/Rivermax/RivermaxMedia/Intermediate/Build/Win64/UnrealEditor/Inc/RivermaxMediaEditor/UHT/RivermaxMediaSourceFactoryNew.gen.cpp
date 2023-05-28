// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivermaxMediaSourceFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRivermaxMediaSourceFactoryNew() {}
// Cross Module References
	RIVERMAXMEDIAEDITOR_API UClass* Z_Construct_UClass_URivermaxMediaSourceFactoryNew();
	RIVERMAXMEDIAEDITOR_API UClass* Z_Construct_UClass_URivermaxMediaSourceFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_RivermaxMediaEditor();
// End Cross Module References
	void URivermaxMediaSourceFactoryNew::StaticRegisterNativesURivermaxMediaSourceFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URivermaxMediaSourceFactoryNew);
	UClass* Z_Construct_UClass_URivermaxMediaSourceFactoryNew_NoRegister()
	{
		return URivermaxMediaSourceFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_URivermaxMediaSourceFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URivermaxMediaSourceFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_RivermaxMediaEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxMediaSourceFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for URivermaxMediaSource objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "RivermaxMediaSourceFactoryNew.h" },
		{ "ModuleRelativePath", "Private/RivermaxMediaSourceFactoryNew.h" },
		{ "ToolTip", "Implements a factory for URivermaxMediaSource objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URivermaxMediaSourceFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URivermaxMediaSourceFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URivermaxMediaSourceFactoryNew_Statics::ClassParams = {
		&URivermaxMediaSourceFactoryNew::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URivermaxMediaSourceFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaSourceFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URivermaxMediaSourceFactoryNew()
	{
		if (!Z_Registration_Info_UClass_URivermaxMediaSourceFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URivermaxMediaSourceFactoryNew.OuterSingleton, Z_Construct_UClass_URivermaxMediaSourceFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URivermaxMediaSourceFactoryNew.OuterSingleton;
	}
	template<> RIVERMAXMEDIAEDITOR_API UClass* StaticClass<URivermaxMediaSourceFactoryNew>()
	{
		return URivermaxMediaSourceFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URivermaxMediaSourceFactoryNew);
	URivermaxMediaSourceFactoryNew::~URivermaxMediaSourceFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMediaEditor_Private_RivermaxMediaSourceFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMediaEditor_Private_RivermaxMediaSourceFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URivermaxMediaSourceFactoryNew, URivermaxMediaSourceFactoryNew::StaticClass, TEXT("URivermaxMediaSourceFactoryNew"), &Z_Registration_Info_UClass_URivermaxMediaSourceFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URivermaxMediaSourceFactoryNew), 1579825964U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMediaEditor_Private_RivermaxMediaSourceFactoryNew_h_1778628056(TEXT("/Script/RivermaxMediaEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMediaEditor_Private_RivermaxMediaSourceFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMediaEditor_Private_RivermaxMediaSourceFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
