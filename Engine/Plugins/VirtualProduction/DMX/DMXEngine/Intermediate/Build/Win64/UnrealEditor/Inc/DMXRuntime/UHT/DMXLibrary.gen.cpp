// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Library/DMXLibrary.h"
#include "IO/DMXInputPortReference.h"
#include "IO/DMXOutputPortReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXLibrary() {}
// Cross Module References
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXInputPortReference();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXOutputPortReference();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXEntity_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXLibrary();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXLibrary_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRGeneralSceneDescription_NoRegister();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXObjectBase();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXLibraryPortReferences();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXLibraryPortReferences;
class UScriptStruct* FDMXLibraryPortReferences::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXLibraryPortReferences.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXLibraryPortReferences.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXLibraryPortReferences, (UObject*)Z_Construct_UPackage__Script_DMXRuntime(), TEXT("DMXLibraryPortReferences"));
	}
	return Z_Registration_Info_UScriptStruct_DMXLibraryPortReferences.OuterSingleton;
}
template<> DMXRUNTIME_API UScriptStruct* StaticStruct<FDMXLibraryPortReferences>()
{
	return FDMXLibraryPortReferences::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXLibraryPortReferences_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputPortReferences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPortReferences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InputPortReferences;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutputPortReferences_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputPortReferences_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutputPortReferences;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXLibraryPortReferences_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Custom struct of in put and output port references for custom details customization with an enabled state */" },
		{ "ModuleRelativePath", "Public/Library/DMXLibrary.h" },
		{ "ToolTip", "Custom struct of in put and output port references for custom details customization with an enabled state" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXLibraryPortReferences_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXLibraryPortReferences>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDMXLibraryPortReferences_Statics::NewProp_InputPortReferences_Inner = { "InputPortReferences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXInputPortReference, METADATA_PARAMS(nullptr, 0) }; // 3197363453
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXLibraryPortReferences_Statics::NewProp_InputPortReferences_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Map of input port references of a Library */" },
		{ "DisplayName", "Input Ports" },
		{ "ModuleRelativePath", "Public/Library/DMXLibrary.h" },
		{ "ToolTip", "Map of input port references of a Library" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDMXLibraryPortReferences_Statics::NewProp_InputPortReferences = { "InputPortReferences", nullptr, (EPropertyFlags)0x0010000400000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXLibraryPortReferences, InputPortReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXLibraryPortReferences_Statics::NewProp_InputPortReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXLibraryPortReferences_Statics::NewProp_InputPortReferences_MetaData)) }; // 3197363453
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDMXLibraryPortReferences_Statics::NewProp_OutputPortReferences_Inner = { "OutputPortReferences", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDMXOutputPortReference, METADATA_PARAMS(nullptr, 0) }; // 3396692900
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXLibraryPortReferences_Statics::NewProp_OutputPortReferences_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Output ports of the Library of a Library */" },
		{ "DisplayName", "Output Ports" },
		{ "ModuleRelativePath", "Public/Library/DMXLibrary.h" },
		{ "ToolTip", "Output ports of the Library of a Library" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDMXLibraryPortReferences_Statics::NewProp_OutputPortReferences = { "OutputPortReferences", nullptr, (EPropertyFlags)0x0010000400000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXLibraryPortReferences, OutputPortReferences), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXLibraryPortReferences_Statics::NewProp_OutputPortReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXLibraryPortReferences_Statics::NewProp_OutputPortReferences_MetaData)) }; // 3396692900
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXLibraryPortReferences_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXLibraryPortReferences_Statics::NewProp_InputPortReferences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXLibraryPortReferences_Statics::NewProp_InputPortReferences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXLibraryPortReferences_Statics::NewProp_OutputPortReferences_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXLibraryPortReferences_Statics::NewProp_OutputPortReferences,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXLibraryPortReferences_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
		nullptr,
		&NewStructOps,
		"DMXLibraryPortReferences",
		sizeof(FDMXLibraryPortReferences),
		alignof(FDMXLibraryPortReferences),
		Z_Construct_UScriptStruct_FDMXLibraryPortReferences_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXLibraryPortReferences_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXLibraryPortReferences_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXLibraryPortReferences_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXLibraryPortReferences()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXLibraryPortReferences.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXLibraryPortReferences.InnerSingleton, Z_Construct_UScriptStruct_FDMXLibraryPortReferences_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXLibraryPortReferences.InnerSingleton;
	}
	void UDMXLibrary::StaticRegisterNativesUDMXLibrary()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXLibrary);
	UClass* Z_Construct_UClass_UDMXLibrary_NoRegister()
	{
		return UDMXLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UDMXLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PortReferences_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PortReferences;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Entities_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Entities_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Entities;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneralSceneDescription_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GeneralSceneDescription;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXLibrary_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DMX" },
		{ "BlueprintType", "true" },
		{ "IncludePath", "Library/DMXLibrary.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Library/DMXLibrary.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXLibrary_Statics::NewProp_PortReferences_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Input ports of the Library */" },
		{ "ModuleRelativePath", "Public/Library/DMXLibrary.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "Input ports of the Library" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXLibrary_Statics::NewProp_PortReferences = { "PortReferences", nullptr, (EPropertyFlags)0x0020080400000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXLibrary, PortReferences), Z_Construct_UScriptStruct_FDMXLibraryPortReferences, METADATA_PARAMS(Z_Construct_UClass_UDMXLibrary_Statics::NewProp_PortReferences_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXLibrary_Statics::NewProp_PortReferences_MetaData)) }; // 730131895
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXLibrary_Statics::NewProp_Entities_Inner = { "Entities", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDMXEntity_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXLibrary_Statics::NewProp_Entities_MetaData[] = {
		{ "Comment", "/** All Fixture Types and Fixture Patches in the Library */" },
		{ "ModuleRelativePath", "Public/Library/DMXLibrary.h" },
		{ "ToolTip", "All Fixture Types and Fixture Patches in the Library" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDMXLibrary_Statics::NewProp_Entities = { "Entities", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXLibrary, Entities), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDMXLibrary_Statics::NewProp_Entities_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXLibrary_Statics::NewProp_Entities_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXLibrary_Statics::NewProp_GeneralSceneDescription_MetaData[] = {
		{ "Comment", "/** The General Scene Description of this Library */" },
		{ "ModuleRelativePath", "Public/Library/DMXLibrary.h" },
		{ "ToolTip", "The General Scene Description of this Library" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXLibrary_Statics::NewProp_GeneralSceneDescription = { "GeneralSceneDescription", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXLibrary, GeneralSceneDescription), Z_Construct_UClass_UDMXMVRGeneralSceneDescription_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXLibrary_Statics::NewProp_GeneralSceneDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXLibrary_Statics::NewProp_GeneralSceneDescription_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXLibrary_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXLibrary_Statics::NewProp_PortReferences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXLibrary_Statics::NewProp_Entities_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXLibrary_Statics::NewProp_Entities,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXLibrary_Statics::NewProp_GeneralSceneDescription,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXLibrary_Statics::ClassParams = {
		&UDMXLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXLibrary_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXLibrary_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXLibrary()
	{
		if (!Z_Registration_Info_UClass_UDMXLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXLibrary.OuterSingleton, Z_Construct_UClass_UDMXLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXLibrary.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXLibrary>()
	{
		return UDMXLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXLibrary);
	UDMXLibrary::~UDMXLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXLibrary_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXLibrary_h_Statics::ScriptStructInfo[] = {
		{ FDMXLibraryPortReferences::StaticStruct, Z_Construct_UScriptStruct_FDMXLibraryPortReferences_Statics::NewStructOps, TEXT("DMXLibraryPortReferences"), &Z_Registration_Info_UScriptStruct_DMXLibraryPortReferences, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXLibraryPortReferences), 730131895U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXLibrary, UDMXLibrary::StaticClass, TEXT("UDMXLibrary"), &Z_Registration_Info_UClass_UDMXLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXLibrary), 853666618U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXLibrary_h_1992886201(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXLibrary_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXLibrary_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_Library_DMXLibrary_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
