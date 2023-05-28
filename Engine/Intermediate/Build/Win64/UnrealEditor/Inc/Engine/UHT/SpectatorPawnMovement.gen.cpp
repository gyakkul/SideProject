// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpectatorPawnMovement() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UFloatingPawnMovement();
	ENGINE_API UClass* Z_Construct_UClass_USpectatorPawnMovement();
	ENGINE_API UClass* Z_Construct_UClass_USpectatorPawnMovement_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USpectatorPawnMovement::StaticRegisterNativesUSpectatorPawnMovement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USpectatorPawnMovement);
	UClass* Z_Construct_UClass_USpectatorPawnMovement_NoRegister()
	{
		return USpectatorPawnMovement::StaticClass();
	}
	struct Z_Construct_UClass_USpectatorPawnMovement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreTimeDilation_MetaData[];
#endif
		static void NewProp_bIgnoreTimeDilation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreTimeDilation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpectatorPawnMovement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFloatingPawnMovement,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectatorPawnMovement_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameFramework/SpectatorPawnMovement.h" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpectatorPawnMovement.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpectatorPawnMovement_Statics::NewProp_bIgnoreTimeDilation_MetaData[] = {
		{ "Comment", "/** If true, component moves at full speed no matter the time dilation. Default is false. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/SpectatorPawnMovement.h" },
		{ "ToolTip", "If true, component moves at full speed no matter the time dilation. Default is false." },
	};
#endif
	void Z_Construct_UClass_USpectatorPawnMovement_Statics::NewProp_bIgnoreTimeDilation_SetBit(void* Obj)
	{
		((USpectatorPawnMovement*)Obj)->bIgnoreTimeDilation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpectatorPawnMovement_Statics::NewProp_bIgnoreTimeDilation = { "bIgnoreTimeDilation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USpectatorPawnMovement), &Z_Construct_UClass_USpectatorPawnMovement_Statics::NewProp_bIgnoreTimeDilation_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpectatorPawnMovement_Statics::NewProp_bIgnoreTimeDilation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpectatorPawnMovement_Statics::NewProp_bIgnoreTimeDilation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpectatorPawnMovement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpectatorPawnMovement_Statics::NewProp_bIgnoreTimeDilation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpectatorPawnMovement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpectatorPawnMovement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USpectatorPawnMovement_Statics::ClassParams = {
		&USpectatorPawnMovement::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpectatorPawnMovement_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpectatorPawnMovement_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USpectatorPawnMovement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpectatorPawnMovement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpectatorPawnMovement()
	{
		if (!Z_Registration_Info_UClass_USpectatorPawnMovement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USpectatorPawnMovement.OuterSingleton, Z_Construct_UClass_USpectatorPawnMovement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USpectatorPawnMovement.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USpectatorPawnMovement>()
	{
		return USpectatorPawnMovement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpectatorPawnMovement);
	USpectatorPawnMovement::~USpectatorPawnMovement() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawnMovement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawnMovement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USpectatorPawnMovement, USpectatorPawnMovement::StaticClass, TEXT("USpectatorPawnMovement"), &Z_Registration_Info_UClass_USpectatorPawnMovement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USpectatorPawnMovement), 1861982933U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawnMovement_h_873265696(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawnMovement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_SpectatorPawnMovement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
