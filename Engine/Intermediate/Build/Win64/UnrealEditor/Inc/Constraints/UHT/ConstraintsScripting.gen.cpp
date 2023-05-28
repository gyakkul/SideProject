// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ConstraintsScripting.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeConstraintsScripting() {}
// Cross Module References
	ANIMATIONCORE_API UEnum* Z_Construct_UEnum_AnimationCore_ETransformConstraintType();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UConstraintsManager_NoRegister();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UConstraintsScriptingLibrary();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UConstraintsScriptingLibrary_NoRegister();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableConstraint_NoRegister();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UTickableTransformConstraint_NoRegister();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UTransformableComponentHandle_NoRegister();
	CONSTRAINTS_API UClass* Z_Construct_UClass_UTransformableHandle_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Constraints();
// End Cross Module References
	DEFINE_FUNCTION(UConstraintsScriptingLibrary::execRemoveConstraint)
	{
		P_GET_OBJECT(UWorld,Z_Param_InWorld);
		P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConstraintsScriptingLibrary::RemoveConstraint(Z_Param_InWorld,Z_Param_InIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintsScriptingLibrary::execRemoveThisConstraint)
	{
		P_GET_OBJECT(UWorld,Z_Param_InWorld);
		P_GET_OBJECT(UTickableConstraint,Z_Param_InTickableConstraint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConstraintsScriptingLibrary::RemoveThisConstraint(Z_Param_InWorld,Z_Param_InTickableConstraint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintsScriptingLibrary::execGetConstraintsArray)
	{
		P_GET_OBJECT(UWorld,Z_Param_InWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UTickableConstraint*>*)Z_Param__Result=UConstraintsScriptingLibrary::GetConstraintsArray(Z_Param_InWorld);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintsScriptingLibrary::execAddConstraint)
	{
		P_GET_OBJECT(UWorld,Z_Param_InWorld);
		P_GET_OBJECT(UTransformableHandle,Z_Param_InParentHandle);
		P_GET_OBJECT(UTransformableHandle,Z_Param_InChildHandle);
		P_GET_OBJECT(UTickableTransformConstraint,Z_Param_InConstraint);
		P_GET_UBOOL(Z_Param_bMaintainOffset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UConstraintsScriptingLibrary::AddConstraint(Z_Param_InWorld,Z_Param_InParentHandle,Z_Param_InChildHandle,Z_Param_InConstraint,Z_Param_bMaintainOffset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintsScriptingLibrary::execCreateFromType)
	{
		P_GET_OBJECT(UWorld,Z_Param_InWorld);
		P_GET_ENUM(ETransformConstraintType,Z_Param_InType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTickableTransformConstraint**)Z_Param__Result=UConstraintsScriptingLibrary::CreateFromType(Z_Param_InWorld,ETransformConstraintType(Z_Param_InType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintsScriptingLibrary::execCreateTransformableHandle)
	{
		P_GET_OBJECT(UWorld,Z_Param_InWorld);
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InAttachmentName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTransformableHandle**)Z_Param__Result=UConstraintsScriptingLibrary::CreateTransformableHandle(Z_Param_InWorld,Z_Param_InObject,Z_Param_Out_InAttachmentName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintsScriptingLibrary::execCreateTransformableComponentHandle)
	{
		P_GET_OBJECT(UWorld,Z_Param_InWorld);
		P_GET_OBJECT(USceneComponent,Z_Param_InSceneComponent);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_InSocketName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTransformableComponentHandle**)Z_Param__Result=UConstraintsScriptingLibrary::CreateTransformableComponentHandle(Z_Param_InWorld,Z_Param_InSceneComponent,Z_Param_Out_InSocketName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UConstraintsScriptingLibrary::execGetManager)
	{
		P_GET_OBJECT(UWorld,Z_Param_InWorld);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UConstraintsManager**)Z_Param__Result=UConstraintsScriptingLibrary::GetManager(Z_Param_InWorld);
		P_NATIVE_END;
	}
	void UConstraintsScriptingLibrary::StaticRegisterNativesUConstraintsScriptingLibrary()
	{
		UClass* Class = UConstraintsScriptingLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddConstraint", &UConstraintsScriptingLibrary::execAddConstraint },
			{ "CreateFromType", &UConstraintsScriptingLibrary::execCreateFromType },
			{ "CreateTransformableComponentHandle", &UConstraintsScriptingLibrary::execCreateTransformableComponentHandle },
			{ "CreateTransformableHandle", &UConstraintsScriptingLibrary::execCreateTransformableHandle },
			{ "GetConstraintsArray", &UConstraintsScriptingLibrary::execGetConstraintsArray },
			{ "GetManager", &UConstraintsScriptingLibrary::execGetManager },
			{ "RemoveConstraint", &UConstraintsScriptingLibrary::execRemoveConstraint },
			{ "RemoveThisConstraint", &UConstraintsScriptingLibrary::execRemoveThisConstraint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics
	{
		struct ConstraintsScriptingLibrary_eventAddConstraint_Parms
		{
			UWorld* InWorld;
			UTransformableHandle* InParentHandle;
			UTransformableHandle* InChildHandle;
			UTickableTransformConstraint* InConstraint;
			bool bMaintainOffset;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InParentHandle;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InChildHandle;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InConstraint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaintainOffset_MetaData[];
#endif
		static void NewProp_bMaintainOffset_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaintainOffset;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventAddConstraint_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_InParentHandle = { "InParentHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventAddConstraint_Parms, InParentHandle), Z_Construct_UClass_UTransformableHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_InChildHandle = { "InChildHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventAddConstraint_Parms, InChildHandle), Z_Construct_UClass_UTransformableHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_InConstraint = { "InConstraint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventAddConstraint_Parms, InConstraint), Z_Construct_UClass_UTickableTransformConstraint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_bMaintainOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_bMaintainOffset_SetBit(void* Obj)
	{
		((ConstraintsScriptingLibrary_eventAddConstraint_Parms*)Obj)->bMaintainOffset = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_bMaintainOffset = { "bMaintainOffset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintsScriptingLibrary_eventAddConstraint_Parms), &Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_bMaintainOffset_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_bMaintainOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_bMaintainOffset_MetaData)) };
	void Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConstraintsScriptingLibrary_eventAddConstraint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintsScriptingLibrary_eventAddConstraint_Parms), &Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_InWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_InParentHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_InChildHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_InConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_bMaintainOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig | Constraints" },
		{ "Comment", "/**\n\x09* Add Constraint to the system using the incoming parent and child handles with the specified type.\n\x09* @param InWorld World to create the constraint\n\x09* @param InParentHandle The parent handle\n\x09* @param InChildHandle The child handle\n\x09* @param InConsrtaint The constraint\n\x09* @return return If constraint added correctly\n\x09*/" },
		{ "ModuleRelativePath", "Public/ConstraintsScripting.h" },
		{ "ToolTip", "Add Constraint to the system using the incoming parent and child handles with the specified type.\n@param InWorld World to create the constraint\n@param InParentHandle The parent handle\n@param InChildHandle The child handle\n@param InConsrtaint The constraint\n@return return If constraint added correctly" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintsScriptingLibrary, nullptr, "AddConstraint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::ConstraintsScriptingLibrary_eventAddConstraint_Parms), Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics
	{
		struct ConstraintsScriptingLibrary_eventCreateFromType_Parms
		{
			UWorld* InWorld;
			ETransformConstraintType InType;
			UTickableTransformConstraint* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventCreateFromType_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::NewProp_InType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::NewProp_InType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::NewProp_InType = { "InType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventCreateFromType_Parms, InType), Z_Construct_UEnum_AnimationCore_ETransformConstraintType, METADATA_PARAMS(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::NewProp_InType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::NewProp_InType_MetaData)) }; // 2587833052
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventCreateFromType_Parms, ReturnValue), Z_Construct_UClass_UTickableTransformConstraint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::NewProp_InWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::NewProp_InType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::NewProp_InType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig | Constraints" },
		{ "Comment", "/**\n\x09* Create Constraint based on the specified type.\n\x09* @param InWorld World to create the constraint\n\x09* @param InType The type of constraint\n\x09* @return return The constraint object\n\x09*/" },
		{ "ModuleRelativePath", "Public/ConstraintsScripting.h" },
		{ "ToolTip", "Create Constraint based on the specified type.\n@param InWorld World to create the constraint\n@param InType The type of constraint\n@return return The constraint object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintsScriptingLibrary, nullptr, "CreateFromType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::ConstraintsScriptingLibrary_eventCreateFromType_Parms), Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics
	{
		struct ConstraintsScriptingLibrary_eventCreateTransformableComponentHandle_Parms
		{
			UWorld* InWorld;
			USceneComponent* InSceneComponent;
			FName InSocketName;
			UTransformableComponentHandle* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSceneComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSceneComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InSocketName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventCreateTransformableComponentHandle_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::NewProp_InSceneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::NewProp_InSceneComponent = { "InSceneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventCreateTransformableComponentHandle_Parms, InSceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::NewProp_InSceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::NewProp_InSceneComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::NewProp_InSocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::NewProp_InSocketName = { "InSocketName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventCreateTransformableComponentHandle_Parms, InSocketName), METADATA_PARAMS(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::NewProp_InSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::NewProp_InSocketName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventCreateTransformableComponentHandle_Parms, ReturnValue), Z_Construct_UClass_UTransformableComponentHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::NewProp_InWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::NewProp_InSceneComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::NewProp_InSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig | Constraints" },
		{ "Comment", "/**\n\x09* Create the transformable handle that deals with getting and setting transforms on this scene component\n\x09* @param InWorld, the world you are in\n\x09* @param InSceneComponent World to create the constraint\n\x09* @param InSocketName Optional name of the socket to get the transform \n\x09* @return returns the handle for this scene component\n\x09**/" },
		{ "ModuleRelativePath", "Public/ConstraintsScripting.h" },
		{ "ToolTip", "Create the transformable handle that deals with getting and setting transforms on this scene component\n@param InWorld, the world you are in\n@param InSceneComponent World to create the constraint\n@param InSocketName Optional name of the socket to get the transform\n@return returns the handle for this scene component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintsScriptingLibrary, nullptr, "CreateTransformableComponentHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::ConstraintsScriptingLibrary_eventCreateTransformableComponentHandle_Parms), Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics
	{
		struct ConstraintsScriptingLibrary_eventCreateTransformableHandle_Parms
		{
			UWorld* InWorld;
			UObject* InObject;
			FName InAttachmentName;
			UTransformableHandle* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InAttachmentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InAttachmentName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventCreateTransformableHandle_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventCreateTransformableHandle_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::NewProp_InAttachmentName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::NewProp_InAttachmentName = { "InAttachmentName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventCreateTransformableHandle_Parms, InAttachmentName), METADATA_PARAMS(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::NewProp_InAttachmentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::NewProp_InAttachmentName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventCreateTransformableHandle_Parms, ReturnValue), Z_Construct_UClass_UTransformableHandle_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::NewProp_InWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::NewProp_InObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::NewProp_InAttachmentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig | Constraints" },
		{ "Comment", "/**\n\x09* Create the transformable handle that deals with getting and setting transforms on this object\n\x09* @param InWorld, the world you are in\n\x09* @param InObject World to create the constraint\n\x09* @param InAttachmentName Optional name of the attachment to get the transform. Not that this can represent a scene component's socket name or a control rig control for example. \n\x09* @return returns the handle for this scene component\n\x09**/" },
		{ "CPP_Default_InAttachmentName", "None" },
		{ "ModuleRelativePath", "Public/ConstraintsScripting.h" },
		{ "ToolTip", "Create the transformable handle that deals with getting and setting transforms on this object\n@param InWorld, the world you are in\n@param InObject World to create the constraint\n@param InAttachmentName Optional name of the attachment to get the transform. Not that this can represent a scene component's socket name or a control rig control for example.\n@return returns the handle for this scene component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintsScriptingLibrary, nullptr, "CreateTransformableHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::ConstraintsScriptingLibrary_eventCreateTransformableHandle_Parms), Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics
	{
		struct ConstraintsScriptingLibrary_eventGetConstraintsArray_Parms
		{
			UWorld* InWorld;
			TArray<UTickableConstraint*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventGetConstraintsArray_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTickableConstraint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventGetConstraintsArray_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::NewProp_InWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig | Constraints" },
		{ "Comment", "/* Get a copy of the constraints in the current world\n\x09@param InWorld World we are in\n\x09@return Copy of the constraints in the level\n\x09*/" },
		{ "ModuleRelativePath", "Public/ConstraintsScripting.h" },
		{ "ToolTip", "Get a copy of the constraints in the current world\n      @param InWorld World we are in\n      @return Copy of the constraints in the level" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintsScriptingLibrary, nullptr, "GetConstraintsArray", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::ConstraintsScriptingLibrary_eventGetConstraintsArray_Parms), Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintsScriptingLibrary_GetManager_Statics
	{
		struct ConstraintsScriptingLibrary_eventGetManager_Parms
		{
			UWorld* InWorld;
			UConstraintsManager* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_GetManager_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventGetManager_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_GetManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventGetManager_Parms, ReturnValue), Z_Construct_UClass_UConstraintsManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintsScriptingLibrary_GetManager_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_GetManager_Statics::NewProp_InWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_GetManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintsScriptingLibrary_GetManager_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig | Constraints" },
		{ "Comment", "/**\n\x09* Get the manager of the constraints. This object contains delegates to listen to for when constraints are added,deleted,\n\x09* and is also the outer used when creating custom transformable handles, for example this is used to create control rig transformable handles\n\x09* Note this function will create the mananager and it's actor if one doesn't exist.\n\x09* @param InWorld, the world you are in\n\x09* @return Returns the mananger\n\x09*/" },
		{ "ModuleRelativePath", "Public/ConstraintsScripting.h" },
		{ "ToolTip", "Get the manager of the constraints. This object contains delegates to listen to for when constraints are added,deleted,\nand is also the outer used when creating custom transformable handles, for example this is used to create control rig transformable handles\nNote this function will create the mananager and it's actor if one doesn't exist.\n@param InWorld, the world you are in\n@return Returns the mananger" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintsScriptingLibrary_GetManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintsScriptingLibrary, nullptr, "GetManager", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintsScriptingLibrary_GetManager_Statics::ConstraintsScriptingLibrary_eventGetManager_Parms), Z_Construct_UFunction_UConstraintsScriptingLibrary_GetManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_GetManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintsScriptingLibrary_GetManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_GetManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintsScriptingLibrary_GetManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintsScriptingLibrary_GetManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics
	{
		struct ConstraintsScriptingLibrary_eventRemoveConstraint_Parms
		{
			UWorld* InWorld;
			int32 InIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventRemoveConstraint_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventRemoveConstraint_Parms, InIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConstraintsScriptingLibrary_eventRemoveConstraint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintsScriptingLibrary_eventRemoveConstraint_Parms), &Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::NewProp_InWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::NewProp_InIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig | Constraints" },
		{ "Comment", "/**\n\x09* Remove constraint at specified index\n\x09* @param InWorld World to remove the constraint\n\x09* @param InIndex Index to remove from\n\x09* @return return If constraint removed correctly\n\x09*/" },
		{ "ModuleRelativePath", "Public/ConstraintsScripting.h" },
		{ "ToolTip", "Remove constraint at specified index\n@param InWorld World to remove the constraint\n@param InIndex Index to remove from\n@return return If constraint removed correctly" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintsScriptingLibrary, nullptr, "RemoveConstraint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::ConstraintsScriptingLibrary_eventRemoveConstraint_Parms), Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics
	{
		struct ConstraintsScriptingLibrary_eventRemoveThisConstraint_Parms
		{
			UWorld* InWorld;
			UTickableConstraint* InTickableConstraint;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InTickableConstraint;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventRemoveThisConstraint_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::NewProp_InTickableConstraint = { "InTickableConstraint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ConstraintsScriptingLibrary_eventRemoveThisConstraint_Parms, InTickableConstraint), Z_Construct_UClass_UTickableConstraint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ConstraintsScriptingLibrary_eventRemoveThisConstraint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ConstraintsScriptingLibrary_eventRemoveThisConstraint_Parms), &Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::NewProp_InWorld,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::NewProp_InTickableConstraint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Editor Scripting | Sequencer Tools | Control Rig | Constraints" },
		{ "Comment", "/**\n\x09* Remove specified constraint \n\x09* @param InWorld World to remove the constraint\n\x09* @param InTickableConstraint Constraint to remove\n\x09* @return return If constraint removed correctly\n\x09*/" },
		{ "ModuleRelativePath", "Public/ConstraintsScripting.h" },
		{ "ToolTip", "Remove specified constraint\n@param InWorld World to remove the constraint\n@param InTickableConstraint Constraint to remove\n@return return If constraint removed correctly" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UConstraintsScriptingLibrary, nullptr, "RemoveThisConstraint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::ConstraintsScriptingLibrary_eventRemoveThisConstraint_Parms), Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UConstraintsScriptingLibrary);
	UClass* Z_Construct_UClass_UConstraintsScriptingLibrary_NoRegister()
	{
		return UConstraintsScriptingLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UConstraintsScriptingLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UConstraintsScriptingLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Constraints,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UConstraintsScriptingLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UConstraintsScriptingLibrary_AddConstraint, "AddConstraint" }, // 3169614316
		{ &Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateFromType, "CreateFromType" }, // 1166455929
		{ &Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableComponentHandle, "CreateTransformableComponentHandle" }, // 2923211413
		{ &Z_Construct_UFunction_UConstraintsScriptingLibrary_CreateTransformableHandle, "CreateTransformableHandle" }, // 3655005711
		{ &Z_Construct_UFunction_UConstraintsScriptingLibrary_GetConstraintsArray, "GetConstraintsArray" }, // 58489937
		{ &Z_Construct_UFunction_UConstraintsScriptingLibrary_GetManager, "GetManager" }, // 3608980337
		{ &Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveConstraint, "RemoveConstraint" }, // 1550568012
		{ &Z_Construct_UFunction_UConstraintsScriptingLibrary_RemoveThisConstraint, "RemoveThisConstraint" }, // 1530605795
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UConstraintsScriptingLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* This is a set of helper functions to access various parts of the Sequencer and Control Rig API via Python and Blueprints.\n*/" },
		{ "IncludePath", "ConstraintsScripting.h" },
		{ "ModuleRelativePath", "Public/ConstraintsScripting.h" },
		{ "ScriptName", "ConstraintsScriptingLibrary" },
		{ "ToolTip", "This is a set of helper functions to access various parts of the Sequencer and Control Rig API via Python and Blueprints." },
		{ "Transient", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UConstraintsScriptingLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UConstraintsScriptingLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UConstraintsScriptingLibrary_Statics::ClassParams = {
		&UConstraintsScriptingLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UConstraintsScriptingLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UConstraintsScriptingLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UConstraintsScriptingLibrary()
	{
		if (!Z_Registration_Info_UClass_UConstraintsScriptingLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UConstraintsScriptingLibrary.OuterSingleton, Z_Construct_UClass_UConstraintsScriptingLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UConstraintsScriptingLibrary.OuterSingleton;
	}
	template<> CONSTRAINTS_API UClass* StaticClass<UConstraintsScriptingLibrary>()
	{
		return UConstraintsScriptingLibrary::StaticClass();
	}
	UConstraintsScriptingLibrary::UConstraintsScriptingLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UConstraintsScriptingLibrary);
	UConstraintsScriptingLibrary::~UConstraintsScriptingLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UConstraintsScriptingLibrary, UConstraintsScriptingLibrary::StaticClass, TEXT("UConstraintsScriptingLibrary"), &Z_Registration_Info_UClass_UConstraintsScriptingLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UConstraintsScriptingLibrary), 4019262509U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_1030168491(TEXT("/Script/Constraints"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Experimental_Animation_Constraints_Public_ConstraintsScripting_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
