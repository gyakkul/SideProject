// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VCamSubsystem.h"
#include "VCamComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVCamSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USubsystem();
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamComponent_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamSubsystem();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamSubsystem_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVCamSubsystem::execGetVCamComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVCamComponent**)Z_Param__Result=P_THIS->GetVCamComponent();
		P_NATIVE_END;
	}
	void UVCamSubsystem::StaticRegisterNativesUVCamSubsystem()
	{
		UClass* Class = UVCamSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVCamComponent", &UVCamSubsystem::execGetVCamComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVCamSubsystem_GetVCamComponent_Statics
	{
		struct VCamSubsystem_eventGetVCamComponent_Parms
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamSubsystem_GetVCamComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVCamSubsystem_GetVCamComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VCamSubsystem_eventGetVCamComponent_Parms, ReturnValue), Z_Construct_UClass_UVCamComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVCamSubsystem_GetVCamComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamSubsystem_GetVCamComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVCamSubsystem_GetVCamComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVCamSubsystem_GetVCamComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVCamSubsystem_GetVCamComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "VirtualCamera" },
		{ "ModuleRelativePath", "Public/VCamSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVCamSubsystem_GetVCamComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVCamSubsystem, nullptr, "GetVCamComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVCamSubsystem_GetVCamComponent_Statics::VCamSubsystem_eventGetVCamComponent_Parms), Z_Construct_UFunction_UVCamSubsystem_GetVCamComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamSubsystem_GetVCamComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVCamSubsystem_GetVCamComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVCamSubsystem_GetVCamComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVCamSubsystem_GetVCamComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVCamSubsystem_GetVCamComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVCamSubsystem);
	UClass* Z_Construct_UClass_UVCamSubsystem_NoRegister()
	{
		return UVCamSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UVCamSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVCamSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVCamSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVCamSubsystem_GetVCamComponent, "GetVCamComponent" }, // 2153590619
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVCamSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Base class for auto instanced and initialized subsystem that share the lifetime of UVCamComponents. */" },
		{ "IncludePath", "VCamSubsystem.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VCamSubsystem.h" },
		{ "ToolTip", "Base class for auto instanced and initialized subsystem that share the lifetime of UVCamComponents." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVCamSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVCamSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVCamSubsystem_Statics::ClassParams = {
		&UVCamSubsystem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVCamSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVCamSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVCamSubsystem()
	{
		if (!Z_Registration_Info_UClass_UVCamSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVCamSubsystem.OuterSingleton, Z_Construct_UClass_UVCamSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVCamSubsystem.OuterSingleton;
	}
	template<> VCAMCORE_API UClass* StaticClass<UVCamSubsystem>()
	{
		return UVCamSubsystem::StaticClass();
	}
	UVCamSubsystem::UVCamSubsystem() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVCamSubsystem);
	UVCamSubsystem::~UVCamSubsystem() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVCamSubsystem, UVCamSubsystem::StaticClass, TEXT("UVCamSubsystem"), &Z_Registration_Info_UClass_UVCamSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVCamSubsystem), 2070547701U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_3806001268(TEXT("/Script/VCamCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_VCamSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
