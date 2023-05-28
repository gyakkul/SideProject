// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/SampleTools/CreateActorSampleTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCreateActorSampleTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_USingleClickTool();
	SAMPLETOOLSEDITORMODE_API UClass* Z_Construct_UClass_UCreateActorSampleTool();
	SAMPLETOOLSEDITORMODE_API UClass* Z_Construct_UClass_UCreateActorSampleTool_NoRegister();
	SAMPLETOOLSEDITORMODE_API UClass* Z_Construct_UClass_UCreateActorSampleToolBuilder();
	SAMPLETOOLSEDITORMODE_API UClass* Z_Construct_UClass_UCreateActorSampleToolBuilder_NoRegister();
	SAMPLETOOLSEDITORMODE_API UClass* Z_Construct_UClass_UCreateActorSampleToolProperties();
	SAMPLETOOLSEDITORMODE_API UClass* Z_Construct_UClass_UCreateActorSampleToolProperties_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SampleToolsEditorMode();
// End Cross Module References
	void UCreateActorSampleToolBuilder::StaticRegisterNativesUCreateActorSampleToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCreateActorSampleToolBuilder);
	UClass* Z_Construct_UClass_UCreateActorSampleToolBuilder_NoRegister()
	{
		return UCreateActorSampleToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UCreateActorSampleToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCreateActorSampleToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_SampleToolsEditorMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateActorSampleToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Builder for UCreateActorSampleTool\n */" },
		{ "IncludePath", "SampleTools/CreateActorSampleTool.h" },
		{ "ModuleRelativePath", "Private/SampleTools/CreateActorSampleTool.h" },
		{ "ToolTip", "Builder for UCreateActorSampleTool" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCreateActorSampleToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreateActorSampleToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCreateActorSampleToolBuilder_Statics::ClassParams = {
		&UCreateActorSampleToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCreateActorSampleToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateActorSampleToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCreateActorSampleToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UCreateActorSampleToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCreateActorSampleToolBuilder.OuterSingleton, Z_Construct_UClass_UCreateActorSampleToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCreateActorSampleToolBuilder.OuterSingleton;
	}
	template<> SAMPLETOOLSEDITORMODE_API UClass* StaticClass<UCreateActorSampleToolBuilder>()
	{
		return UCreateActorSampleToolBuilder::StaticClass();
	}
	UCreateActorSampleToolBuilder::UCreateActorSampleToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreateActorSampleToolBuilder);
	UCreateActorSampleToolBuilder::~UCreateActorSampleToolBuilder() {}
	void UCreateActorSampleToolProperties::StaticRegisterNativesUCreateActorSampleToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCreateActorSampleToolProperties);
	UClass* Z_Construct_UClass_UCreateActorSampleToolProperties_NoRegister()
	{
		return UCreateActorSampleToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UCreateActorSampleToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlaceOnObjects_MetaData[];
#endif
		static void NewProp_PlaceOnObjects_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PlaceOnObjects;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroundHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCreateActorSampleToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_SampleToolsEditorMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateActorSampleToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings UObject for UCreateActorSampleTool. This UClass inherits from UInteractiveToolPropertySet,\n * which provides an OnModified delegate that the Tool will listen to for changes in property values.\n */" },
		{ "IncludePath", "SampleTools/CreateActorSampleTool.h" },
		{ "ModuleRelativePath", "Private/SampleTools/CreateActorSampleTool.h" },
		{ "ToolTip", "Settings UObject for UCreateActorSampleTool. This UClass inherits from UInteractiveToolPropertySet,\nwhich provides an OnModified delegate that the Tool will listen to for changes in property values." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateActorSampleToolProperties_Statics::NewProp_PlaceOnObjects_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Place actors on existing objects */" },
		{ "DisplayName", "Place On Objects" },
		{ "ModuleRelativePath", "Private/SampleTools/CreateActorSampleTool.h" },
		{ "ToolTip", "Place actors on existing objects" },
	};
#endif
	void Z_Construct_UClass_UCreateActorSampleToolProperties_Statics::NewProp_PlaceOnObjects_SetBit(void* Obj)
	{
		((UCreateActorSampleToolProperties*)Obj)->PlaceOnObjects = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCreateActorSampleToolProperties_Statics::NewProp_PlaceOnObjects = { "PlaceOnObjects", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCreateActorSampleToolProperties), &Z_Construct_UClass_UCreateActorSampleToolProperties_Statics::NewProp_PlaceOnObjects_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCreateActorSampleToolProperties_Statics::NewProp_PlaceOnObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateActorSampleToolProperties_Statics::NewProp_PlaceOnObjects_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateActorSampleToolProperties_Statics::NewProp_GroundHeight_MetaData[] = {
		{ "Category", "Options" },
		{ "ClampMax", "1000000.0" },
		{ "ClampMin", "-1000000" },
		{ "Comment", "/** Height of ground plane */" },
		{ "DisplayName", "Ground Height" },
		{ "ModuleRelativePath", "Private/SampleTools/CreateActorSampleTool.h" },
		{ "ToolTip", "Height of ground plane" },
		{ "UIMax", "1000.0" },
		{ "UIMin", "-1000.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UCreateActorSampleToolProperties_Statics::NewProp_GroundHeight = { "GroundHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCreateActorSampleToolProperties, GroundHeight), METADATA_PARAMS(Z_Construct_UClass_UCreateActorSampleToolProperties_Statics::NewProp_GroundHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateActorSampleToolProperties_Statics::NewProp_GroundHeight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCreateActorSampleToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateActorSampleToolProperties_Statics::NewProp_PlaceOnObjects,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateActorSampleToolProperties_Statics::NewProp_GroundHeight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCreateActorSampleToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreateActorSampleToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCreateActorSampleToolProperties_Statics::ClassParams = {
		&UCreateActorSampleToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCreateActorSampleToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCreateActorSampleToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCreateActorSampleToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateActorSampleToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCreateActorSampleToolProperties()
	{
		if (!Z_Registration_Info_UClass_UCreateActorSampleToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCreateActorSampleToolProperties.OuterSingleton, Z_Construct_UClass_UCreateActorSampleToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCreateActorSampleToolProperties.OuterSingleton;
	}
	template<> SAMPLETOOLSEDITORMODE_API UClass* StaticClass<UCreateActorSampleToolProperties>()
	{
		return UCreateActorSampleToolProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreateActorSampleToolProperties);
	UCreateActorSampleToolProperties::~UCreateActorSampleToolProperties() {}
	void UCreateActorSampleTool::StaticRegisterNativesUCreateActorSampleTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCreateActorSampleTool);
	UClass* Z_Construct_UClass_UCreateActorSampleTool_NoRegister()
	{
		return UCreateActorSampleTool::StaticClass();
	}
	struct Z_Construct_UClass_UCreateActorSampleTool_Statics
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
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCreateActorSampleTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USingleClickTool,
		(UObject* (*)())Z_Construct_UPackage__Script_SampleToolsEditorMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateActorSampleTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UCreateActorSampleTool is an example Tool that drops an empty Actor at each position the user \n * clicks left mouse button. The Actors are placed at the first ray intersection in the scene,\n * or on a ground plane if no scene objects are hit. All the action is in the ::OnClicked handler.\n */" },
		{ "IncludePath", "SampleTools/CreateActorSampleTool.h" },
		{ "ModuleRelativePath", "Private/SampleTools/CreateActorSampleTool.h" },
		{ "ToolTip", "UCreateActorSampleTool is an example Tool that drops an empty Actor at each position the user\nclicks left mouse button. The Actors are placed at the first ray intersection in the scene,\nor on a ground plane if no scene objects are hit. All the action is in the ::OnClicked handler." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCreateActorSampleTool_Statics::NewProp_Properties_MetaData[] = {
		{ "ModuleRelativePath", "Private/SampleTools/CreateActorSampleTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCreateActorSampleTool_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCreateActorSampleTool, Properties), Z_Construct_UClass_UCreateActorSampleToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCreateActorSampleTool_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateActorSampleTool_Statics::NewProp_Properties_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCreateActorSampleTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCreateActorSampleTool_Statics::NewProp_Properties,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCreateActorSampleTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCreateActorSampleTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCreateActorSampleTool_Statics::ClassParams = {
		&UCreateActorSampleTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCreateActorSampleTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCreateActorSampleTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCreateActorSampleTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCreateActorSampleTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCreateActorSampleTool()
	{
		if (!Z_Registration_Info_UClass_UCreateActorSampleTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCreateActorSampleTool.OuterSingleton, Z_Construct_UClass_UCreateActorSampleTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCreateActorSampleTool.OuterSingleton;
	}
	template<> SAMPLETOOLSEDITORMODE_API UClass* StaticClass<UCreateActorSampleTool>()
	{
		return UCreateActorSampleTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCreateActorSampleTool);
	UCreateActorSampleTool::~UCreateActorSampleTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_SampleToolsEditorMode_Source_Private_SampleTools_CreateActorSampleTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_SampleToolsEditorMode_Source_Private_SampleTools_CreateActorSampleTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCreateActorSampleToolBuilder, UCreateActorSampleToolBuilder::StaticClass, TEXT("UCreateActorSampleToolBuilder"), &Z_Registration_Info_UClass_UCreateActorSampleToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCreateActorSampleToolBuilder), 3401391643U) },
		{ Z_Construct_UClass_UCreateActorSampleToolProperties, UCreateActorSampleToolProperties::StaticClass, TEXT("UCreateActorSampleToolProperties"), &Z_Registration_Info_UClass_UCreateActorSampleToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCreateActorSampleToolProperties), 1084809450U) },
		{ Z_Construct_UClass_UCreateActorSampleTool, UCreateActorSampleTool::StaticClass, TEXT("UCreateActorSampleTool"), &Z_Registration_Info_UClass_UCreateActorSampleTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCreateActorSampleTool), 1945898847U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_SampleToolsEditorMode_Source_Private_SampleTools_CreateActorSampleTool_h_2180654280(TEXT("/Script/SampleToolsEditorMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_SampleToolsEditorMode_Source_Private_SampleTools_CreateActorSampleTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_SampleToolsEditorMode_Source_Private_SampleTools_CreateActorSampleTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
