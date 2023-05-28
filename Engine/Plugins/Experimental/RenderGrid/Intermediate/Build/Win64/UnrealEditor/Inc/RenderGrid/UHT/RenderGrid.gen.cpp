// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RenderGrid/RenderGrid.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRenderGrid() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelineOutputSetting_NoRegister();
	MOVIERENDERPIPELINECORE_API UClass* Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlPreset_NoRegister();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGrid();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGrid_NoRegister();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridDefaults();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridDefaults_NoRegister();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridJob();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridJob_NoRegister();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridPropsSourceBase_NoRegister();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridQueue_NoRegister();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridSettings();
	RENDERGRID_API UClass* Z_Construct_UClass_URenderGridSettings_NoRegister();
	RENDERGRID_API UEnum* Z_Construct_UEnum_RenderGrid_ERenderGridPropsSourceType();
	RENDERGRID_API UScriptStruct* Z_Construct_UScriptStruct_FRenderGridRemoteControlPropertyData();
	UPackage* Z_Construct_UPackage__Script_RenderGrid();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RenderGridRemoteControlPropertyData;
class UScriptStruct* FRenderGridRemoteControlPropertyData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RenderGridRemoteControlPropertyData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RenderGridRemoteControlPropertyData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRenderGridRemoteControlPropertyData, (UObject*)Z_Construct_UPackage__Script_RenderGrid(), TEXT("RenderGridRemoteControlPropertyData"));
	}
	return Z_Registration_Info_UScriptStruct_RenderGridRemoteControlPropertyData.OuterSingleton;
}
template<> RENDERGRID_API UScriptStruct* StaticStruct<FRenderGridRemoteControlPropertyData>()
{
	return FRenderGridRemoteControlPropertyData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRenderGridRemoteControlPropertyData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Bytes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bytes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bytes;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderGridRemoteControlPropertyData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This struct contains the data for a certain remote control property.\n * \n * It's currently simply a wrapper around a byte array.\n * This struct is needed so that that byte array can be used in another UPROPERTY container (TMap, TArray, etc).\n */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "This struct contains the data for a certain remote control property.\n\nIt's currently simply a wrapper around a byte array.\nThis struct is needed so that that byte array can be used in another UPROPERTY container (TMap, TArray, etc)." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRenderGridRemoteControlPropertyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRenderGridRemoteControlPropertyData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRenderGridRemoteControlPropertyData_Statics::NewProp_Bytes_Inner = { "Bytes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRenderGridRemoteControlPropertyData_Statics::NewProp_Bytes_MetaData[] = {
		{ "Comment", "/** The property data, as bytes. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "The property data, as bytes." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FRenderGridRemoteControlPropertyData_Statics::NewProp_Bytes = { "Bytes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRenderGridRemoteControlPropertyData, Bytes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderGridRemoteControlPropertyData_Statics::NewProp_Bytes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderGridRemoteControlPropertyData_Statics::NewProp_Bytes_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRenderGridRemoteControlPropertyData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderGridRemoteControlPropertyData_Statics::NewProp_Bytes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRenderGridRemoteControlPropertyData_Statics::NewProp_Bytes,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRenderGridRemoteControlPropertyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RenderGrid,
		nullptr,
		&NewStructOps,
		"RenderGridRemoteControlPropertyData",
		sizeof(FRenderGridRemoteControlPropertyData),
		alignof(FRenderGridRemoteControlPropertyData),
		Z_Construct_UScriptStruct_FRenderGridRemoteControlPropertyData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderGridRemoteControlPropertyData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRenderGridRemoteControlPropertyData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRenderGridRemoteControlPropertyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRenderGridRemoteControlPropertyData()
	{
		if (!Z_Registration_Info_UScriptStruct_RenderGridRemoteControlPropertyData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RenderGridRemoteControlPropertyData.InnerSingleton, Z_Construct_UScriptStruct_FRenderGridRemoteControlPropertyData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RenderGridRemoteControlPropertyData.InnerSingleton;
	}
	void URenderGridSettings::StaticRegisterNativesURenderGridSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderGridSettings);
	UClass* Z_Construct_UClass_URenderGridSettings_NoRegister()
	{
		return URenderGridSettings::StaticClass();
	}
	struct Z_Construct_UClass_URenderGridSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_PropsSourceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropsSourceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PropsSourceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropsSourceOrigin_RemoteControl_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropsSourceOrigin_RemoteControl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedPropsSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedPropsSource;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CachedPropsSourceType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedPropsSourceType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CachedPropsSourceType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedPropsSourceOriginWeakPtr_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_CachedPropsSourceOriginWeakPtr;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderGridSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderGrid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridSettings_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This class contains the default values of render grid jobs.\n *\n * This is placed in a separate class, primarily so that it be separated easily from the render grid when using the details view widget.\n */" },
		{ "IncludePath", "RenderGrid/RenderGrid.h" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "This class contains the default values of render grid jobs.\n\nThis is placed in a separate class, primarily so that it be separated easily from the render grid when using the details view widget." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URenderGridSettings_Statics::NewProp_PropsSourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridSettings_Statics::NewProp_PropsSourceType_MetaData[] = {
		{ "Comment", "/*EditInstanceOnly, Category=\"Render Grid\", Meta=(DisplayName=\"Properties Type\")*/" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "EditInstanceOnly, Category=\"Render Grid\", Meta=(DisplayName=\"Properties Type\")" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URenderGridSettings_Statics::NewProp_PropsSourceType = { "PropsSourceType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridSettings, PropsSourceType), Z_Construct_UEnum_RenderGrid_ERenderGridPropsSourceType, METADATA_PARAMS(Z_Construct_UClass_URenderGridSettings_Statics::NewProp_PropsSourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridSettings_Statics::NewProp_PropsSourceType_MetaData)) }; // 2127287017
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridSettings_Statics::NewProp_PropsSourceOrigin_RemoteControl_MetaData[] = {
		{ "Category", "Render Grid" },
		{ "Comment", "/*, EditCondition=\"PropsSourceType == ERenderGridPropsSourceType::RemoteControl\", EditConditionHides*/" },
		{ "DisplayName", "Remote Control Preset" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", ", EditCondition=\"PropsSourceType == ERenderGridPropsSourceType::RemoteControl\", EditConditionHides" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URenderGridSettings_Statics::NewProp_PropsSourceOrigin_RemoteControl = { "PropsSourceOrigin_RemoteControl", nullptr, (EPropertyFlags)0x0014000000000801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridSettings, PropsSourceOrigin_RemoteControl), Z_Construct_UClass_URemoteControlPreset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URenderGridSettings_Statics::NewProp_PropsSourceOrigin_RemoteControl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridSettings_Statics::NewProp_PropsSourceOrigin_RemoteControl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridSettings_Statics::NewProp_CachedPropsSource_MetaData[] = {
		{ "Comment", "/** GetPropsSource calls are somewhat expensive, we speed that up by caching the result (the PropsSource) that has been last outputted by that function. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "GetPropsSource calls are somewhat expensive, we speed that up by caching the result (the PropsSource) that has been last outputted by that function." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URenderGridSettings_Statics::NewProp_CachedPropsSource = { "CachedPropsSource", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridSettings, CachedPropsSource), Z_Construct_UClass_URenderGridPropsSourceBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URenderGridSettings_Statics::NewProp_CachedPropsSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridSettings_Statics::NewProp_CachedPropsSource_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URenderGridSettings_Statics::NewProp_CachedPropsSourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridSettings_Statics::NewProp_CachedPropsSourceType_MetaData[] = {
		{ "Comment", "/** GetPropsSource calls are somewhat expensive, we speed that up by caching the PropsSourceType last used in that function. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "GetPropsSource calls are somewhat expensive, we speed that up by caching the PropsSourceType last used in that function." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_URenderGridSettings_Statics::NewProp_CachedPropsSourceType = { "CachedPropsSourceType", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridSettings, CachedPropsSourceType), Z_Construct_UEnum_RenderGrid_ERenderGridPropsSourceType, METADATA_PARAMS(Z_Construct_UClass_URenderGridSettings_Statics::NewProp_CachedPropsSourceType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridSettings_Statics::NewProp_CachedPropsSourceType_MetaData)) }; // 2127287017
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridSettings_Statics::NewProp_CachedPropsSourceOriginWeakPtr_MetaData[] = {
		{ "Comment", "/** GetPropsSource calls are somewhat expensive, we speed that up by caching the PropsSourceOrigin last used in that function. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "GetPropsSource calls are somewhat expensive, we speed that up by caching the PropsSourceOrigin last used in that function." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_URenderGridSettings_Statics::NewProp_CachedPropsSourceOriginWeakPtr = { "CachedPropsSourceOriginWeakPtr", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridSettings, CachedPropsSourceOriginWeakPtr), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URenderGridSettings_Statics::NewProp_CachedPropsSourceOriginWeakPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridSettings_Statics::NewProp_CachedPropsSourceOriginWeakPtr_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URenderGridSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridSettings_Statics::NewProp_PropsSourceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridSettings_Statics::NewProp_PropsSourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridSettings_Statics::NewProp_PropsSourceOrigin_RemoteControl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridSettings_Statics::NewProp_CachedPropsSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridSettings_Statics::NewProp_CachedPropsSourceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridSettings_Statics::NewProp_CachedPropsSourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridSettings_Statics::NewProp_CachedPropsSourceOriginWeakPtr,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderGridSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderGridSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderGridSettings_Statics::ClassParams = {
		&URenderGridSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URenderGridSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridSettings_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URenderGridSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderGridSettings()
	{
		if (!Z_Registration_Info_UClass_URenderGridSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderGridSettings.OuterSingleton, Z_Construct_UClass_URenderGridSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderGridSettings.OuterSingleton;
	}
	template<> RENDERGRID_API UClass* StaticClass<URenderGridSettings>()
	{
		return URenderGridSettings::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderGridSettings);
	URenderGridSettings::~URenderGridSettings() {}
	void URenderGridDefaults::StaticRegisterNativesURenderGridDefaults()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderGridDefaults);
	UClass* Z_Construct_UClass_URenderGridDefaults_NoRegister()
	{
		return URenderGridDefaults::StaticClass();
	}
	struct Z_Construct_UClass_URenderGridDefaults_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LevelSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderPreset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderPreset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputDirectory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderGridDefaults_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderGrid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridDefaults_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * This class contains the default values of render grid jobs.\n *\n * This is placed in a separate class, primarily so that it be separated easily from the render grid when using the details view widget.\n */" },
		{ "IncludePath", "RenderGrid/RenderGrid.h" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "This class contains the default values of render grid jobs.\n\nThis is placed in a separate class, primarily so that it be separated easily from the render grid when using the details view widget." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridDefaults_Statics::NewProp_LevelSequence_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** The default level sequence for new jobs, this is what will be rendered during rendering. A job without a level sequence can't be rendered. */" },
		{ "DisplayName", "Default Level Sequence" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "The default level sequence for new jobs, this is what will be rendered during rendering. A job without a level sequence can't be rendered." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URenderGridDefaults_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0014000000000801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridDefaults, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URenderGridDefaults_Statics::NewProp_LevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridDefaults_Statics::NewProp_LevelSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridDefaults_Statics::NewProp_RenderPreset_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** The default movie pipeline render preset for new jobs. Render grid jobs are rendered using the movie pipeline plugin. This 'preset' contains the configuration of that plugin. */" },
		{ "DisplayName", "Default Render Preset" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "The default movie pipeline render preset for new jobs. Render grid jobs are rendered using the movie pipeline plugin. This 'preset' contains the configuration of that plugin." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URenderGridDefaults_Statics::NewProp_RenderPreset = { "RenderPreset", nullptr, (EPropertyFlags)0x0014000000000801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridDefaults, RenderPreset), Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URenderGridDefaults_Statics::NewProp_RenderPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridDefaults_Statics::NewProp_RenderPreset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridDefaults_Statics::NewProp_OutputDirectory_MetaData[] = {
		{ "Category", "Defaults" },
		{ "Comment", "/** The default output directory for new jobs. This is the folder in which the output files (of rendering) are placed into. To be more specific, the output files are placed in: {OutputDirectory}/{JobId}/, this folder will be created if it doesn't exist at the time of rendering. */" },
		{ "DisplayName", "Default Output Directory" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "The default output directory for new jobs. This is the folder in which the output files (of rendering) are placed into. To be more specific, the output files are placed in: {OutputDirectory}/{JobId}/, this folder will be created if it doesn't exist at the time of rendering." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URenderGridDefaults_Statics::NewProp_OutputDirectory = { "OutputDirectory", nullptr, (EPropertyFlags)0x0010000000000801, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridDefaults, OutputDirectory), METADATA_PARAMS(Z_Construct_UClass_URenderGridDefaults_Statics::NewProp_OutputDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridDefaults_Statics::NewProp_OutputDirectory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URenderGridDefaults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridDefaults_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridDefaults_Statics::NewProp_RenderPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridDefaults_Statics::NewProp_OutputDirectory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderGridDefaults_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderGridDefaults>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderGridDefaults_Statics::ClassParams = {
		&URenderGridDefaults::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URenderGridDefaults_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridDefaults_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URenderGridDefaults_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridDefaults_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderGridDefaults()
	{
		if (!Z_Registration_Info_UClass_URenderGridDefaults.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderGridDefaults.OuterSingleton, Z_Construct_UClass_URenderGridDefaults_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderGridDefaults.OuterSingleton;
	}
	template<> RENDERGRID_API UClass* StaticClass<URenderGridDefaults>()
	{
		return URenderGridDefaults::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderGridDefaults);
	URenderGridDefaults::~URenderGridDefaults() {}
	DEFINE_FUNCTION(URenderGridJob::execGetRemoteControlValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TMap<FGuid,FString>*)Z_Param__Result=P_THIS->GetRemoteControlValues();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execGetRemoteControlLabelFromFieldId)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_FieldId);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetRemoteControlLabelFromFieldId(Z_Param_Out_FieldId,Z_Param_Out_OutLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execGetRemoteControlFieldIdFromLabel)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Label);
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_OutFieldId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetRemoteControlFieldIdFromLabel(Z_Param_Label,Z_Param_Out_OutFieldId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execSetRemoteControlValue)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_FieldId);
		P_GET_PROPERTY(FStrProperty,Z_Param_Json);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetRemoteControlValue(Z_Param_Out_FieldId,Z_Param_Json);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execGetRemoteControlValue)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_FieldId);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutJson);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetRemoteControlValue(Z_Param_Out_FieldId,Z_Param_Out_OutJson);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execHasRemoteControlValue)
	{
		P_GET_STRUCT_REF(FGuid,Z_Param_Out_FieldId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasRemoteControlValue(Z_Param_Out_FieldId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execSetRenderPreset)
	{
		P_GET_OBJECT(UMoviePipelinePrimaryConfig,Z_Param_NewRenderPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRenderPreset(Z_Param_NewRenderPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execGetRenderPresetOutputSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineOutputSetting**)Z_Param__Result=P_THIS->GetRenderPresetOutputSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execGetRenderPreset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelinePrimaryConfig**)Z_Param__Result=P_THIS->GetRenderPreset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execSetOutputDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewOutputDirectory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOutputDirectory(Z_Param_NewOutputDirectory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execGetOutputDirectoryForDisplay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetOutputDirectoryForDisplay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execGetOutputDirectory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetOutputDirectory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execSetIsEnabled)
	{
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsEnabled(Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execGetIsEnabled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsEnabled();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execSetJobName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewJobName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetJobName(Z_Param_NewJobName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execGetJobName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetJobName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execSetJobId)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewJobId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetJobId(Z_Param_NewJobId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execGetJobId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetJobId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execSetCustomResolution)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_NewCustomResolution);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomResolution(Z_Param_NewCustomResolution);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execGetCustomResolution)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=P_THIS->GetCustomResolution();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execSetIsUsingCustomResolution)
	{
		P_GET_UBOOL(Z_Param_bNewOverrideResolution);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsUsingCustomResolution(Z_Param_bNewOverrideResolution);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execGetIsUsingCustomResolution)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsUsingCustomResolution();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execSetCustomEndFrame)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewCustomEndFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomEndFrame(Z_Param_NewCustomEndFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execGetCustomEndFrame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCustomEndFrame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execSetIsUsingCustomEndFrame)
	{
		P_GET_UBOOL(Z_Param_bNewOverrideEndFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsUsingCustomEndFrame(Z_Param_bNewOverrideEndFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execGetIsUsingCustomEndFrame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsUsingCustomEndFrame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execSetCustomStartFrame)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewCustomStartFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCustomStartFrame(Z_Param_NewCustomStartFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execGetCustomStartFrame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCustomStartFrame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execSetIsUsingCustomStartFrame)
	{
		P_GET_UBOOL(Z_Param_bNewOverrideStartFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsUsingCustomStartFrame(Z_Param_bNewOverrideStartFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execGetIsUsingCustomStartFrame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetIsUsingCustomStartFrame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execSetLevelSequence)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_NewSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLevelSequence(Z_Param_NewSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execGetLevelSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSequence**)Z_Param__Result=P_THIS->GetLevelSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execSetWaitFramesBeforeRendering)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NewWaitFramesBeforeRendering);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWaitFramesBeforeRendering(Z_Param_NewWaitFramesBeforeRendering);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execGetWaitFramesBeforeRendering)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetWaitFramesBeforeRendering();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execGenerateNewGuid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateNewGuid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execGetGuid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetGuid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execMatchesSearchTerm)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_SearchTerm);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MatchesSearchTerm(Z_Param_SearchTerm);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execGetOutputAspectRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->GetOutputAspectRatio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGridJob::execGetOutputResolution)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=P_THIS->GetOutputResolution();
		P_NATIVE_END;
	}
	void URenderGridJob::StaticRegisterNativesURenderGridJob()
	{
		UClass* Class = URenderGridJob::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GenerateNewGuid", &URenderGridJob::execGenerateNewGuid },
			{ "GetCustomEndFrame", &URenderGridJob::execGetCustomEndFrame },
			{ "GetCustomResolution", &URenderGridJob::execGetCustomResolution },
			{ "GetCustomStartFrame", &URenderGridJob::execGetCustomStartFrame },
			{ "GetGuid", &URenderGridJob::execGetGuid },
			{ "GetIsEnabled", &URenderGridJob::execGetIsEnabled },
			{ "GetIsUsingCustomEndFrame", &URenderGridJob::execGetIsUsingCustomEndFrame },
			{ "GetIsUsingCustomResolution", &URenderGridJob::execGetIsUsingCustomResolution },
			{ "GetIsUsingCustomStartFrame", &URenderGridJob::execGetIsUsingCustomStartFrame },
			{ "GetJobId", &URenderGridJob::execGetJobId },
			{ "GetJobName", &URenderGridJob::execGetJobName },
			{ "GetLevelSequence", &URenderGridJob::execGetLevelSequence },
			{ "GetOutputAspectRatio", &URenderGridJob::execGetOutputAspectRatio },
			{ "GetOutputDirectory", &URenderGridJob::execGetOutputDirectory },
			{ "GetOutputDirectoryForDisplay", &URenderGridJob::execGetOutputDirectoryForDisplay },
			{ "GetOutputResolution", &URenderGridJob::execGetOutputResolution },
			{ "GetRemoteControlFieldIdFromLabel", &URenderGridJob::execGetRemoteControlFieldIdFromLabel },
			{ "GetRemoteControlLabelFromFieldId", &URenderGridJob::execGetRemoteControlLabelFromFieldId },
			{ "GetRemoteControlValue", &URenderGridJob::execGetRemoteControlValue },
			{ "GetRemoteControlValues", &URenderGridJob::execGetRemoteControlValues },
			{ "GetRenderPreset", &URenderGridJob::execGetRenderPreset },
			{ "GetRenderPresetOutputSettings", &URenderGridJob::execGetRenderPresetOutputSettings },
			{ "GetWaitFramesBeforeRendering", &URenderGridJob::execGetWaitFramesBeforeRendering },
			{ "HasRemoteControlValue", &URenderGridJob::execHasRemoteControlValue },
			{ "MatchesSearchTerm", &URenderGridJob::execMatchesSearchTerm },
			{ "SetCustomEndFrame", &URenderGridJob::execSetCustomEndFrame },
			{ "SetCustomResolution", &URenderGridJob::execSetCustomResolution },
			{ "SetCustomStartFrame", &URenderGridJob::execSetCustomStartFrame },
			{ "SetIsEnabled", &URenderGridJob::execSetIsEnabled },
			{ "SetIsUsingCustomEndFrame", &URenderGridJob::execSetIsUsingCustomEndFrame },
			{ "SetIsUsingCustomResolution", &URenderGridJob::execSetIsUsingCustomResolution },
			{ "SetIsUsingCustomStartFrame", &URenderGridJob::execSetIsUsingCustomStartFrame },
			{ "SetJobId", &URenderGridJob::execSetJobId },
			{ "SetJobName", &URenderGridJob::execSetJobName },
			{ "SetLevelSequence", &URenderGridJob::execSetLevelSequence },
			{ "SetOutputDirectory", &URenderGridJob::execSetOutputDirectory },
			{ "SetRemoteControlValue", &URenderGridJob::execSetRemoteControlValue },
			{ "SetRenderPreset", &URenderGridJob::execSetRenderPreset },
			{ "SetWaitFramesBeforeRendering", &URenderGridJob::execSetWaitFramesBeforeRendering },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URenderGridJob_GenerateNewGuid_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_GenerateNewGuid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "Comment", "/** Randomly generates a new GUID. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "Randomly generates a new GUID." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_GenerateNewGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "GenerateNewGuid", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_GenerateNewGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GenerateNewGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_GenerateNewGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_GenerateNewGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_GetCustomEndFrame_Statics
	{
		struct RenderGridJob_eventGetCustomEndFrame_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URenderGridJob_GetCustomEndFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventGetCustomEndFrame_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_GetCustomEndFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetCustomEndFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_GetCustomEndFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_GetCustomEndFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "GetCustomEndFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_GetCustomEndFrame_Statics::RenderGridJob_eventGetCustomEndFrame_Parms), Z_Construct_UFunction_URenderGridJob_GetCustomEndFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetCustomEndFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_GetCustomEndFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetCustomEndFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_GetCustomEndFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_GetCustomEndFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_GetCustomResolution_Statics
	{
		struct RenderGridJob_eventGetCustomResolution_Parms
		{
			FIntPoint ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGridJob_GetCustomResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventGetCustomResolution_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_GetCustomResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetCustomResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_GetCustomResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_GetCustomResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "GetCustomResolution", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_GetCustomResolution_Statics::RenderGridJob_eventGetCustomResolution_Parms), Z_Construct_UFunction_URenderGridJob_GetCustomResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetCustomResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_GetCustomResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetCustomResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_GetCustomResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_GetCustomResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_GetCustomStartFrame_Statics
	{
		struct RenderGridJob_eventGetCustomStartFrame_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URenderGridJob_GetCustomStartFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventGetCustomStartFrame_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_GetCustomStartFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetCustomStartFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_GetCustomStartFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_GetCustomStartFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "GetCustomStartFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_GetCustomStartFrame_Statics::RenderGridJob_eventGetCustomStartFrame_Parms), Z_Construct_UFunction_URenderGridJob_GetCustomStartFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetCustomStartFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_GetCustomStartFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetCustomStartFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_GetCustomStartFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_GetCustomStartFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_GetGuid_Statics
	{
		struct RenderGridJob_eventGetGuid_Parms
		{
			FGuid ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGridJob_GetGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventGetGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_GetGuid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_GetGuid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "Comment", "/** Returns the GUID, which is randomly generated at creation. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "Returns the GUID, which is randomly generated at creation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_GetGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "GetGuid", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_GetGuid_Statics::RenderGridJob_eventGetGuid_Parms), Z_Construct_UFunction_URenderGridJob_GetGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_GetGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_GetGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_GetGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_GetIsEnabled_Statics
	{
		struct RenderGridJob_eventGetIsEnabled_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URenderGridJob_GetIsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenderGridJob_eventGetIsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridJob_GetIsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RenderGridJob_eventGetIsEnabled_Parms), &Z_Construct_UFunction_URenderGridJob_GetIsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_GetIsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetIsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_GetIsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_GetIsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "GetIsEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_GetIsEnabled_Statics::RenderGridJob_eventGetIsEnabled_Parms), Z_Construct_UFunction_URenderGridJob_GetIsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetIsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_GetIsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetIsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_GetIsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_GetIsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomEndFrame_Statics
	{
		struct RenderGridJob_eventGetIsUsingCustomEndFrame_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomEndFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenderGridJob_eventGetIsUsingCustomEndFrame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomEndFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RenderGridJob_eventGetIsUsingCustomEndFrame_Parms), &Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomEndFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomEndFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomEndFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomEndFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomEndFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "GetIsUsingCustomEndFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomEndFrame_Statics::RenderGridJob_eventGetIsUsingCustomEndFrame_Parms), Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomEndFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomEndFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomEndFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomEndFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomEndFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomEndFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomResolution_Statics
	{
		struct RenderGridJob_eventGetIsUsingCustomResolution_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomResolution_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenderGridJob_eventGetIsUsingCustomResolution_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RenderGridJob_eventGetIsUsingCustomResolution_Parms), &Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomResolution_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "GetIsUsingCustomResolution", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomResolution_Statics::RenderGridJob_eventGetIsUsingCustomResolution_Parms), Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomStartFrame_Statics
	{
		struct RenderGridJob_eventGetIsUsingCustomStartFrame_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomStartFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenderGridJob_eventGetIsUsingCustomStartFrame_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomStartFrame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RenderGridJob_eventGetIsUsingCustomStartFrame_Parms), &Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomStartFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomStartFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomStartFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomStartFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomStartFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "GetIsUsingCustomStartFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomStartFrame_Statics::RenderGridJob_eventGetIsUsingCustomStartFrame_Parms), Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomStartFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomStartFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomStartFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomStartFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomStartFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomStartFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_GetJobId_Statics
	{
		struct RenderGridJob_eventGetJobId_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridJob_GetJobId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventGetJobId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_GetJobId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetJobId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_GetJobId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_GetJobId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "GetJobId", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_GetJobId_Statics::RenderGridJob_eventGetJobId_Parms), Z_Construct_UFunction_URenderGridJob_GetJobId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetJobId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_GetJobId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetJobId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_GetJobId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_GetJobId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_GetJobName_Statics
	{
		struct RenderGridJob_eventGetJobName_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridJob_GetJobName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventGetJobName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_GetJobName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetJobName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_GetJobName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_GetJobName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "GetJobName", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_GetJobName_Statics::RenderGridJob_eventGetJobName_Parms), Z_Construct_UFunction_URenderGridJob_GetJobName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetJobName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_GetJobName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetJobName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_GetJobName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_GetJobName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_GetLevelSequence_Statics
	{
		struct RenderGridJob_eventGetLevelSequence_Parms
		{
			ULevelSequence* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGridJob_GetLevelSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventGetLevelSequence_Parms, ReturnValue), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_GetLevelSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetLevelSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_GetLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_GetLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "GetLevelSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_GetLevelSequence_Statics::RenderGridJob_eventGetLevelSequence_Parms), Z_Construct_UFunction_URenderGridJob_GetLevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetLevelSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_GetLevelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetLevelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_GetLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_GetLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_GetOutputAspectRatio_Statics
	{
		struct RenderGridJob_eventGetOutputAspectRatio_Parms
		{
			double ReturnValue;
		};
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_URenderGridJob_GetOutputAspectRatio_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventGetOutputAspectRatio_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_GetOutputAspectRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetOutputAspectRatio_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_GetOutputAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "Comment", "/** Gets the aspect ratio that this job will be rendered in. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "Gets the aspect ratio that this job will be rendered in." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_GetOutputAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "GetOutputAspectRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_GetOutputAspectRatio_Statics::RenderGridJob_eventGetOutputAspectRatio_Parms), Z_Construct_UFunction_URenderGridJob_GetOutputAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetOutputAspectRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_GetOutputAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetOutputAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_GetOutputAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_GetOutputAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_GetOutputDirectory_Statics
	{
		struct RenderGridJob_eventGetOutputDirectory_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridJob_GetOutputDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventGetOutputDirectory_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_GetOutputDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetOutputDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_GetOutputDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_GetOutputDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "GetOutputDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_GetOutputDirectory_Statics::RenderGridJob_eventGetOutputDirectory_Parms), Z_Construct_UFunction_URenderGridJob_GetOutputDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetOutputDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_GetOutputDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetOutputDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_GetOutputDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_GetOutputDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_GetOutputDirectoryForDisplay_Statics
	{
		struct RenderGridJob_eventGetOutputDirectoryForDisplay_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridJob_GetOutputDirectoryForDisplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventGetOutputDirectoryForDisplay_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_GetOutputDirectoryForDisplay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetOutputDirectoryForDisplay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_GetOutputDirectoryForDisplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_GetOutputDirectoryForDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "GetOutputDirectoryForDisplay", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_GetOutputDirectoryForDisplay_Statics::RenderGridJob_eventGetOutputDirectoryForDisplay_Parms), Z_Construct_UFunction_URenderGridJob_GetOutputDirectoryForDisplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetOutputDirectoryForDisplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_GetOutputDirectoryForDisplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetOutputDirectoryForDisplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_GetOutputDirectoryForDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_GetOutputDirectoryForDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_GetOutputResolution_Statics
	{
		struct RenderGridJob_eventGetOutputResolution_Parms
		{
			FIntPoint ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGridJob_GetOutputResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventGetOutputResolution_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_GetOutputResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetOutputResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_GetOutputResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "Comment", "/** Gets the resolution that this job will be rendered in. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "Gets the resolution that this job will be rendered in." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_GetOutputResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "GetOutputResolution", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_GetOutputResolution_Statics::RenderGridJob_eventGetOutputResolution_Parms), Z_Construct_UFunction_URenderGridJob_GetOutputResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetOutputResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_GetOutputResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetOutputResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_GetOutputResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_GetOutputResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_GetRemoteControlFieldIdFromLabel_Statics
	{
		struct RenderGridJob_eventGetRemoteControlFieldIdFromLabel_Parms
		{
			FString Label;
			FGuid OutFieldId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Label_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Label;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutFieldId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_GetRemoteControlFieldIdFromLabel_Statics::NewProp_Label_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridJob_GetRemoteControlFieldIdFromLabel_Statics::NewProp_Label = { "Label", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventGetRemoteControlFieldIdFromLabel_Parms, Label), METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_GetRemoteControlFieldIdFromLabel_Statics::NewProp_Label_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetRemoteControlFieldIdFromLabel_Statics::NewProp_Label_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGridJob_GetRemoteControlFieldIdFromLabel_Statics::NewProp_OutFieldId = { "OutFieldId", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventGetRemoteControlFieldIdFromLabel_Parms, OutFieldId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URenderGridJob_GetRemoteControlFieldIdFromLabel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenderGridJob_eventGetRemoteControlFieldIdFromLabel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridJob_GetRemoteControlFieldIdFromLabel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RenderGridJob_eventGetRemoteControlFieldIdFromLabel_Parms), &Z_Construct_UFunction_URenderGridJob_GetRemoteControlFieldIdFromLabel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_GetRemoteControlFieldIdFromLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetRemoteControlFieldIdFromLabel_Statics::NewProp_Label,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetRemoteControlFieldIdFromLabel_Statics::NewProp_OutFieldId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetRemoteControlFieldIdFromLabel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_GetRemoteControlFieldIdFromLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_GetRemoteControlFieldIdFromLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "GetRemoteControlFieldIdFromLabel", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_GetRemoteControlFieldIdFromLabel_Statics::RenderGridJob_eventGetRemoteControlFieldIdFromLabel_Parms), Z_Construct_UFunction_URenderGridJob_GetRemoteControlFieldIdFromLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetRemoteControlFieldIdFromLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_GetRemoteControlFieldIdFromLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetRemoteControlFieldIdFromLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_GetRemoteControlFieldIdFromLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_GetRemoteControlFieldIdFromLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_GetRemoteControlLabelFromFieldId_Statics
	{
		struct RenderGridJob_eventGetRemoteControlLabelFromFieldId_Parms
		{
			FGuid FieldId;
			FString OutLabel;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutLabel;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_GetRemoteControlLabelFromFieldId_Statics::NewProp_FieldId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGridJob_GetRemoteControlLabelFromFieldId_Statics::NewProp_FieldId = { "FieldId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventGetRemoteControlLabelFromFieldId_Parms, FieldId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_GetRemoteControlLabelFromFieldId_Statics::NewProp_FieldId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetRemoteControlLabelFromFieldId_Statics::NewProp_FieldId_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridJob_GetRemoteControlLabelFromFieldId_Statics::NewProp_OutLabel = { "OutLabel", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventGetRemoteControlLabelFromFieldId_Parms, OutLabel), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URenderGridJob_GetRemoteControlLabelFromFieldId_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenderGridJob_eventGetRemoteControlLabelFromFieldId_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridJob_GetRemoteControlLabelFromFieldId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RenderGridJob_eventGetRemoteControlLabelFromFieldId_Parms), &Z_Construct_UFunction_URenderGridJob_GetRemoteControlLabelFromFieldId_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_GetRemoteControlLabelFromFieldId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetRemoteControlLabelFromFieldId_Statics::NewProp_FieldId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetRemoteControlLabelFromFieldId_Statics::NewProp_OutLabel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetRemoteControlLabelFromFieldId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_GetRemoteControlLabelFromFieldId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_GetRemoteControlLabelFromFieldId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "GetRemoteControlLabelFromFieldId", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_GetRemoteControlLabelFromFieldId_Statics::RenderGridJob_eventGetRemoteControlLabelFromFieldId_Parms), Z_Construct_UFunction_URenderGridJob_GetRemoteControlLabelFromFieldId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetRemoteControlLabelFromFieldId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_GetRemoteControlLabelFromFieldId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetRemoteControlLabelFromFieldId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_GetRemoteControlLabelFromFieldId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_GetRemoteControlLabelFromFieldId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_GetRemoteControlValue_Statics
	{
		struct RenderGridJob_eventGetRemoteControlValue_Parms
		{
			FGuid FieldId;
			FString OutJson;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldId;
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutJson;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_GetRemoteControlValue_Statics::NewProp_FieldId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGridJob_GetRemoteControlValue_Statics::NewProp_FieldId = { "FieldId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventGetRemoteControlValue_Parms, FieldId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_GetRemoteControlValue_Statics::NewProp_FieldId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetRemoteControlValue_Statics::NewProp_FieldId_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridJob_GetRemoteControlValue_Statics::NewProp_OutJson = { "OutJson", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventGetRemoteControlValue_Parms, OutJson), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URenderGridJob_GetRemoteControlValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenderGridJob_eventGetRemoteControlValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridJob_GetRemoteControlValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RenderGridJob_eventGetRemoteControlValue_Parms), &Z_Construct_UFunction_URenderGridJob_GetRemoteControlValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_GetRemoteControlValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetRemoteControlValue_Statics::NewProp_FieldId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetRemoteControlValue_Statics::NewProp_OutJson,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetRemoteControlValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_GetRemoteControlValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_GetRemoteControlValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "GetRemoteControlValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_GetRemoteControlValue_Statics::RenderGridJob_eventGetRemoteControlValue_Parms), Z_Construct_UFunction_URenderGridJob_GetRemoteControlValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetRemoteControlValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_GetRemoteControlValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetRemoteControlValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_GetRemoteControlValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_GetRemoteControlValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_GetRemoteControlValues_Statics
	{
		struct RenderGridJob_eventGetRemoteControlValues_Parms
		{
			TMap<FGuid,FString> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridJob_GetRemoteControlValues_Statics::NewProp_ReturnValue_ValueProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGridJob_GetRemoteControlValues_Statics::NewProp_ReturnValue_Key_KeyProp = { "ReturnValue_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_URenderGridJob_GetRemoteControlValues_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventGetRemoteControlValues_Parms, ReturnValue), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_GetRemoteControlValues_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetRemoteControlValues_Statics::NewProp_ReturnValue_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetRemoteControlValues_Statics::NewProp_ReturnValue_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetRemoteControlValues_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_GetRemoteControlValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_GetRemoteControlValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "GetRemoteControlValues", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_GetRemoteControlValues_Statics::RenderGridJob_eventGetRemoteControlValues_Parms), Z_Construct_UFunction_URenderGridJob_GetRemoteControlValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetRemoteControlValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_GetRemoteControlValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetRemoteControlValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_GetRemoteControlValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_GetRemoteControlValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_GetRenderPreset_Statics
	{
		struct RenderGridJob_eventGetRenderPreset_Parms
		{
			UMoviePipelinePrimaryConfig* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGridJob_GetRenderPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventGetRenderPreset_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_GetRenderPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetRenderPreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_GetRenderPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_GetRenderPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "GetRenderPreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_GetRenderPreset_Statics::RenderGridJob_eventGetRenderPreset_Parms), Z_Construct_UFunction_URenderGridJob_GetRenderPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetRenderPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_GetRenderPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetRenderPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_GetRenderPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_GetRenderPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_GetRenderPresetOutputSettings_Statics
	{
		struct RenderGridJob_eventGetRenderPresetOutputSettings_Parms
		{
			UMoviePipelineOutputSetting* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGridJob_GetRenderPresetOutputSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventGetRenderPresetOutputSettings_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineOutputSetting_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_GetRenderPresetOutputSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetRenderPresetOutputSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_GetRenderPresetOutputSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_GetRenderPresetOutputSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "GetRenderPresetOutputSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_GetRenderPresetOutputSettings_Statics::RenderGridJob_eventGetRenderPresetOutputSettings_Parms), Z_Construct_UFunction_URenderGridJob_GetRenderPresetOutputSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetRenderPresetOutputSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_GetRenderPresetOutputSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetRenderPresetOutputSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_GetRenderPresetOutputSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_GetRenderPresetOutputSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_GetWaitFramesBeforeRendering_Statics
	{
		struct RenderGridJob_eventGetWaitFramesBeforeRendering_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URenderGridJob_GetWaitFramesBeforeRendering_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventGetWaitFramesBeforeRendering_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_GetWaitFramesBeforeRendering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_GetWaitFramesBeforeRendering_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_GetWaitFramesBeforeRendering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_GetWaitFramesBeforeRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "GetWaitFramesBeforeRendering", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_GetWaitFramesBeforeRendering_Statics::RenderGridJob_eventGetWaitFramesBeforeRendering_Parms), Z_Construct_UFunction_URenderGridJob_GetWaitFramesBeforeRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetWaitFramesBeforeRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_GetWaitFramesBeforeRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_GetWaitFramesBeforeRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_GetWaitFramesBeforeRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_GetWaitFramesBeforeRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_HasRemoteControlValue_Statics
	{
		struct RenderGridJob_eventHasRemoteControlValue_Parms
		{
			FGuid FieldId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_HasRemoteControlValue_Statics::NewProp_FieldId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGridJob_HasRemoteControlValue_Statics::NewProp_FieldId = { "FieldId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventHasRemoteControlValue_Parms, FieldId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_HasRemoteControlValue_Statics::NewProp_FieldId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_HasRemoteControlValue_Statics::NewProp_FieldId_MetaData)) };
	void Z_Construct_UFunction_URenderGridJob_HasRemoteControlValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenderGridJob_eventHasRemoteControlValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridJob_HasRemoteControlValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RenderGridJob_eventHasRemoteControlValue_Parms), &Z_Construct_UFunction_URenderGridJob_HasRemoteControlValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_HasRemoteControlValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_HasRemoteControlValue_Statics::NewProp_FieldId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_HasRemoteControlValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_HasRemoteControlValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_HasRemoteControlValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "HasRemoteControlValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_HasRemoteControlValue_Statics::RenderGridJob_eventHasRemoteControlValue_Parms), Z_Construct_UFunction_URenderGridJob_HasRemoteControlValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_HasRemoteControlValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_HasRemoteControlValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_HasRemoteControlValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_HasRemoteControlValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_HasRemoteControlValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_MatchesSearchTerm_Statics
	{
		struct RenderGridJob_eventMatchesSearchTerm_Parms
		{
			FString SearchTerm;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SearchTerm_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SearchTerm;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_MatchesSearchTerm_Statics::NewProp_SearchTerm_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridJob_MatchesSearchTerm_Statics::NewProp_SearchTerm = { "SearchTerm", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventMatchesSearchTerm_Parms, SearchTerm), METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_MatchesSearchTerm_Statics::NewProp_SearchTerm_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_MatchesSearchTerm_Statics::NewProp_SearchTerm_MetaData)) };
	void Z_Construct_UFunction_URenderGridJob_MatchesSearchTerm_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenderGridJob_eventMatchesSearchTerm_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridJob_MatchesSearchTerm_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RenderGridJob_eventMatchesSearchTerm_Parms), &Z_Construct_UFunction_URenderGridJob_MatchesSearchTerm_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_MatchesSearchTerm_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_MatchesSearchTerm_Statics::NewProp_SearchTerm,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_MatchesSearchTerm_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_MatchesSearchTerm_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "Comment", "/** Checks whether the job contains data that matches the search terms. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "Checks whether the job contains data that matches the search terms." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_MatchesSearchTerm_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "MatchesSearchTerm", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_MatchesSearchTerm_Statics::RenderGridJob_eventMatchesSearchTerm_Parms), Z_Construct_UFunction_URenderGridJob_MatchesSearchTerm_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_MatchesSearchTerm_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_MatchesSearchTerm_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_MatchesSearchTerm_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_MatchesSearchTerm()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_MatchesSearchTerm_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_SetCustomEndFrame_Statics
	{
		struct RenderGridJob_eventSetCustomEndFrame_Parms
		{
			int32 NewCustomEndFrame;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewCustomEndFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewCustomEndFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_SetCustomEndFrame_Statics::NewProp_NewCustomEndFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URenderGridJob_SetCustomEndFrame_Statics::NewProp_NewCustomEndFrame = { "NewCustomEndFrame", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventSetCustomEndFrame_Parms, NewCustomEndFrame), METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_SetCustomEndFrame_Statics::NewProp_NewCustomEndFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetCustomEndFrame_Statics::NewProp_NewCustomEndFrame_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_SetCustomEndFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_SetCustomEndFrame_Statics::NewProp_NewCustomEndFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_SetCustomEndFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_SetCustomEndFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "SetCustomEndFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_SetCustomEndFrame_Statics::RenderGridJob_eventSetCustomEndFrame_Parms), Z_Construct_UFunction_URenderGridJob_SetCustomEndFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetCustomEndFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_SetCustomEndFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetCustomEndFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_SetCustomEndFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_SetCustomEndFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_SetCustomResolution_Statics
	{
		struct RenderGridJob_eventSetCustomResolution_Parms
		{
			FIntPoint NewCustomResolution;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewCustomResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewCustomResolution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_SetCustomResolution_Statics::NewProp_NewCustomResolution_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGridJob_SetCustomResolution_Statics::NewProp_NewCustomResolution = { "NewCustomResolution", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventSetCustomResolution_Parms, NewCustomResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_SetCustomResolution_Statics::NewProp_NewCustomResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetCustomResolution_Statics::NewProp_NewCustomResolution_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_SetCustomResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_SetCustomResolution_Statics::NewProp_NewCustomResolution,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_SetCustomResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_SetCustomResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "SetCustomResolution", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_SetCustomResolution_Statics::RenderGridJob_eventSetCustomResolution_Parms), Z_Construct_UFunction_URenderGridJob_SetCustomResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetCustomResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_SetCustomResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetCustomResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_SetCustomResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_SetCustomResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_SetCustomStartFrame_Statics
	{
		struct RenderGridJob_eventSetCustomStartFrame_Parms
		{
			int32 NewCustomStartFrame;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewCustomStartFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewCustomStartFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_SetCustomStartFrame_Statics::NewProp_NewCustomStartFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URenderGridJob_SetCustomStartFrame_Statics::NewProp_NewCustomStartFrame = { "NewCustomStartFrame", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventSetCustomStartFrame_Parms, NewCustomStartFrame), METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_SetCustomStartFrame_Statics::NewProp_NewCustomStartFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetCustomStartFrame_Statics::NewProp_NewCustomStartFrame_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_SetCustomStartFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_SetCustomStartFrame_Statics::NewProp_NewCustomStartFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_SetCustomStartFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_SetCustomStartFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "SetCustomStartFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_SetCustomStartFrame_Statics::RenderGridJob_eventSetCustomStartFrame_Parms), Z_Construct_UFunction_URenderGridJob_SetCustomStartFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetCustomStartFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_SetCustomStartFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetCustomStartFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_SetCustomStartFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_SetCustomStartFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_SetIsEnabled_Statics
	{
		struct RenderGridJob_eventSetIsEnabled_Parms
		{
			bool bEnabled;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_SetIsEnabled_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_URenderGridJob_SetIsEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((RenderGridJob_eventSetIsEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridJob_SetIsEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RenderGridJob_eventSetIsEnabled_Parms), &Z_Construct_UFunction_URenderGridJob_SetIsEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_SetIsEnabled_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetIsEnabled_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_SetIsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_SetIsEnabled_Statics::NewProp_bEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_SetIsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_SetIsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "SetIsEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_SetIsEnabled_Statics::RenderGridJob_eventSetIsEnabled_Parms), Z_Construct_UFunction_URenderGridJob_SetIsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetIsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_SetIsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetIsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_SetIsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_SetIsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomEndFrame_Statics
	{
		struct RenderGridJob_eventSetIsUsingCustomEndFrame_Parms
		{
			bool bNewOverrideEndFrame;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewOverrideEndFrame_MetaData[];
#endif
		static void NewProp_bNewOverrideEndFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewOverrideEndFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomEndFrame_Statics::NewProp_bNewOverrideEndFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomEndFrame_Statics::NewProp_bNewOverrideEndFrame_SetBit(void* Obj)
	{
		((RenderGridJob_eventSetIsUsingCustomEndFrame_Parms*)Obj)->bNewOverrideEndFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomEndFrame_Statics::NewProp_bNewOverrideEndFrame = { "bNewOverrideEndFrame", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RenderGridJob_eventSetIsUsingCustomEndFrame_Parms), &Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomEndFrame_Statics::NewProp_bNewOverrideEndFrame_SetBit, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomEndFrame_Statics::NewProp_bNewOverrideEndFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomEndFrame_Statics::NewProp_bNewOverrideEndFrame_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomEndFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomEndFrame_Statics::NewProp_bNewOverrideEndFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomEndFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomEndFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "SetIsUsingCustomEndFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomEndFrame_Statics::RenderGridJob_eventSetIsUsingCustomEndFrame_Parms), Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomEndFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomEndFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomEndFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomEndFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomEndFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomEndFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomResolution_Statics
	{
		struct RenderGridJob_eventSetIsUsingCustomResolution_Parms
		{
			bool bNewOverrideResolution;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewOverrideResolution_MetaData[];
#endif
		static void NewProp_bNewOverrideResolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewOverrideResolution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomResolution_Statics::NewProp_bNewOverrideResolution_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomResolution_Statics::NewProp_bNewOverrideResolution_SetBit(void* Obj)
	{
		((RenderGridJob_eventSetIsUsingCustomResolution_Parms*)Obj)->bNewOverrideResolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomResolution_Statics::NewProp_bNewOverrideResolution = { "bNewOverrideResolution", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RenderGridJob_eventSetIsUsingCustomResolution_Parms), &Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomResolution_Statics::NewProp_bNewOverrideResolution_SetBit, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomResolution_Statics::NewProp_bNewOverrideResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomResolution_Statics::NewProp_bNewOverrideResolution_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomResolution_Statics::NewProp_bNewOverrideResolution,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomResolution_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "SetIsUsingCustomResolution", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomResolution_Statics::RenderGridJob_eventSetIsUsingCustomResolution_Parms), Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomStartFrame_Statics
	{
		struct RenderGridJob_eventSetIsUsingCustomStartFrame_Parms
		{
			bool bNewOverrideStartFrame;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bNewOverrideStartFrame_MetaData[];
#endif
		static void NewProp_bNewOverrideStartFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewOverrideStartFrame;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomStartFrame_Statics::NewProp_bNewOverrideStartFrame_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomStartFrame_Statics::NewProp_bNewOverrideStartFrame_SetBit(void* Obj)
	{
		((RenderGridJob_eventSetIsUsingCustomStartFrame_Parms*)Obj)->bNewOverrideStartFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomStartFrame_Statics::NewProp_bNewOverrideStartFrame = { "bNewOverrideStartFrame", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RenderGridJob_eventSetIsUsingCustomStartFrame_Parms), &Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomStartFrame_Statics::NewProp_bNewOverrideStartFrame_SetBit, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomStartFrame_Statics::NewProp_bNewOverrideStartFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomStartFrame_Statics::NewProp_bNewOverrideStartFrame_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomStartFrame_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomStartFrame_Statics::NewProp_bNewOverrideStartFrame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomStartFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomStartFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "SetIsUsingCustomStartFrame", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomStartFrame_Statics::RenderGridJob_eventSetIsUsingCustomStartFrame_Parms), Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomStartFrame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomStartFrame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomStartFrame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomStartFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomStartFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomStartFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_SetJobId_Statics
	{
		struct RenderGridJob_eventSetJobId_Parms
		{
			FString NewJobId;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewJobId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewJobId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_SetJobId_Statics::NewProp_NewJobId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridJob_SetJobId_Statics::NewProp_NewJobId = { "NewJobId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventSetJobId_Parms, NewJobId), METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_SetJobId_Statics::NewProp_NewJobId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetJobId_Statics::NewProp_NewJobId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_SetJobId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_SetJobId_Statics::NewProp_NewJobId,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_SetJobId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_SetJobId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "SetJobId", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_SetJobId_Statics::RenderGridJob_eventSetJobId_Parms), Z_Construct_UFunction_URenderGridJob_SetJobId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetJobId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_SetJobId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetJobId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_SetJobId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_SetJobId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_SetJobName_Statics
	{
		struct RenderGridJob_eventSetJobName_Parms
		{
			FString NewJobName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewJobName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewJobName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_SetJobName_Statics::NewProp_NewJobName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridJob_SetJobName_Statics::NewProp_NewJobName = { "NewJobName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventSetJobName_Parms, NewJobName), METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_SetJobName_Statics::NewProp_NewJobName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetJobName_Statics::NewProp_NewJobName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_SetJobName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_SetJobName_Statics::NewProp_NewJobName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_SetJobName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_SetJobName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "SetJobName", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_SetJobName_Statics::RenderGridJob_eventSetJobName_Parms), Z_Construct_UFunction_URenderGridJob_SetJobName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetJobName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_SetJobName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetJobName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_SetJobName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_SetJobName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_SetLevelSequence_Statics
	{
		struct RenderGridJob_eventSetLevelSequence_Parms
		{
			ULevelSequence* NewSequence;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGridJob_SetLevelSequence_Statics::NewProp_NewSequence = { "NewSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventSetLevelSequence_Parms, NewSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_SetLevelSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_SetLevelSequence_Statics::NewProp_NewSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_SetLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_SetLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "SetLevelSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_SetLevelSequence_Statics::RenderGridJob_eventSetLevelSequence_Parms), Z_Construct_UFunction_URenderGridJob_SetLevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetLevelSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_SetLevelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetLevelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_SetLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_SetLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_SetOutputDirectory_Statics
	{
		struct RenderGridJob_eventSetOutputDirectory_Parms
		{
			FString NewOutputDirectory;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewOutputDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewOutputDirectory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_SetOutputDirectory_Statics::NewProp_NewOutputDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridJob_SetOutputDirectory_Statics::NewProp_NewOutputDirectory = { "NewOutputDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventSetOutputDirectory_Parms, NewOutputDirectory), METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_SetOutputDirectory_Statics::NewProp_NewOutputDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetOutputDirectory_Statics::NewProp_NewOutputDirectory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_SetOutputDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_SetOutputDirectory_Statics::NewProp_NewOutputDirectory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_SetOutputDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_SetOutputDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "SetOutputDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_SetOutputDirectory_Statics::RenderGridJob_eventSetOutputDirectory_Parms), Z_Construct_UFunction_URenderGridJob_SetOutputDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetOutputDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_SetOutputDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetOutputDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_SetOutputDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_SetOutputDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_SetRemoteControlValue_Statics
	{
		struct RenderGridJob_eventSetRemoteControlValue_Parms
		{
			FGuid FieldId;
			FString Json;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Json_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Json;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_SetRemoteControlValue_Statics::NewProp_FieldId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGridJob_SetRemoteControlValue_Statics::NewProp_FieldId = { "FieldId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventSetRemoteControlValue_Parms, FieldId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_SetRemoteControlValue_Statics::NewProp_FieldId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetRemoteControlValue_Statics::NewProp_FieldId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_SetRemoteControlValue_Statics::NewProp_Json_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGridJob_SetRemoteControlValue_Statics::NewProp_Json = { "Json", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventSetRemoteControlValue_Parms, Json), METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_SetRemoteControlValue_Statics::NewProp_Json_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetRemoteControlValue_Statics::NewProp_Json_MetaData)) };
	void Z_Construct_UFunction_URenderGridJob_SetRemoteControlValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenderGridJob_eventSetRemoteControlValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGridJob_SetRemoteControlValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RenderGridJob_eventSetRemoteControlValue_Parms), &Z_Construct_UFunction_URenderGridJob_SetRemoteControlValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_SetRemoteControlValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_SetRemoteControlValue_Statics::NewProp_FieldId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_SetRemoteControlValue_Statics::NewProp_Json,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_SetRemoteControlValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_SetRemoteControlValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_SetRemoteControlValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "SetRemoteControlValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_SetRemoteControlValue_Statics::RenderGridJob_eventSetRemoteControlValue_Parms), Z_Construct_UFunction_URenderGridJob_SetRemoteControlValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetRemoteControlValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_SetRemoteControlValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetRemoteControlValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_SetRemoteControlValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_SetRemoteControlValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_SetRenderPreset_Statics
	{
		struct RenderGridJob_eventSetRenderPreset_Parms
		{
			UMoviePipelinePrimaryConfig* NewRenderPreset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewRenderPreset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGridJob_SetRenderPreset_Statics::NewProp_NewRenderPreset = { "NewRenderPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventSetRenderPreset_Parms, NewRenderPreset), Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_SetRenderPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_SetRenderPreset_Statics::NewProp_NewRenderPreset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_SetRenderPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_SetRenderPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "SetRenderPreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_SetRenderPreset_Statics::RenderGridJob_eventSetRenderPreset_Parms), Z_Construct_UFunction_URenderGridJob_SetRenderPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetRenderPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_SetRenderPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetRenderPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_SetRenderPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_SetRenderPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGridJob_SetWaitFramesBeforeRendering_Statics
	{
		struct RenderGridJob_eventSetWaitFramesBeforeRendering_Parms
		{
			int32 NewWaitFramesBeforeRendering;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewWaitFramesBeforeRendering_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NewWaitFramesBeforeRendering;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_SetWaitFramesBeforeRendering_Statics::NewProp_NewWaitFramesBeforeRendering_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URenderGridJob_SetWaitFramesBeforeRendering_Statics::NewProp_NewWaitFramesBeforeRendering = { "NewWaitFramesBeforeRendering", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGridJob_eventSetWaitFramesBeforeRendering_Parms, NewWaitFramesBeforeRendering), METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_SetWaitFramesBeforeRendering_Statics::NewProp_NewWaitFramesBeforeRendering_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetWaitFramesBeforeRendering_Statics::NewProp_NewWaitFramesBeforeRendering_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGridJob_SetWaitFramesBeforeRendering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGridJob_SetWaitFramesBeforeRendering_Statics::NewProp_NewWaitFramesBeforeRendering,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGridJob_SetWaitFramesBeforeRendering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid Job" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGridJob_SetWaitFramesBeforeRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGridJob, nullptr, "SetWaitFramesBeforeRendering", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGridJob_SetWaitFramesBeforeRendering_Statics::RenderGridJob_eventSetWaitFramesBeforeRendering_Parms), Z_Construct_UFunction_URenderGridJob_SetWaitFramesBeforeRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetWaitFramesBeforeRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGridJob_SetWaitFramesBeforeRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGridJob_SetWaitFramesBeforeRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGridJob_SetWaitFramesBeforeRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGridJob_SetWaitFramesBeforeRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderGridJob);
	UClass* Z_Construct_UClass_URenderGridJob_NoRegister()
	{
		return URenderGridJob::StaticClass();
	}
	struct Z_Construct_UClass_URenderGridJob_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WaitFramesBeforeRendering_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_WaitFramesBeforeRendering;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LevelSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideStartFrame_MetaData[];
#endif
		static void NewProp_bOverrideStartFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideStartFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomStartFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CustomStartFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideEndFrame_MetaData[];
#endif
		static void NewProp_bOverrideEndFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideEndFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomEndFrame_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CustomEndFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideResolution_MetaData[];
#endif
		static void NewProp_bOverrideResolution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JobId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JobId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JobName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JobName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_OutputDirectory;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderPreset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderPreset;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemoteControlValues_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RemoteControlValues_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemoteControlValues_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RemoteControlValues;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderGridJob_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderGrid,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URenderGridJob_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URenderGridJob_GenerateNewGuid, "GenerateNewGuid" }, // 1199917074
		{ &Z_Construct_UFunction_URenderGridJob_GetCustomEndFrame, "GetCustomEndFrame" }, // 3743524380
		{ &Z_Construct_UFunction_URenderGridJob_GetCustomResolution, "GetCustomResolution" }, // 770620624
		{ &Z_Construct_UFunction_URenderGridJob_GetCustomStartFrame, "GetCustomStartFrame" }, // 380995513
		{ &Z_Construct_UFunction_URenderGridJob_GetGuid, "GetGuid" }, // 1576216747
		{ &Z_Construct_UFunction_URenderGridJob_GetIsEnabled, "GetIsEnabled" }, // 702516783
		{ &Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomEndFrame, "GetIsUsingCustomEndFrame" }, // 4176615421
		{ &Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomResolution, "GetIsUsingCustomResolution" }, // 1085362325
		{ &Z_Construct_UFunction_URenderGridJob_GetIsUsingCustomStartFrame, "GetIsUsingCustomStartFrame" }, // 1040379305
		{ &Z_Construct_UFunction_URenderGridJob_GetJobId, "GetJobId" }, // 315215347
		{ &Z_Construct_UFunction_URenderGridJob_GetJobName, "GetJobName" }, // 1660163316
		{ &Z_Construct_UFunction_URenderGridJob_GetLevelSequence, "GetLevelSequence" }, // 2943868064
		{ &Z_Construct_UFunction_URenderGridJob_GetOutputAspectRatio, "GetOutputAspectRatio" }, // 3189850846
		{ &Z_Construct_UFunction_URenderGridJob_GetOutputDirectory, "GetOutputDirectory" }, // 756396593
		{ &Z_Construct_UFunction_URenderGridJob_GetOutputDirectoryForDisplay, "GetOutputDirectoryForDisplay" }, // 1344159275
		{ &Z_Construct_UFunction_URenderGridJob_GetOutputResolution, "GetOutputResolution" }, // 4267148590
		{ &Z_Construct_UFunction_URenderGridJob_GetRemoteControlFieldIdFromLabel, "GetRemoteControlFieldIdFromLabel" }, // 3181157446
		{ &Z_Construct_UFunction_URenderGridJob_GetRemoteControlLabelFromFieldId, "GetRemoteControlLabelFromFieldId" }, // 2496108110
		{ &Z_Construct_UFunction_URenderGridJob_GetRemoteControlValue, "GetRemoteControlValue" }, // 2941739286
		{ &Z_Construct_UFunction_URenderGridJob_GetRemoteControlValues, "GetRemoteControlValues" }, // 3911299785
		{ &Z_Construct_UFunction_URenderGridJob_GetRenderPreset, "GetRenderPreset" }, // 3937899308
		{ &Z_Construct_UFunction_URenderGridJob_GetRenderPresetOutputSettings, "GetRenderPresetOutputSettings" }, // 2418815957
		{ &Z_Construct_UFunction_URenderGridJob_GetWaitFramesBeforeRendering, "GetWaitFramesBeforeRendering" }, // 1296748831
		{ &Z_Construct_UFunction_URenderGridJob_HasRemoteControlValue, "HasRemoteControlValue" }, // 3613014508
		{ &Z_Construct_UFunction_URenderGridJob_MatchesSearchTerm, "MatchesSearchTerm" }, // 2726483997
		{ &Z_Construct_UFunction_URenderGridJob_SetCustomEndFrame, "SetCustomEndFrame" }, // 1622172354
		{ &Z_Construct_UFunction_URenderGridJob_SetCustomResolution, "SetCustomResolution" }, // 726833142
		{ &Z_Construct_UFunction_URenderGridJob_SetCustomStartFrame, "SetCustomStartFrame" }, // 3298708459
		{ &Z_Construct_UFunction_URenderGridJob_SetIsEnabled, "SetIsEnabled" }, // 343385236
		{ &Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomEndFrame, "SetIsUsingCustomEndFrame" }, // 144639948
		{ &Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomResolution, "SetIsUsingCustomResolution" }, // 2214979888
		{ &Z_Construct_UFunction_URenderGridJob_SetIsUsingCustomStartFrame, "SetIsUsingCustomStartFrame" }, // 3152913576
		{ &Z_Construct_UFunction_URenderGridJob_SetJobId, "SetJobId" }, // 3768125011
		{ &Z_Construct_UFunction_URenderGridJob_SetJobName, "SetJobName" }, // 2280508550
		{ &Z_Construct_UFunction_URenderGridJob_SetLevelSequence, "SetLevelSequence" }, // 2640219623
		{ &Z_Construct_UFunction_URenderGridJob_SetOutputDirectory, "SetOutputDirectory" }, // 333889104
		{ &Z_Construct_UFunction_URenderGridJob_SetRemoteControlValue, "SetRemoteControlValue" }, // 3249709333
		{ &Z_Construct_UFunction_URenderGridJob_SetRenderPreset, "SetRenderPreset" }, // 2132529716
		{ &Z_Construct_UFunction_URenderGridJob_SetWaitFramesBeforeRendering, "SetWaitFramesBeforeRendering" }, // 668794419
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridJob_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This class represents a render grid job, in other words, an entry (a row) of a render grid.\n * It contains a level sequence and custom properties that will be applied while rendering.\n * \n * Each RenderGridJob must belong to a RenderGrid.\n */" },
		{ "IncludePath", "RenderGrid/RenderGrid.h" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "This class represents a render grid job, in other words, an entry (a row) of a render grid.\nIt contains a level sequence and custom properties that will be applied while rendering.\n\nEach RenderGridJob must belong to a RenderGrid." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridJob_Statics::NewProp_Guid_MetaData[] = {
		{ "Comment", "/** The unique ID of this job. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "The unique ID of this job." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URenderGridJob_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridJob, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_URenderGridJob_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridJob_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridJob_Statics::NewProp_WaitFramesBeforeRendering_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Render Grid Job" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Waits the given number of frames before it will render this job. This can be set to a higher amount when the renderer has to wait for your code to complete (such as construction scripts etc). Try increasing this value when rendering doesn't produce the output you expect it to. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "Waits the given number of frames before it will render this job. This can be set to a higher amount when the renderer has to wait for your code to complete (such as construction scripts etc). Try increasing this value when rendering doesn't produce the output you expect it to." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URenderGridJob_Statics::NewProp_WaitFramesBeforeRendering = { "WaitFramesBeforeRendering", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridJob, WaitFramesBeforeRendering), METADATA_PARAMS(Z_Construct_UClass_URenderGridJob_Statics::NewProp_WaitFramesBeforeRendering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridJob_Statics::NewProp_WaitFramesBeforeRendering_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridJob_Statics::NewProp_LevelSequence_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Render Grid Job" },
		{ "Comment", "/** The level sequence, this is what will be rendered during rendering. A job without a level sequence can't be rendered. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "The level sequence, this is what will be rendered during rendering. A job without a level sequence can't be rendered." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URenderGridJob_Statics::NewProp_LevelSequence = { "LevelSequence", nullptr, (EPropertyFlags)0x0044000000000801, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridJob, LevelSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URenderGridJob_Statics::NewProp_LevelSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridJob_Statics::NewProp_LevelSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridJob_Statics::NewProp_bOverrideStartFrame_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Render Grid Job" },
		{ "Comment", "/** If this is true, the CustomStartFrame property will override the start frame of the level sequence. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "If this is true, the CustomStartFrame property will override the start frame of the level sequence." },
	};
#endif
	void Z_Construct_UClass_URenderGridJob_Statics::NewProp_bOverrideStartFrame_SetBit(void* Obj)
	{
		((URenderGridJob*)Obj)->bOverrideStartFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderGridJob_Statics::NewProp_bOverrideStartFrame = { "bOverrideStartFrame", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URenderGridJob), &Z_Construct_UClass_URenderGridJob_Statics::NewProp_bOverrideStartFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderGridJob_Statics::NewProp_bOverrideStartFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridJob_Statics::NewProp_bOverrideStartFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridJob_Statics::NewProp_CustomStartFrame_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Render Grid Job" },
		{ "Comment", "/** If bOverrideStartFrame is true, this property will override the start frame of the level sequence. */" },
		{ "EditCondition", "bOverrideStartFrame" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "If bOverrideStartFrame is true, this property will override the start frame of the level sequence." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URenderGridJob_Statics::NewProp_CustomStartFrame = { "CustomStartFrame", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridJob, CustomStartFrame), METADATA_PARAMS(Z_Construct_UClass_URenderGridJob_Statics::NewProp_CustomStartFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridJob_Statics::NewProp_CustomStartFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridJob_Statics::NewProp_bOverrideEndFrame_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Render Grid Job" },
		{ "Comment", "/** If this is true, the CustomEndFrame property will override the end frame of the level sequence. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "If this is true, the CustomEndFrame property will override the end frame of the level sequence." },
	};
#endif
	void Z_Construct_UClass_URenderGridJob_Statics::NewProp_bOverrideEndFrame_SetBit(void* Obj)
	{
		((URenderGridJob*)Obj)->bOverrideEndFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderGridJob_Statics::NewProp_bOverrideEndFrame = { "bOverrideEndFrame", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URenderGridJob), &Z_Construct_UClass_URenderGridJob_Statics::NewProp_bOverrideEndFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderGridJob_Statics::NewProp_bOverrideEndFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridJob_Statics::NewProp_bOverrideEndFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridJob_Statics::NewProp_CustomEndFrame_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Render Grid Job" },
		{ "Comment", "/** If bOverrideEndFrame is true, this property will override the end frame of the level sequence. */" },
		{ "EditCondition", "bOverrideEndFrame" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "If bOverrideEndFrame is true, this property will override the end frame of the level sequence." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URenderGridJob_Statics::NewProp_CustomEndFrame = { "CustomEndFrame", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridJob, CustomEndFrame), METADATA_PARAMS(Z_Construct_UClass_URenderGridJob_Statics::NewProp_CustomEndFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridJob_Statics::NewProp_CustomEndFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridJob_Statics::NewProp_bOverrideResolution_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Render Grid Job" },
		{ "Comment", "/** If this is true, the CustomResolution property will override the resolution of the render. */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "If this is true, the CustomResolution property will override the resolution of the render." },
	};
#endif
	void Z_Construct_UClass_URenderGridJob_Statics::NewProp_bOverrideResolution_SetBit(void* Obj)
	{
		((URenderGridJob*)Obj)->bOverrideResolution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderGridJob_Statics::NewProp_bOverrideResolution = { "bOverrideResolution", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URenderGridJob), &Z_Construct_UClass_URenderGridJob_Statics::NewProp_bOverrideResolution_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderGridJob_Statics::NewProp_bOverrideResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridJob_Statics::NewProp_bOverrideResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridJob_Statics::NewProp_CustomResolution_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Render Grid Job" },
		{ "ClampMin", "1" },
		{ "Comment", "/** If bOverrideResolution is true, this property will override the resolution of the render. */" },
		{ "EditCondition", "bOverrideResolution" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "If bOverrideResolution is true, this property will override the resolution of the render." },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URenderGridJob_Statics::NewProp_CustomResolution = { "CustomResolution", nullptr, (EPropertyFlags)0x0040000000000801, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridJob, CustomResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_URenderGridJob_Statics::NewProp_CustomResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridJob_Statics::NewProp_CustomResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridJob_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Comment", "/** If this is true, this job will be rendered during a batch rendering, otherwise it will be skipped. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "If this is true, this job will be rendered during a batch rendering, otherwise it will be skipped." },
	};
#endif
	void Z_Construct_UClass_URenderGridJob_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((URenderGridJob*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderGridJob_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URenderGridJob), &Z_Construct_UClass_URenderGridJob_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderGridJob_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridJob_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridJob_Statics::NewProp_JobId_MetaData[] = {
		{ "Comment", "/** The 'ID' of this job, this 'ID' is set by users. During rendering it will place all the output files of this job into a folder called after this 'ID', this means that this string can only contain file-safe characters. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "The 'ID' of this job, this 'ID' is set by users. During rendering it will place all the output files of this job into a folder called after this 'ID', this means that this string can only contain file-safe characters." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URenderGridJob_Statics::NewProp_JobId = { "JobId", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridJob, JobId), METADATA_PARAMS(Z_Construct_UClass_URenderGridJob_Statics::NewProp_JobId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridJob_Statics::NewProp_JobId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridJob_Statics::NewProp_JobName_MetaData[] = {
		{ "Comment", "/** The name of this job, this can be anything, it's set by the user, it serves as a way for the user to understand what job this is. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "The name of this job, this can be anything, it's set by the user, it serves as a way for the user to understand what job this is." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URenderGridJob_Statics::NewProp_JobName = { "JobName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridJob, JobName), METADATA_PARAMS(Z_Construct_UClass_URenderGridJob_Statics::NewProp_JobName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridJob_Statics::NewProp_JobName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridJob_Statics::NewProp_OutputDirectory_MetaData[] = {
		{ "Comment", "/** This is the folder in which the output files (of rendering) are placed into. To be more specific, the output files are placed in: {OutputDirectory}/{JobId}/, this folder will be created if it doesn't exist at the time of rendering. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "This is the folder in which the output files (of rendering) are placed into. To be more specific, the output files are placed in: {OutputDirectory}/{JobId}/, this folder will be created if it doesn't exist at the time of rendering." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URenderGridJob_Statics::NewProp_OutputDirectory = { "OutputDirectory", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridJob, OutputDirectory), METADATA_PARAMS(Z_Construct_UClass_URenderGridJob_Statics::NewProp_OutputDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridJob_Statics::NewProp_OutputDirectory_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridJob_Statics::NewProp_RenderPreset_MetaData[] = {
		{ "Comment", "/** The movie pipeline render preset. Render grid jobs are rendered using the movie pipeline plugin. This 'preset' contains the configuration of that plugin. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "The movie pipeline render preset. Render grid jobs are rendered using the movie pipeline plugin. This 'preset' contains the configuration of that plugin." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URenderGridJob_Statics::NewProp_RenderPreset = { "RenderPreset", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridJob, RenderPreset), Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URenderGridJob_Statics::NewProp_RenderPreset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridJob_Statics::NewProp_RenderPreset_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URenderGridJob_Statics::NewProp_RemoteControlValues_ValueProp = { "RemoteControlValues", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FRenderGridRemoteControlPropertyData, METADATA_PARAMS(nullptr, 0) }; // 1660536410
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URenderGridJob_Statics::NewProp_RemoteControlValues_Key_KeyProp = { "RemoteControlValues_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGridJob_Statics::NewProp_RemoteControlValues_MetaData[] = {
		{ "Comment", "/** The remote control plugin can be used to customize and modify the way a job is rendered. If remote control is being used, the property values of this job will be stored in this map (remote control entity id -> value as bytes). */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "The remote control plugin can be used to customize and modify the way a job is rendered. If remote control is being used, the property values of this job will be stored in this map (remote control entity id -> value as bytes)." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URenderGridJob_Statics::NewProp_RemoteControlValues = { "RemoteControlValues", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGridJob, RemoteControlValues), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URenderGridJob_Statics::NewProp_RemoteControlValues_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridJob_Statics::NewProp_RemoteControlValues_MetaData)) }; // 1660536410
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URenderGridJob_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridJob_Statics::NewProp_Guid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridJob_Statics::NewProp_WaitFramesBeforeRendering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridJob_Statics::NewProp_LevelSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridJob_Statics::NewProp_bOverrideStartFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridJob_Statics::NewProp_CustomStartFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridJob_Statics::NewProp_bOverrideEndFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridJob_Statics::NewProp_CustomEndFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridJob_Statics::NewProp_bOverrideResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridJob_Statics::NewProp_CustomResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridJob_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridJob_Statics::NewProp_JobId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridJob_Statics::NewProp_JobName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridJob_Statics::NewProp_OutputDirectory,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridJob_Statics::NewProp_RenderPreset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridJob_Statics::NewProp_RemoteControlValues_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridJob_Statics::NewProp_RemoteControlValues_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGridJob_Statics::NewProp_RemoteControlValues,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderGridJob_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderGridJob>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderGridJob_Statics::ClassParams = {
		&URenderGridJob::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URenderGridJob_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridJob_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URenderGridJob_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGridJob_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderGridJob()
	{
		if (!Z_Registration_Info_UClass_URenderGridJob.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderGridJob.OuterSingleton, Z_Construct_UClass_URenderGridJob_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderGridJob.OuterSingleton;
	}
	template<> RENDERGRID_API UClass* StaticClass<URenderGridJob>()
	{
		return URenderGridJob::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderGridJob);
	URenderGridJob::~URenderGridJob() {}
	DEFINE_FUNCTION(URenderGrid::execReorderRenderGridJob)
	{
		P_GET_OBJECT(URenderGridJob,Z_Param_Job);
		P_GET_OBJECT(URenderGridJob,Z_Param_DroppedOnJob);
		P_GET_UBOOL(Z_Param_bAfter);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReorderRenderGridJob(Z_Param_Job,Z_Param_DroppedOnJob,Z_Param_bAfter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execDuplicateAndAddRenderGridJob)
	{
		P_GET_OBJECT(URenderGridJob,Z_Param_Job);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URenderGridJob**)Z_Param__Result=P_THIS->DuplicateAndAddRenderGridJob(Z_Param_Job);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execCreateAndAddNewRenderGridJob)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URenderGridJob**)Z_Param__Result=P_THIS->CreateAndAddNewRenderGridJob();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execCreateTempRenderGridJob)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URenderGridJob**)Z_Param__Result=P_THIS->CreateTempRenderGridJob();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execDoesJobIdExist)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_JobId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DoesJobIdExist(Z_Param_JobId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execGenerateNextJobId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GenerateNextJobId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execGenerateUniqueRandomJobId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GenerateUniqueRandomJobId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execInsertRenderGridJobAfter)
	{
		P_GET_OBJECT(URenderGridJob,Z_Param_Job);
		P_GET_OBJECT(URenderGridJob,Z_Param_AfterJob);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InsertRenderGridJobAfter(Z_Param_Job,Z_Param_AfterJob);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execInsertRenderGridJobBefore)
	{
		P_GET_OBJECT(URenderGridJob,Z_Param_Job);
		P_GET_OBJECT(URenderGridJob,Z_Param_BeforeJob);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InsertRenderGridJobBefore(Z_Param_Job,Z_Param_BeforeJob);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execGetDisabledRenderGridJobs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URenderGridJob*>*)Z_Param__Result=P_THIS->GetDisabledRenderGridJobs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execGetEnabledRenderGridJobs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URenderGridJob*>*)Z_Param__Result=P_THIS->GetEnabledRenderGridJobs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execGetRenderGridJobs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<URenderGridJob*>*)Z_Param__Result=P_THIS->GetRenderGridJobs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execGetIndexOfRenderGridJob)
	{
		P_GET_OBJECT(URenderGridJob,Z_Param_Job);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetIndexOfRenderGridJob(Z_Param_Job);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execHasRenderGridJob)
	{
		P_GET_OBJECT(URenderGridJob,Z_Param_Job);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasRenderGridJob(Z_Param_Job);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execHasAnyRenderGridJobs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnyRenderGridJobs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execInsertRenderGridJob)
	{
		P_GET_OBJECT(URenderGridJob,Z_Param_Job);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InsertRenderGridJob(Z_Param_Job,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execRemoveRenderGridJob)
	{
		P_GET_OBJECT(URenderGridJob,Z_Param_Job);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveRenderGridJob(Z_Param_Job);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execAddRenderGridJob)
	{
		P_GET_OBJECT(URenderGridJob,Z_Param_Job);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddRenderGridJob(Z_Param_Job);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execSetRenderGridJobs)
	{
		P_GET_TARRAY_REF(URenderGridJob*,Z_Param_Out_Jobs);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRenderGridJobs(Z_Param_Out_Jobs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execClearRenderGridJobs)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearRenderGridJobs();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execSetDefaultOutputDirectory)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_NewOutputDirectory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultOutputDirectory(Z_Param_NewOutputDirectory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execGetDefaultOutputDirectoryForDisplay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDefaultOutputDirectoryForDisplay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execGetDefaultOutputDirectory)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetDefaultOutputDirectory();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execSetDefaultRenderPreset)
	{
		P_GET_OBJECT(UMoviePipelinePrimaryConfig,Z_Param_NewRenderPreset);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultRenderPreset(Z_Param_NewRenderPreset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execGetDefaultRenderPresetOutputSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelineOutputSetting**)Z_Param__Result=P_THIS->GetDefaultRenderPresetOutputSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execGetDefaultRenderPreset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMoviePipelinePrimaryConfig**)Z_Param__Result=P_THIS->GetDefaultRenderPreset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execSetDefaultLevelSequence)
	{
		P_GET_OBJECT(ULevelSequence,Z_Param_NewSequence);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDefaultLevelSequence(Z_Param_NewSequence);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execGetDefaultLevelSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelSequence**)Z_Param__Result=P_THIS->GetDefaultLevelSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execGetPropsSourceOrigin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=P_THIS->GetPropsSourceOrigin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execGetPropsSourceType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ERenderGridPropsSourceType*)Z_Param__Result=P_THIS->GetPropsSourceType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execGetPropsSource)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URenderGridPropsSourceBase**)Z_Param__Result=P_THIS->GetPropsSource();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execSetPropsSource)
	{
		P_GET_ENUM(ERenderGridPropsSourceType,Z_Param_InPropsSourceType);
		P_GET_OBJECT(UObject,Z_Param_InPropsSourceOrigin);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPropsSource(ERenderGridPropsSourceType(Z_Param_InPropsSourceType),Z_Param_InPropsSourceOrigin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execGenerateNewGuid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateNewGuid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execGetGuid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetGuid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execRenderJob)
	{
		P_GET_OBJECT(URenderGridJob,Z_Param_Job);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URenderGridQueue**)Z_Param__Result=P_THIS->RenderJob(Z_Param_Job);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execRenderJobs)
	{
		P_GET_TARRAY_REF(URenderGridJob*,Z_Param_Out_Jobs);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URenderGridQueue**)Z_Param__Result=P_THIS->RenderJobs(Z_Param_Out_Jobs);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URenderGrid::execRender)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(URenderGridQueue**)Z_Param__Result=P_THIS->Render();
		P_NATIVE_END;
	}
	struct RenderGrid_eventReceiveBeginBatchRender_Parms
	{
		URenderGridQueue* Queue;
	};
	struct RenderGrid_eventReceiveBeginJobRender_Parms
	{
		URenderGridQueue* Queue;
		URenderGridJob* Job;
	};
	struct RenderGrid_eventReceiveBeginViewportRender_Parms
	{
		URenderGridJob* Job;
	};
	struct RenderGrid_eventReceiveEndBatchRender_Parms
	{
		URenderGridQueue* Queue;
	};
	struct RenderGrid_eventReceiveEndJobRender_Parms
	{
		URenderGridQueue* Queue;
		URenderGridJob* Job;
	};
	struct RenderGrid_eventReceiveEndViewportRender_Parms
	{
		URenderGridJob* Job;
	};
	struct RenderGrid_eventReceiveTick_Parms
	{
		float DeltaTime;
	};
	static FName NAME_URenderGrid_ReceiveBeginBatchRender = FName(TEXT("ReceiveBeginBatchRender"));
	void URenderGrid::ReceiveBeginBatchRender(URenderGridQueue* Queue)
	{
		RenderGrid_eventReceiveBeginBatchRender_Parms Parms;
		Parms.Queue=Queue;
		ProcessEvent(FindFunctionChecked(NAME_URenderGrid_ReceiveBeginBatchRender),&Parms);
	}
	static FName NAME_URenderGrid_ReceiveBeginEditor = FName(TEXT("ReceiveBeginEditor"));
	void URenderGrid::ReceiveBeginEditor()
	{
		ProcessEvent(FindFunctionChecked(NAME_URenderGrid_ReceiveBeginEditor),NULL);
	}
	static FName NAME_URenderGrid_ReceiveBeginJobRender = FName(TEXT("ReceiveBeginJobRender"));
	void URenderGrid::ReceiveBeginJobRender(URenderGridQueue* Queue, URenderGridJob* Job)
	{
		RenderGrid_eventReceiveBeginJobRender_Parms Parms;
		Parms.Queue=Queue;
		Parms.Job=Job;
		ProcessEvent(FindFunctionChecked(NAME_URenderGrid_ReceiveBeginJobRender),&Parms);
	}
	static FName NAME_URenderGrid_ReceiveBeginViewportRender = FName(TEXT("ReceiveBeginViewportRender"));
	void URenderGrid::ReceiveBeginViewportRender(URenderGridJob* Job)
	{
		RenderGrid_eventReceiveBeginViewportRender_Parms Parms;
		Parms.Job=Job;
		ProcessEvent(FindFunctionChecked(NAME_URenderGrid_ReceiveBeginViewportRender),&Parms);
	}
	static FName NAME_URenderGrid_ReceiveEndBatchRender = FName(TEXT("ReceiveEndBatchRender"));
	void URenderGrid::ReceiveEndBatchRender(URenderGridQueue* Queue)
	{
		RenderGrid_eventReceiveEndBatchRender_Parms Parms;
		Parms.Queue=Queue;
		ProcessEvent(FindFunctionChecked(NAME_URenderGrid_ReceiveEndBatchRender),&Parms);
	}
	static FName NAME_URenderGrid_ReceiveEndEditor = FName(TEXT("ReceiveEndEditor"));
	void URenderGrid::ReceiveEndEditor()
	{
		ProcessEvent(FindFunctionChecked(NAME_URenderGrid_ReceiveEndEditor),NULL);
	}
	static FName NAME_URenderGrid_ReceiveEndJobRender = FName(TEXT("ReceiveEndJobRender"));
	void URenderGrid::ReceiveEndJobRender(URenderGridQueue* Queue, URenderGridJob* Job)
	{
		RenderGrid_eventReceiveEndJobRender_Parms Parms;
		Parms.Queue=Queue;
		Parms.Job=Job;
		ProcessEvent(FindFunctionChecked(NAME_URenderGrid_ReceiveEndJobRender),&Parms);
	}
	static FName NAME_URenderGrid_ReceiveEndViewportRender = FName(TEXT("ReceiveEndViewportRender"));
	void URenderGrid::ReceiveEndViewportRender(URenderGridJob* Job)
	{
		RenderGrid_eventReceiveEndViewportRender_Parms Parms;
		Parms.Job=Job;
		ProcessEvent(FindFunctionChecked(NAME_URenderGrid_ReceiveEndViewportRender),&Parms);
	}
	static FName NAME_URenderGrid_ReceiveTick = FName(TEXT("ReceiveTick"));
	void URenderGrid::ReceiveTick(float DeltaTime)
	{
		RenderGrid_eventReceiveTick_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_URenderGrid_ReceiveTick),&Parms);
	}
	void URenderGrid::StaticRegisterNativesURenderGrid()
	{
		UClass* Class = URenderGrid::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddRenderGridJob", &URenderGrid::execAddRenderGridJob },
			{ "ClearRenderGridJobs", &URenderGrid::execClearRenderGridJobs },
			{ "CreateAndAddNewRenderGridJob", &URenderGrid::execCreateAndAddNewRenderGridJob },
			{ "CreateTempRenderGridJob", &URenderGrid::execCreateTempRenderGridJob },
			{ "DoesJobIdExist", &URenderGrid::execDoesJobIdExist },
			{ "DuplicateAndAddRenderGridJob", &URenderGrid::execDuplicateAndAddRenderGridJob },
			{ "GenerateNewGuid", &URenderGrid::execGenerateNewGuid },
			{ "GenerateNextJobId", &URenderGrid::execGenerateNextJobId },
			{ "GenerateUniqueRandomJobId", &URenderGrid::execGenerateUniqueRandomJobId },
			{ "GetDefaultLevelSequence", &URenderGrid::execGetDefaultLevelSequence },
			{ "GetDefaultOutputDirectory", &URenderGrid::execGetDefaultOutputDirectory },
			{ "GetDefaultOutputDirectoryForDisplay", &URenderGrid::execGetDefaultOutputDirectoryForDisplay },
			{ "GetDefaultRenderPreset", &URenderGrid::execGetDefaultRenderPreset },
			{ "GetDefaultRenderPresetOutputSettings", &URenderGrid::execGetDefaultRenderPresetOutputSettings },
			{ "GetDisabledRenderGridJobs", &URenderGrid::execGetDisabledRenderGridJobs },
			{ "GetEnabledRenderGridJobs", &URenderGrid::execGetEnabledRenderGridJobs },
			{ "GetGuid", &URenderGrid::execGetGuid },
			{ "GetIndexOfRenderGridJob", &URenderGrid::execGetIndexOfRenderGridJob },
			{ "GetPropsSource", &URenderGrid::execGetPropsSource },
			{ "GetPropsSourceOrigin", &URenderGrid::execGetPropsSourceOrigin },
			{ "GetPropsSourceType", &URenderGrid::execGetPropsSourceType },
			{ "GetRenderGridJobs", &URenderGrid::execGetRenderGridJobs },
			{ "HasAnyRenderGridJobs", &URenderGrid::execHasAnyRenderGridJobs },
			{ "HasRenderGridJob", &URenderGrid::execHasRenderGridJob },
			{ "InsertRenderGridJob", &URenderGrid::execInsertRenderGridJob },
			{ "InsertRenderGridJobAfter", &URenderGrid::execInsertRenderGridJobAfter },
			{ "InsertRenderGridJobBefore", &URenderGrid::execInsertRenderGridJobBefore },
			{ "RemoveRenderGridJob", &URenderGrid::execRemoveRenderGridJob },
			{ "Render", &URenderGrid::execRender },
			{ "RenderJob", &URenderGrid::execRenderJob },
			{ "RenderJobs", &URenderGrid::execRenderJobs },
			{ "ReorderRenderGridJob", &URenderGrid::execReorderRenderGridJob },
			{ "SetDefaultLevelSequence", &URenderGrid::execSetDefaultLevelSequence },
			{ "SetDefaultOutputDirectory", &URenderGrid::execSetDefaultOutputDirectory },
			{ "SetDefaultRenderPreset", &URenderGrid::execSetDefaultRenderPreset },
			{ "SetPropsSource", &URenderGrid::execSetPropsSource },
			{ "SetRenderGridJobs", &URenderGrid::execSetRenderGridJobs },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URenderGrid_AddRenderGridJob_Statics
	{
		struct RenderGrid_eventAddRenderGridJob_Parms
		{
			URenderGridJob* Job;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Job;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_AddRenderGridJob_Statics::NewProp_Job = { "Job", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventAddRenderGridJob_Parms, Job), Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_AddRenderGridJob_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_AddRenderGridJob_Statics::NewProp_Job,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_AddRenderGridJob_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_AddRenderGridJob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "AddRenderGridJob", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_AddRenderGridJob_Statics::RenderGrid_eventAddRenderGridJob_Parms), Z_Construct_UFunction_URenderGrid_AddRenderGridJob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_AddRenderGridJob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_AddRenderGridJob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_AddRenderGridJob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_AddRenderGridJob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_AddRenderGridJob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_ClearRenderGridJobs_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_ClearRenderGridJobs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "Keywords", "remove delete all" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_ClearRenderGridJobs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "ClearRenderGridJobs", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_ClearRenderGridJobs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_ClearRenderGridJobs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_ClearRenderGridJobs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_ClearRenderGridJobs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_CreateAndAddNewRenderGridJob_Statics
	{
		struct RenderGrid_eventCreateAndAddNewRenderGridJob_Parms
		{
			URenderGridJob* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_CreateAndAddNewRenderGridJob_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventCreateAndAddNewRenderGridJob_Parms, ReturnValue), Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_CreateAndAddNewRenderGridJob_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_CreateAndAddNewRenderGridJob_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_CreateAndAddNewRenderGridJob_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "Comment", "/** Creates a new job and adds it to this grid. **/" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "Creates a new job and adds it to this grid. *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_CreateAndAddNewRenderGridJob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "CreateAndAddNewRenderGridJob", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_CreateAndAddNewRenderGridJob_Statics::RenderGrid_eventCreateAndAddNewRenderGridJob_Parms), Z_Construct_UFunction_URenderGrid_CreateAndAddNewRenderGridJob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_CreateAndAddNewRenderGridJob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_CreateAndAddNewRenderGridJob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_CreateAndAddNewRenderGridJob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_CreateAndAddNewRenderGridJob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_CreateAndAddNewRenderGridJob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_CreateTempRenderGridJob_Statics
	{
		struct RenderGrid_eventCreateTempRenderGridJob_Parms
		{
			URenderGridJob* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_CreateTempRenderGridJob_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventCreateTempRenderGridJob_Parms, ReturnValue), Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_CreateTempRenderGridJob_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_CreateTempRenderGridJob_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_CreateTempRenderGridJob_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "Comment", "/** Creates a new job. This job won't be added to the grid, so it will eventually be garbage collected. **/" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "Creates a new job. This job won't be added to the grid, so it will eventually be garbage collected. *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_CreateTempRenderGridJob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "CreateTempRenderGridJob", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_CreateTempRenderGridJob_Statics::RenderGrid_eventCreateTempRenderGridJob_Parms), Z_Construct_UFunction_URenderGrid_CreateTempRenderGridJob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_CreateTempRenderGridJob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_CreateTempRenderGridJob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_CreateTempRenderGridJob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_CreateTempRenderGridJob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_CreateTempRenderGridJob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_DoesJobIdExist_Statics
	{
		struct RenderGrid_eventDoesJobIdExist_Parms
		{
			FString JobId;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JobId_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_JobId;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_DoesJobIdExist_Statics::NewProp_JobId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGrid_DoesJobIdExist_Statics::NewProp_JobId = { "JobId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventDoesJobIdExist_Parms, JobId), METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_DoesJobIdExist_Statics::NewProp_JobId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_DoesJobIdExist_Statics::NewProp_JobId_MetaData)) };
	void Z_Construct_UFunction_URenderGrid_DoesJobIdExist_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenderGrid_eventDoesJobIdExist_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGrid_DoesJobIdExist_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RenderGrid_eventDoesJobIdExist_Parms), &Z_Construct_UFunction_URenderGrid_DoesJobIdExist_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_DoesJobIdExist_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_DoesJobIdExist_Statics::NewProp_JobId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_DoesJobIdExist_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_DoesJobIdExist_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "Comment", "/** Finds whether given job ID already exists in this grid. **/" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "Finds whether given job ID already exists in this grid. *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_DoesJobIdExist_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "DoesJobIdExist", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_DoesJobIdExist_Statics::RenderGrid_eventDoesJobIdExist_Parms), Z_Construct_UFunction_URenderGrid_DoesJobIdExist_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_DoesJobIdExist_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_DoesJobIdExist_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_DoesJobIdExist_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_DoesJobIdExist()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_DoesJobIdExist_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_DuplicateAndAddRenderGridJob_Statics
	{
		struct RenderGrid_eventDuplicateAndAddRenderGridJob_Parms
		{
			URenderGridJob* Job;
			URenderGridJob* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Job;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_DuplicateAndAddRenderGridJob_Statics::NewProp_Job = { "Job", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventDuplicateAndAddRenderGridJob_Parms, Job), Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_DuplicateAndAddRenderGridJob_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventDuplicateAndAddRenderGridJob_Parms, ReturnValue), Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_DuplicateAndAddRenderGridJob_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_DuplicateAndAddRenderGridJob_Statics::NewProp_Job,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_DuplicateAndAddRenderGridJob_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_DuplicateAndAddRenderGridJob_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "Comment", "/** Copy the given job in this grid. **/" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "Copy the given job in this grid. *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_DuplicateAndAddRenderGridJob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "DuplicateAndAddRenderGridJob", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_DuplicateAndAddRenderGridJob_Statics::RenderGrid_eventDuplicateAndAddRenderGridJob_Parms), Z_Construct_UFunction_URenderGrid_DuplicateAndAddRenderGridJob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_DuplicateAndAddRenderGridJob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_DuplicateAndAddRenderGridJob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_DuplicateAndAddRenderGridJob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_DuplicateAndAddRenderGridJob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_DuplicateAndAddRenderGridJob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_GenerateNewGuid_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_GenerateNewGuid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "Comment", "/** Randomly generates a new GUID. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "Randomly generates a new GUID." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_GenerateNewGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "GenerateNewGuid", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_GenerateNewGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GenerateNewGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_GenerateNewGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_GenerateNewGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_GenerateNextJobId_Statics
	{
		struct RenderGrid_eventGenerateNextJobId_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGrid_GenerateNextJobId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventGenerateNextJobId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_GenerateNextJobId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_GenerateNextJobId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_GenerateNextJobId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "Comment", "/** Generates a unique job ID by finding the currently highest job ID and increasing it by one. **/" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "Generates a unique job ID by finding the currently highest job ID and increasing it by one. *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_GenerateNextJobId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "GenerateNextJobId", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_GenerateNextJobId_Statics::RenderGrid_eventGenerateNextJobId_Parms), Z_Construct_UFunction_URenderGrid_GenerateNextJobId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GenerateNextJobId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_GenerateNextJobId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GenerateNextJobId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_GenerateNextJobId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_GenerateNextJobId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_GenerateUniqueRandomJobId_Statics
	{
		struct RenderGrid_eventGenerateUniqueRandomJobId_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGrid_GenerateUniqueRandomJobId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventGenerateUniqueRandomJobId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_GenerateUniqueRandomJobId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_GenerateUniqueRandomJobId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_GenerateUniqueRandomJobId_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "Comment", "/** Generates a unique job ID by grabbing the current time, as well as 16 random bytes, and converting that to a base64 string. **/" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "Generates a unique job ID by grabbing the current time, as well as 16 random bytes, and converting that to a base64 string. *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_GenerateUniqueRandomJobId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "GenerateUniqueRandomJobId", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_GenerateUniqueRandomJobId_Statics::RenderGrid_eventGenerateUniqueRandomJobId_Parms), Z_Construct_UFunction_URenderGrid_GenerateUniqueRandomJobId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GenerateUniqueRandomJobId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_GenerateUniqueRandomJobId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GenerateUniqueRandomJobId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_GenerateUniqueRandomJobId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_GenerateUniqueRandomJobId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_GetDefaultLevelSequence_Statics
	{
		struct RenderGrid_eventGetDefaultLevelSequence_Parms
		{
			ULevelSequence* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_GetDefaultLevelSequence_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventGetDefaultLevelSequence_Parms, ReturnValue), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_GetDefaultLevelSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_GetDefaultLevelSequence_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_GetDefaultLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_GetDefaultLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "GetDefaultLevelSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_GetDefaultLevelSequence_Statics::RenderGrid_eventGetDefaultLevelSequence_Parms), Z_Construct_UFunction_URenderGrid_GetDefaultLevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GetDefaultLevelSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_GetDefaultLevelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GetDefaultLevelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_GetDefaultLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_GetDefaultLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_GetDefaultOutputDirectory_Statics
	{
		struct RenderGrid_eventGetDefaultOutputDirectory_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGrid_GetDefaultOutputDirectory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventGetDefaultOutputDirectory_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_GetDefaultOutputDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_GetDefaultOutputDirectory_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_GetDefaultOutputDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_GetDefaultOutputDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "GetDefaultOutputDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_GetDefaultOutputDirectory_Statics::RenderGrid_eventGetDefaultOutputDirectory_Parms), Z_Construct_UFunction_URenderGrid_GetDefaultOutputDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GetDefaultOutputDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_GetDefaultOutputDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GetDefaultOutputDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_GetDefaultOutputDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_GetDefaultOutputDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_GetDefaultOutputDirectoryForDisplay_Statics
	{
		struct RenderGrid_eventGetDefaultOutputDirectoryForDisplay_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGrid_GetDefaultOutputDirectoryForDisplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventGetDefaultOutputDirectoryForDisplay_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_GetDefaultOutputDirectoryForDisplay_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_GetDefaultOutputDirectoryForDisplay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_GetDefaultOutputDirectoryForDisplay_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_GetDefaultOutputDirectoryForDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "GetDefaultOutputDirectoryForDisplay", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_GetDefaultOutputDirectoryForDisplay_Statics::RenderGrid_eventGetDefaultOutputDirectoryForDisplay_Parms), Z_Construct_UFunction_URenderGrid_GetDefaultOutputDirectoryForDisplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GetDefaultOutputDirectoryForDisplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_GetDefaultOutputDirectoryForDisplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GetDefaultOutputDirectoryForDisplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_GetDefaultOutputDirectoryForDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_GetDefaultOutputDirectoryForDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_GetDefaultRenderPreset_Statics
	{
		struct RenderGrid_eventGetDefaultRenderPreset_Parms
		{
			UMoviePipelinePrimaryConfig* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_GetDefaultRenderPreset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventGetDefaultRenderPreset_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_GetDefaultRenderPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_GetDefaultRenderPreset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_GetDefaultRenderPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_GetDefaultRenderPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "GetDefaultRenderPreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_GetDefaultRenderPreset_Statics::RenderGrid_eventGetDefaultRenderPreset_Parms), Z_Construct_UFunction_URenderGrid_GetDefaultRenderPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GetDefaultRenderPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_GetDefaultRenderPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GetDefaultRenderPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_GetDefaultRenderPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_GetDefaultRenderPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_GetDefaultRenderPresetOutputSettings_Statics
	{
		struct RenderGrid_eventGetDefaultRenderPresetOutputSettings_Parms
		{
			UMoviePipelineOutputSetting* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_GetDefaultRenderPresetOutputSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventGetDefaultRenderPresetOutputSettings_Parms, ReturnValue), Z_Construct_UClass_UMoviePipelineOutputSetting_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_GetDefaultRenderPresetOutputSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_GetDefaultRenderPresetOutputSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_GetDefaultRenderPresetOutputSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_GetDefaultRenderPresetOutputSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "GetDefaultRenderPresetOutputSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_GetDefaultRenderPresetOutputSettings_Statics::RenderGrid_eventGetDefaultRenderPresetOutputSettings_Parms), Z_Construct_UFunction_URenderGrid_GetDefaultRenderPresetOutputSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GetDefaultRenderPresetOutputSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_GetDefaultRenderPresetOutputSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GetDefaultRenderPresetOutputSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_GetDefaultRenderPresetOutputSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_GetDefaultRenderPresetOutputSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_GetDisabledRenderGridJobs_Statics
	{
		struct RenderGrid_eventGetDisabledRenderGridJobs_Parms
		{
			TArray<URenderGridJob*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_GetDisabledRenderGridJobs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URenderGrid_GetDisabledRenderGridJobs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventGetDisabledRenderGridJobs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_GetDisabledRenderGridJobs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_GetDisabledRenderGridJobs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_GetDisabledRenderGridJobs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_GetDisabledRenderGridJobs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_GetDisabledRenderGridJobs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "GetDisabledRenderGridJobs", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_GetDisabledRenderGridJobs_Statics::RenderGrid_eventGetDisabledRenderGridJobs_Parms), Z_Construct_UFunction_URenderGrid_GetDisabledRenderGridJobs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GetDisabledRenderGridJobs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_GetDisabledRenderGridJobs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GetDisabledRenderGridJobs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_GetDisabledRenderGridJobs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_GetDisabledRenderGridJobs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_GetEnabledRenderGridJobs_Statics
	{
		struct RenderGrid_eventGetEnabledRenderGridJobs_Parms
		{
			TArray<URenderGridJob*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_GetEnabledRenderGridJobs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URenderGrid_GetEnabledRenderGridJobs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventGetEnabledRenderGridJobs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_GetEnabledRenderGridJobs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_GetEnabledRenderGridJobs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_GetEnabledRenderGridJobs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_GetEnabledRenderGridJobs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_GetEnabledRenderGridJobs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "GetEnabledRenderGridJobs", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_GetEnabledRenderGridJobs_Statics::RenderGrid_eventGetEnabledRenderGridJobs_Parms), Z_Construct_UFunction_URenderGrid_GetEnabledRenderGridJobs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GetEnabledRenderGridJobs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_GetEnabledRenderGridJobs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GetEnabledRenderGridJobs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_GetEnabledRenderGridJobs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_GetEnabledRenderGridJobs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_GetGuid_Statics
	{
		struct RenderGrid_eventGetGuid_Parms
		{
			FGuid ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URenderGrid_GetGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventGetGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_GetGuid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_GetGuid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_GetGuid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "Comment", "/** Returns the GUID, which is randomly generated at creation. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "Returns the GUID, which is randomly generated at creation." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_GetGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "GetGuid", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_GetGuid_Statics::RenderGrid_eventGetGuid_Parms), Z_Construct_UFunction_URenderGrid_GetGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GetGuid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_GetGuid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GetGuid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_GetGuid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_GetGuid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_GetIndexOfRenderGridJob_Statics
	{
		struct RenderGrid_eventGetIndexOfRenderGridJob_Parms
		{
			URenderGridJob* Job;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Job;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_GetIndexOfRenderGridJob_Statics::NewProp_Job = { "Job", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventGetIndexOfRenderGridJob_Parms, Job), Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URenderGrid_GetIndexOfRenderGridJob_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventGetIndexOfRenderGridJob_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_GetIndexOfRenderGridJob_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_GetIndexOfRenderGridJob_Statics::NewProp_Job,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_GetIndexOfRenderGridJob_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_GetIndexOfRenderGridJob_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_GetIndexOfRenderGridJob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "GetIndexOfRenderGridJob", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_GetIndexOfRenderGridJob_Statics::RenderGrid_eventGetIndexOfRenderGridJob_Parms), Z_Construct_UFunction_URenderGrid_GetIndexOfRenderGridJob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GetIndexOfRenderGridJob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_GetIndexOfRenderGridJob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GetIndexOfRenderGridJob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_GetIndexOfRenderGridJob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_GetIndexOfRenderGridJob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_GetPropsSource_Statics
	{
		struct RenderGrid_eventGetPropsSource_Parms
		{
			URenderGridPropsSourceBase* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_GetPropsSource_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventGetPropsSource_Parms, ReturnValue), Z_Construct_UClass_URenderGridPropsSourceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_GetPropsSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_GetPropsSource_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_GetPropsSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_GetPropsSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "GetPropsSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_GetPropsSource_Statics::RenderGrid_eventGetPropsSource_Parms), Z_Construct_UFunction_URenderGrid_GetPropsSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GetPropsSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_GetPropsSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GetPropsSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_GetPropsSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_GetPropsSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_GetPropsSourceOrigin_Statics
	{
		struct RenderGrid_eventGetPropsSourceOrigin_Parms
		{
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_GetPropsSourceOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventGetPropsSourceOrigin_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_GetPropsSourceOrigin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_GetPropsSourceOrigin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_GetPropsSourceOrigin_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_GetPropsSourceOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "GetPropsSourceOrigin", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_GetPropsSourceOrigin_Statics::RenderGrid_eventGetPropsSourceOrigin_Parms), Z_Construct_UFunction_URenderGrid_GetPropsSourceOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GetPropsSourceOrigin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_GetPropsSourceOrigin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GetPropsSourceOrigin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_GetPropsSourceOrigin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_GetPropsSourceOrigin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_GetPropsSourceType_Statics
	{
		struct RenderGrid_eventGetPropsSourceType_Parms
		{
			ERenderGridPropsSourceType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URenderGrid_GetPropsSourceType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URenderGrid_GetPropsSourceType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventGetPropsSourceType_Parms, ReturnValue), Z_Construct_UEnum_RenderGrid_ERenderGridPropsSourceType, METADATA_PARAMS(nullptr, 0) }; // 2127287017
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_GetPropsSourceType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_GetPropsSourceType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_GetPropsSourceType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_GetPropsSourceType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_GetPropsSourceType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "GetPropsSourceType", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_GetPropsSourceType_Statics::RenderGrid_eventGetPropsSourceType_Parms), Z_Construct_UFunction_URenderGrid_GetPropsSourceType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GetPropsSourceType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_GetPropsSourceType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GetPropsSourceType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_GetPropsSourceType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_GetPropsSourceType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_GetRenderGridJobs_Statics
	{
		struct RenderGrid_eventGetRenderGridJobs_Parms
		{
			TArray<URenderGridJob*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_GetRenderGridJobs_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URenderGrid_GetRenderGridJobs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventGetRenderGridJobs_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_GetRenderGridJobs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_GetRenderGridJobs_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_GetRenderGridJobs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_GetRenderGridJobs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_GetRenderGridJobs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "GetRenderGridJobs", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_GetRenderGridJobs_Statics::RenderGrid_eventGetRenderGridJobs_Parms), Z_Construct_UFunction_URenderGrid_GetRenderGridJobs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GetRenderGridJobs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_GetRenderGridJobs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_GetRenderGridJobs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_GetRenderGridJobs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_GetRenderGridJobs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_HasAnyRenderGridJobs_Statics
	{
		struct RenderGrid_eventHasAnyRenderGridJobs_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URenderGrid_HasAnyRenderGridJobs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenderGrid_eventHasAnyRenderGridJobs_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGrid_HasAnyRenderGridJobs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RenderGrid_eventHasAnyRenderGridJobs_Parms), &Z_Construct_UFunction_URenderGrid_HasAnyRenderGridJobs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_HasAnyRenderGridJobs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_HasAnyRenderGridJobs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_HasAnyRenderGridJobs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_HasAnyRenderGridJobs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "HasAnyRenderGridJobs", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_HasAnyRenderGridJobs_Statics::RenderGrid_eventHasAnyRenderGridJobs_Parms), Z_Construct_UFunction_URenderGrid_HasAnyRenderGridJobs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_HasAnyRenderGridJobs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_HasAnyRenderGridJobs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_HasAnyRenderGridJobs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_HasAnyRenderGridJobs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_HasAnyRenderGridJobs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_HasRenderGridJob_Statics
	{
		struct RenderGrid_eventHasRenderGridJob_Parms
		{
			URenderGridJob* Job;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Job;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_HasRenderGridJob_Statics::NewProp_Job = { "Job", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventHasRenderGridJob_Parms, Job), Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_URenderGrid_HasRenderGridJob_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenderGrid_eventHasRenderGridJob_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGrid_HasRenderGridJob_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RenderGrid_eventHasRenderGridJob_Parms), &Z_Construct_UFunction_URenderGrid_HasRenderGridJob_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_HasRenderGridJob_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_HasRenderGridJob_Statics::NewProp_Job,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_HasRenderGridJob_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_HasRenderGridJob_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_HasRenderGridJob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "HasRenderGridJob", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_HasRenderGridJob_Statics::RenderGrid_eventHasRenderGridJob_Parms), Z_Construct_UFunction_URenderGrid_HasRenderGridJob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_HasRenderGridJob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_HasRenderGridJob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_HasRenderGridJob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_HasRenderGridJob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_HasRenderGridJob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_InsertRenderGridJob_Statics
	{
		struct RenderGrid_eventInsertRenderGridJob_Parms
		{
			URenderGridJob* Job;
			int32 Index;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Job;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_InsertRenderGridJob_Statics::NewProp_Job = { "Job", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventInsertRenderGridJob_Parms, Job), Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URenderGrid_InsertRenderGridJob_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventInsertRenderGridJob_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_InsertRenderGridJob_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_InsertRenderGridJob_Statics::NewProp_Job,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_InsertRenderGridJob_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_InsertRenderGridJob_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_InsertRenderGridJob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "InsertRenderGridJob", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_InsertRenderGridJob_Statics::RenderGrid_eventInsertRenderGridJob_Parms), Z_Construct_UFunction_URenderGrid_InsertRenderGridJob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_InsertRenderGridJob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_InsertRenderGridJob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_InsertRenderGridJob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_InsertRenderGridJob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_InsertRenderGridJob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_InsertRenderGridJobAfter_Statics
	{
		struct RenderGrid_eventInsertRenderGridJobAfter_Parms
		{
			URenderGridJob* Job;
			URenderGridJob* AfterJob;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Job;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AfterJob;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_InsertRenderGridJobAfter_Statics::NewProp_Job = { "Job", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventInsertRenderGridJobAfter_Parms, Job), Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_InsertRenderGridJobAfter_Statics::NewProp_AfterJob = { "AfterJob", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventInsertRenderGridJobAfter_Parms, AfterJob), Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_InsertRenderGridJobAfter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_InsertRenderGridJobAfter_Statics::NewProp_Job,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_InsertRenderGridJobAfter_Statics::NewProp_AfterJob,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_InsertRenderGridJobAfter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_InsertRenderGridJobAfter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "InsertRenderGridJobAfter", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_InsertRenderGridJobAfter_Statics::RenderGrid_eventInsertRenderGridJobAfter_Parms), Z_Construct_UFunction_URenderGrid_InsertRenderGridJobAfter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_InsertRenderGridJobAfter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_InsertRenderGridJobAfter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_InsertRenderGridJobAfter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_InsertRenderGridJobAfter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_InsertRenderGridJobAfter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_InsertRenderGridJobBefore_Statics
	{
		struct RenderGrid_eventInsertRenderGridJobBefore_Parms
		{
			URenderGridJob* Job;
			URenderGridJob* BeforeJob;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Job;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BeforeJob;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_InsertRenderGridJobBefore_Statics::NewProp_Job = { "Job", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventInsertRenderGridJobBefore_Parms, Job), Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_InsertRenderGridJobBefore_Statics::NewProp_BeforeJob = { "BeforeJob", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventInsertRenderGridJobBefore_Parms, BeforeJob), Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_InsertRenderGridJobBefore_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_InsertRenderGridJobBefore_Statics::NewProp_Job,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_InsertRenderGridJobBefore_Statics::NewProp_BeforeJob,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_InsertRenderGridJobBefore_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_InsertRenderGridJobBefore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "InsertRenderGridJobBefore", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_InsertRenderGridJobBefore_Statics::RenderGrid_eventInsertRenderGridJobBefore_Parms), Z_Construct_UFunction_URenderGrid_InsertRenderGridJobBefore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_InsertRenderGridJobBefore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_InsertRenderGridJobBefore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_InsertRenderGridJobBefore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_InsertRenderGridJobBefore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_InsertRenderGridJobBefore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_ReceiveBeginBatchRender_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Queue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_ReceiveBeginBatchRender_Statics::NewProp_Queue = { "Queue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventReceiveBeginBatchRender_Parms, Queue), Z_Construct_UClass_URenderGridQueue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_ReceiveBeginBatchRender_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_ReceiveBeginBatchRender_Statics::NewProp_Queue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_ReceiveBeginBatchRender_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Event for when batch rendering begins.\n\x09 * \n\x09 * In here, you could for example obtain jobs from an external source and add them to the queue.\n\x09 */" },
		{ "DisplayName", "BeginBatchRender" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "Event for when batch rendering begins.\n\nIn here, you could for example obtain jobs from an external source and add them to the queue." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_ReceiveBeginBatchRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "ReceiveBeginBatchRender", nullptr, nullptr, sizeof(RenderGrid_eventReceiveBeginBatchRender_Parms), Z_Construct_UFunction_URenderGrid_ReceiveBeginBatchRender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_ReceiveBeginBatchRender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_ReceiveBeginBatchRender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_ReceiveBeginBatchRender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_ReceiveBeginBatchRender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_ReceiveBeginBatchRender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_ReceiveBeginEditor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_ReceiveBeginEditor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Event for when this asset is opened in the editor. The asset will also be closed and reopened during a blueprint compile.\n\x09 * \n\x09 * In here, you could for example obtain jobs from an external source and replace the current jobs of this render grid asset with those.\n\x09 */" },
		{ "DisplayName", "BeginEditor" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "Event for when this asset is opened in the editor. The asset will also be closed and reopened during a blueprint compile.\n\nIn here, you could for example obtain jobs from an external source and replace the current jobs of this render grid asset with those." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_ReceiveBeginEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "ReceiveBeginEditor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_ReceiveBeginEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_ReceiveBeginEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_ReceiveBeginEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_ReceiveBeginEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_ReceiveBeginJobRender_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Queue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Job;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_ReceiveBeginJobRender_Statics::NewProp_Queue = { "Queue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventReceiveBeginJobRender_Parms, Queue), Z_Construct_UClass_URenderGridQueue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_ReceiveBeginJobRender_Statics::NewProp_Job = { "Job", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventReceiveBeginJobRender_Parms, Job), Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_ReceiveBeginJobRender_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_ReceiveBeginJobRender_Statics::NewProp_Queue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_ReceiveBeginJobRender_Statics::NewProp_Job,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_ReceiveBeginJobRender_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Event for when job rendering begins.\n\x09 * \n\x09 * In here, you could for example change elements in the world according to what job this is.\n\x09 */" },
		{ "DisplayName", "BeginJobRender" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "Event for when job rendering begins.\n\nIn here, you could for example change elements in the world according to what job this is." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_ReceiveBeginJobRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "ReceiveBeginJobRender", nullptr, nullptr, sizeof(RenderGrid_eventReceiveBeginJobRender_Parms), Z_Construct_UFunction_URenderGrid_ReceiveBeginJobRender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_ReceiveBeginJobRender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_ReceiveBeginJobRender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_ReceiveBeginJobRender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_ReceiveBeginJobRender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_ReceiveBeginJobRender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_ReceiveBeginViewportRender_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Job;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_ReceiveBeginViewportRender_Statics::NewProp_Job = { "Job", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventReceiveBeginViewportRender_Parms, Job), Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_ReceiveBeginViewportRender_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_ReceiveBeginViewportRender_Statics::NewProp_Job,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_ReceiveBeginViewportRender_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Event for when job rendering for the viewport viewer-mode begins.\n\x09 * \n\x09 * This event will fire every frame, as long as the viewport viewer-mode is open.\n\x09 * \n\x09 * In here, you could for example change elements in the world according to what job this is.\n\x09 */" },
		{ "DisplayName", "BeginViewportRender" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "Event for when job rendering for the viewport viewer-mode begins.\n\nThis event will fire every frame, as long as the viewport viewer-mode is open.\n\nIn here, you could for example change elements in the world according to what job this is." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_ReceiveBeginViewportRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "ReceiveBeginViewportRender", nullptr, nullptr, sizeof(RenderGrid_eventReceiveBeginViewportRender_Parms), Z_Construct_UFunction_URenderGrid_ReceiveBeginViewportRender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_ReceiveBeginViewportRender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_ReceiveBeginViewportRender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_ReceiveBeginViewportRender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_ReceiveBeginViewportRender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_ReceiveBeginViewportRender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_ReceiveEndBatchRender_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Queue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_ReceiveEndBatchRender_Statics::NewProp_Queue = { "Queue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventReceiveEndBatchRender_Parms, Queue), Z_Construct_UClass_URenderGridQueue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_ReceiveEndBatchRender_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_ReceiveEndBatchRender_Statics::NewProp_Queue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_ReceiveEndBatchRender_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Event for when batch rendering ends.\n\x09 * \n\x09 * In here, you could do any cleanup required at the end of a batch render.\n\x09 */" },
		{ "DisplayName", "EndBatchRender" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "Event for when batch rendering ends.\n\nIn here, you could do any cleanup required at the end of a batch render." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_ReceiveEndBatchRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "ReceiveEndBatchRender", nullptr, nullptr, sizeof(RenderGrid_eventReceiveEndBatchRender_Parms), Z_Construct_UFunction_URenderGrid_ReceiveEndBatchRender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_ReceiveEndBatchRender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_ReceiveEndBatchRender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_ReceiveEndBatchRender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_ReceiveEndBatchRender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_ReceiveEndBatchRender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_ReceiveEndEditor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_ReceiveEndEditor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Event for when this asset is closed in the editor. The asset will also be closed and reopened during a blueprint compile.\n\x09 * \n\x09 * In here, you could do any cleanup required at the end of editing this render grid asset.\n\x09 */" },
		{ "DisplayName", "EndEditor" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "Event for when this asset is closed in the editor. The asset will also be closed and reopened during a blueprint compile.\n\nIn here, you could do any cleanup required at the end of editing this render grid asset." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_ReceiveEndEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "ReceiveEndEditor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_ReceiveEndEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_ReceiveEndEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_ReceiveEndEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_ReceiveEndEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_ReceiveEndJobRender_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Queue;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Job;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_ReceiveEndJobRender_Statics::NewProp_Queue = { "Queue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventReceiveEndJobRender_Parms, Queue), Z_Construct_UClass_URenderGridQueue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_ReceiveEndJobRender_Statics::NewProp_Job = { "Job", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventReceiveEndJobRender_Parms, Job), Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_ReceiveEndJobRender_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_ReceiveEndJobRender_Statics::NewProp_Queue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_ReceiveEndJobRender_Statics::NewProp_Job,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_ReceiveEndJobRender_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Event for when job rendering ends.\n\x09 * \n\x09 * In here, you could do any cleanup required at the end of rendering out a job,\n\x09 * like for example undoing the changes you've made to the world for this job.\n\x09 */" },
		{ "DisplayName", "EndJobRender" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "Event for when job rendering ends.\n\nIn here, you could do any cleanup required at the end of rendering out a job,\nlike for example undoing the changes you've made to the world for this job." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_ReceiveEndJobRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "ReceiveEndJobRender", nullptr, nullptr, sizeof(RenderGrid_eventReceiveEndJobRender_Parms), Z_Construct_UFunction_URenderGrid_ReceiveEndJobRender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_ReceiveEndJobRender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_ReceiveEndJobRender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_ReceiveEndJobRender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_ReceiveEndJobRender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_ReceiveEndJobRender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_ReceiveEndViewportRender_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Job;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_ReceiveEndViewportRender_Statics::NewProp_Job = { "Job", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventReceiveEndViewportRender_Parms, Job), Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_ReceiveEndViewportRender_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_ReceiveEndViewportRender_Statics::NewProp_Job,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_ReceiveEndViewportRender_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Event for when job rendering for the viewport viewer-mode ends.\n\x09 * \n\x09 * This event will fire every frame, as long as the viewport viewer-mode is open.\n\x09 * \n\x09 * In here, you could do any cleanup required at the end of rendering out a job,\n\x09 * like for example undoing the changes you've made to the world for this job.\n\x09 */" },
		{ "DisplayName", "EndViewportRender" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "Event for when job rendering for the viewport viewer-mode ends.\n\nThis event will fire every frame, as long as the viewport viewer-mode is open.\n\nIn here, you could do any cleanup required at the end of rendering out a job,\nlike for example undoing the changes you've made to the world for this job." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_ReceiveEndViewportRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "ReceiveEndViewportRender", nullptr, nullptr, sizeof(RenderGrid_eventReceiveEndViewportRender_Parms), Z_Construct_UFunction_URenderGrid_ReceiveEndViewportRender_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_ReceiveEndViewportRender_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_ReceiveEndViewportRender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_ReceiveEndViewportRender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_ReceiveEndViewportRender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_ReceiveEndViewportRender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_ReceiveTick_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URenderGrid_ReceiveTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventReceiveTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_ReceiveTick_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_ReceiveTick_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_ReceiveTick_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * The tick event, will only execute when the asset is open in the editor.\n\x09 */" },
		{ "DisplayName", "Tick" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "The tick event, will only execute when the asset is open in the editor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_ReceiveTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "ReceiveTick", nullptr, nullptr, sizeof(RenderGrid_eventReceiveTick_Parms), Z_Construct_UFunction_URenderGrid_ReceiveTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_ReceiveTick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_ReceiveTick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_ReceiveTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_ReceiveTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_ReceiveTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_RemoveRenderGridJob_Statics
	{
		struct RenderGrid_eventRemoveRenderGridJob_Parms
		{
			URenderGridJob* Job;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Job;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_RemoveRenderGridJob_Statics::NewProp_Job = { "Job", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventRemoveRenderGridJob_Parms, Job), Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_RemoveRenderGridJob_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_RemoveRenderGridJob_Statics::NewProp_Job,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_RemoveRenderGridJob_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_RemoveRenderGridJob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "RemoveRenderGridJob", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_RemoveRenderGridJob_Statics::RenderGrid_eventRemoveRenderGridJob_Parms), Z_Construct_UFunction_URenderGrid_RemoveRenderGridJob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_RemoveRenderGridJob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_RemoveRenderGridJob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_RemoveRenderGridJob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_RemoveRenderGridJob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_RemoveRenderGridJob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_Render_Statics
	{
		struct RenderGrid_eventRender_Parms
		{
			URenderGridQueue* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_Render_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventRender_Parms, ReturnValue), Z_Construct_UClass_URenderGridQueue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_Render_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_Render_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_Render_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "Comment", "/** Renders all the enabled jobs of this render grid. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "Renders all the enabled jobs of this render grid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_Render_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "Render", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_Render_Statics::RenderGrid_eventRender_Parms), Z_Construct_UFunction_URenderGrid_Render_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_Render_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_Render_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_Render_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_Render()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_Render_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_RenderJob_Statics
	{
		struct RenderGrid_eventRenderJob_Parms
		{
			URenderGridJob* Job;
			URenderGridQueue* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Job;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_RenderJob_Statics::NewProp_Job = { "Job", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventRenderJob_Parms, Job), Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_RenderJob_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventRenderJob_Parms, ReturnValue), Z_Construct_UClass_URenderGridQueue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_RenderJob_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_RenderJob_Statics::NewProp_Job,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_RenderJob_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_RenderJob_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "Comment", "/** Renders the given job of this render grid. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "Renders the given job of this render grid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_RenderJob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "RenderJob", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_RenderJob_Statics::RenderGrid_eventRenderJob_Parms), Z_Construct_UFunction_URenderGrid_RenderJob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_RenderJob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_RenderJob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_RenderJob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_RenderJob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_RenderJob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_RenderJobs_Statics
	{
		struct RenderGrid_eventRenderJobs_Parms
		{
			TArray<URenderGridJob*> Jobs;
			URenderGridQueue* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Jobs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Jobs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Jobs;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_RenderJobs_Statics::NewProp_Jobs_Inner = { "Jobs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_RenderJobs_Statics::NewProp_Jobs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URenderGrid_RenderJobs_Statics::NewProp_Jobs = { "Jobs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventRenderJobs_Parms, Jobs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_RenderJobs_Statics::NewProp_Jobs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_RenderJobs_Statics::NewProp_Jobs_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_RenderJobs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventRenderJobs_Parms, ReturnValue), Z_Construct_UClass_URenderGridQueue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_RenderJobs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_RenderJobs_Statics::NewProp_Jobs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_RenderJobs_Statics::NewProp_Jobs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_RenderJobs_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_RenderJobs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "Comment", "/** Renders all the given jobs of this render grid. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "Renders all the given jobs of this render grid." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_RenderJobs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "RenderJobs", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_RenderJobs_Statics::RenderGrid_eventRenderJobs_Parms), Z_Construct_UFunction_URenderGrid_RenderJobs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_RenderJobs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_RenderJobs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_RenderJobs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_RenderJobs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_RenderJobs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_ReorderRenderGridJob_Statics
	{
		struct RenderGrid_eventReorderRenderGridJob_Parms
		{
			URenderGridJob* Job;
			URenderGridJob* DroppedOnJob;
			bool bAfter;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Job;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DroppedOnJob;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAfter_MetaData[];
#endif
		static void NewProp_bAfter_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAfter;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_ReorderRenderGridJob_Statics::NewProp_Job = { "Job", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventReorderRenderGridJob_Parms, Job), Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_ReorderRenderGridJob_Statics::NewProp_DroppedOnJob = { "DroppedOnJob", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventReorderRenderGridJob_Parms, DroppedOnJob), Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_ReorderRenderGridJob_Statics::NewProp_bAfter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_URenderGrid_ReorderRenderGridJob_Statics::NewProp_bAfter_SetBit(void* Obj)
	{
		((RenderGrid_eventReorderRenderGridJob_Parms*)Obj)->bAfter = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGrid_ReorderRenderGridJob_Statics::NewProp_bAfter = { "bAfter", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RenderGrid_eventReorderRenderGridJob_Parms), &Z_Construct_UFunction_URenderGrid_ReorderRenderGridJob_Statics::NewProp_bAfter_SetBit, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_ReorderRenderGridJob_Statics::NewProp_bAfter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_ReorderRenderGridJob_Statics::NewProp_bAfter_MetaData)) };
	void Z_Construct_UFunction_URenderGrid_ReorderRenderGridJob_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((RenderGrid_eventReorderRenderGridJob_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URenderGrid_ReorderRenderGridJob_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RenderGrid_eventReorderRenderGridJob_Parms), &Z_Construct_UFunction_URenderGrid_ReorderRenderGridJob_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_ReorderRenderGridJob_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_ReorderRenderGridJob_Statics::NewProp_Job,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_ReorderRenderGridJob_Statics::NewProp_DroppedOnJob,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_ReorderRenderGridJob_Statics::NewProp_bAfter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_ReorderRenderGridJob_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_ReorderRenderGridJob_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "Comment", "/** Relocates the given job in this grid to the position of the given dropped-on job. **/" },
		{ "CPP_Default_bAfter", "true" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "Relocates the given job in this grid to the position of the given dropped-on job. *" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_ReorderRenderGridJob_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "ReorderRenderGridJob", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_ReorderRenderGridJob_Statics::RenderGrid_eventReorderRenderGridJob_Parms), Z_Construct_UFunction_URenderGrid_ReorderRenderGridJob_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_ReorderRenderGridJob_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_ReorderRenderGridJob_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_ReorderRenderGridJob_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_ReorderRenderGridJob()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_ReorderRenderGridJob_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_SetDefaultLevelSequence_Statics
	{
		struct RenderGrid_eventSetDefaultLevelSequence_Parms
		{
			ULevelSequence* NewSequence;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_SetDefaultLevelSequence_Statics::NewProp_NewSequence = { "NewSequence", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventSetDefaultLevelSequence_Parms, NewSequence), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_SetDefaultLevelSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_SetDefaultLevelSequence_Statics::NewProp_NewSequence,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_SetDefaultLevelSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_SetDefaultLevelSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "SetDefaultLevelSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_SetDefaultLevelSequence_Statics::RenderGrid_eventSetDefaultLevelSequence_Parms), Z_Construct_UFunction_URenderGrid_SetDefaultLevelSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_SetDefaultLevelSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_SetDefaultLevelSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_SetDefaultLevelSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_SetDefaultLevelSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_SetDefaultLevelSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_SetDefaultOutputDirectory_Statics
	{
		struct RenderGrid_eventSetDefaultOutputDirectory_Parms
		{
			FString NewOutputDirectory;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewOutputDirectory_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewOutputDirectory;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_SetDefaultOutputDirectory_Statics::NewProp_NewOutputDirectory_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_URenderGrid_SetDefaultOutputDirectory_Statics::NewProp_NewOutputDirectory = { "NewOutputDirectory", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventSetDefaultOutputDirectory_Parms, NewOutputDirectory), METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_SetDefaultOutputDirectory_Statics::NewProp_NewOutputDirectory_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_SetDefaultOutputDirectory_Statics::NewProp_NewOutputDirectory_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_SetDefaultOutputDirectory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_SetDefaultOutputDirectory_Statics::NewProp_NewOutputDirectory,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_SetDefaultOutputDirectory_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_SetDefaultOutputDirectory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "SetDefaultOutputDirectory", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_SetDefaultOutputDirectory_Statics::RenderGrid_eventSetDefaultOutputDirectory_Parms), Z_Construct_UFunction_URenderGrid_SetDefaultOutputDirectory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_SetDefaultOutputDirectory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_SetDefaultOutputDirectory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_SetDefaultOutputDirectory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_SetDefaultOutputDirectory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_SetDefaultOutputDirectory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_SetDefaultRenderPreset_Statics
	{
		struct RenderGrid_eventSetDefaultRenderPreset_Parms
		{
			UMoviePipelinePrimaryConfig* NewRenderPreset;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewRenderPreset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_SetDefaultRenderPreset_Statics::NewProp_NewRenderPreset = { "NewRenderPreset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventSetDefaultRenderPreset_Parms, NewRenderPreset), Z_Construct_UClass_UMoviePipelinePrimaryConfig_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_SetDefaultRenderPreset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_SetDefaultRenderPreset_Statics::NewProp_NewRenderPreset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_SetDefaultRenderPreset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_SetDefaultRenderPreset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "SetDefaultRenderPreset", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_SetDefaultRenderPreset_Statics::RenderGrid_eventSetDefaultRenderPreset_Parms), Z_Construct_UFunction_URenderGrid_SetDefaultRenderPreset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_SetDefaultRenderPreset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_SetDefaultRenderPreset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_SetDefaultRenderPreset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_SetDefaultRenderPreset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_SetDefaultRenderPreset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_SetPropsSource_Statics
	{
		struct RenderGrid_eventSetPropsSource_Parms
		{
			ERenderGridPropsSourceType InPropsSourceType;
			UObject* InPropsSourceOrigin;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InPropsSourceType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InPropsSourceType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InPropsSourceOrigin;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URenderGrid_SetPropsSource_Statics::NewProp_InPropsSourceType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URenderGrid_SetPropsSource_Statics::NewProp_InPropsSourceType = { "InPropsSourceType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventSetPropsSource_Parms, InPropsSourceType), Z_Construct_UEnum_RenderGrid_ERenderGridPropsSourceType, METADATA_PARAMS(nullptr, 0) }; // 2127287017
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_SetPropsSource_Statics::NewProp_InPropsSourceOrigin = { "InPropsSourceOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventSetPropsSource_Parms, InPropsSourceOrigin), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_SetPropsSource_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_SetPropsSource_Statics::NewProp_InPropsSourceType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_SetPropsSource_Statics::NewProp_InPropsSourceType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_SetPropsSource_Statics::NewProp_InPropsSourceOrigin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_SetPropsSource_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "CPP_Default_InPropsSourceOrigin", "None" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_SetPropsSource_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "SetPropsSource", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_SetPropsSource_Statics::RenderGrid_eventSetPropsSource_Parms), Z_Construct_UFunction_URenderGrid_SetPropsSource_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_SetPropsSource_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_SetPropsSource_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_SetPropsSource_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_SetPropsSource()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_SetPropsSource_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URenderGrid_SetRenderGridJobs_Statics
	{
		struct RenderGrid_eventSetRenderGridJobs_Parms
		{
			TArray<URenderGridJob*> Jobs;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Jobs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Jobs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Jobs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URenderGrid_SetRenderGridJobs_Statics::NewProp_Jobs_Inner = { "Jobs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_SetRenderGridJobs_Statics::NewProp_Jobs_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_URenderGrid_SetRenderGridJobs_Statics::NewProp_Jobs = { "Jobs", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RenderGrid_eventSetRenderGridJobs_Parms, Jobs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_SetRenderGridJobs_Statics::NewProp_Jobs_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_SetRenderGridJobs_Statics::NewProp_Jobs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URenderGrid_SetRenderGridJobs_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_SetRenderGridJobs_Statics::NewProp_Jobs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URenderGrid_SetRenderGridJobs_Statics::NewProp_Jobs,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URenderGrid_SetRenderGridJobs_Statics::Function_MetaDataParams[] = {
		{ "Category", "Render Grid" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URenderGrid_SetRenderGridJobs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URenderGrid, nullptr, "SetRenderGridJobs", nullptr, nullptr, sizeof(Z_Construct_UFunction_URenderGrid_SetRenderGridJobs_Statics::RenderGrid_eventSetRenderGridJobs_Parms), Z_Construct_UFunction_URenderGrid_SetRenderGridJobs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_SetRenderGridJobs_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URenderGrid_SetRenderGridJobs_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URenderGrid_SetRenderGridJobs_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URenderGrid_SetRenderGridJobs()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URenderGrid_SetRenderGridJobs_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URenderGrid);
	UClass* Z_Construct_UClass_URenderGrid_NoRegister()
	{
		return URenderGrid::StaticClass();
	}
	struct Z_Construct_UClass_URenderGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Defaults_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Defaults;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderGridJobs_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderGridJobs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderGridJobs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RenderGridJobs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExecutingBlueprintEvent_MetaData[];
#endif
		static void NewProp_bExecutingBlueprintEvent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExecutingBlueprintEvent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URenderGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RenderGrid,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URenderGrid_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URenderGrid_AddRenderGridJob, "AddRenderGridJob" }, // 694626880
		{ &Z_Construct_UFunction_URenderGrid_ClearRenderGridJobs, "ClearRenderGridJobs" }, // 3020347218
		{ &Z_Construct_UFunction_URenderGrid_CreateAndAddNewRenderGridJob, "CreateAndAddNewRenderGridJob" }, // 46397670
		{ &Z_Construct_UFunction_URenderGrid_CreateTempRenderGridJob, "CreateTempRenderGridJob" }, // 884401193
		{ &Z_Construct_UFunction_URenderGrid_DoesJobIdExist, "DoesJobIdExist" }, // 2273752705
		{ &Z_Construct_UFunction_URenderGrid_DuplicateAndAddRenderGridJob, "DuplicateAndAddRenderGridJob" }, // 535214471
		{ &Z_Construct_UFunction_URenderGrid_GenerateNewGuid, "GenerateNewGuid" }, // 1189036288
		{ &Z_Construct_UFunction_URenderGrid_GenerateNextJobId, "GenerateNextJobId" }, // 1529644200
		{ &Z_Construct_UFunction_URenderGrid_GenerateUniqueRandomJobId, "GenerateUniqueRandomJobId" }, // 3295966726
		{ &Z_Construct_UFunction_URenderGrid_GetDefaultLevelSequence, "GetDefaultLevelSequence" }, // 3342571391
		{ &Z_Construct_UFunction_URenderGrid_GetDefaultOutputDirectory, "GetDefaultOutputDirectory" }, // 2248882526
		{ &Z_Construct_UFunction_URenderGrid_GetDefaultOutputDirectoryForDisplay, "GetDefaultOutputDirectoryForDisplay" }, // 3338165883
		{ &Z_Construct_UFunction_URenderGrid_GetDefaultRenderPreset, "GetDefaultRenderPreset" }, // 1364133689
		{ &Z_Construct_UFunction_URenderGrid_GetDefaultRenderPresetOutputSettings, "GetDefaultRenderPresetOutputSettings" }, // 3405488595
		{ &Z_Construct_UFunction_URenderGrid_GetDisabledRenderGridJobs, "GetDisabledRenderGridJobs" }, // 2093589809
		{ &Z_Construct_UFunction_URenderGrid_GetEnabledRenderGridJobs, "GetEnabledRenderGridJobs" }, // 639135953
		{ &Z_Construct_UFunction_URenderGrid_GetGuid, "GetGuid" }, // 2548039792
		{ &Z_Construct_UFunction_URenderGrid_GetIndexOfRenderGridJob, "GetIndexOfRenderGridJob" }, // 1337953985
		{ &Z_Construct_UFunction_URenderGrid_GetPropsSource, "GetPropsSource" }, // 1204937183
		{ &Z_Construct_UFunction_URenderGrid_GetPropsSourceOrigin, "GetPropsSourceOrigin" }, // 1137849523
		{ &Z_Construct_UFunction_URenderGrid_GetPropsSourceType, "GetPropsSourceType" }, // 4068839070
		{ &Z_Construct_UFunction_URenderGrid_GetRenderGridJobs, "GetRenderGridJobs" }, // 3590385046
		{ &Z_Construct_UFunction_URenderGrid_HasAnyRenderGridJobs, "HasAnyRenderGridJobs" }, // 436821251
		{ &Z_Construct_UFunction_URenderGrid_HasRenderGridJob, "HasRenderGridJob" }, // 171992139
		{ &Z_Construct_UFunction_URenderGrid_InsertRenderGridJob, "InsertRenderGridJob" }, // 4187823411
		{ &Z_Construct_UFunction_URenderGrid_InsertRenderGridJobAfter, "InsertRenderGridJobAfter" }, // 3700174182
		{ &Z_Construct_UFunction_URenderGrid_InsertRenderGridJobBefore, "InsertRenderGridJobBefore" }, // 2121027614
		{ &Z_Construct_UFunction_URenderGrid_ReceiveBeginBatchRender, "ReceiveBeginBatchRender" }, // 1184546976
		{ &Z_Construct_UFunction_URenderGrid_ReceiveBeginEditor, "ReceiveBeginEditor" }, // 1000432053
		{ &Z_Construct_UFunction_URenderGrid_ReceiveBeginJobRender, "ReceiveBeginJobRender" }, // 3041300296
		{ &Z_Construct_UFunction_URenderGrid_ReceiveBeginViewportRender, "ReceiveBeginViewportRender" }, // 3270688327
		{ &Z_Construct_UFunction_URenderGrid_ReceiveEndBatchRender, "ReceiveEndBatchRender" }, // 4247489652
		{ &Z_Construct_UFunction_URenderGrid_ReceiveEndEditor, "ReceiveEndEditor" }, // 396447611
		{ &Z_Construct_UFunction_URenderGrid_ReceiveEndJobRender, "ReceiveEndJobRender" }, // 89086112
		{ &Z_Construct_UFunction_URenderGrid_ReceiveEndViewportRender, "ReceiveEndViewportRender" }, // 116115702
		{ &Z_Construct_UFunction_URenderGrid_ReceiveTick, "ReceiveTick" }, // 2754545687
		{ &Z_Construct_UFunction_URenderGrid_RemoveRenderGridJob, "RemoveRenderGridJob" }, // 3576271556
		{ &Z_Construct_UFunction_URenderGrid_Render, "Render" }, // 3811763012
		{ &Z_Construct_UFunction_URenderGrid_RenderJob, "RenderJob" }, // 3022268736
		{ &Z_Construct_UFunction_URenderGrid_RenderJobs, "RenderJobs" }, // 3238173959
		{ &Z_Construct_UFunction_URenderGrid_ReorderRenderGridJob, "ReorderRenderGridJob" }, // 2076589684
		{ &Z_Construct_UFunction_URenderGrid_SetDefaultLevelSequence, "SetDefaultLevelSequence" }, // 1063743974
		{ &Z_Construct_UFunction_URenderGrid_SetDefaultOutputDirectory, "SetDefaultOutputDirectory" }, // 3335906810
		{ &Z_Construct_UFunction_URenderGrid_SetDefaultRenderPreset, "SetDefaultRenderPreset" }, // 2129302339
		{ &Z_Construct_UFunction_URenderGrid_SetPropsSource, "SetPropsSource" }, // 1426924048
		{ &Z_Construct_UFunction_URenderGrid_SetRenderGridJobs, "SetRenderGridJobs" }, // 2942871416
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGrid_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * This class represents a render grid, which is basically just a collection of render grid jobs.\n * A render grid is the asset that is shown in the content browser, it's the asset that can be opened and edited using the editor.\n */" },
		{ "DontUseGenericSpawnObject", "true" },
		{ "IncludePath", "RenderGrid/RenderGrid.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "This class represents a render grid, which is basically just a collection of render grid jobs.\nA render grid is the asset that is shown in the content browser, it's the asset that can be opened and edited using the editor." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGrid_Statics::NewProp_Guid_MetaData[] = {
		{ "Comment", "/** The unique ID of this render grid. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "The unique ID of this render grid." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URenderGrid_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGrid, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_URenderGrid_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGrid_Statics::NewProp_Guid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGrid_Statics::NewProp_Settings_MetaData[] = {
		{ "Comment", "/** The settings of this render grid. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "The settings of this render grid." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URenderGrid_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0046000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGrid, Settings), Z_Construct_UClass_URenderGridSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URenderGrid_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGrid_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGrid_Statics::NewProp_Defaults_MetaData[] = {
		{ "Comment", "/** The default values for new jobs. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "The default values for new jobs." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URenderGrid_Statics::NewProp_Defaults = { "Defaults", nullptr, (EPropertyFlags)0x0046000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGrid, Defaults), Z_Construct_UClass_URenderGridDefaults_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URenderGrid_Statics::NewProp_Defaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGrid_Statics::NewProp_Defaults_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGrid_Statics::NewProp_RenderGridJobs_Inner_MetaData[] = {
		{ "Comment", "/** The jobs of this render grid. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "The jobs of this render grid." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URenderGrid_Statics::NewProp_RenderGridJobs_Inner = { "RenderGridJobs", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URenderGridJob_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URenderGrid_Statics::NewProp_RenderGridJobs_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGrid_Statics::NewProp_RenderGridJobs_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGrid_Statics::NewProp_RenderGridJobs_MetaData[] = {
		{ "Comment", "/** The jobs of this render grid. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "The jobs of this render grid." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_URenderGrid_Statics::NewProp_RenderGridJobs = { "RenderGridJobs", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URenderGrid, RenderGridJobs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URenderGrid_Statics::NewProp_RenderGridJobs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGrid_Statics::NewProp_RenderGridJobs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URenderGrid_Statics::NewProp_bExecutingBlueprintEvent_MetaData[] = {
		{ "Comment", "/** True when it's currently executing a blueprint event, false otherwise. */" },
		{ "ModuleRelativePath", "Public/RenderGrid/RenderGrid.h" },
		{ "ToolTip", "True when it's currently executing a blueprint event, false otherwise." },
	};
#endif
	void Z_Construct_UClass_URenderGrid_Statics::NewProp_bExecutingBlueprintEvent_SetBit(void* Obj)
	{
		((URenderGrid*)Obj)->bExecutingBlueprintEvent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URenderGrid_Statics::NewProp_bExecutingBlueprintEvent = { "bExecutingBlueprintEvent", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(URenderGrid), &Z_Construct_UClass_URenderGrid_Statics::NewProp_bExecutingBlueprintEvent_SetBit, METADATA_PARAMS(Z_Construct_UClass_URenderGrid_Statics::NewProp_bExecutingBlueprintEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGrid_Statics::NewProp_bExecutingBlueprintEvent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URenderGrid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGrid_Statics::NewProp_Guid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGrid_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGrid_Statics::NewProp_Defaults,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGrid_Statics::NewProp_RenderGridJobs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGrid_Statics::NewProp_RenderGridJobs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URenderGrid_Statics::NewProp_bExecutingBlueprintEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URenderGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URenderGrid>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URenderGrid_Statics::ClassParams = {
		&URenderGrid::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URenderGrid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URenderGrid_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URenderGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URenderGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URenderGrid()
	{
		if (!Z_Registration_Info_UClass_URenderGrid.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URenderGrid.OuterSingleton, Z_Construct_UClass_URenderGrid_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URenderGrid.OuterSingleton;
	}
	template<> RENDERGRID_API UClass* StaticClass<URenderGrid>()
	{
		return URenderGrid::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URenderGrid);
	URenderGrid::~URenderGrid() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_Statics::ScriptStructInfo[] = {
		{ FRenderGridRemoteControlPropertyData::StaticStruct, Z_Construct_UScriptStruct_FRenderGridRemoteControlPropertyData_Statics::NewStructOps, TEXT("RenderGridRemoteControlPropertyData"), &Z_Registration_Info_UScriptStruct_RenderGridRemoteControlPropertyData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRenderGridRemoteControlPropertyData), 1660536410U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URenderGridSettings, URenderGridSettings::StaticClass, TEXT("URenderGridSettings"), &Z_Registration_Info_UClass_URenderGridSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderGridSettings), 3658707244U) },
		{ Z_Construct_UClass_URenderGridDefaults, URenderGridDefaults::StaticClass, TEXT("URenderGridDefaults"), &Z_Registration_Info_UClass_URenderGridDefaults, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderGridDefaults), 2738268532U) },
		{ Z_Construct_UClass_URenderGridJob, URenderGridJob::StaticClass, TEXT("URenderGridJob"), &Z_Registration_Info_UClass_URenderGridJob, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderGridJob), 204288195U) },
		{ Z_Construct_UClass_URenderGrid, URenderGrid::StaticClass, TEXT("URenderGrid"), &Z_Registration_Info_UClass_URenderGrid, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URenderGrid), 1360880346U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_2468207771(TEXT("/Script/RenderGrid"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_RenderGrid_Source_RenderGrid_Public_RenderGrid_RenderGrid_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
