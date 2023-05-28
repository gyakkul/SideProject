// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmitterCameraLensEffectBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AEmitter();
	ENGINE_API UClass* Z_Construct_UClass_AEmitterCameraLensEffectBase();
	ENGINE_API UClass* Z_Construct_UClass_AEmitterCameraLensEffectBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraLensEffectInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AEmitterCameraLensEffectBase::StaticRegisterNativesAEmitterCameraLensEffectBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEmitterCameraLensEffectBase);
	UClass* Z_Construct_UClass_AEmitterCameraLensEffectBase_NoRegister()
	{
		return AEmitterCameraLensEffectBase::StaticClass();
	}
	struct Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PS_CameraEffect_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PS_CameraEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_BaseCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseFOV_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseFOV;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistFromCamera_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistFromCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEmitter,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Activation Components|Activation Input Collision Game|Damage" },
		{ "IncludePath", "Particles/EmitterCameraLensEffectBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_PS_CameraEffect_MetaData[] = {
		{ "Category", "EmitterCameraLensEffectBase" },
		{ "Comment", "/** Particle System to use */" },
		{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
		{ "ToolTip", "Particle System to use" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_PS_CameraEffect = { "PS_CameraEffect", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEmitterCameraLensEffectBase, PS_CameraEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_PS_CameraEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_PS_CameraEffect_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_BaseCamera_MetaData[] = {
		{ "Comment", "/** Camera this emitter is attached to, will be notified when emitter is destroyed */" },
		{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
		{ "ToolTip", "Camera this emitter is attached to, will be notified when emitter is destroyed" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_BaseCamera = { "BaseCamera", nullptr, (EPropertyFlags)0x0024080000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEmitterCameraLensEffectBase, BaseCamera), Z_Construct_UClass_APlayerCameraManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_BaseCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_BaseCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_RelativeTransform_MetaData[] = {
		{ "Category", "EmitterCameraLensEffectBase" },
		{ "Comment", "/** \n\x09 * Effect-to-camera transform to allow arbitrary placement of the particle system .\n\x09 * Note the X component of the location will be scaled with camera fov to keep the lens effect the same apparent size.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
		{ "ToolTip", "Effect-to-camera transform to allow arbitrary placement of the particle system .\nNote the X component of the location will be scaled with camera fov to keep the lens effect the same apparent size." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_RelativeTransform = { "RelativeTransform", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEmitterCameraLensEffectBase, RelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_RelativeTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_RelativeTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_BaseFOV_MetaData[] = {
		{ "Category", "EmitterCameraLensEffectBase" },
		{ "Comment", "/** This is the assumed FOV for which the effect was authored. The code will make automatic adjustments to make it look the same at different FOVs */" },
		{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
		{ "ToolTip", "This is the assumed FOV for which the effect was authored. The code will make automatic adjustments to make it look the same at different FOVs" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_BaseFOV = { "BaseFOV", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEmitterCameraLensEffectBase, BaseFOV), METADATA_PARAMS(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_BaseFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_BaseFOV_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bAllowMultipleInstances_MetaData[] = {
		{ "Category", "EmitterCameraLensEffectBase" },
		{ "Comment", "/** true if multiple instances of this emitter can exist simultaneously, false otherwise.  */" },
		{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
		{ "ToolTip", "true if multiple instances of this emitter can exist simultaneously, false otherwise." },
	};
#endif
	void Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bAllowMultipleInstances_SetBit(void* Obj)
	{
		((AEmitterCameraLensEffectBase*)Obj)->bAllowMultipleInstances = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bAllowMultipleInstances = { "bAllowMultipleInstances", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AEmitterCameraLensEffectBase), &Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bAllowMultipleInstances_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bAllowMultipleInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bAllowMultipleInstances_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bResetWhenRetriggered_MetaData[] = {
		{ "Category", "EmitterCameraLensEffectBase" },
		{ "Comment", "/** If bAllowMultipleInstances is true and this effect is retriggered, the particle system will be reset if this is true */" },
		{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
		{ "ToolTip", "If bAllowMultipleInstances is true and this effect is retriggered, the particle system will be reset if this is true" },
	};
#endif
	void Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bResetWhenRetriggered_SetBit(void* Obj)
	{
		((AEmitterCameraLensEffectBase*)Obj)->bResetWhenRetriggered = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bResetWhenRetriggered = { "bResetWhenRetriggered", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(AEmitterCameraLensEffectBase), &Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bResetWhenRetriggered_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bResetWhenRetriggered_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bResetWhenRetriggered_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame_Inner = { "EmittersToTreatAsSame", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame_MetaData[] = {
		{ "Category", "EmitterCameraLensEffectBase" },
		{ "Comment", "/** \n\x09 *  If an emitter class in this array is currently playing, do not play this effect.\n\x09 *  Useful for preventing multiple similar or expensive camera effects from playing simultaneously.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
		{ "MustImplement", "/Script/Engine.CameraLensEffectInterface" },
		{ "ToolTip", "If an emitter class in this array is currently playing, do not play this effect.\nUseful for preventing multiple similar or expensive camera effects from playing simultaneously." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame = { "EmittersToTreatAsSame", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEmitterCameraLensEffectBase, EmittersToTreatAsSame), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_DistFromCamera_MetaData[] = {
		{ "Comment", "/** UE_DEPRECATED(4.11) */" },
		{ "ModuleRelativePath", "Classes/Particles/EmitterCameraLensEffectBase.h" },
		{ "ToolTip", "UE_DEPRECATED(4.11)" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_DistFromCamera = { "DistFromCamera", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AEmitterCameraLensEffectBase, DistFromCamera_DEPRECATED), METADATA_PARAMS(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_DistFromCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_DistFromCamera_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_PS_CameraEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_BaseCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_RelativeTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_BaseFOV,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bAllowMultipleInstances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_bResetWhenRetriggered,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_EmittersToTreatAsSame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::NewProp_DistFromCamera,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCameraLensEffectInterface_NoRegister, (int32)VTABLE_OFFSET(AEmitterCameraLensEffectBase, ICameraLensEffectInterface), false },  // 190080710
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEmitterCameraLensEffectBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::ClassParams = {
		&AEmitterCameraLensEffectBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A5u,
		METADATA_PARAMS(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEmitterCameraLensEffectBase()
	{
		if (!Z_Registration_Info_UClass_AEmitterCameraLensEffectBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEmitterCameraLensEffectBase.OuterSingleton, Z_Construct_UClass_AEmitterCameraLensEffectBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEmitterCameraLensEffectBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<AEmitterCameraLensEffectBase>()
	{
		return AEmitterCameraLensEffectBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEmitterCameraLensEffectBase);
	AEmitterCameraLensEffectBase::~AEmitterCameraLensEffectBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEmitterCameraLensEffectBase, AEmitterCameraLensEffectBase::StaticClass, TEXT("AEmitterCameraLensEffectBase"), &Z_Registration_Info_UClass_AEmitterCameraLensEffectBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEmitterCameraLensEffectBase), 3697652858U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_2779703299(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_EmitterCameraLensEffectBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
