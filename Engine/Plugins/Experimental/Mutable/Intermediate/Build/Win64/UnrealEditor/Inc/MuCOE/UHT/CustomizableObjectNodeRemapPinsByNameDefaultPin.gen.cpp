// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/MuCOE/RemapPins/CustomizableObjectNodeRemapPinsByNameDefaultPin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeRemapPinsByNameDefaultPin() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByName();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByNameDefaultPin();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByNameDefaultPin_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectNodeRemapPinsByNameDefaultPin::StaticRegisterNativesUCustomizableObjectNodeRemapPinsByNameDefaultPin()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeRemapPinsByNameDefaultPin);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByNameDefaultPin_NoRegister()
	{
		return UCustomizableObjectNodeRemapPinsByNameDefaultPin::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByNameDefaultPin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByNameDefaultPin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByName,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByNameDefaultPin_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** If a default pin is given, remap it to the first pin. Otherwise, remap pins by name as usual. */" },
		{ "IncludePath", "MuCOE/RemapPins/CustomizableObjectNodeRemapPinsByNameDefaultPin.h" },
		{ "ModuleRelativePath", "Public/MuCOE/RemapPins/CustomizableObjectNodeRemapPinsByNameDefaultPin.h" },
		{ "ToolTip", "If a default pin is given, remap it to the first pin. Otherwise, remap pins by name as usual." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByNameDefaultPin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeRemapPinsByNameDefaultPin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByNameDefaultPin_Statics::ClassParams = {
		&UCustomizableObjectNodeRemapPinsByNameDefaultPin::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByNameDefaultPin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByNameDefaultPin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByNameDefaultPin()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeRemapPinsByNameDefaultPin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeRemapPinsByNameDefaultPin.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByNameDefaultPin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeRemapPinsByNameDefaultPin.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeRemapPinsByNameDefaultPin>()
	{
		return UCustomizableObjectNodeRemapPinsByNameDefaultPin::StaticClass();
	}
	UCustomizableObjectNodeRemapPinsByNameDefaultPin::UCustomizableObjectNodeRemapPinsByNameDefaultPin(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeRemapPinsByNameDefaultPin);
	UCustomizableObjectNodeRemapPinsByNameDefaultPin::~UCustomizableObjectNodeRemapPinsByNameDefaultPin() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_RemapPins_CustomizableObjectNodeRemapPinsByNameDefaultPin_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_RemapPins_CustomizableObjectNodeRemapPinsByNameDefaultPin_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByNameDefaultPin, UCustomizableObjectNodeRemapPinsByNameDefaultPin::StaticClass, TEXT("UCustomizableObjectNodeRemapPinsByNameDefaultPin"), &Z_Registration_Info_UClass_UCustomizableObjectNodeRemapPinsByNameDefaultPin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeRemapPinsByNameDefaultPin), 2526242832U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_RemapPins_CustomizableObjectNodeRemapPinsByNameDefaultPin_h_1268255160(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_RemapPins_CustomizableObjectNodeRemapPinsByNameDefaultPin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_RemapPins_CustomizableObjectNodeRemapPinsByNameDefaultPin_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
