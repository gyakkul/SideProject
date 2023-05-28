// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeFloatSwitch.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeFloatSwitch() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeFloatSwitch();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeFloatSwitch_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeSwitchBase();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectNodeFloatSwitch::StaticRegisterNativesUCustomizableObjectNodeFloatSwitch()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeFloatSwitch);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeFloatSwitch_NoRegister()
	{
		return UCustomizableObjectNodeFloatSwitch::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeFloatSwitch_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeFloatSwitch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeSwitchBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeFloatSwitch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeFloatSwitch.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeFloatSwitch.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeFloatSwitch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeFloatSwitch>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeFloatSwitch_Statics::ClassParams = {
		&UCustomizableObjectNodeFloatSwitch::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeFloatSwitch_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeFloatSwitch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeFloatSwitch()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeFloatSwitch.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeFloatSwitch.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeFloatSwitch_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeFloatSwitch.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeFloatSwitch>()
	{
		return UCustomizableObjectNodeFloatSwitch::StaticClass();
	}
	UCustomizableObjectNodeFloatSwitch::UCustomizableObjectNodeFloatSwitch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeFloatSwitch);
	UCustomizableObjectNodeFloatSwitch::~UCustomizableObjectNodeFloatSwitch() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectNodeFloatSwitch)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeFloatSwitch_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeFloatSwitch_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeFloatSwitch, UCustomizableObjectNodeFloatSwitch::StaticClass, TEXT("UCustomizableObjectNodeFloatSwitch"), &Z_Registration_Info_UClass_UCustomizableObjectNodeFloatSwitch, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeFloatSwitch), 3942236635U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeFloatSwitch_h_3492522352(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeFloatSwitch_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeFloatSwitch_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
