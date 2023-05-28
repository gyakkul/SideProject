// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/MuCOE/RemapPins/CustomizableObjectNodeRemapPinsByPosition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeRemapPinsByPosition() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeRemapPins();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByPosition();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByPosition_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectNodeRemapPinsByPosition::StaticRegisterNativesUCustomizableObjectNodeRemapPinsByPosition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeRemapPinsByPosition);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByPosition_NoRegister()
	{
		return UCustomizableObjectNodeRemapPinsByPosition::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByPosition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByPosition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeRemapPins,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByPosition_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Remap pins by position.\n *\n * Remap pins by their relative order. Output pins and input pins get remapped independently.\n *\n * Use inheritance is a node requires a set of special rules when remapping by position.\n */" },
		{ "IncludePath", "MuCOE/RemapPins/CustomizableObjectNodeRemapPinsByPosition.h" },
		{ "ModuleRelativePath", "Public/MuCOE/RemapPins/CustomizableObjectNodeRemapPinsByPosition.h" },
		{ "ToolTip", "Remap pins by position.\n\nRemap pins by their relative order. Output pins and input pins get remapped independently.\n\nUse inheritance is a node requires a set of special rules when remapping by position." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByPosition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeRemapPinsByPosition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByPosition_Statics::ClassParams = {
		&UCustomizableObjectNodeRemapPinsByPosition::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByPosition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByPosition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByPosition()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeRemapPinsByPosition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeRemapPinsByPosition.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByPosition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeRemapPinsByPosition.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeRemapPinsByPosition>()
	{
		return UCustomizableObjectNodeRemapPinsByPosition::StaticClass();
	}
	UCustomizableObjectNodeRemapPinsByPosition::UCustomizableObjectNodeRemapPinsByPosition(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeRemapPinsByPosition);
	UCustomizableObjectNodeRemapPinsByPosition::~UCustomizableObjectNodeRemapPinsByPosition() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_RemapPins_CustomizableObjectNodeRemapPinsByPosition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_RemapPins_CustomizableObjectNodeRemapPinsByPosition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByPosition, UCustomizableObjectNodeRemapPinsByPosition::StaticClass, TEXT("UCustomizableObjectNodeRemapPinsByPosition"), &Z_Registration_Info_UClass_UCustomizableObjectNodeRemapPinsByPosition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeRemapPinsByPosition), 2558629103U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_RemapPins_CustomizableObjectNodeRemapPinsByPosition_h_1859715578(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_RemapPins_CustomizableObjectNodeRemapPinsByPosition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_RemapPins_CustomizableObjectNodeRemapPinsByPosition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
