// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataInterfaceArrayFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceArrayFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayBoolValue)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayBoolValue(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayUInt8Value)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayUInt8Value(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayInt32Value)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayInt32Value(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayQuatValue)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayQuatValue(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayColorValue)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayColorValue(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVector4Value)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector4*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector4Value(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayPositionValue)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayPositionValue(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVectorValue)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVectorValue(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVector2DValue)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector2DValue(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayFloatValue)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayFloatValue(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayBoolValue)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL_REF(Z_Param_Out_Value);
		P_GET_UBOOL(Z_Param_bSizeToFit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayBoolValue(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index,Z_Param_Out_Value,Z_Param_bSizeToFit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayUInt8Value)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bSizeToFit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayUInt8Value(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index,Z_Param_Value,Z_Param_bSizeToFit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayInt32Value)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bSizeToFit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayInt32Value(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index,Z_Param_Value,Z_Param_bSizeToFit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayQuatValue)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Value);
		P_GET_UBOOL(Z_Param_bSizeToFit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayQuatValue(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index,Z_Param_Out_Value,Z_Param_bSizeToFit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayColorValue)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Value);
		P_GET_UBOOL(Z_Param_bSizeToFit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayColorValue(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index,Z_Param_Out_Value,Z_Param_bSizeToFit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVector4Value)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FVector4,Z_Param_Out_Value);
		P_GET_UBOOL(Z_Param_bSizeToFit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector4Value(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index,Z_Param_Out_Value,Z_Param_bSizeToFit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayPositionValue)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
		P_GET_UBOOL(Z_Param_bSizeToFit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayPositionValue(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index,Z_Param_Out_Value,Z_Param_bSizeToFit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVectorValue)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Value);
		P_GET_UBOOL(Z_Param_bSizeToFit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVectorValue(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index,Z_Param_Out_Value,Z_Param_bSizeToFit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVector2DValue)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Value);
		P_GET_UBOOL(Z_Param_bSizeToFit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector2DValue(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index,Z_Param_Out_Value,Z_Param_bSizeToFit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayFloatValue)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_UBOOL(Z_Param_bSizeToFit);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayFloatValue(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Index,Z_Param_Value,Z_Param_bSizeToFit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayBool)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<bool>*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayBool(Z_Param_NiagaraSystem,Z_Param_OverrideName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayUInt8)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayUInt8(Z_Param_NiagaraSystem,Z_Param_OverrideName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayInt32)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayInt32(Z_Param_NiagaraSystem,Z_Param_OverrideName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayQuat)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FQuat>*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayQuat(Z_Param_NiagaraSystem,Z_Param_OverrideName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayColor)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLinearColor>*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayColor(Z_Param_NiagaraSystem,Z_Param_OverrideName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVector4)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector4>*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector4(Z_Param_NiagaraSystem,Z_Param_OverrideName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayPosition)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayPosition(Z_Param_NiagaraSystem,Z_Param_OverrideName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVector)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector>*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector(Z_Param_NiagaraSystem,Z_Param_OverrideName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVector2D)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FVector2D>*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayVector2D(Z_Param_NiagaraSystem,Z_Param_OverrideName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayFloat)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<float>*)Z_Param__Result=UNiagaraDataInterfaceArrayFunctionLibrary::GetNiagaraArrayFloat(Z_Param_NiagaraSystem,Z_Param_OverrideName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayBool)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_TARRAY_REF(bool,Z_Param_Out_ArrayData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayBool(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Out_ArrayData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayUInt8)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_TARRAY_REF(int32,Z_Param_Out_ArrayData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayUInt8(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Out_ArrayData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayInt32)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_TARRAY_REF(int32,Z_Param_Out_ArrayData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayInt32(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Out_ArrayData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayQuat)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_TARRAY_REF(FQuat,Z_Param_Out_ArrayData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayQuat(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Out_ArrayData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayColor)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_ArrayData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayColor(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Out_ArrayData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVector4)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_TARRAY_REF(FVector4,Z_Param_Out_ArrayData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector4(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Out_ArrayData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayPosition)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_ArrayData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayPosition(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Out_ArrayData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVector)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_TARRAY_REF(FVector,Z_Param_Out_ArrayData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Out_ArrayData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVector2D)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_TARRAY_REF(FVector2D,Z_Param_Out_ArrayData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector2D(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Out_ArrayData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayFloat)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraSystem);
		P_GET_PROPERTY(FNameProperty,Z_Param_OverrideName);
		P_GET_TARRAY_REF(float,Z_Param_Out_ArrayData);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayFloat(Z_Param_NiagaraSystem,Z_Param_OverrideName,Z_Param_Out_ArrayData);
		P_NATIVE_END;
	}
	void UNiagaraDataInterfaceArrayFunctionLibrary::StaticRegisterNativesUNiagaraDataInterfaceArrayFunctionLibrary()
	{
		UClass* Class = UNiagaraDataInterfaceArrayFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNiagaraArrayBool", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayBool },
			{ "GetNiagaraArrayBoolValue", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayBoolValue },
			{ "GetNiagaraArrayColor", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayColor },
			{ "GetNiagaraArrayColorValue", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayColorValue },
			{ "GetNiagaraArrayFloat", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayFloat },
			{ "GetNiagaraArrayFloatValue", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayFloatValue },
			{ "GetNiagaraArrayInt32", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayInt32 },
			{ "GetNiagaraArrayInt32Value", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayInt32Value },
			{ "GetNiagaraArrayPosition", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayPosition },
			{ "GetNiagaraArrayPositionValue", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayPositionValue },
			{ "GetNiagaraArrayQuat", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayQuat },
			{ "GetNiagaraArrayQuatValue", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayQuatValue },
			{ "GetNiagaraArrayUInt8", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayUInt8 },
			{ "GetNiagaraArrayUInt8Value", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayUInt8Value },
			{ "GetNiagaraArrayVector", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVector },
			{ "GetNiagaraArrayVector2D", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVector2D },
			{ "GetNiagaraArrayVector2DValue", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVector2DValue },
			{ "GetNiagaraArrayVector4", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVector4 },
			{ "GetNiagaraArrayVector4Value", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVector4Value },
			{ "GetNiagaraArrayVectorValue", &UNiagaraDataInterfaceArrayFunctionLibrary::execGetNiagaraArrayVectorValue },
			{ "SetNiagaraArrayBool", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayBool },
			{ "SetNiagaraArrayBoolValue", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayBoolValue },
			{ "SetNiagaraArrayColor", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayColor },
			{ "SetNiagaraArrayColorValue", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayColorValue },
			{ "SetNiagaraArrayFloat", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayFloat },
			{ "SetNiagaraArrayFloatValue", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayFloatValue },
			{ "SetNiagaraArrayInt32", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayInt32 },
			{ "SetNiagaraArrayInt32Value", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayInt32Value },
			{ "SetNiagaraArrayPosition", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayPosition },
			{ "SetNiagaraArrayPositionValue", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayPositionValue },
			{ "SetNiagaraArrayQuat", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayQuat },
			{ "SetNiagaraArrayQuatValue", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayQuatValue },
			{ "SetNiagaraArrayUInt8", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayUInt8 },
			{ "SetNiagaraArrayUInt8Value", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayUInt8Value },
			{ "SetNiagaraArrayVector", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVector },
			{ "SetNiagaraArrayVector2D", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVector2D },
			{ "SetNiagaraArrayVector2DValue", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVector2DValue },
			{ "SetNiagaraArrayVector4", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVector4 },
			{ "SetNiagaraArrayVector4Value", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVector4Value },
			{ "SetNiagaraArrayVectorValue", &UNiagaraDataInterfaceArrayFunctionLibrary::execSetNiagaraArrayVectorValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayBool_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<bool> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayBool_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayBool_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayBool_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a copy of Niagara Bool Data. */" },
		{ "DisplayName", "Niagara Get Bool Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a copy of Niagara Bool Data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayBool_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayBoolValue_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayBoolValue_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayBoolValue_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayBoolValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayBoolValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayBoolValue_Parms), &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a single value within a Niagara Array Bool. */" },
		{ "DisplayName", "Niagara Get Bool Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a single value within a Niagara Array Bool." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayBoolValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayBoolValue_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayColor_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<FLinearColor> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayColor_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayColor_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayColor_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a copy of Niagara FLinearColor Data. */" },
		{ "DisplayName", "Niagara Get Color Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a copy of Niagara FLinearColor Data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayColor_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayColorValue_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			FLinearColor ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayColorValue_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayColorValue_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayColorValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayColorValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a single value within a Niagara Array FLinearColor. */" },
		{ "DisplayName", "Niagara Get Color Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a single value within a Niagara Array FLinearColor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayColorValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayColorValue_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayFloat_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<float> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayFloat_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayFloat_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayFloat_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a copy of Niagara Float Data. */" },
		{ "DisplayName", "Niagara Get Float Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a copy of Niagara Float Data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayFloat_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayFloatValue_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayFloatValue_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayFloatValue_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayFloatValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayFloatValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a single value within a Niagara Array Float. */" },
		{ "DisplayName", "Niagara Get Float Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a single value within a Niagara Array Float." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayFloatValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayFloatValue_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayInt32_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<int32> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayInt32_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayInt32_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayInt32_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a copy of Niagara Int32 Data. */" },
		{ "DisplayName", "Niagara Get Int32 Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a copy of Niagara Int32 Data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayInt32", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayInt32_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayInt32Value_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayInt32Value_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayInt32Value_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayInt32Value_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayInt32Value_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a single value within a Niagara Array Int32. */" },
		{ "DisplayName", "Niagara Get Int32 Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a single value within a Niagara Array Int32." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayInt32Value", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayInt32Value_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayPosition_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<FVector> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayPosition_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayPosition_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayPosition_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a copy of Niagara Position Data. */" },
		{ "DisplayName", "Niagara Get Position Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a copy of Niagara Position Data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayPosition_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayPositionValue_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayPositionValue_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayPositionValue_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayPositionValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayPositionValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a single value within a Niagara Array Position. */" },
		{ "DisplayName", "Niagara Get Position Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a single value within a Niagara Array Position." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayPositionValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayPositionValue_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayQuat_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<FQuat> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayQuat_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayQuat_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayQuat_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a copy of Niagara FQuat Data. */" },
		{ "DisplayName", "Niagara Get Quaternion Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a copy of Niagara FQuat Data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayQuat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayQuat_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayQuatValue_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			FQuat ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayQuatValue_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayQuatValue_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayQuatValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayQuatValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a single value within a Niagara Array FQuat. */" },
		{ "DisplayName", "Niagara Get Quaternion Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a single value within a Niagara Array FQuat." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayQuatValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayQuatValue_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayUInt8_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<int32> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayUInt8_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayUInt8_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayUInt8_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a copy of Niagara UInt8 Data. */" },
		{ "DisplayName", "Niagara Get UInt8 Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a copy of Niagara UInt8 Data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayUInt8", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayUInt8_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayUInt8Value_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayUInt8Value_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayUInt8Value_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayUInt8Value_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayUInt8Value_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a single value within a Niagara Array UInt8. */" },
		{ "DisplayName", "Niagara Get UInt8 Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a single value within a Niagara Array UInt8." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayUInt8Value", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayUInt8Value_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<FVector> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a copy of Niagara FVector Data. */" },
		{ "DisplayName", "Niagara Get Vector Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a copy of Niagara FVector Data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector2D_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<FVector2D> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector2D_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector2D_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector2D_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a copy of Niagara FVector2D Data. */" },
		{ "DisplayName", "Niagara Get Vector 2D Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a copy of Niagara FVector2D Data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayVector2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector2D_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector2DValue_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			FVector2D ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector2DValue_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector2DValue_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector2DValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector2DValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a single value within a Niagara Array FVector2D. */" },
		{ "DisplayName", "Niagara Get Vector 2D Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a single value within a Niagara Array FVector2D." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayVector2DValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector2DValue_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector4_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<FVector4> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector4_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector4_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector4_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a copy of Niagara FVector4 Data. */" },
		{ "DisplayName", "Niagara Get Vector 4 Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a copy of Niagara FVector4 Data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayVector4", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector4_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector4Value_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			FVector4 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector4Value_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector4Value_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector4Value_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector4Value_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a single value within a Niagara Array FVector4. */" },
		{ "DisplayName", "Niagara Get Vector 4 Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a single value within a Niagara Array FVector4." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayVector4Value", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVector4Value_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVectorValue_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVectorValue_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVectorValue_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVectorValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVectorValue_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Gets a single value within a Niagara Array FVector. */" },
		{ "DisplayName", "Niagara Get Vector Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Gets a single value within a Niagara Array FVector." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "GetNiagaraArrayVectorValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventGetNiagaraArrayVectorValue_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayBool_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<bool> ArrayData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ArrayData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayBool_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayBool_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NewProp_ArrayData_Inner = { "ArrayData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NewProp_ArrayData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NewProp_ArrayData = { "ArrayData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayBool_Parms, ArrayData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NewProp_ArrayData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NewProp_ArrayData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NewProp_ArrayData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NewProp_ArrayData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets Niagara Array Bool Data. */" },
		{ "DisplayName", "Niagara Set Bool Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets Niagara Array Bool Data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayBool_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayBoolValue_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			bool Value;
			bool bSizeToFit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static void NewProp_bSizeToFit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSizeToFit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayBoolValue_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayBoolValue_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayBoolValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayBoolValue_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayBoolValue_Parms), &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_Value_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_bSizeToFit_SetBit(void* Obj)
	{
		((NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayBoolValue_Parms*)Obj)->bSizeToFit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_bSizeToFit = { "bSizeToFit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayBoolValue_Parms), &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_bSizeToFit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NewProp_bSizeToFit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a single value within a Niagara Array Bool. */" },
		{ "DisplayName", "Niagara Set Bool Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets a single value within a Niagara Array Bool." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayBoolValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayBoolValue_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayColor_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<FLinearColor> ArrayData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayColor_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayColor_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NewProp_ArrayData_Inner = { "ArrayData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NewProp_ArrayData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NewProp_ArrayData = { "ArrayData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayColor_Parms, ArrayData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NewProp_ArrayData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NewProp_ArrayData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NewProp_ArrayData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NewProp_ArrayData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets Niagara Array FLinearColor Data. */" },
		{ "DisplayName", "Niagara Set Color Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets Niagara Array FLinearColor Data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayColor_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayColorValue_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			FLinearColor Value;
			bool bSizeToFit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_bSizeToFit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSizeToFit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayColorValue_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayColorValue_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayColorValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayColorValue_Parms, Value), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_bSizeToFit_SetBit(void* Obj)
	{
		((NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayColorValue_Parms*)Obj)->bSizeToFit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_bSizeToFit = { "bSizeToFit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayColorValue_Parms), &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_bSizeToFit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NewProp_bSizeToFit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a single value within a Niagara Array FLinearColor. */" },
		{ "DisplayName", "Niagara Set Color Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets a single value within a Niagara Array FLinearColor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayColorValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayColorValue_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayFloat_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<float> ArrayData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ArrayData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayFloat_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayFloat_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NewProp_ArrayData_Inner = { "ArrayData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NewProp_ArrayData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NewProp_ArrayData = { "ArrayData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayFloat_Parms, ArrayData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NewProp_ArrayData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NewProp_ArrayData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NewProp_ArrayData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NewProp_ArrayData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets Niagara Array Float Data. */" },
		{ "DisplayName", "Niagara Set Float Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets Niagara Array Float Data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayFloat_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayFloatValue_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			float Value;
			bool bSizeToFit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static void NewProp_bSizeToFit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSizeToFit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayFloatValue_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayFloatValue_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayFloatValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayFloatValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_bSizeToFit_SetBit(void* Obj)
	{
		((NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayFloatValue_Parms*)Obj)->bSizeToFit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_bSizeToFit = { "bSizeToFit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayFloatValue_Parms), &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_bSizeToFit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NewProp_bSizeToFit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a single value within a Niagara Array Float. */" },
		{ "DisplayName", "Niagara Set Float Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets a single value within a Niagara Array Float." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayFloatValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayFloatValue_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayInt32_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<int32> ArrayData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayInt32_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayInt32_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NewProp_ArrayData_Inner = { "ArrayData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NewProp_ArrayData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NewProp_ArrayData = { "ArrayData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayInt32_Parms, ArrayData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NewProp_ArrayData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NewProp_ArrayData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NewProp_ArrayData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NewProp_ArrayData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets Niagara Array Int32 Data. */" },
		{ "DisplayName", "Niagara Set Int32 Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets Niagara Array Int32 Data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayInt32", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayInt32_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayInt32Value_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			int32 Value;
			bool bSizeToFit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bSizeToFit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSizeToFit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayInt32Value_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayInt32Value_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayInt32Value_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayInt32Value_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_bSizeToFit_SetBit(void* Obj)
	{
		((NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayInt32Value_Parms*)Obj)->bSizeToFit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_bSizeToFit = { "bSizeToFit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayInt32Value_Parms), &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_bSizeToFit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NewProp_bSizeToFit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a single value within a Niagara Array Int32. */" },
		{ "DisplayName", "Niagara Set Int32 Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets a single value within a Niagara Array Int32." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayInt32Value", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayInt32Value_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayPosition_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<FVector> ArrayData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayPosition_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayPosition_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Statics::NewProp_ArrayData_Inner = { "ArrayData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Statics::NewProp_ArrayData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Statics::NewProp_ArrayData = { "ArrayData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayPosition_Parms, ArrayData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Statics::NewProp_ArrayData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Statics::NewProp_ArrayData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Statics::NewProp_ArrayData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Statics::NewProp_ArrayData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets Niagara Array FVector Data. */" },
		{ "DisplayName", "Niagara Set Position Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets Niagara Array FVector Data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayPosition_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayPositionValue_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			FVector Value;
			bool bSizeToFit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_bSizeToFit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSizeToFit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayPositionValue_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayPositionValue_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayPositionValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayPositionValue_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Statics::NewProp_bSizeToFit_SetBit(void* Obj)
	{
		((NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayPositionValue_Parms*)Obj)->bSizeToFit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Statics::NewProp_bSizeToFit = { "bSizeToFit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayPositionValue_Parms), &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Statics::NewProp_bSizeToFit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Statics::NewProp_bSizeToFit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "DisplayName", "Niagara Set Position Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayPositionValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayPositionValue_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayQuat_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<FQuat> ArrayData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayQuat_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayQuat_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NewProp_ArrayData_Inner = { "ArrayData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NewProp_ArrayData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NewProp_ArrayData = { "ArrayData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayQuat_Parms, ArrayData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NewProp_ArrayData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NewProp_ArrayData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NewProp_ArrayData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NewProp_ArrayData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets Niagara Array FQuat Data. */" },
		{ "DisplayName", "Niagara Set Quaternion Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets Niagara Array FQuat Data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayQuat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayQuat_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayQuatValue_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			FQuat Value;
			bool bSizeToFit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_bSizeToFit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSizeToFit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayQuatValue_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayQuatValue_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayQuatValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayQuatValue_Parms, Value), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_bSizeToFit_SetBit(void* Obj)
	{
		((NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayQuatValue_Parms*)Obj)->bSizeToFit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_bSizeToFit = { "bSizeToFit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayQuatValue_Parms), &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_bSizeToFit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NewProp_bSizeToFit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a single value within a Niagara Array FQuat. */" },
		{ "DisplayName", "Niagara Set Quaternion Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets a single value within a Niagara Array FQuat." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayQuatValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayQuatValue_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayUInt8_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<int32> ArrayData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ArrayData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayUInt8_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayUInt8_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Statics::NewProp_ArrayData_Inner = { "ArrayData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Statics::NewProp_ArrayData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Statics::NewProp_ArrayData = { "ArrayData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayUInt8_Parms, ArrayData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Statics::NewProp_ArrayData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Statics::NewProp_ArrayData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Statics::NewProp_ArrayData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Statics::NewProp_ArrayData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets Niagara Array UInt8 Data. */" },
		{ "DisplayName", "Niagara Set UInt8 Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets Niagara Array UInt8 Data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayUInt8", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayUInt8_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayUInt8Value_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			int32 Value;
			bool bSizeToFit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static void NewProp_bSizeToFit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSizeToFit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayUInt8Value_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayUInt8Value_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayUInt8Value_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayUInt8Value_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Statics::NewProp_bSizeToFit_SetBit(void* Obj)
	{
		((NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayUInt8Value_Parms*)Obj)->bSizeToFit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Statics::NewProp_bSizeToFit = { "bSizeToFit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayUInt8Value_Parms), &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Statics::NewProp_bSizeToFit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Statics::NewProp_bSizeToFit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a single value within a Niagara Array UInt8. */" },
		{ "DisplayName", "Niagara Set UInt8 Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets a single value within a Niagara Array UInt8." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayUInt8Value", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayUInt8Value_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<FVector> ArrayData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NewProp_ArrayData_Inner = { "ArrayData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NewProp_ArrayData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NewProp_ArrayData = { "ArrayData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector_Parms, ArrayData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NewProp_ArrayData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NewProp_ArrayData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NewProp_ArrayData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NewProp_ArrayData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets Niagara Array FVector Data. */" },
		{ "DisplayName", "Niagara Set Vector Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets Niagara Array FVector Data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector2D_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<FVector2D> ArrayData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector2D_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector2D_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NewProp_ArrayData_Inner = { "ArrayData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NewProp_ArrayData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NewProp_ArrayData = { "ArrayData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector2D_Parms, ArrayData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NewProp_ArrayData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NewProp_ArrayData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NewProp_ArrayData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NewProp_ArrayData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets Niagara Array FVector2D Data. */" },
		{ "DisplayName", "Niagara Set Vector 2D Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets Niagara Array FVector2D Data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayVector2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector2D_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector2DValue_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			FVector2D Value;
			bool bSizeToFit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_bSizeToFit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSizeToFit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector2DValue_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector2DValue_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector2DValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector2DValue_Parms, Value), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_bSizeToFit_SetBit(void* Obj)
	{
		((NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector2DValue_Parms*)Obj)->bSizeToFit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_bSizeToFit = { "bSizeToFit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector2DValue_Parms), &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_bSizeToFit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NewProp_bSizeToFit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a single value within a Niagara Array FVector2D. */" },
		{ "DisplayName", "Niagara Set Vector 2D Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets a single value within a Niagara Array FVector2D." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayVector2DValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector2DValue_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector4_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			TArray<FVector4> ArrayData;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ArrayData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrayData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ArrayData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector4_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector4_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NewProp_ArrayData_Inner = { "ArrayData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NewProp_ArrayData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NewProp_ArrayData = { "ArrayData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector4_Parms, ArrayData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NewProp_ArrayData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NewProp_ArrayData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NewProp_ArrayData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NewProp_ArrayData,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets Niagara Array FVector4 Data. */" },
		{ "DisplayName", "Niagara Set Vector 4 Array" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets Niagara Array FVector4 Data." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayVector4", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector4_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector4Value_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			FVector4 Value;
			bool bSizeToFit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_bSizeToFit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSizeToFit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector4Value_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector4Value_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector4Value_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector4Value_Parms, Value), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_bSizeToFit_SetBit(void* Obj)
	{
		((NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector4Value_Parms*)Obj)->bSizeToFit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_bSizeToFit = { "bSizeToFit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector4Value_Parms), &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_bSizeToFit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NewProp_bSizeToFit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a single value within a Niagara Array FVector4. */" },
		{ "DisplayName", "Niagara Set Vector 4 Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets a single value within a Niagara Array FVector4." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayVector4Value", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVector4Value_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics
	{
		struct NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVectorValue_Parms
		{
			UNiagaraComponent* NiagaraSystem;
			FName OverrideName;
			int32 Index;
			FVector Value;
			bool bSizeToFit;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraSystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraSystem;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OverrideName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static void NewProp_bSizeToFit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSizeToFit;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_NiagaraSystem_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_NiagaraSystem = { "NiagaraSystem", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVectorValue_Parms, NiagaraSystem), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_NiagaraSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_NiagaraSystem_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_OverrideName = { "OverrideName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVectorValue_Parms, OverrideName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVectorValue_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVectorValue_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_Value_MetaData)) };
	void Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_bSizeToFit_SetBit(void* Obj)
	{
		((NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVectorValue_Parms*)Obj)->bSizeToFit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_bSizeToFit = { "bSizeToFit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVectorValue_Parms), &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_bSizeToFit_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_NiagaraSystem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_OverrideName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_Value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NewProp_bSizeToFit,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Sets a single value within a Niagara Array FVector. */" },
		{ "DisplayName", "Niagara Set Vector Array Value" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "Sets a single value within a Niagara Array FVector." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, nullptr, "SetNiagaraArrayVectorValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::NiagaraDataInterfaceArrayFunctionLibrary_eventSetNiagaraArrayVectorValue_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceArrayFunctionLibrary);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary_NoRegister()
	{
		return UNiagaraDataInterfaceArrayFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBool, "GetNiagaraArrayBool" }, // 1910156495
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayBoolValue, "GetNiagaraArrayBoolValue" }, // 2186936705
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColor, "GetNiagaraArrayColor" }, // 3543789130
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayColorValue, "GetNiagaraArrayColorValue" }, // 2790840860
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloat, "GetNiagaraArrayFloat" }, // 2997385280
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayFloatValue, "GetNiagaraArrayFloatValue" }, // 3253718292
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32, "GetNiagaraArrayInt32" }, // 1600816180
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayInt32Value, "GetNiagaraArrayInt32Value" }, // 627788267
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPosition, "GetNiagaraArrayPosition" }, // 38374344
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayPositionValue, "GetNiagaraArrayPositionValue" }, // 3954851087
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuat, "GetNiagaraArrayQuat" }, // 4266407724
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayQuatValue, "GetNiagaraArrayQuatValue" }, // 2331957708
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8, "GetNiagaraArrayUInt8" }, // 3824082599
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayUInt8Value, "GetNiagaraArrayUInt8Value" }, // 3001670333
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector, "GetNiagaraArrayVector" }, // 885196919
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2D, "GetNiagaraArrayVector2D" }, // 240141105
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector2DValue, "GetNiagaraArrayVector2DValue" }, // 1105439556
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4, "GetNiagaraArrayVector4" }, // 957140609
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVector4Value, "GetNiagaraArrayVector4Value" }, // 4197375306
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_GetNiagaraArrayVectorValue, "GetNiagaraArrayVectorValue" }, // 4248121832
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBool, "SetNiagaraArrayBool" }, // 3485895168
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayBoolValue, "SetNiagaraArrayBoolValue" }, // 2631196956
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColor, "SetNiagaraArrayColor" }, // 2645120867
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayColorValue, "SetNiagaraArrayColorValue" }, // 651505961
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloat, "SetNiagaraArrayFloat" }, // 2816245098
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayFloatValue, "SetNiagaraArrayFloatValue" }, // 3041042278
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32, "SetNiagaraArrayInt32" }, // 3249888659
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayInt32Value, "SetNiagaraArrayInt32Value" }, // 3190816271
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPosition, "SetNiagaraArrayPosition" }, // 1141117200
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayPositionValue, "SetNiagaraArrayPositionValue" }, // 3339358965
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuat, "SetNiagaraArrayQuat" }, // 1342268693
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayQuatValue, "SetNiagaraArrayQuatValue" }, // 3894852520
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8, "SetNiagaraArrayUInt8" }, // 3249716696
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayUInt8Value, "SetNiagaraArrayUInt8Value" }, // 2614594299
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector, "SetNiagaraArrayVector" }, // 4117543910
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2D, "SetNiagaraArrayVector2D" }, // 2885796086
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector2DValue, "SetNiagaraArrayVector2DValue" }, // 234808847
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4, "SetNiagaraArrayVector4" }, // 1299668463
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVector4Value, "SetNiagaraArrayVector4Value" }, // 108704151
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceArrayFunctionLibrary_SetNiagaraArrayVectorValue, "SetNiagaraArrayVectorValue" }, // 3898880704
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* C++ and Blueprint library for accessing array types\n*/" },
		{ "IncludePath", "NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceArrayFunctionLibrary.h" },
		{ "ToolTip", "C++ and Blueprint library for accessing array types" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceArrayFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary_Statics::ClassParams = {
		&UNiagaraDataInterfaceArrayFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFunctionLibrary.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFunctionLibrary.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceArrayFunctionLibrary>()
	{
		return UNiagaraDataInterfaceArrayFunctionLibrary::StaticClass();
	}
	UNiagaraDataInterfaceArrayFunctionLibrary::UNiagaraDataInterfaceArrayFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceArrayFunctionLibrary);
	UNiagaraDataInterfaceArrayFunctionLibrary::~UNiagaraDataInterfaceArrayFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, UNiagaraDataInterfaceArrayFunctionLibrary::StaticClass, TEXT("UNiagaraDataInterfaceArrayFunctionLibrary"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceArrayFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceArrayFunctionLibrary), 4038279120U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_2539821788(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceArrayFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
