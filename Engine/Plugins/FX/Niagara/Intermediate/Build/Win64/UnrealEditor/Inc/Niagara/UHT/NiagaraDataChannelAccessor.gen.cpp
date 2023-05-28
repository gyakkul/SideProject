// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraDataChannelAccessor.h"
#include "../Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataChannelAccessor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelHandler_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelReader();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelReader_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelWriter();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataChannelWriter_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraSpawnInfo();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	DEFINE_FUNCTION(UNiagaraDataChannelReader::execReadBool)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReadBool(Z_Param_VarName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataChannelReader::execReadInt)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->ReadInt(Z_Param_VarName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataChannelReader::execReadLinearColor)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->ReadLinearColor(Z_Param_VarName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataChannelReader::execReadQuat)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=P_THIS->ReadQuat(Z_Param_VarName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataChannelReader::execReadVector4)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector4*)Z_Param__Result=P_THIS->ReadVector4(Z_Param_VarName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataChannelReader::execReadVector)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->ReadVector(Z_Param_VarName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataChannelReader::execReadVector2D)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->ReadVector2D(Z_Param_VarName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataChannelReader::execReadFloat)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(double*)Z_Param__Result=P_THIS->ReadFloat(Z_Param_VarName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataChannelReader::execNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Num();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataChannelReader::execInitAccess)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_OwningComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitAccess(Z_Param_OwningComponent);
		P_NATIVE_END;
	}
	void UNiagaraDataChannelReader::StaticRegisterNativesUNiagaraDataChannelReader()
	{
		UClass* Class = UNiagaraDataChannelReader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitAccess", &UNiagaraDataChannelReader::execInitAccess },
			{ "Num", &UNiagaraDataChannelReader::execNum },
			{ "ReadBool", &UNiagaraDataChannelReader::execReadBool },
			{ "ReadFloat", &UNiagaraDataChannelReader::execReadFloat },
			{ "ReadInt", &UNiagaraDataChannelReader::execReadInt },
			{ "ReadLinearColor", &UNiagaraDataChannelReader::execReadLinearColor },
			{ "ReadQuat", &UNiagaraDataChannelReader::execReadQuat },
			{ "ReadVector", &UNiagaraDataChannelReader::execReadVector },
			{ "ReadVector2D", &UNiagaraDataChannelReader::execReadVector2D },
			{ "ReadVector4", &UNiagaraDataChannelReader::execReadVector4 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics
	{
		struct NiagaraDataChannelReader_eventInitAccess_Parms
		{
			UActorComponent* OwningComponent;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningComponent;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::NewProp_OwningComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::NewProp_OwningComponent = { "OwningComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelReader_eventInitAccess_Parms, OwningComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::NewProp_OwningComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::NewProp_OwningComponent_MetaData)) };
	void Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NiagaraDataChannelReader_eventInitAccess_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraDataChannelReader_eventInitAccess_Parms), &Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::NewProp_OwningComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Comment", "/** Call before each access to the data channel to grab the correct data to read. */" },
		{ "Keywords", "Niagara DataChannel" },
		{ "ModuleRelativePath", "Private/NiagaraDataChannelAccessor.h" },
		{ "ToolTip", "Call before each access to the data channel to grab the correct data to read." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelReader, nullptr, "InitAccess", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::NiagaraDataChannelReader_eventInitAccess_Parms), Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataChannelReader_Num_Statics
	{
		struct NiagaraDataChannelReader_eventNum_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_Num_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelReader_eventNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelReader_Num_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_Num_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelReader_Num_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "Niagara DataChannel" },
		{ "ModuleRelativePath", "Private/NiagaraDataChannelAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelReader_Num_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelReader, nullptr, "Num", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_Num_Statics::NiagaraDataChannelReader_eventNum_Parms), Z_Construct_UFunction_UNiagaraDataChannelReader_Num_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_Num_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataChannelReader_Num_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_Num_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataChannelReader_Num()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelReader_Num_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics
	{
		struct NiagaraDataChannelReader_eventReadBool_Parms
		{
			FName VarName;
			int32 Index;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadBool_Parms, VarName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadBool_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NiagaraDataChannelReader_eventReadBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraDataChannelReader_eventReadBool_Parms), &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::NewProp_VarName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "Niagara DataChannel" },
		{ "ModuleRelativePath", "Private/NiagaraDataChannelAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelReader, nullptr, "ReadBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::NiagaraDataChannelReader_eventReadBool_Parms), Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics
	{
		struct NiagaraDataChannelReader_eventReadFloat_Parms
		{
			FName VarName;
			int32 Index;
			double ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadFloat_Parms, VarName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadFloat_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::NewProp_VarName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "Niagara DataChannel" },
		{ "ModuleRelativePath", "Private/NiagaraDataChannelAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelReader, nullptr, "ReadFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::NiagaraDataChannelReader_eventReadFloat_Parms), Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics
	{
		struct NiagaraDataChannelReader_eventReadInt_Parms
		{
			FName VarName;
			int32 Index;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadInt_Parms, VarName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadInt_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::NewProp_VarName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "Niagara DataChannel" },
		{ "ModuleRelativePath", "Private/NiagaraDataChannelAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelReader, nullptr, "ReadInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::NiagaraDataChannelReader_eventReadInt_Parms), Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics
	{
		struct NiagaraDataChannelReader_eventReadLinearColor_Parms
		{
			FName VarName;
			int32 Index;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadLinearColor_Parms, VarName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadLinearColor_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadLinearColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::NewProp_VarName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "Niagara DataChannel" },
		{ "ModuleRelativePath", "Private/NiagaraDataChannelAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelReader, nullptr, "ReadLinearColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::NiagaraDataChannelReader_eventReadLinearColor_Parms), Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics
	{
		struct NiagaraDataChannelReader_eventReadQuat_Parms
		{
			FName VarName;
			int32 Index;
			FQuat ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadQuat_Parms, VarName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadQuat_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::NewProp_VarName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "Niagara DataChannel" },
		{ "ModuleRelativePath", "Private/NiagaraDataChannelAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelReader, nullptr, "ReadQuat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::NiagaraDataChannelReader_eventReadQuat_Parms), Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics
	{
		struct NiagaraDataChannelReader_eventReadVector_Parms
		{
			FName VarName;
			int32 Index;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadVector_Parms, VarName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadVector_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::NewProp_VarName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "Niagara DataChannel" },
		{ "ModuleRelativePath", "Private/NiagaraDataChannelAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelReader, nullptr, "ReadVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::NiagaraDataChannelReader_eventReadVector_Parms), Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics
	{
		struct NiagaraDataChannelReader_eventReadVector2D_Parms
		{
			FName VarName;
			int32 Index;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadVector2D_Parms, VarName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadVector2D_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadVector2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::NewProp_VarName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "Niagara DataChannel" },
		{ "ModuleRelativePath", "Private/NiagaraDataChannelAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelReader, nullptr, "ReadVector2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::NiagaraDataChannelReader_eventReadVector2D_Parms), Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics
	{
		struct NiagaraDataChannelReader_eventReadVector4_Parms
		{
			FName VarName;
			int32 Index;
			FVector4 ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadVector4_Parms, VarName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadVector4_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelReader_eventReadVector4_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::NewProp_VarName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "Niagara DataChannel" },
		{ "ModuleRelativePath", "Private/NiagaraDataChannelAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelReader, nullptr, "ReadVector4", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::NiagaraDataChannelReader_eventReadVector4_Parms), Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataChannelReader);
	UClass* Z_Construct_UClass_UNiagaraDataChannelReader_NoRegister()
	{
		return UNiagaraDataChannelReader::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataChannelReader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataChannelReader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraDataChannelReader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraDataChannelReader_InitAccess, "InitAccess" }, // 3241275725
		{ &Z_Construct_UFunction_UNiagaraDataChannelReader_Num, "Num" }, // 4278852915
		{ &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadBool, "ReadBool" }, // 2973121781
		{ &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadFloat, "ReadFloat" }, // 1611913369
		{ &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadInt, "ReadInt" }, // 3127220889
		{ &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadLinearColor, "ReadLinearColor" }, // 2488817182
		{ &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadQuat, "ReadQuat" }, // 2005234164
		{ &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector, "ReadVector" }, // 1241283055
		{ &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector2D, "ReadVector2D" }, // 1811680761
		{ &Z_Construct_UFunction_UNiagaraDataChannelReader_ReadVector4, "ReadVector4" }, // 926283097
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannelReader_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** \nInitial simple API for reading and writing data in a data channel from game code / BP. \nLikely to be replaced in the near future with a custom BP node and a helper struct.\n*/" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "NiagaraDataChannelAccessor.h" },
		{ "ModuleRelativePath", "Private/NiagaraDataChannelAccessor.h" },
		{ "ToolTip", "Initial simple API for reading and writing data in a data channel from game code / BP.\nLikely to be replaced in the near future with a custom BP node and a helper struct." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannelReader_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraDataChannelAccessor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataChannelReader_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataChannelReader, Owner), Z_Construct_UClass_UNiagaraDataChannelHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataChannelReader_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelReader_Statics::NewProp_Owner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataChannelReader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannelReader_Statics::NewProp_Owner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataChannelReader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataChannelReader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataChannelReader_Statics::ClassParams = {
		&UNiagaraDataChannelReader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNiagaraDataChannelReader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelReader_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataChannelReader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelReader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataChannelReader()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataChannelReader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataChannelReader.OuterSingleton, Z_Construct_UClass_UNiagaraDataChannelReader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataChannelReader.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataChannelReader>()
	{
		return UNiagaraDataChannelReader::StaticClass();
	}
	UNiagaraDataChannelReader::UNiagaraDataChannelReader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataChannelReader);
	UNiagaraDataChannelReader::~UNiagaraDataChannelReader() {}
	DEFINE_FUNCTION(UNiagaraDataChannelWriter::execWriteSpawnInfo)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FNiagaraSpawnInfo,Z_Param_InData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WriteSpawnInfo(Z_Param_VarName,Z_Param_Index,Z_Param_InData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataChannelWriter::execWriteBool)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL(Z_Param_InData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WriteBool(Z_Param_VarName,Z_Param_Index,Z_Param_InData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataChannelWriter::execWriteInt)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_InData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WriteInt(Z_Param_VarName,Z_Param_Index,Z_Param_InData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataChannelWriter::execWriteLinearColor)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FLinearColor,Z_Param_InData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WriteLinearColor(Z_Param_VarName,Z_Param_Index,Z_Param_InData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataChannelWriter::execWriteQuat)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FQuat,Z_Param_InData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WriteQuat(Z_Param_VarName,Z_Param_Index,Z_Param_InData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataChannelWriter::execWriteVector4)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FVector4,Z_Param_InData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WriteVector4(Z_Param_VarName,Z_Param_Index,Z_Param_InData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataChannelWriter::execWriteVector)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FVector,Z_Param_InData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WriteVector(Z_Param_VarName,Z_Param_Index,Z_Param_InData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataChannelWriter::execWriteVector2D)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FVector2D,Z_Param_InData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WriteVector2D(Z_Param_VarName,Z_Param_Index,Z_Param_InData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataChannelWriter::execWriteFloat)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_VarName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_InData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->WriteFloat(Z_Param_VarName,Z_Param_Index,Z_Param_InData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataChannelWriter::execNum)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->Num();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataChannelWriter::execInitWrite)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_OwningComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_GET_UBOOL(Z_Param_bVisibleToGame);
		P_GET_UBOOL(Z_Param_bVisibleToCPU);
		P_GET_UBOOL(Z_Param_bVisibleToGPU);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitWrite(Z_Param_OwningComponent,Z_Param_Count,Z_Param_bVisibleToGame,Z_Param_bVisibleToCPU,Z_Param_bVisibleToGPU);
		P_NATIVE_END;
	}
	void UNiagaraDataChannelWriter::StaticRegisterNativesUNiagaraDataChannelWriter()
	{
		UClass* Class = UNiagaraDataChannelWriter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitWrite", &UNiagaraDataChannelWriter::execInitWrite },
			{ "Num", &UNiagaraDataChannelWriter::execNum },
			{ "WriteBool", &UNiagaraDataChannelWriter::execWriteBool },
			{ "WriteFloat", &UNiagaraDataChannelWriter::execWriteFloat },
			{ "WriteInt", &UNiagaraDataChannelWriter::execWriteInt },
			{ "WriteLinearColor", &UNiagaraDataChannelWriter::execWriteLinearColor },
			{ "WriteQuat", &UNiagaraDataChannelWriter::execWriteQuat },
			{ "WriteSpawnInfo", &UNiagaraDataChannelWriter::execWriteSpawnInfo },
			{ "WriteVector", &UNiagaraDataChannelWriter::execWriteVector },
			{ "WriteVector2D", &UNiagaraDataChannelWriter::execWriteVector2D },
			{ "WriteVector4", &UNiagaraDataChannelWriter::execWriteVector4 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics
	{
		struct NiagaraDataChannelWriter_eventInitWrite_Parms
		{
			UActorComponent* OwningComponent;
			int32 Count;
			bool bVisibleToGame;
			bool bVisibleToCPU;
			bool bVisibleToGPU;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwningComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningComponent;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Count;
		static void NewProp_bVisibleToGame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleToGame;
		static void NewProp_bVisibleToCPU_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleToCPU;
		static void NewProp_bVisibleToGPU_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibleToGPU;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_OwningComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_OwningComponent = { "OwningComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventInitWrite_Parms, OwningComponent), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_OwningComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_OwningComponent_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventInitWrite_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_bVisibleToGame_SetBit(void* Obj)
	{
		((NiagaraDataChannelWriter_eventInitWrite_Parms*)Obj)->bVisibleToGame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_bVisibleToGame = { "bVisibleToGame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraDataChannelWriter_eventInitWrite_Parms), &Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_bVisibleToGame_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_bVisibleToCPU_SetBit(void* Obj)
	{
		((NiagaraDataChannelWriter_eventInitWrite_Parms*)Obj)->bVisibleToCPU = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_bVisibleToCPU = { "bVisibleToCPU", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraDataChannelWriter_eventInitWrite_Parms), &Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_bVisibleToCPU_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_bVisibleToGPU_SetBit(void* Obj)
	{
		((NiagaraDataChannelWriter_eventInitWrite_Parms*)Obj)->bVisibleToGPU = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_bVisibleToGPU = { "bVisibleToGPU", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraDataChannelWriter_eventInitWrite_Parms), &Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_bVisibleToGPU_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NiagaraDataChannelWriter_eventInitWrite_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraDataChannelWriter_eventInitWrite_Parms), &Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_OwningComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_Count,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_bVisibleToGame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_bVisibleToCPU,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_bVisibleToGPU,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Comment", "/** Call before each batch of writes to allocate the data we'll be writing to. */" },
		{ "CPP_Default_bVisibleToCPU", "true" },
		{ "CPP_Default_bVisibleToGame", "true" },
		{ "CPP_Default_bVisibleToGPU", "true" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Private/NiagaraDataChannelAccessor.h" },
		{ "ToolTip", "Call before each batch of writes to allocate the data we'll be writing to." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelWriter, nullptr, "InitWrite", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::NiagaraDataChannelWriter_eventInitWrite_Parms), Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataChannelWriter_Num_Statics
	{
		struct NiagaraDataChannelWriter_eventNum_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_Num_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelWriter_Num_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_Num_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelWriter_Num_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Private/NiagaraDataChannelAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelWriter_Num_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelWriter, nullptr, "Num", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_Num_Statics::NiagaraDataChannelWriter_eventNum_Parms), Z_Construct_UFunction_UNiagaraDataChannelWriter_Num_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_Num_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataChannelWriter_Num_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_Num_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataChannelWriter_Num()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelWriter_Num_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics
	{
		struct NiagaraDataChannelWriter_eventWriteBool_Parms
		{
			FName VarName;
			int32 Index;
			bool InData;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_InData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteBool_Parms, VarName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteBool_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::NewProp_InData_SetBit(void* Obj)
	{
		((NiagaraDataChannelWriter_eventWriteBool_Parms*)Obj)->InData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraDataChannelWriter_eventWriteBool_Parms), &Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::NewProp_InData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::NewProp_VarName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::NewProp_InData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Private/NiagaraDataChannelAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelWriter, nullptr, "WriteBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::NiagaraDataChannelWriter_eventWriteBool_Parms), Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics
	{
		struct NiagaraDataChannelWriter_eventWriteFloat_Parms
		{
			FName VarName;
			int32 Index;
			double InData;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_InData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteFloat_Parms, VarName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteFloat_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteFloat_Parms, InData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::NewProp_VarName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::NewProp_InData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Private/NiagaraDataChannelAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelWriter, nullptr, "WriteFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::NiagaraDataChannelWriter_eventWriteFloat_Parms), Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics
	{
		struct NiagaraDataChannelWriter_eventWriteInt_Parms
		{
			FName VarName;
			int32 Index;
			int32 InData;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteInt_Parms, VarName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteInt_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteInt_Parms, InData), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::NewProp_VarName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::NewProp_InData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Private/NiagaraDataChannelAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelWriter, nullptr, "WriteInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::NiagaraDataChannelWriter_eventWriteInt_Parms), Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics
	{
		struct NiagaraDataChannelWriter_eventWriteLinearColor_Parms
		{
			FName VarName;
			int32 Index;
			FLinearColor InData;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteLinearColor_Parms, VarName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteLinearColor_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteLinearColor_Parms, InData), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::NewProp_VarName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::NewProp_InData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Private/NiagaraDataChannelAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelWriter, nullptr, "WriteLinearColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::NiagaraDataChannelWriter_eventWriteLinearColor_Parms), Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics
	{
		struct NiagaraDataChannelWriter_eventWriteQuat_Parms
		{
			FName VarName;
			int32 Index;
			FQuat InData;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteQuat_Parms, VarName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteQuat_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteQuat_Parms, InData), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::NewProp_VarName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::NewProp_InData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Private/NiagaraDataChannelAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelWriter, nullptr, "WriteQuat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::NiagaraDataChannelWriter_eventWriteQuat_Parms), Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics
	{
		struct NiagaraDataChannelWriter_eventWriteSpawnInfo_Parms
		{
			FName VarName;
			int32 Index;
			FNiagaraSpawnInfo InData;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteSpawnInfo_Parms, VarName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteSpawnInfo_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteSpawnInfo_Parms, InData), Z_Construct_UScriptStruct_FNiagaraSpawnInfo, METADATA_PARAMS(nullptr, 0) }; // 2816672937
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::NewProp_VarName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::NewProp_InData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Private/NiagaraDataChannelAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelWriter, nullptr, "WriteSpawnInfo", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::NiagaraDataChannelWriter_eventWriteSpawnInfo_Parms), Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics
	{
		struct NiagaraDataChannelWriter_eventWriteVector_Parms
		{
			FName VarName;
			int32 Index;
			FVector InData;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteVector_Parms, VarName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteVector_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteVector_Parms, InData), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::NewProp_VarName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::NewProp_InData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Private/NiagaraDataChannelAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelWriter, nullptr, "WriteVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::NiagaraDataChannelWriter_eventWriteVector_Parms), Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics
	{
		struct NiagaraDataChannelWriter_eventWriteVector2D_Parms
		{
			FName VarName;
			int32 Index;
			FVector2D InData;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteVector2D_Parms, VarName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteVector2D_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteVector2D_Parms, InData), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::NewProp_VarName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::NewProp_InData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Private/NiagaraDataChannelAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelWriter, nullptr, "WriteVector2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::NiagaraDataChannelWriter_eventWriteVector2D_Parms), Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics
	{
		struct NiagaraDataChannelWriter_eventWriteVector4_Parms
		{
			FName VarName;
			int32 Index;
			FVector4 InData;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_VarName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::NewProp_VarName = { "VarName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteVector4_Parms, VarName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteVector4_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::NewProp_InData = { "InData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataChannelWriter_eventWriteVector4_Parms, InData), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::NewProp_VarName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::NewProp_InData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::Function_MetaDataParams[] = {
		{ "Category", "NiagaraDataChannel" },
		{ "Keywords", "niagara DataChannel" },
		{ "ModuleRelativePath", "Private/NiagaraDataChannelAccessor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataChannelWriter, nullptr, "WriteVector4", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::NiagaraDataChannelWriter_eventWriteVector4_Parms), Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataChannelWriter);
	UClass* Z_Construct_UClass_UNiagaraDataChannelWriter_NoRegister()
	{
		return UNiagaraDataChannelWriter::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataChannelWriter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraDataChannelWriter_InitWrite, "InitWrite" }, // 645905018
		{ &Z_Construct_UFunction_UNiagaraDataChannelWriter_Num, "Num" }, // 3241825723
		{ &Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteBool, "WriteBool" }, // 1008101164
		{ &Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteFloat, "WriteFloat" }, // 3554608771
		{ &Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteInt, "WriteInt" }, // 1743137170
		{ &Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteLinearColor, "WriteLinearColor" }, // 135790008
		{ &Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteQuat, "WriteQuat" }, // 3281095719
		{ &Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteSpawnInfo, "WriteSpawnInfo" }, // 3806094464
		{ &Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector, "WriteVector" }, // 1678241207
		{ &Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector2D, "WriteVector2D" }, // 3225706547
		{ &Z_Construct_UFunction_UNiagaraDataChannelWriter_WriteVector4, "WriteVector4" }, // 1484253637
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "NiagaraDataChannelAccessor.h" },
		{ "ModuleRelativePath", "Private/NiagaraDataChannelAccessor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Private/NiagaraDataChannelAccessor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataChannelWriter, Owner), Z_Construct_UClass_UNiagaraDataChannelHandler_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::NewProp_Owner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::NewProp_Owner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataChannelWriter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::ClassParams = {
		&UNiagaraDataChannelWriter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataChannelWriter()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataChannelWriter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataChannelWriter.OuterSingleton, Z_Construct_UClass_UNiagaraDataChannelWriter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataChannelWriter.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataChannelWriter>()
	{
		return UNiagaraDataChannelWriter::StaticClass();
	}
	UNiagaraDataChannelWriter::UNiagaraDataChannelWriter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataChannelWriter);
	UNiagaraDataChannelWriter::~UNiagaraDataChannelWriter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataChannelReader, UNiagaraDataChannelReader::StaticClass, TEXT("UNiagaraDataChannelReader"), &Z_Registration_Info_UClass_UNiagaraDataChannelReader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataChannelReader), 990889732U) },
		{ Z_Construct_UClass_UNiagaraDataChannelWriter, UNiagaraDataChannelWriter::StaticClass, TEXT("UNiagaraDataChannelWriter"), &Z_Registration_Info_UClass_UNiagaraDataChannelWriter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataChannelWriter), 4240802742U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_3762326266(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_NiagaraDataChannelAccessor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
