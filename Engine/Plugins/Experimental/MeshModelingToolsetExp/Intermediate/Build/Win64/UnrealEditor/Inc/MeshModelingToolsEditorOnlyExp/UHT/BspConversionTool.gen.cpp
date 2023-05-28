// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BspConversionTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBspConversionTool() {}
// Cross Module References
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolBuilder();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UBspConversionTool();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UBspConversionTool_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UBspConversionToolActionPropertySet();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UBspConversionToolActionPropertySet_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UBspConversionToolBuilder();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UBspConversionToolBuilder_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UBspConversionToolProperties();
	MESHMODELINGTOOLSEDITORONLYEXP_API UClass* Z_Construct_UClass_UBspConversionToolProperties_NoRegister();
	MESHMODELINGTOOLSEDITORONLYEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EBspConversionMode();
	MESHMODELINGTOOLSEDITORONLYEXP_API UEnum* Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EBspConversionToolAction();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp();
// End Cross Module References
	void UBspConversionToolBuilder::StaticRegisterNativesUBspConversionToolBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBspConversionToolBuilder);
	UClass* Z_Construct_UClass_UBspConversionToolBuilder_NoRegister()
	{
		return UBspConversionToolBuilder::StaticClass();
	}
	struct Z_Construct_UClass_UBspConversionToolBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBspConversionToolBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBspConversionToolBuilder_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Builder for UBspConversionTool.\n */" },
		{ "IncludePath", "BspConversionTool.h" },
		{ "ModuleRelativePath", "Public/BspConversionTool.h" },
		{ "ToolTip", "Builder for UBspConversionTool." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBspConversionToolBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBspConversionToolBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBspConversionToolBuilder_Statics::ClassParams = {
		&UBspConversionToolBuilder::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBspConversionToolBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBspConversionToolBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBspConversionToolBuilder()
	{
		if (!Z_Registration_Info_UClass_UBspConversionToolBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBspConversionToolBuilder.OuterSingleton, Z_Construct_UClass_UBspConversionToolBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBspConversionToolBuilder.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UBspConversionToolBuilder>()
	{
		return UBspConversionToolBuilder::StaticClass();
	}
	UBspConversionToolBuilder::UBspConversionToolBuilder(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBspConversionToolBuilder);
	UBspConversionToolBuilder::~UBspConversionToolBuilder() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBspConversionMode;
	static UEnum* EBspConversionMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBspConversionMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBspConversionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EBspConversionMode, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp(), TEXT("EBspConversionMode"));
		}
		return Z_Registration_Info_UEnum_EBspConversionMode.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UEnum* StaticEnum<EBspConversionMode>()
	{
		return EBspConversionMode_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EBspConversionMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EBspConversionMode_Statics::Enumerators[] = {
		{ "EBspConversionMode::ConvertFirst", (int64)EBspConversionMode::ConvertFirst },
		{ "EBspConversionMode::CombineFirst", (int64)EBspConversionMode::CombineFirst },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EBspConversionMode_Statics::Enum_MetaDataParams[] = {
		{ "CombineFirst.Comment", "/** First combines brushes using brush CSG operations, then converts result to static mesh (legacy path). */" },
		{ "CombineFirst.DisplayName", "Combine, then Convert" },
		{ "CombineFirst.Name", "EBspConversionMode::CombineFirst" },
		{ "CombineFirst.ToolTip", "First combines brushes using brush CSG operations, then converts result to static mesh (legacy path)." },
		{ "ConvertFirst.Comment", "/** First converts the brushes to static meshes, then performs mesh boolean operations. */" },
		{ "ConvertFirst.DisplayName", "Convert, then Combine" },
		{ "ConvertFirst.Name", "EBspConversionMode::ConvertFirst" },
		{ "ConvertFirst.ToolTip", "First converts the brushes to static meshes, then performs mesh boolean operations." },
		{ "ModuleRelativePath", "Public/BspConversionTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EBspConversionMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
		nullptr,
		"EBspConversionMode",
		"EBspConversionMode",
		Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EBspConversionMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EBspConversionMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EBspConversionMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EBspConversionMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EBspConversionMode()
	{
		if (!Z_Registration_Info_UEnum_EBspConversionMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBspConversionMode.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EBspConversionMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBspConversionMode.InnerSingleton;
	}
	void UBspConversionToolProperties::StaticRegisterNativesUBspConversionToolProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBspConversionToolProperties);
	UClass* Z_Construct_UClass_UBspConversionToolProperties_NoRegister()
	{
		return UBspConversionToolProperties::StaticClass();
	}
	struct Z_Construct_UClass_UBspConversionToolProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ConversionMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversionMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ConversionMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeVolumes_MetaData[];
#endif
		static void NewProp_bIncludeVolumes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeVolumes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveConvertedVolumes_MetaData[];
#endif
		static void NewProp_bRemoveConvertedVolumes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveConvertedVolumes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExplicitSubtractiveBrushSelection_MetaData[];
#endif
		static void NewProp_bExplicitSubtractiveBrushSelection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExplicitSubtractiveBrushSelection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveConvertedSubtractiveBrushes_MetaData[];
#endif
		static void NewProp_bRemoveConvertedSubtractiveBrushes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveConvertedSubtractiveBrushes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCacheBrushes_MetaData[];
#endif
		static void NewProp_bCacheBrushes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCacheBrushes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowPreview_MetaData[];
#endif
		static void NewProp_bShowPreview_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowPreview;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBspConversionToolProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBspConversionToolProperties_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BspConversionTool.h" },
		{ "ModuleRelativePath", "Public/BspConversionTool.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_ConversionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_ConversionMode_MetaData[] = {
		{ "Category", "Options" },
		{ "ModuleRelativePath", "Public/BspConversionTool.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_ConversionMode = { "ConversionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBspConversionToolProperties, ConversionMode), Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EBspConversionMode, METADATA_PARAMS(Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_ConversionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_ConversionMode_MetaData)) }; // 4280723118
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bIncludeVolumes_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Whether to consider BSP volumes to be valid conversion targets. */" },
		{ "ModuleRelativePath", "Public/BspConversionTool.h" },
		{ "ToolTip", "Whether to consider BSP volumes to be valid conversion targets." },
	};
#endif
	void Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bIncludeVolumes_SetBit(void* Obj)
	{
		((UBspConversionToolProperties*)Obj)->bIncludeVolumes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bIncludeVolumes = { "bIncludeVolumes", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBspConversionToolProperties), &Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bIncludeVolumes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bIncludeVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bIncludeVolumes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bRemoveConvertedVolumes_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Whether to remove any selected BSP volumes after using them to create a static mesh. */" },
		{ "EditCondition", "bIncludeVolumes" },
		{ "ModuleRelativePath", "Public/BspConversionTool.h" },
		{ "ToolTip", "Whether to remove any selected BSP volumes after using them to create a static mesh." },
	};
#endif
	void Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bRemoveConvertedVolumes_SetBit(void* Obj)
	{
		((UBspConversionToolProperties*)Obj)->bRemoveConvertedVolumes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bRemoveConvertedVolumes = { "bRemoveConvertedVolumes", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBspConversionToolProperties), &Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bRemoveConvertedVolumes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bRemoveConvertedVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bRemoveConvertedVolumes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bExplicitSubtractiveBrushSelection_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Whether subtractive brushes have to be explicitly selected to be part of the conversion. If false, all\n\x09 subtractive brushes in the level will be used. */" },
		{ "ModuleRelativePath", "Public/BspConversionTool.h" },
		{ "ToolTip", "Whether subtractive brushes have to be explicitly selected to be part of the conversion. If false, all\n       subtractive brushes in the level will be used." },
	};
#endif
	void Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bExplicitSubtractiveBrushSelection_SetBit(void* Obj)
	{
		((UBspConversionToolProperties*)Obj)->bExplicitSubtractiveBrushSelection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bExplicitSubtractiveBrushSelection = { "bExplicitSubtractiveBrushSelection", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBspConversionToolProperties), &Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bExplicitSubtractiveBrushSelection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bExplicitSubtractiveBrushSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bExplicitSubtractiveBrushSelection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bRemoveConvertedSubtractiveBrushes_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Whether subtractive brushes used in a conversion should be removed. Only acts on explicitly selected\n\x09 subtractive brushes. */" },
		{ "ModuleRelativePath", "Public/BspConversionTool.h" },
		{ "ToolTip", "Whether subtractive brushes used in a conversion should be removed. Only acts on explicitly selected\n       subtractive brushes." },
	};
#endif
	void Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bRemoveConvertedSubtractiveBrushes_SetBit(void* Obj)
	{
		((UBspConversionToolProperties*)Obj)->bRemoveConvertedSubtractiveBrushes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bRemoveConvertedSubtractiveBrushes = { "bRemoveConvertedSubtractiveBrushes", nullptr, (EPropertyFlags)0x0010000400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBspConversionToolProperties), &Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bRemoveConvertedSubtractiveBrushes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bRemoveConvertedSubtractiveBrushes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bRemoveConvertedSubtractiveBrushes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bCacheBrushes_MetaData[] = {
		{ "Category", "Options" },
		{ "Comment", "/** Caches individual brush conversions in \"convert then combine\" mode during a single invocation of \n\x09 the tool. Only useful if changing selections or properties after starting the tool. Cleared on tool shutdown. */" },
		{ "EditCondition", "ConversionMode == EBspConversionMode::ConvertFirst" },
		{ "ModuleRelativePath", "Public/BspConversionTool.h" },
		{ "ToolTip", "Caches individual brush conversions in \"convert then combine\" mode during a single invocation of\n       the tool. Only useful if changing selections or properties after starting the tool. Cleared on tool shutdown." },
	};
#endif
	void Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bCacheBrushes_SetBit(void* Obj)
	{
		((UBspConversionToolProperties*)Obj)->bCacheBrushes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bCacheBrushes = { "bCacheBrushes", nullptr, (EPropertyFlags)0x0010040400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBspConversionToolProperties), &Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bCacheBrushes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bCacheBrushes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bCacheBrushes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bShowPreview_MetaData[] = {
		{ "Category", "PreviewOptions" },
		{ "Comment", "/** Determines whether a dynamic preview is shown. Note that this introduces non-background computations \n\x09""at each event that changes the result, rather than only performing a computation on Accept. */" },
		{ "ModuleRelativePath", "Public/BspConversionTool.h" },
		{ "ToolTip", "Determines whether a dynamic preview is shown. Note that this introduces non-background computations\n      at each event that changes the result, rather than only performing a computation on Accept." },
	};
#endif
	void Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bShowPreview_SetBit(void* Obj)
	{
		((UBspConversionToolProperties*)Obj)->bShowPreview = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bShowPreview = { "bShowPreview", nullptr, (EPropertyFlags)0x0010040400000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBspConversionToolProperties), &Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bShowPreview_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bShowPreview_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bShowPreview_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBspConversionToolProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_ConversionMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_ConversionMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bIncludeVolumes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bRemoveConvertedVolumes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bExplicitSubtractiveBrushSelection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bRemoveConvertedSubtractiveBrushes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bCacheBrushes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBspConversionToolProperties_Statics::NewProp_bShowPreview,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBspConversionToolProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBspConversionToolProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBspConversionToolProperties_Statics::ClassParams = {
		&UBspConversionToolProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBspConversionToolProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBspConversionToolProperties_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBspConversionToolProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBspConversionToolProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBspConversionToolProperties()
	{
		if (!Z_Registration_Info_UClass_UBspConversionToolProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBspConversionToolProperties.OuterSingleton, Z_Construct_UClass_UBspConversionToolProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBspConversionToolProperties.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UBspConversionToolProperties>()
	{
		return UBspConversionToolProperties::StaticClass();
	}
	UBspConversionToolProperties::UBspConversionToolProperties(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBspConversionToolProperties);
	UBspConversionToolProperties::~UBspConversionToolProperties() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBspConversionToolAction;
	static UEnum* EBspConversionToolAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBspConversionToolAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBspConversionToolAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EBspConversionToolAction, (UObject*)Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp(), TEXT("EBspConversionToolAction"));
		}
		return Z_Registration_Info_UEnum_EBspConversionToolAction.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UEnum* StaticEnum<EBspConversionToolAction>()
	{
		return EBspConversionToolAction_StaticEnum();
	}
	struct Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EBspConversionToolAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EBspConversionToolAction_Statics::Enumerators[] = {
		{ "EBspConversionToolAction::NoAction", (int64)EBspConversionToolAction::NoAction },
		{ "EBspConversionToolAction::SelectAllValidBrushes", (int64)EBspConversionToolAction::SelectAllValidBrushes },
		{ "EBspConversionToolAction::DeselectVolumes", (int64)EBspConversionToolAction::DeselectVolumes },
		{ "EBspConversionToolAction::DeselectNonValid", (int64)EBspConversionToolAction::DeselectNonValid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EBspConversionToolAction_Statics::Enum_MetaDataParams[] = {
		{ "DeselectNonValid.Name", "EBspConversionToolAction::DeselectNonValid" },
		{ "DeselectVolumes.Name", "EBspConversionToolAction::DeselectVolumes" },
		{ "ModuleRelativePath", "Public/BspConversionTool.h" },
		{ "NoAction.Name", "EBspConversionToolAction::NoAction" },
		{ "SelectAllValidBrushes.Name", "EBspConversionToolAction::SelectAllValidBrushes" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EBspConversionToolAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
		nullptr,
		"EBspConversionToolAction",
		"EBspConversionToolAction",
		Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EBspConversionToolAction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EBspConversionToolAction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EBspConversionToolAction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EBspConversionToolAction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EBspConversionToolAction()
	{
		if (!Z_Registration_Info_UEnum_EBspConversionToolAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBspConversionToolAction.InnerSingleton, Z_Construct_UEnum_MeshModelingToolsEditorOnlyExp_EBspConversionToolAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBspConversionToolAction.InnerSingleton;
	}
	DEFINE_FUNCTION(UBspConversionToolActionPropertySet::execDeselectNonValid)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeselectNonValid();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBspConversionToolActionPropertySet::execDeselectVolumes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DeselectVolumes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBspConversionToolActionPropertySet::execSelectAllValidBrushes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SelectAllValidBrushes();
		P_NATIVE_END;
	}
	void UBspConversionToolActionPropertySet::StaticRegisterNativesUBspConversionToolActionPropertySet()
	{
		UClass* Class = UBspConversionToolActionPropertySet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DeselectNonValid", &UBspConversionToolActionPropertySet::execDeselectNonValid },
			{ "DeselectVolumes", &UBspConversionToolActionPropertySet::execDeselectVolumes },
			{ "SelectAllValidBrushes", &UBspConversionToolActionPropertySet::execSelectAllValidBrushes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBspConversionToolActionPropertySet_DeselectNonValid_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBspConversionToolActionPropertySet_DeselectNonValid_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SelectionOperations" },
		{ "Comment", "/** Deselect any currently selected brushes that are not valid targets given current settings. */" },
		{ "DisplayName", "Deselect Non-Valid" },
		{ "DisplayPriority", "3" },
		{ "ModuleRelativePath", "Public/BspConversionTool.h" },
		{ "ToolTip", "Deselect any currently selected brushes that are not valid targets given current settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBspConversionToolActionPropertySet_DeselectNonValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBspConversionToolActionPropertySet, nullptr, "DeselectNonValid", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBspConversionToolActionPropertySet_DeselectNonValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBspConversionToolActionPropertySet_DeselectNonValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBspConversionToolActionPropertySet_DeselectNonValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBspConversionToolActionPropertySet_DeselectNonValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBspConversionToolActionPropertySet_DeselectVolumes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBspConversionToolActionPropertySet_DeselectVolumes_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SelectionOperations" },
		{ "Comment", "/** Deselect any currently selected volume brushes. */" },
		{ "DisplayName", "Deselect Volumes" },
		{ "DisplayPriority", "2" },
		{ "ModuleRelativePath", "Public/BspConversionTool.h" },
		{ "ToolTip", "Deselect any currently selected volume brushes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBspConversionToolActionPropertySet_DeselectVolumes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBspConversionToolActionPropertySet, nullptr, "DeselectVolumes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBspConversionToolActionPropertySet_DeselectVolumes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBspConversionToolActionPropertySet_DeselectVolumes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBspConversionToolActionPropertySet_DeselectVolumes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBspConversionToolActionPropertySet_DeselectVolumes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBspConversionToolActionPropertySet_SelectAllValidBrushes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBspConversionToolActionPropertySet_SelectAllValidBrushes_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "SelectionOperations" },
		{ "Comment", "/** Select all brushes that satisfy the current settings. */" },
		{ "DisplayName", "Select All Valid Brushes" },
		{ "DisplayPriority", "1" },
		{ "ModuleRelativePath", "Public/BspConversionTool.h" },
		{ "ToolTip", "Select all brushes that satisfy the current settings." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBspConversionToolActionPropertySet_SelectAllValidBrushes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBspConversionToolActionPropertySet, nullptr, "SelectAllValidBrushes", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBspConversionToolActionPropertySet_SelectAllValidBrushes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBspConversionToolActionPropertySet_SelectAllValidBrushes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBspConversionToolActionPropertySet_SelectAllValidBrushes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBspConversionToolActionPropertySet_SelectAllValidBrushes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBspConversionToolActionPropertySet);
	UClass* Z_Construct_UClass_UBspConversionToolActionPropertySet_NoRegister()
	{
		return UBspConversionToolActionPropertySet::StaticClass();
	}
	struct Z_Construct_UClass_UBspConversionToolActionPropertySet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBspConversionToolActionPropertySet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveToolPropertySet,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBspConversionToolActionPropertySet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBspConversionToolActionPropertySet_DeselectNonValid, "DeselectNonValid" }, // 412307100
		{ &Z_Construct_UFunction_UBspConversionToolActionPropertySet_DeselectVolumes, "DeselectVolumes" }, // 4056820156
		{ &Z_Construct_UFunction_UBspConversionToolActionPropertySet_SelectAllValidBrushes, "SelectAllValidBrushes" }, // 3259655642
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBspConversionToolActionPropertySet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BspConversionTool.h" },
		{ "ModuleRelativePath", "Public/BspConversionTool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBspConversionToolActionPropertySet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBspConversionToolActionPropertySet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBspConversionToolActionPropertySet_Statics::ClassParams = {
		&UBspConversionToolActionPropertySet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBspConversionToolActionPropertySet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBspConversionToolActionPropertySet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBspConversionToolActionPropertySet()
	{
		if (!Z_Registration_Info_UClass_UBspConversionToolActionPropertySet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBspConversionToolActionPropertySet.OuterSingleton, Z_Construct_UClass_UBspConversionToolActionPropertySet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBspConversionToolActionPropertySet.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UBspConversionToolActionPropertySet>()
	{
		return UBspConversionToolActionPropertySet::StaticClass();
	}
	UBspConversionToolActionPropertySet::UBspConversionToolActionPropertySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBspConversionToolActionPropertySet);
	UBspConversionToolActionPropertySet::~UBspConversionToolActionPropertySet() {}
	void UBspConversionTool::StaticRegisterNativesUBspConversionTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBspConversionTool);
	UClass* Z_Construct_UClass_UBspConversionTool_NoRegister()
	{
		return UBspConversionTool::StaticClass();
	}
	struct Z_Construct_UClass_UBspConversionTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Settings_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Settings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolActions_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ToolActions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBspConversionTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractiveTool,
		(UObject* (*)())Z_Construct_UPackage__Script_MeshModelingToolsEditorOnlyExp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBspConversionTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Converts BSP brushes to static meshes.\n *\n * Known limitations:\n * - Preview does not respond to property changes in the brush detail panel while the tool is running. User would need\n *   to create some event that does change the preview (such as tool property change, or selection change).\n * - BSP brushes with non-manifold geometry (specifically, the stair brushes) cannot be used with the \"Convert, then combine\"\n *   path because boolean operations do not allow them. The user gets properly notified of this if it comes up.\n */" },
		{ "IncludePath", "BspConversionTool.h" },
		{ "ModuleRelativePath", "Public/BspConversionTool.h" },
		{ "ToolTip", "Converts BSP brushes to static meshes.\n\nKnown limitations:\n- Preview does not respond to property changes in the brush detail panel while the tool is running. User would need\n  to create some event that does change the preview (such as tool property change, or selection change).\n- BSP brushes with non-manifold geometry (specifically, the stair brushes) cannot be used with the \"Convert, then combine\"\n  path because boolean operations do not allow them. The user gets properly notified of this if it comes up." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBspConversionTool_Statics::NewProp_Settings_MetaData[] = {
		{ "ModuleRelativePath", "Public/BspConversionTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBspConversionTool_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBspConversionTool, Settings), Z_Construct_UClass_UBspConversionToolProperties_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBspConversionTool_Statics::NewProp_Settings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBspConversionTool_Statics::NewProp_Settings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBspConversionTool_Statics::NewProp_ToolActions_MetaData[] = {
		{ "ModuleRelativePath", "Public/BspConversionTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBspConversionTool_Statics::NewProp_ToolActions = { "ToolActions", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBspConversionTool, ToolActions), Z_Construct_UClass_UBspConversionToolActionPropertySet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBspConversionTool_Statics::NewProp_ToolActions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBspConversionTool_Statics::NewProp_ToolActions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBspConversionTool_Statics::NewProp_PreviewMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/BspConversionTool.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UBspConversionTool_Statics::NewProp_PreviewMesh = { "PreviewMesh", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBspConversionTool, PreviewMesh), Z_Construct_UClass_UPreviewMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBspConversionTool_Statics::NewProp_PreviewMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBspConversionTool_Statics::NewProp_PreviewMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBspConversionTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBspConversionTool_Statics::NewProp_Settings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBspConversionTool_Statics::NewProp_ToolActions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBspConversionTool_Statics::NewProp_PreviewMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBspConversionTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBspConversionTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBspConversionTool_Statics::ClassParams = {
		&UBspConversionTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBspConversionTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBspConversionTool_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UBspConversionTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBspConversionTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBspConversionTool()
	{
		if (!Z_Registration_Info_UClass_UBspConversionTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBspConversionTool.OuterSingleton, Z_Construct_UClass_UBspConversionTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBspConversionTool.OuterSingleton;
	}
	template<> MESHMODELINGTOOLSEDITORONLYEXP_API UClass* StaticClass<UBspConversionTool>()
	{
		return UBspConversionTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBspConversionTool);
	UBspConversionTool::~UBspConversionTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_BspConversionTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_BspConversionTool_h_Statics::EnumInfo[] = {
		{ EBspConversionMode_StaticEnum, TEXT("EBspConversionMode"), &Z_Registration_Info_UEnum_EBspConversionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4280723118U) },
		{ EBspConversionToolAction_StaticEnum, TEXT("EBspConversionToolAction"), &Z_Registration_Info_UEnum_EBspConversionToolAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1747062064U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_BspConversionTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBspConversionToolBuilder, UBspConversionToolBuilder::StaticClass, TEXT("UBspConversionToolBuilder"), &Z_Registration_Info_UClass_UBspConversionToolBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBspConversionToolBuilder), 2076856863U) },
		{ Z_Construct_UClass_UBspConversionToolProperties, UBspConversionToolProperties::StaticClass, TEXT("UBspConversionToolProperties"), &Z_Registration_Info_UClass_UBspConversionToolProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBspConversionToolProperties), 4144193412U) },
		{ Z_Construct_UClass_UBspConversionToolActionPropertySet, UBspConversionToolActionPropertySet::StaticClass, TEXT("UBspConversionToolActionPropertySet"), &Z_Registration_Info_UClass_UBspConversionToolActionPropertySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBspConversionToolActionPropertySet), 288487706U) },
		{ Z_Construct_UClass_UBspConversionTool, UBspConversionTool::StaticClass, TEXT("UBspConversionTool"), &Z_Registration_Info_UClass_UBspConversionTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBspConversionTool), 1810472358U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_BspConversionTool_h_3971717549(TEXT("/Script/MeshModelingToolsEditorOnlyExp"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_BspConversionTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_BspConversionTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_BspConversionTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_MeshModelingToolsetExp_Source_MeshModelingToolsEditorOnlyExp_Public_BspConversionTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
