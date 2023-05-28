// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RivermaxMediaOutputFactoryNew.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRivermaxMediaOutputFactoryNew() {}
// Cross Module References
	RIVERMAXMEDIAEDITOR_API UClass* Z_Construct_UClass_URivermaxMediaOutputFactoryNew();
	RIVERMAXMEDIAEDITOR_API UClass* Z_Construct_UClass_URivermaxMediaOutputFactoryNew_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_RivermaxMediaEditor();
// End Cross Module References
	void URivermaxMediaOutputFactoryNew::StaticRegisterNativesURivermaxMediaOutputFactoryNew()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URivermaxMediaOutputFactoryNew);
	UClass* Z_Construct_UClass_URivermaxMediaOutputFactoryNew_NoRegister()
	{
		return URivermaxMediaOutputFactoryNew::StaticClass();
	}
	struct Z_Construct_UClass_URivermaxMediaOutputFactoryNew_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URivermaxMediaOutputFactoryNew_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_RivermaxMediaEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URivermaxMediaOutputFactoryNew_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Implements a factory for URivermaxMediaOutput objects.\n */" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "RivermaxMediaOutputFactoryNew.h" },
		{ "ModuleRelativePath", "Private/RivermaxMediaOutputFactoryNew.h" },
		{ "ToolTip", "Implements a factory for URivermaxMediaOutput objects." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URivermaxMediaOutputFactoryNew_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URivermaxMediaOutputFactoryNew>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URivermaxMediaOutputFactoryNew_Statics::ClassParams = {
		&URivermaxMediaOutputFactoryNew::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URivermaxMediaOutputFactoryNew_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URivermaxMediaOutputFactoryNew_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URivermaxMediaOutputFactoryNew()
	{
		if (!Z_Registration_Info_UClass_URivermaxMediaOutputFactoryNew.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URivermaxMediaOutputFactoryNew.OuterSingleton, Z_Construct_UClass_URivermaxMediaOutputFactoryNew_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URivermaxMediaOutputFactoryNew.OuterSingleton;
	}
	template<> RIVERMAXMEDIAEDITOR_API UClass* StaticClass<URivermaxMediaOutputFactoryNew>()
	{
		return URivermaxMediaOutputFactoryNew::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URivermaxMediaOutputFactoryNew);
	URivermaxMediaOutputFactoryNew::~URivermaxMediaOutputFactoryNew() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMediaEditor_Private_RivermaxMediaOutputFactoryNew_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMediaEditor_Private_RivermaxMediaOutputFactoryNew_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URivermaxMediaOutputFactoryNew, URivermaxMediaOutputFactoryNew::StaticClass, TEXT("URivermaxMediaOutputFactoryNew"), &Z_Registration_Info_UClass_URivermaxMediaOutputFactoryNew, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URivermaxMediaOutputFactoryNew), 427998811U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMediaEditor_Private_RivermaxMediaOutputFactoryNew_h_259479645(TEXT("/Script/RivermaxMediaEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMediaEditor_Private_RivermaxMediaOutputFactoryNew_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Rivermax_RivermaxMedia_Source_RivermaxMediaEditor_Private_RivermaxMediaOutputFactoryNew_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
