// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDrawFrustumComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_UDrawFrustumComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDrawFrustumComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UDrawFrustumComponent::StaticRegisterNativesUDrawFrustumComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDrawFrustumComponent);
	UClass* Z_Construct_UClass_UDrawFrustumComponent_NoRegister()
	{
		return UDrawFrustumComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDrawFrustumComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFrustumEnabled_MetaData[];
#endif
		static void NewProp_bFrustumEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFrustumEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrustumColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FrustumColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrustumAngle_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrustumAngle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrustumAspectRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrustumAspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrustumStartDist_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrustumStartDist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrustumEndDist_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrustumEndDist;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDrawFrustumComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawFrustumComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Utility component for drawing a view frustum. Origin is at the component location, frustum points down position X axis.\n */" },
		{ "HideCategories", "Object Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Components/DrawFrustumComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
		{ "ToolTip", "Utility component for drawing a view frustum. Origin is at the component location, frustum points down position X axis." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_bFrustumEnabled_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "Comment", "// Enable or disable frustum visualization for this camera\n" },
		{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
		{ "ToolTip", "Enable or disable frustum visualization for this camera" },
	};
#endif
	void Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_bFrustumEnabled_SetBit(void* Obj)
	{
		((UDrawFrustumComponent*)Obj)->bFrustumEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_bFrustumEnabled = { "bFrustumEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDrawFrustumComponent), &Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_bFrustumEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_bFrustumEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_bFrustumEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumColor_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "Comment", "/** Color to draw the wireframe frustum. */" },
		{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
		{ "ToolTip", "Color to draw the wireframe frustum." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumColor = { "FrustumColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawFrustumComponent, FrustumColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumAngle_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "Comment", "/** Angle of longest dimension of view shape. \n\x09  * If the angle is 0 then an orthographic projection is used */" },
		{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
		{ "ToolTip", "Angle of longest dimension of view shape.\nIf the angle is 0 then an orthographic projection is used" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumAngle = { "FrustumAngle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawFrustumComponent, FrustumAngle), METADATA_PARAMS(Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumAngle_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumAspectRatio_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "Comment", "/** Ratio of horizontal size over vertical size. */" },
		{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
		{ "ToolTip", "Ratio of horizontal size over vertical size." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumAspectRatio = { "FrustumAspectRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawFrustumComponent, FrustumAspectRatio), METADATA_PARAMS(Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumAspectRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumStartDist_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "Comment", "/** Distance from origin to start drawing the frustum. */" },
		{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
		{ "ToolTip", "Distance from origin to start drawing the frustum." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumStartDist = { "FrustumStartDist", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawFrustumComponent, FrustumStartDist), METADATA_PARAMS(Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumStartDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumStartDist_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumEndDist_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "Comment", "/** Distance from origin to stop drawing the frustum. */" },
		{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
		{ "ToolTip", "Distance from origin to stop drawing the frustum." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumEndDist = { "FrustumEndDist", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawFrustumComponent, FrustumEndDist), METADATA_PARAMS(Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumEndDist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumEndDist_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "Comment", "/** optional texture to show on the near plane */" },
		{ "ModuleRelativePath", "Classes/Components/DrawFrustumComponent.h" },
		{ "ToolTip", "optional texture to show on the near plane" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDrawFrustumComponent, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_Texture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDrawFrustumComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_bFrustumEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumAspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumStartDist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_FrustumEndDist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDrawFrustumComponent_Statics::NewProp_Texture,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDrawFrustumComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDrawFrustumComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDrawFrustumComponent_Statics::ClassParams = {
		&UDrawFrustumComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDrawFrustumComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDrawFrustumComponent_Statics::PropPointers),
		0,
		0x00A830A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDrawFrustumComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDrawFrustumComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDrawFrustumComponent()
	{
		if (!Z_Registration_Info_UClass_UDrawFrustumComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDrawFrustumComponent.OuterSingleton, Z_Construct_UClass_UDrawFrustumComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDrawFrustumComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UDrawFrustumComponent>()
	{
		return UDrawFrustumComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDrawFrustumComponent);
	UDrawFrustumComponent::~UDrawFrustumComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_DrawFrustumComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_DrawFrustumComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDrawFrustumComponent, UDrawFrustumComponent::StaticClass, TEXT("UDrawFrustumComponent"), &Z_Registration_Info_UClass_UDrawFrustumComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDrawFrustumComponent), 4127458174U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_DrawFrustumComponent_h_3574944069(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_DrawFrustumComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_DrawFrustumComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
