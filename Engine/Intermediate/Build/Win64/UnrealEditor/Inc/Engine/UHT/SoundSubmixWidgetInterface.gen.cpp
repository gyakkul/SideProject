// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Audio/SoundSubmixWidgetInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundSubmixWidgetInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmixBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmixWidgetInterface();
	ENGINE_API UClass* Z_Construct_UClass_USoundSubmixWidgetInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	struct SoundSubmixWidgetInterface_eventOnConstructed_Parms
	{
		USoundSubmixBase* SoundSubmix;
	};
	void ISoundSubmixWidgetInterface::OnConstructed(USoundSubmixBase* SoundSubmix)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnConstructed instead.");
	}
	void USoundSubmixWidgetInterface::StaticRegisterNativesUSoundSubmixWidgetInterface()
	{
	}
	struct Z_Construct_UFunction_USoundSubmixWidgetInterface_OnConstructed_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SoundSubmix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundSubmixWidgetInterface_OnConstructed_Statics::NewProp_SoundSubmix = { "SoundSubmix", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundSubmixWidgetInterface_eventOnConstructed_Parms, SoundSubmix), Z_Construct_UClass_USoundSubmixBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundSubmixWidgetInterface_OnConstructed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundSubmixWidgetInterface_OnConstructed_Statics::NewProp_SoundSubmix,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundSubmixWidgetInterface_OnConstructed_Statics::Function_MetaDataParams[] = {
		{ "DisplayName", "On SoundSubmix Widget Constructed" },
		{ "ModuleRelativePath", "Public/Audio/SoundSubmixWidgetInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundSubmixWidgetInterface_OnConstructed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundSubmixWidgetInterface, nullptr, "OnConstructed", nullptr, nullptr, sizeof(SoundSubmixWidgetInterface_eventOnConstructed_Parms), Z_Construct_UFunction_USoundSubmixWidgetInterface_OnConstructed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmixWidgetInterface_OnConstructed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundSubmixWidgetInterface_OnConstructed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundSubmixWidgetInterface_OnConstructed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundSubmixWidgetInterface_OnConstructed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundSubmixWidgetInterface_OnConstructed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundSubmixWidgetInterface);
	UClass* Z_Construct_UClass_USoundSubmixWidgetInterface_NoRegister()
	{
		return USoundSubmixWidgetInterface::StaticClass();
	}
	struct Z_Construct_UClass_USoundSubmixWidgetInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundSubmixWidgetInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USoundSubmixWidgetInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundSubmixWidgetInterface_OnConstructed, "OnConstructed" }, // 2922193645
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundSubmixWidgetInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Audio/SoundSubmixWidgetInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundSubmixWidgetInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISoundSubmixWidgetInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundSubmixWidgetInterface_Statics::ClassParams = {
		&USoundSubmixWidgetInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundSubmixWidgetInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundSubmixWidgetInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundSubmixWidgetInterface()
	{
		if (!Z_Registration_Info_UClass_USoundSubmixWidgetInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundSubmixWidgetInterface.OuterSingleton, Z_Construct_UClass_USoundSubmixWidgetInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundSubmixWidgetInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundSubmixWidgetInterface>()
	{
		return USoundSubmixWidgetInterface::StaticClass();
	}
	USoundSubmixWidgetInterface::USoundSubmixWidgetInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundSubmixWidgetInterface);
	USoundSubmixWidgetInterface::~USoundSubmixWidgetInterface() {}
	static FName NAME_USoundSubmixWidgetInterface_OnConstructed = FName(TEXT("OnConstructed"));
	void ISoundSubmixWidgetInterface::Execute_OnConstructed(UObject* O, USoundSubmixBase* SoundSubmix)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USoundSubmixWidgetInterface::StaticClass()));
		SoundSubmixWidgetInterface_eventOnConstructed_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USoundSubmixWidgetInterface_OnConstructed);
		if (Func)
		{
			Parms.SoundSubmix=SoundSubmix;
			O->ProcessEvent(Func, &Parms);
		}
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_SoundSubmixWidgetInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_SoundSubmixWidgetInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundSubmixWidgetInterface, USoundSubmixWidgetInterface::StaticClass, TEXT("USoundSubmixWidgetInterface"), &Z_Registration_Info_UClass_USoundSubmixWidgetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundSubmixWidgetInterface), 2758464903U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_SoundSubmixWidgetInterface_h_1872494339(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_SoundSubmixWidgetInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_SoundSubmixWidgetInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
