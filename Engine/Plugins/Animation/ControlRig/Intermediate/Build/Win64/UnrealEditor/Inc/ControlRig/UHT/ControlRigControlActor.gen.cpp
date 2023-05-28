// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlRigControlActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigControlActor() {}
// Cross Module References
	CONTROLRIG_API UClass* Z_Construct_UClass_AControlRigControlActor();
	CONTROLRIG_API UClass* Z_Construct_UClass_AControlRigControlActor_NoRegister();
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ControlRig();
// End Cross Module References
	DEFINE_FUNCTION(AControlRigControlActor::execRefresh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Refresh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AControlRigControlActor::execClear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Clear();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AControlRigControlActor::execResetControlActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetControlActor();
		P_NATIVE_END;
	}
	void AControlRigControlActor::StaticRegisterNativesAControlRigControlActor()
	{
		UClass* Class = AControlRigControlActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clear", &AControlRigControlActor::execClear },
			{ "Refresh", &AControlRigControlActor::execRefresh },
			{ "ResetControlActor", &AControlRigControlActor::execResetControlActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AControlRigControlActor_Clear_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlRigControlActor_Clear_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Actor" },
		{ "ModuleRelativePath", "Public/ControlRigControlActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlRigControlActor_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlRigControlActor, nullptr, "Clear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AControlRigControlActor_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigControlActor_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AControlRigControlActor_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AControlRigControlActor_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AControlRigControlActor_Refresh_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlRigControlActor_Refresh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Actor" },
		{ "ModuleRelativePath", "Public/ControlRigControlActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlRigControlActor_Refresh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlRigControlActor, nullptr, "Refresh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AControlRigControlActor_Refresh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigControlActor_Refresh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AControlRigControlActor_Refresh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AControlRigControlActor_Refresh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AControlRigControlActor_ResetControlActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlRigControlActor_ResetControlActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Actor" },
		{ "DisplayName", "Reset" },
		{ "ModuleRelativePath", "Public/ControlRigControlActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlRigControlActor_ResetControlActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlRigControlActor, nullptr, "ResetControlActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AControlRigControlActor_ResetControlActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AControlRigControlActor_ResetControlActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AControlRigControlActor_ResetControlActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AControlRigControlActor_ResetControlActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AControlRigControlActor);
	UClass* Z_Construct_UClass_AControlRigControlActor_NoRegister()
	{
		return AControlRigControlActor::StaticClass();
	}
	struct Z_Construct_UClass_AControlRigControlActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorToTrack_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActorToTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRigClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ControlRigClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRefreshOnTick_MetaData[];
#endif
		static void NewProp_bRefreshOnTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRefreshOnTick;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsSelectable_MetaData[];
#endif
		static void NewProp_bIsSelectable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSelectable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MaterialOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorParameter_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ColorParameter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCastShadows_MetaData[];
#endif
		static void NewProp_bCastShadows_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCastShadows;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorRootComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActorRootComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlRig_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ControlRig;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ControlNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ControlNames;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ShapeTransforms_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeTransforms_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ShapeTransforms;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Components_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Components_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Components;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ColorParameterName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AControlRigControlActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRig,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AControlRigControlActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AControlRigControlActor_Clear, "Clear" }, // 1849264728
		{ &Z_Construct_UFunction_AControlRigControlActor_Refresh, "Refresh" }, // 2788535209
		{ &Z_Construct_UFunction_AControlRigControlActor_ResetControlActor, "ResetControlActor" }, // 2662560564
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlRigControlActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Control Display Actor" },
		{ "IncludePath", "ControlRigControlActor.h" },
		{ "ModuleRelativePath", "Public/ControlRigControlActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ActorToTrack_MetaData[] = {
		{ "Category", "Control Actor" },
		{ "ModuleRelativePath", "Public/ControlRigControlActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ActorToTrack = { "ActorToTrack", nullptr, (EPropertyFlags)0x0014000200000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AControlRigControlActor, ActorToTrack), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ActorToTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ActorToTrack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ControlRigClass_MetaData[] = {
		{ "Category", "Control Actor" },
		{ "ModuleRelativePath", "Public/ControlRigControlActor.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ControlRigClass = { "ControlRigClass", nullptr, (EPropertyFlags)0x0014000200000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AControlRigControlActor, ControlRigClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ControlRigClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ControlRigClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_bRefreshOnTick_MetaData[] = {
		{ "Category", "Control Actor" },
		{ "ModuleRelativePath", "Public/ControlRigControlActor.h" },
	};
#endif
	void Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_bRefreshOnTick_SetBit(void* Obj)
	{
		((AControlRigControlActor*)Obj)->bRefreshOnTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_bRefreshOnTick = { "bRefreshOnTick", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AControlRigControlActor), &Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_bRefreshOnTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_bRefreshOnTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_bRefreshOnTick_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_bIsSelectable_MetaData[] = {
		{ "Category", "Control Actor" },
		{ "ModuleRelativePath", "Public/ControlRigControlActor.h" },
	};
#endif
	void Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_bIsSelectable_SetBit(void* Obj)
	{
		((AControlRigControlActor*)Obj)->bIsSelectable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_bIsSelectable = { "bIsSelectable", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AControlRigControlActor), &Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_bIsSelectable_SetBit, METADATA_PARAMS(Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_bIsSelectable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_bIsSelectable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_MaterialOverride_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/ControlRigControlActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_MaterialOverride = { "MaterialOverride", nullptr, (EPropertyFlags)0x0014000200000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AControlRigControlActor, MaterialOverride), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_MaterialOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_MaterialOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ColorParameter_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/ControlRigControlActor.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ColorParameter = { "ColorParameter", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AControlRigControlActor, ColorParameter), METADATA_PARAMS(Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ColorParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ColorParameter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_bCastShadows_MetaData[] = {
		{ "Category", "Materials" },
		{ "ModuleRelativePath", "Public/ControlRigControlActor.h" },
	};
#endif
	void Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_bCastShadows_SetBit(void* Obj)
	{
		((AControlRigControlActor*)Obj)->bCastShadows = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_bCastShadows = { "bCastShadows", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AControlRigControlActor), &Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_bCastShadows_SetBit, METADATA_PARAMS(Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_bCastShadows_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_bCastShadows_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ActorRootComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ControlRigControlActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ActorRootComponent = { "ActorRootComponent", nullptr, (EPropertyFlags)0x0044000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AControlRigControlActor, ActorRootComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ActorRootComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ActorRootComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ControlRig_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigControlActor.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ControlRig = { "ControlRig", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AControlRigControlActor, ControlRig), Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ControlRig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ControlRig_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ControlNames_Inner = { "ControlNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ControlNames_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigControlActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ControlNames = { "ControlNames", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AControlRigControlActor, ControlNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ControlNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ControlNames_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ShapeTransforms_Inner = { "ShapeTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ShapeTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigControlActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ShapeTransforms = { "ShapeTransforms", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AControlRigControlActor, ShapeTransforms), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ShapeTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ShapeTransforms_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_Components_Inner = { "Components", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_Components_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ControlRigControlActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_Components = { "Components", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AControlRigControlActor, Components), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_Components_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_Components_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_Materials_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigControlActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AControlRigControlActor, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_Materials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ColorParameterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/ControlRigControlActor.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ColorParameterName = { "ColorParameterName", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AControlRigControlActor, ColorParameterName), METADATA_PARAMS(Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ColorParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ColorParameterName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AControlRigControlActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ActorToTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ControlRigClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_bRefreshOnTick,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_bIsSelectable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_MaterialOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ColorParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_bCastShadows,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ActorRootComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ControlRig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ControlNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ControlNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ShapeTransforms_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ShapeTransforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_Components_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_Components,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_Materials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlRigControlActor_Statics::NewProp_ColorParameterName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AControlRigControlActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AControlRigControlActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AControlRigControlActor_Statics::ClassParams = {
		&AControlRigControlActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AControlRigControlActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AControlRigControlActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AControlRigControlActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AControlRigControlActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AControlRigControlActor()
	{
		if (!Z_Registration_Info_UClass_AControlRigControlActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AControlRigControlActor.OuterSingleton, Z_Construct_UClass_AControlRigControlActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AControlRigControlActor.OuterSingleton;
	}
	template<> CONTROLRIG_API UClass* StaticClass<AControlRigControlActor>()
	{
		return AControlRigControlActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AControlRigControlActor);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigControlActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigControlActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AControlRigControlActor, AControlRigControlActor::StaticClass, TEXT("AControlRigControlActor"), &Z_Registration_Info_UClass_AControlRigControlActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AControlRigControlActor), 151400597U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigControlActor_h_1014644808(TEXT("/Script/ControlRig"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigControlActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRig_Public_ControlRigControlActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
