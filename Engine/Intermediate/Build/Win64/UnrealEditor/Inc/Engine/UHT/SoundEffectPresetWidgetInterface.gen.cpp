// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Audio/SoundEffectPresetWidgetInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundEffectPresetWidgetInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UAudioPanelWidgetInterface();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectPreset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectPresetWidgetInterface();
	ENGINE_API UClass* Z_Construct_UClass_USoundEffectPresetWidgetInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	struct SoundEffectPresetWidgetInterface_eventGetClass_Parms
	{
		TSubclassOf<USoundEffectPreset>  ReturnValue;

		/** Constructor, initializes return property only **/
		SoundEffectPresetWidgetInterface_eventGetClass_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	struct SoundEffectPresetWidgetInterface_eventOnConstructed_Parms
	{
		USoundEffectPreset* Preset;
	};
	struct SoundEffectPresetWidgetInterface_eventOnPropertyChanged_Parms
	{
		USoundEffectPreset* Preset;
		FName PropertyName;
	};
	TSubclassOf<USoundEffectPreset>  ISoundEffectPresetWidgetInterface::GetClass()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetClass instead.");
		SoundEffectPresetWidgetInterface_eventGetClass_Parms Parms;
		return Parms.ReturnValue;
	}
	void ISoundEffectPresetWidgetInterface::OnConstructed(USoundEffectPreset* Preset)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnConstructed instead.");
	}
	void ISoundEffectPresetWidgetInterface::OnPropertyChanged(USoundEffectPreset* Preset, FName PropertyName)
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnPropertyChanged instead.");
	}
	void USoundEffectPresetWidgetInterface::StaticRegisterNativesUSoundEffectPresetWidgetInterface()
	{
	}
	struct Z_Construct_UFunction_USoundEffectPresetWidgetInterface_GetClass_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USoundEffectPresetWidgetInterface_GetClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundEffectPresetWidgetInterface_eventGetClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_USoundEffectPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundEffectPresetWidgetInterface_GetClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundEffectPresetWidgetInterface_GetClass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundEffectPresetWidgetInterface_GetClass_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Returns the class of Preset the widget supports\n" },
		{ "ModuleRelativePath", "Public/Audio/SoundEffectPresetWidgetInterface.h" },
		{ "ToolTip", "Returns the class of Preset the widget supports" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundEffectPresetWidgetInterface_GetClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundEffectPresetWidgetInterface, nullptr, "GetClass", nullptr, nullptr, sizeof(SoundEffectPresetWidgetInterface_eventGetClass_Parms), Z_Construct_UFunction_USoundEffectPresetWidgetInterface_GetClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundEffectPresetWidgetInterface_GetClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundEffectPresetWidgetInterface_GetClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundEffectPresetWidgetInterface_GetClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundEffectPresetWidgetInterface_GetClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundEffectPresetWidgetInterface_GetClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnConstructed_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Preset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnConstructed_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundEffectPresetWidgetInterface_eventOnConstructed_Parms, Preset), Z_Construct_UClass_USoundEffectPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnConstructed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnConstructed_Statics::NewProp_Preset,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnConstructed_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the preset widget is constructed\n" },
		{ "DisplayName", "On SoundEffectPreset Widget Constructed" },
		{ "ModuleRelativePath", "Public/Audio/SoundEffectPresetWidgetInterface.h" },
		{ "ToolTip", "Called when the preset widget is constructed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnConstructed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundEffectPresetWidgetInterface, nullptr, "OnConstructed", nullptr, nullptr, sizeof(SoundEffectPresetWidgetInterface_eventOnConstructed_Parms), Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnConstructed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnConstructed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnConstructed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnConstructed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnConstructed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnConstructed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Preset;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged_Statics::NewProp_Preset = { "Preset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundEffectPresetWidgetInterface_eventOnPropertyChanged_Parms, Preset), Z_Construct_UClass_USoundEffectPreset_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundEffectPresetWidgetInterface_eventOnPropertyChanged_Parms, PropertyName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged_Statics::NewProp_Preset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged_Statics::NewProp_PropertyName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the preset object is changed\n" },
		{ "ModuleRelativePath", "Public/Audio/SoundEffectPresetWidgetInterface.h" },
		{ "ToolTip", "Called when the preset object is changed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundEffectPresetWidgetInterface, nullptr, "OnPropertyChanged", nullptr, nullptr, sizeof(SoundEffectPresetWidgetInterface_eventOnPropertyChanged_Parms), Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundEffectPresetWidgetInterface);
	UClass* Z_Construct_UClass_USoundEffectPresetWidgetInterface_NoRegister()
	{
		return USoundEffectPresetWidgetInterface::StaticClass();
	}
	struct Z_Construct_UClass_USoundEffectPresetWidgetInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundEffectPresetWidgetInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAudioPanelWidgetInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USoundEffectPresetWidgetInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USoundEffectPresetWidgetInterface_GetClass, "GetClass" }, // 4126901162
		{ &Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnConstructed, "OnConstructed" }, // 1579838883
		{ &Z_Construct_UFunction_USoundEffectPresetWidgetInterface_OnPropertyChanged, "OnPropertyChanged" }, // 2531148023
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundEffectPresetWidgetInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Audio/SoundEffectPresetWidgetInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundEffectPresetWidgetInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ISoundEffectPresetWidgetInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundEffectPresetWidgetInterface_Statics::ClassParams = {
		&USoundEffectPresetWidgetInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundEffectPresetWidgetInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundEffectPresetWidgetInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundEffectPresetWidgetInterface()
	{
		if (!Z_Registration_Info_UClass_USoundEffectPresetWidgetInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundEffectPresetWidgetInterface.OuterSingleton, Z_Construct_UClass_USoundEffectPresetWidgetInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundEffectPresetWidgetInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USoundEffectPresetWidgetInterface>()
	{
		return USoundEffectPresetWidgetInterface::StaticClass();
	}
	USoundEffectPresetWidgetInterface::USoundEffectPresetWidgetInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundEffectPresetWidgetInterface);
	USoundEffectPresetWidgetInterface::~USoundEffectPresetWidgetInterface() {}
	static FName NAME_USoundEffectPresetWidgetInterface_GetClass = FName(TEXT("GetClass"));
	TSubclassOf<USoundEffectPreset>  ISoundEffectPresetWidgetInterface::Execute_GetClass(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USoundEffectPresetWidgetInterface::StaticClass()));
		SoundEffectPresetWidgetInterface_eventGetClass_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USoundEffectPresetWidgetInterface_GetClass);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		return Parms.ReturnValue;
	}
	static FName NAME_USoundEffectPresetWidgetInterface_OnConstructed = FName(TEXT("OnConstructed"));
	void ISoundEffectPresetWidgetInterface::Execute_OnConstructed(UObject* O, USoundEffectPreset* Preset)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USoundEffectPresetWidgetInterface::StaticClass()));
		SoundEffectPresetWidgetInterface_eventOnConstructed_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USoundEffectPresetWidgetInterface_OnConstructed);
		if (Func)
		{
			Parms.Preset=Preset;
			O->ProcessEvent(Func, &Parms);
		}
	}
	static FName NAME_USoundEffectPresetWidgetInterface_OnPropertyChanged = FName(TEXT("OnPropertyChanged"));
	void ISoundEffectPresetWidgetInterface::Execute_OnPropertyChanged(UObject* O, USoundEffectPreset* Preset, FName PropertyName)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(USoundEffectPresetWidgetInterface::StaticClass()));
		SoundEffectPresetWidgetInterface_eventOnPropertyChanged_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_USoundEffectPresetWidgetInterface_OnPropertyChanged);
		if (Func)
		{
			Parms.Preset=Preset;
			Parms.PropertyName=PropertyName;
			O->ProcessEvent(Func, &Parms);
		}
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundEffectPresetWidgetInterface, USoundEffectPresetWidgetInterface::StaticClass, TEXT("USoundEffectPresetWidgetInterface"), &Z_Registration_Info_UClass_USoundEffectPresetWidgetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundEffectPresetWidgetInterface), 1878294637U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_4232446636(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Audio_SoundEffectPresetWidgetInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
