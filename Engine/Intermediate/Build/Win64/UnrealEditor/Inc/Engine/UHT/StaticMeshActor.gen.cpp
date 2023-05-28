// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/StaticMeshActor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStaticMeshActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EComponentMobility();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavDataGatheringMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(AStaticMeshActor::execSetMobility)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_InMobility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMobility(EComponentMobility::Type(Z_Param_InMobility));
		P_NATIVE_END;
	}
	void AStaticMeshActor::StaticRegisterNativesAStaticMeshActor()
	{
		UClass* Class = AStaticMeshActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMobility", &AStaticMeshActor::execSetMobility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics
	{
		struct StaticMeshActor_eventSetMobility_Parms
		{
			TEnumAsByte<EComponentMobility::Type> InMobility;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_InMobility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::NewProp_InMobility = { "InMobility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StaticMeshActor_eventSetMobility_Parms, InMobility), Z_Construct_UEnum_Engine_EComponentMobility, METADATA_PARAMS(nullptr, 0) }; // 3258784245
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::NewProp_InMobility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mobility" },
		{ "Comment", "/** Function to change mobility type */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshActor.h" },
		{ "ToolTip", "Function to change mobility type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStaticMeshActor, nullptr, "SetMobility", nullptr, nullptr, sizeof(Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::StaticMeshActor_eventSetMobility_Parms), Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStaticMeshActor_SetMobility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStaticMeshActor_SetMobility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStaticMeshActor);
	UClass* Z_Construct_UClass_AStaticMeshActor_NoRegister()
	{
		return AStaticMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_AStaticMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StaticMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_StaticMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStaticMeshReplicateMovement_MetaData[];
#endif
		static void NewProp_bStaticMeshReplicateMovement_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStaticMeshReplicateMovement;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NavigationGeometryGatheringMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavigationGeometryGatheringMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NavigationGeometryGatheringMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStaticMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStaticMeshActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStaticMeshActor_SetMobility, "SetMobility" }, // 2689042992
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticMeshActor_Statics::Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "Comment", "/**\n * StaticMeshActor is an instance of a UStaticMesh in the world.\n * Static meshes are geometry that do not animate or otherwise deform, and are more efficient to render than other types of geometry.\n * Static meshes dragged into the level from the Content Browser are automatically converted to StaticMeshActors.\n *\n * @see https://docs.unrealengine.com/latest/INT/Engine/Actors/StaticMeshActor/\n * @see UStaticMesh\n */" },
		{ "HideCategories", "Input" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Engine/StaticMeshActor.h" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "StaticMeshActor is an instance of a UStaticMesh in the world.\nStatic meshes are geometry that do not animate or otherwise deform, and are more efficient to render than other types of geometry.\nStatic meshes dragged into the level from the Content Browser are automatically converted to StaticMeshActors.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Actors/StaticMeshActor/\n@see UStaticMesh" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_StaticMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "StaticMeshActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|StaticMesh" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_StaticMeshComponent = { "StaticMeshComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStaticMeshActor, StaticMeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_StaticMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_StaticMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_bStaticMeshReplicateMovement_MetaData[] = {
		{ "Category", "Actor" },
		{ "Comment", "/** This static mesh should replicate movement. Automatically sets the RemoteRole and bReplicateMovement flags. Meant to be edited on placed actors (those other two properties are not) */" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshActor.h" },
		{ "ToolTip", "This static mesh should replicate movement. Automatically sets the RemoteRole and bReplicateMovement flags. Meant to be edited on placed actors (those other two properties are not)" },
	};
#endif
	void Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_bStaticMeshReplicateMovement_SetBit(void* Obj)
	{
		((AStaticMeshActor*)Obj)->bStaticMeshReplicateMovement = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_bStaticMeshReplicateMovement = { "bStaticMeshReplicateMovement", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AStaticMeshActor), &Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_bStaticMeshReplicateMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_bStaticMeshReplicateMovement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_bStaticMeshReplicateMovement_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_NavigationGeometryGatheringMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_NavigationGeometryGatheringMode_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Classes/Engine/StaticMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_NavigationGeometryGatheringMode = { "NavigationGeometryGatheringMode", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStaticMeshActor, NavigationGeometryGatheringMode), Z_Construct_UEnum_Engine_ENavDataGatheringMode, METADATA_PARAMS(Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_NavigationGeometryGatheringMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_NavigationGeometryGatheringMode_MetaData)) }; // 4270589261
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStaticMeshActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_StaticMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_bStaticMeshReplicateMovement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_NavigationGeometryGatheringMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStaticMeshActor_Statics::NewProp_NavigationGeometryGatheringMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStaticMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStaticMeshActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStaticMeshActor_Statics::ClassParams = {
		&AStaticMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStaticMeshActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStaticMeshActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStaticMeshActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStaticMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStaticMeshActor()
	{
		if (!Z_Registration_Info_UClass_AStaticMeshActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStaticMeshActor.OuterSingleton, Z_Construct_UClass_AStaticMeshActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStaticMeshActor.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<AStaticMeshActor>()
	{
		return AStaticMeshActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStaticMeshActor);
	AStaticMeshActor::~AStaticMeshActor() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(AStaticMeshActor)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStaticMeshActor, AStaticMeshActor::StaticClass, TEXT("AStaticMeshActor"), &Z_Registration_Info_UClass_AStaticMeshActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStaticMeshActor), 3725391623U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_2189640525(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_StaticMeshActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
