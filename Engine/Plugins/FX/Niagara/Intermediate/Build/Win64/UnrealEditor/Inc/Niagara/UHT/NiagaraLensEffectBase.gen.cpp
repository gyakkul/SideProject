// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraLensEffectBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraLensEffectBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraLensEffectInterface_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_ANiagaraActor();
	NIAGARA_API UClass* Z_Construct_UClass_ANiagaraLensEffectBase();
	NIAGARA_API UClass* Z_Construct_UClass_ANiagaraLensEffectBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void ANiagaraLensEffectBase::StaticRegisterNativesANiagaraLensEffectBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANiagaraLensEffectBase);
	UClass* Z_Construct_UClass_ANiagaraLensEffectBase_NoRegister()
	{
		return ANiagaraLensEffectBase::StaticClass();
	}
	struct Z_Construct_UClass_ANiagaraLensEffectBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredRelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredRelativeTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseAuthoredFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseAuthoredFOV;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowMultipleInstances_MetaData[];
#endif
		static void NewProp_bAllowMultipleInstances_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowMultipleInstances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResetWhenRetriggered_MetaData[];
#endif
		static void NewProp_bResetWhenRetriggered_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResetWhenRetriggered;
		static const UECodeGen_Private::FClassPropertyParams NewProp_EmittersToTreatAsSame_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmittersToTreatAsSame_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_EmittersToTreatAsSame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningCameraManager_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OwningCameraManager;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANiagaraLensEffectBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANiagaraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraLensEffectBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Niagara equivalent of AEmitterCameraLensEffectBase.\n * This class is supported by APlayerCameraManager (via ICameraLensEffectInterface) as a camera lens effect.\n */" },
		{ "HideCategories", "NiagaraActorActivation Components|Activation Input Collision Game|Damage Activation Components|Activation Input Collision Game|Damage" },
		{ "IncludePath", "NiagaraLensEffectBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/NiagaraLensEffectBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Niagara equivalent of AEmitterCameraLensEffectBase.\nThis class is supported by APlayerCameraManager (via ICameraLensEffectInterface) as a camera lens effect." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_DesiredRelativeTransform_MetaData[] = {
		{ "Category", "Positioning And Scale" },
		{ "Comment", "/**\n\x09 * Relative offset from the camera (where X is out from the camera)\n\x09 * Might be changed slightly when the FOV is different than expected.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/NiagaraLensEffectBase.h" },
		{ "ToolTip", "Relative offset from the camera (where X is out from the camera)\nMight be changed slightly when the FOV is different than expected." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_DesiredRelativeTransform = { "DesiredRelativeTransform", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANiagaraLensEffectBase, DesiredRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_DesiredRelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_DesiredRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_BaseAuthoredFOV_MetaData[] = {
		{ "Category", "Positioning And Scale" },
		{ "Comment", "/**\n\x09 * FOVs that differ from this may cause adjustments in positioning.\n\x09 * This is the FOV which the effect was tested with.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/NiagaraLensEffectBase.h" },
		{ "ToolTip", "FOVs that differ from this may cause adjustments in positioning.\nThis is the FOV which the effect was tested with." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_BaseAuthoredFOV = { "BaseAuthoredFOV", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANiagaraLensEffectBase, BaseAuthoredFOV), METADATA_PARAMS(Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_BaseAuthoredFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_BaseAuthoredFOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_bAllowMultipleInstances_MetaData[] = {
		{ "Category", "Effect Activation" },
		{ "Comment", "/**\n\x09 * Are multiple instances of the effect allowed? \n\x09 * When disabled, a single instance of the effect may be retriggered!\n\x09 */" },
		{ "ModuleRelativePath", "Classes/NiagaraLensEffectBase.h" },
		{ "ToolTip", "Are multiple instances of the effect allowed?\nWhen disabled, a single instance of the effect may be retriggered!" },
	};
#endif
	void Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_bAllowMultipleInstances_SetBit(void* Obj)
	{
		((ANiagaraLensEffectBase*)Obj)->bAllowMultipleInstances = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_bAllowMultipleInstances = { "bAllowMultipleInstances", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ANiagaraLensEffectBase), &Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_bAllowMultipleInstances_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_bAllowMultipleInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_bAllowMultipleInstances_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_bResetWhenRetriggered_MetaData[] = {
		{ "Category", "Effect Activation" },
		{ "Comment", "/**\n\x09 * When an instance of this effect is retriggered (because more than one instance is not allowed)\n\x09 * should the particle system be explicitly reset? Activate(bReset = true);\n\x09 */" },
		{ "EditCondition", "!bAllowMultipleInstances" },
		{ "ModuleRelativePath", "Classes/NiagaraLensEffectBase.h" },
		{ "ToolTip", "When an instance of this effect is retriggered (because more than one instance is not allowed)\nshould the particle system be explicitly reset? Activate(bReset = true);" },
	};
#endif
	void Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_bResetWhenRetriggered_SetBit(void* Obj)
	{
		((ANiagaraLensEffectBase*)Obj)->bResetWhenRetriggered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_bResetWhenRetriggered = { "bResetWhenRetriggered", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ANiagaraLensEffectBase), &Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_bResetWhenRetriggered_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_bResetWhenRetriggered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_bResetWhenRetriggered_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame_Inner = { "EmittersToTreatAsSame", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame_MetaData[] = {
		{ "Category", "Effect Activation" },
		{ "Comment", "/** \n\x09 *  If an effect class in this array is currently playing, do not play this effect.\n\x09 *  Useful for preventing multiple similar or expensive camera effects from playing simultaneously.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/NiagaraLensEffectBase.h" },
		{ "MustImplement", "/Script/Engine.CameraLensEffectInterface" },
		{ "ToolTip", "If an effect class in this array is currently playing, do not play this effect.\nUseful for preventing multiple similar or expensive camera effects from playing simultaneously." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame = { "EmittersToTreatAsSame", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANiagaraLensEffectBase, EmittersToTreatAsSame), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_OwningCameraManager_MetaData[] = {
		{ "ModuleRelativePath", "Classes/NiagaraLensEffectBase.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_OwningCameraManager = { "OwningCameraManager", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANiagaraLensEffectBase, OwningCameraManager), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_OwningCameraManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_OwningCameraManager_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANiagaraLensEffectBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_DesiredRelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_BaseAuthoredFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_bAllowMultipleInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_bResetWhenRetriggered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANiagaraLensEffectBase_Statics::NewProp_OwningCameraManager,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANiagaraLensEffectBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCameraLensEffectInterface_NoRegister, (int32)VTABLE_OFFSET(ANiagaraLensEffectBase, ICameraLensEffectInterface), false },  // 190080710
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANiagaraLensEffectBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANiagaraLensEffectBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANiagaraLensEffectBase_Statics::ClassParams = {
		&ANiagaraLensEffectBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANiagaraLensEffectBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraLensEffectBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ANiagaraLensEffectBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANiagaraLensEffectBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANiagaraLensEffectBase()
	{
		if (!Z_Registration_Info_UClass_ANiagaraLensEffectBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANiagaraLensEffectBase.OuterSingleton, Z_Construct_UClass_ANiagaraLensEffectBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANiagaraLensEffectBase.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<ANiagaraLensEffectBase>()
	{
		return ANiagaraLensEffectBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANiagaraLensEffectBase);
	ANiagaraLensEffectBase::~ANiagaraLensEffectBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraLensEffectBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraLensEffectBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANiagaraLensEffectBase, ANiagaraLensEffectBase::StaticClass, TEXT("ANiagaraLensEffectBase"), &Z_Registration_Info_UClass_ANiagaraLensEffectBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANiagaraLensEffectBase), 53125845U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraLensEffectBase_h_1319408368(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraLensEffectBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraLensEffectBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
