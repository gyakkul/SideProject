// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleLocationPrimitiveBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionFloat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UParticleModuleLocationPrimitiveBase::StaticRegisterNativesUParticleModuleLocationPrimitiveBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleLocationPrimitiveBase);
	UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_NoRegister()
	{
		return UParticleModuleLocationPrimitiveBase::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Positive_X_MetaData[];
#endif
		static void NewProp_Positive_X_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Positive_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Positive_Y_MetaData[];
#endif
		static void NewProp_Positive_Y_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Positive_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Positive_Z_MetaData[];
#endif
		static void NewProp_Positive_Z_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Positive_Z;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Negative_X_MetaData[];
#endif
		static void NewProp_Negative_X_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Negative_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Negative_Y_MetaData[];
#endif
		static void NewProp_Negative_Y_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Negative_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Negative_Z_MetaData[];
#endif
		static void NewProp_Negative_Z_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Negative_Z;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceOnly_MetaData[];
#endif
		static void NewProp_SurfaceOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SurfaceOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Velocity_MetaData[];
#endif
		static void NewProp_Velocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Velocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VelocityScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleLocationBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_X_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Whether the positive X axis is valid for spawning. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
		{ "ToolTip", "Whether the positive X axis is valid for spawning." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_X_SetBit(void* Obj)
	{
		((UParticleModuleLocationPrimitiveBase*)Obj)->Positive_X = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_X = { "Positive_X", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleLocationPrimitiveBase), &Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_X_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_Y_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Whether the positive Y axis is valid for spawning. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
		{ "ToolTip", "Whether the positive Y axis is valid for spawning." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_Y_SetBit(void* Obj)
	{
		((UParticleModuleLocationPrimitiveBase*)Obj)->Positive_Y = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_Y = { "Positive_Y", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleLocationPrimitiveBase), &Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_Y_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_Z_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Whether the positive Z axis is valid for spawning. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
		{ "ToolTip", "Whether the positive Z axis is valid for spawning." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_Z_SetBit(void* Obj)
	{
		((UParticleModuleLocationPrimitiveBase*)Obj)->Positive_Z = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_Z = { "Positive_Z", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleLocationPrimitiveBase), &Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_Z_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_Z_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_X_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Whether the negative X axis is valid for spawning. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
		{ "ToolTip", "Whether the negative X axis is valid for spawning." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_X_SetBit(void* Obj)
	{
		((UParticleModuleLocationPrimitiveBase*)Obj)->Negative_X = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_X = { "Negative_X", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleLocationPrimitiveBase), &Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_X_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_Y_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Whether the negative Y axis is valid for spawning. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
		{ "ToolTip", "Whether the negative Y axis is valid for spawning." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_Y_SetBit(void* Obj)
	{
		((UParticleModuleLocationPrimitiveBase*)Obj)->Negative_Y = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_Y = { "Negative_Y", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleLocationPrimitiveBase), &Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_Y_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_Z_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Whether the negative Zaxis is valid for spawning. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
		{ "ToolTip", "Whether the negative Zaxis is valid for spawning." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_Z_SetBit(void* Obj)
	{
		((UParticleModuleLocationPrimitiveBase*)Obj)->Negative_Z = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_Z = { "Negative_Z", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleLocationPrimitiveBase), &Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_Z_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_Z_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_SurfaceOnly_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Whether particles will only spawn on the surface of the primitive. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
		{ "ToolTip", "Whether particles will only spawn on the surface of the primitive." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_SurfaceOnly_SetBit(void* Obj)
	{
		((UParticleModuleLocationPrimitiveBase*)Obj)->SurfaceOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_SurfaceOnly = { "SurfaceOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleLocationPrimitiveBase), &Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_SurfaceOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_SurfaceOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_SurfaceOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Velocity_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** Whether the particle should get its velocity from the position within the primitive. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
		{ "ToolTip", "Whether the particle should get its velocity from the position within the primitive." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Velocity_SetBit(void* Obj)
	{
		((UParticleModuleLocationPrimitiveBase*)Obj)->Velocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Velocity = { "Velocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleLocationPrimitiveBase), &Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Velocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Velocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Velocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_VelocityScale_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** The scale applied to the velocity. (Only used if 'Velocity' is checked). */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
		{ "ToolTip", "The scale applied to the velocity. (Only used if 'Velocity' is checked)." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_VelocityScale = { "VelocityScale", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationPrimitiveBase, VelocityScale), Z_Construct_UScriptStruct_FRawDistributionFloat, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_VelocityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_VelocityScale_MetaData)) }; // 2827880765
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_StartLocation_MetaData[] = {
		{ "Category", "Location" },
		{ "Comment", "/** The location of the bounding primitive relative to the position of the emitter. */" },
		{ "ModuleRelativePath", "Classes/Particles/Location/ParticleModuleLocationPrimitiveBase.h" },
		{ "ToolTip", "The location of the bounding primitive relative to the position of the emitter." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_StartLocation = { "StartLocation", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleLocationPrimitiveBase, StartLocation), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_StartLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_StartLocation_MetaData)) }; // 3056335262
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Positive_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Negative_Z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_SurfaceOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_Velocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_VelocityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::NewProp_StartLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleLocationPrimitiveBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::ClassParams = {
		&UParticleModuleLocationPrimitiveBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleLocationPrimitiveBase()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveBase.OuterSingleton, Z_Construct_UClass_UParticleModuleLocationPrimitiveBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleLocationPrimitiveBase>()
	{
		return UParticleModuleLocationPrimitiveBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleLocationPrimitiveBase);
	UParticleModuleLocationPrimitiveBase::~UParticleModuleLocationPrimitiveBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleLocationPrimitiveBase, UParticleModuleLocationPrimitiveBase::StaticClass, TEXT("UParticleModuleLocationPrimitiveBase"), &Z_Registration_Info_UClass_UParticleModuleLocationPrimitiveBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleLocationPrimitiveBase), 1018047010U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveBase_h_3289261832(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_Location_ParticleModuleLocationPrimitiveBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
