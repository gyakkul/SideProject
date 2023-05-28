// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UVEditorTransformTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVEditorTransformTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	UPackage* Z_Construct_UPackage__Script_UVEditorTools();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorAlignToolBuilder();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorAlignToolBuilder_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorBaseTransformToolBuilder();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorBaseTransformToolBuilder_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorDistributeToolBuilder();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorDistributeToolBuilder_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorToolMeshInput_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorTransformTool();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorTransformTool_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorTransformToolBuilder();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorTransformToolBuilder_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorTransformToolDisplayProperties();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorTransformToolDisplayProperties_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorUVTransformOperatorFactory_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVEditorUVTransformPropertiesBase_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolSelectionAPI_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolSupportsSelection_NoRegister();
// End Cross Module References
	void UUVEditorTransformToolDisplayProperties::StaticRegisterNativesUUVEditorTransformToolDisplayProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorTransformToolDisplayProperties);
	UClass* Z_Construct_UClass_UUVEditorTransformToolDisplayProperties_NoRegister()
	{
		return UUVEditorTransformToolDisplayProperties::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorTransformToolDisplayProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDrawPivots_MetaData[];
#endif
		static void NewProp_bDrawPivots_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawPivots;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorTransformToolDisplayProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorTransformToolDisplayProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Visualization settings for the TransformTool\n */" },
		{ "IncludePath", "UVEditorTransformTool.h" },
		{ "ModuleRelativePath", "Public/UVEditorTransformTool.h" },
		{ "ToolTip", "Visualization settings for the TransformTool" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorTransformToolDisplayProperties_Statics::NewProp_bDrawPivots_MetaData[] = {
		{ "Category", "Tool Display Settings" },
		{ "Comment", "/** Draw the tool's active pivot location if needed.*/" },
		{ "DisplayName", "Display Tool Pivots" },
		{ "ModuleRelativePath", "Public/UVEditorTransformTool.h" },
		{ "ToolTip", "Draw the tool's active pivot location if needed." },
	};
#endif
	void Z_Construct_UClass_UUVEditorTransformToolDisplayProperties_Statics::NewProp_bDrawPivots_SetBit(void* Obj)
	{
		((UUVEditorTransformToolDisplayProperties*)Obj)->bDrawPivots = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUVEditorTransformToolDisplayProperties_Statics::NewProp_bDrawPivots = { "bDrawPivots", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUVEditorTransformToolDisplayProperties), &Z_Construct_UClass_UUVEditorTransformToolDisplayProperties_Statics::NewProp_bDrawPivots_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUVEditorTransformToolDisplayProperties_Statics::NewProp_bDrawPivots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorTransformToolDisplayProperties_Statics::NewProp_bDrawPivots_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVEditorTransformToolDisplayProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorTransformToolDisplayProperties_Statics::NewProp_bDrawPivots,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorTransformToolDisplayProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorTransformToolDisplayProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorTransformToolDisplayProperties_Statics::ClassParams = {
		&UUVEditorTransformToolDisplayProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVEditorTransformToolDisplayProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorTransformToolDisplayProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorTransformToolDisplayProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorTransformToolDisplayProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorTransformToolDisplayProperties()
	{
		if (!Z_Registration_Info_UClass_UUVEditorTransformToolDisplayProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorTransformToolDisplayProperties.OuterSingleton, Z_Construct_UClass_UUVEditorTransformToolDisplayProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorTransformToolDisplayProperties.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorTransformToolDisplayProperties>()
	{
		return UUVEditorTransformToolDisplayProperties::StaticClass();
	}
	UUVEditorTransformToolDisplayProperties::UUVEditorTransformToolDisplayProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorTransformToolDisplayProperties);
	UUVEditorTransformToolDisplayProperties::~UUVEditorTransformToolDisplayProperties() {}
	void UUVEditorBaseTransformToolBuilder::StaticRegisterNativesUUVEditorBaseTransformToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorBaseTransformToolBuilder);
	UClass* Z_Construct_UClass_UUVEditorBaseTransformToolBuilder_NoRegister()
	{
		return UUVEditorBaseTransformToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorBaseTransformToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorBaseTransformToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorBaseTransformToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UVEditorTransformTool.h" },
		{ "ModuleRelativePath", "Public/UVEditorTransformTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorBaseTransformToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorBaseTransformToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorBaseTransformToolBuilder_Statics::ClassParams = {
		&UUVEditorBaseTransformToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorBaseTransformToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorBaseTransformToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorBaseTransformToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UUVEditorBaseTransformToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorBaseTransformToolBuilder.OuterSingleton, Z_Construct_UClass_UUVEditorBaseTransformToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorBaseTransformToolBuilder.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorBaseTransformToolBuilder>()
	{
		return UUVEditorBaseTransformToolBuilder::StaticClass();
	}
	UUVEditorBaseTransformToolBuilder::UUVEditorBaseTransformToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorBaseTransformToolBuilder);
	UUVEditorBaseTransformToolBuilder::~UUVEditorBaseTransformToolBuilder() {}
	void UUVEditorTransformToolBuilder::StaticRegisterNativesUUVEditorTransformToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorTransformToolBuilder);
	UClass* Z_Construct_UClass_UUVEditorTransformToolBuilder_NoRegister()
	{
		return UUVEditorTransformToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorTransformToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorTransformToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUVEditorBaseTransformToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorTransformToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UVEditorTransformTool.h" },
		{ "ModuleRelativePath", "Public/UVEditorTransformTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorTransformToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorTransformToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorTransformToolBuilder_Statics::ClassParams = {
		&UUVEditorTransformToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorTransformToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorTransformToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorTransformToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UUVEditorTransformToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorTransformToolBuilder.OuterSingleton, Z_Construct_UClass_UUVEditorTransformToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorTransformToolBuilder.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorTransformToolBuilder>()
	{
		return UUVEditorTransformToolBuilder::StaticClass();
	}
	UUVEditorTransformToolBuilder::UUVEditorTransformToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorTransformToolBuilder);
	UUVEditorTransformToolBuilder::~UUVEditorTransformToolBuilder() {}
	void UUVEditorAlignToolBuilder::StaticRegisterNativesUUVEditorAlignToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorAlignToolBuilder);
	UClass* Z_Construct_UClass_UUVEditorAlignToolBuilder_NoRegister()
	{
		return UUVEditorAlignToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorAlignToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorAlignToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUVEditorBaseTransformToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorAlignToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UVEditorTransformTool.h" },
		{ "ModuleRelativePath", "Public/UVEditorTransformTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorAlignToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorAlignToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorAlignToolBuilder_Statics::ClassParams = {
		&UUVEditorAlignToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorAlignToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorAlignToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorAlignToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UUVEditorAlignToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorAlignToolBuilder.OuterSingleton, Z_Construct_UClass_UUVEditorAlignToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorAlignToolBuilder.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorAlignToolBuilder>()
	{
		return UUVEditorAlignToolBuilder::StaticClass();
	}
	UUVEditorAlignToolBuilder::UUVEditorAlignToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorAlignToolBuilder);
	UUVEditorAlignToolBuilder::~UUVEditorAlignToolBuilder() {}
	void UUVEditorDistributeToolBuilder::StaticRegisterNativesUUVEditorDistributeToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorDistributeToolBuilder);
	UClass* Z_Construct_UClass_UUVEditorDistributeToolBuilder_NoRegister()
	{
		return UUVEditorDistributeToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorDistributeToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorDistributeToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUVEditorBaseTransformToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorDistributeToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UVEditorTransformTool.h" },
		{ "ModuleRelativePath", "Public/UVEditorTransformTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorDistributeToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorDistributeToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorDistributeToolBuilder_Statics::ClassParams = {
		&UUVEditorDistributeToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorDistributeToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorDistributeToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorDistributeToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UUVEditorDistributeToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorDistributeToolBuilder.OuterSingleton, Z_Construct_UClass_UUVEditorDistributeToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorDistributeToolBuilder.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorDistributeToolBuilder>()
	{
		return UUVEditorDistributeToolBuilder::StaticClass();
	}
	UUVEditorDistributeToolBuilder::UUVEditorDistributeToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorDistributeToolBuilder);
	UUVEditorDistributeToolBuilder::~UUVEditorDistributeToolBuilder() {}
	void UUVEditorTransformTool::StaticRegisterNativesUUVEditorTransformTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVEditorTransformTool);
	UClass* Z_Construct_UClass_UUVEditorTransformTool_NoRegister()
	{
		return UUVEditorTransformTool::StaticClass();
	}
	struct Z_Construct_UClass_UUVEditorTransformTool_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisplaySettings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DisplaySettings;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Factories_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Factories_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Factories;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVToolSelectionAPI_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UVToolSelectionAPI;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVEditorTransformTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorTransformTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "UVEditorTransformTool.h" },
		{ "ModuleRelativePath", "Public/UVEditorTransformTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_Targets_Inner = { "Targets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUVEditorToolMeshInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_Targets_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorTransformTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_Targets = { "Targets", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorTransformTool, Targets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_Targets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_Targets_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorTransformTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorTransformTool, Settings), Z_Construct_UClass_UUVEditorUVTransformPropertiesBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_DisplaySettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorTransformTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_DisplaySettings = { "DisplaySettings", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorTransformTool, DisplaySettings), Z_Construct_UClass_UUVEditorTransformToolDisplayProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_DisplaySettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_DisplaySettings_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_Factories_Inner = { "Factories", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UUVEditorUVTransformOperatorFactory_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_Factories_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorTransformTool.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_Factories = { "Factories", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorTransformTool, Factories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_Factories_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_Factories_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_UVToolSelectionAPI_MetaData[] = {
		{ "ModuleRelativePath", "Public/UVEditorTransformTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_UVToolSelectionAPI = { "UVToolSelectionAPI", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUVEditorTransformTool, UVToolSelectionAPI), Z_Construct_UClass_UUVToolSelectionAPI_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_UVToolSelectionAPI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_UVToolSelectionAPI_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUVEditorTransformTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_Targets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_Targets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_DisplaySettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_Factories_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_Factories,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUVEditorTransformTool_Statics::NewProp_UVToolSelectionAPI,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UUVEditorTransformTool_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UUVToolSupportsSelection_NoRegister, (int32)VTABLE_OFFSET(UUVEditorTransformTool, IUVToolSupportsSelection), false },  // 3987422184
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVEditorTransformTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVEditorTransformTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVEditorTransformTool_Statics::ClassParams = {
		&UUVEditorTransformTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUVEditorTransformTool_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorTransformTool_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUVEditorTransformTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVEditorTransformTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVEditorTransformTool()
	{
		if (!Z_Registration_Info_UClass_UUVEditorTransformTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVEditorTransformTool.OuterSingleton, Z_Construct_UClass_UUVEditorTransformTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVEditorTransformTool.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVEditorTransformTool>()
	{
		return UUVEditorTransformTool::StaticClass();
	}
	UUVEditorTransformTool::UUVEditorTransformTool() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVEditorTransformTool);
	UUVEditorTransformTool::~UUVEditorTransformTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorTransformTool_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorTransformTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVEditorTransformToolDisplayProperties, UUVEditorTransformToolDisplayProperties::StaticClass, TEXT("UUVEditorTransformToolDisplayProperties"), &Z_Registration_Info_UClass_UUVEditorTransformToolDisplayProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorTransformToolDisplayProperties), 4076011884U) },
		{ Z_Construct_UClass_UUVEditorBaseTransformToolBuilder, UUVEditorBaseTransformToolBuilder::StaticClass, TEXT("UUVEditorBaseTransformToolBuilder"), &Z_Registration_Info_UClass_UUVEditorBaseTransformToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorBaseTransformToolBuilder), 1485352684U) },
		{ Z_Construct_UClass_UUVEditorTransformToolBuilder, UUVEditorTransformToolBuilder::StaticClass, TEXT("UUVEditorTransformToolBuilder"), &Z_Registration_Info_UClass_UUVEditorTransformToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorTransformToolBuilder), 3477856472U) },
		{ Z_Construct_UClass_UUVEditorAlignToolBuilder, UUVEditorAlignToolBuilder::StaticClass, TEXT("UUVEditorAlignToolBuilder"), &Z_Registration_Info_UClass_UUVEditorAlignToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorAlignToolBuilder), 822163397U) },
		{ Z_Construct_UClass_UUVEditorDistributeToolBuilder, UUVEditorDistributeToolBuilder::StaticClass, TEXT("UUVEditorDistributeToolBuilder"), &Z_Registration_Info_UClass_UUVEditorDistributeToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorDistributeToolBuilder), 2909243732U) },
		{ Z_Construct_UClass_UUVEditorTransformTool, UUVEditorTransformTool::StaticClass, TEXT("UUVEditorTransformTool"), &Z_Registration_Info_UClass_UUVEditorTransformTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVEditorTransformTool), 2643721063U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorTransformTool_h_2237567656(TEXT("/Script/UVEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorTransformTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_UVEditorTransformTool_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
