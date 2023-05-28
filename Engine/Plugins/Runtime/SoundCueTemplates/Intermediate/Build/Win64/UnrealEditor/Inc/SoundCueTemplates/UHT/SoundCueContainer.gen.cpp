// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SoundCueContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundCueContainer() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_USoundWave_NoRegister();
	SOUNDCUETEMPLATES_API UClass* Z_Construct_UClass_USoundCueContainer();
	SOUNDCUETEMPLATES_API UClass* Z_Construct_UClass_USoundCueContainer_NoRegister();
	SOUNDCUETEMPLATES_API UClass* Z_Construct_UClass_USoundCueTemplate();
	SOUNDCUETEMPLATES_API UEnum* Z_Construct_UEnum_SoundCueTemplates_ESoundContainerType();
	UPackage* Z_Construct_UPackage__Script_SoundCueTemplates();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESoundContainerType;
	static UEnum* ESoundContainerType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESoundContainerType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESoundContainerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SoundCueTemplates_ESoundContainerType, (UObject*)Z_Construct_UPackage__Script_SoundCueTemplates(), TEXT("ESoundContainerType"));
		}
		return Z_Registration_Info_UEnum_ESoundContainerType.OuterSingleton;
	}
	template<> SOUNDCUETEMPLATES_API UEnum* StaticEnum<ESoundContainerType>()
	{
		return ESoundContainerType_StaticEnum();
	}
	struct Z_Construct_UEnum_SoundCueTemplates_ESoundContainerType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SoundCueTemplates_ESoundContainerType_Statics::Enumerators[] = {
		{ "ESoundContainerType::Concatenate", (int64)ESoundContainerType::Concatenate },
		{ "ESoundContainerType::Randomize", (int64)ESoundContainerType::Randomize },
		{ "ESoundContainerType::Mix", (int64)ESoundContainerType::Mix },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SoundCueTemplates_ESoundContainerType_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// ========================================================================\n// USoundCueContainer\n// Sound Cue template class which implements USoundCueTemplate.\n//\n// Simple example showing how to expose or hide template\n// parameters in the editor such as the looping and soundwave\n// fields of a USoundNodeWavePlayer.\n//\n// In order for proper data hiding to occur for inherited properties,\n// Customization Detail's 'Register' must be called in during initialization\n// (eg. in module's StartupModule()) like so:\n// #include \"SoundCueContainer.h\"\n// ...\n// FPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>(\"PropertyEditor\");\n// FSoundCueContainerDetailCustomization::Register(PropertyModule);\n// ========================================================================\n" },
		{ "Concatenate.Name", "ESoundContainerType::Concatenate" },
		{ "Mix.Name", "ESoundContainerType::Mix" },
		{ "ModuleRelativePath", "Public/SoundCueContainer.h" },
		{ "Randomize.Name", "ESoundContainerType::Randomize" },
		{ "ToolTip", "USoundCueContainer\nSound Cue template class which implements USoundCueTemplate.\n\nSimple example showing how to expose or hide template\nparameters in the editor such as the looping and soundwave\nfields of a USoundNodeWavePlayer.\n\nIn order for proper data hiding to occur for inherited properties,\nCustomization Detail's 'Register' must be called in during initialization\n(eg. in module's StartupModule()) like so:\n#include \"SoundCueContainer.h\"\n...\nFPropertyEditorModule& PropertyModule = FModuleManager::LoadModuleChecked<FPropertyEditorModule>(\"PropertyEditor\");\nFSoundCueContainerDetailCustomization::Register(PropertyModule);" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SoundCueTemplates_ESoundContainerType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SoundCueTemplates,
		nullptr,
		"ESoundContainerType",
		"ESoundContainerType",
		Z_Construct_UEnum_SoundCueTemplates_ESoundContainerType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SoundCueTemplates_ESoundContainerType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SoundCueTemplates_ESoundContainerType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SoundCueTemplates_ESoundContainerType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SoundCueTemplates_ESoundContainerType()
	{
		if (!Z_Registration_Info_UEnum_ESoundContainerType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESoundContainerType.InnerSingleton, Z_Construct_UEnum_SoundCueTemplates_ESoundContainerType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESoundContainerType.InnerSingleton;
	}
	void USoundCueContainer::StaticRegisterNativesUSoundCueContainer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USoundCueContainer);
	UClass* Z_Construct_UClass_USoundCueContainer_NoRegister()
	{
		return USoundCueContainer::StaticClass();
	}
	struct Z_Construct_UClass_USoundCueContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_ContainerType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ContainerType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ContainerType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLooping_MetaData[];
#endif
		static void NewProp_bLooping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLooping;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Variations_ElementProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Variations_MetaData[];
#endif
		static const UECodeGen_Private::FSetPropertyParams NewProp_Variations;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PitchModulation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PitchModulation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VolumeModulation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VolumeModulation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundCueContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USoundCueTemplate,
		(UObject* (*)())Z_Construct_UPackage__Script_SoundCueTemplates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueContainer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "object object Object" },
		{ "IncludePath", "SoundCueContainer.h" },
		{ "ModuleRelativePath", "Public/SoundCueContainer.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USoundCueContainer_Statics::NewProp_ContainerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueContainer_Statics::NewProp_ContainerType_MetaData[] = {
		{ "Category", "Variation" },
		{ "ModuleRelativePath", "Public/SoundCueContainer.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USoundCueContainer_Statics::NewProp_ContainerType = { "ContainerType", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundCueContainer, ContainerType), Z_Construct_UEnum_SoundCueTemplates_ESoundContainerType, METADATA_PARAMS(Z_Construct_UClass_USoundCueContainer_Statics::NewProp_ContainerType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueContainer_Statics::NewProp_ContainerType_MetaData)) }; // 3295520685
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueContainer_Statics::NewProp_bLooping_MetaData[] = {
		{ "Category", "Variation" },
		{ "ModuleRelativePath", "Public/SoundCueContainer.h" },
	};
#endif
	void Z_Construct_UClass_USoundCueContainer_Statics::NewProp_bLooping_SetBit(void* Obj)
	{
		((USoundCueContainer*)Obj)->bLooping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USoundCueContainer_Statics::NewProp_bLooping = { "bLooping", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USoundCueContainer), &Z_Construct_UClass_USoundCueContainer_Statics::NewProp_bLooping_SetBit, METADATA_PARAMS(Z_Construct_UClass_USoundCueContainer_Statics::NewProp_bLooping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueContainer_Statics::NewProp_bLooping_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_USoundCueContainer_Statics::NewProp_Variations_ElementProp = { "Variations", nullptr, (EPropertyFlags)0x0004000800000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USoundWave_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueContainer_Statics::NewProp_Variations_MetaData[] = {
		{ "Category", "Variation" },
		{ "ModuleRelativePath", "Public/SoundCueContainer.h" },
	};
#endif
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_USoundCueContainer_Statics::NewProp_Variations = { "Variations", nullptr, (EPropertyFlags)0x0014000800000001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundCueContainer, Variations), METADATA_PARAMS(Z_Construct_UClass_USoundCueContainer_Statics::NewProp_Variations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueContainer_Statics::NewProp_Variations_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueContainer_Statics::NewProp_PitchModulation_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Public/SoundCueContainer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundCueContainer_Statics::NewProp_PitchModulation = { "PitchModulation", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundCueContainer, PitchModulation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_USoundCueContainer_Statics::NewProp_PitchModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueContainer_Statics::NewProp_PitchModulation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundCueContainer_Statics::NewProp_VolumeModulation_MetaData[] = {
		{ "Category", "Modulation" },
		{ "ModuleRelativePath", "Public/SoundCueContainer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USoundCueContainer_Statics::NewProp_VolumeModulation = { "VolumeModulation", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USoundCueContainer, VolumeModulation), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_USoundCueContainer_Statics::NewProp_VolumeModulation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueContainer_Statics::NewProp_VolumeModulation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USoundCueContainer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCueContainer_Statics::NewProp_ContainerType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCueContainer_Statics::NewProp_ContainerType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCueContainer_Statics::NewProp_bLooping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCueContainer_Statics::NewProp_Variations_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCueContainer_Statics::NewProp_Variations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCueContainer_Statics::NewProp_PitchModulation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USoundCueContainer_Statics::NewProp_VolumeModulation,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundCueContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundCueContainer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USoundCueContainer_Statics::ClassParams = {
		&USoundCueContainer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_USoundCueContainer_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueContainer_Statics::PropPointers), 0),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USoundCueContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundCueContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundCueContainer()
	{
		if (!Z_Registration_Info_UClass_USoundCueContainer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USoundCueContainer.OuterSingleton, Z_Construct_UClass_USoundCueContainer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USoundCueContainer.OuterSingleton;
	}
	template<> SOUNDCUETEMPLATES_API UClass* StaticClass<USoundCueContainer>()
	{
		return USoundCueContainer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundCueContainer);
	USoundCueContainer::~USoundCueContainer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_Statics::EnumInfo[] = {
		{ ESoundContainerType_StaticEnum, TEXT("ESoundContainerType"), &Z_Registration_Info_UEnum_ESoundContainerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3295520685U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USoundCueContainer, USoundCueContainer::StaticClass, TEXT("USoundCueContainer"), &Z_Registration_Info_UClass_USoundCueContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USoundCueContainer), 318829006U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_3614601468(TEXT("/Script/SoundCueTemplates"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SoundCueTemplates_Source_SoundCueTemplates_Public_SoundCueContainer_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
