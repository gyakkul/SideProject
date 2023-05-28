// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Tools/UEdMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUEdMode() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	EDITORINTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UEdModeInteractiveToolsContext_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEdMode();
	UNREALED_API UClass* Z_Construct_UClass_UEdMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UEdMode::StaticRegisterNativesUEdMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdMode);
	UClass* Z_Construct_UClass_UEdMode_NoRegister()
	{
		return UEdMode::StaticClass();
	}
	struct Z_Construct_UClass_UEdMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModeToolsContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ModeToolsContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_SettingsClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SettingsObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SettingsObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEdMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class for all editor modes.\n */" },
		{ "IncludePath", "Tools/UEdMode.h" },
		{ "ModuleRelativePath", "Public/Tools/UEdMode.h" },
		{ "ToolTip", "Base class for all editor modes." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdMode_Statics::NewProp_ModeToolsContext_MetaData[] = {
		{ "Comment", "/** The ToolsContext for this Mode, created as a child of the EditorToolsContext (shares InputRouter) */" },
		{ "ModuleRelativePath", "Public/Tools/UEdMode.h" },
		{ "ToolTip", "The ToolsContext for this Mode, created as a child of the EditorToolsContext (shares InputRouter)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEdMode_Statics::NewProp_ModeToolsContext = { "ModeToolsContext", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdMode, ModeToolsContext), Z_Construct_UClass_UEdModeInteractiveToolsContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEdMode_Statics::NewProp_ModeToolsContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdMode_Statics::NewProp_ModeToolsContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdMode_Statics::NewProp_SettingsClass_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tools/UEdMode.h" },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UEdMode_Statics::NewProp_SettingsClass = { "SettingsClass", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdMode, SettingsClass), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEdMode_Statics::NewProp_SettingsClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdMode_Statics::NewProp_SettingsClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEdMode_Statics::NewProp_SettingsObject_MetaData[] = {
		{ "ModuleRelativePath", "Public/Tools/UEdMode.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UEdMode_Statics::NewProp_SettingsObject = { "SettingsObject", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEdMode, SettingsObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UEdMode_Statics::NewProp_SettingsObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEdMode_Statics::NewProp_SettingsObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdMode_Statics::NewProp_ModeToolsContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdMode_Statics::NewProp_SettingsClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdMode_Statics::NewProp_SettingsObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEdMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdMode_Statics::ClassParams = {
		&UEdMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEdMode_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEdMode_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UEdMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEdMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEdMode()
	{
		if (!Z_Registration_Info_UClass_UEdMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdMode.OuterSingleton, Z_Construct_UClass_UEdMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEdMode.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UEdMode>()
	{
		return UEdMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEdMode);
	UEdMode::~UEdMode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tools_UEdMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tools_UEdMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEdMode, UEdMode::StaticClass, TEXT("UEdMode"), &Z_Registration_Info_UClass_UEdMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdMode), 3758040417U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tools_UEdMode_h_1339817513(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tools_UEdMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tools_UEdMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
