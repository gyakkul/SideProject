// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundCueTemplate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundCueTemplate() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue();
	SOUNDCUETEMPLATES_API UClass* Z_Construct_UClass_USoundCueTemplate();
	SOUNDCUETEMPLATES_API UClass* Z_Construct_UClass_USoundCueTemplate_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SoundCueTemplates();
// End Cross Module References
#if WITH_EDITOR
	DEFINE_FUNCTION(USoundCueTemplate::execAddSoundWavesToTemplate)
	{
		P_GET_TARRAY_REF(UObject*,Z_Param_Out_SelectedObjects);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddSoundWavesToTemplate(Z_Param_Out_SelectedObjects);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void USoundCueTemplate::StaticRegisterNativesUSoundCueTemplate()
	{
#if WITH_EDITOR
		UClass* Class = USoundCueTemplate::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddSoundWavesToTemplate", &USoundCueTemplate::execAddSoundWavesToTemplate },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_USoundCueTemplate_AddSoundWavesToTemplate_Statics
	{
		struct SoundCueTemplate_eventAddSoundWavesToTemplate_Parms
		{
			TArray<UObject*> SelectedObjects;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SelectedObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USoundCueTemplate_AddSoundWavesToTemplate_Statics::NewProp_SelectedObjects_Inner = { "SelectedObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundCueTemplate_AddSoundWavesToTemplate_Statics::NewProp_SelectedObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USoundCueTemplate_AddSoundWavesToTemplate_Statics::NewProp_SelectedObjects = { "SelectedObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SoundCueTemplate_eventAddSoundWavesToTemplate_Parms, SelectedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USoundCueTemplate_AddSoundWavesToTemplate_Statics::NewProp_SelectedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundCueTemplate_AddSoundWavesToTemplate_Statics::NewProp_SelectedObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USoundCueTemplate_AddSoundWavesToTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundCueTemplate_AddSoundWavesToTemplate_Statics::NewProp_SelectedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USoundCueTemplate_AddSoundWavesToTemplate_Statics::NewProp_SelectedObjects,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USoundCueTemplate_AddSoundWavesToTemplate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/SoundCueTemplate.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USoundCueTemplate_AddSoundWavesToTemplate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USoundCueTemplate, nullptr, "AddSoundWavesToTemplate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USoundCueTemplate_AddSoundWavesToTemplate_Statics::SoundCueTemplate_eventAddSoundWavesToTemplate_Parms), Z_Construct_UFunction_USoundCueTemplate_AddSoundWavesToTemplate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundCueTemplate_AddSoundWavesToTemplate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USoundCueTemplate_AddSoundWavesToTemplate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USoundCueTemplate_AddSoundWavesToTemplate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USoundCueTemplate_AddSoundWavesToTemplate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USoundCueTemplate_AddSoundWavesToTemplate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundCueTemplate);
	UClass* Z_Construct_UClass_USoundCueTemplate_NoRegister()
	{
		return USoundCueTemplate::StaticClass();
	}
	struct Z_Construct_UClass_USoundCueTemplate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundCueTemplate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundCue,
		(UObject* (*)())Z_Construct_UPackage__Script_SoundCueTemplates,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_USoundCueTemplate_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_USoundCueTemplate_AddSoundWavesToTemplate, "AddSoundWavesToTemplate" }, // 4086012313
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueTemplate_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// Base Sound Cue Template class, which builds the sound node graph procedurally and hides more complex Sound Cue functionality\n// to streamline implementation defined in child classes.\n" },
		{ "HideCategories", "object Object" },
		{ "IncludePath", "SoundCueTemplate.h" },
		{ "ModuleRelativePath", "Public/SoundCueTemplate.h" },
		{ "ToolTip", "Base Sound Cue Template class, which builds the sound node graph procedurally and hides more complex Sound Cue functionality\nto streamline implementation defined in child classes." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundCueTemplate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundCueTemplate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundCueTemplate_Statics::ClassParams = {
		&USoundCueTemplate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		0,
		0,
		0x009010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USoundCueTemplate_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueTemplate_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundCueTemplate()
	{
		if (!Z_Registration_Info_UClass_USoundCueTemplate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundCueTemplate.OuterSingleton, Z_Construct_UClass_USoundCueTemplate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundCueTemplate.OuterSingleton;
	}
	template<> SOUNDCUETEMPLATES_API UClass* StaticClass<USoundCueTemplate>()
	{
		return USoundCueTemplate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundCueTemplate);
	USoundCueTemplate::~USoundCueTemplate() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundCueTemplate, USoundCueTemplate::StaticClass, TEXT("USoundCueTemplate"), &Z_Registration_Info_UClass_USoundCueTemplate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundCueTemplate), 1951325020U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_2016690041(TEXT("/Script/SoundCueTemplates"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueTemplate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
