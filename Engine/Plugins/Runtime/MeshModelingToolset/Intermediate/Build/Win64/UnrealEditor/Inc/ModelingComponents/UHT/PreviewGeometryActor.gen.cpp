// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Drawing/PreviewGeometryActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePreviewGeometryActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_AInternalToolFrameworkActor();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_APreviewGeometryActor();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_APreviewGeometryActor_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_ULineSetComponent_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPointSetComponent_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void APreviewGeometryActor::StaticRegisterNativesAPreviewGeometryActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APreviewGeometryActor);
	UClass* Z_Construct_UClass_APreviewGeometryActor_NoRegister()
	{
		return APreviewGeometryActor::StaticClass();
	}
	struct Z_Construct_UClass_APreviewGeometryActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APreviewGeometryActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInternalToolFrameworkActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APreviewGeometryActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An actor suitable for attaching components used to draw preview elements, such as LineSetComponent and TriangleSetComponent.\n */" },
		{ "IncludePath", "Drawing/PreviewGeometryActor.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Drawing/PreviewGeometryActor.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "An actor suitable for attaching components used to draw preview elements, such as LineSetComponent and TriangleSetComponent." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APreviewGeometryActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APreviewGeometryActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APreviewGeometryActor_Statics::ClassParams = {
		&APreviewGeometryActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x019002ACu,
		METADATA_PARAMS(Z_Construct_UClass_APreviewGeometryActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APreviewGeometryActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APreviewGeometryActor()
	{
		if (!Z_Registration_Info_UClass_APreviewGeometryActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APreviewGeometryActor.OuterSingleton, Z_Construct_UClass_APreviewGeometryActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APreviewGeometryActor.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<APreviewGeometryActor>()
	{
		return APreviewGeometryActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APreviewGeometryActor);
	APreviewGeometryActor::~APreviewGeometryActor() {}
	DEFINE_FUNCTION(UPreviewGeometry::execSetAllPointSetsMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllPointSetsMaterial(Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreviewGeometry::execSetPointSetMaterial)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PointSetIdentifier);
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetPointSetMaterial(Z_Param_PointSetIdentifier,Z_Param_NewMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreviewGeometry::execSetPointSetVisibility)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PointSetIdentifier);
		P_GET_UBOOL(Z_Param_bVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetPointSetVisibility(Z_Param_PointSetIdentifier,Z_Param_bVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreviewGeometry::execRemoveAllPointSets)
	{
		P_GET_UBOOL(Z_Param_bDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllPointSets(Z_Param_bDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreviewGeometry::execRemovePointSet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PointSetIdentifier);
		P_GET_UBOOL(Z_Param_bDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemovePointSet(Z_Param_PointSetIdentifier,Z_Param_bDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreviewGeometry::execFindPointSet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PointSetIdentifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPointSetComponent**)Z_Param__Result=P_THIS->FindPointSet(Z_Param_PointSetIdentifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreviewGeometry::execAddPointSet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PointSetIdentifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPointSetComponent**)Z_Param__Result=P_THIS->AddPointSet(Z_Param_PointSetIdentifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreviewGeometry::execSetAllLineSetsMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllLineSetsMaterial(Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreviewGeometry::execSetLineSetMaterial)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LineSetIdentifier);
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetLineSetMaterial(Z_Param_LineSetIdentifier,Z_Param_NewMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreviewGeometry::execSetLineSetVisibility)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LineSetIdentifier);
		P_GET_UBOOL(Z_Param_bVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetLineSetVisibility(Z_Param_LineSetIdentifier,Z_Param_bVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreviewGeometry::execRemoveAllLineSets)
	{
		P_GET_UBOOL(Z_Param_bDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllLineSets(Z_Param_bDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreviewGeometry::execRemoveLineSet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LineSetIdentifier);
		P_GET_UBOOL(Z_Param_bDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveLineSet(Z_Param_LineSetIdentifier,Z_Param_bDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreviewGeometry::execFindLineSet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LineSetIdentifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULineSetComponent**)Z_Param__Result=P_THIS->FindLineSet(Z_Param_LineSetIdentifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreviewGeometry::execAddLineSet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_LineSetIdentifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULineSetComponent**)Z_Param__Result=P_THIS->AddLineSet(Z_Param_LineSetIdentifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreviewGeometry::execGetActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(APreviewGeometryActor**)Z_Param__Result=P_THIS->GetActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreviewGeometry::execDisconnect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Disconnect();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPreviewGeometry::execCreateInWorld)
	{
		P_GET_OBJECT(UWorld,Z_Param_World);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_WithTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateInWorld(Z_Param_World,Z_Param_Out_WithTransform);
		P_NATIVE_END;
	}
	void UPreviewGeometry::StaticRegisterNativesUPreviewGeometry()
	{
		UClass* Class = UPreviewGeometry::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddLineSet", &UPreviewGeometry::execAddLineSet },
			{ "AddPointSet", &UPreviewGeometry::execAddPointSet },
			{ "CreateInWorld", &UPreviewGeometry::execCreateInWorld },
			{ "Disconnect", &UPreviewGeometry::execDisconnect },
			{ "FindLineSet", &UPreviewGeometry::execFindLineSet },
			{ "FindPointSet", &UPreviewGeometry::execFindPointSet },
			{ "GetActor", &UPreviewGeometry::execGetActor },
			{ "RemoveAllLineSets", &UPreviewGeometry::execRemoveAllLineSets },
			{ "RemoveAllPointSets", &UPreviewGeometry::execRemoveAllPointSets },
			{ "RemoveLineSet", &UPreviewGeometry::execRemoveLineSet },
			{ "RemovePointSet", &UPreviewGeometry::execRemovePointSet },
			{ "SetAllLineSetsMaterial", &UPreviewGeometry::execSetAllLineSetsMaterial },
			{ "SetAllPointSetsMaterial", &UPreviewGeometry::execSetAllPointSetsMaterial },
			{ "SetLineSetMaterial", &UPreviewGeometry::execSetLineSetMaterial },
			{ "SetLineSetVisibility", &UPreviewGeometry::execSetLineSetVisibility },
			{ "SetPointSetMaterial", &UPreviewGeometry::execSetPointSetMaterial },
			{ "SetPointSetVisibility", &UPreviewGeometry::execSetPointSetVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPreviewGeometry_AddLineSet_Statics
	{
		struct PreviewGeometry_eventAddLineSet_Parms
		{
			FString LineSetIdentifier;
			ULineSetComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineSetIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LineSetIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_AddLineSet_Statics::NewProp_LineSetIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreviewGeometry_AddLineSet_Statics::NewProp_LineSetIdentifier = { "LineSetIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PreviewGeometry_eventAddLineSet_Parms, LineSetIdentifier), METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_AddLineSet_Statics::NewProp_LineSetIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_AddLineSet_Statics::NewProp_LineSetIdentifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_AddLineSet_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPreviewGeometry_AddLineSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PreviewGeometry_eventAddLineSet_Parms, ReturnValue), Z_Construct_UClass_ULineSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_AddLineSet_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_AddLineSet_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreviewGeometry_AddLineSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_AddLineSet_Statics::NewProp_LineSetIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_AddLineSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_AddLineSet_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Create a new line set with the given LineSetIdentifier and return it */" },
		{ "ModuleRelativePath", "Public/Drawing/PreviewGeometryActor.h" },
		{ "ToolTip", "Create a new line set with the given LineSetIdentifier and return it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreviewGeometry_AddLineSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreviewGeometry, nullptr, "AddLineSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPreviewGeometry_AddLineSet_Statics::PreviewGeometry_eventAddLineSet_Parms), Z_Construct_UFunction_UPreviewGeometry_AddLineSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_AddLineSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_AddLineSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_AddLineSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPreviewGeometry_AddLineSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreviewGeometry_AddLineSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreviewGeometry_AddPointSet_Statics
	{
		struct PreviewGeometry_eventAddPointSet_Parms
		{
			FString PointSetIdentifier;
			UPointSetComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointSetIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PointSetIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_AddPointSet_Statics::NewProp_PointSetIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreviewGeometry_AddPointSet_Statics::NewProp_PointSetIdentifier = { "PointSetIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PreviewGeometry_eventAddPointSet_Parms, PointSetIdentifier), METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_AddPointSet_Statics::NewProp_PointSetIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_AddPointSet_Statics::NewProp_PointSetIdentifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_AddPointSet_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPreviewGeometry_AddPointSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PreviewGeometry_eventAddPointSet_Parms, ReturnValue), Z_Construct_UClass_UPointSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_AddPointSet_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_AddPointSet_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreviewGeometry_AddPointSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_AddPointSet_Statics::NewProp_PointSetIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_AddPointSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_AddPointSet_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Create a new point set with the given PointSetIdentifier and return it */" },
		{ "ModuleRelativePath", "Public/Drawing/PreviewGeometryActor.h" },
		{ "ToolTip", "Create a new point set with the given PointSetIdentifier and return it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreviewGeometry_AddPointSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreviewGeometry, nullptr, "AddPointSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPreviewGeometry_AddPointSet_Statics::PreviewGeometry_eventAddPointSet_Parms), Z_Construct_UFunction_UPreviewGeometry_AddPointSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_AddPointSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_AddPointSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_AddPointSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPreviewGeometry_AddPointSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreviewGeometry_AddPointSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreviewGeometry_CreateInWorld_Statics
	{
		struct PreviewGeometry_eventCreateInWorld_Parms
		{
			UWorld* World;
			FTransform WithTransform;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WithTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WithTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPreviewGeometry_CreateInWorld_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PreviewGeometry_eventCreateInWorld_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_CreateInWorld_Statics::NewProp_WithTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPreviewGeometry_CreateInWorld_Statics::NewProp_WithTransform = { "WithTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PreviewGeometry_eventCreateInWorld_Parms, WithTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_CreateInWorld_Statics::NewProp_WithTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_CreateInWorld_Statics::NewProp_WithTransform_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreviewGeometry_CreateInWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_CreateInWorld_Statics::NewProp_World,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_CreateInWorld_Statics::NewProp_WithTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_CreateInWorld_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Create preview mesh in the World with the given transform\n\x09 */" },
		{ "ModuleRelativePath", "Public/Drawing/PreviewGeometryActor.h" },
		{ "ToolTip", "Create preview mesh in the World with the given transform" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreviewGeometry_CreateInWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreviewGeometry, nullptr, "CreateInWorld", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPreviewGeometry_CreateInWorld_Statics::PreviewGeometry_eventCreateInWorld_Parms), Z_Construct_UFunction_UPreviewGeometry_CreateInWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_CreateInWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_CreateInWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_CreateInWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPreviewGeometry_CreateInWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreviewGeometry_CreateInWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreviewGeometry_Disconnect_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_Disconnect_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Remove and destroy preview mesh\n\x09 */" },
		{ "ModuleRelativePath", "Public/Drawing/PreviewGeometryActor.h" },
		{ "ToolTip", "Remove and destroy preview mesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreviewGeometry_Disconnect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreviewGeometry, nullptr, "Disconnect", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_Disconnect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_Disconnect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPreviewGeometry_Disconnect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreviewGeometry_Disconnect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreviewGeometry_FindLineSet_Statics
	{
		struct PreviewGeometry_eventFindLineSet_Parms
		{
			FString LineSetIdentifier;
			ULineSetComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineSetIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LineSetIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_FindLineSet_Statics::NewProp_LineSetIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreviewGeometry_FindLineSet_Statics::NewProp_LineSetIdentifier = { "LineSetIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PreviewGeometry_eventFindLineSet_Parms, LineSetIdentifier), METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_FindLineSet_Statics::NewProp_LineSetIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_FindLineSet_Statics::NewProp_LineSetIdentifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_FindLineSet_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPreviewGeometry_FindLineSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PreviewGeometry_eventFindLineSet_Parms, ReturnValue), Z_Construct_UClass_ULineSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_FindLineSet_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_FindLineSet_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreviewGeometry_FindLineSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_FindLineSet_Statics::NewProp_LineSetIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_FindLineSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_FindLineSet_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** @return the LineSetComponent with the given LineSetIdentifier, or nullptr if not found */" },
		{ "ModuleRelativePath", "Public/Drawing/PreviewGeometryActor.h" },
		{ "ToolTip", "@return the LineSetComponent with the given LineSetIdentifier, or nullptr if not found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreviewGeometry_FindLineSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreviewGeometry, nullptr, "FindLineSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPreviewGeometry_FindLineSet_Statics::PreviewGeometry_eventFindLineSet_Parms), Z_Construct_UFunction_UPreviewGeometry_FindLineSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_FindLineSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_FindLineSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_FindLineSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPreviewGeometry_FindLineSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreviewGeometry_FindLineSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreviewGeometry_FindPointSet_Statics
	{
		struct PreviewGeometry_eventFindPointSet_Parms
		{
			FString PointSetIdentifier;
			UPointSetComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointSetIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PointSetIdentifier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_FindPointSet_Statics::NewProp_PointSetIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreviewGeometry_FindPointSet_Statics::NewProp_PointSetIdentifier = { "PointSetIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PreviewGeometry_eventFindPointSet_Parms, PointSetIdentifier), METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_FindPointSet_Statics::NewProp_PointSetIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_FindPointSet_Statics::NewProp_PointSetIdentifier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_FindPointSet_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPreviewGeometry_FindPointSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PreviewGeometry_eventFindPointSet_Parms, ReturnValue), Z_Construct_UClass_UPointSetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_FindPointSet_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_FindPointSet_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreviewGeometry_FindPointSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_FindPointSet_Statics::NewProp_PointSetIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_FindPointSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_FindPointSet_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** @return the PointSetComponent with the given PointSetIdentifier, or nullptr if not found */" },
		{ "ModuleRelativePath", "Public/Drawing/PreviewGeometryActor.h" },
		{ "ToolTip", "@return the PointSetComponent with the given PointSetIdentifier, or nullptr if not found" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreviewGeometry_FindPointSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreviewGeometry, nullptr, "FindPointSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPreviewGeometry_FindPointSet_Statics::PreviewGeometry_eventFindPointSet_Parms), Z_Construct_UFunction_UPreviewGeometry_FindPointSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_FindPointSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_FindPointSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_FindPointSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPreviewGeometry_FindPointSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreviewGeometry_FindPointSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreviewGeometry_GetActor_Statics
	{
		struct PreviewGeometry_eventGetActor_Parms
		{
			APreviewGeometryActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPreviewGeometry_GetActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PreviewGeometry_eventGetActor_Parms, ReturnValue), Z_Construct_UClass_APreviewGeometryActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreviewGeometry_GetActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_GetActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_GetActor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** @return the preview geometry actor created by this class */" },
		{ "ModuleRelativePath", "Public/Drawing/PreviewGeometryActor.h" },
		{ "ToolTip", "@return the preview geometry actor created by this class" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreviewGeometry_GetActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreviewGeometry, nullptr, "GetActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPreviewGeometry_GetActor_Statics::PreviewGeometry_eventGetActor_Parms), Z_Construct_UFunction_UPreviewGeometry_GetActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_GetActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_GetActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_GetActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPreviewGeometry_GetActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreviewGeometry_GetActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreviewGeometry_RemoveAllLineSets_Statics
	{
		struct PreviewGeometry_eventRemoveAllLineSets_Parms
		{
			bool bDestroy;
		};
		static void NewProp_bDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPreviewGeometry_RemoveAllLineSets_Statics::NewProp_bDestroy_SetBit(void* Obj)
	{
		((PreviewGeometry_eventRemoveAllLineSets_Parms*)Obj)->bDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPreviewGeometry_RemoveAllLineSets_Statics::NewProp_bDestroy = { "bDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PreviewGeometry_eventRemoveAllLineSets_Parms), &Z_Construct_UFunction_UPreviewGeometry_RemoveAllLineSets_Statics::NewProp_bDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreviewGeometry_RemoveAllLineSets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_RemoveAllLineSets_Statics::NewProp_bDestroy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_RemoveAllLineSets_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Remove all LineSetComponents\n\x09 * @param bDestroy if true, the components will unregistered and destroyed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Drawing/PreviewGeometryActor.h" },
		{ "ToolTip", "Remove all LineSetComponents\n@param bDestroy if true, the components will unregistered and destroyed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreviewGeometry_RemoveAllLineSets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreviewGeometry, nullptr, "RemoveAllLineSets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPreviewGeometry_RemoveAllLineSets_Statics::PreviewGeometry_eventRemoveAllLineSets_Parms), Z_Construct_UFunction_UPreviewGeometry_RemoveAllLineSets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_RemoveAllLineSets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_RemoveAllLineSets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_RemoveAllLineSets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPreviewGeometry_RemoveAllLineSets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreviewGeometry_RemoveAllLineSets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreviewGeometry_RemoveAllPointSets_Statics
	{
		struct PreviewGeometry_eventRemoveAllPointSets_Parms
		{
			bool bDestroy;
		};
		static void NewProp_bDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UPreviewGeometry_RemoveAllPointSets_Statics::NewProp_bDestroy_SetBit(void* Obj)
	{
		((PreviewGeometry_eventRemoveAllPointSets_Parms*)Obj)->bDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPreviewGeometry_RemoveAllPointSets_Statics::NewProp_bDestroy = { "bDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PreviewGeometry_eventRemoveAllPointSets_Parms), &Z_Construct_UFunction_UPreviewGeometry_RemoveAllPointSets_Statics::NewProp_bDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreviewGeometry_RemoveAllPointSets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_RemoveAllPointSets_Statics::NewProp_bDestroy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_RemoveAllPointSets_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Remove all PointSetComponents\n\x09 * @param bDestroy if true, the components will unregistered and destroyed.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Drawing/PreviewGeometryActor.h" },
		{ "ToolTip", "Remove all PointSetComponents\n@param bDestroy if true, the components will unregistered and destroyed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreviewGeometry_RemoveAllPointSets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreviewGeometry, nullptr, "RemoveAllPointSets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPreviewGeometry_RemoveAllPointSets_Statics::PreviewGeometry_eventRemoveAllPointSets_Parms), Z_Construct_UFunction_UPreviewGeometry_RemoveAllPointSets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_RemoveAllPointSets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_RemoveAllPointSets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_RemoveAllPointSets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPreviewGeometry_RemoveAllPointSets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreviewGeometry_RemoveAllPointSets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreviewGeometry_RemoveLineSet_Statics
	{
		struct PreviewGeometry_eventRemoveLineSet_Parms
		{
			FString LineSetIdentifier;
			bool bDestroy;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineSetIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LineSetIdentifier;
		static void NewProp_bDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroy;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_RemoveLineSet_Statics::NewProp_LineSetIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreviewGeometry_RemoveLineSet_Statics::NewProp_LineSetIdentifier = { "LineSetIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PreviewGeometry_eventRemoveLineSet_Parms, LineSetIdentifier), METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_RemoveLineSet_Statics::NewProp_LineSetIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_RemoveLineSet_Statics::NewProp_LineSetIdentifier_MetaData)) };
	void Z_Construct_UFunction_UPreviewGeometry_RemoveLineSet_Statics::NewProp_bDestroy_SetBit(void* Obj)
	{
		((PreviewGeometry_eventRemoveLineSet_Parms*)Obj)->bDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPreviewGeometry_RemoveLineSet_Statics::NewProp_bDestroy = { "bDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PreviewGeometry_eventRemoveLineSet_Parms), &Z_Construct_UFunction_UPreviewGeometry_RemoveLineSet_Statics::NewProp_bDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPreviewGeometry_RemoveLineSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PreviewGeometry_eventRemoveLineSet_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPreviewGeometry_RemoveLineSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PreviewGeometry_eventRemoveLineSet_Parms), &Z_Construct_UFunction_UPreviewGeometry_RemoveLineSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreviewGeometry_RemoveLineSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_RemoveLineSet_Statics::NewProp_LineSetIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_RemoveLineSet_Statics::NewProp_bDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_RemoveLineSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_RemoveLineSet_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Remove the LineSetComponent with the given LineSetIdentifier\n\x09 * @param bDestroy if true, component will unregistered and destroyed. \n\x09 * @return true if the LineSetComponent was found and removed\n\x09 */" },
		{ "ModuleRelativePath", "Public/Drawing/PreviewGeometryActor.h" },
		{ "ToolTip", "Remove the LineSetComponent with the given LineSetIdentifier\n@param bDestroy if true, component will unregistered and destroyed.\n@return true if the LineSetComponent was found and removed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreviewGeometry_RemoveLineSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreviewGeometry, nullptr, "RemoveLineSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPreviewGeometry_RemoveLineSet_Statics::PreviewGeometry_eventRemoveLineSet_Parms), Z_Construct_UFunction_UPreviewGeometry_RemoveLineSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_RemoveLineSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_RemoveLineSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_RemoveLineSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPreviewGeometry_RemoveLineSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreviewGeometry_RemoveLineSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreviewGeometry_RemovePointSet_Statics
	{
		struct PreviewGeometry_eventRemovePointSet_Parms
		{
			FString PointSetIdentifier;
			bool bDestroy;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointSetIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PointSetIdentifier;
		static void NewProp_bDestroy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDestroy;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_RemovePointSet_Statics::NewProp_PointSetIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreviewGeometry_RemovePointSet_Statics::NewProp_PointSetIdentifier = { "PointSetIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PreviewGeometry_eventRemovePointSet_Parms, PointSetIdentifier), METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_RemovePointSet_Statics::NewProp_PointSetIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_RemovePointSet_Statics::NewProp_PointSetIdentifier_MetaData)) };
	void Z_Construct_UFunction_UPreviewGeometry_RemovePointSet_Statics::NewProp_bDestroy_SetBit(void* Obj)
	{
		((PreviewGeometry_eventRemovePointSet_Parms*)Obj)->bDestroy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPreviewGeometry_RemovePointSet_Statics::NewProp_bDestroy = { "bDestroy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PreviewGeometry_eventRemovePointSet_Parms), &Z_Construct_UFunction_UPreviewGeometry_RemovePointSet_Statics::NewProp_bDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPreviewGeometry_RemovePointSet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PreviewGeometry_eventRemovePointSet_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPreviewGeometry_RemovePointSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PreviewGeometry_eventRemovePointSet_Parms), &Z_Construct_UFunction_UPreviewGeometry_RemovePointSet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreviewGeometry_RemovePointSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_RemovePointSet_Statics::NewProp_PointSetIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_RemovePointSet_Statics::NewProp_bDestroy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_RemovePointSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_RemovePointSet_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** \n\x09 * Remove the PointSetComponent with the given PointSetIdentifier\n\x09 * @param bDestroy if true, component will unregistered and destroyed. \n\x09 * @return true if the PointSetComponent was found and removed\n\x09 */" },
		{ "ModuleRelativePath", "Public/Drawing/PreviewGeometryActor.h" },
		{ "ToolTip", "Remove the PointSetComponent with the given PointSetIdentifier\n@param bDestroy if true, component will unregistered and destroyed.\n@return true if the PointSetComponent was found and removed" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreviewGeometry_RemovePointSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreviewGeometry, nullptr, "RemovePointSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPreviewGeometry_RemovePointSet_Statics::PreviewGeometry_eventRemovePointSet_Parms), Z_Construct_UFunction_UPreviewGeometry_RemovePointSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_RemovePointSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_RemovePointSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_RemovePointSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPreviewGeometry_RemovePointSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreviewGeometry_RemovePointSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreviewGeometry_SetAllLineSetsMaterial_Statics
	{
		struct PreviewGeometry_eventSetAllLineSetsMaterial_Parms
		{
			UMaterialInterface* Material;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPreviewGeometry_SetAllLineSetsMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PreviewGeometry_eventSetAllLineSetsMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreviewGeometry_SetAllLineSetsMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_SetAllLineSetsMaterial_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_SetAllLineSetsMaterial_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Set the Material of all LineSetComponents\n\x09 */" },
		{ "ModuleRelativePath", "Public/Drawing/PreviewGeometryActor.h" },
		{ "ToolTip", "Set the Material of all LineSetComponents" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreviewGeometry_SetAllLineSetsMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreviewGeometry, nullptr, "SetAllLineSetsMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPreviewGeometry_SetAllLineSetsMaterial_Statics::PreviewGeometry_eventSetAllLineSetsMaterial_Parms), Z_Construct_UFunction_UPreviewGeometry_SetAllLineSetsMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_SetAllLineSetsMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_SetAllLineSetsMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_SetAllLineSetsMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPreviewGeometry_SetAllLineSetsMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreviewGeometry_SetAllLineSetsMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreviewGeometry_SetAllPointSetsMaterial_Statics
	{
		struct PreviewGeometry_eventSetAllPointSetsMaterial_Parms
		{
			UMaterialInterface* Material;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPreviewGeometry_SetAllPointSetsMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PreviewGeometry_eventSetAllPointSetsMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreviewGeometry_SetAllPointSetsMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_SetAllPointSetsMaterial_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_SetAllPointSetsMaterial_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Set the Material of all PointSetComponents\n\x09 */" },
		{ "ModuleRelativePath", "Public/Drawing/PreviewGeometryActor.h" },
		{ "ToolTip", "Set the Material of all PointSetComponents" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreviewGeometry_SetAllPointSetsMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreviewGeometry, nullptr, "SetAllPointSetsMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPreviewGeometry_SetAllPointSetsMaterial_Statics::PreviewGeometry_eventSetAllPointSetsMaterial_Parms), Z_Construct_UFunction_UPreviewGeometry_SetAllPointSetsMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_SetAllPointSetsMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_SetAllPointSetsMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_SetAllPointSetsMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPreviewGeometry_SetAllPointSetsMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreviewGeometry_SetAllPointSetsMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreviewGeometry_SetLineSetMaterial_Statics
	{
		struct PreviewGeometry_eventSetLineSetMaterial_Parms
		{
			FString LineSetIdentifier;
			UMaterialInterface* NewMaterial;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineSetIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LineSetIdentifier;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_SetLineSetMaterial_Statics::NewProp_LineSetIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreviewGeometry_SetLineSetMaterial_Statics::NewProp_LineSetIdentifier = { "LineSetIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PreviewGeometry_eventSetLineSetMaterial_Parms, LineSetIdentifier), METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_SetLineSetMaterial_Statics::NewProp_LineSetIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_SetLineSetMaterial_Statics::NewProp_LineSetIdentifier_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPreviewGeometry_SetLineSetMaterial_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PreviewGeometry_eventSetLineSetMaterial_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPreviewGeometry_SetLineSetMaterial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PreviewGeometry_eventSetLineSetMaterial_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPreviewGeometry_SetLineSetMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PreviewGeometry_eventSetLineSetMaterial_Parms), &Z_Construct_UFunction_UPreviewGeometry_SetLineSetMaterial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreviewGeometry_SetLineSetMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_SetLineSetMaterial_Statics::NewProp_LineSetIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_SetLineSetMaterial_Statics::NewProp_NewMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_SetLineSetMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_SetLineSetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Set the Material of the LineSetComponent with the given LineSetIdentifier\n\x09 * @return true if the LineSetComponent was found and updated\n\x09 */" },
		{ "ModuleRelativePath", "Public/Drawing/PreviewGeometryActor.h" },
		{ "ToolTip", "Set the Material of the LineSetComponent with the given LineSetIdentifier\n@return true if the LineSetComponent was found and updated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreviewGeometry_SetLineSetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreviewGeometry, nullptr, "SetLineSetMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPreviewGeometry_SetLineSetMaterial_Statics::PreviewGeometry_eventSetLineSetMaterial_Parms), Z_Construct_UFunction_UPreviewGeometry_SetLineSetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_SetLineSetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_SetLineSetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_SetLineSetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPreviewGeometry_SetLineSetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreviewGeometry_SetLineSetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreviewGeometry_SetLineSetVisibility_Statics
	{
		struct PreviewGeometry_eventSetLineSetVisibility_Parms
		{
			FString LineSetIdentifier;
			bool bVisible;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineSetIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_LineSetIdentifier;
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_SetLineSetVisibility_Statics::NewProp_LineSetIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreviewGeometry_SetLineSetVisibility_Statics::NewProp_LineSetIdentifier = { "LineSetIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PreviewGeometry_eventSetLineSetVisibility_Parms, LineSetIdentifier), METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_SetLineSetVisibility_Statics::NewProp_LineSetIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_SetLineSetVisibility_Statics::NewProp_LineSetIdentifier_MetaData)) };
	void Z_Construct_UFunction_UPreviewGeometry_SetLineSetVisibility_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((PreviewGeometry_eventSetLineSetVisibility_Parms*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPreviewGeometry_SetLineSetVisibility_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PreviewGeometry_eventSetLineSetVisibility_Parms), &Z_Construct_UFunction_UPreviewGeometry_SetLineSetVisibility_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPreviewGeometry_SetLineSetVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PreviewGeometry_eventSetLineSetVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPreviewGeometry_SetLineSetVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PreviewGeometry_eventSetLineSetVisibility_Parms), &Z_Construct_UFunction_UPreviewGeometry_SetLineSetVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreviewGeometry_SetLineSetVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_SetLineSetVisibility_Statics::NewProp_LineSetIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_SetLineSetVisibility_Statics::NewProp_bVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_SetLineSetVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_SetLineSetVisibility_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Set the visibility of the LineSetComponent with the given LineSetIdentifier\n\x09 * @return true if the LineSetComponent was found and updated\n\x09 */" },
		{ "ModuleRelativePath", "Public/Drawing/PreviewGeometryActor.h" },
		{ "ToolTip", "Set the visibility of the LineSetComponent with the given LineSetIdentifier\n@return true if the LineSetComponent was found and updated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreviewGeometry_SetLineSetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreviewGeometry, nullptr, "SetLineSetVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPreviewGeometry_SetLineSetVisibility_Statics::PreviewGeometry_eventSetLineSetVisibility_Parms), Z_Construct_UFunction_UPreviewGeometry_SetLineSetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_SetLineSetVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_SetLineSetVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_SetLineSetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPreviewGeometry_SetLineSetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreviewGeometry_SetLineSetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreviewGeometry_SetPointSetMaterial_Statics
	{
		struct PreviewGeometry_eventSetPointSetMaterial_Parms
		{
			FString PointSetIdentifier;
			UMaterialInterface* NewMaterial;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointSetIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PointSetIdentifier;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewMaterial;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_SetPointSetMaterial_Statics::NewProp_PointSetIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreviewGeometry_SetPointSetMaterial_Statics::NewProp_PointSetIdentifier = { "PointSetIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PreviewGeometry_eventSetPointSetMaterial_Parms, PointSetIdentifier), METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_SetPointSetMaterial_Statics::NewProp_PointSetIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_SetPointSetMaterial_Statics::NewProp_PointSetIdentifier_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPreviewGeometry_SetPointSetMaterial_Statics::NewProp_NewMaterial = { "NewMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PreviewGeometry_eventSetPointSetMaterial_Parms, NewMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPreviewGeometry_SetPointSetMaterial_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PreviewGeometry_eventSetPointSetMaterial_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPreviewGeometry_SetPointSetMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PreviewGeometry_eventSetPointSetMaterial_Parms), &Z_Construct_UFunction_UPreviewGeometry_SetPointSetMaterial_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreviewGeometry_SetPointSetMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_SetPointSetMaterial_Statics::NewProp_PointSetIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_SetPointSetMaterial_Statics::NewProp_NewMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_SetPointSetMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_SetPointSetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Set the Material of the PointSetComponent with the given PointSetIdentifier\n\x09 * @return true if the PointSetComponent was found and updated\n\x09 */" },
		{ "ModuleRelativePath", "Public/Drawing/PreviewGeometryActor.h" },
		{ "ToolTip", "Set the Material of the PointSetComponent with the given PointSetIdentifier\n@return true if the PointSetComponent was found and updated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreviewGeometry_SetPointSetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreviewGeometry, nullptr, "SetPointSetMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPreviewGeometry_SetPointSetMaterial_Statics::PreviewGeometry_eventSetPointSetMaterial_Parms), Z_Construct_UFunction_UPreviewGeometry_SetPointSetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_SetPointSetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_SetPointSetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_SetPointSetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPreviewGeometry_SetPointSetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreviewGeometry_SetPointSetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPreviewGeometry_SetPointSetVisibility_Statics
	{
		struct PreviewGeometry_eventSetPointSetVisibility_Parms
		{
			FString PointSetIdentifier;
			bool bVisible;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointSetIdentifier_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PointSetIdentifier;
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisible;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_SetPointSetVisibility_Statics::NewProp_PointSetIdentifier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UPreviewGeometry_SetPointSetVisibility_Statics::NewProp_PointSetIdentifier = { "PointSetIdentifier", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PreviewGeometry_eventSetPointSetVisibility_Parms, PointSetIdentifier), METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_SetPointSetVisibility_Statics::NewProp_PointSetIdentifier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_SetPointSetVisibility_Statics::NewProp_PointSetIdentifier_MetaData)) };
	void Z_Construct_UFunction_UPreviewGeometry_SetPointSetVisibility_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((PreviewGeometry_eventSetPointSetVisibility_Parms*)Obj)->bVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPreviewGeometry_SetPointSetVisibility_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PreviewGeometry_eventSetPointSetVisibility_Parms), &Z_Construct_UFunction_UPreviewGeometry_SetPointSetVisibility_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPreviewGeometry_SetPointSetVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PreviewGeometry_eventSetPointSetVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPreviewGeometry_SetPointSetVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PreviewGeometry_eventSetPointSetVisibility_Parms), &Z_Construct_UFunction_UPreviewGeometry_SetPointSetVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPreviewGeometry_SetPointSetVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_SetPointSetVisibility_Statics::NewProp_PointSetIdentifier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_SetPointSetVisibility_Statics::NewProp_bVisible,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPreviewGeometry_SetPointSetVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPreviewGeometry_SetPointSetVisibility_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Set the visibility of the PointSetComponent with the given PointSetIdentifier\n\x09 * @return true if the PointSetComponent was found and updated\n\x09 */" },
		{ "ModuleRelativePath", "Public/Drawing/PreviewGeometryActor.h" },
		{ "ToolTip", "Set the visibility of the PointSetComponent with the given PointSetIdentifier\n@return true if the PointSetComponent was found and updated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPreviewGeometry_SetPointSetVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPreviewGeometry, nullptr, "SetPointSetVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPreviewGeometry_SetPointSetVisibility_Statics::PreviewGeometry_eventSetPointSetVisibility_Parms), Z_Construct_UFunction_UPreviewGeometry_SetPointSetVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_SetPointSetVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPreviewGeometry_SetPointSetVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPreviewGeometry_SetPointSetVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPreviewGeometry_SetPointSetVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPreviewGeometry_SetPointSetVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPreviewGeometry);
	UClass* Z_Construct_UClass_UPreviewGeometry_NoRegister()
	{
		return UPreviewGeometry::StaticClass();
	}
	struct Z_Construct_UClass_UPreviewGeometry_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentActor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ParentActor;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LineSets_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_LineSets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineSets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_LineSets;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PointSets_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PointSets_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PointSets_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PointSets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPreviewGeometry_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPreviewGeometry_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPreviewGeometry_AddLineSet, "AddLineSet" }, // 851824571
		{ &Z_Construct_UFunction_UPreviewGeometry_AddPointSet, "AddPointSet" }, // 3145476374
		{ &Z_Construct_UFunction_UPreviewGeometry_CreateInWorld, "CreateInWorld" }, // 4110024307
		{ &Z_Construct_UFunction_UPreviewGeometry_Disconnect, "Disconnect" }, // 1355666685
		{ &Z_Construct_UFunction_UPreviewGeometry_FindLineSet, "FindLineSet" }, // 2942791696
		{ &Z_Construct_UFunction_UPreviewGeometry_FindPointSet, "FindPointSet" }, // 3206257590
		{ &Z_Construct_UFunction_UPreviewGeometry_GetActor, "GetActor" }, // 3321470912
		{ &Z_Construct_UFunction_UPreviewGeometry_RemoveAllLineSets, "RemoveAllLineSets" }, // 2607643671
		{ &Z_Construct_UFunction_UPreviewGeometry_RemoveAllPointSets, "RemoveAllPointSets" }, // 986676831
		{ &Z_Construct_UFunction_UPreviewGeometry_RemoveLineSet, "RemoveLineSet" }, // 3115398379
		{ &Z_Construct_UFunction_UPreviewGeometry_RemovePointSet, "RemovePointSet" }, // 3239362734
		{ &Z_Construct_UFunction_UPreviewGeometry_SetAllLineSetsMaterial, "SetAllLineSetsMaterial" }, // 2958344016
		{ &Z_Construct_UFunction_UPreviewGeometry_SetAllPointSetsMaterial, "SetAllPointSetsMaterial" }, // 2821231783
		{ &Z_Construct_UFunction_UPreviewGeometry_SetLineSetMaterial, "SetLineSetMaterial" }, // 903644602
		{ &Z_Construct_UFunction_UPreviewGeometry_SetLineSetVisibility, "SetLineSetVisibility" }, // 3473983487
		{ &Z_Construct_UFunction_UPreviewGeometry_SetPointSetMaterial, "SetPointSetMaterial" }, // 885118026
		{ &Z_Construct_UFunction_UPreviewGeometry_SetPointSetVisibility, "SetPointSetVisibility" }, // 1686601707
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPreviewGeometry_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UPreviewGeometry creates and manages an APreviewGeometryActor and a set of preview geometry Components.\n * Preview geometry Components are identified by strings.\n */" },
		{ "IncludePath", "Drawing/PreviewGeometryActor.h" },
		{ "ModuleRelativePath", "Public/Drawing/PreviewGeometryActor.h" },
		{ "ToolTip", "UPreviewGeometry creates and manages an APreviewGeometryActor and a set of preview geometry Components.\nPreview geometry Components are identified by strings." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPreviewGeometry_Statics::NewProp_ParentActor_MetaData[] = {
		{ "Comment", "/**\n\x09 * Actor created and managed by the UPreviewGeometry\n\x09 */" },
		{ "ModuleRelativePath", "Public/Drawing/PreviewGeometryActor.h" },
		{ "ToolTip", "Actor created and managed by the UPreviewGeometry" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPreviewGeometry_Statics::NewProp_ParentActor = { "ParentActor", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPreviewGeometry, ParentActor), Z_Construct_UClass_APreviewGeometryActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPreviewGeometry_Statics::NewProp_ParentActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPreviewGeometry_Statics::NewProp_ParentActor_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPreviewGeometry_Statics::NewProp_LineSets_ValueProp = { "LineSets", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_ULineSetComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPreviewGeometry_Statics::NewProp_LineSets_Key_KeyProp = { "LineSets_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPreviewGeometry_Statics::NewProp_LineSets_MetaData[] = {
		{ "Comment", "/**\n\x09 * LineSetComponents created and owned by the UPreviewGeometry, and added as child components of the ParentActor\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Drawing/PreviewGeometryActor.h" },
		{ "ToolTip", "LineSetComponents created and owned by the UPreviewGeometry, and added as child components of the ParentActor" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPreviewGeometry_Statics::NewProp_LineSets = { "LineSets", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPreviewGeometry, LineSets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPreviewGeometry_Statics::NewProp_LineSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPreviewGeometry_Statics::NewProp_LineSets_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPreviewGeometry_Statics::NewProp_PointSets_ValueProp = { "PointSets", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UPointSetComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPreviewGeometry_Statics::NewProp_PointSets_Key_KeyProp = { "PointSets_Key", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPreviewGeometry_Statics::NewProp_PointSets_MetaData[] = {
		{ "Comment", "/**\n\x09 * PointSetComponents created and owned by the UPreviewGeometry, and added as child components of the ParentActor\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Drawing/PreviewGeometryActor.h" },
		{ "ToolTip", "PointSetComponents created and owned by the UPreviewGeometry, and added as child components of the ParentActor" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UPreviewGeometry_Statics::NewProp_PointSets = { "PointSets", nullptr, (EPropertyFlags)0x0014008000000008, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPreviewGeometry, PointSets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPreviewGeometry_Statics::NewProp_PointSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPreviewGeometry_Statics::NewProp_PointSets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPreviewGeometry_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreviewGeometry_Statics::NewProp_ParentActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreviewGeometry_Statics::NewProp_LineSets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreviewGeometry_Statics::NewProp_LineSets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreviewGeometry_Statics::NewProp_LineSets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreviewGeometry_Statics::NewProp_PointSets_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreviewGeometry_Statics::NewProp_PointSets_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPreviewGeometry_Statics::NewProp_PointSets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPreviewGeometry_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPreviewGeometry>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPreviewGeometry_Statics::ClassParams = {
		&UPreviewGeometry::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPreviewGeometry_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPreviewGeometry_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPreviewGeometry_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPreviewGeometry_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPreviewGeometry()
	{
		if (!Z_Registration_Info_UClass_UPreviewGeometry.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPreviewGeometry.OuterSingleton, Z_Construct_UClass_UPreviewGeometry_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPreviewGeometry.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UPreviewGeometry>()
	{
		return UPreviewGeometry::StaticClass();
	}
	UPreviewGeometry::UPreviewGeometry(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPreviewGeometry);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APreviewGeometryActor, APreviewGeometryActor::StaticClass, TEXT("APreviewGeometryActor"), &Z_Registration_Info_UClass_APreviewGeometryActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APreviewGeometryActor), 1620257758U) },
		{ Z_Construct_UClass_UPreviewGeometry, UPreviewGeometry::StaticClass, TEXT("UPreviewGeometry"), &Z_Registration_Info_UClass_UPreviewGeometry, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPreviewGeometry), 4198719390U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_728741323(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Drawing_PreviewGeometryActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
