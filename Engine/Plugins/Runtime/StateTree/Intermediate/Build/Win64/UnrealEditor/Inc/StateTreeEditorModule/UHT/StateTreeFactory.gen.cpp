// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/StateTreeFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTreeFactory() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeFactory();
	STATETREEEDITORMODULE_API UClass* Z_Construct_UClass_UStateTreeFactory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_StateTreeEditorModule();
// End Cross Module References
	void UStateTreeFactory::StaticRegisterNativesUStateTreeFactory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStateTreeFactory);
	UClass* Z_Construct_UClass_UStateTreeFactory_NoRegister()
	{
		return UStateTreeFactory::StaticClass();
	}
	struct Z_Construct_UClass_UStateTreeFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateTreeSchemaClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_StateTreeSchemaClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateTreeFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_StateTreeEditorModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeFactory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Factory for UStateTree\n */" },
		{ "IncludePath", "StateTreeFactory.h" },
		{ "ModuleRelativePath", "Private/StateTreeFactory.h" },
		{ "ToolTip", "Factory for UStateTree" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTreeFactory_Statics::NewProp_StateTreeSchemaClass_MetaData[] = {
		{ "ModuleRelativePath", "Private/StateTreeFactory.h" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UStateTreeFactory_Statics::NewProp_StateTreeSchemaClass = { "StateTreeSchemaClass", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UStateTreeFactory, StateTreeSchemaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UStateTreeFactory_Statics::NewProp_StateTreeSchemaClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeFactory_Statics::NewProp_StateTreeSchemaClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateTreeFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTreeFactory_Statics::NewProp_StateTreeSchemaClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateTreeFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTreeFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStateTreeFactory_Statics::ClassParams = {
		&UStateTreeFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStateTreeFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStateTreeFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTreeFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStateTreeFactory()
	{
		if (!Z_Registration_Info_UClass_UStateTreeFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStateTreeFactory.OuterSingleton, Z_Construct_UClass_UStateTreeFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStateTreeFactory.OuterSingleton;
	}
	template<> STATETREEEDITORMODULE_API UClass* StaticClass<UStateTreeFactory>()
	{
		return UStateTreeFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTreeFactory);
	UStateTreeFactory::~UStateTreeFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_StateTreeFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_StateTreeFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStateTreeFactory, UStateTreeFactory::StaticClass, TEXT("UStateTreeFactory"), &Z_Registration_Info_UClass_UStateTreeFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStateTreeFactory), 2095363813U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_StateTreeFactory_h_3436118467(TEXT("/Script/StateTreeEditorModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_StateTreeFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_StateTree_Source_StateTreeEditorModule_Private_StateTreeFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
