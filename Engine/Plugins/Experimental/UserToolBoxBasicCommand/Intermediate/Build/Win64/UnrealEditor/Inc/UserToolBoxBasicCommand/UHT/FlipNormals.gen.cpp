// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FlipNormals.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFlipNormals() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_UserToolBoxBasicCommand();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UFlipNormals();
	USERTOOLBOXBASICCOMMAND_API UClass* Z_Construct_UClass_UFlipNormals_NoRegister();
	USERTOOLBOXCORE_API UClass* Z_Construct_UClass_UUTBBaseCommand();
// End Cross Module References
	void UFlipNormals::StaticRegisterNativesUFlipNormals()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFlipNormals);
	UClass* Z_Construct_UClass_UFlipNormals_NoRegister()
	{
		return UFlipNormals::StaticClass();
	}
	struct Z_Construct_UClass_UFlipNormals_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFlipNormals_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUTBBaseCommand,
		(UObject* (*)())Z_Construct_UPackage__Script_UserToolBoxBasicCommand,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFlipNormals_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "FlipNormals.h" },
		{ "ModuleRelativePath", "Public/FlipNormals.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFlipNormals_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFlipNormals>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFlipNormals_Statics::ClassParams = {
		&UFlipNormals::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFlipNormals_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFlipNormals_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFlipNormals()
	{
		if (!Z_Registration_Info_UClass_UFlipNormals.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFlipNormals.OuterSingleton, Z_Construct_UClass_UFlipNormals_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFlipNormals.OuterSingleton;
	}
	template<> USERTOOLBOXBASICCOMMAND_API UClass* StaticClass<UFlipNormals>()
	{
		return UFlipNormals::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFlipNormals);
	UFlipNormals::~UFlipNormals() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_FlipNormals_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_FlipNormals_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFlipNormals, UFlipNormals::StaticClass, TEXT("UFlipNormals"), &Z_Registration_Info_UClass_UFlipNormals, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFlipNormals), 3131590022U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_FlipNormals_h_1999372088(TEXT("/Script/UserToolBoxBasicCommand"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_FlipNormals_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UserToolBoxBasicCommand_Source_UserToolBoxBasicCommand_Public_FlipNormals_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
