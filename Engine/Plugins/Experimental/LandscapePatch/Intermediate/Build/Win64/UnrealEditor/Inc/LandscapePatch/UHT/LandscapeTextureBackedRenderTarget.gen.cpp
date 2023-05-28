// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LandscapeTextureBackedRenderTarget.h"
#include "LandscapeTexturePatchPS.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLandscapeTextureBackedRenderTarget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetFormat();
	LANDSCAPEPATCH_API UClass* Z_Construct_UClass_ULandscapeHeightTextureBackedRenderTarget();
	LANDSCAPEPATCH_API UClass* Z_Construct_UClass_ULandscapeHeightTextureBackedRenderTarget_NoRegister();
	LANDSCAPEPATCH_API UClass* Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase();
	LANDSCAPEPATCH_API UClass* Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_NoRegister();
	LANDSCAPEPATCH_API UClass* Z_Construct_UClass_ULandscapeWeightTextureBackedRenderTarget();
	LANDSCAPEPATCH_API UClass* Z_Construct_UClass_ULandscapeWeightTextureBackedRenderTarget_NoRegister();
	LANDSCAPEPATCH_API UScriptStruct* Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams();
	UPackage* Z_Construct_UPackage__Script_LandscapePatch();
// End Cross Module References
	void ULandscapeTextureBackedRenderTargetBase::StaticRegisterNativesULandscapeTextureBackedRenderTargetBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeTextureBackedRenderTargetBase);
	UClass* Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_NoRegister()
	{
		return ULandscapeTextureBackedRenderTargetBase::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostLoadRT_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PostLoadRT;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InternalTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RenderTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SizeY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseInternalTextureOnly_MetaData[];
#endif
		static void NewProp_bUseInternalTextureOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInternalTextureOnly;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_LandscapePatch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A combination of a render target and UTexture2D that allows render target to be saved across save/load/etc\n * by copying the data back and forth from the internal texture.\n * \n * After an Initialize() call, the internal texture will always be present, and the render target will be\n * present depending on how SetUseInternalTextureOnly is called (by default, present). \n */" },
		{ "IncludePath", "LandscapeTextureBackedRenderTarget.h" },
		{ "ModuleRelativePath", "Public/LandscapeTextureBackedRenderTarget.h" },
		{ "ToolTip", "A combination of a render target and UTexture2D that allows render target to be saved across save/load/etc\nby copying the data back and forth from the internal texture.\n\nAfter an Initialize() call, the internal texture will always be present, and the render target will be\npresent depending on how SetUseInternalTextureOnly is called (by default, present)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_PostLoadRT_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeTextureBackedRenderTarget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_PostLoadRT = { "PostLoadRT", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeTextureBackedRenderTargetBase, PostLoadRT), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_PostLoadRT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_PostLoadRT_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_InternalTexture_MetaData[] = {
		{ "Category", "InternalData" },
		{ "ModuleRelativePath", "Public/LandscapeTextureBackedRenderTarget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_InternalTexture = { "InternalTexture", nullptr, (EPropertyFlags)0x0024080000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeTextureBackedRenderTargetBase, InternalTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_InternalTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_InternalTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_RenderTarget_MetaData[] = {
		{ "Category", "InternalData" },
		{ "ModuleRelativePath", "Public/LandscapeTextureBackedRenderTarget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0024080000222001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeTextureBackedRenderTargetBase, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_RenderTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_RenderTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_SizeX_MetaData[] = {
		{ "Category", "InternalData" },
		{ "ModuleRelativePath", "Public/LandscapeTextureBackedRenderTarget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_SizeX = { "SizeX", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeTextureBackedRenderTargetBase, SizeX), METADATA_PARAMS(Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_SizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_SizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_SizeY_MetaData[] = {
		{ "Category", "InternalData" },
		{ "ModuleRelativePath", "Public/LandscapeTextureBackedRenderTarget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_SizeY = { "SizeY", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeTextureBackedRenderTargetBase, SizeY), METADATA_PARAMS(Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_SizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_SizeY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_bUseInternalTextureOnly_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeTextureBackedRenderTarget.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_bUseInternalTextureOnly_SetBit(void* Obj)
	{
		((ULandscapeTextureBackedRenderTargetBase*)Obj)->bUseInternalTextureOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_bUseInternalTextureOnly = { "bUseInternalTextureOnly", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeTextureBackedRenderTargetBase), &Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_bUseInternalTextureOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_bUseInternalTextureOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_bUseInternalTextureOnly_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_PostLoadRT,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_InternalTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_SizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_SizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::NewProp_bUseInternalTextureOnly,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeTextureBackedRenderTargetBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::ClassParams = {
		&ULandscapeTextureBackedRenderTargetBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase()
	{
		if (!Z_Registration_Info_UClass_ULandscapeTextureBackedRenderTargetBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeTextureBackedRenderTargetBase.OuterSingleton, Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULandscapeTextureBackedRenderTargetBase.OuterSingleton;
	}
	template<> LANDSCAPEPATCH_API UClass* StaticClass<ULandscapeTextureBackedRenderTargetBase>()
	{
		return ULandscapeTextureBackedRenderTargetBase::StaticClass();
	}
	ULandscapeTextureBackedRenderTargetBase::ULandscapeTextureBackedRenderTargetBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeTextureBackedRenderTargetBase);
	ULandscapeTextureBackedRenderTargetBase::~ULandscapeTextureBackedRenderTargetBase() {}
	void ULandscapeWeightTextureBackedRenderTarget::StaticRegisterNativesULandscapeWeightTextureBackedRenderTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeWeightTextureBackedRenderTarget);
	UClass* Z_Construct_UClass_ULandscapeWeightTextureBackedRenderTarget_NoRegister()
	{
		return ULandscapeWeightTextureBackedRenderTarget::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeWeightTextureBackedRenderTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAlphaChannel_MetaData[];
#endif
		static void NewProp_bUseAlphaChannel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAlphaChannel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeWeightTextureBackedRenderTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LandscapePatch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeWeightTextureBackedRenderTarget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeTextureBackedRenderTarget.h" },
		{ "ModuleRelativePath", "Public/LandscapeTextureBackedRenderTarget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeWeightTextureBackedRenderTarget_Statics::NewProp_bUseAlphaChannel_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeTextureBackedRenderTarget.h" },
	};
#endif
	void Z_Construct_UClass_ULandscapeWeightTextureBackedRenderTarget_Statics::NewProp_bUseAlphaChannel_SetBit(void* Obj)
	{
		((ULandscapeWeightTextureBackedRenderTarget*)Obj)->bUseAlphaChannel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULandscapeWeightTextureBackedRenderTarget_Statics::NewProp_bUseAlphaChannel = { "bUseAlphaChannel", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULandscapeWeightTextureBackedRenderTarget), &Z_Construct_UClass_ULandscapeWeightTextureBackedRenderTarget_Statics::NewProp_bUseAlphaChannel_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULandscapeWeightTextureBackedRenderTarget_Statics::NewProp_bUseAlphaChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeWeightTextureBackedRenderTarget_Statics::NewProp_bUseAlphaChannel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeWeightTextureBackedRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeWeightTextureBackedRenderTarget_Statics::NewProp_bUseAlphaChannel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeWeightTextureBackedRenderTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeWeightTextureBackedRenderTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeWeightTextureBackedRenderTarget_Statics::ClassParams = {
		&ULandscapeWeightTextureBackedRenderTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULandscapeWeightTextureBackedRenderTarget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeWeightTextureBackedRenderTarget_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeWeightTextureBackedRenderTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeWeightTextureBackedRenderTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeWeightTextureBackedRenderTarget()
	{
		if (!Z_Registration_Info_UClass_ULandscapeWeightTextureBackedRenderTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeWeightTextureBackedRenderTarget.OuterSingleton, Z_Construct_UClass_ULandscapeWeightTextureBackedRenderTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULandscapeWeightTextureBackedRenderTarget.OuterSingleton;
	}
	template<> LANDSCAPEPATCH_API UClass* StaticClass<ULandscapeWeightTextureBackedRenderTarget>()
	{
		return ULandscapeWeightTextureBackedRenderTarget::StaticClass();
	}
	ULandscapeWeightTextureBackedRenderTarget::ULandscapeWeightTextureBackedRenderTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeWeightTextureBackedRenderTarget);
	ULandscapeWeightTextureBackedRenderTarget::~ULandscapeWeightTextureBackedRenderTarget() {}
	void ULandscapeHeightTextureBackedRenderTarget::StaticRegisterNativesULandscapeHeightTextureBackedRenderTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULandscapeHeightTextureBackedRenderTarget);
	UClass* Z_Construct_UClass_ULandscapeHeightTextureBackedRenderTarget_NoRegister()
	{
		return ULandscapeHeightTextureBackedRenderTarget::StaticClass();
	}
	struct Z_Construct_UClass_ULandscapeHeightTextureBackedRenderTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConversionParams_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConversionParams;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderTargetFormat_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RenderTargetFormat;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULandscapeHeightTextureBackedRenderTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_LandscapePatch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightTextureBackedRenderTarget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LandscapeTextureBackedRenderTarget.h" },
		{ "ModuleRelativePath", "Public/LandscapeTextureBackedRenderTarget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightTextureBackedRenderTarget_Statics::NewProp_ConversionParams_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeTextureBackedRenderTarget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULandscapeHeightTextureBackedRenderTarget_Statics::NewProp_ConversionParams = { "ConversionParams", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeHeightTextureBackedRenderTarget, ConversionParams), Z_Construct_UScriptStruct_FLandscapeHeightPatchConvertToNativeParams, METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightTextureBackedRenderTarget_Statics::NewProp_ConversionParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightTextureBackedRenderTarget_Statics::NewProp_ConversionParams_MetaData)) }; // 1795467887
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULandscapeHeightTextureBackedRenderTarget_Statics::NewProp_RenderTargetFormat_MetaData[] = {
		{ "ModuleRelativePath", "Public/LandscapeTextureBackedRenderTarget.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULandscapeHeightTextureBackedRenderTarget_Statics::NewProp_RenderTargetFormat = { "RenderTargetFormat", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULandscapeHeightTextureBackedRenderTarget, RenderTargetFormat), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightTextureBackedRenderTarget_Statics::NewProp_RenderTargetFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightTextureBackedRenderTarget_Statics::NewProp_RenderTargetFormat_MetaData)) }; // 1004718673
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULandscapeHeightTextureBackedRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightTextureBackedRenderTarget_Statics::NewProp_ConversionParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULandscapeHeightTextureBackedRenderTarget_Statics::NewProp_RenderTargetFormat,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULandscapeHeightTextureBackedRenderTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULandscapeHeightTextureBackedRenderTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULandscapeHeightTextureBackedRenderTarget_Statics::ClassParams = {
		&ULandscapeHeightTextureBackedRenderTarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULandscapeHeightTextureBackedRenderTarget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightTextureBackedRenderTarget_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULandscapeHeightTextureBackedRenderTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULandscapeHeightTextureBackedRenderTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULandscapeHeightTextureBackedRenderTarget()
	{
		if (!Z_Registration_Info_UClass_ULandscapeHeightTextureBackedRenderTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULandscapeHeightTextureBackedRenderTarget.OuterSingleton, Z_Construct_UClass_ULandscapeHeightTextureBackedRenderTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULandscapeHeightTextureBackedRenderTarget.OuterSingleton;
	}
	template<> LANDSCAPEPATCH_API UClass* StaticClass<ULandscapeHeightTextureBackedRenderTarget>()
	{
		return ULandscapeHeightTextureBackedRenderTarget::StaticClass();
	}
	ULandscapeHeightTextureBackedRenderTarget::ULandscapeHeightTextureBackedRenderTarget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULandscapeHeightTextureBackedRenderTarget);
	ULandscapeHeightTextureBackedRenderTarget::~ULandscapeHeightTextureBackedRenderTarget() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTextureBackedRenderTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTextureBackedRenderTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULandscapeTextureBackedRenderTargetBase, ULandscapeTextureBackedRenderTargetBase::StaticClass, TEXT("ULandscapeTextureBackedRenderTargetBase"), &Z_Registration_Info_UClass_ULandscapeTextureBackedRenderTargetBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeTextureBackedRenderTargetBase), 1372729681U) },
		{ Z_Construct_UClass_ULandscapeWeightTextureBackedRenderTarget, ULandscapeWeightTextureBackedRenderTarget::StaticClass, TEXT("ULandscapeWeightTextureBackedRenderTarget"), &Z_Registration_Info_UClass_ULandscapeWeightTextureBackedRenderTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeWeightTextureBackedRenderTarget), 656970950U) },
		{ Z_Construct_UClass_ULandscapeHeightTextureBackedRenderTarget, ULandscapeHeightTextureBackedRenderTarget::StaticClass, TEXT("ULandscapeHeightTextureBackedRenderTarget"), &Z_Registration_Info_UClass_ULandscapeHeightTextureBackedRenderTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULandscapeHeightTextureBackedRenderTarget), 258901530U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTextureBackedRenderTarget_h_531891174(TEXT("/Script/LandscapePatch"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTextureBackedRenderTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_LandscapePatch_Source_LandscapePatch_Public_LandscapeTextureBackedRenderTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
