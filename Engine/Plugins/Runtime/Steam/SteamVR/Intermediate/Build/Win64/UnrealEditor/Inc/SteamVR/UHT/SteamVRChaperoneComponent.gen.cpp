// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamVRChaperoneComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSteamVRChaperoneComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	STEAMVR_API UClass* Z_Construct_UClass_USteamVRChaperoneComponent();
	STEAMVR_API UClass* Z_Construct_UClass_USteamVRChaperoneComponent_NoRegister();
	STEAMVR_API UFunction* Z_Construct_UDelegateFunction_USteamVRChaperoneComponent_SteamVRChaperoneEvent__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_SteamVR();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_USteamVRChaperoneComponent_SteamVRChaperoneEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_USteamVRChaperoneComponent_SteamVRChaperoneEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/SteamVRChaperoneComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_USteamVRChaperoneComponent_SteamVRChaperoneEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRChaperoneComponent, nullptr, "SteamVRChaperoneEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_USteamVRChaperoneComponent_SteamVRChaperoneEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_USteamVRChaperoneComponent_SteamVRChaperoneEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_USteamVRChaperoneComponent_SteamVRChaperoneEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_USteamVRChaperoneComponent_SteamVRChaperoneEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void USteamVRChaperoneComponent::FSteamVRChaperoneEvent_DelegateWrapper(const FMulticastScriptDelegate& SteamVRChaperoneEvent)
{
	SteamVRChaperoneEvent.ProcessMulticastDelegate<UObject>(NULL);
}
	DEFINE_FUNCTION(USteamVRChaperoneComponent::execGetBounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=P_THIS->GetBounds();
		P_NATIVE_END;
	}
	void USteamVRChaperoneComponent::StaticRegisterNativesUSteamVRChaperoneComponent()
	{
		UClass* Class = USteamVRChaperoneComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetBounds", &USteamVRChaperoneComponent::execGetBounds },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USteamVRChaperoneComponent_GetBounds_Statics
	{
		struct SteamVRChaperoneComponent_eventGetBounds_Parms
		{
			TArray<FVector> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USteamVRChaperoneComponent_GetBounds_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USteamVRChaperoneComponent_GetBounds_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SteamVRChaperoneComponent_eventGetBounds_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USteamVRChaperoneComponent_GetBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRChaperoneComponent_GetBounds_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USteamVRChaperoneComponent_GetBounds_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USteamVRChaperoneComponent_GetBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "SteamVR" },
		{ "Comment", "/**\n\x09* Returns the bounds from the Chaperone, in Unreal-scale HMD-space coordinates, centered around the HMD's calibration origin (0,0,0).  Each set of four bounds will form a quad to define a set of bounds\n\x09*/" },
		{ "ModuleRelativePath", "Classes/SteamVRChaperoneComponent.h" },
		{ "ToolTip", "Returns the bounds from the Chaperone, in Unreal-scale HMD-space coordinates, centered around the HMD's calibration origin (0,0,0).  Each set of four bounds will form a quad to define a set of bounds" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USteamVRChaperoneComponent_GetBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USteamVRChaperoneComponent, nullptr, "GetBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_USteamVRChaperoneComponent_GetBounds_Statics::SteamVRChaperoneComponent_eventGetBounds_Parms), Z_Construct_UFunction_USteamVRChaperoneComponent_GetBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRChaperoneComponent_GetBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USteamVRChaperoneComponent_GetBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USteamVRChaperoneComponent_GetBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USteamVRChaperoneComponent_GetBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USteamVRChaperoneComponent_GetBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USteamVRChaperoneComponent);
	UClass* Z_Construct_UClass_USteamVRChaperoneComponent_NoRegister()
	{
		return USteamVRChaperoneComponent::StaticClass();
	}
	struct Z_Construct_UClass_USteamVRChaperoneComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnLeaveBounds_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnLeaveBounds;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnReturnToBounds_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReturnToBounds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USteamVRChaperoneComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_SteamVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USteamVRChaperoneComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USteamVRChaperoneComponent_GetBounds, "GetBounds" }, // 2706532912
		{ &Z_Construct_UDelegateFunction_USteamVRChaperoneComponent_SteamVRChaperoneEvent__DelegateSignature, "SteamVRChaperoneEvent__DelegateSignature" }, // 1351926830
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRChaperoneComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "SteamVR" },
		{ "Comment", "/**\n * SteamVR Extensions Function Library\n */" },
		{ "IncludePath", "SteamVRChaperoneComponent.h" },
		{ "ModuleRelativePath", "Classes/SteamVRChaperoneComponent.h" },
		{ "ToolTip", "SteamVR Extensions Function Library" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRChaperoneComponent_Statics::NewProp_OnLeaveBounds_MetaData[] = {
		{ "Category", "SteamVR" },
		{ "ModuleRelativePath", "Classes/SteamVRChaperoneComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamVRChaperoneComponent_Statics::NewProp_OnLeaveBounds = { "OnLeaveBounds", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRChaperoneComponent, OnLeaveBounds), Z_Construct_UDelegateFunction_USteamVRChaperoneComponent_SteamVRChaperoneEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamVRChaperoneComponent_Statics::NewProp_OnLeaveBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamVRChaperoneComponent_Statics::NewProp_OnLeaveBounds_MetaData)) }; // 1351926830
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USteamVRChaperoneComponent_Statics::NewProp_OnReturnToBounds_MetaData[] = {
		{ "Category", "SteamVR" },
		{ "ModuleRelativePath", "Classes/SteamVRChaperoneComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USteamVRChaperoneComponent_Statics::NewProp_OnReturnToBounds = { "OnReturnToBounds", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USteamVRChaperoneComponent, OnReturnToBounds), Z_Construct_UDelegateFunction_USteamVRChaperoneComponent_SteamVRChaperoneEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USteamVRChaperoneComponent_Statics::NewProp_OnReturnToBounds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USteamVRChaperoneComponent_Statics::NewProp_OnReturnToBounds_MetaData)) }; // 1351926830
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USteamVRChaperoneComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamVRChaperoneComponent_Statics::NewProp_OnLeaveBounds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USteamVRChaperoneComponent_Statics::NewProp_OnReturnToBounds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USteamVRChaperoneComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USteamVRChaperoneComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USteamVRChaperoneComponent_Statics::ClassParams = {
		&USteamVRChaperoneComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USteamVRChaperoneComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USteamVRChaperoneComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USteamVRChaperoneComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USteamVRChaperoneComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USteamVRChaperoneComponent()
	{
		if (!Z_Registration_Info_UClass_USteamVRChaperoneComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USteamVRChaperoneComponent.OuterSingleton, Z_Construct_UClass_USteamVRChaperoneComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USteamVRChaperoneComponent.OuterSingleton;
	}
	template<> STEAMVR_API UClass* StaticClass<USteamVRChaperoneComponent>()
	{
		return USteamVRChaperoneComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USteamVRChaperoneComponent);
	USteamVRChaperoneComponent::~USteamVRChaperoneComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRChaperoneComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRChaperoneComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USteamVRChaperoneComponent, USteamVRChaperoneComponent::StaticClass, TEXT("USteamVRChaperoneComponent"), &Z_Registration_Info_UClass_USteamVRChaperoneComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USteamVRChaperoneComponent), 366091976U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRChaperoneComponent_h_2345976228(TEXT("/Script/SteamVR"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRChaperoneComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Steam_SteamVR_Source_SteamVR_Classes_SteamVRChaperoneComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
