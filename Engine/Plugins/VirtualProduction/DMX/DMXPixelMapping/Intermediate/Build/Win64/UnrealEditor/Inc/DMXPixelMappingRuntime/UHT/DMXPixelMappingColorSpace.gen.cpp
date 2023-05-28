// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ColorSpace/DMXPixelMappingColorSpace.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMappingColorSpace() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingColorSpace();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingColorSpace_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingRuntime();
// End Cross Module References
	void UDMXPixelMappingColorSpace::StaticRegisterNativesUDMXPixelMappingColorSpace()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXPixelMappingColorSpace);
	UClass* Z_Construct_UClass_UDMXPixelMappingColorSpace_NoRegister()
	{
		return UDMXPixelMappingColorSpace::StaticClass();
	}
	struct Z_Construct_UClass_UDMXPixelMappingColorSpace_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseWorkingColorSpaceForInput_MetaData[];
#endif
		static void NewProp_bUseWorkingColorSpaceForInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWorkingColorSpaceForInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXPixelMappingColorSpace_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingColorSpace_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n * Base class for Pixel Mapping Color Spaces. \n * Note, implementations must be thread-safe. \n */" },
		{ "IncludePath", "ColorSpace/DMXPixelMappingColorSpace.h" },
		{ "ModuleRelativePath", "Public/ColorSpace/DMXPixelMappingColorSpace.h" },
		{ "ToolTip", "Base class for Pixel Mapping Color Spaces.\nNote, implementations must be thread-safe." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingColorSpace_Statics::NewProp_bUseWorkingColorSpaceForInput_MetaData[] = {
		{ "Category", "Color Space" },
		{ "Comment", "/** When checked, uses Unreal Working Color Space for input conversion, otherwise, assumes the input is sRGB */" },
		{ "DisplayPriority", "-1" },
		{ "ModuleRelativePath", "Public/ColorSpace/DMXPixelMappingColorSpace.h" },
		{ "ToolTip", "When checked, uses Unreal Working Color Space for input conversion, otherwise, assumes the input is sRGB" },
	};
#endif
	void Z_Construct_UClass_UDMXPixelMappingColorSpace_Statics::NewProp_bUseWorkingColorSpaceForInput_SetBit(void* Obj)
	{
		((UDMXPixelMappingColorSpace*)Obj)->bUseWorkingColorSpaceForInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXPixelMappingColorSpace_Statics::NewProp_bUseWorkingColorSpaceForInput = { "bUseWorkingColorSpaceForInput", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXPixelMappingColorSpace), &Z_Construct_UClass_UDMXPixelMappingColorSpace_Statics::NewProp_bUseWorkingColorSpaceForInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingColorSpace_Statics::NewProp_bUseWorkingColorSpaceForInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_Statics::NewProp_bUseWorkingColorSpaceForInput_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXPixelMappingColorSpace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMappingColorSpace_Statics::NewProp_bUseWorkingColorSpaceForInput,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXPixelMappingColorSpace_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXPixelMappingColorSpace>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXPixelMappingColorSpace_Statics::ClassParams = {
		&UDMXPixelMappingColorSpace::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXPixelMappingColorSpace_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingColorSpace_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingColorSpace_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXPixelMappingColorSpace()
	{
		if (!Z_Registration_Info_UClass_UDMXPixelMappingColorSpace.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXPixelMappingColorSpace.OuterSingleton, Z_Construct_UClass_UDMXPixelMappingColorSpace_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXPixelMappingColorSpace.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRUNTIME_API UClass* StaticClass<UDMXPixelMappingColorSpace>()
	{
		return UDMXPixelMappingColorSpace::StaticClass();
	}
	UDMXPixelMappingColorSpace::UDMXPixelMappingColorSpace(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXPixelMappingColorSpace);
	UDMXPixelMappingColorSpace::~UDMXPixelMappingColorSpace() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_ColorSpace_DMXPixelMappingColorSpace_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_ColorSpace_DMXPixelMappingColorSpace_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXPixelMappingColorSpace, UDMXPixelMappingColorSpace::StaticClass, TEXT("UDMXPixelMappingColorSpace"), &Z_Registration_Info_UClass_UDMXPixelMappingColorSpace, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXPixelMappingColorSpace), 2336354301U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_ColorSpace_DMXPixelMappingColorSpace_h_1986472003(TEXT("/Script/DMXPixelMappingRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_ColorSpace_DMXPixelMappingColorSpace_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_ColorSpace_DMXPixelMappingColorSpace_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
