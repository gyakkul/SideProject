// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ComposurePlayerCompositingCameraModifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComposurePlayerCompositingCameraModifier() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UComposurePlayerCompositingCameraModifier();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposurePlayerCompositingCameraModifier_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposurePlayerCompositingInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraModifier();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	void UComposurePlayerCompositingCameraModifier::StaticRegisterNativesUComposurePlayerCompositingCameraModifier()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComposurePlayerCompositingCameraModifier);
	UClass* Z_Construct_UClass_UComposurePlayerCompositingCameraModifier_NoRegister()
	{
		return UComposurePlayerCompositingCameraModifier::StaticClass();
	}
	struct Z_Construct_UClass_UComposurePlayerCompositingCameraModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComposurePlayerCompositingCameraModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCameraModifier,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposurePlayerCompositingCameraModifier_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Private camera manager for  UComposurePlayerCompositingTarget.\n */" },
		{ "IncludePath", "ComposurePlayerCompositingCameraModifier.h" },
		{ "ModuleRelativePath", "Private/ComposurePlayerCompositingCameraModifier.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "Private camera manager for  UComposurePlayerCompositingTarget." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposurePlayerCompositingCameraModifier_Statics::NewProp_Target_MetaData[] = {
		{ "Comment", "// Current player camera manager the target is bind on.\n" },
		{ "ModuleRelativePath", "Private/ComposurePlayerCompositingCameraModifier.h" },
		{ "ToolTip", "Current player camera manager the target is bind on." },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UComposurePlayerCompositingCameraModifier_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposurePlayerCompositingCameraModifier, Target), Z_Construct_UClass_UComposurePlayerCompositingInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UComposurePlayerCompositingCameraModifier_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposurePlayerCompositingCameraModifier_Statics::NewProp_Target_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComposurePlayerCompositingCameraModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposurePlayerCompositingCameraModifier_Statics::NewProp_Target,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UComposurePlayerCompositingCameraModifier_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBlendableInterface_NoRegister, (int32)VTABLE_OFFSET(UComposurePlayerCompositingCameraModifier, IBlendableInterface), false },  // 3766320818
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComposurePlayerCompositingCameraModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComposurePlayerCompositingCameraModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComposurePlayerCompositingCameraModifier_Statics::ClassParams = {
		&UComposurePlayerCompositingCameraModifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComposurePlayerCompositingCameraModifier_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComposurePlayerCompositingCameraModifier_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UComposurePlayerCompositingCameraModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComposurePlayerCompositingCameraModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComposurePlayerCompositingCameraModifier()
	{
		if (!Z_Registration_Info_UClass_UComposurePlayerCompositingCameraModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComposurePlayerCompositingCameraModifier.OuterSingleton, Z_Construct_UClass_UComposurePlayerCompositingCameraModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComposurePlayerCompositingCameraModifier.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UComposurePlayerCompositingCameraModifier>()
	{
		return UComposurePlayerCompositingCameraModifier::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComposurePlayerCompositingCameraModifier);
	UComposurePlayerCompositingCameraModifier::~UComposurePlayerCompositingCameraModifier() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposurePlayerCompositingCameraModifier_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposurePlayerCompositingCameraModifier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComposurePlayerCompositingCameraModifier, UComposurePlayerCompositingCameraModifier::StaticClass, TEXT("UComposurePlayerCompositingCameraModifier"), &Z_Registration_Info_UClass_UComposurePlayerCompositingCameraModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComposurePlayerCompositingCameraModifier), 2565709452U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposurePlayerCompositingCameraModifier_h_3084811644(TEXT("/Script/Composure"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposurePlayerCompositingCameraModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposurePlayerCompositingCameraModifier_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
