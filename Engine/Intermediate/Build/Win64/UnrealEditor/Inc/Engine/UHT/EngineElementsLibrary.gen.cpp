// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Elements/Framework/EngineElementsLibrary.h"
#include "Elements/Framework/TypedElementHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEngineElementsLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UEngineElementsLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UEngineElementsLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FScriptTypedElementHandle();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
#if WITH_EDITOR
	DEFINE_FUNCTION(UEngineElementsLibrary::execK2_AcquireEditorSMInstanceElementHandle)
	{
		P_GET_OBJECT(UInstancedStaticMeshComponent,Z_Param_ISMComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
		P_GET_UBOOL(Z_Param_bAllowCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScriptTypedElementHandle*)Z_Param__Result=UEngineElementsLibrary::K2_AcquireEditorSMInstanceElementHandle(Z_Param_ISMComponent,Z_Param_InstanceIndex,Z_Param_bAllowCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEngineElementsLibrary::execK2_AcquireEditorComponentElementHandle)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_Component);
		P_GET_UBOOL(Z_Param_bAllowCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScriptTypedElementHandle*)Z_Param__Result=UEngineElementsLibrary::K2_AcquireEditorComponentElementHandle(Z_Param_Component,Z_Param_bAllowCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEngineElementsLibrary::execK2_AcquireEditorActorElementHandle)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_UBOOL(Z_Param_bAllowCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScriptTypedElementHandle*)Z_Param__Result=UEngineElementsLibrary::K2_AcquireEditorActorElementHandle(Z_Param_Actor,Z_Param_bAllowCreate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UEngineElementsLibrary::execK2_AcquireEditorObjectElementHandle)
	{
		P_GET_OBJECT(UObject,Z_Param_Object);
		P_GET_UBOOL(Z_Param_bAllowCreate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FScriptTypedElementHandle*)Z_Param__Result=UEngineElementsLibrary::K2_AcquireEditorObjectElementHandle(Z_Param_Object,Z_Param_bAllowCreate);
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void UEngineElementsLibrary::StaticRegisterNativesUEngineElementsLibrary()
	{
#if WITH_EDITOR
		UClass* Class = UEngineElementsLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "K2_AcquireEditorActorElementHandle", &UEngineElementsLibrary::execK2_AcquireEditorActorElementHandle },
			{ "K2_AcquireEditorComponentElementHandle", &UEngineElementsLibrary::execK2_AcquireEditorComponentElementHandle },
			{ "K2_AcquireEditorObjectElementHandle", &UEngineElementsLibrary::execK2_AcquireEditorObjectElementHandle },
			{ "K2_AcquireEditorSMInstanceElementHandle", &UEngineElementsLibrary::execK2_AcquireEditorSMInstanceElementHandle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics
	{
		struct EngineElementsLibrary_eventK2_AcquireEditorActorElementHandle_Parms
		{
			const AActor* Actor;
			bool bAllowCreate;
			FScriptTypedElementHandle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCreate_MetaData[];
#endif
		static void NewProp_bAllowCreate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCreate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EngineElementsLibrary_eventK2_AcquireEditorActorElementHandle_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::NewProp_Actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::NewProp_Actor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::NewProp_bAllowCreate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::NewProp_bAllowCreate_SetBit(void* Obj)
	{
		((EngineElementsLibrary_eventK2_AcquireEditorActorElementHandle_Parms*)Obj)->bAllowCreate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::NewProp_bAllowCreate = { "bAllowCreate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EngineElementsLibrary_eventK2_AcquireEditorActorElementHandle_Parms), &Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::NewProp_bAllowCreate_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::NewProp_bAllowCreate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::NewProp_bAllowCreate_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EngineElementsLibrary_eventK2_AcquireEditorActorElementHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::NewProp_bAllowCreate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Actor" },
		{ "CPP_Default_bAllowCreate", "true" },
		{ "DisplayName", "Acquire Editor Actor Element Handle" },
		{ "ModuleRelativePath", "Public/Elements/Framework/EngineElementsLibrary.h" },
		{ "ScriptMethod", "AcquireEditorElementHandle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEngineElementsLibrary, nullptr, "K2_AcquireEditorActorElementHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::EngineElementsLibrary_eventK2_AcquireEditorActorElementHandle_Parms), Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics
	{
		struct EngineElementsLibrary_eventK2_AcquireEditorComponentElementHandle_Parms
		{
			const UActorComponent* Component;
			bool bAllowCreate;
			FScriptTypedElementHandle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCreate_MetaData[];
#endif
		static void NewProp_bAllowCreate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCreate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EngineElementsLibrary_eventK2_AcquireEditorComponentElementHandle_Parms, Component), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::NewProp_bAllowCreate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::NewProp_bAllowCreate_SetBit(void* Obj)
	{
		((EngineElementsLibrary_eventK2_AcquireEditorComponentElementHandle_Parms*)Obj)->bAllowCreate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::NewProp_bAllowCreate = { "bAllowCreate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EngineElementsLibrary_eventK2_AcquireEditorComponentElementHandle_Parms), &Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::NewProp_bAllowCreate_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::NewProp_bAllowCreate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::NewProp_bAllowCreate_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EngineElementsLibrary_eventK2_AcquireEditorComponentElementHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::NewProp_bAllowCreate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Component" },
		{ "CPP_Default_bAllowCreate", "true" },
		{ "DisplayName", "Acquire Editor Component Element Handle" },
		{ "ModuleRelativePath", "Public/Elements/Framework/EngineElementsLibrary.h" },
		{ "ScriptMethod", "AcquireEditorElementHandle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEngineElementsLibrary, nullptr, "K2_AcquireEditorComponentElementHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::EngineElementsLibrary_eventK2_AcquireEditorComponentElementHandle_Parms), Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics
	{
		struct EngineElementsLibrary_eventK2_AcquireEditorObjectElementHandle_Parms
		{
			const UObject* Object;
			bool bAllowCreate;
			FScriptTypedElementHandle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Object_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCreate_MetaData[];
#endif
		static void NewProp_bAllowCreate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCreate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::NewProp_Object_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EngineElementsLibrary_eventK2_AcquireEditorObjectElementHandle_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::NewProp_Object_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::NewProp_Object_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::NewProp_bAllowCreate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::NewProp_bAllowCreate_SetBit(void* Obj)
	{
		((EngineElementsLibrary_eventK2_AcquireEditorObjectElementHandle_Parms*)Obj)->bAllowCreate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::NewProp_bAllowCreate = { "bAllowCreate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EngineElementsLibrary_eventK2_AcquireEditorObjectElementHandle_Parms), &Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::NewProp_bAllowCreate_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::NewProp_bAllowCreate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::NewProp_bAllowCreate_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EngineElementsLibrary_eventK2_AcquireEditorObjectElementHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::NewProp_Object,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::NewProp_bAllowCreate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|Object" },
		{ "CPP_Default_bAllowCreate", "true" },
		{ "DisplayName", "Acquire Editor Object Element Handle" },
		{ "ModuleRelativePath", "Public/Elements/Framework/EngineElementsLibrary.h" },
		{ "ScriptMethod", "AcquireEditorElementHandle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEngineElementsLibrary, nullptr, "K2_AcquireEditorObjectElementHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::EngineElementsLibrary_eventK2_AcquireEditorObjectElementHandle_Parms), Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics
	{
		struct EngineElementsLibrary_eventK2_AcquireEditorSMInstanceElementHandle_Parms
		{
			const UInstancedStaticMeshComponent* ISMComponent;
			int32 InstanceIndex;
			bool bAllowCreate;
			FScriptTypedElementHandle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ISMComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ISMComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCreate_MetaData[];
#endif
		static void NewProp_bAllowCreate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCreate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_ISMComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_ISMComponent = { "ISMComponent", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EngineElementsLibrary_eventK2_AcquireEditorSMInstanceElementHandle_Parms, ISMComponent), Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_ISMComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_ISMComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_InstanceIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EngineElementsLibrary_eventK2_AcquireEditorSMInstanceElementHandle_Parms, InstanceIndex), METADATA_PARAMS(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_InstanceIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_InstanceIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_bAllowCreate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_bAllowCreate_SetBit(void* Obj)
	{
		((EngineElementsLibrary_eventK2_AcquireEditorSMInstanceElementHandle_Parms*)Obj)->bAllowCreate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_bAllowCreate = { "bAllowCreate", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(EngineElementsLibrary_eventK2_AcquireEditorSMInstanceElementHandle_Parms), &Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_bAllowCreate_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_bAllowCreate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_bAllowCreate_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(EngineElementsLibrary_eventK2_AcquireEditorSMInstanceElementHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FScriptTypedElementHandle, METADATA_PARAMS(nullptr, 0) }; // 915069018
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_ISMComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_InstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_bAllowCreate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "TypedElementFramework|StaticMeshInstance" },
		{ "CPP_Default_bAllowCreate", "true" },
		{ "DisplayName", "Acquire Editor SMInstance Element Handle" },
		{ "ModuleRelativePath", "Public/Elements/Framework/EngineElementsLibrary.h" },
		{ "ScriptMethod", "AcquireEditorElementHandle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEngineElementsLibrary, nullptr, "K2_AcquireEditorSMInstanceElementHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::EngineElementsLibrary_eventK2_AcquireEditorSMInstanceElementHandle_Parms), Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEngineElementsLibrary);
	UClass* Z_Construct_UClass_UEngineElementsLibrary_NoRegister()
	{
		return UEngineElementsLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UEngineElementsLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEngineElementsLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_UEngineElementsLibrary_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorActorElementHandle, "K2_AcquireEditorActorElementHandle" }, // 3903758561
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorComponentElementHandle, "K2_AcquireEditorComponentElementHandle" }, // 962691912
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorObjectElementHandle, "K2_AcquireEditorObjectElementHandle" }, // 1613975313
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UEngineElementsLibrary_K2_AcquireEditorSMInstanceElementHandle, "K2_AcquireEditorSMInstanceElementHandle" }, // 1669065164
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEngineElementsLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Framework/EngineElementsLibrary.h" },
		{ "ModuleRelativePath", "Public/Elements/Framework/EngineElementsLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEngineElementsLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEngineElementsLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEngineElementsLibrary_Statics::ClassParams = {
		&UEngineElementsLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEngineElementsLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEngineElementsLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEngineElementsLibrary()
	{
		if (!Z_Registration_Info_UClass_UEngineElementsLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEngineElementsLibrary.OuterSingleton, Z_Construct_UClass_UEngineElementsLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEngineElementsLibrary.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UEngineElementsLibrary>()
	{
		return UEngineElementsLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEngineElementsLibrary);
	UEngineElementsLibrary::~UEngineElementsLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_EngineElementsLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_EngineElementsLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEngineElementsLibrary, UEngineElementsLibrary::StaticClass, TEXT("UEngineElementsLibrary"), &Z_Registration_Info_UClass_UEngineElementsLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEngineElementsLibrary), 3615374594U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_EngineElementsLibrary_h_4267125449(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_EngineElementsLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_Framework_EngineElementsLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
