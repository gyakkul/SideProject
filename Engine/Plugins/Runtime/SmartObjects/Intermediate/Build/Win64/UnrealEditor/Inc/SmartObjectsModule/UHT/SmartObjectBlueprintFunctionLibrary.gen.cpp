// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SmartObjectBlueprintFunctionLibrary.h"
#include "../../AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "SmartObjectRuntime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSmartObjectBlueprintFunctionLibrary() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UBTNode_NoRegister();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary();
	SMARTOBJECTSMODULE_API UClass* Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary_NoRegister();
	SMARTOBJECTSMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FSmartObjectClaimHandle();
	UPackage* Z_Construct_UPackage__Script_SmartObjectsModule();
// End Cross Module References
	DEFINE_FUNCTION(USmartObjectBlueprintFunctionLibrary::execGetBlackboardValueAsSOClaimHandle)
	{
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSmartObjectClaimHandle*)Z_Param__Result=USmartObjectBlueprintFunctionLibrary::GetBlackboardValueAsSOClaimHandle(Z_Param_NodeOwner,Z_Param_Out_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectBlueprintFunctionLibrary::execSetBlackboardValueAsSOClaimHandle)
	{
		P_GET_OBJECT(UBTNode,Z_Param_NodeOwner);
		P_GET_STRUCT_REF(FBlackboardKeySelector,Z_Param_Out_Key);
		P_GET_STRUCT_REF(FSmartObjectClaimHandle,Z_Param_Out_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		USmartObjectBlueprintFunctionLibrary::SetBlackboardValueAsSOClaimHandle(Z_Param_NodeOwner,Z_Param_Out_Key,Z_Param_Out_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectBlueprintFunctionLibrary::execSetMultipleSmartObjectsEnabled)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_SmartObjectActors);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USmartObjectBlueprintFunctionLibrary::SetMultipleSmartObjectsEnabled(Z_Param_Out_SmartObjectActors,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectBlueprintFunctionLibrary::execSetSmartObjectEnabled)
	{
		P_GET_OBJECT(AActor,Z_Param_SmartObjectActor);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USmartObjectBlueprintFunctionLibrary::SetSmartObjectEnabled(Z_Param_SmartObjectActor,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectBlueprintFunctionLibrary::execRemoveMultipleSmartObjects)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_SmartObjectActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USmartObjectBlueprintFunctionLibrary::RemoveMultipleSmartObjects(Z_Param_Out_SmartObjectActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectBlueprintFunctionLibrary::execRemoveSmartObject)
	{
		P_GET_OBJECT(AActor,Z_Param_SmartObjectActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USmartObjectBlueprintFunctionLibrary::RemoveSmartObject(Z_Param_SmartObjectActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectBlueprintFunctionLibrary::execAddMultipleSmartObjects)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_SmartObjectActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USmartObjectBlueprintFunctionLibrary::AddMultipleSmartObjects(Z_Param_Out_SmartObjectActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectBlueprintFunctionLibrary::execAddSmartObject)
	{
		P_GET_OBJECT(AActor,Z_Param_SmartObjectActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USmartObjectBlueprintFunctionLibrary::AddSmartObject(Z_Param_SmartObjectActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectBlueprintFunctionLibrary::execAddOrRemoveMultipleSmartObjects)
	{
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_SmartObjectActors);
		P_GET_UBOOL(Z_Param_bAdd);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USmartObjectBlueprintFunctionLibrary::AddOrRemoveMultipleSmartObjects(Z_Param_Out_SmartObjectActors,Z_Param_bAdd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectBlueprintFunctionLibrary::execAddOrRemoveSmartObject)
	{
		P_GET_OBJECT(AActor,Z_Param_SmartObject);
		P_GET_UBOOL(Z_Param_bEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USmartObjectBlueprintFunctionLibrary::AddOrRemoveSmartObject(Z_Param_SmartObject,Z_Param_bEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectBlueprintFunctionLibrary::execIsValidSmartObjectClaimHandle)
	{
		P_GET_STRUCT(FSmartObjectClaimHandle,Z_Param_Handle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USmartObjectBlueprintFunctionLibrary::IsValidSmartObjectClaimHandle(Z_Param_Handle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectBlueprintFunctionLibrary::execSetValueAsSOClaimHandle)
	{
		P_GET_OBJECT(UBlackboardComponent,Z_Param_BlackboardComponent);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
		P_GET_STRUCT(FSmartObjectClaimHandle,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		USmartObjectBlueprintFunctionLibrary::SetValueAsSOClaimHandle(Z_Param_BlackboardComponent,Z_Param_Out_KeyName,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USmartObjectBlueprintFunctionLibrary::execGetValueAsSOClaimHandle)
	{
		P_GET_OBJECT(UBlackboardComponent,Z_Param_BlackboardComponent);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_KeyName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FSmartObjectClaimHandle*)Z_Param__Result=USmartObjectBlueprintFunctionLibrary::GetValueAsSOClaimHandle(Z_Param_BlackboardComponent,Z_Param_Out_KeyName);
		P_NATIVE_END;
	}
	void USmartObjectBlueprintFunctionLibrary::StaticRegisterNativesUSmartObjectBlueprintFunctionLibrary()
	{
		UClass* Class = USmartObjectBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMultipleSmartObjects", &USmartObjectBlueprintFunctionLibrary::execAddMultipleSmartObjects },
			{ "AddOrRemoveMultipleSmartObjects", &USmartObjectBlueprintFunctionLibrary::execAddOrRemoveMultipleSmartObjects },
			{ "AddOrRemoveSmartObject", &USmartObjectBlueprintFunctionLibrary::execAddOrRemoveSmartObject },
			{ "AddSmartObject", &USmartObjectBlueprintFunctionLibrary::execAddSmartObject },
			{ "GetBlackboardValueAsSOClaimHandle", &USmartObjectBlueprintFunctionLibrary::execGetBlackboardValueAsSOClaimHandle },
			{ "GetValueAsSOClaimHandle", &USmartObjectBlueprintFunctionLibrary::execGetValueAsSOClaimHandle },
			{ "IsValidSmartObjectClaimHandle", &USmartObjectBlueprintFunctionLibrary::execIsValidSmartObjectClaimHandle },
			{ "RemoveMultipleSmartObjects", &USmartObjectBlueprintFunctionLibrary::execRemoveMultipleSmartObjects },
			{ "RemoveSmartObject", &USmartObjectBlueprintFunctionLibrary::execRemoveSmartObject },
			{ "SetBlackboardValueAsSOClaimHandle", &USmartObjectBlueprintFunctionLibrary::execSetBlackboardValueAsSOClaimHandle },
			{ "SetMultipleSmartObjectsEnabled", &USmartObjectBlueprintFunctionLibrary::execSetMultipleSmartObjectsEnabled },
			{ "SetSmartObjectEnabled", &USmartObjectBlueprintFunctionLibrary::execSetSmartObjectEnabled },
			{ "SetValueAsSOClaimHandle", &USmartObjectBlueprintFunctionLibrary::execSetValueAsSOClaimHandle },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects_Statics
	{
		struct SmartObjectBlueprintFunctionLibrary_eventAddMultipleSmartObjects_Parms
		{
			TArray<AActor*> SmartObjectActors;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SmartObjectActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmartObjectActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SmartObjectActors;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects_Statics::NewProp_SmartObjectActors_Inner = { "SmartObjectActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects_Statics::NewProp_SmartObjectActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects_Statics::NewProp_SmartObjectActors = { "SmartObjectActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectBlueprintFunctionLibrary_eventAddMultipleSmartObjects_Parms, SmartObjectActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects_Statics::NewProp_SmartObjectActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects_Statics::NewProp_SmartObjectActors_MetaData)) };
	void Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SmartObjectBlueprintFunctionLibrary_eventAddMultipleSmartObjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SmartObjectBlueprintFunctionLibrary_eventAddMultipleSmartObjects_Parms), &Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects_Statics::NewProp_SmartObjectActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects_Statics::NewProp_SmartObjectActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Adds to the simulation all smart objects for multiple actors.\n\x09 * @param SmartObjectActors The actors containing the smart objects to add to the simulation\n\x09 * @return True if the requested operation succeeded; false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Adds to the simulation all smart objects for multiple actors.\n@param SmartObjectActors The actors containing the smart objects to add to the simulation\n@return True if the requested operation succeeded; false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary, nullptr, "AddMultipleSmartObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects_Statics::SmartObjectBlueprintFunctionLibrary_eventAddMultipleSmartObjects_Parms), Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Statics
	{
		struct SmartObjectBlueprintFunctionLibrary_eventAddOrRemoveMultipleSmartObjects_Parms
		{
			TArray<AActor*> SmartObjectActors;
			bool bAdd;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SmartObjectActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmartObjectActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SmartObjectActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAdd_MetaData[];
#endif
		static void NewProp_bAdd_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAdd;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Statics::NewProp_SmartObjectActors_Inner = { "SmartObjectActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Statics::NewProp_SmartObjectActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Statics::NewProp_SmartObjectActors = { "SmartObjectActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectBlueprintFunctionLibrary_eventAddOrRemoveMultipleSmartObjects_Parms, SmartObjectActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Statics::NewProp_SmartObjectActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Statics::NewProp_SmartObjectActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Statics::NewProp_bAdd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Statics::NewProp_bAdd_SetBit(void* Obj)
	{
		((SmartObjectBlueprintFunctionLibrary_eventAddOrRemoveMultipleSmartObjects_Parms*)Obj)->bAdd = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Statics::NewProp_bAdd = { "bAdd", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SmartObjectBlueprintFunctionLibrary_eventAddOrRemoveMultipleSmartObjects_Parms), &Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Statics::NewProp_bAdd_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Statics::NewProp_bAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Statics::NewProp_bAdd_MetaData)) };
	void Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SmartObjectBlueprintFunctionLibrary_eventAddOrRemoveMultipleSmartObjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SmartObjectBlueprintFunctionLibrary_eventAddOrRemoveMultipleSmartObjects_Parms), &Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Statics::NewProp_SmartObjectActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Statics::NewProp_SmartObjectActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Statics::NewProp_bAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Adds to the simulation all smart objects for multiple actors or removes them according to 'bAdd'.\n\x09 * @param SmartObjectActors The actors containing the smart objects to add or remove from the simulation\n\x09 * @param bAdd Whether the smart objects should be added or removed from the simulation\n\x09 * @return True if all actors were valid and the requested operation succeeded; false otherwise\n\x09 * @note Removing a smart object from the simulation will interrupt all active interactions. If you simply need\n\x09 * to make the object unavailable for queries consider using one of the SetSmartObjectEnabled functions so active\n\x09 * interactions can be gracefully completed.\n\x09 * @see SetSmartObjectEnabled, SetMultipleSmartObjectsEnabled\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Adds to the simulation all smart objects for multiple actors or removes them according to 'bAdd'.\n@param SmartObjectActors The actors containing the smart objects to add or remove from the simulation\n@param bAdd Whether the smart objects should be added or removed from the simulation\n@return True if all actors were valid and the requested operation succeeded; false otherwise\n@note Removing a smart object from the simulation will interrupt all active interactions. If you simply need\nto make the object unavailable for queries consider using one of the SetSmartObjectEnabled functions so active\ninteractions can be gracefully completed.\n@see SetSmartObjectEnabled, SetMultipleSmartObjectsEnabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary, nullptr, "AddOrRemoveMultipleSmartObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Statics::SmartObjectBlueprintFunctionLibrary_eventAddOrRemoveMultipleSmartObjects_Parms), Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Statics
	{
		struct SmartObjectBlueprintFunctionLibrary_eventAddOrRemoveSmartObject_Parms
		{
			AActor* SmartObject;
			bool bEnabled;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmartObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SmartObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Statics::NewProp_SmartObject_MetaData[] = {
		{ "DisplayName", "SmartObjectActor" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Statics::NewProp_SmartObject = { "SmartObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectBlueprintFunctionLibrary_eventAddOrRemoveSmartObject_Parms, SmartObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Statics::NewProp_SmartObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Statics::NewProp_SmartObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Statics::NewProp_bEnabled_MetaData[] = {
		{ "DisplayName", "bAdd" },
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SmartObjectBlueprintFunctionLibrary_eventAddOrRemoveSmartObject_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SmartObjectBlueprintFunctionLibrary_eventAddOrRemoveSmartObject_Parms), &Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Statics::NewProp_bEnabled_MetaData)) };
	void Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SmartObjectBlueprintFunctionLibrary_eventAddOrRemoveSmartObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SmartObjectBlueprintFunctionLibrary_eventAddOrRemoveSmartObject_Parms), &Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Statics::NewProp_SmartObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Adds to the simulation all smart objects for an actor or removes them according to 'bAdd'.\n\x09 * @param SmartObjectActor The actor containing the smart objects to add or remove from the simulation\n\x09 * @param bAdd Whether the smart objects should be added or removed from the simulation\n\x09 * @return True if the requested operation succeeded; false otherwise\n\x09 * @note Removing a smart object from the simulation will interrupt all active interactions. If you simply need\n\x09 * to make the object unavailable for queries consider using one of the SetSmartObjectEnabled functions so active\n\x09 * interactions can be gracefully completed.\n\x09 * @see SetSmartObjectEnabled, SetMultipleSmartObjectsEnabled\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Adds to the simulation all smart objects for an actor or removes them according to 'bAdd'.\n@param SmartObjectActor The actor containing the smart objects to add or remove from the simulation\n@param bAdd Whether the smart objects should be added or removed from the simulation\n@return True if the requested operation succeeded; false otherwise\n@note Removing a smart object from the simulation will interrupt all active interactions. If you simply need\nto make the object unavailable for queries consider using one of the SetSmartObjectEnabled functions so active\ninteractions can be gracefully completed.\n@see SetSmartObjectEnabled, SetMultipleSmartObjectsEnabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary, nullptr, "AddOrRemoveSmartObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Statics::SmartObjectBlueprintFunctionLibrary_eventAddOrRemoveSmartObject_Parms), Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddSmartObject_Statics
	{
		struct SmartObjectBlueprintFunctionLibrary_eventAddSmartObject_Parms
		{
			AActor* SmartObjectActor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SmartObjectActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddSmartObject_Statics::NewProp_SmartObjectActor = { "SmartObjectActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectBlueprintFunctionLibrary_eventAddSmartObject_Parms, SmartObjectActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddSmartObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SmartObjectBlueprintFunctionLibrary_eventAddSmartObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddSmartObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SmartObjectBlueprintFunctionLibrary_eventAddSmartObject_Parms), &Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddSmartObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddSmartObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddSmartObject_Statics::NewProp_SmartObjectActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddSmartObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddSmartObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Adds to the simulation all smart objects for an actor.\n\x09 * @param SmartObjectActor The actor containing the smart objects to add to the simulation\n\x09 * @return True if the requested operation succeeded; false otherwise\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Adds to the simulation all smart objects for an actor.\n@param SmartObjectActor The actor containing the smart objects to add to the simulation\n@return True if the requested operation succeeded; false otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddSmartObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary, nullptr, "AddSmartObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddSmartObject_Statics::SmartObjectBlueprintFunctionLibrary_eventAddSmartObject_Parms), Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddSmartObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddSmartObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddSmartObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddSmartObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddSmartObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddSmartObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle_Statics
	{
		struct SmartObjectBlueprintFunctionLibrary_eventGetBlackboardValueAsSOClaimHandle_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			FSmartObjectClaimHandle ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectBlueprintFunctionLibrary_eventGetBlackboardValueAsSOClaimHandle_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectBlueprintFunctionLibrary_eventGetBlackboardValueAsSOClaimHandle_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle_Statics::NewProp_Key_MetaData)) }; // 3376895314
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectBlueprintFunctionLibrary_eventGetBlackboardValueAsSOClaimHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSmartObjectClaimHandle, METADATA_PARAMS(nullptr, 0) }; // 931449528
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle_Statics::NewProp_NodeOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "DisplayName", "Get Blackboard Value As Smart Object Claim Handle" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Public/SmartObjectBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary, nullptr, "GetBlackboardValueAsSOClaimHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle_Statics::SmartObjectBlueprintFunctionLibrary_eventGetBlackboardValueAsSOClaimHandle_Parms), Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle_Statics
	{
		struct SmartObjectBlueprintFunctionLibrary_eventGetValueAsSOClaimHandle_Parms
		{
			UBlackboardComponent* BlackboardComponent;
			FName KeyName;
			FSmartObjectClaimHandle ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle_Statics::NewProp_BlackboardComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle_Statics::NewProp_BlackboardComponent = { "BlackboardComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectBlueprintFunctionLibrary_eventGetValueAsSOClaimHandle_Parms, BlackboardComponent), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle_Statics::NewProp_BlackboardComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle_Statics::NewProp_BlackboardComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectBlueprintFunctionLibrary_eventGetValueAsSOClaimHandle_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle_Statics::NewProp_KeyName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectBlueprintFunctionLibrary_eventGetValueAsSOClaimHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSmartObjectClaimHandle, METADATA_PARAMS(nullptr, 0) }; // 931449528
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle_Statics::NewProp_BlackboardComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle_Statics::NewProp_KeyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary, nullptr, "GetValueAsSOClaimHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle_Statics::SmartObjectBlueprintFunctionLibrary_eventGetValueAsSOClaimHandle_Parms), Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle_Statics
	{
		struct SmartObjectBlueprintFunctionLibrary_eventIsValidSmartObjectClaimHandle_Parms
		{
			FSmartObjectClaimHandle Handle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle_Statics::NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectBlueprintFunctionLibrary_eventIsValidSmartObjectClaimHandle_Parms, Handle), Z_Construct_UScriptStruct_FSmartObjectClaimHandle, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle_Statics::NewProp_Handle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle_Statics::NewProp_Handle_MetaData)) }; // 931449528
	void Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SmartObjectBlueprintFunctionLibrary_eventIsValidSmartObjectClaimHandle_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SmartObjectBlueprintFunctionLibrary_eventIsValidSmartObjectClaimHandle_Parms), &Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle_Statics::NewProp_Handle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary, nullptr, "IsValidSmartObjectClaimHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle_Statics::SmartObjectBlueprintFunctionLibrary_eventIsValidSmartObjectClaimHandle_Parms), Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects_Statics
	{
		struct SmartObjectBlueprintFunctionLibrary_eventRemoveMultipleSmartObjects_Parms
		{
			TArray<AActor*> SmartObjectActors;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SmartObjectActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmartObjectActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SmartObjectActors;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects_Statics::NewProp_SmartObjectActors_Inner = { "SmartObjectActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects_Statics::NewProp_SmartObjectActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects_Statics::NewProp_SmartObjectActors = { "SmartObjectActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectBlueprintFunctionLibrary_eventRemoveMultipleSmartObjects_Parms, SmartObjectActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects_Statics::NewProp_SmartObjectActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects_Statics::NewProp_SmartObjectActors_MetaData)) };
	void Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SmartObjectBlueprintFunctionLibrary_eventRemoveMultipleSmartObjects_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SmartObjectBlueprintFunctionLibrary_eventRemoveMultipleSmartObjects_Parms), &Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects_Statics::NewProp_SmartObjectActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects_Statics::NewProp_SmartObjectActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Removes from the simulation all smart objects for multiple actors.\n\x09 * @param SmartObjectActors The actors containing the smart objects to remove from the simulation\n\x09 * @return True if the requested operation succeeded; false otherwise\n\x09 * @note Removing a smart object from the simulation will interrupt all active interactions. If you simply need\n\x09 * to make the object unavailable for queries consider using one of the SetSmartObjectEnabled functions so active\n\x09 * interactions can be gracefully completed.\n\x09 * @see SetSmartObjectEnabled, SetMultipleSmartObjectsEnabled\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Removes from the simulation all smart objects for multiple actors.\n@param SmartObjectActors The actors containing the smart objects to remove from the simulation\n@return True if the requested operation succeeded; false otherwise\n@note Removing a smart object from the simulation will interrupt all active interactions. If you simply need\nto make the object unavailable for queries consider using one of the SetSmartObjectEnabled functions so active\ninteractions can be gracefully completed.\n@see SetSmartObjectEnabled, SetMultipleSmartObjectsEnabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary, nullptr, "RemoveMultipleSmartObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects_Statics::SmartObjectBlueprintFunctionLibrary_eventRemoveMultipleSmartObjects_Parms), Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveSmartObject_Statics
	{
		struct SmartObjectBlueprintFunctionLibrary_eventRemoveSmartObject_Parms
		{
			AActor* SmartObjectActor;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SmartObjectActor;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveSmartObject_Statics::NewProp_SmartObjectActor = { "SmartObjectActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectBlueprintFunctionLibrary_eventRemoveSmartObject_Parms, SmartObjectActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveSmartObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SmartObjectBlueprintFunctionLibrary_eventRemoveSmartObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveSmartObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SmartObjectBlueprintFunctionLibrary_eventRemoveSmartObject_Parms), &Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveSmartObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveSmartObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveSmartObject_Statics::NewProp_SmartObjectActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveSmartObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveSmartObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Removes from the simulation all smart objects for an actor.\n\x09 * @param SmartObjectActor The actor containing the smart objects to add or remove from the simulation\n\x09 * @return True if the requested operation succeeded; false otherwise\n\x09 * @note Removing a smart object from the simulation will interrupt all active interactions. If you simply need\n\x09 * to make the object unavailable for queries consider using one of the SetSmartObjectEnabled functions so active\n\x09 * interactions can be gracefully completed.\n\x09 * @see SetSmartObjectEnabled, SetMultipleSmartObjectsEnabled\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Removes from the simulation all smart objects for an actor.\n@param SmartObjectActor The actor containing the smart objects to add or remove from the simulation\n@return True if the requested operation succeeded; false otherwise\n@note Removing a smart object from the simulation will interrupt all active interactions. If you simply need\nto make the object unavailable for queries consider using one of the SetSmartObjectEnabled functions so active\ninteractions can be gracefully completed.\n@see SetSmartObjectEnabled, SetMultipleSmartObjectsEnabled" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveSmartObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary, nullptr, "RemoveSmartObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveSmartObject_Statics::SmartObjectBlueprintFunctionLibrary_eventRemoveSmartObject_Parms), Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveSmartObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveSmartObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveSmartObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveSmartObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveSmartObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveSmartObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle_Statics
	{
		struct SmartObjectBlueprintFunctionLibrary_eventSetBlackboardValueAsSOClaimHandle_Parms
		{
			UBTNode* NodeOwner;
			FBlackboardKeySelector Key;
			FSmartObjectClaimHandle Value;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle_Statics::NewProp_NodeOwner = { "NodeOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectBlueprintFunctionLibrary_eventSetBlackboardValueAsSOClaimHandle_Parms, NodeOwner), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle_Statics::NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectBlueprintFunctionLibrary_eventSetBlackboardValueAsSOClaimHandle_Parms, Key), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle_Statics::NewProp_Key_MetaData)) }; // 3376895314
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectBlueprintFunctionLibrary_eventSetBlackboardValueAsSOClaimHandle_Parms, Value), Z_Construct_UScriptStruct_FSmartObjectClaimHandle, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle_Statics::NewProp_Value_MetaData)) }; // 931449528
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle_Statics::NewProp_NodeOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|BehaviorTree" },
		{ "DefaultToSelf", "NodeOwner" },
		{ "DisplayName", "Set Blackboard Value As Smart Object Claim Handle" },
		{ "HidePin", "NodeOwner" },
		{ "ModuleRelativePath", "Public/SmartObjectBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary, nullptr, "SetBlackboardValueAsSOClaimHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle_Statics::SmartObjectBlueprintFunctionLibrary_eventSetBlackboardValueAsSOClaimHandle_Parms), Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Statics
	{
		struct SmartObjectBlueprintFunctionLibrary_eventSetMultipleSmartObjectsEnabled_Parms
		{
			TArray<AActor*> SmartObjectActors;
			bool bEnabled;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SmartObjectActors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SmartObjectActors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SmartObjectActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Statics::NewProp_SmartObjectActors_Inner = { "SmartObjectActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Statics::NewProp_SmartObjectActors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Statics::NewProp_SmartObjectActors = { "SmartObjectActors", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectBlueprintFunctionLibrary_eventSetMultipleSmartObjectsEnabled_Parms, SmartObjectActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Statics::NewProp_SmartObjectActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Statics::NewProp_SmartObjectActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SmartObjectBlueprintFunctionLibrary_eventSetMultipleSmartObjectsEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SmartObjectBlueprintFunctionLibrary_eventSetMultipleSmartObjectsEnabled_Parms), &Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Statics::NewProp_bEnabled_MetaData)) };
	void Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SmartObjectBlueprintFunctionLibrary_eventSetMultipleSmartObjectsEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SmartObjectBlueprintFunctionLibrary_eventSetMultipleSmartObjectsEnabled_Parms), &Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Statics::NewProp_SmartObjectActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Statics::NewProp_SmartObjectActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Marks all smart objects for a list of actors as enabled or not according to 'bEnabled'. A smart object marked as Enabled is available for queries.\n\x09 * @param SmartObjectActors The actors containing the smart objects to enable/disable\n\x09 * @param bEnabled Whether the smart objects should be in the simulation (added) or not (removed) \n\x09 * @return True if all actors were valid and the requested operation succeeded; false otherwise\n\x09 * @note Disabling a smart object will not interrupt active interactions, it will simply\n\x09 * mark the object unavailable for new queries and broadcast an event that can be handled\n\x09 * by the interacting agent to complete earlier. If the object should not be consider usable anymore\n\x09 * and the interactions aborted then consider using one of the Add/RemoveSmartObject functions.\n\x09 * @see AddOrRemoveSmartObject, AddOrRemoveMultipleSmartObjects, AddSmartObject, AddMultipleSmartObjects, RemoveSmartObject, RemoveMultipleSmartObjects\n\x09 */" },
		{ "DisplayName", "SetMultipleSmartObjectsEnabled" },
		{ "ModuleRelativePath", "Public/SmartObjectBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Marks all smart objects for a list of actors as enabled or not according to 'bEnabled'. A smart object marked as Enabled is available for queries.\n@param SmartObjectActors The actors containing the smart objects to enable/disable\n@param bEnabled Whether the smart objects should be in the simulation (added) or not (removed)\n@return True if all actors were valid and the requested operation succeeded; false otherwise\n@note Disabling a smart object will not interrupt active interactions, it will simply\nmark the object unavailable for new queries and broadcast an event that can be handled\nby the interacting agent to complete earlier. If the object should not be consider usable anymore\nand the interactions aborted then consider using one of the Add/RemoveSmartObject functions.\n@see AddOrRemoveSmartObject, AddOrRemoveMultipleSmartObjects, AddSmartObject, AddMultipleSmartObjects, RemoveSmartObject, RemoveMultipleSmartObjects" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary, nullptr, "SetMultipleSmartObjectsEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Statics::SmartObjectBlueprintFunctionLibrary_eventSetMultipleSmartObjectsEnabled_Parms), Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled_Statics
	{
		struct SmartObjectBlueprintFunctionLibrary_eventSetSmartObjectEnabled_Parms
		{
			AActor* SmartObjectActor;
			bool bEnabled;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SmartObjectActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled_Statics::NewProp_SmartObjectActor = { "SmartObjectActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectBlueprintFunctionLibrary_eventSetSmartObjectEnabled_Parms, SmartObjectActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled_Statics::NewProp_bEnabled_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((SmartObjectBlueprintFunctionLibrary_eventSetSmartObjectEnabled_Parms*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SmartObjectBlueprintFunctionLibrary_eventSetSmartObjectEnabled_Parms), &Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled_Statics::NewProp_bEnabled_MetaData)) };
	void Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SmartObjectBlueprintFunctionLibrary_eventSetSmartObjectEnabled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SmartObjectBlueprintFunctionLibrary_eventSetSmartObjectEnabled_Parms), &Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled_Statics::NewProp_SmartObjectActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "Comment", "/**\n\x09 * Marks all smart objects for an actor as enabled or not according to 'bEnabled'. A smart object marked as Enabled is available for queries.\n\x09 * @param SmartObjectActor The actor containing the smart objects to enable/disable\n\x09 * @param bEnabled Whether the smart objects should be enabled or not\n\x09 * @return True if the requested operation succeeded; false otherwise\n\x09 * @note Disabling a smart object will not interrupt active interactions, it will simply\n\x09 * mark the object unavailable for new queries and broadcast an event that can be handled\n\x09 * by the interacting agent to complete earlier. If the object should not be consider usable anymore\n\x09 * and the interactions aborted then consider using one of the Add/RemoveSmartObject functions.\n\x09 * @see AddOrRemoveSmartObject, AddOrRemoveMultipleSmartObjects, AddSmartObject, AddMultipleSmartObjects, RemoveSmartObject, RemoveMultipleSmartObjects\n\x09 */" },
		{ "ModuleRelativePath", "Public/SmartObjectBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Marks all smart objects for an actor as enabled or not according to 'bEnabled'. A smart object marked as Enabled is available for queries.\n@param SmartObjectActor The actor containing the smart objects to enable/disable\n@param bEnabled Whether the smart objects should be enabled or not\n@return True if the requested operation succeeded; false otherwise\n@note Disabling a smart object will not interrupt active interactions, it will simply\nmark the object unavailable for new queries and broadcast an event that can be handled\nby the interacting agent to complete earlier. If the object should not be consider usable anymore\nand the interactions aborted then consider using one of the Add/RemoveSmartObject functions.\n@see AddOrRemoveSmartObject, AddOrRemoveMultipleSmartObjects, AddSmartObject, AddMultipleSmartObjects, RemoveSmartObject, RemoveMultipleSmartObjects" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary, nullptr, "SetSmartObjectEnabled", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled_Statics::SmartObjectBlueprintFunctionLibrary_eventSetSmartObjectEnabled_Parms), Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle_Statics
	{
		struct SmartObjectBlueprintFunctionLibrary_eventSetValueAsSOClaimHandle_Parms
		{
			UBlackboardComponent* BlackboardComponent;
			FName KeyName;
			FSmartObjectClaimHandle Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle_Statics::NewProp_BlackboardComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle_Statics::NewProp_BlackboardComponent = { "BlackboardComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectBlueprintFunctionLibrary_eventSetValueAsSOClaimHandle_Parms, BlackboardComponent), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle_Statics::NewProp_BlackboardComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle_Statics::NewProp_BlackboardComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle_Statics::NewProp_KeyName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectBlueprintFunctionLibrary_eventSetValueAsSOClaimHandle_Parms, KeyName), METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle_Statics::NewProp_KeyName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SmartObjectBlueprintFunctionLibrary_eventSetValueAsSOClaimHandle_Parms, Value), Z_Construct_UScriptStruct_FSmartObjectClaimHandle, METADATA_PARAMS(nullptr, 0) }; // 931449528
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle_Statics::NewProp_BlackboardComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle_Statics::NewProp_KeyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "SmartObject" },
		{ "ModuleRelativePath", "Public/SmartObjectBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary, nullptr, "SetValueAsSOClaimHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle_Statics::SmartObjectBlueprintFunctionLibrary_eventSetValueAsSOClaimHandle_Parms), Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USmartObjectBlueprintFunctionLibrary);
	UClass* Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary_NoRegister()
	{
		return USmartObjectBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SmartObjectsModule,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects, "AddMultipleSmartObjects" }, // 3579793271
		{ &Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects, "AddOrRemoveMultipleSmartObjects" }, // 3334802390
		{ &Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject, "AddOrRemoveSmartObject" }, // 2016824486
		{ &Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_AddSmartObject, "AddSmartObject" }, // 198227577
		{ &Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle, "GetBlackboardValueAsSOClaimHandle" }, // 1192452291
		{ &Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle, "GetValueAsSOClaimHandle" }, // 2590631142
		{ &Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle, "IsValidSmartObjectClaimHandle" }, // 105359764
		{ &Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects, "RemoveMultipleSmartObjects" }, // 170343802
		{ &Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_RemoveSmartObject, "RemoveSmartObject" }, // 3650801002
		{ &Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle, "SetBlackboardValueAsSOClaimHandle" }, // 2129096724
		{ &Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled, "SetMultipleSmartObjectsEnabled" }, // 4219120536
		{ &Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled, "SetSmartObjectEnabled" }, // 3158844140
		{ &Z_Construct_UFunction_USmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle, "SetValueAsSOClaimHandle" }, // 3209026673
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SmartObjectBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/SmartObjectBlueprintFunctionLibrary.h" },
		{ "ScriptName", "SmartObjectLibrary" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USmartObjectBlueprintFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary_Statics::ClassParams = {
		&USmartObjectBlueprintFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_USmartObjectBlueprintFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USmartObjectBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USmartObjectBlueprintFunctionLibrary.OuterSingleton;
	}
	template<> SMARTOBJECTSMODULE_API UClass* StaticClass<USmartObjectBlueprintFunctionLibrary>()
	{
		return USmartObjectBlueprintFunctionLibrary::StaticClass();
	}
	USmartObjectBlueprintFunctionLibrary::USmartObjectBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USmartObjectBlueprintFunctionLibrary);
	USmartObjectBlueprintFunctionLibrary::~USmartObjectBlueprintFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USmartObjectBlueprintFunctionLibrary, USmartObjectBlueprintFunctionLibrary::StaticClass, TEXT("USmartObjectBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_USmartObjectBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USmartObjectBlueprintFunctionLibrary), 2029442788U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_387875478(TEXT("/Script/SmartObjectsModule"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SmartObjects_Source_SmartObjectsModule_Public_SmartObjectBlueprintFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
