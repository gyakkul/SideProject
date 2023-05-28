// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleVectorFieldLocal() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldLocal();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleVectorFieldLocal_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UVectorField_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleVectorFieldLocal::StaticRegisterNativesUParticleModuleVectorFieldLocal()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleVectorFieldLocal);
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldLocal_NoRegister()
	{
		return UParticleModuleVectorFieldLocal::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorField_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VectorField;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeTranslation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeTranslation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeScale3D_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeScale3D;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Intensity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Intensity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tightness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Tightness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreComponentTransform_MetaData[];
#endif
		static void NewProp_bIgnoreComponentTransform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreComponentTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTileX_MetaData[];
#endif
		static void NewProp_bTileX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTileX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTileY_MetaData[];
#endif
		static void NewProp_bTileY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTileY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTileZ_MetaData[];
#endif
		static void NewProp_bTileZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTileZ;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseFixDT_MetaData[];
#endif
		static void NewProp_bUseFixDT_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseFixDT;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleVectorFieldBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Local Vector Field" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_VectorField_MetaData[] = {
		{ "Category", "VectorField" },
		{ "Comment", "/** Vector field asset to use. */" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
		{ "ToolTip", "Vector field asset to use." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_VectorField = { "VectorField", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldLocal, VectorField), Z_Construct_UClass_UVectorField_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_VectorField_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_VectorField_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeTranslation_MetaData[] = {
		{ "Category", "VectorField" },
		{ "Comment", "/** Translation of the vector field relative to the emitter. */" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
		{ "ToolTip", "Translation of the vector field relative to the emitter." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeTranslation = { "RelativeTranslation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldLocal, RelativeTranslation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeTranslation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeRotation_MetaData[] = {
		{ "Category", "VectorField" },
		{ "Comment", "/** Rotation of the vector field relative to the emitter. */" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
		{ "ToolTip", "Rotation of the vector field relative to the emitter." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeRotation = { "RelativeRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldLocal, RelativeRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeScale3D_MetaData[] = {
		{ "Category", "VectorField" },
		{ "Comment", "/** Scale of the vector field relative to the emitter. */" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
		{ "ToolTip", "Scale of the vector field relative to the emitter." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeScale3D = { "RelativeScale3D", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldLocal, RelativeScale3D), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeScale3D_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeScale3D_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_Intensity_MetaData[] = {
		{ "Category", "VectorField" },
		{ "Comment", "/** Intensity of the local vector field. */" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
		{ "ToolTip", "Intensity of the local vector field." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_Intensity = { "Intensity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldLocal, Intensity), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_Intensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_Intensity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_Tightness_MetaData[] = {
		{ "Category", "VectorField" },
		{ "Comment", "/** Tightness tweak value: 0: Force 1: Velocity. */" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
		{ "ToolTip", "Tightness tweak value: 0: Force 1: Velocity." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_Tightness = { "Tightness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleVectorFieldLocal, Tightness), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_Tightness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_Tightness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bIgnoreComponentTransform_MetaData[] = {
		{ "Category", "VectorField" },
		{ "Comment", "/** Ignore component transform. */" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
		{ "ToolTip", "Ignore component transform." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bIgnoreComponentTransform_SetBit(void* Obj)
	{
		((UParticleModuleVectorFieldLocal*)Obj)->bIgnoreComponentTransform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bIgnoreComponentTransform = { "bIgnoreComponentTransform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleVectorFieldLocal), &Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bIgnoreComponentTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bIgnoreComponentTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bIgnoreComponentTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileX_MetaData[] = {
		{ "Category", "VectorField" },
		{ "Comment", "/** Tile vector field in x axis? */" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
		{ "ToolTip", "Tile vector field in x axis?" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileX_SetBit(void* Obj)
	{
		((UParticleModuleVectorFieldLocal*)Obj)->bTileX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileX = { "bTileX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleVectorFieldLocal), &Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileX_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileY_MetaData[] = {
		{ "Category", "VectorField" },
		{ "Comment", "/** Tile vector field in y axis? */" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
		{ "ToolTip", "Tile vector field in y axis?" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileY_SetBit(void* Obj)
	{
		((UParticleModuleVectorFieldLocal*)Obj)->bTileY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileY = { "bTileY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleVectorFieldLocal), &Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileY_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileZ_MetaData[] = {
		{ "Category", "VectorField" },
		{ "Comment", "/** Tile vector field in z axis? */" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
		{ "ToolTip", "Tile vector field in z axis?" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileZ_SetBit(void* Obj)
	{
		((UParticleModuleVectorFieldLocal*)Obj)->bTileZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileZ = { "bTileZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleVectorFieldLocal), &Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileZ_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileZ_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bUseFixDT_MetaData[] = {
		{ "Category", "VectorField" },
		{ "Comment", "/** Use fix delta time in the simulation? */" },
		{ "ModuleRelativePath", "Classes/Particles/VectorField/ParticleModuleVectorFieldLocal.h" },
		{ "ToolTip", "Use fix delta time in the simulation?" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bUseFixDT_SetBit(void* Obj)
	{
		((UParticleModuleVectorFieldLocal*)Obj)->bUseFixDT = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bUseFixDT = { "bUseFixDT", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleVectorFieldLocal), &Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bUseFixDT_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bUseFixDT_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bUseFixDT_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_VectorField,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_RelativeScale3D,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_Intensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_Tightness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bIgnoreComponentTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bTileZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::NewProp_bUseFixDT,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleVectorFieldLocal>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::ClassParams = {
		&UParticleModuleVectorFieldLocal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleVectorFieldLocal()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleVectorFieldLocal.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleVectorFieldLocal.OuterSingleton, Z_Construct_UClass_UParticleModuleVectorFieldLocal_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleVectorFieldLocal.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleVectorFieldLocal>()
	{
		return UParticleModuleVectorFieldLocal::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleVectorFieldLocal);
	UParticleModuleVectorFieldLocal::~UParticleModuleVectorFieldLocal() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldLocal_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldLocal_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleVectorFieldLocal, UParticleModuleVectorFieldLocal::StaticClass, TEXT("UParticleModuleVectorFieldLocal"), &Z_Registration_Info_UClass_UParticleModuleVectorFieldLocal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleVectorFieldLocal), 2141202126U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldLocal_h_470400524(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldLocal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_VectorField_ParticleModuleVectorFieldLocal_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
