// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefaultTools/CreateWidgetTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateWidgetTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UWidgetBaseBehavior_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WidgetEditorToolPalette();
	WIDGETEDITORTOOLPALETTE_API UClass* Z_Construct_UClass_UCreateWidgetTool();
	WIDGETEDITORTOOLPALETTE_API UClass* Z_Construct_UClass_UCreateWidgetTool_NoRegister();
	WIDGETEDITORTOOLPALETTE_API UClass* Z_Construct_UClass_UCreateWidgetToolBuilder();
	WIDGETEDITORTOOLPALETTE_API UClass* Z_Construct_UClass_UCreateWidgetToolBuilder_NoRegister();
	WIDGETEDITORTOOLPALETTE_API UClass* Z_Construct_UClass_UCreateWidgetToolProperties();
	WIDGETEDITORTOOLPALETTE_API UClass* Z_Construct_UClass_UCreateWidgetToolProperties_NoRegister();
// End Cross Module References
	void UCreateWidgetToolBuilder::StaticRegisterNativesUCreateWidgetToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCreateWidgetToolBuilder);
	UClass* Z_Construct_UClass_UCreateWidgetToolBuilder_NoRegister()
	{
		return UCreateWidgetToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UCreateWidgetToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCreateWidgetToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_WidgetEditorToolPalette,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateWidgetToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Builder for UCreateWidgetTool\n */" },
		{ "IncludePath", "DefaultTools/CreateWidgetTool.h" },
		{ "ModuleRelativePath", "Public/DefaultTools/CreateWidgetTool.h" },
		{ "ToolTip", "Builder for UCreateWidgetTool" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCreateWidgetToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreateWidgetToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCreateWidgetToolBuilder_Statics::ClassParams = {
		&UCreateWidgetToolBuilder::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCreateWidgetToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateWidgetToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCreateWidgetToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UCreateWidgetToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCreateWidgetToolBuilder.OuterSingleton, Z_Construct_UClass_UCreateWidgetToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCreateWidgetToolBuilder.OuterSingleton;
	}
	template<> WIDGETEDITORTOOLPALETTE_API UClass* StaticClass<UCreateWidgetToolBuilder>()
	{
		return UCreateWidgetToolBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreateWidgetToolBuilder);
	UCreateWidgetToolBuilder::~UCreateWidgetToolBuilder() {}
	void UCreateWidgetToolProperties::StaticRegisterNativesUCreateWidgetToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCreateWidgetToolProperties);
	UClass* Z_Construct_UClass_UCreateWidgetToolProperties_NoRegister()
	{
		return UCreateWidgetToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UCreateWidgetToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCreateWidgetToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_WidgetEditorToolPalette,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateWidgetToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings UObject for UCreateWidgetTool. This UClass inherits from UInteractiveToolPropertySet,\n * which provides an OnModified delegate that the Tool will listen to for changes in property values.\n */" },
		{ "IncludePath", "DefaultTools/CreateWidgetTool.h" },
		{ "ModuleRelativePath", "Public/DefaultTools/CreateWidgetTool.h" },
		{ "ToolTip", "Settings UObject for UCreateWidgetTool. This UClass inherits from UInteractiveToolPropertySet,\nwhich provides an OnModified delegate that the Tool will listen to for changes in property values." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCreateWidgetToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreateWidgetToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCreateWidgetToolProperties_Statics::ClassParams = {
		&UCreateWidgetToolProperties::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCreateWidgetToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateWidgetToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCreateWidgetToolProperties()
	{
		if (!Z_Registration_Info_UClass_UCreateWidgetToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCreateWidgetToolProperties.OuterSingleton, Z_Construct_UClass_UCreateWidgetToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCreateWidgetToolProperties.OuterSingleton;
	}
	template<> WIDGETEDITORTOOLPALETTE_API UClass* StaticClass<UCreateWidgetToolProperties>()
	{
		return UCreateWidgetToolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreateWidgetToolProperties);
	UCreateWidgetToolProperties::~UCreateWidgetToolProperties() {}
	void UCreateWidgetTool::StaticRegisterNativesUCreateWidgetTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCreateWidgetTool);
	UClass* Z_Construct_UClass_UCreateWidgetTool_NoRegister()
	{
		return UCreateWidgetTool::StaticClass();
	}
	struct Z_Construct_UClass_UCreateWidgetTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Properties;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCreateWidgetTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleClickTool,
		(UObject* (*)())Z_Construct_UPackage__Script_WidgetEditorToolPalette,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateWidgetTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UCreateWidgetTool is a tool that allows for a specific widget to be created on click\n * It allows for fast widget creation via hotkeys. The specific OnClick behavior can be customized\n * by specifying a different create widget tool builder class in editor per project user settings.\n */" },
		{ "IncludePath", "DefaultTools/CreateWidgetTool.h" },
		{ "ModuleRelativePath", "Public/DefaultTools/CreateWidgetTool.h" },
		{ "ToolTip", "UCreateWidgetTool is a tool that allows for a specific widget to be created on click\nIt allows for fast widget creation via hotkeys. The specific OnClick behavior can be customized\nby specifying a different create widget tool builder class in editor per project user settings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateWidgetTool_Statics::NewProp_Properties_MetaData[] = {
		{ "ModuleRelativePath", "Public/DefaultTools/CreateWidgetTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCreateWidgetTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCreateWidgetTool, Properties), Z_Construct_UClass_UCreateWidgetToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCreateWidgetTool_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateWidgetTool_Statics::NewProp_Properties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCreateWidgetTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateWidgetTool_Statics::NewProp_Properties,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UCreateWidgetTool_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UWidgetBaseBehavior_NoRegister, (int32)VTABLE_OFFSET(UCreateWidgetTool, IWidgetBaseBehavior), false },  // 3142936214
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCreateWidgetTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreateWidgetTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCreateWidgetTool_Statics::ClassParams = {
		&UCreateWidgetTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCreateWidgetTool_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCreateWidgetTool_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCreateWidgetTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateWidgetTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCreateWidgetTool()
	{
		if (!Z_Registration_Info_UClass_UCreateWidgetTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCreateWidgetTool.OuterSingleton, Z_Construct_UClass_UCreateWidgetTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCreateWidgetTool.OuterSingleton;
	}
	template<> WIDGETEDITORTOOLPALETTE_API UClass* StaticClass<UCreateWidgetTool>()
	{
		return UCreateWidgetTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreateWidgetTool);
	UCreateWidgetTool::~UCreateWidgetTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_DefaultTools_CreateWidgetTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_DefaultTools_CreateWidgetTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCreateWidgetToolBuilder, UCreateWidgetToolBuilder::StaticClass, TEXT("UCreateWidgetToolBuilder"), &Z_Registration_Info_UClass_UCreateWidgetToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCreateWidgetToolBuilder), 3050691857U) },
		{ Z_Construct_UClass_UCreateWidgetToolProperties, UCreateWidgetToolProperties::StaticClass, TEXT("UCreateWidgetToolProperties"), &Z_Registration_Info_UClass_UCreateWidgetToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCreateWidgetToolProperties), 2632119290U) },
		{ Z_Construct_UClass_UCreateWidgetTool, UCreateWidgetTool::StaticClass, TEXT("UCreateWidgetTool"), &Z_Registration_Info_UClass_UCreateWidgetTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCreateWidgetTool), 728050626U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_DefaultTools_CreateWidgetTool_h_4145814259(TEXT("/Script/WidgetEditorToolPalette"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_DefaultTools_CreateWidgetTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_DefaultTools_CreateWidgetTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
