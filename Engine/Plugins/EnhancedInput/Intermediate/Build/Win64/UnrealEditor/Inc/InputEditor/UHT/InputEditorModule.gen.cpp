// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputEditorModule.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputEditorModule() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	INPUTEDITOR_API UClass* Z_Construct_UClass_UInputAction_Factory();
	INPUTEDITOR_API UClass* Z_Construct_UClass_UInputAction_Factory_NoRegister();
	INPUTEDITOR_API UClass* Z_Construct_UClass_UInputMappingContext_Factory();
	INPUTEDITOR_API UClass* Z_Construct_UClass_UInputMappingContext_Factory_NoRegister();
	INPUTEDITOR_API UClass* Z_Construct_UClass_UPlayerMappableInputConfig_Factory();
	INPUTEDITOR_API UClass* Z_Construct_UClass_UPlayerMappableInputConfig_Factory_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_InputEditor();
// End Cross Module References
	void UInputMappingContext_Factory::StaticRegisterNativesUInputMappingContext_Factory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputMappingContext_Factory);
	UClass* Z_Construct_UClass_UInputMappingContext_Factory_NoRegister()
	{
		return UInputMappingContext_Factory::StaticClass();
	}
	struct Z_Construct_UClass_UInputMappingContext_Factory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContextClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InputMappingContextClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputMappingContext_Factory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_InputEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputMappingContext_Factory_Statics::Class_MetaDataParams[] = {
		{ "Comment", "////////////////////////////////////////////////////////////////////\n// Asset factories\n" },
		{ "IncludePath", "InputEditorModule.h" },
		{ "ModuleRelativePath", "Public/InputEditorModule.h" },
		{ "ToolTip", "Asset factories" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputMappingContext_Factory_Statics::NewProp_InputMappingContextClass_MetaData[] = {
		{ "Category", "InputMappingContext" },
		{ "ModuleRelativePath", "Public/InputEditorModule.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInputMappingContext_Factory_Statics::NewProp_InputMappingContextClass = { "InputMappingContextClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputMappingContext_Factory, InputMappingContextClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInputMappingContext_Factory_Statics::NewProp_InputMappingContextClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputMappingContext_Factory_Statics::NewProp_InputMappingContextClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputMappingContext_Factory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputMappingContext_Factory_Statics::NewProp_InputMappingContextClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputMappingContext_Factory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputMappingContext_Factory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputMappingContext_Factory_Statics::ClassParams = {
		&UInputMappingContext_Factory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputMappingContext_Factory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputMappingContext_Factory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInputMappingContext_Factory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputMappingContext_Factory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputMappingContext_Factory()
	{
		if (!Z_Registration_Info_UClass_UInputMappingContext_Factory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputMappingContext_Factory.OuterSingleton, Z_Construct_UClass_UInputMappingContext_Factory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputMappingContext_Factory.OuterSingleton;
	}
	template<> INPUTEDITOR_API UClass* StaticClass<UInputMappingContext_Factory>()
	{
		return UInputMappingContext_Factory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputMappingContext_Factory);
	UInputMappingContext_Factory::~UInputMappingContext_Factory() {}
	void UInputAction_Factory::StaticRegisterNativesUInputAction_Factory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputAction_Factory);
	UClass* Z_Construct_UClass_UInputAction_Factory_NoRegister()
	{
		return UInputAction_Factory::StaticClass();
	}
	struct Z_Construct_UClass_UInputAction_Factory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputActionClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InputActionClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputAction_Factory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_InputEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputAction_Factory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InputEditorModule.h" },
		{ "ModuleRelativePath", "Public/InputEditorModule.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputAction_Factory_Statics::NewProp_InputActionClass_MetaData[] = {
		{ "Category", "InputAction" },
		{ "ModuleRelativePath", "Public/InputEditorModule.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UInputAction_Factory_Statics::NewProp_InputActionClass = { "InputActionClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputAction_Factory, InputActionClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInputAction_Factory_Statics::NewProp_InputActionClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputAction_Factory_Statics::NewProp_InputActionClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputAction_Factory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputAction_Factory_Statics::NewProp_InputActionClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputAction_Factory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputAction_Factory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputAction_Factory_Statics::ClassParams = {
		&UInputAction_Factory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputAction_Factory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputAction_Factory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInputAction_Factory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputAction_Factory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputAction_Factory()
	{
		if (!Z_Registration_Info_UClass_UInputAction_Factory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputAction_Factory.OuterSingleton, Z_Construct_UClass_UInputAction_Factory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputAction_Factory.OuterSingleton;
	}
	template<> INPUTEDITOR_API UClass* StaticClass<UInputAction_Factory>()
	{
		return UInputAction_Factory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputAction_Factory);
	UInputAction_Factory::~UInputAction_Factory() {}
	void UPlayerMappableInputConfig_Factory::StaticRegisterNativesUPlayerMappableInputConfig_Factory()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerMappableInputConfig_Factory);
	UClass* Z_Construct_UClass_UPlayerMappableInputConfig_Factory_NoRegister()
	{
		return UPlayerMappableInputConfig_Factory::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerMappableInputConfig_Factory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerMappableInputConfig_Factory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_InputEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerMappableInputConfig_Factory_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InputEditorModule.h" },
		{ "ModuleRelativePath", "Public/InputEditorModule.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerMappableInputConfig_Factory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerMappableInputConfig_Factory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerMappableInputConfig_Factory_Statics::ClassParams = {
		&UPlayerMappableInputConfig_Factory::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPlayerMappableInputConfig_Factory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerMappableInputConfig_Factory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerMappableInputConfig_Factory()
	{
		if (!Z_Registration_Info_UClass_UPlayerMappableInputConfig_Factory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerMappableInputConfig_Factory.OuterSingleton, Z_Construct_UClass_UPlayerMappableInputConfig_Factory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerMappableInputConfig_Factory.OuterSingleton;
	}
	template<> INPUTEDITOR_API UClass* StaticClass<UPlayerMappableInputConfig_Factory>()
	{
		return UPlayerMappableInputConfig_Factory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerMappableInputConfig_Factory);
	UPlayerMappableInputConfig_Factory::~UPlayerMappableInputConfig_Factory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_InputEditorModule_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_InputEditorModule_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputMappingContext_Factory, UInputMappingContext_Factory::StaticClass, TEXT("UInputMappingContext_Factory"), &Z_Registration_Info_UClass_UInputMappingContext_Factory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputMappingContext_Factory), 3040118689U) },
		{ Z_Construct_UClass_UInputAction_Factory, UInputAction_Factory::StaticClass, TEXT("UInputAction_Factory"), &Z_Registration_Info_UClass_UInputAction_Factory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputAction_Factory), 1401166220U) },
		{ Z_Construct_UClass_UPlayerMappableInputConfig_Factory, UPlayerMappableInputConfig_Factory::StaticClass, TEXT("UPlayerMappableInputConfig_Factory"), &Z_Registration_Info_UClass_UPlayerMappableInputConfig_Factory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerMappableInputConfig_Factory), 1944531293U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_InputEditorModule_h_3940977718(TEXT("/Script/InputEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_InputEditorModule_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_EnhancedInput_Source_InputEditor_Public_InputEditorModule_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
