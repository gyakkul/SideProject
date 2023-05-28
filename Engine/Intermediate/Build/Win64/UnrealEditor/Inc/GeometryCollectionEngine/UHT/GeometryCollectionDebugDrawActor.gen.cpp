// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeometryCollection/GeometryCollectionDebugDrawActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeometryCollectionDebugDrawActor() {}
// Cross Module References
	CHAOSSOLVERENGINE_API UClass* Z_Construct_UClass_AChaosSolverActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionActor_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionDebugDrawActor();
	GEOMETRYCOLLECTIONENGINE_API UClass* Z_Construct_UClass_AGeometryCollectionDebugDrawActor_NoRegister();
	GEOMETRYCOLLECTIONENGINE_API UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EGeometryCollectionDebugDrawActorHideGeometry();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody();
	GEOMETRYCOLLECTIONENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawWarningMessage();
	UPackage* Z_Construct_UPackage__Script_GeometryCollectionEngine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGeometryCollectionDebugDrawActorHideGeometry;
	static UEnum* EGeometryCollectionDebugDrawActorHideGeometry_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EGeometryCollectionDebugDrawActorHideGeometry.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EGeometryCollectionDebugDrawActorHideGeometry.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GeometryCollectionEngine_EGeometryCollectionDebugDrawActorHideGeometry, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("EGeometryCollectionDebugDrawActorHideGeometry"));
		}
		return Z_Registration_Info_UEnum_EGeometryCollectionDebugDrawActorHideGeometry.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONENGINE_API UEnum* StaticEnum<EGeometryCollectionDebugDrawActorHideGeometry>()
	{
		return EGeometryCollectionDebugDrawActorHideGeometry_StaticEnum();
	}
	struct Z_Construct_UEnum_GeometryCollectionEngine_EGeometryCollectionDebugDrawActorHideGeometry_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GeometryCollectionEngine_EGeometryCollectionDebugDrawActorHideGeometry_Statics::Enumerators[] = {
		{ "EGeometryCollectionDebugDrawActorHideGeometry::HideNone", (int64)EGeometryCollectionDebugDrawActorHideGeometry::HideNone },
		{ "EGeometryCollectionDebugDrawActorHideGeometry::HideWithCollision", (int64)EGeometryCollectionDebugDrawActorHideGeometry::HideWithCollision },
		{ "EGeometryCollectionDebugDrawActorHideGeometry::HideSelected", (int64)EGeometryCollectionDebugDrawActorHideGeometry::HideSelected },
		{ "EGeometryCollectionDebugDrawActorHideGeometry::HideWholeCollection", (int64)EGeometryCollectionDebugDrawActorHideGeometry::HideWholeCollection },
		{ "EGeometryCollectionDebugDrawActorHideGeometry::HideAll", (int64)EGeometryCollectionDebugDrawActorHideGeometry::HideAll },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GeometryCollectionEngine_EGeometryCollectionDebugDrawActorHideGeometry_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n* EGeometryCollectionDebugDrawActorHideGeometry\n*   Visibility enum.\n*/" },
		{ "HideAll.Comment", "// Hide all geometry collections.\n" },
		{ "HideAll.Name", "EGeometryCollectionDebugDrawActorHideGeometry::HideAll" },
		{ "HideAll.ToolTip", "Hide all geometry collections." },
		{ "HideNone.Comment", "// Do not hide any geometry.\n" },
		{ "HideNone.Name", "EGeometryCollectionDebugDrawActorHideGeometry::HideNone" },
		{ "HideNone.ToolTip", "Do not hide any geometry." },
		{ "HideSelected.Comment", "// Hide the geometry associated with the selected rigid bodies.\n" },
		{ "HideSelected.Name", "EGeometryCollectionDebugDrawActorHideGeometry::HideSelected" },
		{ "HideSelected.ToolTip", "Hide the geometry associated with the selected rigid bodies." },
		{ "HideWholeCollection.Comment", "// Hide the entire geometry collection associated with the selected rigid bodies.\n" },
		{ "HideWholeCollection.Name", "EGeometryCollectionDebugDrawActorHideGeometry::HideWholeCollection" },
		{ "HideWholeCollection.ToolTip", "Hide the entire geometry collection associated with the selected rigid bodies." },
		{ "HideWithCollision.Comment", "// Hide the geometry associated with rigid bodies that are selected for collision volume visualization.\n" },
		{ "HideWithCollision.Name", "EGeometryCollectionDebugDrawActorHideGeometry::HideWithCollision" },
		{ "HideWithCollision.ToolTip", "Hide the geometry associated with rigid bodies that are selected for collision volume visualization." },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "EGeometryCollectionDebugDrawActorHideGeometry\n  Visibility enum." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GeometryCollectionEngine_EGeometryCollectionDebugDrawActorHideGeometry_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		"EGeometryCollectionDebugDrawActorHideGeometry",
		"EGeometryCollectionDebugDrawActorHideGeometry",
		Z_Construct_UEnum_GeometryCollectionEngine_EGeometryCollectionDebugDrawActorHideGeometry_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionEngine_EGeometryCollectionDebugDrawActorHideGeometry_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_GeometryCollectionEngine_EGeometryCollectionDebugDrawActorHideGeometry_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_GeometryCollectionEngine_EGeometryCollectionDebugDrawActorHideGeometry_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_GeometryCollectionEngine_EGeometryCollectionDebugDrawActorHideGeometry()
	{
		if (!Z_Registration_Info_UEnum_EGeometryCollectionDebugDrawActorHideGeometry.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGeometryCollectionDebugDrawActorHideGeometry.InnerSingleton, Z_Construct_UEnum_GeometryCollectionEngine_EGeometryCollectionDebugDrawActorHideGeometry_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EGeometryCollectionDebugDrawActorHideGeometry.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawWarningMessage;
class UScriptStruct* FGeometryCollectionDebugDrawWarningMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawWarningMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawWarningMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawWarningMessage, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeometryCollectionDebugDrawWarningMessage"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawWarningMessage.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeometryCollectionDebugDrawWarningMessage>()
{
	return FGeometryCollectionDebugDrawWarningMessage::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawWarningMessage_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawWarningMessage_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* FGeometryCollectionDebugDrawWarningMessage\n*   Empty structure used to embed a warning message in the UI through a detail customization.\n*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "FGeometryCollectionDebugDrawWarningMessage\n  Empty structure used to embed a warning message in the UI through a detail customization." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawWarningMessage_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionDebugDrawWarningMessage>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawWarningMessage_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"GeometryCollectionDebugDrawWarningMessage",
		sizeof(FGeometryCollectionDebugDrawWarningMessage),
		alignof(FGeometryCollectionDebugDrawWarningMessage),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawWarningMessage_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawWarningMessage_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawWarningMessage()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawWarningMessage.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawWarningMessage.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawWarningMessage_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawWarningMessage.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawActorSelectedRigidBody;
class UScriptStruct* FGeometryCollectionDebugDrawActorSelectedRigidBody::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawActorSelectedRigidBody.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawActorSelectedRigidBody.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody, (UObject*)Z_Construct_UPackage__Script_GeometryCollectionEngine(), TEXT("GeometryCollectionDebugDrawActorSelectedRigidBody"));
	}
	return Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawActorSelectedRigidBody.OuterSingleton;
}
template<> GEOMETRYCOLLECTIONENGINE_API UScriptStruct* StaticStruct<FGeometryCollectionDebugDrawActorSelectedRigidBody>()
{
	return FGeometryCollectionDebugDrawActorSelectedRigidBody::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Solver_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Solver;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryCollection_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GeometryCollection;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n* FGeometryCollectionDebugDrawActorSelectedRigidBody\n*   Structure used to select a rigid body id with a picking tool through a detail customization.\n*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "FGeometryCollectionDebugDrawActorSelectedRigidBody\n  Structure used to select a rigid body id with a picking tool through a detail customization." },
	};
#endif
	void* Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGeometryCollectionDebugDrawActorSelectedRigidBody>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "Selected Rigid Body" },
		{ "ClampMin", "-1" },
		{ "Comment", "/** Id of the selected rigid body whose to visualize debug informations. Use -1 to visualize all Geometry Collections. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Id of the selected rigid body whose to visualize debug informations. Use -1 to visualize all Geometry Collections." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionDebugDrawActorSelectedRigidBody, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::NewProp_Solver_MetaData[] = {
		{ "Category", "Selected Rigid Body" },
		{ "Comment", "/** Chaos RBD Solver. Will use the world's default solver actor if null. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Chaos RBD Solver. Will use the world's default solver actor if null." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::NewProp_Solver = { "Solver", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionDebugDrawActorSelectedRigidBody, Solver), Z_Construct_UClass_AChaosSolverActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::NewProp_Solver_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::NewProp_Solver_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::NewProp_GeometryCollection_MetaData[] = {
		{ "Category", "Selected Rigid Body" },
		{ "Comment", "/** Currently selected geometry collection. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Currently selected geometry collection." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::NewProp_GeometryCollection = { "GeometryCollection", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FGeometryCollectionDebugDrawActorSelectedRigidBody, GeometryCollection), Z_Construct_UClass_AGeometryCollectionActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::NewProp_GeometryCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::NewProp_GeometryCollection_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::NewProp_Solver,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::NewProp_GeometryCollection,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
		nullptr,
		&NewStructOps,
		"GeometryCollectionDebugDrawActorSelectedRigidBody",
		sizeof(FGeometryCollectionDebugDrawActorSelectedRigidBody),
		alignof(FGeometryCollectionDebugDrawActorSelectedRigidBody),
		Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody()
	{
		if (!Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawActorSelectedRigidBody.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawActorSelectedRigidBody.InnerSingleton, Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawActorSelectedRigidBody.InnerSingleton;
	}
	void AGeometryCollectionDebugDrawActor::StaticRegisterNativesAGeometryCollectionDebugDrawActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGeometryCollectionDebugDrawActor);
	UClass* Z_Construct_UClass_AGeometryCollectionDebugDrawActor_NoRegister()
	{
		return AGeometryCollectionDebugDrawActor::StaticClass();
	}
	struct Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WarningMessage_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WarningMessage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedRigidBody_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedRigidBody;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawWholeCollection_MetaData[];
#endif
		static void NewProp_bDebugDrawWholeCollection_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawWholeCollection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawHierarchy_MetaData[];
#endif
		static void NewProp_bDebugDrawHierarchy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawHierarchy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugDrawClustering_MetaData[];
#endif
		static void NewProp_bDebugDrawClustering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugDrawClustering;
		static const UECodeGen_Private::FBytePropertyParams NewProp_HideGeometry_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HideGeometry_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_HideGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowRigidBodyId_MetaData[];
#endif
		static void NewProp_bShowRigidBodyId_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowRigidBodyId;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowRigidBodyCollision_MetaData[];
#endif
		static void NewProp_bShowRigidBodyCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowRigidBodyCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCollisionAtOrigin_MetaData[];
#endif
		static void NewProp_bCollisionAtOrigin_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCollisionAtOrigin;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowRigidBodyTransform_MetaData[];
#endif
		static void NewProp_bShowRigidBodyTransform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowRigidBodyTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowRigidBodyInertia_MetaData[];
#endif
		static void NewProp_bShowRigidBodyInertia_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowRigidBodyInertia;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowRigidBodyVelocity_MetaData[];
#endif
		static void NewProp_bShowRigidBodyVelocity_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowRigidBodyVelocity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowRigidBodyForce_MetaData[];
#endif
		static void NewProp_bShowRigidBodyForce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowRigidBodyForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowRigidBodyInfos_MetaData[];
#endif
		static void NewProp_bShowRigidBodyInfos_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowRigidBodyInfos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowTransformIndex_MetaData[];
#endif
		static void NewProp_bShowTransformIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTransformIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowTransform_MetaData[];
#endif
		static void NewProp_bShowTransform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowParent_MetaData[];
#endif
		static void NewProp_bShowParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowLevel_MetaData[];
#endif
		static void NewProp_bShowLevel_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowLevel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowConnectivityEdges_MetaData[];
#endif
		static void NewProp_bShowConnectivityEdges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowConnectivityEdges;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowGeometryIndex_MetaData[];
#endif
		static void NewProp_bShowGeometryIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGeometryIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowGeometryTransform_MetaData[];
#endif
		static void NewProp_bShowGeometryTransform_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowGeometryTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowBoundingBox_MetaData[];
#endif
		static void NewProp_bShowBoundingBox_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowBoundingBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowFaces_MetaData[];
#endif
		static void NewProp_bShowFaces_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFaces;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowFaceIndices_MetaData[];
#endif
		static void NewProp_bShowFaceIndices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFaceIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowFaceNormals_MetaData[];
#endif
		static void NewProp_bShowFaceNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowFaceNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowSingleFace_MetaData[];
#endif
		static void NewProp_bShowSingleFace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowSingleFace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SingleFaceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SingleFaceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowVertices_MetaData[];
#endif
		static void NewProp_bShowVertices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowVertices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowVertexIndices_MetaData[];
#endif
		static void NewProp_bShowVertexIndices_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowVertexIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShowVertexNormals_MetaData[];
#endif
		static void NewProp_bShowVertexNormals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowVertexNormals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseActiveVisualization_MetaData[];
#endif
		static void NewProp_bUseActiveVisualization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseActiveVisualization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PointThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LineThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTextShadow_MetaData[];
#endif
		static void NewProp_bTextShadow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTextShadow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TextScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AxisScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AxisScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArrowScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigidBodyIdColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RigidBodyIdColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigidBodyTransformScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RigidBodyTransformScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigidBodyCollisionColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RigidBodyCollisionColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigidBodyInertiaColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RigidBodyInertiaColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigidBodyVelocityColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RigidBodyVelocityColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigidBodyForceColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RigidBodyForceColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RigidBodyInfoColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RigidBodyInfoColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformIndexColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransformIndexColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TransformScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LevelColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParentColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConnectivityEdgeThickness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ConnectivityEdgeThickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryIndexColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_GeometryIndexColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeometryTransformScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GeometryTransformScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundingBoxColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundingBoxColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FaceColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceIndexColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FaceIndexColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FaceNormalColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FaceNormalColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SingleFaceColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SingleFaceColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexIndexColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexIndexColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexNormalColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexNormalColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpriteComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryCollectionEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Replication Input Actor Collision LOD Cooking" },
		{ "IncludePath", "GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_WarningMessage_MetaData[] = {
		{ "Comment", "/** Warning message to explain that the debug draw properties have no effect until starting playing/simulating. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Warning message to explain that the debug draw properties have no effect until starting playing/simulating." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_WarningMessage = { "WarningMessage", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, WarningMessage_DEPRECATED), Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawWarningMessage, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_WarningMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_WarningMessage_MetaData)) }; // 2696366810
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_SelectedRigidBody_MetaData[] = {
		{ "Comment", "/** Picking tool used to select a rigid body id. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Picking tool used to select a rigid body id." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_SelectedRigidBody = { "SelectedRigidBody", nullptr, (EPropertyFlags)0x0010000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, SelectedRigidBody_DEPRECATED), Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_SelectedRigidBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_SelectedRigidBody_MetaData)) }; // 2897374301
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawWholeCollection_MetaData[] = {
		{ "Category", "Debug Draw" },
		{ "Comment", "/** Show debug visualization for the rest of the geometry collection related to the current rigid body id selection. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show debug visualization for the rest of the geometry collection related to the current rigid body id selection." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawWholeCollection_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bDebugDrawWholeCollection = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawWholeCollection = { "bDebugDrawWholeCollection", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawWholeCollection_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawWholeCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawWholeCollection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawHierarchy_MetaData[] = {
		{ "Category", "Debug Draw" },
		{ "Comment", "/** Show debug visualization for the top level node rather than the bottom leaf nodes of a cluster's hierarchy. * Only affects Clustering and Geometry visualization.\n\x09*/" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show debug visualization for the top level node rather than the bottom leaf nodes of a cluster's hierarchy. * Only affects Clustering and Geometry visualization." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawHierarchy_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bDebugDrawHierarchy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawHierarchy = { "bDebugDrawHierarchy", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawHierarchy_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawHierarchy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawHierarchy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawClustering_MetaData[] = {
		{ "Category", "Debug Draw" },
		{ "Comment", "/** Show debug visualization for all clustered children associated to the current rigid body id selection. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show debug visualization for all clustered children associated to the current rigid body id selection." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawClustering_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bDebugDrawClustering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawClustering = { "bDebugDrawClustering", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawClustering_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawClustering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawClustering_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_HideGeometry_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_HideGeometry_MetaData[] = {
		{ "Category", "Debug Draw" },
		{ "Comment", "/** Geometry visibility setting. Select the part of the geometry to hide in order to better visualize the debug information. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Geometry visibility setting. Select the part of the geometry to hide in order to better visualize the debug information." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_HideGeometry = { "HideGeometry", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, HideGeometry), Z_Construct_UEnum_GeometryCollectionEngine_EGeometryCollectionDebugDrawActorHideGeometry, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_HideGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_HideGeometry_MetaData)) }; // 1532067738
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyId_MetaData[] = {
		{ "Category", "Debug Draw|Rigid Body" },
		{ "Comment", "/** Display the selected rigid body's id. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Display the selected rigid body's id." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyId_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bShowRigidBodyId = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyId = { "bShowRigidBodyId", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyId_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyId_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyCollision_MetaData[] = {
		{ "Category", "Debug Draw|Rigid Body" },
		{ "Comment", "/** Show the selected rigid body's collision volume. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the selected rigid body's collision volume." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyCollision_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bShowRigidBodyCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyCollision = { "bShowRigidBodyCollision", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyCollision_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bCollisionAtOrigin_MetaData[] = {
		{ "Category", "Debug Draw|Rigid Body" },
		{ "Comment", "/** Show the selected rigid body's collision volume at the origin, in local space. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the selected rigid body's collision volume at the origin, in local space." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bCollisionAtOrigin_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bCollisionAtOrigin = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bCollisionAtOrigin = { "bCollisionAtOrigin", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bCollisionAtOrigin_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bCollisionAtOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bCollisionAtOrigin_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyTransform_MetaData[] = {
		{ "Category", "Debug Draw|Rigid Body" },
		{ "Comment", "/** Show the selected rigid body's transform. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the selected rigid body's transform." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyTransform_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bShowRigidBodyTransform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyTransform = { "bShowRigidBodyTransform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyInertia_MetaData[] = {
		{ "Category", "Debug Draw|Rigid Body" },
		{ "Comment", "/** Show the selected rigid body's inertia tensor box. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the selected rigid body's inertia tensor box." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyInertia_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bShowRigidBodyInertia = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyInertia = { "bShowRigidBodyInertia", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyInertia_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyInertia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyInertia_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyVelocity_MetaData[] = {
		{ "Category", "Debug Draw|Rigid Body" },
		{ "Comment", "/** Show the selected rigid body's linear and angular velocity. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the selected rigid body's linear and angular velocity." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyVelocity_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bShowRigidBodyVelocity = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyVelocity = { "bShowRigidBodyVelocity", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyVelocity_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyVelocity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyForce_MetaData[] = {
		{ "Category", "Debug Draw|Rigid Body" },
		{ "Comment", "/** Show the selected rigid body's applied force and torque. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the selected rigid body's applied force and torque." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyForce_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bShowRigidBodyForce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyForce = { "bShowRigidBodyForce", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyForce_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyInfos_MetaData[] = {
		{ "Category", "Debug Draw|Rigid Body" },
		{ "Comment", "/** Show the selected rigid body's on screen text information. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the selected rigid body's on screen text information." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyInfos_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bShowRigidBodyInfos = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyInfos = { "bShowRigidBodyInfos", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyInfos_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyInfos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowTransformIndex_MetaData[] = {
		{ "Category", "Debug Draw|Clustering" },
		{ "Comment", "/** Show the transform index for the selected rigid body's associated cluster nodes. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the transform index for the selected rigid body's associated cluster nodes." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowTransformIndex_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bShowTransformIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowTransformIndex = { "bShowTransformIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowTransformIndex_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowTransformIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowTransformIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowTransform_MetaData[] = {
		{ "Category", "Debug Draw|Clustering" },
		{ "Comment", "/** Show the transform for the selected rigid body's associated cluster nodes. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the transform for the selected rigid body's associated cluster nodes." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowTransform_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bShowTransform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowTransform = { "bShowTransform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowParent_MetaData[] = {
		{ "Category", "Debug Draw|Clustering" },
		{ "Comment", "/** Show a link from the selected rigid body's associated cluster nodes to their parent's nodes. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show a link from the selected rigid body's associated cluster nodes to their parent's nodes." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowParent_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bShowParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowParent = { "bShowParent", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowParent_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowParent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowLevel_MetaData[] = {
		{ "Category", "Debug Draw|Clustering" },
		{ "Comment", "/** Show the hierarchical level for the selected rigid body's associated cluster nodes. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the hierarchical level for the selected rigid body's associated cluster nodes." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowLevel_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bShowLevel = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowLevel = { "bShowLevel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowLevel_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowLevel_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowConnectivityEdges_MetaData[] = {
		{ "Category", "Debug Draw|Clustering" },
		{ "Comment", "/** Show the connectivity edges for the selected rigid body's associated cluster nodes. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the connectivity edges for the selected rigid body's associated cluster nodes." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowConnectivityEdges_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bShowConnectivityEdges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowConnectivityEdges = { "bShowConnectivityEdges", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowConnectivityEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowConnectivityEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowConnectivityEdges_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowGeometryIndex_MetaData[] = {
		{ "Category", "Debug Draw|Geometry" },
		{ "Comment", "/** Show the geometry index for the selected rigid body's associated geometries. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the geometry index for the selected rigid body's associated geometries." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowGeometryIndex_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bShowGeometryIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowGeometryIndex = { "bShowGeometryIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowGeometryIndex_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowGeometryIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowGeometryIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowGeometryTransform_MetaData[] = {
		{ "Category", "Debug Draw|Geometry" },
		{ "Comment", "/** Show the geometry transform for the selected rigid body's associated geometries. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the geometry transform for the selected rigid body's associated geometries." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowGeometryTransform_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bShowGeometryTransform = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowGeometryTransform = { "bShowGeometryTransform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowGeometryTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowGeometryTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowGeometryTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowBoundingBox_MetaData[] = {
		{ "Category", "Debug Draw|Geometry" },
		{ "Comment", "/** Show the bounding box for the selected rigid body's associated geometries. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the bounding box for the selected rigid body's associated geometries." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowBoundingBox_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bShowBoundingBox = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowBoundingBox = { "bShowBoundingBox", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowBoundingBox_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowBoundingBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowBoundingBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaces_MetaData[] = {
		{ "Category", "Debug Draw|Geometry" },
		{ "Comment", "/** Show the faces for the selected rigid body's associated geometries. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the faces for the selected rigid body's associated geometries." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaces_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bShowFaces = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaces = { "bShowFaces", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaces_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaces_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaceIndices_MetaData[] = {
		{ "Category", "Debug Draw|Geometry" },
		{ "Comment", "/** Show the face indices for the selected rigid body's associated geometries. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the face indices for the selected rigid body's associated geometries." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaceIndices_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bShowFaceIndices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaceIndices = { "bShowFaceIndices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaceIndices_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaceIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaceIndices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaceNormals_MetaData[] = {
		{ "Category", "Debug Draw|Geometry" },
		{ "Comment", "/** Show the face normals for the selected rigid body's associated geometries. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the face normals for the selected rigid body's associated geometries." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaceNormals_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bShowFaceNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaceNormals = { "bShowFaceNormals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaceNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaceNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaceNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowSingleFace_MetaData[] = {
		{ "Category", "Debug Draw|Geometry" },
		{ "Comment", "/** Enable single face visualization for the selected rigid body's associated geometries. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Enable single face visualization for the selected rigid body's associated geometries." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowSingleFace_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bShowSingleFace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowSingleFace = { "bShowSingleFace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowSingleFace_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowSingleFace_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowSingleFace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_SingleFaceIndex_MetaData[] = {
		{ "Category", "Debug Draw|Geometry" },
		{ "ClampMin", "0" },
		{ "Comment", "/** The index of the single face to visualize. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "The index of the single face to visualize." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_SingleFaceIndex = { "SingleFaceIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, SingleFaceIndex), METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_SingleFaceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_SingleFaceIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertices_MetaData[] = {
		{ "Category", "Debug Draw|Geometry" },
		{ "Comment", "/** Show the vertices for the selected rigid body's associated geometries. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the vertices for the selected rigid body's associated geometries." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertices_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bShowVertices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertices = { "bShowVertices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertices_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertexIndices_MetaData[] = {
		{ "Category", "Debug Draw|Geometry" },
		{ "Comment", "/** Show the vertex indices for the selected rigid body's associated geometries. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the vertex indices for the selected rigid body's associated geometries." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertexIndices_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bShowVertexIndices = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertexIndices = { "bShowVertexIndices", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertexIndices_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertexIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertexIndices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertexNormals_MetaData[] = {
		{ "Category", "Debug Draw|Geometry" },
		{ "Comment", "/** Show the vertex normals for the selected rigid body's associated geometries. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Show the vertex normals for the selected rigid body's associated geometries." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertexNormals_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bShowVertexNormals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertexNormals = { "bShowVertexNormals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertexNormals_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertexNormals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertexNormals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bUseActiveVisualization_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Adapt visualization depending of the cluster nodes' hierarchical level. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Adapt visualization depending of the cluster nodes' hierarchical level." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bUseActiveVisualization_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bUseActiveVisualization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bUseActiveVisualization = { "bUseActiveVisualization", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bUseActiveVisualization_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bUseActiveVisualization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bUseActiveVisualization_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_PointThickness_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Thickness of points when visualizing vertices. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Thickness of points when visualizing vertices." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_PointThickness = { "PointThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, PointThickness), METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_PointThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_PointThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_LineThickness_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Thickness of lines when visualizing faces, normals, ...etc. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Thickness of lines when visualizing faces, normals, ...etc." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_LineThickness = { "LineThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, LineThickness), METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_LineThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_LineThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bTextShadow_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Draw shadows under the displayed text. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Draw shadows under the displayed text." },
	};
#endif
	void Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bTextShadow_SetBit(void* Obj)
	{
		((AGeometryCollectionDebugDrawActor*)Obj)->bTextShadow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bTextShadow = { "bTextShadow", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGeometryCollectionDebugDrawActor), &Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bTextShadow_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bTextShadow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bTextShadow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TextScale_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Scale of the font used to display text. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Scale of the font used to display text." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TextScale = { "TextScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, TextScale), METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TextScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TextScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_NormalScale_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Scale factor used for visualizing normals. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Scale factor used for visualizing normals." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_NormalScale = { "NormalScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, NormalScale), METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_NormalScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_NormalScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_AxisScale_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Scale of the axis used for visualizing all transforms. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Scale of the axis used for visualizing all transforms." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_AxisScale = { "AxisScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, AxisScale), METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_AxisScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_AxisScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_ArrowScale_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Size of arrows used for visualizing normals, breaking information, ...etc. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Size of arrows used for visualizing normals, breaking information, ...etc." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_ArrowScale = { "ArrowScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, ArrowScale), METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_ArrowScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_ArrowScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyIdColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the rigid body ids. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the rigid body ids." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyIdColor = { "RigidBodyIdColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, RigidBodyIdColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyIdColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyIdColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyTransformScale_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Scale for rigid body transform visualization. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Scale for rigid body transform visualization." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyTransformScale = { "RigidBodyTransformScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, RigidBodyTransformScale), METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyTransformScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyTransformScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyCollisionColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for collision primitives visualization. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for collision primitives visualization." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyCollisionColor = { "RigidBodyCollisionColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, RigidBodyCollisionColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyCollisionColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyCollisionColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyInertiaColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the rigid body inertia tensor box. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the rigid body inertia tensor box." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyInertiaColor = { "RigidBodyInertiaColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, RigidBodyInertiaColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyInertiaColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyInertiaColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyVelocityColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for rigid body velocities visualization. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for rigid body velocities visualization." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyVelocityColor = { "RigidBodyVelocityColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, RigidBodyVelocityColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyVelocityColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyVelocityColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyForceColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for rigid body applied force and torque visualization. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for rigid body applied force and torque visualization." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyForceColor = { "RigidBodyForceColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, RigidBodyForceColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyForceColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyForceColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyInfoColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the rigid body infos. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the rigid body infos." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyInfoColor = { "RigidBodyInfoColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, RigidBodyInfoColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyInfoColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyInfoColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TransformIndexColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the transform indices. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the transform indices." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TransformIndexColor = { "TransformIndexColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, TransformIndexColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TransformIndexColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TransformIndexColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TransformScale_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Scale for cluster transform visualization. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Scale for cluster transform visualization." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TransformScale = { "TransformScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, TransformScale), METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TransformScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TransformScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_LevelColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the levels. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the levels." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_LevelColor = { "LevelColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, LevelColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_LevelColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_LevelColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_ParentColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the link from the parents. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the link from the parents." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_ParentColor = { "ParentColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, ParentColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_ParentColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_ParentColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_ConnectivityEdgeThickness_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Line thickness used for the visualization of the rigid clustering connectivity edges. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Line thickness used for the visualization of the rigid clustering connectivity edges." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_ConnectivityEdgeThickness = { "ConnectivityEdgeThickness", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, ConnectivityEdgeThickness), METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_ConnectivityEdgeThickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_ConnectivityEdgeThickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_GeometryIndexColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the geometry indices. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the geometry indices." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_GeometryIndexColor = { "GeometryIndexColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, GeometryIndexColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_GeometryIndexColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_GeometryIndexColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_GeometryTransformScale_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "ClampMin", "0.0001" },
		{ "Comment", "/** Scale for geometry transform visualization. */" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Scale for geometry transform visualization." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_GeometryTransformScale = { "GeometryTransformScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, GeometryTransformScale), METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_GeometryTransformScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_GeometryTransformScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_BoundingBoxColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the bounding boxes. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the bounding boxes." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_BoundingBoxColor = { "BoundingBoxColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, BoundingBoxColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_BoundingBoxColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_BoundingBoxColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_FaceColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the faces. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the faces." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_FaceColor = { "FaceColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, FaceColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_FaceColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_FaceColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_FaceIndexColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the face indices. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the face indices." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_FaceIndexColor = { "FaceIndexColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, FaceIndexColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_FaceIndexColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_FaceIndexColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_FaceNormalColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the face normals. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the face normals." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_FaceNormalColor = { "FaceNormalColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, FaceNormalColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_FaceNormalColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_FaceNormalColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_SingleFaceColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the single face. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the single face." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_SingleFaceColor = { "SingleFaceColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, SingleFaceColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_SingleFaceColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_SingleFaceColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_VertexColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the vertices. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the vertices." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_VertexColor = { "VertexColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, VertexColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_VertexColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_VertexColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_VertexIndexColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the vertex indices. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the vertex indices." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_VertexIndexColor = { "VertexIndexColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, VertexIndexColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_VertexIndexColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_VertexIndexColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_VertexNormalColor_MetaData[] = {
		{ "Category", "Debug Draw|Settings" },
		{ "Comment", "/** Color used for the visualization of the vertex normals. */" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Color used for the visualization of the vertex normals." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_VertexNormalColor = { "VertexNormalColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, VertexNormalColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_VertexNormalColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_VertexNormalColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "Comment", "/** Display icon in the editor. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GeometryCollection/GeometryCollectionDebugDrawActor.h" },
		{ "ToolTip", "Display icon in the editor." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGeometryCollectionDebugDrawActor, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_SpriteComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_WarningMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_SelectedRigidBody,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawWholeCollection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawHierarchy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bDebugDrawClustering,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_HideGeometry_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_HideGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyId,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bCollisionAtOrigin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyInertia,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyVelocity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowRigidBodyInfos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowTransformIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowLevel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowConnectivityEdges,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowGeometryIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowGeometryTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowBoundingBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaceIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowFaceNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowSingleFace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_SingleFaceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertexIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bShowVertexNormals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bUseActiveVisualization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_PointThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_LineThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_bTextShadow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TextScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_NormalScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_AxisScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_ArrowScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyIdColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyTransformScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyCollisionColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyInertiaColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyVelocityColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyForceColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_RigidBodyInfoColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TransformIndexColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_TransformScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_LevelColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_ParentColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_ConnectivityEdgeThickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_GeometryIndexColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_GeometryTransformScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_BoundingBoxColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_FaceColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_FaceIndexColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_FaceNormalColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_SingleFaceColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_VertexColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_VertexIndexColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_VertexNormalColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::NewProp_SpriteComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGeometryCollectionDebugDrawActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::ClassParams = {
		&AGeometryCollectionDebugDrawActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGeometryCollectionDebugDrawActor()
	{
		if (!Z_Registration_Info_UClass_AGeometryCollectionDebugDrawActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGeometryCollectionDebugDrawActor.OuterSingleton, Z_Construct_UClass_AGeometryCollectionDebugDrawActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGeometryCollectionDebugDrawActor.OuterSingleton;
	}
	template<> GEOMETRYCOLLECTIONENGINE_API UClass* StaticClass<AGeometryCollectionDebugDrawActor>()
	{
		return AGeometryCollectionDebugDrawActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGeometryCollectionDebugDrawActor);
	AGeometryCollectionDebugDrawActor::~AGeometryCollectionDebugDrawActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawActor_h_Statics::EnumInfo[] = {
		{ EGeometryCollectionDebugDrawActorHideGeometry_StaticEnum, TEXT("EGeometryCollectionDebugDrawActorHideGeometry"), &Z_Registration_Info_UEnum_EGeometryCollectionDebugDrawActorHideGeometry, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1532067738U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawActor_h_Statics::ScriptStructInfo[] = {
		{ FGeometryCollectionDebugDrawWarningMessage::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawWarningMessage_Statics::NewStructOps, TEXT("GeometryCollectionDebugDrawWarningMessage"), &Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawWarningMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionDebugDrawWarningMessage), 2696366810U) },
		{ FGeometryCollectionDebugDrawActorSelectedRigidBody::StaticStruct, Z_Construct_UScriptStruct_FGeometryCollectionDebugDrawActorSelectedRigidBody_Statics::NewStructOps, TEXT("GeometryCollectionDebugDrawActorSelectedRigidBody"), &Z_Registration_Info_UScriptStruct_GeometryCollectionDebugDrawActorSelectedRigidBody, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FGeometryCollectionDebugDrawActorSelectedRigidBody), 2897374301U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGeometryCollectionDebugDrawActor, AGeometryCollectionDebugDrawActor::StaticClass, TEXT("AGeometryCollectionDebugDrawActor"), &Z_Registration_Info_UClass_AGeometryCollectionDebugDrawActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGeometryCollectionDebugDrawActor), 1458980990U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawActor_h_3998890761(TEXT("/Script/GeometryCollectionEngine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawActor_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawActor_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_GeometryCollectionEngine_Public_GeometryCollection_GeometryCollectionDebugDrawActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
