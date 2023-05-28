// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UVEditorSeamTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVEditorSeamTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehaviorSet_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_ULocalInputBehaviorSource_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UVEditorTools();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorSeamTool();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorSeamTool_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorSeamToolBuilder();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorSeamToolBuilder_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorSeamToolProperties();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorSeamToolProperties_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorToolMeshInput_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolEmitChangeAPI_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolLivePreviewAPI_NoRegister();
	UVEDITORTOOLS_API UEnum* Z_Construct_UEnum_UVEditorTools_EUVEditorSeamMode();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUVEditorSeamMode;
	static UEnum* EUVEditorSeamMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUVEditorSeamMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUVEditorSeamMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UVEditorTools_EUVEditorSeamMode, (UObject*)Z_Construct_UPackage__Script_UVEditorTools(), TEXT("EUVEditorSeamMode"));
		}
		return Z_Registration_Info_UEnum_EUVEditorSeamMode.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UEnum* StaticEnum<EUVEditorSeamMode>()
	{
		return EUVEditorSeamMode_StaticEnum();
	}
	struct Z_Construct_UEnum_UVEditorTools_EUVEditorSeamMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UVEditorTools_EUVEditorSeamMode_Statics::Enumerators[] = {
		{ "EUVEditorSeamMode::Cut", (int64)EUVEditorSeamMode::Cut },
		{ "EUVEditorSeamMode::Join", (int64)EUVEditorSeamMode::Join },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UVEditorTools_EUVEditorSeamMode_Statics::Enum_MetaDataParams[] = {
		{ "Cut.Comment", "/** Marked path will cut the UV island, creating new seams.*/" },
		{ "Cut.Name", "EUVEditorSeamMode::Cut" },
		{ "Cut.ToolTip", "Marked path will cut the UV island, creating new seams." },
		{ "Join.Comment", "/** Marked path will join the UV island, removing seams.*/" },
		{ "Join.Name", "EUVEditorSeamMode::Join" },
		{ "Join.ToolTip", "Marked path will join the UV island, removing seams." },
		{ "ModuleRelativePath", "Public/UVEditorSeamTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UVEditorTools_EUVEditorSeamMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UVEditorTools,
		nullptr,
		"EUVEditorSeamMode",
		"EUVEditorSeamMode",
		Z_Construct_UEnum_UVEditorTools_EUVEditorSeamMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UVEditorTools_EUVEditorSeamMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UVEditorTools_EUVEditorSeamMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UVEditorTools_EUVEditorSeamMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UVEditorTools_EUVEditorSeamMode()
	{
		if (!Z_Registration_Info_UEnum_EUVEditorSeamMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUVEditorSeamMode.InnerSingleton, Z_Construct_UEnum_UVEditorTools_EUVEditorSeamMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUVEditorSeamMode.InnerSingleton;
	}
	void UUVEditorSeamToolProperties::StaticRegisterNativesUUVEditorSeamToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorSeamToolProperties);
	UClass* Z_Construct_UClass_UUVEditorSeamToolProperties_NoRegister()
	{
		return UUVEditorSeamToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorSeamToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorSeamToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorSeamToolProperties_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UVEditorSeamTool.h" },
		{ "ModuleRelativePath", "Public/UVEditorSeamTool.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUVEditorSeamToolProperties_Statics::NewProp_Mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorSeamToolProperties_Statics::NewProp_Mode_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/UVEditorSeamTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUVEditorSeamToolProperties_Statics::NewProp_Mode = { "Mode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorSeamToolProperties, Mode), Z_Construct_UEnum_UVEditorTools_EUVEditorSeamMode, METADATA_PARAMS(Z_Construct_UClass_UUVEditorSeamToolProperties_Statics::NewProp_Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorSeamToolProperties_Statics::NewProp_Mode_MetaData)) }; // 3523350610
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVEditorSeamToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorSeamToolProperties_Statics::NewProp_Mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorSeamToolProperties_Statics::NewProp_Mode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorSeamToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorSeamToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorSeamToolProperties_Statics::ClassParams = {
		&UUVEditorSeamToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVEditorSeamToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorSeamToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorSeamToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorSeamToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorSeamToolProperties()
	{
		if (!Z_Registration_Info_UClass_UUVEditorSeamToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorSeamToolProperties.OuterSingleton, Z_Construct_UClass_UUVEditorSeamToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorSeamToolProperties.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorSeamToolProperties>()
	{
		return UUVEditorSeamToolProperties::StaticClass();
	}
	UUVEditorSeamToolProperties::UUVEditorSeamToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorSeamToolProperties);
	UUVEditorSeamToolProperties::~UUVEditorSeamToolProperties() {}
	void UUVEditorSeamToolBuilder::StaticRegisterNativesUUVEditorSeamToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorSeamToolBuilder);
	UClass* Z_Construct_UClass_UUVEditorSeamToolBuilder_NoRegister()
	{
		return UUVEditorSeamToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorSeamToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorSeamToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorSeamToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UVEditorSeamTool.h" },
		{ "ModuleRelativePath", "Public/UVEditorSeamTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorSeamToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorSeamToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorSeamToolBuilder_Statics::ClassParams = {
		&UUVEditorSeamToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorSeamToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorSeamToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorSeamToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UUVEditorSeamToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorSeamToolBuilder.OuterSingleton, Z_Construct_UClass_UUVEditorSeamToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorSeamToolBuilder.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorSeamToolBuilder>()
	{
		return UUVEditorSeamToolBuilder::StaticClass();
	}
	UUVEditorSeamToolBuilder::UUVEditorSeamToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorSeamToolBuilder);
	UUVEditorSeamToolBuilder::~UUVEditorSeamToolBuilder() {}
	void UUVEditorSeamTool::StaticRegisterNativesUUVEditorSeamTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorSeamTool);
	UClass* Z_Construct_UClass_UUVEditorSeamTool_NoRegister()
	{
		return UUVEditorSeamTool::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorSeamTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Targets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Targets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Targets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LivePreviewAPI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LivePreviewAPI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmitChangeAPI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EmitChangeAPI;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LivePreviewBehaviorSet_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LivePreviewBehaviorSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LivePreviewBehaviorSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LivePreviewBehaviorSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UnwrapGeometry_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UnwrapGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LivePreviewGeometry_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LivePreviewGeometry;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorSeamTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorSeamTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UVEditorSeamTool.h" },
		{ "ModuleRelativePath", "Public/UVEditorSeamTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUVEditorToolMeshInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_Targets_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorSeamTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorSeamTool, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_Targets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorSeamTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorSeamTool, Settings), Z_Construct_UClass_UUVEditorSeamToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_LivePreviewAPI_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorSeamTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_LivePreviewAPI = { "LivePreviewAPI", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorSeamTool, LivePreviewAPI), Z_Construct_UClass_UUVToolLivePreviewAPI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_LivePreviewAPI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_LivePreviewAPI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_EmitChangeAPI_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorSeamTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_EmitChangeAPI = { "EmitChangeAPI", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorSeamTool, EmitChangeAPI), Z_Construct_UClass_UUVToolEmitChangeAPI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_EmitChangeAPI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_EmitChangeAPI_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_LivePreviewBehaviorSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorSeamTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_LivePreviewBehaviorSet = { "LivePreviewBehaviorSet", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorSeamTool, LivePreviewBehaviorSet), Z_Construct_UClass_UInputBehaviorSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_LivePreviewBehaviorSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_LivePreviewBehaviorSet_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_LivePreviewBehaviorSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorSeamTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_LivePreviewBehaviorSource = { "LivePreviewBehaviorSource", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorSeamTool, LivePreviewBehaviorSource), Z_Construct_UClass_ULocalInputBehaviorSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_LivePreviewBehaviorSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_LivePreviewBehaviorSource_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_UnwrapGeometry_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorSeamTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_UnwrapGeometry = { "UnwrapGeometry", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorSeamTool, UnwrapGeometry), Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_UnwrapGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_UnwrapGeometry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_LivePreviewGeometry_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorSeamTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_LivePreviewGeometry = { "LivePreviewGeometry", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorSeamTool, LivePreviewGeometry), Z_Construct_UClass_UPreviewGeometry_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_LivePreviewGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_LivePreviewGeometry_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVEditorSeamTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_LivePreviewAPI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_EmitChangeAPI,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_LivePreviewBehaviorSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_LivePreviewBehaviorSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_UnwrapGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorSeamTool_Statics::NewProp_LivePreviewGeometry,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UUVEditorSeamTool_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractiveToolNestedAcceptCancelAPI_NoRegister, (int32)VTABLE_OFFSET(UUVEditorSeamTool, IInteractiveToolNestedAcceptCancelAPI), false },  // 1745745235
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorSeamTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorSeamTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorSeamTool_Statics::ClassParams = {
		&UUVEditorSeamTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVEditorSeamTool_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorSeamTool_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorSeamTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorSeamTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorSeamTool()
	{
		if (!Z_Registration_Info_UClass_UUVEditorSeamTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorSeamTool.OuterSingleton, Z_Construct_UClass_UUVEditorSeamTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorSeamTool.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorSeamTool>()
	{
		return UUVEditorSeamTool::StaticClass();
	}
	UUVEditorSeamTool::UUVEditorSeamTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorSeamTool);
	UUVEditorSeamTool::~UUVEditorSeamTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorSeamTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorSeamTool_h_Statics::EnumInfo[] = {
		{ EUVEditorSeamMode_StaticEnum, TEXT("EUVEditorSeamMode"), &Z_Registration_Info_UEnum_EUVEditorSeamMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3523350610U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorSeamTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVEditorSeamToolProperties, UUVEditorSeamToolProperties::StaticClass, TEXT("UUVEditorSeamToolProperties"), &Z_Registration_Info_UClass_UUVEditorSeamToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorSeamToolProperties), 2835474770U) },
		{ Z_Construct_UClass_UUVEditorSeamToolBuilder, UUVEditorSeamToolBuilder::StaticClass, TEXT("UUVEditorSeamToolBuilder"), &Z_Registration_Info_UClass_UUVEditorSeamToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorSeamToolBuilder), 1595445165U) },
		{ Z_Construct_UClass_UUVEditorSeamTool, UUVEditorSeamTool::StaticClass, TEXT("UUVEditorSeamTool"), &Z_Registration_Info_UClass_UUVEditorSeamTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorSeamTool), 2910870660U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorSeamTool_h_1154518435(TEXT("/Script/UVEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorSeamTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorSeamTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorSeamTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorSeamTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
