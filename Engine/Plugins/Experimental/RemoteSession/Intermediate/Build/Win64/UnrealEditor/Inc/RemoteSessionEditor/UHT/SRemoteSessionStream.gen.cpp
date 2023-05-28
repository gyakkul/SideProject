// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/SRemoteSessionStream.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSRemoteSessionStream() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	REMOTESESSIONEDITOR_API UClass* Z_Construct_UClass_URemoteSessionStreamSettings();
	REMOTESESSIONEDITOR_API UClass* Z_Construct_UClass_URemoteSessionStreamSettings_NoRegister();
	REMOTESESSIONEDITOR_API UClass* Z_Construct_UClass_URemoteSessionStreamWidgetUserData();
	REMOTESESSIONEDITOR_API UClass* Z_Construct_UClass_URemoteSessionStreamWidgetUserData_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RemoteSessionEditor();
// End Cross Module References
	void URemoteSessionStreamSettings::StaticRegisterNativesURemoteSessionStreamSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoteSessionStreamSettings);
	UClass* Z_Construct_UClass_URemoteSessionStreamSettings_NoRegister()
	{
		return URemoteSessionStreamSettings::StaticClass();
	}
	struct Z_Construct_UClass_URemoteSessionStreamSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsVerticalSplitterOrientation_MetaData[];
#endif
		static void NewProp_bIsVerticalSplitterOrientation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsVerticalSplitterOrientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowCheckered_MetaData[];
#endif
		static void NewProp_bShowCheckered_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowCheckered;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bScaleToFit_MetaData[];
#endif
		static void NewProp_bScaleToFit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleToFit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteSessionStreamSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteSessionEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteSessionStreamSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Settings for the remote session stream tab.\n */" },
		{ "IncludePath", "Widgets/SRemoteSessionStream.h" },
		{ "ModuleRelativePath", "Private/Widgets/SRemoteSessionStream.h" },
		{ "ToolTip", "Settings for the remote session stream tab." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteSessionStreamSettings_Statics::NewProp_bIsVerticalSplitterOrientation_MetaData[] = {
		{ "ModuleRelativePath", "Private/Widgets/SRemoteSessionStream.h" },
	};
#endif
	void Z_Construct_UClass_URemoteSessionStreamSettings_Statics::NewProp_bIsVerticalSplitterOrientation_SetBit(void* Obj)
	{
		((URemoteSessionStreamSettings*)Obj)->bIsVerticalSplitterOrientation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteSessionStreamSettings_Statics::NewProp_bIsVerticalSplitterOrientation = { "bIsVerticalSplitterOrientation", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemoteSessionStreamSettings), &Z_Construct_UClass_URemoteSessionStreamSettings_Statics::NewProp_bIsVerticalSplitterOrientation_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteSessionStreamSettings_Statics::NewProp_bIsVerticalSplitterOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteSessionStreamSettings_Statics::NewProp_bIsVerticalSplitterOrientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteSessionStreamSettings_Statics::NewProp_bShowCheckered_MetaData[] = {
		{ "ModuleRelativePath", "Private/Widgets/SRemoteSessionStream.h" },
	};
#endif
	void Z_Construct_UClass_URemoteSessionStreamSettings_Statics::NewProp_bShowCheckered_SetBit(void* Obj)
	{
		((URemoteSessionStreamSettings*)Obj)->bShowCheckered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteSessionStreamSettings_Statics::NewProp_bShowCheckered = { "bShowCheckered", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemoteSessionStreamSettings), &Z_Construct_UClass_URemoteSessionStreamSettings_Statics::NewProp_bShowCheckered_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteSessionStreamSettings_Statics::NewProp_bShowCheckered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteSessionStreamSettings_Statics::NewProp_bShowCheckered_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteSessionStreamSettings_Statics::NewProp_bScaleToFit_MetaData[] = {
		{ "ModuleRelativePath", "Private/Widgets/SRemoteSessionStream.h" },
	};
#endif
	void Z_Construct_UClass_URemoteSessionStreamSettings_Statics::NewProp_bScaleToFit_SetBit(void* Obj)
	{
		((URemoteSessionStreamSettings*)Obj)->bScaleToFit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URemoteSessionStreamSettings_Statics::NewProp_bScaleToFit = { "bScaleToFit", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URemoteSessionStreamSettings), &Z_Construct_UClass_URemoteSessionStreamSettings_Statics::NewProp_bScaleToFit_SetBit, METADATA_PARAMS(Z_Construct_UClass_URemoteSessionStreamSettings_Statics::NewProp_bScaleToFit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteSessionStreamSettings_Statics::NewProp_bScaleToFit_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoteSessionStreamSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteSessionStreamSettings_Statics::NewProp_bIsVerticalSplitterOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteSessionStreamSettings_Statics::NewProp_bShowCheckered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteSessionStreamSettings_Statics::NewProp_bScaleToFit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteSessionStreamSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteSessionStreamSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoteSessionStreamSettings_Statics::ClassParams = {
		&URemoteSessionStreamSettings::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URemoteSessionStreamSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoteSessionStreamSettings_Statics::PropPointers),
		0,
		0x000800A4u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteSessionStreamSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteSessionStreamSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteSessionStreamSettings()
	{
		if (!Z_Registration_Info_UClass_URemoteSessionStreamSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoteSessionStreamSettings.OuterSingleton, Z_Construct_UClass_URemoteSessionStreamSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoteSessionStreamSettings.OuterSingleton;
	}
	template<> REMOTESESSIONEDITOR_API UClass* StaticClass<URemoteSessionStreamSettings>()
	{
		return URemoteSessionStreamSettings::StaticClass();
	}
	URemoteSessionStreamSettings::URemoteSessionStreamSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteSessionStreamSettings);
	URemoteSessionStreamSettings::~URemoteSessionStreamSettings() {}
	void URemoteSessionStreamWidgetUserData::StaticRegisterNativesURemoteSessionStreamWidgetUserData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoteSessionStreamWidgetUserData);
	UClass* Z_Construct_UClass_URemoteSessionStreamWidgetUserData_NoRegister()
	{
		return URemoteSessionStreamWidgetUserData::StaticClass();
	}
	struct Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Port_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_Port;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteSessionEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * URemoteSessionStreamWidgetUserData\n */" },
		{ "IncludePath", "Widgets/SRemoteSessionStream.h" },
		{ "ModuleRelativePath", "Private/Widgets/SRemoteSessionStream.h" },
		{ "ToolTip", "URemoteSessionStreamWidgetUserData" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::NewProp_WidgetClass_MetaData[] = {
		{ "Category", "Remote Session" },
		{ "ModuleRelativePath", "Private/Widgets/SRemoteSessionStream.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::NewProp_WidgetClass = { "WidgetClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteSessionStreamWidgetUserData, WidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::NewProp_WidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::NewProp_WidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Remote Session" },
		{ "ModuleRelativePath", "Private/Widgets/SRemoteSessionStream.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteSessionStreamWidgetUserData, Size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "Category", "Remote Session" },
		{ "ModuleRelativePath", "Private/Widgets/SRemoteSessionStream.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0014040000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteSessionStreamWidgetUserData, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::NewProp_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::NewProp_RenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::NewProp_Port_MetaData[] = {
		{ "Category", "Remote Session" },
		{ "ModuleRelativePath", "Private/Widgets/SRemoteSessionStream.h" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteSessionStreamWidgetUserData, Port), METADATA_PARAMS(Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::NewProp_Port_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::NewProp_Port_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::NewProp_WidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::NewProp_Port,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteSessionStreamWidgetUserData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::ClassParams = {
		&URemoteSessionStreamWidgetUserData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::PropPointers),
		0,
		0x002810A0u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteSessionStreamWidgetUserData()
	{
		if (!Z_Registration_Info_UClass_URemoteSessionStreamWidgetUserData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoteSessionStreamWidgetUserData.OuterSingleton, Z_Construct_UClass_URemoteSessionStreamWidgetUserData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoteSessionStreamWidgetUserData.OuterSingleton;
	}
	template<> REMOTESESSIONEDITOR_API UClass* StaticClass<URemoteSessionStreamWidgetUserData>()
	{
		return URemoteSessionStreamWidgetUserData::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteSessionStreamWidgetUserData);
	URemoteSessionStreamWidgetUserData::~URemoteSessionStreamWidgetUserData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSessionEditor_Private_Widgets_SRemoteSessionStream_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSessionEditor_Private_Widgets_SRemoteSessionStream_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemoteSessionStreamSettings, URemoteSessionStreamSettings::StaticClass, TEXT("URemoteSessionStreamSettings"), &Z_Registration_Info_UClass_URemoteSessionStreamSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoteSessionStreamSettings), 614788831U) },
		{ Z_Construct_UClass_URemoteSessionStreamWidgetUserData, URemoteSessionStreamWidgetUserData::StaticClass, TEXT("URemoteSessionStreamWidgetUserData"), &Z_Registration_Info_UClass_URemoteSessionStreamWidgetUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoteSessionStreamWidgetUserData), 3153133258U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSessionEditor_Private_Widgets_SRemoteSessionStream_h_2306560663(TEXT("/Script/RemoteSessionEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSessionEditor_Private_Widgets_SRemoteSessionStream_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RemoteSession_Source_RemoteSessionEditor_Private_Widgets_SRemoteSessionStream_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
