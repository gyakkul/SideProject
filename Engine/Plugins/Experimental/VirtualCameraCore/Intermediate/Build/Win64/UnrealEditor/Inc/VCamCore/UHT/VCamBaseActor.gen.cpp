// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VCamBaseActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamBaseActor() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor();
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UClass* Z_Construct_UClass_AVCamBaseActor();
	VCAMCORE_API UClass* Z_Construct_UClass_AVCamBaseActor_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVCamBaseActor::execGetVCamComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVCamComponent**)Z_Param__Result=P_THIS->GetVCamComponent();
		P_NATIVE_END;
	}
	void AVCamBaseActor::StaticRegisterNativesAVCamBaseActor()
	{
		UClass* Class = AVCamBaseActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVCamComponent", &AVCamBaseActor::execGetVCamComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVCamBaseActor_GetVCamComponent_Statics
	{
		struct VCamBaseActor_eventGetVCamComponent_Parms
		{
			UVCamComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVCamBaseActor_GetVCamComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVCamBaseActor_GetVCamComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamBaseActor_eventGetVCamComponent_Parms, ReturnValue), Z_Construct_UClass_UVCamComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AVCamBaseActor_GetVCamComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVCamBaseActor_GetVCamComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVCamBaseActor_GetVCamComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVCamBaseActor_GetVCamComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVCamBaseActor_GetVCamComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "VCam" },
		{ "ModuleRelativePath", "Public/VCamBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVCamBaseActor_GetVCamComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVCamBaseActor, nullptr, "GetVCamComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_AVCamBaseActor_GetVCamComponent_Statics::VCamBaseActor_eventGetVCamComponent_Parms), Z_Construct_UFunction_AVCamBaseActor_GetVCamComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVCamBaseActor_GetVCamComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVCamBaseActor_GetVCamComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVCamBaseActor_GetVCamComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVCamBaseActor_GetVCamComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVCamBaseActor_GetVCamComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVCamBaseActor);
	UClass* Z_Construct_UClass_AVCamBaseActor_NoRegister()
	{
		return AVCamBaseActor::StaticClass();
	}
	struct Z_Construct_UClass_AVCamBaseActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VCamComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VCamComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVCamBaseActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACineCameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVCamBaseActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVCamBaseActor_GetVCamComponent, "GetVCamComponent" }, // 3236274555
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVCamBaseActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Utility base class which sets up a UVCamComponent with a Cine Camera.\n * Acts as base class for Blueprint VCamActor, which has some default properties set already. Therefore Abstract and NotPlaceable. \n */" },
		{ "HideCategories", "Input VCamComponent SceneComponent Input Rendering AutoPlayerActivation Input Rendering" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "VCamBaseActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VCamBaseActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Utility base class which sets up a UVCamComponent with a Cine Camera.\nActs as base class for Blueprint VCamActor, which has some default properties set already. Therefore Abstract and NotPlaceable." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVCamBaseActor_Statics::NewProp_VCamComponent_MetaData[] = {
		{ "BlueprintGetter", "GetVCamComponent" },
		{ "Category", "VCamBaseActor" },
		{ "DisplayAfter", "AutoActivateForPlayer" },
		{ "DisplayPriority", "1" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VCamBaseActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVCamBaseActor_Statics::NewProp_VCamComponent = { "VCamComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVCamBaseActor, VCamComponent), Z_Construct_UClass_UVCamComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVCamBaseActor_Statics::NewProp_VCamComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVCamBaseActor_Statics::NewProp_VCamComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVCamBaseActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVCamBaseActor_Statics::NewProp_VCamComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVCamBaseActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVCamBaseActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVCamBaseActor_Statics::ClassParams = {
		&AVCamBaseActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVCamBaseActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVCamBaseActor_Statics::PropPointers),
		0,
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AVCamBaseActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVCamBaseActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVCamBaseActor()
	{
		if (!Z_Registration_Info_UClass_AVCamBaseActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVCamBaseActor.OuterSingleton, Z_Construct_UClass_AVCamBaseActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVCamBaseActor.OuterSingleton;
	}
	template<> VCAMCORE_API UClass* StaticClass<AVCamBaseActor>()
	{
		return AVCamBaseActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVCamBaseActor);
	AVCamBaseActor::~AVCamBaseActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVCamBaseActor, AVCamBaseActor::StaticClass, TEXT("AVCamBaseActor"), &Z_Registration_Info_UClass_AVCamBaseActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVCamBaseActor), 1550860402U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_1795571798(TEXT("/Script/VCamCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamBaseActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
