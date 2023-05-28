// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AssignToLayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssignToLayer() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_UserToolBoxBasicCommand();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UAssignToLayer();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UAssignToLayer_NoRegister();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBBaseCommand();
// End Cross Module References
	void UAssignToLayer::StaticRegisterNativesUAssignToLayer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssignToLayer);
	UClass* Z_Construct_UClass_UAssignToLayer_NoRegister()
	{
		return UAssignToLayer::StaticClass();
	}
	struct Z_Construct_UClass_UAssignToLayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAssignToLayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUTBBaseCommand,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxBasicCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAssignToLayer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "AssignToLayer.h" },
		{ "ModuleRelativePath", "Public/AssignToLayer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAssignToLayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssignToLayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssignToLayer_Statics::ClassParams = {
		&UAssignToLayer::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAssignToLayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAssignToLayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAssignToLayer()
	{
		if (!Z_Registration_Info_UClass_UAssignToLayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssignToLayer.OuterSingleton, Z_Construct_UClass_UAssignToLayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAssignToLayer.OuterSingleton;
	}
	template<> USERTOOLBOXBASICCOMMAND_API UClass* StaticClass<UAssignToLayer>()
	{
		return UAssignToLayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAssignToLayer);
	UAssignToLayer::~UAssignToLayer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_AssignToLayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_AssignToLayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAssignToLayer, UAssignToLayer::StaticClass, TEXT("UAssignToLayer"), &Z_Registration_Info_UClass_UAssignToLayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssignToLayer), 2036062502U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_AssignToLayer_h_2312525049(TEXT("/Script/UserToolBoxBasicCommand"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_AssignToLayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_AssignToLayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
