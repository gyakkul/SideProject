// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DefaultTools/RectangleSelectTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRectangleSelectTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UWidgetBaseBehavior_NoRegister();
	UPackage* Z_Construct_UPackage__Script_WidgetEditorToolPalette();
	WIDGETEDITORTOOLPALETTE_API UClass* Z_Construct_UClass_URectangleSelectProperties();
	WIDGETEDITORTOOLPALETTE_API UClass* Z_Construct_UClass_URectangleSelectProperties_NoRegister();
	WIDGETEDITORTOOLPALETTE_API UClass* Z_Construct_UClass_URectangleSelectTool();
	WIDGETEDITORTOOLPALETTE_API UClass* Z_Construct_UClass_URectangleSelectTool_NoRegister();
	WIDGETEDITORTOOLPALETTE_API UClass* Z_Construct_UClass_URectangleSelectToolBuilder();
	WIDGETEDITORTOOLPALETTE_API UClass* Z_Construct_UClass_URectangleSelectToolBuilder_NoRegister();
// End Cross Module References
	void URectangleSelectToolBuilder::StaticRegisterNativesURectangleSelectToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URectangleSelectToolBuilder);
	UClass* Z_Construct_UClass_URectangleSelectToolBuilder_NoRegister()
	{
		return URectangleSelectToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_URectangleSelectToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URectangleSelectToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_WidgetEditorToolPalette,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectangleSelectToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Builder for URectangleSelectTool\n */" },
		{ "IncludePath", "DefaultTools/RectangleSelectTool.h" },
		{ "ModuleRelativePath", "Public/DefaultTools/RectangleSelectTool.h" },
		{ "ToolTip", "Builder for URectangleSelectTool" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URectangleSelectToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URectangleSelectToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URectangleSelectToolBuilder_Statics::ClassParams = {
		&URectangleSelectToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URectangleSelectToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URectangleSelectToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URectangleSelectToolBuilder()
	{
		if (!Z_Registration_Info_UClass_URectangleSelectToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URectangleSelectToolBuilder.OuterSingleton, Z_Construct_UClass_URectangleSelectToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URectangleSelectToolBuilder.OuterSingleton;
	}
	template<> WIDGETEDITORTOOLPALETTE_API UClass* StaticClass<URectangleSelectToolBuilder>()
	{
		return URectangleSelectToolBuilder::StaticClass();
	}
	URectangleSelectToolBuilder::URectangleSelectToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URectangleSelectToolBuilder);
	URectangleSelectToolBuilder::~URectangleSelectToolBuilder() {}
	void URectangleSelectProperties::StaticRegisterNativesURectangleSelectProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URectangleSelectProperties);
	UClass* Z_Construct_UClass_URectangleSelectProperties_NoRegister()
	{
		return URectangleSelectProperties::StaticClass();
	}
	struct Z_Construct_UClass_URectangleSelectProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URectangleSelectProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_WidgetEditorToolPalette,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectangleSelectProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Property set for the URectangleSelectTool\n * \n * Note: Since we don't expose this for editing via details (yet), could instead be member variables on tool.\n */" },
		{ "IncludePath", "DefaultTools/RectangleSelectTool.h" },
		{ "ModuleRelativePath", "Public/DefaultTools/RectangleSelectTool.h" },
		{ "ToolTip", "Property set for the URectangleSelectTool\n\nNote: Since we don't expose this for editing via details (yet), could instead be member variables on tool." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URectangleSelectProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URectangleSelectProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URectangleSelectProperties_Statics::ClassParams = {
		&URectangleSelectProperties::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_URectangleSelectProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URectangleSelectProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URectangleSelectProperties()
	{
		if (!Z_Registration_Info_UClass_URectangleSelectProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URectangleSelectProperties.OuterSingleton, Z_Construct_UClass_URectangleSelectProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URectangleSelectProperties.OuterSingleton;
	}
	template<> WIDGETEDITORTOOLPALETTE_API UClass* StaticClass<URectangleSelectProperties>()
	{
		return URectangleSelectProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URectangleSelectProperties);
	URectangleSelectProperties::~URectangleSelectProperties() {}
	void URectangleSelectTool::StaticRegisterNativesURectangleSelectTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URectangleSelectTool);
	UClass* Z_Construct_UClass_URectangleSelectTool_NoRegister()
	{
		return URectangleSelectTool::StaticClass();
	}
	struct Z_Construct_UClass_URectangleSelectTool_Statics
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
	UObject* (*const Z_Construct_UClass_URectangleSelectTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_WidgetEditorToolPalette,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectangleSelectTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * URectangleSelectTool is a simple marque widget select tool.\n */" },
		{ "IncludePath", "DefaultTools/RectangleSelectTool.h" },
		{ "ModuleRelativePath", "Public/DefaultTools/RectangleSelectTool.h" },
		{ "ToolTip", "URectangleSelectTool is a simple marque widget select tool." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URectangleSelectTool_Statics::NewProp_Properties_MetaData[] = {
		{ "Comment", "/** Properties of the tool are stored here */" },
		{ "ModuleRelativePath", "Public/DefaultTools/RectangleSelectTool.h" },
		{ "ToolTip", "Properties of the tool are stored here" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URectangleSelectTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URectangleSelectTool, Properties), Z_Construct_UClass_URectangleSelectProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URectangleSelectTool_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URectangleSelectTool_Statics::NewProp_Properties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URectangleSelectTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URectangleSelectTool_Statics::NewProp_Properties,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_URectangleSelectTool_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UWidgetBaseBehavior_NoRegister, (int32)VTABLE_OFFSET(URectangleSelectTool, IWidgetBaseBehavior), false },  // 3142936214
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URectangleSelectTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URectangleSelectTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URectangleSelectTool_Statics::ClassParams = {
		&URectangleSelectTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URectangleSelectTool_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URectangleSelectTool_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_URectangleSelectTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URectangleSelectTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URectangleSelectTool()
	{
		if (!Z_Registration_Info_UClass_URectangleSelectTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URectangleSelectTool.OuterSingleton, Z_Construct_UClass_URectangleSelectTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URectangleSelectTool.OuterSingleton;
	}
	template<> WIDGETEDITORTOOLPALETTE_API UClass* StaticClass<URectangleSelectTool>()
	{
		return URectangleSelectTool::StaticClass();
	}
	URectangleSelectTool::URectangleSelectTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URectangleSelectTool);
	URectangleSelectTool::~URectangleSelectTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_DefaultTools_RectangleSelectTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_DefaultTools_RectangleSelectTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URectangleSelectToolBuilder, URectangleSelectToolBuilder::StaticClass, TEXT("URectangleSelectToolBuilder"), &Z_Registration_Info_UClass_URectangleSelectToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URectangleSelectToolBuilder), 4086439794U) },
		{ Z_Construct_UClass_URectangleSelectProperties, URectangleSelectProperties::StaticClass, TEXT("URectangleSelectProperties"), &Z_Registration_Info_UClass_URectangleSelectProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URectangleSelectProperties), 3516815804U) },
		{ Z_Construct_UClass_URectangleSelectTool, URectangleSelectTool::StaticClass, TEXT("URectangleSelectTool"), &Z_Registration_Info_UClass_URectangleSelectTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URectangleSelectTool), 2324029397U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_DefaultTools_RectangleSelectTool_h_346217286(TEXT("/Script/WidgetEditorToolPalette"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_DefaultTools_RectangleSelectTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_WidgetEditorToolPalette_Source_WidgetEditorToolPalette_Public_DefaultTools_RectangleSelectTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
