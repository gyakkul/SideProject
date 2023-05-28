// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/MuCOE/RemapPins/CustomizableObjectNodeRemapPins.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeRemapPins() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeRemapPins();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeRemapPins_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectNodeRemapPins::StaticRegisterNativesUCustomizableObjectNodeRemapPins()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeRemapPins);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeRemapPins_NoRegister()
	{
		return UCustomizableObjectNodeRemapPins::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeRemapPins_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeRemapPins_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeRemapPins_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Remap pins action interface.\n * \n * Do not implement any functions or members directly, use inheritance. As an example, see UCustomizableObjectNodeRemapPinsByName class.\n * If data needs to be passed between ReconstructNode and AllocateDefaultPins, use the derived class context to save it.\n */" },
		{ "IncludePath", "MuCOE/RemapPins/CustomizableObjectNodeRemapPins.h" },
		{ "ModuleRelativePath", "Public/MuCOE/RemapPins/CustomizableObjectNodeRemapPins.h" },
		{ "ToolTip", "Remap pins action interface.\n\nDo not implement any functions or members directly, use inheritance. As an example, see UCustomizableObjectNodeRemapPinsByName class.\nIf data needs to be passed between ReconstructNode and AllocateDefaultPins, use the derived class context to save it." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeRemapPins_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeRemapPins>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeRemapPins_Statics::ClassParams = {
		&UCustomizableObjectNodeRemapPins::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeRemapPins_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeRemapPins_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeRemapPins()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeRemapPins.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeRemapPins.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeRemapPins_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeRemapPins.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeRemapPins>()
	{
		return UCustomizableObjectNodeRemapPins::StaticClass();
	}
	UCustomizableObjectNodeRemapPins::UCustomizableObjectNodeRemapPins(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeRemapPins);
	UCustomizableObjectNodeRemapPins::~UCustomizableObjectNodeRemapPins() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_RemapPins_CustomizableObjectNodeRemapPins_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_RemapPins_CustomizableObjectNodeRemapPins_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeRemapPins, UCustomizableObjectNodeRemapPins::StaticClass, TEXT("UCustomizableObjectNodeRemapPins"), &Z_Registration_Info_UClass_UCustomizableObjectNodeRemapPins, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeRemapPins), 3396731226U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_RemapPins_CustomizableObjectNodeRemapPins_h_1841392953(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_RemapPins_CustomizableObjectNodeRemapPins_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Public_MuCOE_RemapPins_CustomizableObjectNodeRemapPins_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
