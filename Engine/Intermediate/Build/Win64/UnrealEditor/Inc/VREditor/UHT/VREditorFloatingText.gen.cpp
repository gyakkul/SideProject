// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VREditorFloatingText.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVREditorFloatingText() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VREditor();
	VREDITOR_API UClass* Z_Construct_UClass_AFloatingText();
	VREDITOR_API UClass* Z_Construct_UClass_AFloatingText_NoRegister();
// End Cross Module References
	void AFloatingText::StaticRegisterNativesAFloatingText()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFloatingText);
	UClass* Z_Construct_UClass_AFloatingText_NoRegister()
	{
		return AFloatingText::StaticClass();
	}
	struct Z_Construct_UClass_AFloatingText_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstLineComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FirstLineComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JointSphereComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_JointSphereComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondLineComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SecondLineComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaskedTextMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaskedTextMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslucentTextMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TranslucentTextMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LineMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineMaterialMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LineMaterialMID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFloatingText_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VREditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingText_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Draws 3D text in the world along with targeting line cues\n */" },
		{ "IncludePath", "VREditorFloatingText.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "VREditorFloatingText.h" },
		{ "ToolTip", "Draws 3D text in the world along with targeting line cues" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingText_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "Comment", "/** Scene component root of this actor */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VREditorFloatingText.h" },
		{ "ToolTip", "Scene component root of this actor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AFloatingText_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFloatingText, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloatingText_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingText_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingText_Statics::NewProp_FirstLineComponent_MetaData[] = {
		{ "Comment", "/** First line segment component.  Starts at the designation location, goes toward the line connection point. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VREditorFloatingText.h" },
		{ "ToolTip", "First line segment component.  Starts at the designation location, goes toward the line connection point." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AFloatingText_Statics::NewProp_FirstLineComponent = { "FirstLineComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFloatingText, FirstLineComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloatingText_Statics::NewProp_FirstLineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingText_Statics::NewProp_FirstLineComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingText_Statics::NewProp_JointSphereComponent_MetaData[] = {
		{ "Comment", "/** Sphere that connects the two line segments and makes the joint look smooth and round */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VREditorFloatingText.h" },
		{ "ToolTip", "Sphere that connects the two line segments and makes the joint look smooth and round" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AFloatingText_Statics::NewProp_JointSphereComponent = { "JointSphereComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFloatingText, JointSphereComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloatingText_Statics::NewProp_JointSphereComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingText_Statics::NewProp_JointSphereComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingText_Statics::NewProp_SecondLineComponent_MetaData[] = {
		{ "Comment", "/** Second line segment component.  Starts at the connection point and goes toward the 3D text. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VREditorFloatingText.h" },
		{ "ToolTip", "Second line segment component.  Starts at the connection point and goes toward the 3D text." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AFloatingText_Statics::NewProp_SecondLineComponent = { "SecondLineComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFloatingText, SecondLineComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloatingText_Statics::NewProp_SecondLineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingText_Statics::NewProp_SecondLineComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingText_Statics::NewProp_TextComponent_MetaData[] = {
		{ "Comment", "/** The 3D text we're drawing.  Positioned at the end of the second line. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VREditorFloatingText.h" },
		{ "ToolTip", "The 3D text we're drawing.  Positioned at the end of the second line." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AFloatingText_Statics::NewProp_TextComponent = { "TextComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFloatingText, TextComponent), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloatingText_Statics::NewProp_TextComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingText_Statics::NewProp_TextComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingText_Statics::NewProp_MaskedTextMaterial_MetaData[] = {
		{ "Comment", "/** Masked text material.  Used after faded in */" },
		{ "ModuleRelativePath", "VREditorFloatingText.h" },
		{ "ToolTip", "Masked text material.  Used after faded in" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AFloatingText_Statics::NewProp_MaskedTextMaterial = { "MaskedTextMaterial", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFloatingText, MaskedTextMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloatingText_Statics::NewProp_MaskedTextMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingText_Statics::NewProp_MaskedTextMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingText_Statics::NewProp_TranslucentTextMaterial_MetaData[] = {
		{ "Comment", "/** Translucent text material.  Used during fading */" },
		{ "ModuleRelativePath", "VREditorFloatingText.h" },
		{ "ToolTip", "Translucent text material.  Used during fading" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AFloatingText_Statics::NewProp_TranslucentTextMaterial = { "TranslucentTextMaterial", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFloatingText, TranslucentTextMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloatingText_Statics::NewProp_TranslucentTextMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingText_Statics::NewProp_TranslucentTextMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingText_Statics::NewProp_LineMaterial_MetaData[] = {
		{ "Comment", "/** Material to use for the line meshes */" },
		{ "ModuleRelativePath", "VREditorFloatingText.h" },
		{ "ToolTip", "Material to use for the line meshes" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AFloatingText_Statics::NewProp_LineMaterial = { "LineMaterial", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFloatingText, LineMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloatingText_Statics::NewProp_LineMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingText_Statics::NewProp_LineMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFloatingText_Statics::NewProp_LineMaterialMID_MetaData[] = {
		{ "Comment", "/** Dynamic material instance for fading lines in and out */" },
		{ "ModuleRelativePath", "VREditorFloatingText.h" },
		{ "ToolTip", "Dynamic material instance for fading lines in and out" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AFloatingText_Statics::NewProp_LineMaterialMID = { "LineMaterialMID", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AFloatingText, LineMaterialMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFloatingText_Statics::NewProp_LineMaterialMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingText_Statics::NewProp_LineMaterialMID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFloatingText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingText_Statics::NewProp_SceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingText_Statics::NewProp_FirstLineComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingText_Statics::NewProp_JointSphereComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingText_Statics::NewProp_SecondLineComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingText_Statics::NewProp_TextComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingText_Statics::NewProp_MaskedTextMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingText_Statics::NewProp_TranslucentTextMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingText_Statics::NewProp_LineMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFloatingText_Statics::NewProp_LineMaterialMID,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFloatingText_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFloatingText>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFloatingText_Statics::ClassParams = {
		&AFloatingText::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFloatingText_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingText_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFloatingText_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFloatingText_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFloatingText()
	{
		if (!Z_Registration_Info_UClass_AFloatingText.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFloatingText.OuterSingleton, Z_Construct_UClass_AFloatingText_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFloatingText.OuterSingleton;
	}
	template<> VREDITOR_API UClass* StaticClass<AFloatingText>()
	{
		return AFloatingText::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFloatingText);
	AFloatingText::~AFloatingText() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorFloatingText_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorFloatingText_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFloatingText, AFloatingText::StaticClass, TEXT("AFloatingText"), &Z_Registration_Info_UClass_AFloatingText, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFloatingText), 3215549926U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorFloatingText_h_2054968351(TEXT("/Script/VREditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorFloatingText_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_VREditor_VREditorFloatingText_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
