// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../VirtualScoutingEditor/Private/VPScoutingMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPScoutingMode() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VirtualScoutingEditor();
	VIRTUALSCOUTINGEDITOR_API UClass* Z_Construct_UClass_UVPScoutingMode();
	VIRTUALSCOUTINGEDITOR_API UClass* Z_Construct_UClass_UVPScoutingMode_NoRegister();
	VREDITOR_API UClass* Z_Construct_UClass_UVREditorMode();
// End Cross Module References
	void UVPScoutingMode::StaticRegisterNativesUVPScoutingMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVPScoutingMode);
	UClass* Z_Construct_UClass_UVPScoutingMode_NoRegister()
	{
		return UVPScoutingMode::StaticClass();
	}
	struct Z_Construct_UClass_UVPScoutingMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVPScoutingMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UVREditorMode,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtualScoutingEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPScoutingMode_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Virtual Scouting Mode" },
		{ "IncludePath", "VPScoutingMode.h" },
		{ "ModuleRelativePath", "Private/VPScoutingMode.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVPScoutingMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVPScoutingMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVPScoutingMode_Statics::ClassParams = {
		&UVPScoutingMode::StaticClass,
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
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UVPScoutingMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVPScoutingMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVPScoutingMode()
	{
		if (!Z_Registration_Info_UClass_UVPScoutingMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVPScoutingMode.OuterSingleton, Z_Construct_UClass_UVPScoutingMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVPScoutingMode.OuterSingleton;
	}
	template<> VIRTUALSCOUTINGEDITOR_API UClass* StaticClass<UVPScoutingMode>()
	{
		return UVPScoutingMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVPScoutingMode);
	UVPScoutingMode::~UVPScoutingMode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualScouting_Source_VirtualScoutingEditor_Private_VPScoutingMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualScouting_Source_VirtualScoutingEditor_Private_VPScoutingMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVPScoutingMode, UVPScoutingMode::StaticClass, TEXT("UVPScoutingMode"), &Z_Registration_Info_UClass_UVPScoutingMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVPScoutingMode), 1515035907U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualScouting_Source_VirtualScoutingEditor_Private_VPScoutingMode_h_3956476383(TEXT("/Script/VirtualScoutingEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualScouting_Source_VirtualScoutingEditor_Private_VPScoutingMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualScouting_Source_VirtualScoutingEditor_Private_VPScoutingMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
