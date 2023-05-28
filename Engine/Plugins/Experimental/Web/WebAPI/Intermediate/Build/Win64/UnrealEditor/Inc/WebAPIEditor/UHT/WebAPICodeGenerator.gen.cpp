// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CodeGen/WebAPICodeGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWebAPICodeGenerator() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_WebAPIEditor();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPICodeGeneratorBase();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPICodeGeneratorBase_NoRegister();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPICodeGeneratorInterface();
	WEBAPIEDITOR_API UClass* Z_Construct_UClass_UWebAPICodeGeneratorInterface_NoRegister();
// End Cross Module References
	void UWebAPICodeGeneratorInterface::StaticRegisterNativesUWebAPICodeGeneratorInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPICodeGeneratorInterface);
	UClass* Z_Construct_UClass_UWebAPICodeGeneratorInterface_NoRegister()
	{
		return UWebAPICodeGeneratorInterface::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPICodeGeneratorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPICodeGeneratorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPICodeGeneratorInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/CodeGen/WebAPICodeGenerator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPICodeGeneratorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IWebAPICodeGeneratorInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPICodeGeneratorInterface_Statics::ClassParams = {
		&UWebAPICodeGeneratorInterface::StaticClass,
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
		0x000040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPICodeGeneratorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPICodeGeneratorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPICodeGeneratorInterface()
	{
		if (!Z_Registration_Info_UClass_UWebAPICodeGeneratorInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPICodeGeneratorInterface.OuterSingleton, Z_Construct_UClass_UWebAPICodeGeneratorInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPICodeGeneratorInterface.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UClass* StaticClass<UWebAPICodeGeneratorInterface>()
	{
		return UWebAPICodeGeneratorInterface::StaticClass();
	}
	UWebAPICodeGeneratorInterface::UWebAPICodeGeneratorInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPICodeGeneratorInterface);
	UWebAPICodeGeneratorInterface::~UWebAPICodeGeneratorInterface() {}
	void UWebAPICodeGeneratorBase::StaticRegisterNativesUWebAPICodeGeneratorBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWebAPICodeGeneratorBase);
	UClass* Z_Construct_UClass_UWebAPICodeGeneratorBase_NoRegister()
	{
		return UWebAPICodeGeneratorBase::StaticClass();
	}
	struct Z_Construct_UClass_UWebAPICodeGeneratorBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWebAPICodeGeneratorBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_WebAPIEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWebAPICodeGeneratorBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** WebAPICodeGenerator base implementation. Converts WebAPI schema to code gen primitives. Use of this baseclass is optional. */" },
		{ "IncludePath", "CodeGen/WebAPICodeGenerator.h" },
		{ "ModuleRelativePath", "Public/CodeGen/WebAPICodeGenerator.h" },
		{ "ToolTip", "WebAPICodeGenerator base implementation. Converts WebAPI schema to code gen primitives. Use of this baseclass is optional." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UWebAPICodeGeneratorBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UWebAPICodeGeneratorInterface_NoRegister, (int32)VTABLE_OFFSET(UWebAPICodeGeneratorBase, IWebAPICodeGeneratorInterface), false },  // 3691663968
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWebAPICodeGeneratorBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWebAPICodeGeneratorBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWebAPICodeGeneratorBase_Statics::ClassParams = {
		&UWebAPICodeGeneratorBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UWebAPICodeGeneratorBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWebAPICodeGeneratorBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWebAPICodeGeneratorBase()
	{
		if (!Z_Registration_Info_UClass_UWebAPICodeGeneratorBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWebAPICodeGeneratorBase.OuterSingleton, Z_Construct_UClass_UWebAPICodeGeneratorBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWebAPICodeGeneratorBase.OuterSingleton;
	}
	template<> WEBAPIEDITOR_API UClass* StaticClass<UWebAPICodeGeneratorBase>()
	{
		return UWebAPICodeGeneratorBase::StaticClass();
	}
	UWebAPICodeGeneratorBase::UWebAPICodeGeneratorBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWebAPICodeGeneratorBase);
	UWebAPICodeGeneratorBase::~UWebAPICodeGeneratorBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_CodeGen_WebAPICodeGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_CodeGen_WebAPICodeGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWebAPICodeGeneratorInterface, UWebAPICodeGeneratorInterface::StaticClass, TEXT("UWebAPICodeGeneratorInterface"), &Z_Registration_Info_UClass_UWebAPICodeGeneratorInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPICodeGeneratorInterface), 3691663968U) },
		{ Z_Construct_UClass_UWebAPICodeGeneratorBase, UWebAPICodeGeneratorBase::StaticClass, TEXT("UWebAPICodeGeneratorBase"), &Z_Registration_Info_UClass_UWebAPICodeGeneratorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWebAPICodeGeneratorBase), 3212246284U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_CodeGen_WebAPICodeGenerator_h_1273476533(TEXT("/Script/WebAPIEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_CodeGen_WebAPICodeGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Web_WebAPI_Source_WebAPIEditor_Public_CodeGen_WebAPICodeGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
