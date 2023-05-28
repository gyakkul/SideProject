// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Audio/ActorSoundParameterInterface.h"
#include "AudioParameter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorSoundParameterInterface() {}
// Cross Module References
	AUDIOEXTENSIONS_API UScriptStruct* Z_Construct_UScriptStruct_FAudioParameter();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UActorSoundParameterInterface();
	ENGINE_API UClass* Z_Construct_UClass_UActorSoundParameterInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(IActorSoundParameterInterface::execGetActorSoundParams)
	{
		P_GET_TARRAY_REF(FAudioParameter,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetActorSoundParams_Implementation(Z_Param_Out_Params);
		P_NATIVE_END;
	}
	struct ActorSoundParameterInterface_eventGetActorSoundParams_Parms
	{
		TArray<FAudioParameter> Params;
	};
	void IActorSoundParameterInterface::GetActorSoundParams(TArray<FAudioParameter>& Params) const
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetActorSoundParams instead.");
	}
	void UActorSoundParameterInterface::StaticRegisterNativesUActorSoundParameterInterface()
	{
		UClass* Class = UActorSoundParameterInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorSoundParams", &IActorSoundParameterInterface::execGetActorSoundParams },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Params_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Params;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams_Statics::NewProp_Params_Inner = { "Params", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAudioParameter, METADATA_PARAMS(nullptr, 0) }; // 2206304397
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ActorSoundParameterInterface_eventGetActorSoundParams_Parms, Params), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2206304397
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams_Statics::NewProp_Params_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams_Statics::NewProp_Params,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audio|Parameters" },
		{ "Comment", "// Overrides logic for gathering AudioParameters to set by default when an AudioComponent/ActiveSound plays with a given actor as its Owner.\n" },
		{ "DisplayName", "Get Actor Audio Parameters" },
		{ "ModuleRelativePath", "Classes/Audio/ActorSoundParameterInterface.h" },
		{ "ToolTip", "Overrides logic for gathering AudioParameters to set by default when an AudioComponent/ActiveSound plays with a given actor as its Owner." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActorSoundParameterInterface, nullptr, "GetActorSoundParams", nullptr, nullptr, sizeof(ActorSoundParameterInterface_eventGetActorSoundParams_Parms), Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorSoundParameterInterface);
	UClass* Z_Construct_UClass_UActorSoundParameterInterface_NoRegister()
	{
		return UActorSoundParameterInterface::StaticClass();
	}
	struct Z_Construct_UClass_UActorSoundParameterInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorSoundParameterInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActorSoundParameterInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorSoundParameterInterface_GetActorSoundParams, "GetActorSoundParams" }, // 2389163589
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorSoundParameterInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Audio/ActorSoundParameterInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorSoundParameterInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IActorSoundParameterInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorSoundParameterInterface_Statics::ClassParams = {
		&UActorSoundParameterInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UActorSoundParameterInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorSoundParameterInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorSoundParameterInterface()
	{
		if (!Z_Registration_Info_UClass_UActorSoundParameterInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorSoundParameterInterface.OuterSingleton, Z_Construct_UClass_UActorSoundParameterInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorSoundParameterInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UActorSoundParameterInterface>()
	{
		return UActorSoundParameterInterface::StaticClass();
	}
	UActorSoundParameterInterface::UActorSoundParameterInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorSoundParameterInterface);
	UActorSoundParameterInterface::~UActorSoundParameterInterface() {}
	static FName NAME_UActorSoundParameterInterface_GetActorSoundParams = FName(TEXT("GetActorSoundParams"));
	void IActorSoundParameterInterface::Execute_GetActorSoundParams(const UObject* O, TArray<FAudioParameter>& Params)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UActorSoundParameterInterface::StaticClass()));
		ActorSoundParameterInterface_eventGetActorSoundParams_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UActorSoundParameterInterface_GetActorSoundParams);
		if (Func)
		{
			Parms.Params=Params;
			const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
			Params=Parms.Params;
		}
		else if (auto I = (const IActorSoundParameterInterface*)(O->GetNativeInterfaceAddress(UActorSoundParameterInterface::StaticClass())))
		{
			I->GetActorSoundParams_Implementation(Params);
		}
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorSoundParameterInterface, UActorSoundParameterInterface::StaticClass, TEXT("UActorSoundParameterInterface"), &Z_Registration_Info_UClass_UActorSoundParameterInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorSoundParameterInterface), 1871726346U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_45833336(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Audio_ActorSoundParameterInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
