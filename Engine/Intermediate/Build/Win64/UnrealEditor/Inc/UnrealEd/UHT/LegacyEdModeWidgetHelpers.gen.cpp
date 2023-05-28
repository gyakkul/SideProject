// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Tools/LegacyEdModeWidgetHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLegacyEdModeWidgetHelpers() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UBaseLegacyWidgetEdMode();
	UNREALED_API UClass* Z_Construct_UClass_UBaseLegacyWidgetEdMode_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UEdMode();
	UNREALED_API UClass* Z_Construct_UClass_ULegacyEdModeViewportInterface_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_ULegacyEdModeWidgetInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UBaseLegacyWidgetEdMode::StaticRegisterNativesUBaseLegacyWidgetEdMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseLegacyWidgetEdMode);
	UClass* Z_Construct_UClass_UBaseLegacyWidgetEdMode_NoRegister()
	{
		return UBaseLegacyWidgetEdMode::StaticClass();
	}
	struct Z_Construct_UClass_UBaseLegacyWidgetEdMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseLegacyWidgetEdMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdMode,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseLegacyWidgetEdMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// This class is to aid transitioning from native FEdModes to UEdModes, in the case that the FEdMode used property widgets and/or transform widgets\n// To use this class:\n//   1. Subclass FLegacyEdModeWidgetHelper, and override the methods needed for your native FEdMode implementation\n//   2. Transition your native FEdMode to a UObject, by inheriting from this class\n//   3. Override CreateWidgetHelper function to return a SharedRef to the class you created in step 1.\n" },
		{ "IncludePath", "Tools/LegacyEdModeWidgetHelpers.h" },
		{ "ModuleRelativePath", "Public/Tools/LegacyEdModeWidgetHelpers.h" },
		{ "ToolTip", "This class is to aid transitioning from native FEdModes to UEdModes, in the case that the FEdMode used property widgets and/or transform widgets\nTo use this class:\n  1. Subclass FLegacyEdModeWidgetHelper, and override the methods needed for your native FEdMode implementation\n  2. Transition your native FEdMode to a UObject, by inheriting from this class\n  3. Override CreateWidgetHelper function to return a SharedRef to the class you created in step 1." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBaseLegacyWidgetEdMode_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULegacyEdModeWidgetInterface_NoRegister, (int32)VTABLE_OFFSET(UBaseLegacyWidgetEdMode, ILegacyEdModeWidgetInterface), false },  // 3776018236
			{ Z_Construct_UClass_ULegacyEdModeViewportInterface_NoRegister, (int32)VTABLE_OFFSET(UBaseLegacyWidgetEdMode, ILegacyEdModeViewportInterface), false },  // 3238461248
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseLegacyWidgetEdMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseLegacyWidgetEdMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseLegacyWidgetEdMode_Statics::ClassParams = {
		&UBaseLegacyWidgetEdMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseLegacyWidgetEdMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseLegacyWidgetEdMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseLegacyWidgetEdMode()
	{
		if (!Z_Registration_Info_UClass_UBaseLegacyWidgetEdMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseLegacyWidgetEdMode.OuterSingleton, Z_Construct_UClass_UBaseLegacyWidgetEdMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseLegacyWidgetEdMode.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UBaseLegacyWidgetEdMode>()
	{
		return UBaseLegacyWidgetEdMode::StaticClass();
	}
	UBaseLegacyWidgetEdMode::UBaseLegacyWidgetEdMode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseLegacyWidgetEdMode);
	UBaseLegacyWidgetEdMode::~UBaseLegacyWidgetEdMode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tools_LegacyEdModeWidgetHelpers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tools_LegacyEdModeWidgetHelpers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseLegacyWidgetEdMode, UBaseLegacyWidgetEdMode::StaticClass, TEXT("UBaseLegacyWidgetEdMode"), &Z_Registration_Info_UClass_UBaseLegacyWidgetEdMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseLegacyWidgetEdMode), 2980805187U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tools_LegacyEdModeWidgetHelpers_h_3051024682(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tools_LegacyEdModeWidgetHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tools_LegacyEdModeWidgetHelpers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
