// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/MuCOE/RemapPins/CustomizableObjectNodeRemapPinsByName.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeRemapPinsByName() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeRemapPins();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByName();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByName_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectNodeRemapPinsByName::StaticRegisterNativesUCustomizableObjectNodeRemapPinsByName()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeRemapPinsByName);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByName_NoRegister()
	{
		return UCustomizableObjectNodeRemapPinsByName::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByName_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByName_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeRemapPins,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByName_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Remap pins by name.\n * \n * Remap pins by the field Pin->PinName. Output pins and input pins get remapped independently.\n * \n * Use inheritance is a node requires a set of special rules when remapping by name.\n */" },
		{ "IncludePath", "MuCOE/RemapPins/CustomizableObjectNodeRemapPinsByName.h" },
		{ "ModuleRelativePath", "Public/MuCOE/RemapPins/CustomizableObjectNodeRemapPinsByName.h" },
		{ "ToolTip", "Remap pins by name.\n\nRemap pins by the field Pin->PinName. Output pins and input pins get remapped independently.\n\nUse inheritance is a node requires a set of special rules when remapping by name." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByName_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeRemapPinsByName>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByName_Statics::ClassParams = {
		&UCustomizableObjectNodeRemapPinsByName::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByName_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByName_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByName()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeRemapPinsByName.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeRemapPinsByName.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByName_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeRemapPinsByName.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeRemapPinsByName>()
	{
		return UCustomizableObjectNodeRemapPinsByName::StaticClass();
	}
	UCustomizableObjectNodeRemapPinsByName::UCustomizableObjectNodeRemapPinsByName(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeRemapPinsByName);
	UCustomizableObjectNodeRemapPinsByName::~UCustomizableObjectNodeRemapPinsByName() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_RemapPins_CustomizableObjectNodeRemapPinsByName_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_RemapPins_CustomizableObjectNodeRemapPinsByName_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByName, UCustomizableObjectNodeRemapPinsByName::StaticClass, TEXT("UCustomizableObjectNodeRemapPinsByName"), &Z_Registration_Info_UClass_UCustomizableObjectNodeRemapPinsByName, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeRemapPinsByName), 3228634353U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_RemapPins_CustomizableObjectNodeRemapPinsByName_h_1066767846(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_RemapPins_CustomizableObjectNodeRemapPinsByName_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_RemapPins_CustomizableObjectNodeRemapPinsByName_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
