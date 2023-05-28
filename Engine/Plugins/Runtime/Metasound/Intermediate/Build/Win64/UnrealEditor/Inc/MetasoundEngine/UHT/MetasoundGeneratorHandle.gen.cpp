// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MetasoundGeneratorHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMetasoundGeneratorHandle() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetasoundGeneratorHandle();
	METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetasoundGeneratorHandle_NoRegister();
	METASOUNDENGINE_API UClass* Z_Construct_UClass_UMetaSoundSource_NoRegister();
	METASOUNDFRONTEND_API UClass* Z_Construct_UClass_UMetasoundParameterPack_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MetasoundEngine();
// End Cross Module References
	DEFINE_FUNCTION(UMetasoundGeneratorHandle::execApplyParameterPack)
	{
		P_GET_OBJECT(UMetasoundParameterPack,Z_Param_Pack);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ApplyParameterPack(Z_Param_Pack);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMetasoundGeneratorHandle::execCreateMetaSoundGeneratorHandle)
	{
		P_GET_OBJECT(UAudioComponent,Z_Param_OnComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMetasoundGeneratorHandle**)Z_Param__Result=UMetasoundGeneratorHandle::CreateMetaSoundGeneratorHandle(Z_Param_OnComponent);
		P_NATIVE_END;
	}
	void UMetasoundGeneratorHandle::StaticRegisterNativesUMetasoundGeneratorHandle()
	{
		UClass* Class = UMetasoundGeneratorHandle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyParameterPack", &UMetasoundGeneratorHandle::execApplyParameterPack },
			{ "CreateMetaSoundGeneratorHandle", &UMetasoundGeneratorHandle::execCreateMetaSoundGeneratorHandle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics
	{
		struct MetasoundGeneratorHandle_eventApplyParameterPack_Parms
		{
			UMetasoundParameterPack* Pack;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Pack;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::NewProp_Pack = { "Pack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MetasoundGeneratorHandle_eventApplyParameterPack_Parms, Pack), Z_Construct_UClass_UMetasoundParameterPack_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MetasoundGeneratorHandle_eventApplyParameterPack_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MetasoundGeneratorHandle_eventApplyParameterPack_Parms), &Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::NewProp_Pack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::Function_MetaDataParams[] = {
		{ "Category", "MetaSoundParameterPack" },
		{ "Comment", "/**\n\x09 * Makes a copy of the supplied parameter pack and passes it to the MetaSoundGenerator\n\x09 * for asynchronous processing. IT ALSO caches this copy so that if the AudioComponent\n\x09 * is virtualized the parameter pack will be sent again when/if the AudioComponent is \n\x09 * \"unvirtualized\".\n\x09 */" },
		{ "ModuleRelativePath", "Public/MetasoundGeneratorHandle.h" },
		{ "ToolTip", "Makes a copy of the supplied parameter pack and passes it to the MetaSoundGenerator\nfor asynchronous processing. IT ALSO caches this copy so that if the AudioComponent\nis virtualized the parameter pack will be sent again when/if the AudioComponent is\n\"unvirtualized\"." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundGeneratorHandle, nullptr, "ApplyParameterPack", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::MetasoundGeneratorHandle_eventApplyParameterPack_Parms), Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics
	{
		struct MetasoundGeneratorHandle_eventCreateMetaSoundGeneratorHandle_Parms
		{
			UAudioComponent* OnComponent;
			UMetasoundGeneratorHandle* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OnComponent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::NewProp_OnComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::NewProp_OnComponent = { "OnComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MetasoundGeneratorHandle_eventCreateMetaSoundGeneratorHandle_Parms, OnComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::NewProp_OnComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::NewProp_OnComponent_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MetasoundGeneratorHandle_eventCreateMetaSoundGeneratorHandle_Parms, ReturnValue), Z_Construct_UClass_UMetasoundGeneratorHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::NewProp_OnComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "MetaSound" },
		{ "ModuleRelativePath", "Public/MetasoundGeneratorHandle.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMetasoundGeneratorHandle, nullptr, "CreateMetaSoundGeneratorHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::MetasoundGeneratorHandle_eventCreateMetaSoundGeneratorHandle_Parms), Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMetasoundGeneratorHandle);
	UClass* Z_Construct_UClass_UMetasoundGeneratorHandle_NoRegister()
	{
		return UMetasoundGeneratorHandle::StaticClass();
	}
	struct Z_Construct_UClass_UMetasoundGeneratorHandle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AudioComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedMetasoundSource_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedMetasoundSource;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMetasoundGeneratorHandle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MetasoundEngine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMetasoundGeneratorHandle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMetasoundGeneratorHandle_ApplyParameterPack, "ApplyParameterPack" }, // 4154907712
		{ &Z_Construct_UFunction_UMetasoundGeneratorHandle_CreateMetaSoundGeneratorHandle, "CreateMetaSoundGeneratorHandle" }, // 526312937
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundGeneratorHandle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "MetaSound" },
		{ "IncludePath", "MetasoundGeneratorHandle.h" },
		{ "ModuleRelativePath", "Public/MetasoundGeneratorHandle.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundGeneratorHandle_Statics::NewProp_AudioComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MetasoundGeneratorHandle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMetasoundGeneratorHandle_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundGeneratorHandle, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMetasoundGeneratorHandle_Statics::NewProp_AudioComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundGeneratorHandle_Statics::NewProp_AudioComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMetasoundGeneratorHandle_Statics::NewProp_CachedMetasoundSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/MetasoundGeneratorHandle.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMetasoundGeneratorHandle_Statics::NewProp_CachedMetasoundSource = { "CachedMetasoundSource", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMetasoundGeneratorHandle, CachedMetasoundSource), Z_Construct_UClass_UMetaSoundSource_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMetasoundGeneratorHandle_Statics::NewProp_CachedMetasoundSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundGeneratorHandle_Statics::NewProp_CachedMetasoundSource_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMetasoundGeneratorHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundGeneratorHandle_Statics::NewProp_AudioComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMetasoundGeneratorHandle_Statics::NewProp_CachedMetasoundSource,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMetasoundGeneratorHandle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMetasoundGeneratorHandle>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMetasoundGeneratorHandle_Statics::ClassParams = {
		&UMetasoundGeneratorHandle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMetasoundGeneratorHandle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundGeneratorHandle_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMetasoundGeneratorHandle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMetasoundGeneratorHandle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMetasoundGeneratorHandle()
	{
		if (!Z_Registration_Info_UClass_UMetasoundGeneratorHandle.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMetasoundGeneratorHandle.OuterSingleton, Z_Construct_UClass_UMetasoundGeneratorHandle_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMetasoundGeneratorHandle.OuterSingleton;
	}
	template<> METASOUNDENGINE_API UClass* StaticClass<UMetasoundGeneratorHandle>()
	{
		return UMetasoundGeneratorHandle::StaticClass();
	}
	UMetasoundGeneratorHandle::UMetasoundGeneratorHandle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMetasoundGeneratorHandle);
	UMetasoundGeneratorHandle::~UMetasoundGeneratorHandle() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMetasoundGeneratorHandle, UMetasoundGeneratorHandle::StaticClass, TEXT("UMetasoundGeneratorHandle"), &Z_Registration_Info_UClass_UMetasoundGeneratorHandle, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMetasoundGeneratorHandle), 3423956332U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_354397013(TEXT("/Script/MetasoundEngine"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Metasound_Source_MetasoundEngine_Public_MetasoundGeneratorHandle_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
