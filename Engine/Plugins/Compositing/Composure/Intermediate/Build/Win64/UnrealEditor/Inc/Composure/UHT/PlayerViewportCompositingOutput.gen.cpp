// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompositingElements/PlayerViewportCompositingOutput.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerViewportCompositingOutput() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UColorConverterOutputPass();
	COMPOSURE_API UClass* Z_Construct_UClass_UPlayerCompOutputCameraModifier();
	COMPOSURE_API UClass* Z_Construct_UClass_UPlayerCompOutputCameraModifier_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UPlayerViewportCompositingOutput();
	COMPOSURE_API UClass* Z_Construct_UClass_UPlayerViewportCompositingOutput_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	void UPlayerViewportCompositingOutput::StaticRegisterNativesUPlayerViewportCompositingOutput()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerViewportCompositingOutput);
	UClass* Z_Construct_UClass_UPlayerViewportCompositingOutput_NoRegister()
	{
		return UPlayerViewportCompositingOutput::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ApplyToneCurve_MetaData[];
#endif
		static void NewProp_ApplyToneCurve_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ApplyToneCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveCamModifier_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActiveCamModifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TonemapperBaseMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TonemapperBaseMat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreTonemapBaseMat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreTonemapBaseMat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ViewportOverrideMID_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ViewportOverrideMID;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UColorConverterOutputPass,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* UPlayerViewportCompositingOutput\n *****************************************************************************/" },
		{ "IncludePath", "CompositingElements/PlayerViewportCompositingOutput.h" },
		{ "ModuleRelativePath", "Classes/CompositingElements/PlayerViewportCompositingOutput.h" },
		{ "ToolTip", "UPlayerViewportCompositingOutput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_PlayerIndex_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "DisplayAfter", "PassName" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/CompositingElements/PlayerViewportCompositingOutput.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerViewportCompositingOutput, PlayerIndex), METADATA_PARAMS(Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_PlayerIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_PlayerIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_ApplyToneCurve_MetaData[] = {
		{ "Category", "Compositing Pass" },
		{ "Comment", "/** Enable or disable the tone curve (and expand gamut) when the tonemap pass settings are passed down to the main viewport post-processing. */" },
		{ "DisplayAfter", "ColorConversion" },
		{ "EditCondition", "bEnabled" },
		{ "ModuleRelativePath", "Classes/CompositingElements/PlayerViewportCompositingOutput.h" },
		{ "ToolTip", "Enable or disable the tone curve (and expand gamut) when the tonemap pass settings are passed down to the main viewport post-processing." },
	};
#endif
	void Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_ApplyToneCurve_SetBit(void* Obj)
	{
		((UPlayerViewportCompositingOutput*)Obj)->ApplyToneCurve = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_ApplyToneCurve = { "ApplyToneCurve", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPlayerViewportCompositingOutput), &Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_ApplyToneCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_ApplyToneCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_ApplyToneCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_ActiveCamModifier_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElements/PlayerViewportCompositingOutput.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_ActiveCamModifier = { "ActiveCamModifier", nullptr, (EPropertyFlags)0x00c4000000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerViewportCompositingOutput, ActiveCamModifier), Z_Construct_UClass_UPlayerCompOutputCameraModifier_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_ActiveCamModifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_ActiveCamModifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_TonemapperBaseMat_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElements/PlayerViewportCompositingOutput.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_TonemapperBaseMat = { "TonemapperBaseMat", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerViewportCompositingOutput, TonemapperBaseMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_TonemapperBaseMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_TonemapperBaseMat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_PreTonemapBaseMat_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElements/PlayerViewportCompositingOutput.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_PreTonemapBaseMat = { "PreTonemapBaseMat", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerViewportCompositingOutput, PreTonemapBaseMat), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_PreTonemapBaseMat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_PreTonemapBaseMat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_ViewportOverrideMID_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElements/PlayerViewportCompositingOutput.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_ViewportOverrideMID = { "ViewportOverrideMID", nullptr, (EPropertyFlags)0x00c4000000202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerViewportCompositingOutput, ViewportOverrideMID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_ViewportOverrideMID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_ViewportOverrideMID_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_PlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_ApplyToneCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_ActiveCamModifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_TonemapperBaseMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_PreTonemapBaseMat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::NewProp_ViewportOverrideMID,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBlendableInterface_NoRegister, (int32)VTABLE_OFFSET(UPlayerViewportCompositingOutput, IBlendableInterface), false },  // 3766320818
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerViewportCompositingOutput>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::ClassParams = {
		&UPlayerViewportCompositingOutput::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerViewportCompositingOutput()
	{
		if (!Z_Registration_Info_UClass_UPlayerViewportCompositingOutput.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerViewportCompositingOutput.OuterSingleton, Z_Construct_UClass_UPlayerViewportCompositingOutput_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerViewportCompositingOutput.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UPlayerViewportCompositingOutput>()
	{
		return UPlayerViewportCompositingOutput::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerViewportCompositingOutput);
	void UPlayerCompOutputCameraModifier::StaticRegisterNativesUPlayerCompOutputCameraModifier()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPlayerCompOutputCameraModifier);
	UClass* Z_Construct_UClass_UPlayerCompOutputCameraModifier_NoRegister()
	{
		return UPlayerCompOutputCameraModifier::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerCompOutputCameraModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerCompOutputCameraModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCompOutputCameraModifier_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/* UPlayerCompOutputCameraModifier\n *****************************************************************************/" },
		{ "IncludePath", "CompositingElements/PlayerViewportCompositingOutput.h" },
		{ "ModuleRelativePath", "Classes/CompositingElements/PlayerViewportCompositingOutput.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "UPlayerCompOutputCameraModifier" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerCompOutputCameraModifier_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElements/PlayerViewportCompositingOutput.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPlayerCompOutputCameraModifier_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPlayerCompOutputCameraModifier, Owner), Z_Construct_UClass_UPlayerViewportCompositingOutput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayerCompOutputCameraModifier_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCompOutputCameraModifier_Statics::NewProp_Owner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerCompOutputCameraModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerCompOutputCameraModifier_Statics::NewProp_Owner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerCompOutputCameraModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerCompOutputCameraModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPlayerCompOutputCameraModifier_Statics::ClassParams = {
		&UPlayerCompOutputCameraModifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayerCompOutputCameraModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCompOutputCameraModifier_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerCompOutputCameraModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerCompOutputCameraModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerCompOutputCameraModifier()
	{
		if (!Z_Registration_Info_UClass_UPlayerCompOutputCameraModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPlayerCompOutputCameraModifier.OuterSingleton, Z_Construct_UClass_UPlayerCompOutputCameraModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPlayerCompOutputCameraModifier.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UPlayerCompOutputCameraModifier>()
	{
		return UPlayerCompOutputCameraModifier::StaticClass();
	}
	UPlayerCompOutputCameraModifier::UPlayerCompOutputCameraModifier(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerCompOutputCameraModifier);
	UPlayerCompOutputCameraModifier::~UPlayerCompOutputCameraModifier() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_PlayerViewportCompositingOutput_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_PlayerViewportCompositingOutput_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPlayerViewportCompositingOutput, UPlayerViewportCompositingOutput::StaticClass, TEXT("UPlayerViewportCompositingOutput"), &Z_Registration_Info_UClass_UPlayerViewportCompositingOutput, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerViewportCompositingOutput), 2716773831U) },
		{ Z_Construct_UClass_UPlayerCompOutputCameraModifier, UPlayerCompOutputCameraModifier::StaticClass, TEXT("UPlayerCompOutputCameraModifier"), &Z_Registration_Info_UClass_UPlayerCompOutputCameraModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPlayerCompOutputCameraModifier), 114159262U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_PlayerViewportCompositingOutput_h_1591205839(TEXT("/Script/Composure"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_PlayerViewportCompositingOutput_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElements_PlayerViewportCompositingOutput_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
