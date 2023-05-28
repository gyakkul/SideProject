// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/DMXPixelMappingOutputDMXComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMappingOutputDMXComponent() {}
// Cross Module References
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingOutputComponent();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UDMXPixelMappingOutputDMXComponent::execRenderWithInputAndSendDMX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RenderWithInputAndSendDMX();
		P_NATIVE_END;
	}
	void UDMXPixelMappingOutputDMXComponent::StaticRegisterNativesUDMXPixelMappingOutputDMXComponent()
	{
		UClass* Class = UDMXPixelMappingOutputDMXComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "RenderWithInputAndSendDMX", &UDMXPixelMappingOutputDMXComponent::execRenderWithInputAndSendDMX },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDMXPixelMappingOutputDMXComponent_RenderWithInputAndSendDMX_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXPixelMappingOutputDMXComponent_RenderWithInputAndSendDMX_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|PixelMapping" },
		{ "Comment", "/** Render input texture for downsample texture, donwsample and send DMX for this component */" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingOutputDMXComponent.h" },
		{ "ToolTip", "Render input texture for downsample texture, donwsample and send DMX for this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXPixelMappingOutputDMXComponent_RenderWithInputAndSendDMX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent, nullptr, "RenderWithInputAndSendDMX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXPixelMappingOutputDMXComponent_RenderWithInputAndSendDMX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMappingOutputDMXComponent_RenderWithInputAndSendDMX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXPixelMappingOutputDMXComponent_RenderWithInputAndSendDMX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXPixelMappingOutputDMXComponent_RenderWithInputAndSendDMX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXPixelMappingOutputDMXComponent);
	UClass* Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_NoRegister()
	{
		return UDMXPixelMappingOutputDMXComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXPixelMappingOutputComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDMXPixelMappingOutputDMXComponent_RenderWithInputAndSendDMX, "RenderWithInputAndSendDMX" }, // 2895160822
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Parent class for DMX sending components\n */" },
		{ "IncludePath", "Components/DMXPixelMappingOutputDMXComponent.h" },
		{ "ModuleRelativePath", "Public/Components/DMXPixelMappingOutputDMXComponent.h" },
		{ "ToolTip", "Parent class for DMX sending components" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXPixelMappingOutputDMXComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::ClassParams = {
		&UDMXPixelMappingOutputDMXComponent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent()
	{
		if (!Z_Registration_Info_UClass_UDMXPixelMappingOutputDMXComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXPixelMappingOutputDMXComponent.OuterSingleton, Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXPixelMappingOutputDMXComponent.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRUNTIME_API UClass* StaticClass<UDMXPixelMappingOutputDMXComponent>()
	{
		return UDMXPixelMappingOutputDMXComponent::StaticClass();
	}
	UDMXPixelMappingOutputDMXComponent::UDMXPixelMappingOutputDMXComponent() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXPixelMappingOutputDMXComponent);
	UDMXPixelMappingOutputDMXComponent::~UDMXPixelMappingOutputDMXComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingOutputDMXComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingOutputDMXComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXPixelMappingOutputDMXComponent, UDMXPixelMappingOutputDMXComponent::StaticClass, TEXT("UDMXPixelMappingOutputDMXComponent"), &Z_Registration_Info_UClass_UDMXPixelMappingOutputDMXComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXPixelMappingOutputDMXComponent), 1554354169U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingOutputDMXComponent_h_2616519291(TEXT("/Script/DMXPixelMappingRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingOutputDMXComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_Components_DMXPixelMappingOutputDMXComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
