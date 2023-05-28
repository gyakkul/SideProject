// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h"
#include "../../Source/Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "../../Source/Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleModuleTypeDataMesh() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataBase();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataMesh();
	ENGINE_API UClass* Z_Construct_UClass_UParticleModuleTypeDataMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshCameraFacingOptions();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshCameraFacingUpAxis();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMeshScreenAlignment();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EParticleAxisLock();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRawDistributionVector();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshScreenAlignment;
	static UEnum* EMeshScreenAlignment_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshScreenAlignment.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshScreenAlignment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshScreenAlignment, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMeshScreenAlignment"));
		}
		return Z_Registration_Info_UEnum_EMeshScreenAlignment.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMeshScreenAlignment>()
	{
		return EMeshScreenAlignment_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMeshScreenAlignment_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMeshScreenAlignment_Statics::Enumerators[] = {
		{ "PSMA_MeshFaceCameraWithRoll", (int64)PSMA_MeshFaceCameraWithRoll },
		{ "PSMA_MeshFaceCameraWithSpin", (int64)PSMA_MeshFaceCameraWithSpin },
		{ "PSMA_MeshFaceCameraWithLockedAxis", (int64)PSMA_MeshFaceCameraWithLockedAxis },
		{ "PSMA_MAX", (int64)PSMA_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMeshScreenAlignment_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
		{ "PSMA_MAX.Name", "PSMA_MAX" },
		{ "PSMA_MeshFaceCameraWithLockedAxis.DisplayName", "Face Camera With Locked-Axis" },
		{ "PSMA_MeshFaceCameraWithLockedAxis.Name", "PSMA_MeshFaceCameraWithLockedAxis" },
		{ "PSMA_MeshFaceCameraWithRoll.DisplayName", "Face Camera With Roll" },
		{ "PSMA_MeshFaceCameraWithRoll.Name", "PSMA_MeshFaceCameraWithRoll" },
		{ "PSMA_MeshFaceCameraWithSpin.DisplayName", "Face Camera With Spin" },
		{ "PSMA_MeshFaceCameraWithSpin.Name", "PSMA_MeshFaceCameraWithSpin" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMeshScreenAlignment_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMeshScreenAlignment",
		"EMeshScreenAlignment",
		Z_Construct_UEnum_Engine_EMeshScreenAlignment_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshScreenAlignment_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMeshScreenAlignment_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshScreenAlignment_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMeshScreenAlignment()
	{
		if (!Z_Registration_Info_UEnum_EMeshScreenAlignment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshScreenAlignment.InnerSingleton, Z_Construct_UEnum_Engine_EMeshScreenAlignment_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshScreenAlignment.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshCameraFacingUpAxis;
	static UEnum* EMeshCameraFacingUpAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshCameraFacingUpAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshCameraFacingUpAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshCameraFacingUpAxis, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMeshCameraFacingUpAxis"));
		}
		return Z_Registration_Info_UEnum_EMeshCameraFacingUpAxis.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMeshCameraFacingUpAxis>()
	{
		return EMeshCameraFacingUpAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMeshCameraFacingUpAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMeshCameraFacingUpAxis_Statics::Enumerators[] = {
		{ "CameraFacing_NoneUP", (int64)CameraFacing_NoneUP },
		{ "CameraFacing_ZUp", (int64)CameraFacing_ZUp },
		{ "CameraFacing_NegativeZUp", (int64)CameraFacing_NegativeZUp },
		{ "CameraFacing_YUp", (int64)CameraFacing_YUp },
		{ "CameraFacing_NegativeYUp", (int64)CameraFacing_NegativeYUp },
		{ "CameraFacing_MAX", (int64)CameraFacing_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMeshCameraFacingUpAxis_Statics::Enum_MetaDataParams[] = {
		{ "CameraFacing_MAX.Name", "CameraFacing_MAX" },
		{ "CameraFacing_NegativeYUp.DisplayName", "-Y Up" },
		{ "CameraFacing_NegativeYUp.Name", "CameraFacing_NegativeYUp" },
		{ "CameraFacing_NegativeZUp.DisplayName", "-Z Up" },
		{ "CameraFacing_NegativeZUp.Name", "CameraFacing_NegativeZUp" },
		{ "CameraFacing_NoneUP.DisplayName", "None" },
		{ "CameraFacing_NoneUP.Name", "CameraFacing_NoneUP" },
		{ "CameraFacing_YUp.DisplayName", "Y Up" },
		{ "CameraFacing_YUp.Name", "CameraFacing_YUp" },
		{ "CameraFacing_ZUp.DisplayName", "Z Up" },
		{ "CameraFacing_ZUp.Name", "CameraFacing_ZUp" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMeshCameraFacingUpAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMeshCameraFacingUpAxis",
		"EMeshCameraFacingUpAxis",
		Z_Construct_UEnum_Engine_EMeshCameraFacingUpAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshCameraFacingUpAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMeshCameraFacingUpAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshCameraFacingUpAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMeshCameraFacingUpAxis()
	{
		if (!Z_Registration_Info_UEnum_EMeshCameraFacingUpAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshCameraFacingUpAxis.InnerSingleton, Z_Construct_UEnum_Engine_EMeshCameraFacingUpAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshCameraFacingUpAxis.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMeshCameraFacingOptions;
	static UEnum* EMeshCameraFacingOptions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMeshCameraFacingOptions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMeshCameraFacingOptions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EMeshCameraFacingOptions, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EMeshCameraFacingOptions"));
		}
		return Z_Registration_Info_UEnum_EMeshCameraFacingOptions.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EMeshCameraFacingOptions>()
	{
		return EMeshCameraFacingOptions_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EMeshCameraFacingOptions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EMeshCameraFacingOptions_Statics::Enumerators[] = {
		{ "XAxisFacing_NoUp", (int64)XAxisFacing_NoUp },
		{ "XAxisFacing_ZUp", (int64)XAxisFacing_ZUp },
		{ "XAxisFacing_NegativeZUp", (int64)XAxisFacing_NegativeZUp },
		{ "XAxisFacing_YUp", (int64)XAxisFacing_YUp },
		{ "XAxisFacing_NegativeYUp", (int64)XAxisFacing_NegativeYUp },
		{ "LockedAxis_ZAxisFacing", (int64)LockedAxis_ZAxisFacing },
		{ "LockedAxis_NegativeZAxisFacing", (int64)LockedAxis_NegativeZAxisFacing },
		{ "LockedAxis_YAxisFacing", (int64)LockedAxis_YAxisFacing },
		{ "LockedAxis_NegativeYAxisFacing", (int64)LockedAxis_NegativeYAxisFacing },
		{ "VelocityAligned_ZAxisFacing", (int64)VelocityAligned_ZAxisFacing },
		{ "VelocityAligned_NegativeZAxisFacing", (int64)VelocityAligned_NegativeZAxisFacing },
		{ "VelocityAligned_YAxisFacing", (int64)VelocityAligned_YAxisFacing },
		{ "VelocityAligned_NegativeYAxisFacing", (int64)VelocityAligned_NegativeYAxisFacing },
		{ "EMeshCameraFacingOptions_MAX", (int64)EMeshCameraFacingOptions_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EMeshCameraFacingOptions_Statics::Enum_MetaDataParams[] = {
		{ "EMeshCameraFacingOptions_MAX.Name", "EMeshCameraFacingOptions_MAX" },
		{ "LockedAxis_NegativeYAxisFacing.DisplayName", "Locked Axis : -Y Axis Facing" },
		{ "LockedAxis_NegativeYAxisFacing.Name", "LockedAxis_NegativeYAxisFacing" },
		{ "LockedAxis_NegativeZAxisFacing.DisplayName", "Locked Axis : -Z Axis Facing" },
		{ "LockedAxis_NegativeZAxisFacing.Name", "LockedAxis_NegativeZAxisFacing" },
		{ "LockedAxis_YAxisFacing.DisplayName", "Locked Axis : Y Axis Facing" },
		{ "LockedAxis_YAxisFacing.Name", "LockedAxis_YAxisFacing" },
		{ "LockedAxis_ZAxisFacing.DisplayName", "Locked Axis : Z Axis Facing" },
		{ "LockedAxis_ZAxisFacing.Name", "LockedAxis_ZAxisFacing" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
		{ "VelocityAligned_NegativeYAxisFacing.DisplayName", "Velocity Aligned : -Y Axis Facing" },
		{ "VelocityAligned_NegativeYAxisFacing.Name", "VelocityAligned_NegativeYAxisFacing" },
		{ "VelocityAligned_NegativeZAxisFacing.DisplayName", "Velocity Aligned : -Z Axis Facing" },
		{ "VelocityAligned_NegativeZAxisFacing.Name", "VelocityAligned_NegativeZAxisFacing" },
		{ "VelocityAligned_YAxisFacing.DisplayName", "Velocity Aligned : Y Axis Facing" },
		{ "VelocityAligned_YAxisFacing.Name", "VelocityAligned_YAxisFacing" },
		{ "VelocityAligned_ZAxisFacing.DisplayName", "Velocity Aligned : Z Axis Facing" },
		{ "VelocityAligned_ZAxisFacing.Name", "VelocityAligned_ZAxisFacing" },
		{ "XAxisFacing_NegativeYUp.DisplayName", "X Axis Facing : -Y Up" },
		{ "XAxisFacing_NegativeYUp.Name", "XAxisFacing_NegativeYUp" },
		{ "XAxisFacing_NegativeZUp.DisplayName", "X Axis Facing : -Z Up" },
		{ "XAxisFacing_NegativeZUp.Name", "XAxisFacing_NegativeZUp" },
		{ "XAxisFacing_NoUp.DisplayName", "X Axis Facing : No Up" },
		{ "XAxisFacing_NoUp.Name", "XAxisFacing_NoUp" },
		{ "XAxisFacing_YUp.DisplayName", "X Axis Facing : Y Up" },
		{ "XAxisFacing_YUp.Name", "XAxisFacing_YUp" },
		{ "XAxisFacing_ZUp.DisplayName", "X Axis Facing : Z Up" },
		{ "XAxisFacing_ZUp.Name", "XAxisFacing_ZUp" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EMeshCameraFacingOptions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EMeshCameraFacingOptions",
		"EMeshCameraFacingOptions",
		Z_Construct_UEnum_Engine_EMeshCameraFacingOptions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshCameraFacingOptions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EMeshCameraFacingOptions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EMeshCameraFacingOptions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EMeshCameraFacingOptions()
	{
		if (!Z_Registration_Info_UEnum_EMeshCameraFacingOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMeshCameraFacingOptions.InnerSingleton, Z_Construct_UEnum_Engine_EMeshCameraFacingOptions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMeshCameraFacingOptions.InnerSingleton;
	}
	void UParticleModuleTypeDataMesh::StaticRegisterNativesUParticleModuleTypeDataMesh()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UParticleModuleTypeDataMesh);
	UClass* Z_Construct_UClass_UParticleModuleTypeDataMesh_NoRegister()
	{
		return UParticleModuleTypeDataMesh::StaticClass();
	}
	struct Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODSizeScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LODSizeScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseStaticMeshLODs_MetaData[];
#endif
		static void NewProp_bUseStaticMeshLODs_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseStaticMeshLODs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CastShadows_MetaData[];
#endif
		static void NewProp_CastShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CastShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DoCollisions_MetaData[];
#endif
		static void NewProp_DoCollisions_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DoCollisions;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_MeshAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideMaterial_MetaData[];
#endif
		static void NewProp_bOverrideMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDefaultMotionBlurSettings_MetaData[];
#endif
		static void NewProp_bOverrideDefaultMotionBlurSettings_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDefaultMotionBlurSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMotionBlur_MetaData[];
#endif
		static void NewProp_bEnableMotionBlur_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMotionBlur;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RollPitchYawRange_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RollPitchYawRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisLockOption_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_AxisLockOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCameraFacing_MetaData[];
#endif
		static void NewProp_bCameraFacing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCameraFacing;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraFacingUpAxisOption_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CameraFacingUpAxisOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraFacingOption_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CameraFacingOption;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bApplyParticleRotationAsSpin_MetaData[];
#endif
		static void NewProp_bApplyParticleRotationAsSpin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bApplyParticleRotationAsSpin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFaceCameraDirectionRatherThanPosition_MetaData[];
#endif
		static void NewProp_bFaceCameraDirectionRatherThanPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFaceCameraDirectionRatherThanPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCollisionsConsiderPartilceSize_MetaData[];
#endif
		static void NewProp_bCollisionsConsiderPartilceSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollisionsConsiderPartilceSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UParticleModuleTypeDataBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Mesh Data" },
		{ "HideCategories", "Object Object Object" },
		{ "IncludePath", "Particles/TypeData/ParticleModuleTypeDataMesh.h" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** The static mesh to render at the particle positions */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
		{ "ToolTip", "The static mesh to render at the particle positions" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataMesh, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_Mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_LODSizeScale_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** use the static mesh's LOD setup and switch LODs based on largest particle's screen size*/" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
		{ "ToolTip", "use the static mesh's LOD setup and switch LODs based on largest particle's screen size" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_LODSizeScale = { "LODSizeScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataMesh, LODSizeScale), METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_LODSizeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_LODSizeScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bUseStaticMeshLODs_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** use the static mesh's LOD setup and switch LODs based on largest particle's screen size*/" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
		{ "ToolTip", "use the static mesh's LOD setup and switch LODs based on largest particle's screen size" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bUseStaticMeshLODs_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataMesh*)Obj)->bUseStaticMeshLODs = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bUseStaticMeshLODs = { "bUseStaticMeshLODs", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleTypeDataMesh), &Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bUseStaticMeshLODs_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bUseStaticMeshLODs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bUseStaticMeshLODs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_CastShadows_MetaData[] = {
		{ "Comment", "/** If true, has the meshes cast shadows */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
		{ "ToolTip", "If true, has the meshes cast shadows" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_CastShadows_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataMesh*)Obj)->CastShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_CastShadows = { "CastShadows", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleTypeDataMesh), &Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_CastShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_CastShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_CastShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_DoCollisions_MetaData[] = {
		{ "Comment", "/** UNUSED (the collision module dictates doing collisions) */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
		{ "ToolTip", "UNUSED (the collision module dictates doing collisions)" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_DoCollisions_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataMesh*)Obj)->DoCollisions = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_DoCollisions = { "DoCollisions", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleTypeDataMesh), &Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_DoCollisions_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_DoCollisions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_DoCollisions_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_MeshAlignment_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** \n\x09 *\x09The alignment to use on the meshes emitted.\n\x09 *\x09The RequiredModule->ScreenAlignment MUST be set to PSA_TypeSpecific to use.\n\x09 *\x09One of the following:\n\x09 *\x09PSMA_MeshFaceCameraWithRoll\n\x09 *\x09\x09""Face the camera allowing for rotation around the mesh-to-camera FVector \n\x09 *\x09\x09(amount provided by the standard particle sprite rotation).  \n\x09 *\x09PSMA_MeshFaceCameraWithSpin\n\x09 *\x09\x09""Face the camera allowing for the mesh to rotate about the tangential axis.  \n\x09 *\x09PSMA_MeshFaceCameraWithLockedAxis\n\x09 *\x09\x09""Face the camera while maintaining the up FVector as the locked direction.  \n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
		{ "ToolTip", "The alignment to use on the meshes emitted.\nThe RequiredModule->ScreenAlignment MUST be set to PSA_TypeSpecific to use.\nOne of the following:\nPSMA_MeshFaceCameraWithRoll\n        Face the camera allowing for rotation around the mesh-to-camera FVector\n        (amount provided by the standard particle sprite rotation).\nPSMA_MeshFaceCameraWithSpin\n        Face the camera allowing for the mesh to rotate about the tangential axis.\nPSMA_MeshFaceCameraWithLockedAxis\n        Face the camera while maintaining the up FVector as the locked direction." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_MeshAlignment = { "MeshAlignment", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataMesh, MeshAlignment), Z_Construct_UEnum_Engine_EMeshScreenAlignment, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_MeshAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_MeshAlignment_MetaData)) }; // 462164905
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bOverrideMaterial_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/**\n\x09 *\x09If true, use the emitter material when rendering rather than the one applied \n\x09 *\x09to the static mesh model.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
		{ "ToolTip", "If true, use the emitter material when rendering rather than the one applied\nto the static mesh model." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bOverrideMaterial_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataMesh*)Obj)->bOverrideMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bOverrideMaterial = { "bOverrideMaterial", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleTypeDataMesh), &Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bOverrideMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bOverrideMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bOverrideMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bOverrideDefaultMotionBlurSettings_MetaData[] = {
		{ "Category", "Mesh" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bOverrideDefaultMotionBlurSettings_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataMesh*)Obj)->bOverrideDefaultMotionBlurSettings = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bOverrideDefaultMotionBlurSettings = { "bOverrideDefaultMotionBlurSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleTypeDataMesh), &Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bOverrideDefaultMotionBlurSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bOverrideDefaultMotionBlurSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bOverrideDefaultMotionBlurSettings_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bEnableMotionBlur_MetaData[] = {
		{ "Category", "Mesh" },
		{ "EditCondition", "bOverrideDefaultMotionBlurSettings" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bEnableMotionBlur_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataMesh*)Obj)->bEnableMotionBlur = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bEnableMotionBlur = { "bEnableMotionBlur", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleTypeDataMesh), &Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bEnableMotionBlur_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bEnableMotionBlur_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bEnableMotionBlur_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_RollPitchYawRange_MetaData[] = {
		{ "Category", "Orientation" },
		{ "Comment", "/** The 'pre' rotation pitch (in degrees) to apply to the static mesh used. */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
		{ "ToolTip", "The 'pre' rotation pitch (in degrees) to apply to the static mesh used." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_RollPitchYawRange = { "RollPitchYawRange", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataMesh, RollPitchYawRange), Z_Construct_UScriptStruct_FRawDistributionVector, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_RollPitchYawRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_RollPitchYawRange_MetaData)) }; // 3056335262
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_AxisLockOption_MetaData[] = {
		{ "Category", "Orientation" },
		{ "Comment", "/**\n\x09 *\x09The axis to lock the mesh on. This overrides TypeSpecific mesh alignment as well as the LockAxis module.\n\x09 *\x09\x09""EPAL_NONE\x09\x09 -\x09No locking to an axis.\n\x09 *\x09\x09""EPAL_X\x09\x09\x09 -\x09Lock the mesh X-axis facing towards +X.\n\x09 *\x09\x09""EPAL_Y\x09\x09\x09 -\x09Lock the mesh X-axis facing towards +Y.\n\x09 *\x09\x09""EPAL_Z\x09\x09\x09 -\x09Lock the mesh X-axis facing towards +Z.\n\x09 *\x09\x09""EPAL_NEGATIVE_X\x09 -\x09Lock the mesh X-axis facing towards -X.\n\x09 *\x09\x09""EPAL_NEGATIVE_Y\x09 -\x09Lock the mesh X-axis facing towards -Y.\n\x09 *\x09\x09""EPAL_NEGATIVE_Z\x09 -\x09Lock the mesh X-axis facing towards -Z.\n\x09 *\x09\x09""EPAL_ROTATE_X\x09 -\x09Ignored for mesh emitters. Treated as EPAL_NONE.\n\x09 *\x09\x09""EPAL_ROTATE_Y\x09 -\x09Ignored for mesh emitters. Treated as EPAL_NONE.\n\x09 *\x09\x09""EPAL_ROTATE_Z\x09 -\x09Ignored for mesh emitters. Treated as EPAL_NONE.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
		{ "ToolTip", "The axis to lock the mesh on. This overrides TypeSpecific mesh alignment as well as the LockAxis module.\n        EPAL_NONE                -      No locking to an axis.\n        EPAL_X                   -      Lock the mesh X-axis facing towards +X.\n        EPAL_Y                   -      Lock the mesh X-axis facing towards +Y.\n        EPAL_Z                   -      Lock the mesh X-axis facing towards +Z.\n        EPAL_NEGATIVE_X  -      Lock the mesh X-axis facing towards -X.\n        EPAL_NEGATIVE_Y  -      Lock the mesh X-axis facing towards -Y.\n        EPAL_NEGATIVE_Z  -      Lock the mesh X-axis facing towards -Z.\n        EPAL_ROTATE_X    -      Ignored for mesh emitters. Treated as EPAL_NONE.\n        EPAL_ROTATE_Y    -      Ignored for mesh emitters. Treated as EPAL_NONE.\n        EPAL_ROTATE_Z    -      Ignored for mesh emitters. Treated as EPAL_NONE." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_AxisLockOption = { "AxisLockOption", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataMesh, AxisLockOption), Z_Construct_UEnum_Engine_EParticleAxisLock, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_AxisLockOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_AxisLockOption_MetaData)) }; // 4266016895
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bCameraFacing_MetaData[] = {
		{ "Category", "CameraFacing" },
		{ "Comment", "/**\n\x09 *\x09If true, then point the X-axis of the mesh towards the camera.\n\x09 *\x09When set, AxisLockOption as well as all other locked axis/screen alignment settings are ignored.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
		{ "ToolTip", "If true, then point the X-axis of the mesh towards the camera.\nWhen set, AxisLockOption as well as all other locked axis/screen alignment settings are ignored." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bCameraFacing_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataMesh*)Obj)->bCameraFacing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bCameraFacing = { "bCameraFacing", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleTypeDataMesh), &Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bCameraFacing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bCameraFacing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bCameraFacing_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_CameraFacingUpAxisOption_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09The axis of the mesh to point up when camera facing the X-axis.\n\x09 *\x09\x09""CameraFacing_NoneUP\x09\x09\x09No attempt to face an axis up or down.\n\x09 *\x09\x09""CameraFacing_ZUp\x09\x09\x09Z-axis of the mesh should attempt to point up.\n\x09 *\x09\x09""CameraFacing_NegativeZUp\x09Z-axis of the mesh should attempt to point down.\n\x09 *\x09\x09""CameraFacing_YUp\x09\x09\x09Y-axis of the mesh should attempt to point up.\n\x09 *\x09\x09""CameraFacing_NegativeYUp\x09Y-axis of the mesh should attempt to point down.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
		{ "ToolTip", "The axis of the mesh to point up when camera facing the X-axis.\n        CameraFacing_NoneUP                     No attempt to face an axis up or down.\n        CameraFacing_ZUp                        Z-axis of the mesh should attempt to point up.\n        CameraFacing_NegativeZUp        Z-axis of the mesh should attempt to point down.\n        CameraFacing_YUp                        Y-axis of the mesh should attempt to point up.\n        CameraFacing_NegativeYUp        Y-axis of the mesh should attempt to point down." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_CameraFacingUpAxisOption = { "CameraFacingUpAxisOption", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataMesh, CameraFacingUpAxisOption_DEPRECATED), Z_Construct_UEnum_Engine_EMeshCameraFacingUpAxis, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_CameraFacingUpAxisOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_CameraFacingUpAxisOption_MetaData)) }; // 4279068927
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_CameraFacingOption_MetaData[] = {
		{ "Category", "CameraFacing" },
		{ "Comment", "/**\n\x09 *\x09The camera facing option to use:\n\x09 *\x09""All camera facing options without locked axis assume X-axis will be facing the camera.\n\x09 *\x09\x09XAxisFacing_NoUp\x09\x09\x09\x09- X-axis camera facing, no attempt to face an axis up or down.\n\x09 *\x09\x09XAxisFacing_ZUp\x09\x09\x09\x09\x09- X-axis camera facing, Z-axis of the mesh should attempt to point up.\n\x09 *\x09\x09XAxisFacing_NegativeZUp\x09\x09\x09- X-axis camera facing, Z-axis of the mesh should attempt to point down.\n\x09 *\x09\x09XAxisFacing_YUp\x09\x09\x09\x09\x09- X-axis camera facing, Y-axis of the mesh should attempt to point up.\n\x09 *\x09\x09XAxisFacing_NegativeYUp\x09\x09\x09- X-axis camera facing, Y-axis of the mesh should attempt to point down.\n\x09 *\x09""All axis-locked camera facing options assume the AxisLockOption is set. EPAL_NONE will be treated as EPAL_X.\n\x09 *\x09\x09LockedAxis_ZAxisFacing\x09\x09\x09- X-axis locked on AxisLockOption axis, rotate Z-axis of the mesh to face towards camera.\n\x09 *\x09\x09LockedAxis_NegativeZAxisFacing\x09- X-axis locked on AxisLockOption axis, rotate Z-axis of the mesh to face away from camera.\n\x09 *\x09\x09LockedAxis_YAxisFacing\x09\x09\x09- X-axis locked on AxisLockOption axis, rotate Y-axis of the mesh to face towards camera.\n\x09 *\x09\x09LockedAxis_NegativeYAxisFacing\x09- X-axis locked on AxisLockOption axis, rotate Y-axis of the mesh to face away from camera.\n\x09 *\x09""All velocity-aligned options do NOT require the ScreenAlignment be set to PSA_Velocity.\n\x09 *\x09""Doing so will result in additional work being performed... (it will orient the mesh twice).\n\x09 *\x09\x09VelocityAligned_ZAxisFacing         - X-axis aligned to the velocity, rotate the Z-axis of the mesh to face towards camera.\n\x09 *\x09\x09VelocityAligned_NegativeZAxisFacing - X-axis aligned to the velocity, rotate the Z-axis of the mesh to face away from camera.\n\x09 *\x09\x09VelocityAligned_YAxisFacing         - X-axis aligned to the velocity, rotate the Y-axis of the mesh to face towards camera.\n\x09 *\x09\x09VelocityAligned_NegativeYAxisFacing - X-axis aligned to the velocity, rotate the Y-axis of the mesh to face away from camera.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
		{ "ToolTip", "The camera facing option to use:\nAll camera facing options without locked axis assume X-axis will be facing the camera.\n        XAxisFacing_NoUp                                - X-axis camera facing, no attempt to face an axis up or down.\n        XAxisFacing_ZUp                                 - X-axis camera facing, Z-axis of the mesh should attempt to point up.\n        XAxisFacing_NegativeZUp                 - X-axis camera facing, Z-axis of the mesh should attempt to point down.\n        XAxisFacing_YUp                                 - X-axis camera facing, Y-axis of the mesh should attempt to point up.\n        XAxisFacing_NegativeYUp                 - X-axis camera facing, Y-axis of the mesh should attempt to point down.\nAll axis-locked camera facing options assume the AxisLockOption is set. EPAL_NONE will be treated as EPAL_X.\n        LockedAxis_ZAxisFacing                  - X-axis locked on AxisLockOption axis, rotate Z-axis of the mesh to face towards camera.\n        LockedAxis_NegativeZAxisFacing  - X-axis locked on AxisLockOption axis, rotate Z-axis of the mesh to face away from camera.\n        LockedAxis_YAxisFacing                  - X-axis locked on AxisLockOption axis, rotate Y-axis of the mesh to face towards camera.\n        LockedAxis_NegativeYAxisFacing  - X-axis locked on AxisLockOption axis, rotate Y-axis of the mesh to face away from camera.\nAll velocity-aligned options do NOT require the ScreenAlignment be set to PSA_Velocity.\nDoing so will result in additional work being performed... (it will orient the mesh twice).\n        VelocityAligned_ZAxisFacing         - X-axis aligned to the velocity, rotate the Z-axis of the mesh to face towards camera.\n        VelocityAligned_NegativeZAxisFacing - X-axis aligned to the velocity, rotate the Z-axis of the mesh to face away from camera.\n        VelocityAligned_YAxisFacing         - X-axis aligned to the velocity, rotate the Y-axis of the mesh to face towards camera.\n        VelocityAligned_NegativeYAxisFacing - X-axis aligned to the velocity, rotate the Y-axis of the mesh to face away from camera." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_CameraFacingOption = { "CameraFacingOption", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UParticleModuleTypeDataMesh, CameraFacingOption), Z_Construct_UEnum_Engine_EMeshCameraFacingOptions, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_CameraFacingOption_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_CameraFacingOption_MetaData)) }; // 3061521176
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bApplyParticleRotationAsSpin_MetaData[] = {
		{ "Category", "CameraFacing" },
		{ "Comment", "/** \n\x09 *\x09If true, apply 'sprite' particle rotation about the orientation axis (direction mesh is pointing).\n\x09 *\x09If false, apply 'sprite' particle rotation about the camera facing axis.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
		{ "ToolTip", "If true, apply 'sprite' particle rotation about the orientation axis (direction mesh is pointing).\nIf false, apply 'sprite' particle rotation about the camera facing axis." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bApplyParticleRotationAsSpin_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataMesh*)Obj)->bApplyParticleRotationAsSpin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bApplyParticleRotationAsSpin = { "bApplyParticleRotationAsSpin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleTypeDataMesh), &Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bApplyParticleRotationAsSpin_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bApplyParticleRotationAsSpin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bApplyParticleRotationAsSpin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bFaceCameraDirectionRatherThanPosition_MetaData[] = {
		{ "Category", "CameraFacing" },
		{ "Comment", "/** \n\x09*\x09If true, all camera facing options will point the mesh against the camera's view direction rather than pointing at the cameras location. \n\x09*\x09If false, the camera facing will point to the cameras position as normal.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
		{ "ToolTip", "If true, all camera facing options will point the mesh against the camera's view direction rather than pointing at the cameras location.\nIf false, the camera facing will point to the cameras position as normal." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bFaceCameraDirectionRatherThanPosition_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataMesh*)Obj)->bFaceCameraDirectionRatherThanPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bFaceCameraDirectionRatherThanPosition = { "bFaceCameraDirectionRatherThanPosition", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleTypeDataMesh), &Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bFaceCameraDirectionRatherThanPosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bFaceCameraDirectionRatherThanPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bFaceCameraDirectionRatherThanPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bCollisionsConsiderPartilceSize_MetaData[] = {
		{ "Category", "Collision" },
		{ "Comment", "/**\n\x09*\x09If true, all collisions for mesh particle on this emitter will take the particle size into account.\n\x09*\x09If false, particle size will be ignored in collision checks.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Particles/TypeData/ParticleModuleTypeDataMesh.h" },
		{ "ToolTip", "If true, all collisions for mesh particle on this emitter will take the particle size into account.\nIf false, particle size will be ignored in collision checks." },
	};
#endif
	void Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bCollisionsConsiderPartilceSize_SetBit(void* Obj)
	{
		((UParticleModuleTypeDataMesh*)Obj)->bCollisionsConsiderPartilceSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bCollisionsConsiderPartilceSize = { "bCollisionsConsiderPartilceSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UParticleModuleTypeDataMesh), &Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bCollisionsConsiderPartilceSize_SetBit, METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bCollisionsConsiderPartilceSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bCollisionsConsiderPartilceSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_Mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_LODSizeScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bUseStaticMeshLODs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_CastShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_DoCollisions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_MeshAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bOverrideMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bOverrideDefaultMotionBlurSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bEnableMotionBlur,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_RollPitchYawRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_AxisLockOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bCameraFacing,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_CameraFacingUpAxisOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_CameraFacingOption,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bApplyParticleRotationAsSpin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bFaceCameraDirectionRatherThanPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::NewProp_bCollisionsConsiderPartilceSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UParticleModuleTypeDataMesh>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::ClassParams = {
		&UParticleModuleTypeDataMesh::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UParticleModuleTypeDataMesh()
	{
		if (!Z_Registration_Info_UClass_UParticleModuleTypeDataMesh.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UParticleModuleTypeDataMesh.OuterSingleton, Z_Construct_UClass_UParticleModuleTypeDataMesh_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UParticleModuleTypeDataMesh.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UParticleModuleTypeDataMesh>()
	{
		return UParticleModuleTypeDataMesh::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UParticleModuleTypeDataMesh);
	UParticleModuleTypeDataMesh::~UParticleModuleTypeDataMesh() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UParticleModuleTypeDataMesh)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_Statics::EnumInfo[] = {
		{ EMeshScreenAlignment_StaticEnum, TEXT("EMeshScreenAlignment"), &Z_Registration_Info_UEnum_EMeshScreenAlignment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 462164905U) },
		{ EMeshCameraFacingUpAxis_StaticEnum, TEXT("EMeshCameraFacingUpAxis"), &Z_Registration_Info_UEnum_EMeshCameraFacingUpAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4279068927U) },
		{ EMeshCameraFacingOptions_StaticEnum, TEXT("EMeshCameraFacingOptions"), &Z_Registration_Info_UEnum_EMeshCameraFacingOptions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3061521176U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UParticleModuleTypeDataMesh, UParticleModuleTypeDataMesh::StaticClass, TEXT("UParticleModuleTypeDataMesh"), &Z_Registration_Info_UClass_UParticleModuleTypeDataMesh, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UParticleModuleTypeDataMesh), 129675727U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_3411189097(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Particles_TypeData_ParticleModuleTypeDataMesh_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
