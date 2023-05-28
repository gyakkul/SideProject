// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMXPixelMapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXPixelMapping() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMapping();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMapping_NoRegister();
	DMXPIXELMAPPINGRUNTIME_API UClass* Z_Construct_UClass_UDMXPixelMappingRootComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXPixelMappingRuntime();
// End Cross Module References
	DEFINE_FUNCTION(UDMXPixelMapping::execGetRootComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDMXPixelMappingRootComponent**)Z_Param__Result=P_THIS->GetRootComponent();
		P_NATIVE_END;
	}
	void UDMXPixelMapping::StaticRegisterNativesUDMXPixelMapping()
	{
		UClass* Class = UDMXPixelMapping::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetRootComponent", &UDMXPixelMapping::execGetRootComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDMXPixelMapping_GetRootComponent_Statics
	{
		struct DMXPixelMapping_eventGetRootComponent_Parms
		{
			UDMXPixelMappingRootComponent* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXPixelMapping_GetRootComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXPixelMapping_eventGetRootComponent_Parms, ReturnValue), Z_Construct_UClass_UDMXPixelMappingRootComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXPixelMapping_GetRootComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXPixelMapping_GetRootComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXPixelMapping_GetRootComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX|PixelMapping" },
		{ "Comment", "/** Get root component of the component tree */" },
		{ "ModuleRelativePath", "Public/DMXPixelMapping.h" },
		{ "ToolTip", "Get root component of the component tree" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXPixelMapping_GetRootComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXPixelMapping, nullptr, "GetRootComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXPixelMapping_GetRootComponent_Statics::DMXPixelMapping_eventGetRootComponent_Parms), Z_Construct_UFunction_UDMXPixelMapping_GetRootComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMapping_GetRootComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXPixelMapping_GetRootComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXPixelMapping_GetRootComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXPixelMapping_GetRootComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXPixelMapping_GetRootComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXPixelMapping);
	UClass* Z_Construct_UClass_UDMXPixelMapping_NoRegister()
	{
		return UDMXPixelMapping::StaticClass();
	}
	struct Z_Construct_UClass_UDMXPixelMapping_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RootComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThumbnailImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ThumbnailImage;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXPixelMapping_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXPixelMappingRuntime,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDMXPixelMapping_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDMXPixelMapping_GetRootComponent, "GetRootComponent" }, // 2735260816
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMapping_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Public container of Pixel Mapping object and it using for asset\n */" },
		{ "IncludePath", "DMXPixelMapping.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DMXPixelMapping.h" },
		{ "ToolTip", "Public container of Pixel Mapping object and it using for asset" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMapping_Statics::NewProp_RootComponent_MetaData[] = {
		{ "Comment", "/** Holds the reference to root component */" },
		{ "ModuleRelativePath", "Public/DMXPixelMapping.h" },
		{ "ToolTip", "Holds the reference to root component" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXPixelMapping_Statics::NewProp_RootComponent = { "RootComponent", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMapping, RootComponent), Z_Construct_UClass_UDMXPixelMappingRootComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMapping_Statics::NewProp_RootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMapping_Statics::NewProp_RootComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXPixelMapping_Statics::NewProp_ThumbnailImage_MetaData[] = {
		{ "Comment", "/** Holds the Thumbnail for asset */" },
		{ "ModuleRelativePath", "Public/DMXPixelMapping.h" },
		{ "ToolTip", "Holds the Thumbnail for asset" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDMXPixelMapping_Statics::NewProp_ThumbnailImage = { "ThumbnailImage", nullptr, (EPropertyFlags)0x0014000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXPixelMapping, ThumbnailImage), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMapping_Statics::NewProp_ThumbnailImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMapping_Statics::NewProp_ThumbnailImage_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXPixelMapping_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMapping_Statics::NewProp_RootComponent,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXPixelMapping_Statics::NewProp_ThumbnailImage,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXPixelMapping_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXPixelMapping>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXPixelMapping_Statics::ClassParams = {
		&UDMXPixelMapping::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDMXPixelMapping_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMapping_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXPixelMapping_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXPixelMapping_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXPixelMapping()
	{
		if (!Z_Registration_Info_UClass_UDMXPixelMapping.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXPixelMapping.OuterSingleton, Z_Construct_UClass_UDMXPixelMapping_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXPixelMapping.OuterSingleton;
	}
	template<> DMXPIXELMAPPINGRUNTIME_API UClass* StaticClass<UDMXPixelMapping>()
	{
		return UDMXPixelMapping::StaticClass();
	}
	UDMXPixelMapping::UDMXPixelMapping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXPixelMapping);
	UDMXPixelMapping::~UDMXPixelMapping() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_DMXPixelMapping_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_DMXPixelMapping_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXPixelMapping, UDMXPixelMapping::StaticClass, TEXT("UDMXPixelMapping"), &Z_Registration_Info_UClass_UDMXPixelMapping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXPixelMapping), 2470286470U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_DMXPixelMapping_h_2085154488(TEXT("/Script/DMXPixelMappingRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_DMXPixelMapping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXPixelMapping_Source_DMXPixelMappingRuntime_Public_DMXPixelMapping_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
