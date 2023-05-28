// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SubobjectDataBlueprintFunctionLibrary.h"
#include "SubobjectData.h"
#include "SubobjectDataHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubobjectDataBlueprintFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	SUBOBJECTDATAINTERFACE_API UClass* Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary();
	SUBOBJECTDATAINTERFACE_API UClass* Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary_NoRegister();
	SUBOBJECTDATAINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSubobjectData();
	SUBOBJECTDATAINTERFACE_API UScriptStruct* Z_Construct_UScriptStruct_FSubobjectDataHandle();
	UPackage* Z_Construct_UPackage__Script_SubobjectDataInterface();
// End Cross Module References
	DEFINE_FUNCTION(USubobjectDataBlueprintFunctionLibrary::execIsActor)
	{
		P_GET_STRUCT_REF(FSubobjectData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USubobjectDataBlueprintFunctionLibrary::IsActor(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataBlueprintFunctionLibrary::execIsRootActor)
	{
		P_GET_STRUCT_REF(FSubobjectData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USubobjectDataBlueprintFunctionLibrary::IsRootActor(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataBlueprintFunctionLibrary::execIsChildActor)
	{
		P_GET_STRUCT_REF(FSubobjectData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USubobjectDataBlueprintFunctionLibrary::IsChildActor(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataBlueprintFunctionLibrary::execIsComponent)
	{
		P_GET_STRUCT_REF(FSubobjectData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USubobjectDataBlueprintFunctionLibrary::IsComponent(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataBlueprintFunctionLibrary::execIsDefaultSceneRoot)
	{
		P_GET_STRUCT_REF(FSubobjectData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USubobjectDataBlueprintFunctionLibrary::IsDefaultSceneRoot(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataBlueprintFunctionLibrary::execIsRootComponent)
	{
		P_GET_STRUCT_REF(FSubobjectData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USubobjectDataBlueprintFunctionLibrary::IsRootComponent(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataBlueprintFunctionLibrary::execIsSceneComponent)
	{
		P_GET_STRUCT_REF(FSubobjectData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USubobjectDataBlueprintFunctionLibrary::IsSceneComponent(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataBlueprintFunctionLibrary::execIsInheritedComponent)
	{
		P_GET_STRUCT_REF(FSubobjectData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USubobjectDataBlueprintFunctionLibrary::IsInheritedComponent(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataBlueprintFunctionLibrary::execIsNativeComponent)
	{
		P_GET_STRUCT_REF(FSubobjectData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USubobjectDataBlueprintFunctionLibrary::IsNativeComponent(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataBlueprintFunctionLibrary::execIsInstancedActor)
	{
		P_GET_STRUCT_REF(FSubobjectData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USubobjectDataBlueprintFunctionLibrary::IsInstancedActor(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataBlueprintFunctionLibrary::execIsInstancedComponent)
	{
		P_GET_STRUCT_REF(FSubobjectData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USubobjectDataBlueprintFunctionLibrary::IsInstancedComponent(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataBlueprintFunctionLibrary::execGetBlueprint)
	{
		P_GET_STRUCT_REF(FSubobjectData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBlueprint**)Z_Param__Result=P_THIS->GetBlueprint(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataBlueprintFunctionLibrary::execGetObjectForBlueprint)
	{
		P_GET_STRUCT_REF(FSubobjectData,Z_Param_Out_Data);
		P_GET_OBJECT(UBlueprint,Z_Param_Blueprint);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UObject**)Z_Param__Result=USubobjectDataBlueprintFunctionLibrary::GetObjectForBlueprint(Z_Param_Out_Data,Z_Param_Blueprint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataBlueprintFunctionLibrary::execGetObject)
	{
		P_GET_STRUCT_REF(FSubobjectData,Z_Param_Out_Data);
		P_GET_UBOOL(Z_Param_bEvenIfPendingKill);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(const UObject**)Z_Param__Result=USubobjectDataBlueprintFunctionLibrary::GetObject(Z_Param_Out_Data,Z_Param_bEvenIfPendingKill);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataBlueprintFunctionLibrary::execCanRename)
	{
		P_GET_STRUCT_REF(FSubobjectData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USubobjectDataBlueprintFunctionLibrary::CanRename(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataBlueprintFunctionLibrary::execCanReparent)
	{
		P_GET_STRUCT_REF(FSubobjectData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USubobjectDataBlueprintFunctionLibrary::CanReparent(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataBlueprintFunctionLibrary::execCanCopy)
	{
		P_GET_STRUCT_REF(FSubobjectData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USubobjectDataBlueprintFunctionLibrary::CanCopy(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataBlueprintFunctionLibrary::execCanDuplicate)
	{
		P_GET_STRUCT_REF(FSubobjectData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USubobjectDataBlueprintFunctionLibrary::CanDuplicate(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataBlueprintFunctionLibrary::execCanDelete)
	{
		P_GET_STRUCT_REF(FSubobjectData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USubobjectDataBlueprintFunctionLibrary::CanDelete(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataBlueprintFunctionLibrary::execCanEdit)
	{
		P_GET_STRUCT_REF(FSubobjectData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USubobjectDataBlueprintFunctionLibrary::CanEdit(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataBlueprintFunctionLibrary::execIsAttachedTo)
	{
		P_GET_STRUCT_REF(FSubobjectData,Z_Param_Out_Data);
		P_GET_STRUCT_REF(FSubobjectDataHandle,Z_Param_Out_InHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USubobjectDataBlueprintFunctionLibrary::IsAttachedTo(Z_Param_Out_Data,Z_Param_Out_InHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataBlueprintFunctionLibrary::execGetVariableName)
	{
		P_GET_STRUCT_REF(FSubobjectData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=USubobjectDataBlueprintFunctionLibrary::GetVariableName(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataBlueprintFunctionLibrary::execGetDisplayName)
	{
		P_GET_STRUCT_REF(FSubobjectData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetDisplayName(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataBlueprintFunctionLibrary::execGetHandle)
	{
		P_GET_STRUCT_REF(FSubobjectData,Z_Param_Out_Data);
		P_GET_STRUCT_REF(FSubobjectDataHandle,Z_Param_Out_OutHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		USubobjectDataBlueprintFunctionLibrary::GetHandle(Z_Param_Out_Data,Z_Param_Out_OutHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataBlueprintFunctionLibrary::execGetData)
	{
		P_GET_STRUCT_REF(FSubobjectDataHandle,Z_Param_Out_DataHandle);
		P_GET_STRUCT_REF(FSubobjectData,Z_Param_Out_OutData);
		P_FINISH;
		P_NATIVE_BEGIN;
		USubobjectDataBlueprintFunctionLibrary::GetData(Z_Param_Out_DataHandle,Z_Param_Out_OutData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataBlueprintFunctionLibrary::execIsHandleValid)
	{
		P_GET_STRUCT_REF(FSubobjectDataHandle,Z_Param_Out_DataHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USubobjectDataBlueprintFunctionLibrary::IsHandleValid(Z_Param_Out_DataHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USubobjectDataBlueprintFunctionLibrary::execIsValid)
	{
		P_GET_STRUCT_REF(FSubobjectData,Z_Param_Out_Data);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USubobjectDataBlueprintFunctionLibrary::IsValid(Z_Param_Out_Data);
		P_NATIVE_END;
	}
	void USubobjectDataBlueprintFunctionLibrary::StaticRegisterNativesUSubobjectDataBlueprintFunctionLibrary()
	{
		UClass* Class = USubobjectDataBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanCopy", &USubobjectDataBlueprintFunctionLibrary::execCanCopy },
			{ "CanDelete", &USubobjectDataBlueprintFunctionLibrary::execCanDelete },
			{ "CanDuplicate", &USubobjectDataBlueprintFunctionLibrary::execCanDuplicate },
			{ "CanEdit", &USubobjectDataBlueprintFunctionLibrary::execCanEdit },
			{ "CanRename", &USubobjectDataBlueprintFunctionLibrary::execCanRename },
			{ "CanReparent", &USubobjectDataBlueprintFunctionLibrary::execCanReparent },
			{ "GetBlueprint", &USubobjectDataBlueprintFunctionLibrary::execGetBlueprint },
			{ "GetData", &USubobjectDataBlueprintFunctionLibrary::execGetData },
			{ "GetDisplayName", &USubobjectDataBlueprintFunctionLibrary::execGetDisplayName },
			{ "GetHandle", &USubobjectDataBlueprintFunctionLibrary::execGetHandle },
			{ "GetObject", &USubobjectDataBlueprintFunctionLibrary::execGetObject },
			{ "GetObjectForBlueprint", &USubobjectDataBlueprintFunctionLibrary::execGetObjectForBlueprint },
			{ "GetVariableName", &USubobjectDataBlueprintFunctionLibrary::execGetVariableName },
			{ "IsActor", &USubobjectDataBlueprintFunctionLibrary::execIsActor },
			{ "IsAttachedTo", &USubobjectDataBlueprintFunctionLibrary::execIsAttachedTo },
			{ "IsChildActor", &USubobjectDataBlueprintFunctionLibrary::execIsChildActor },
			{ "IsComponent", &USubobjectDataBlueprintFunctionLibrary::execIsComponent },
			{ "IsDefaultSceneRoot", &USubobjectDataBlueprintFunctionLibrary::execIsDefaultSceneRoot },
			{ "IsHandleValid", &USubobjectDataBlueprintFunctionLibrary::execIsHandleValid },
			{ "IsInheritedComponent", &USubobjectDataBlueprintFunctionLibrary::execIsInheritedComponent },
			{ "IsInstancedActor", &USubobjectDataBlueprintFunctionLibrary::execIsInstancedActor },
			{ "IsInstancedComponent", &USubobjectDataBlueprintFunctionLibrary::execIsInstancedComponent },
			{ "IsNativeComponent", &USubobjectDataBlueprintFunctionLibrary::execIsNativeComponent },
			{ "IsRootActor", &USubobjectDataBlueprintFunctionLibrary::execIsRootActor },
			{ "IsRootComponent", &USubobjectDataBlueprintFunctionLibrary::execIsRootComponent },
			{ "IsSceneComponent", &USubobjectDataBlueprintFunctionLibrary::execIsSceneComponent },
			{ "IsValid", &USubobjectDataBlueprintFunctionLibrary::execIsValid },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanCopy_Statics
	{
		struct SubobjectDataBlueprintFunctionLibrary_eventCanCopy_Parms
		{
			FSubobjectData Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanCopy_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanCopy_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventCanCopy_Parms, Data), Z_Construct_UScriptStruct_FSubobjectData, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanCopy_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanCopy_Statics::NewProp_Data_MetaData)) }; // 331944198
	void Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanCopy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataBlueprintFunctionLibrary_eventCanCopy_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanCopy_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataBlueprintFunctionLibrary_eventCanCopy_Parms), &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanCopy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanCopy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanCopy_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanCopy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanCopy_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subobject Data" },
		{ "Comment", "/**\n\x09* @return Whether or not this object represents a subobject that can be copied\n\x09*/" },
		{ "ModuleRelativePath", "Public/SubobjectDataBlueprintFunctionLibrary.h" },
		{ "ToolTip", "@return Whether or not this object represents a subobject that can be copied" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanCopy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary, nullptr, "CanCopy", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanCopy_Statics::SubobjectDataBlueprintFunctionLibrary_eventCanCopy_Parms), Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanCopy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanCopy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanCopy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanCopy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanCopy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanCopy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDelete_Statics
	{
		struct SubobjectDataBlueprintFunctionLibrary_eventCanDelete_Parms
		{
			FSubobjectData Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDelete_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDelete_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventCanDelete_Parms, Data), Z_Construct_UScriptStruct_FSubobjectData, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDelete_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDelete_Statics::NewProp_Data_MetaData)) }; // 331944198
	void Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDelete_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataBlueprintFunctionLibrary_eventCanDelete_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDelete_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataBlueprintFunctionLibrary_eventCanDelete_Parms), &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDelete_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDelete_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDelete_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDelete_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDelete_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subobject Data" },
		{ "Comment", "/**\n\x09* @return Whether or not this object represents a subobject that can be deleted\n\x09*/" },
		{ "ModuleRelativePath", "Public/SubobjectDataBlueprintFunctionLibrary.h" },
		{ "ToolTip", "@return Whether or not this object represents a subobject that can be deleted" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDelete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary, nullptr, "CanDelete", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDelete_Statics::SubobjectDataBlueprintFunctionLibrary_eventCanDelete_Parms), Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDelete_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDelete_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDelete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDelete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDelete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDelete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDuplicate_Statics
	{
		struct SubobjectDataBlueprintFunctionLibrary_eventCanDuplicate_Parms
		{
			FSubobjectData Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDuplicate_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDuplicate_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventCanDuplicate_Parms, Data), Z_Construct_UScriptStruct_FSubobjectData, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDuplicate_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDuplicate_Statics::NewProp_Data_MetaData)) }; // 331944198
	void Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDuplicate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataBlueprintFunctionLibrary_eventCanDuplicate_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDuplicate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataBlueprintFunctionLibrary_eventCanDuplicate_Parms), &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDuplicate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDuplicate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDuplicate_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDuplicate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDuplicate_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subobject Data" },
		{ "Comment", "/**\n\x09* @return Whether or not this object represents a subobject that can be duplicated\n\x09*/" },
		{ "ModuleRelativePath", "Public/SubobjectDataBlueprintFunctionLibrary.h" },
		{ "ToolTip", "@return Whether or not this object represents a subobject that can be duplicated" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDuplicate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary, nullptr, "CanDuplicate", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDuplicate_Statics::SubobjectDataBlueprintFunctionLibrary_eventCanDuplicate_Parms), Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDuplicate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDuplicate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDuplicate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDuplicate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDuplicate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDuplicate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanEdit_Statics
	{
		struct SubobjectDataBlueprintFunctionLibrary_eventCanEdit_Parms
		{
			FSubobjectData Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanEdit_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanEdit_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventCanEdit_Parms, Data), Z_Construct_UScriptStruct_FSubobjectData, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanEdit_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanEdit_Statics::NewProp_Data_MetaData)) }; // 331944198
	void Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanEdit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataBlueprintFunctionLibrary_eventCanEdit_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanEdit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataBlueprintFunctionLibrary_eventCanEdit_Parms), &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanEdit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanEdit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanEdit_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanEdit_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanEdit_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subobject Data" },
		{ "Comment", "/**\n\x09* @return Whether or not we can edit properties for this subobject\n\x09*/" },
		{ "ModuleRelativePath", "Public/SubobjectDataBlueprintFunctionLibrary.h" },
		{ "ToolTip", "@return Whether or not we can edit properties for this subobject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanEdit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary, nullptr, "CanEdit", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanEdit_Statics::SubobjectDataBlueprintFunctionLibrary_eventCanEdit_Parms), Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanEdit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanEdit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanEdit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanEdit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanEdit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanEdit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanRename_Statics
	{
		struct SubobjectDataBlueprintFunctionLibrary_eventCanRename_Parms
		{
			FSubobjectData Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanRename_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanRename_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventCanRename_Parms, Data), Z_Construct_UScriptStruct_FSubobjectData, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanRename_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanRename_Statics::NewProp_Data_MetaData)) }; // 331944198
	void Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanRename_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataBlueprintFunctionLibrary_eventCanRename_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanRename_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataBlueprintFunctionLibrary_eventCanRename_Parms), &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanRename_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanRename_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanRename_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanRename_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanRename_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subobject Data" },
		{ "ModuleRelativePath", "Public/SubobjectDataBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanRename_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary, nullptr, "CanRename", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanRename_Statics::SubobjectDataBlueprintFunctionLibrary_eventCanRename_Parms), Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanRename_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanRename_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanRename_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanRename_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanRename()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanRename_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanReparent_Statics
	{
		struct SubobjectDataBlueprintFunctionLibrary_eventCanReparent_Parms
		{
			FSubobjectData Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanReparent_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanReparent_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventCanReparent_Parms, Data), Z_Construct_UScriptStruct_FSubobjectData, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanReparent_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanReparent_Statics::NewProp_Data_MetaData)) }; // 331944198
	void Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanReparent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataBlueprintFunctionLibrary_eventCanReparent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanReparent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataBlueprintFunctionLibrary_eventCanReparent_Parms), &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanReparent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanReparent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanReparent_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanReparent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanReparent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subobject Data" },
		{ "Comment", "/**\n\x09* @return Whether or not this object represents a subobject that can \n\x09* be reparented to other subobjects based on its context.\n\x09*/" },
		{ "ModuleRelativePath", "Public/SubobjectDataBlueprintFunctionLibrary.h" },
		{ "ToolTip", "@return Whether or not this object represents a subobject that can\nbe reparented to other subobjects based on its context." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanReparent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary, nullptr, "CanReparent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanReparent_Statics::SubobjectDataBlueprintFunctionLibrary_eventCanReparent_Parms), Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanReparent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanReparent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanReparent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanReparent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanReparent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanReparent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetBlueprint_Statics
	{
		struct SubobjectDataBlueprintFunctionLibrary_eventGetBlueprint_Parms
		{
			FSubobjectData Data;
			UBlueprint* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetBlueprint_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetBlueprint_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventGetBlueprint_Parms, Data), Z_Construct_UScriptStruct_FSubobjectData, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetBlueprint_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetBlueprint_Statics::NewProp_Data_MetaData)) }; // 331944198
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventGetBlueprint_Parms, ReturnValue), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetBlueprint_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetBlueprint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subobject Data" },
		{ "ModuleRelativePath", "Public/SubobjectDataBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary, nullptr, "GetBlueprint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetBlueprint_Statics::SubobjectDataBlueprintFunctionLibrary_eventGetBlueprint_Parms), Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetData_Statics
	{
		struct SubobjectDataBlueprintFunctionLibrary_eventGetData_Parms
		{
			FSubobjectDataHandle DataHandle;
			FSubobjectData OutData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetData_Statics::NewProp_DataHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetData_Statics::NewProp_DataHandle = { "DataHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventGetData_Parms, DataHandle), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetData_Statics::NewProp_DataHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetData_Statics::NewProp_DataHandle_MetaData)) }; // 3209397774
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetData_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventGetData_Parms, OutData), Z_Construct_UScriptStruct_FSubobjectData, METADATA_PARAMS(nullptr, 0) }; // 331944198
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetData_Statics::NewProp_DataHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetData_Statics::NewProp_OutData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subobject Data" },
		{ "ModuleRelativePath", "Public/SubobjectDataBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary, nullptr, "GetData", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetData_Statics::SubobjectDataBlueprintFunctionLibrary_eventGetData_Parms), Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetDisplayName_Statics
	{
		struct SubobjectDataBlueprintFunctionLibrary_eventGetDisplayName_Parms
		{
			FSubobjectData Data;
			FText ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetDisplayName_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetDisplayName_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventGetDisplayName_Parms, Data), Z_Construct_UScriptStruct_FSubobjectData, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetDisplayName_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetDisplayName_Statics::NewProp_Data_MetaData)) }; // 331944198
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventGetDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetDisplayName_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subobject Data" },
		{ "ModuleRelativePath", "Public/SubobjectDataBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary, nullptr, "GetDisplayName", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetDisplayName_Statics::SubobjectDataBlueprintFunctionLibrary_eventGetDisplayName_Parms), Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetHandle_Statics
	{
		struct SubobjectDataBlueprintFunctionLibrary_eventGetHandle_Parms
		{
			FSubobjectData Data;
			FSubobjectDataHandle OutHandle;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutHandle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetHandle_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetHandle_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventGetHandle_Parms, Data), Z_Construct_UScriptStruct_FSubobjectData, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetHandle_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetHandle_Statics::NewProp_Data_MetaData)) }; // 331944198
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetHandle_Statics::NewProp_OutHandle = { "OutHandle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventGetHandle_Parms, OutHandle), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(nullptr, 0) }; // 3209397774
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetHandle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetHandle_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetHandle_Statics::NewProp_OutHandle,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetHandle_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subobject Data" },
		{ "Comment", "/**\n\x09* @return Get the handle for this subobject data\n\x09*/" },
		{ "ModuleRelativePath", "Public/SubobjectDataBlueprintFunctionLibrary.h" },
		{ "ToolTip", "@return Get the handle for this subobject data" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary, nullptr, "GetHandle", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetHandle_Statics::SubobjectDataBlueprintFunctionLibrary_eventGetHandle_Parms), Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetHandle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetHandle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetHandle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetHandle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetHandle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObject_Statics
	{
		struct SubobjectDataBlueprintFunctionLibrary_eventGetObject_Parms
		{
			FSubobjectData Data;
			bool bEvenIfPendingKill;
			const UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_bEvenIfPendingKill_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEvenIfPendingKill;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObject_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObject_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventGetObject_Parms, Data), Z_Construct_UScriptStruct_FSubobjectData, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObject_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObject_Statics::NewProp_Data_MetaData)) }; // 331944198
	void Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObject_Statics::NewProp_bEvenIfPendingKill_SetBit(void* Obj)
	{
		((SubobjectDataBlueprintFunctionLibrary_eventGetObject_Parms*)Obj)->bEvenIfPendingKill = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObject_Statics::NewProp_bEvenIfPendingKill = { "bEvenIfPendingKill", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataBlueprintFunctionLibrary_eventGetObject_Parms), &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObject_Statics::NewProp_bEvenIfPendingKill_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObject_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventGetObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObject_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObject_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObject_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObject_Statics::NewProp_bEvenIfPendingKill,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subobject Data" },
		{ "CPP_Default_bEvenIfPendingKill", "false" },
		{ "ModuleRelativePath", "Public/SubobjectDataBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary, nullptr, "GetObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObject_Statics::SubobjectDataBlueprintFunctionLibrary_eventGetObject_Parms), Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObjectForBlueprint_Statics
	{
		struct SubobjectDataBlueprintFunctionLibrary_eventGetObjectForBlueprint_Parms
		{
			FSubobjectData Data;
			UBlueprint* Blueprint;
			const UObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Blueprint;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObjectForBlueprint_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObjectForBlueprint_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventGetObjectForBlueprint_Parms, Data), Z_Construct_UScriptStruct_FSubobjectData, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObjectForBlueprint_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObjectForBlueprint_Statics::NewProp_Data_MetaData)) }; // 331944198
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObjectForBlueprint_Statics::NewProp_Blueprint = { "Blueprint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventGetObjectForBlueprint_Parms, Blueprint), Z_Construct_UClass_UBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObjectForBlueprint_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObjectForBlueprint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventGetObjectForBlueprint_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObjectForBlueprint_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObjectForBlueprint_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObjectForBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObjectForBlueprint_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObjectForBlueprint_Statics::NewProp_Blueprint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObjectForBlueprint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObjectForBlueprint_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subobject Data" },
		{ "ModuleRelativePath", "Public/SubobjectDataBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObjectForBlueprint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary, nullptr, "GetObjectForBlueprint", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObjectForBlueprint_Statics::SubobjectDataBlueprintFunctionLibrary_eventGetObjectForBlueprint_Parms), Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObjectForBlueprint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObjectForBlueprint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObjectForBlueprint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObjectForBlueprint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObjectForBlueprint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObjectForBlueprint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetVariableName_Statics
	{
		struct SubobjectDataBlueprintFunctionLibrary_eventGetVariableName_Parms
		{
			FSubobjectData Data;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetVariableName_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetVariableName_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventGetVariableName_Parms, Data), Z_Construct_UScriptStruct_FSubobjectData, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetVariableName_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetVariableName_Statics::NewProp_Data_MetaData)) }; // 331944198
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetVariableName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventGetVariableName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetVariableName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetVariableName_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetVariableName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetVariableName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subobject Data" },
		{ "ModuleRelativePath", "Public/SubobjectDataBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetVariableName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary, nullptr, "GetVariableName", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetVariableName_Statics::SubobjectDataBlueprintFunctionLibrary_eventGetVariableName_Parms), Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetVariableName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetVariableName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetVariableName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetVariableName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetVariableName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetVariableName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsActor_Statics
	{
		struct SubobjectDataBlueprintFunctionLibrary_eventIsActor_Parms
		{
			FSubobjectData Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsActor_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsActor_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventIsActor_Parms, Data), Z_Construct_UScriptStruct_FSubobjectData, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsActor_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsActor_Statics::NewProp_Data_MetaData)) }; // 331944198
	void Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataBlueprintFunctionLibrary_eventIsActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataBlueprintFunctionLibrary_eventIsActor_Parms), &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsActor_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subobject Data" },
		{ "ModuleRelativePath", "Public/SubobjectDataBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary, nullptr, "IsActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsActor_Statics::SubobjectDataBlueprintFunctionLibrary_eventIsActor_Parms), Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsAttachedTo_Statics
	{
		struct SubobjectDataBlueprintFunctionLibrary_eventIsAttachedTo_Parms
		{
			FSubobjectData Data;
			FSubobjectDataHandle InHandle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsAttachedTo_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsAttachedTo_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventIsAttachedTo_Parms, Data), Z_Construct_UScriptStruct_FSubobjectData, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsAttachedTo_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsAttachedTo_Statics::NewProp_Data_MetaData)) }; // 331944198
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsAttachedTo_Statics::NewProp_InHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsAttachedTo_Statics::NewProp_InHandle = { "InHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventIsAttachedTo_Parms, InHandle), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsAttachedTo_Statics::NewProp_InHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsAttachedTo_Statics::NewProp_InHandle_MetaData)) }; // 3209397774
	void Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsAttachedTo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataBlueprintFunctionLibrary_eventIsAttachedTo_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsAttachedTo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataBlueprintFunctionLibrary_eventIsAttachedTo_Parms), &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsAttachedTo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsAttachedTo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsAttachedTo_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsAttachedTo_Statics::NewProp_InHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsAttachedTo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsAttachedTo_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subobject Data" },
		{ "ModuleRelativePath", "Public/SubobjectDataBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsAttachedTo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary, nullptr, "IsAttachedTo", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsAttachedTo_Statics::SubobjectDataBlueprintFunctionLibrary_eventIsAttachedTo_Parms), Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsAttachedTo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsAttachedTo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsAttachedTo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsAttachedTo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsAttachedTo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsAttachedTo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsChildActor_Statics
	{
		struct SubobjectDataBlueprintFunctionLibrary_eventIsChildActor_Parms
		{
			FSubobjectData Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsChildActor_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsChildActor_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventIsChildActor_Parms, Data), Z_Construct_UScriptStruct_FSubobjectData, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsChildActor_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsChildActor_Statics::NewProp_Data_MetaData)) }; // 331944198
	void Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsChildActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataBlueprintFunctionLibrary_eventIsChildActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsChildActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataBlueprintFunctionLibrary_eventIsChildActor_Parms), &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsChildActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsChildActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsChildActor_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsChildActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsChildActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subobject Data" },
		{ "ModuleRelativePath", "Public/SubobjectDataBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsChildActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary, nullptr, "IsChildActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsChildActor_Statics::SubobjectDataBlueprintFunctionLibrary_eventIsChildActor_Parms), Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsChildActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsChildActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsChildActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsChildActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsChildActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsChildActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsComponent_Statics
	{
		struct SubobjectDataBlueprintFunctionLibrary_eventIsComponent_Parms
		{
			FSubobjectData Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsComponent_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsComponent_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventIsComponent_Parms, Data), Z_Construct_UScriptStruct_FSubobjectData, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsComponent_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsComponent_Statics::NewProp_Data_MetaData)) }; // 331944198
	void Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataBlueprintFunctionLibrary_eventIsComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataBlueprintFunctionLibrary_eventIsComponent_Parms), &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsComponent_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subobject Data" },
		{ "Comment", "/* Returns true if this subobject is a component. */" },
		{ "ModuleRelativePath", "Public/SubobjectDataBlueprintFunctionLibrary.h" },
		{ "ToolTip", "Returns true if this subobject is a component." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary, nullptr, "IsComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsComponent_Statics::SubobjectDataBlueprintFunctionLibrary_eventIsComponent_Parms), Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsDefaultSceneRoot_Statics
	{
		struct SubobjectDataBlueprintFunctionLibrary_eventIsDefaultSceneRoot_Parms
		{
			FSubobjectData Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsDefaultSceneRoot_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsDefaultSceneRoot_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventIsDefaultSceneRoot_Parms, Data), Z_Construct_UScriptStruct_FSubobjectData, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsDefaultSceneRoot_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsDefaultSceneRoot_Statics::NewProp_Data_MetaData)) }; // 331944198
	void Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsDefaultSceneRoot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataBlueprintFunctionLibrary_eventIsDefaultSceneRoot_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsDefaultSceneRoot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataBlueprintFunctionLibrary_eventIsDefaultSceneRoot_Parms), &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsDefaultSceneRoot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsDefaultSceneRoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsDefaultSceneRoot_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsDefaultSceneRoot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsDefaultSceneRoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subobject Data" },
		{ "ModuleRelativePath", "Public/SubobjectDataBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsDefaultSceneRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary, nullptr, "IsDefaultSceneRoot", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsDefaultSceneRoot_Statics::SubobjectDataBlueprintFunctionLibrary_eventIsDefaultSceneRoot_Parms), Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsDefaultSceneRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsDefaultSceneRoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsDefaultSceneRoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsDefaultSceneRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsDefaultSceneRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsDefaultSceneRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsHandleValid_Statics
	{
		struct SubobjectDataBlueprintFunctionLibrary_eventIsHandleValid_Parms
		{
			FSubobjectDataHandle DataHandle;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DataHandle;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsHandleValid_Statics::NewProp_DataHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsHandleValid_Statics::NewProp_DataHandle = { "DataHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventIsHandleValid_Parms, DataHandle), Z_Construct_UScriptStruct_FSubobjectDataHandle, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsHandleValid_Statics::NewProp_DataHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsHandleValid_Statics::NewProp_DataHandle_MetaData)) }; // 3209397774
	void Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsHandleValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataBlueprintFunctionLibrary_eventIsHandleValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsHandleValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataBlueprintFunctionLibrary_eventIsHandleValid_Parms), &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsHandleValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsHandleValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsHandleValid_Statics::NewProp_DataHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsHandleValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsHandleValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subobject Data" },
		{ "ModuleRelativePath", "Public/SubobjectDataBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsHandleValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary, nullptr, "IsHandleValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsHandleValid_Statics::SubobjectDataBlueprintFunctionLibrary_eventIsHandleValid_Parms), Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsHandleValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsHandleValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsHandleValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsHandleValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsHandleValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsHandleValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInheritedComponent_Statics
	{
		struct SubobjectDataBlueprintFunctionLibrary_eventIsInheritedComponent_Parms
		{
			FSubobjectData Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInheritedComponent_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInheritedComponent_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventIsInheritedComponent_Parms, Data), Z_Construct_UScriptStruct_FSubobjectData, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInheritedComponent_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInheritedComponent_Statics::NewProp_Data_MetaData)) }; // 331944198
	void Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInheritedComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataBlueprintFunctionLibrary_eventIsInheritedComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInheritedComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataBlueprintFunctionLibrary_eventIsInheritedComponent_Parms), &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInheritedComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInheritedComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInheritedComponent_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInheritedComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInheritedComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subobject Data" },
		{ "ModuleRelativePath", "Public/SubobjectDataBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInheritedComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary, nullptr, "IsInheritedComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInheritedComponent_Statics::SubobjectDataBlueprintFunctionLibrary_eventIsInheritedComponent_Parms), Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInheritedComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInheritedComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInheritedComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInheritedComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInheritedComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInheritedComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedActor_Statics
	{
		struct SubobjectDataBlueprintFunctionLibrary_eventIsInstancedActor_Parms
		{
			FSubobjectData Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedActor_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedActor_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventIsInstancedActor_Parms, Data), Z_Construct_UScriptStruct_FSubobjectData, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedActor_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedActor_Statics::NewProp_Data_MetaData)) }; // 331944198
	void Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataBlueprintFunctionLibrary_eventIsInstancedActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataBlueprintFunctionLibrary_eventIsInstancedActor_Parms), &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedActor_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subobject Data" },
		{ "ModuleRelativePath", "Public/SubobjectDataBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary, nullptr, "IsInstancedActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedActor_Statics::SubobjectDataBlueprintFunctionLibrary_eventIsInstancedActor_Parms), Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedComponent_Statics
	{
		struct SubobjectDataBlueprintFunctionLibrary_eventIsInstancedComponent_Parms
		{
			FSubobjectData Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedComponent_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedComponent_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventIsInstancedComponent_Parms, Data), Z_Construct_UScriptStruct_FSubobjectData, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedComponent_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedComponent_Statics::NewProp_Data_MetaData)) }; // 331944198
	void Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataBlueprintFunctionLibrary_eventIsInstancedComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataBlueprintFunctionLibrary_eventIsInstancedComponent_Parms), &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedComponent_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subobject Data" },
		{ "ModuleRelativePath", "Public/SubobjectDataBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary, nullptr, "IsInstancedComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedComponent_Statics::SubobjectDataBlueprintFunctionLibrary_eventIsInstancedComponent_Parms), Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsNativeComponent_Statics
	{
		struct SubobjectDataBlueprintFunctionLibrary_eventIsNativeComponent_Parms
		{
			FSubobjectData Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsNativeComponent_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsNativeComponent_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventIsNativeComponent_Parms, Data), Z_Construct_UScriptStruct_FSubobjectData, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsNativeComponent_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsNativeComponent_Statics::NewProp_Data_MetaData)) }; // 331944198
	void Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsNativeComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataBlueprintFunctionLibrary_eventIsNativeComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsNativeComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataBlueprintFunctionLibrary_eventIsNativeComponent_Parms), &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsNativeComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsNativeComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsNativeComponent_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsNativeComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsNativeComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subobject Data" },
		{ "ModuleRelativePath", "Public/SubobjectDataBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsNativeComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary, nullptr, "IsNativeComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsNativeComponent_Statics::SubobjectDataBlueprintFunctionLibrary_eventIsNativeComponent_Parms), Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsNativeComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsNativeComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsNativeComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsNativeComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsNativeComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsNativeComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootActor_Statics
	{
		struct SubobjectDataBlueprintFunctionLibrary_eventIsRootActor_Parms
		{
			FSubobjectData Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootActor_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootActor_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventIsRootActor_Parms, Data), Z_Construct_UScriptStruct_FSubobjectData, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootActor_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootActor_Statics::NewProp_Data_MetaData)) }; // 331944198
	void Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootActor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataBlueprintFunctionLibrary_eventIsRootActor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataBlueprintFunctionLibrary_eventIsRootActor_Parms), &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootActor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootActor_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subobject Data" },
		{ "ModuleRelativePath", "Public/SubobjectDataBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary, nullptr, "IsRootActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootActor_Statics::SubobjectDataBlueprintFunctionLibrary_eventIsRootActor_Parms), Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootComponent_Statics
	{
		struct SubobjectDataBlueprintFunctionLibrary_eventIsRootComponent_Parms
		{
			FSubobjectData Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootComponent_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootComponent_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventIsRootComponent_Parms, Data), Z_Construct_UScriptStruct_FSubobjectData, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootComponent_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootComponent_Statics::NewProp_Data_MetaData)) }; // 331944198
	void Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataBlueprintFunctionLibrary_eventIsRootComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataBlueprintFunctionLibrary_eventIsRootComponent_Parms), &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootComponent_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subobject Data" },
		{ "ModuleRelativePath", "Public/SubobjectDataBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary, nullptr, "IsRootComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootComponent_Statics::SubobjectDataBlueprintFunctionLibrary_eventIsRootComponent_Parms), Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsSceneComponent_Statics
	{
		struct SubobjectDataBlueprintFunctionLibrary_eventIsSceneComponent_Parms
		{
			FSubobjectData Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsSceneComponent_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsSceneComponent_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventIsSceneComponent_Parms, Data), Z_Construct_UScriptStruct_FSubobjectData, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsSceneComponent_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsSceneComponent_Statics::NewProp_Data_MetaData)) }; // 331944198
	void Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsSceneComponent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataBlueprintFunctionLibrary_eventIsSceneComponent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsSceneComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataBlueprintFunctionLibrary_eventIsSceneComponent_Parms), &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsSceneComponent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsSceneComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsSceneComponent_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsSceneComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsSceneComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subobject Data" },
		{ "ModuleRelativePath", "Public/SubobjectDataBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsSceneComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary, nullptr, "IsSceneComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsSceneComponent_Statics::SubobjectDataBlueprintFunctionLibrary_eventIsSceneComponent_Parms), Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsSceneComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsSceneComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsSceneComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsSceneComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsSceneComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsSceneComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsValid_Statics
	{
		struct SubobjectDataBlueprintFunctionLibrary_eventIsValid_Parms
		{
			FSubobjectData Data;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsValid_Statics::NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsValid_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SubobjectDataBlueprintFunctionLibrary_eventIsValid_Parms, Data), Z_Construct_UScriptStruct_FSubobjectData, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsValid_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsValid_Statics::NewProp_Data_MetaData)) }; // 331944198
	void Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SubobjectDataBlueprintFunctionLibrary_eventIsValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SubobjectDataBlueprintFunctionLibrary_eventIsValid_Parms), &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsValid_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Subobject Data" },
		{ "ModuleRelativePath", "Public/SubobjectDataBlueprintFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary, nullptr, "IsValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsValid_Statics::SubobjectDataBlueprintFunctionLibrary_eventIsValid_Parms), Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USubobjectDataBlueprintFunctionLibrary);
	UClass* Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary_NoRegister()
	{
		return USubobjectDataBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_SubobjectDataInterface,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanCopy, "CanCopy" }, // 3364672527
		{ &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDelete, "CanDelete" }, // 1213422155
		{ &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanDuplicate, "CanDuplicate" }, // 978247752
		{ &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanEdit, "CanEdit" }, // 576016011
		{ &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanRename, "CanRename" }, // 965542704
		{ &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_CanReparent, "CanReparent" }, // 1022779453
		{ &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetBlueprint, "GetBlueprint" }, // 1058965008
		{ &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetData, "GetData" }, // 4214333567
		{ &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetDisplayName, "GetDisplayName" }, // 599798715
		{ &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetHandle, "GetHandle" }, // 977964018
		{ &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObject, "GetObject" }, // 712616257
		{ &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetObjectForBlueprint, "GetObjectForBlueprint" }, // 2758546660
		{ &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_GetVariableName, "GetVariableName" }, // 3113626739
		{ &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsActor, "IsActor" }, // 4074610503
		{ &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsAttachedTo, "IsAttachedTo" }, // 3747657290
		{ &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsChildActor, "IsChildActor" }, // 729101791
		{ &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsComponent, "IsComponent" }, // 2976072794
		{ &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsDefaultSceneRoot, "IsDefaultSceneRoot" }, // 1284879555
		{ &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsHandleValid, "IsHandleValid" }, // 2181742389
		{ &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInheritedComponent, "IsInheritedComponent" }, // 1195013854
		{ &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedActor, "IsInstancedActor" }, // 1433735959
		{ &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsInstancedComponent, "IsInstancedComponent" }, // 1894577378
		{ &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsNativeComponent, "IsNativeComponent" }, // 4097363826
		{ &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootActor, "IsRootActor" }, // 2688608959
		{ &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsRootComponent, "IsRootComponent" }, // 4291474964
		{ &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsSceneComponent, "IsSceneComponent" }, // 3332839078
		{ &Z_Construct_UFunction_USubobjectDataBlueprintFunctionLibrary_IsValid, "IsValid" }, // 905265380
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A function library with wrappers around the getter/setter functions for FSubobjectData\n * that will make it easier to use within blueprint contexts.\n */" },
		{ "IncludePath", "SubobjectDataBlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/SubobjectDataBlueprintFunctionLibrary.h" },
		{ "ToolTip", "A function library with wrappers around the getter/setter functions for FSubobjectData\nthat will make it easier to use within blueprint contexts." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USubobjectDataBlueprintFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary_Statics::ClassParams = {
		&USubobjectDataBlueprintFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_USubobjectDataBlueprintFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USubobjectDataBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USubobjectDataBlueprintFunctionLibrary.OuterSingleton;
	}
	template<> SUBOBJECTDATAINTERFACE_API UClass* StaticClass<USubobjectDataBlueprintFunctionLibrary>()
	{
		return USubobjectDataBlueprintFunctionLibrary::StaticClass();
	}
	USubobjectDataBlueprintFunctionLibrary::USubobjectDataBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USubobjectDataBlueprintFunctionLibrary);
	USubobjectDataBlueprintFunctionLibrary::~USubobjectDataBlueprintFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USubobjectDataBlueprintFunctionLibrary, USubobjectDataBlueprintFunctionLibrary::StaticClass, TEXT("USubobjectDataBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_USubobjectDataBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USubobjectDataBlueprintFunctionLibrary), 2192570582U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_2470875951(TEXT("/Script/SubobjectDataInterface"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_SubobjectDataInterface_Public_SubobjectDataBlueprintFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
