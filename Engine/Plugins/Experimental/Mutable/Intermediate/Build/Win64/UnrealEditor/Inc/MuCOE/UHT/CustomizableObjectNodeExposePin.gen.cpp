// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeExposePin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeExposePin() {}
// Cross Module References
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNode();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeExposePin();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeExposePin_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectNodeExposePin::StaticRegisterNativesUCustomizableObjectNodeExposePin()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeExposePin);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeExposePin_NoRegister()
	{
		return UCustomizableObjectNodeExposePin::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeExposePin_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PinType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeExposePin_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNode,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeExposePin_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeExposePin.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeExposePin.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeExposePin_Statics::NewProp_PinType_MetaData[] = {
		{ "Comment", "// This is actually PinCategory\n" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeExposePin.h" },
		{ "ToolTip", "This is actually PinCategory" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCustomizableObjectNodeExposePin_Statics::NewProp_PinType = { "PinType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeExposePin, PinType), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeExposePin_Statics::NewProp_PinType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeExposePin_Statics::NewProp_PinType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeExposePin_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeExposePin.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeExposePin_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeExposePin, Name), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeExposePin_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeExposePin_Statics::NewProp_Name_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeExposePin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeExposePin_Statics::NewProp_PinType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeExposePin_Statics::NewProp_Name,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeExposePin_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeExposePin>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeExposePin_Statics::ClassParams = {
		&UCustomizableObjectNodeExposePin::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeExposePin_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeExposePin_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeExposePin_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeExposePin_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeExposePin()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeExposePin.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeExposePin.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeExposePin_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeExposePin.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeExposePin>()
	{
		return UCustomizableObjectNodeExposePin::StaticClass();
	}
	UCustomizableObjectNodeExposePin::UCustomizableObjectNodeExposePin(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeExposePin);
	UCustomizableObjectNodeExposePin::~UCustomizableObjectNodeExposePin() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeExposePin_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeExposePin_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeExposePin, UCustomizableObjectNodeExposePin::StaticClass, TEXT("UCustomizableObjectNodeExposePin"), &Z_Registration_Info_UClass_UCustomizableObjectNodeExposePin, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeExposePin), 607587455U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeExposePin_h_3760217768(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeExposePin_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeExposePin_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
