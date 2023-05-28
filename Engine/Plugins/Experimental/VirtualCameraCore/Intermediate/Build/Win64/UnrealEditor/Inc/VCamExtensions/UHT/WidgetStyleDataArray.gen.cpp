// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Styling/WidgetStyleDataArray.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetStyleDataArray() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_VCamExtensions();
	VCAMEXTENSIONS_API UClass* Z_Construct_UClass_UWidgetStyleData_NoRegister();
	VCAMEXTENSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetStyleDataArray();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetStyleDataArray;
class UScriptStruct* FWidgetStyleDataArray::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetStyleDataArray.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetStyleDataArray.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetStyleDataArray, (UObject*)Z_Construct_UPackage__Script_VCamExtensions(), TEXT("WidgetStyleDataArray"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetStyleDataArray.OuterSingleton;
}
template<> VCAMEXTENSIONS_API UScriptStruct* StaticStruct<FWidgetStyleDataArray>()
{
	return FWidgetStyleDataArray::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWidgetStyleDataArray_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Styles_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Styles_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Styles_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Styles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetStyleDataArray_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Styling/WidgetStyleDataArray.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetStyleDataArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetStyleDataArray>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetStyleDataArray_Statics::NewProp_Styles_Inner_MetaData[] = {
		{ "Category", "Virtual Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Styling/WidgetStyleDataArray.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FWidgetStyleDataArray_Statics::NewProp_Styles_Inner = { "Styles", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWidgetStyleData_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetStyleDataArray_Statics::NewProp_Styles_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetStyleDataArray_Statics::NewProp_Styles_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetStyleDataArray_Statics::NewProp_Styles_MetaData[] = {
		{ "Category", "Virtual Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Styling/WidgetStyleDataArray.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FWidgetStyleDataArray_Statics::NewProp_Styles = { "Styles", nullptr, (EPropertyFlags)0x0014008000000009, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetStyleDataArray, Styles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetStyleDataArray_Statics::NewProp_Styles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetStyleDataArray_Statics::NewProp_Styles_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetStyleDataArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetStyleDataArray_Statics::NewProp_Styles_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetStyleDataArray_Statics::NewProp_Styles,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetStyleDataArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VCamExtensions,
		nullptr,
		&NewStructOps,
		"WidgetStyleDataArray",
		sizeof(FWidgetStyleDataArray),
		alignof(FWidgetStyleDataArray),
		Z_Construct_UScriptStruct_FWidgetStyleDataArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetStyleDataArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetStyleDataArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetStyleDataArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetStyleDataArray()
	{
		if (!Z_Registration_Info_UScriptStruct_WidgetStyleDataArray.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetStyleDataArray.InnerSingleton, Z_Construct_UScriptStruct_FWidgetStyleDataArray_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WidgetStyleDataArray.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_WidgetStyleDataArray_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_WidgetStyleDataArray_h_Statics::ScriptStructInfo[] = {
		{ FWidgetStyleDataArray::StaticStruct, Z_Construct_UScriptStruct_FWidgetStyleDataArray_Statics::NewStructOps, TEXT("WidgetStyleDataArray"), &Z_Registration_Info_UScriptStruct_WidgetStyleDataArray, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetStyleDataArray), 1552283863U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_WidgetStyleDataArray_h_1193753987(TEXT("/Script/VCamExtensions"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_WidgetStyleDataArray_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamExtensions_Public_Styling_WidgetStyleDataArray_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
