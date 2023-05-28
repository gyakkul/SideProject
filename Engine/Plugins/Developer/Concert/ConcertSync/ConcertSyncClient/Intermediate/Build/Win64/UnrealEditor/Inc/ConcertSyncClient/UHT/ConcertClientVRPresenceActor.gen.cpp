// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConcertClientVRPresenceActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConcertClientVRPresenceActor() {}
// Cross Module References
	CONCERTSYNCCLIENT_API UClass* Z_Construct_UClass_AConcertClientPresenceActor();
	CONCERTSYNCCLIENT_API UClass* Z_Construct_UClass_AConcertClientVRPresenceActor();
	CONCERTSYNCCLIENT_API UClass* Z_Construct_UClass_AConcertClientVRPresenceActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ConcertSyncClient();
// End Cross Module References
	void AConcertClientVRPresenceActor::StaticRegisterNativesAConcertClientVRPresenceActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AConcertClientVRPresenceActor);
	UClass* Z_Construct_UClass_AConcertClientVRPresenceActor_NoRegister()
	{
		return AConcertClientVRPresenceActor::StaticClass();
	}
	struct Z_Construct_UClass_AConcertClientVRPresenceActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftControllerMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LeftControllerMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightControllerMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RightControllerMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserMid_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LaserMid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserCoreMid_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LaserCoreMid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LaserThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LaserThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftLaserSplineComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LeftLaserSplineComponent;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LeftLaserSplineMeshComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftLaserSplineMeshComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_LeftLaserSplineMeshComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightLaserSplineComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RightLaserSplineComponent;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RightLaserSplineMeshComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightLaserSplineMeshComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_RightLaserSplineMeshComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLeftControllerVisible_MetaData[];
#endif
		static void NewProp_bIsLeftControllerVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLeftControllerVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRightControllerVisible_MetaData[];
#endif
		static void NewProp_bIsRightControllerVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRightControllerVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsLeftLaserVisible_MetaData[];
#endif
		static void NewProp_bIsLeftLaserVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsLeftLaserVisible;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRightLaserVisible_MetaData[];
#endif
		static void NewProp_bIsRightLaserVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRightLaserVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AConcertClientPresenceActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ConcertSyncClient,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n  * A ConcertClientVRPresenceActor is a child of AConcertClientPresenceActor that is used to represent users in VR \n  */" },
		{ "IncludePath", "ConcertClientVRPresenceActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ConcertClientVRPresenceActor.h" },
		{ "ToolTip", "A ConcertClientVRPresenceActor is a child of AConcertClientPresenceActor that is used to represent users in VR" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LeftControllerMeshComponent_MetaData[] = {
		{ "Comment", "/** The left controller mesh */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConcertClientVRPresenceActor.h" },
		{ "ToolTip", "The left controller mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LeftControllerMeshComponent = { "LeftControllerMeshComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AConcertClientVRPresenceActor, LeftControllerMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LeftControllerMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LeftControllerMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_RightControllerMeshComponent_MetaData[] = {
		{ "Comment", "/** The right controller mesh */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConcertClientVRPresenceActor.h" },
		{ "ToolTip", "The right controller mesh" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_RightControllerMeshComponent = { "RightControllerMeshComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AConcertClientVRPresenceActor, RightControllerMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_RightControllerMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_RightControllerMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LaserMid_MetaData[] = {
		{ "Comment", "/** Dynamic material for the laser */" },
		{ "ModuleRelativePath", "Public/ConcertClientVRPresenceActor.h" },
		{ "ToolTip", "Dynamic material for the laser" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LaserMid = { "LaserMid", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AConcertClientVRPresenceActor, LaserMid), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LaserMid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LaserMid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LaserCoreMid_MetaData[] = {
		{ "Comment", "/** Dynamic material for the laser */" },
		{ "ModuleRelativePath", "Public/ConcertClientVRPresenceActor.h" },
		{ "ToolTip", "Dynamic material for the laser" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LaserCoreMid = { "LaserCoreMid", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AConcertClientVRPresenceActor, LaserCoreMid), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LaserCoreMid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LaserCoreMid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LaserThickness_MetaData[] = {
		{ "Category", "Laser" },
		{ "ModuleRelativePath", "Public/ConcertClientVRPresenceActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LaserThickness = { "LaserThickness", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AConcertClientVRPresenceActor, LaserThickness), METADATA_PARAMS(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LaserThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LaserThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LeftLaserSplineComponent_MetaData[] = {
		{ "Comment", "/** Spline for the left laser pointer, if any */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConcertClientVRPresenceActor.h" },
		{ "ToolTip", "Spline for the left laser pointer, if any" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LeftLaserSplineComponent = { "LeftLaserSplineComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AConcertClientVRPresenceActor, LeftLaserSplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LeftLaserSplineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LeftLaserSplineComponent_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LeftLaserSplineMeshComponents_Inner = { "LeftLaserSplineMeshComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LeftLaserSplineMeshComponents_MetaData[] = {
		{ "Comment", "/** Spline meshes for the left curved laser, if any */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConcertClientVRPresenceActor.h" },
		{ "ToolTip", "Spline meshes for the left curved laser, if any" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LeftLaserSplineMeshComponents = { "LeftLaserSplineMeshComponents", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AConcertClientVRPresenceActor, LeftLaserSplineMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LeftLaserSplineMeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LeftLaserSplineMeshComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_RightLaserSplineComponent_MetaData[] = {
		{ "Comment", "/** Spline for the right laser pointer, if any */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConcertClientVRPresenceActor.h" },
		{ "ToolTip", "Spline for the right laser pointer, if any" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_RightLaserSplineComponent = { "RightLaserSplineComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AConcertClientVRPresenceActor, RightLaserSplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_RightLaserSplineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_RightLaserSplineComponent_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_RightLaserSplineMeshComponents_Inner = { "RightLaserSplineMeshComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_RightLaserSplineMeshComponents_MetaData[] = {
		{ "Comment", "/** Spline meshes for the right curved laser, if any */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ConcertClientVRPresenceActor.h" },
		{ "ToolTip", "Spline meshes for the right curved laser, if any" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_RightLaserSplineMeshComponents = { "RightLaserSplineMeshComponents", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AConcertClientVRPresenceActor, RightLaserSplineMeshComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_RightLaserSplineMeshComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_RightLaserSplineMeshComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_bIsLeftControllerVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertClientVRPresenceActor.h" },
	};
#endif
	void Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_bIsLeftControllerVisible_SetBit(void* Obj)
	{
		((AConcertClientVRPresenceActor*)Obj)->bIsLeftControllerVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_bIsLeftControllerVisible = { "bIsLeftControllerVisible", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AConcertClientVRPresenceActor), &Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_bIsLeftControllerVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_bIsLeftControllerVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_bIsLeftControllerVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_bIsRightControllerVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertClientVRPresenceActor.h" },
	};
#endif
	void Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_bIsRightControllerVisible_SetBit(void* Obj)
	{
		((AConcertClientVRPresenceActor*)Obj)->bIsRightControllerVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_bIsRightControllerVisible = { "bIsRightControllerVisible", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AConcertClientVRPresenceActor), &Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_bIsRightControllerVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_bIsRightControllerVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_bIsRightControllerVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_bIsLeftLaserVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertClientVRPresenceActor.h" },
	};
#endif
	void Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_bIsLeftLaserVisible_SetBit(void* Obj)
	{
		((AConcertClientVRPresenceActor*)Obj)->bIsLeftLaserVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_bIsLeftLaserVisible = { "bIsLeftLaserVisible", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AConcertClientVRPresenceActor), &Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_bIsLeftLaserVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_bIsLeftLaserVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_bIsLeftLaserVisible_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_bIsRightLaserVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/ConcertClientVRPresenceActor.h" },
	};
#endif
	void Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_bIsRightLaserVisible_SetBit(void* Obj)
	{
		((AConcertClientVRPresenceActor*)Obj)->bIsRightLaserVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_bIsRightLaserVisible = { "bIsRightLaserVisible", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AConcertClientVRPresenceActor), &Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_bIsRightLaserVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_bIsRightLaserVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_bIsRightLaserVisible_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LeftControllerMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_RightControllerMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LaserMid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LaserCoreMid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LaserThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LeftLaserSplineComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LeftLaserSplineMeshComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_LeftLaserSplineMeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_RightLaserSplineComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_RightLaserSplineMeshComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_RightLaserSplineMeshComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_bIsLeftControllerVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_bIsRightControllerVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_bIsLeftLaserVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::NewProp_bIsRightLaserVisible,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AConcertClientVRPresenceActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::ClassParams = {
		&AConcertClientVRPresenceActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::PropPointers),
		0,
		0x008002ADu,
		METADATA_PARAMS(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AConcertClientVRPresenceActor()
	{
		if (!Z_Registration_Info_UClass_AConcertClientVRPresenceActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AConcertClientVRPresenceActor.OuterSingleton, Z_Construct_UClass_AConcertClientVRPresenceActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AConcertClientVRPresenceActor.OuterSingleton;
	}
	template<> CONCERTSYNCCLIENT_API UClass* StaticClass<AConcertClientVRPresenceActor>()
	{
		return AConcertClientVRPresenceActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AConcertClientVRPresenceActor);
	AConcertClientVRPresenceActor::~AConcertClientVRPresenceActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AConcertClientVRPresenceActor, AConcertClientVRPresenceActor::StaticClass, TEXT("AConcertClientVRPresenceActor"), &Z_Registration_Info_UClass_AConcertClientVRPresenceActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AConcertClientVRPresenceActor), 3911737592U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_1887739896(TEXT("/Script/ConcertSyncClient"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_Concert_ConcertSync_ConcertSyncClient_Source_ConcertSyncClient_Public_ConcertClientVRPresenceActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
