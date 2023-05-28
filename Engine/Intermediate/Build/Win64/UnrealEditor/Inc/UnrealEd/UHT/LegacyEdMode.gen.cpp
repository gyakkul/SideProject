// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Private/Tools/LegacyEdMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLegacyEdMode() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UEdMode();
	UNREALED_API UClass* Z_Construct_UClass_ULegacyEdModeDrawHelperInterface_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_ULegacyEdModeSelectInterface_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_ULegacyEdModeToolInterface_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_ULegacyEdModeViewportInterface_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_ULegacyEdModeWidgetInterface_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_ULegacyEdModeWrapper();
	UNREALED_API UClass* Z_Construct_UClass_ULegacyEdModeWrapper_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void ULegacyEdModeWrapper::StaticRegisterNativesULegacyEdModeWrapper()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULegacyEdModeWrapper);
	UClass* Z_Construct_UClass_ULegacyEdModeWrapper_NoRegister()
	{
		return ULegacyEdModeWrapper::StaticClass();
	}
	struct Z_Construct_UClass_ULegacyEdModeWrapper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULegacyEdModeWrapper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEdMode,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegacyEdModeWrapper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Tools/LegacyEdMode.h" },
		{ "ModuleRelativePath", "Private/Tools/LegacyEdMode.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULegacyEdModeWrapper_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_ULegacyEdModeWidgetInterface_NoRegister, (int32)VTABLE_OFFSET(ULegacyEdModeWrapper, ILegacyEdModeWidgetInterface), false },  // 3776018236
			{ Z_Construct_UClass_ULegacyEdModeToolInterface_NoRegister, (int32)VTABLE_OFFSET(ULegacyEdModeWrapper, ILegacyEdModeToolInterface), false },  // 181985289
			{ Z_Construct_UClass_ULegacyEdModeSelectInterface_NoRegister, (int32)VTABLE_OFFSET(ULegacyEdModeWrapper, ILegacyEdModeSelectInterface), false },  // 3415642726
			{ Z_Construct_UClass_ULegacyEdModeDrawHelperInterface_NoRegister, (int32)VTABLE_OFFSET(ULegacyEdModeWrapper, ILegacyEdModeDrawHelperInterface), false },  // 3038493219
			{ Z_Construct_UClass_ULegacyEdModeViewportInterface_NoRegister, (int32)VTABLE_OFFSET(ULegacyEdModeWrapper, ILegacyEdModeViewportInterface), false },  // 3238461248
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULegacyEdModeWrapper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULegacyEdModeWrapper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULegacyEdModeWrapper_Statics::ClassParams = {
		&ULegacyEdModeWrapper::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULegacyEdModeWrapper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyEdModeWrapper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULegacyEdModeWrapper()
	{
		if (!Z_Registration_Info_UClass_ULegacyEdModeWrapper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULegacyEdModeWrapper.OuterSingleton, Z_Construct_UClass_ULegacyEdModeWrapper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULegacyEdModeWrapper.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<ULegacyEdModeWrapper>()
	{
		return ULegacyEdModeWrapper::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULegacyEdModeWrapper);
	ULegacyEdModeWrapper::~ULegacyEdModeWrapper() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Private_Tools_LegacyEdMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Private_Tools_LegacyEdMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULegacyEdModeWrapper, ULegacyEdModeWrapper::StaticClass, TEXT("ULegacyEdModeWrapper"), &Z_Registration_Info_UClass_ULegacyEdModeWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULegacyEdModeWrapper), 2702256188U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Private_Tools_LegacyEdMode_h_1343383448(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Private_Tools_LegacyEdMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Private_Tools_LegacyEdMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
