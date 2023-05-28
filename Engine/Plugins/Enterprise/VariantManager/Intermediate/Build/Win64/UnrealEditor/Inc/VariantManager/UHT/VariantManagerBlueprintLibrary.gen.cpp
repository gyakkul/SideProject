// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VariantManagerBlueprintLibrary.h"
#include "Variant.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVariantManagerBlueprintLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VariantManager();
	VARIANTMANAGER_API UClass* Z_Construct_UClass_UVariantManagerBlueprintLibrary();
	VARIANTMANAGER_API UClass* Z_Construct_UClass_UVariantManagerBlueprintLibrary_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ALevelVariantSetsActor_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ULevelVariantSets_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UPropertyValue_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UVariant_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UVariantSet_NoRegister();
	VARIANTMANAGERCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FVariantDependency();
// End Cross Module References
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execGetValueIntPoint)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_Property);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=UVariantManagerBlueprintLibrary::GetValueIntPoint(Z_Param_Property);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execSetValueIntPoint)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_Property);
		P_GET_STRUCT(FIntPoint,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVariantManagerBlueprintLibrary::SetValueIntPoint(Z_Param_Property,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execGetValueVector2D)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_Property);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=UVariantManagerBlueprintLibrary::GetValueVector2D(Z_Param_Property);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execSetValueVector2D)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_Property);
		P_GET_STRUCT(FVector2D,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVariantManagerBlueprintLibrary::SetValueVector2D(Z_Param_Property,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execGetValueVector4)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_Property);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector4*)Z_Param__Result=UVariantManagerBlueprintLibrary::GetValueVector4(Z_Param_Property);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execSetValueVector4)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_Property);
		P_GET_STRUCT(FVector4,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVariantManagerBlueprintLibrary::SetValueVector4(Z_Param_Property,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execGetValueQuat)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_Property);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UVariantManagerBlueprintLibrary::GetValueQuat(Z_Param_Property);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execSetValueQuat)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_Property);
		P_GET_STRUCT(FQuat,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVariantManagerBlueprintLibrary::SetValueQuat(Z_Param_Property,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execGetValueVector)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_Property);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UVariantManagerBlueprintLibrary::GetValueVector(Z_Param_Property);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execSetValueVector)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_Property);
		P_GET_STRUCT(FVector,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVariantManagerBlueprintLibrary::SetValueVector(Z_Param_Property,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execGetValueLinearColor)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_Property);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=UVariantManagerBlueprintLibrary::GetValueLinearColor(Z_Param_Property);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execSetValueLinearColor)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_Property);
		P_GET_STRUCT(FLinearColor,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVariantManagerBlueprintLibrary::SetValueLinearColor(Z_Param_Property,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execGetValueColor)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_Property);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FColor*)Z_Param__Result=UVariantManagerBlueprintLibrary::GetValueColor(Z_Param_Property);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execSetValueColor)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_Property);
		P_GET_STRUCT(FColor,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVariantManagerBlueprintLibrary::SetValueColor(Z_Param_Property,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execGetValueRotator)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_Property);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=UVariantManagerBlueprintLibrary::GetValueRotator(Z_Param_Property);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execSetValueRotator)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_Property);
		P_GET_STRUCT(FRotator,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVariantManagerBlueprintLibrary::SetValueRotator(Z_Param_Property,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execGetValueString)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_Property);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UVariantManagerBlueprintLibrary::GetValueString(Z_Param_Property);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execSetValueString)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_Property);
		P_GET_PROPERTY(FStrProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVariantManagerBlueprintLibrary::SetValueString(Z_Param_Property,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execGetValueObject)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_Property);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UVariantManagerBlueprintLibrary::GetValueObject(Z_Param_Property);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execSetValueObject)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_Property);
		P_GET_OBJECT(UObject,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVariantManagerBlueprintLibrary::SetValueObject(Z_Param_Property,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execGetValueFloat)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_Property);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UVariantManagerBlueprintLibrary::GetValueFloat(Z_Param_Property);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execSetValueFloat)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_Property);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVariantManagerBlueprintLibrary::SetValueFloat(Z_Param_Property,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execGetValueInt)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_Property);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UVariantManagerBlueprintLibrary::GetValueInt(Z_Param_Property);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execSetValueInt)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_Property);
		P_GET_PROPERTY(FIntProperty,Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVariantManagerBlueprintLibrary::SetValueInt(Z_Param_Property,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execGetValueBool)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_Property);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVariantManagerBlueprintLibrary::GetValueBool(Z_Param_Property);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execSetValueBool)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_Property);
		P_GET_UBOOL(Z_Param_InValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVariantManagerBlueprintLibrary::SetValueBool(Z_Param_Property,Z_Param_InValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execGetPropertyTypeString)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_PropVal);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UVariantManagerBlueprintLibrary::GetPropertyTypeString(Z_Param_PropVal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execApply)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_PropVal);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVariantManagerBlueprintLibrary::Apply(Z_Param_PropVal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execRecord)
	{
		P_GET_OBJECT(UPropertyValue,Z_Param_PropVal);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVariantManagerBlueprintLibrary::Record(Z_Param_PropVal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execRemoveCapturedPropertyByName)
	{
		P_GET_OBJECT(UVariant,Z_Param_Variant);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVariantManagerBlueprintLibrary::RemoveCapturedPropertyByName(Z_Param_Variant,Z_Param_Actor,Z_Param_PropertyPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execRemoveActorBindingByName)
	{
		P_GET_OBJECT(UVariant,Z_Param_Variant);
		P_GET_PROPERTY(FStrProperty,Z_Param_ActorName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVariantManagerBlueprintLibrary::RemoveActorBindingByName(Z_Param_Variant,Z_Param_ActorName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execRemoveVariantByName)
	{
		P_GET_OBJECT(UVariantSet,Z_Param_VariantSet);
		P_GET_PROPERTY(FStrProperty,Z_Param_VariantName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVariantManagerBlueprintLibrary::RemoveVariantByName(Z_Param_VariantSet,Z_Param_VariantName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execRemoveVariantSetByName)
	{
		P_GET_OBJECT(ULevelVariantSets,Z_Param_LevelVariantSets);
		P_GET_PROPERTY(FStrProperty,Z_Param_VariantSetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVariantManagerBlueprintLibrary::RemoveVariantSetByName(Z_Param_LevelVariantSets,Z_Param_VariantSetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execRemoveCapturedProperty)
	{
		P_GET_OBJECT(UVariant,Z_Param_Variant);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT(UPropertyValue,Z_Param_Property);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVariantManagerBlueprintLibrary::RemoveCapturedProperty(Z_Param_Variant,Z_Param_Actor,Z_Param_Property);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execRemoveActorBinding)
	{
		P_GET_OBJECT(UVariant,Z_Param_Variant);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVariantManagerBlueprintLibrary::RemoveActorBinding(Z_Param_Variant,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execRemoveVariant)
	{
		P_GET_OBJECT(UVariantSet,Z_Param_VariantSet);
		P_GET_OBJECT(UVariant,Z_Param_Variant);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVariantManagerBlueprintLibrary::RemoveVariant(Z_Param_VariantSet,Z_Param_Variant);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execRemoveVariantSet)
	{
		P_GET_OBJECT(ULevelVariantSets,Z_Param_LevelVariantSets);
		P_GET_OBJECT(UVariantSet,Z_Param_VariantSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVariantManagerBlueprintLibrary::RemoveVariantSet(Z_Param_LevelVariantSets,Z_Param_VariantSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execGetCapturedProperties)
	{
		P_GET_OBJECT(UVariant,Z_Param_Variant);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UPropertyValue*>*)Z_Param__Result=UVariantManagerBlueprintLibrary::GetCapturedProperties(Z_Param_Variant,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execDeleteDependency)
	{
		P_GET_OBJECT(UVariant,Z_Param_Variant);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVariantManagerBlueprintLibrary::DeleteDependency(Z_Param_Variant,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execSetDependency)
	{
		P_GET_OBJECT(UVariant,Z_Param_Variant);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FVariantDependency,Z_Param_Out_Dependency);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVariantManagerBlueprintLibrary::SetDependency(Z_Param_Variant,Z_Param_Index,Z_Param_Out_Dependency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execAddDependency)
	{
		P_GET_OBJECT(UVariant,Z_Param_Variant);
		P_GET_STRUCT_REF(FVariantDependency,Z_Param_Out_Dependency);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UVariantManagerBlueprintLibrary::AddDependency(Z_Param_Variant,Z_Param_Out_Dependency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execCaptureProperty)
	{
		P_GET_OBJECT(UVariant,Z_Param_Variant);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FStrProperty,Z_Param_PropertyPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UPropertyValue**)Z_Param__Result=UVariantManagerBlueprintLibrary::CaptureProperty(Z_Param_Variant,Z_Param_Actor,Z_Param_PropertyPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execAddActorBinding)
	{
		P_GET_OBJECT(UVariant,Z_Param_Variant);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVariantManagerBlueprintLibrary::AddActorBinding(Z_Param_Variant,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execAddVariant)
	{
		P_GET_OBJECT(UVariantSet,Z_Param_VariantSet);
		P_GET_OBJECT(UVariant,Z_Param_Variant);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVariantManagerBlueprintLibrary::AddVariant(Z_Param_VariantSet,Z_Param_Variant);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execAddVariantSet)
	{
		P_GET_OBJECT(ULevelVariantSets,Z_Param_LevelVariantSets);
		P_GET_OBJECT(UVariantSet,Z_Param_VariantSet);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVariantManagerBlueprintLibrary::AddVariantSet(Z_Param_LevelVariantSets,Z_Param_VariantSet);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execGetCapturableProperties)
	{
		P_GET_OBJECT(UObject,Z_Param_ActorOrClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UVariantManagerBlueprintLibrary::GetCapturableProperties(Z_Param_ActorOrClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execCreateLevelVariantSetsActor)
	{
		P_GET_OBJECT(ULevelVariantSets,Z_Param_LevelVariantSetsAsset);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ALevelVariantSetsActor**)Z_Param__Result=UVariantManagerBlueprintLibrary::CreateLevelVariantSetsActor(Z_Param_LevelVariantSetsAsset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVariantManagerBlueprintLibrary::execCreateLevelVariantSetsAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetName);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ULevelVariantSets**)Z_Param__Result=UVariantManagerBlueprintLibrary::CreateLevelVariantSetsAsset(Z_Param_AssetName,Z_Param_AssetPath);
		P_NATIVE_END;
	}
	void UVariantManagerBlueprintLibrary::StaticRegisterNativesUVariantManagerBlueprintLibrary()
	{
		UClass* Class = UVariantManagerBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActorBinding", &UVariantManagerBlueprintLibrary::execAddActorBinding },
			{ "AddDependency", &UVariantManagerBlueprintLibrary::execAddDependency },
			{ "AddVariant", &UVariantManagerBlueprintLibrary::execAddVariant },
			{ "AddVariantSet", &UVariantManagerBlueprintLibrary::execAddVariantSet },
			{ "Apply", &UVariantManagerBlueprintLibrary::execApply },
			{ "CaptureProperty", &UVariantManagerBlueprintLibrary::execCaptureProperty },
			{ "CreateLevelVariantSetsActor", &UVariantManagerBlueprintLibrary::execCreateLevelVariantSetsActor },
			{ "CreateLevelVariantSetsAsset", &UVariantManagerBlueprintLibrary::execCreateLevelVariantSetsAsset },
			{ "DeleteDependency", &UVariantManagerBlueprintLibrary::execDeleteDependency },
			{ "GetCapturableProperties", &UVariantManagerBlueprintLibrary::execGetCapturableProperties },
			{ "GetCapturedProperties", &UVariantManagerBlueprintLibrary::execGetCapturedProperties },
			{ "GetPropertyTypeString", &UVariantManagerBlueprintLibrary::execGetPropertyTypeString },
			{ "GetValueBool", &UVariantManagerBlueprintLibrary::execGetValueBool },
			{ "GetValueColor", &UVariantManagerBlueprintLibrary::execGetValueColor },
			{ "GetValueFloat", &UVariantManagerBlueprintLibrary::execGetValueFloat },
			{ "GetValueInt", &UVariantManagerBlueprintLibrary::execGetValueInt },
			{ "GetValueIntPoint", &UVariantManagerBlueprintLibrary::execGetValueIntPoint },
			{ "GetValueLinearColor", &UVariantManagerBlueprintLibrary::execGetValueLinearColor },
			{ "GetValueObject", &UVariantManagerBlueprintLibrary::execGetValueObject },
			{ "GetValueQuat", &UVariantManagerBlueprintLibrary::execGetValueQuat },
			{ "GetValueRotator", &UVariantManagerBlueprintLibrary::execGetValueRotator },
			{ "GetValueString", &UVariantManagerBlueprintLibrary::execGetValueString },
			{ "GetValueVector", &UVariantManagerBlueprintLibrary::execGetValueVector },
			{ "GetValueVector2D", &UVariantManagerBlueprintLibrary::execGetValueVector2D },
			{ "GetValueVector4", &UVariantManagerBlueprintLibrary::execGetValueVector4 },
			{ "Record", &UVariantManagerBlueprintLibrary::execRecord },
			{ "RemoveActorBinding", &UVariantManagerBlueprintLibrary::execRemoveActorBinding },
			{ "RemoveActorBindingByName", &UVariantManagerBlueprintLibrary::execRemoveActorBindingByName },
			{ "RemoveCapturedProperty", &UVariantManagerBlueprintLibrary::execRemoveCapturedProperty },
			{ "RemoveCapturedPropertyByName", &UVariantManagerBlueprintLibrary::execRemoveCapturedPropertyByName },
			{ "RemoveVariant", &UVariantManagerBlueprintLibrary::execRemoveVariant },
			{ "RemoveVariantByName", &UVariantManagerBlueprintLibrary::execRemoveVariantByName },
			{ "RemoveVariantSet", &UVariantManagerBlueprintLibrary::execRemoveVariantSet },
			{ "RemoveVariantSetByName", &UVariantManagerBlueprintLibrary::execRemoveVariantSetByName },
			{ "SetDependency", &UVariantManagerBlueprintLibrary::execSetDependency },
			{ "SetValueBool", &UVariantManagerBlueprintLibrary::execSetValueBool },
			{ "SetValueColor", &UVariantManagerBlueprintLibrary::execSetValueColor },
			{ "SetValueFloat", &UVariantManagerBlueprintLibrary::execSetValueFloat },
			{ "SetValueInt", &UVariantManagerBlueprintLibrary::execSetValueInt },
			{ "SetValueIntPoint", &UVariantManagerBlueprintLibrary::execSetValueIntPoint },
			{ "SetValueLinearColor", &UVariantManagerBlueprintLibrary::execSetValueLinearColor },
			{ "SetValueObject", &UVariantManagerBlueprintLibrary::execSetValueObject },
			{ "SetValueQuat", &UVariantManagerBlueprintLibrary::execSetValueQuat },
			{ "SetValueRotator", &UVariantManagerBlueprintLibrary::execSetValueRotator },
			{ "SetValueString", &UVariantManagerBlueprintLibrary::execSetValueString },
			{ "SetValueVector", &UVariantManagerBlueprintLibrary::execSetValueVector },
			{ "SetValueVector2D", &UVariantManagerBlueprintLibrary::execSetValueVector2D },
			{ "SetValueVector4", &UVariantManagerBlueprintLibrary::execSetValueVector4 },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddActorBinding_Statics
	{
		struct VariantManagerBlueprintLibrary_eventAddActorBinding_Parms
		{
			UVariant* Variant;
			AActor* Actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Variant;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddActorBinding_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventAddActorBinding_Parms, Variant), Z_Construct_UClass_UVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddActorBinding_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventAddActorBinding_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddActorBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddActorBinding_Statics::NewProp_Variant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddActorBinding_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddActorBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager" },
		{ "Comment", "// Binds the Actor to the Variant, internally creating a VariantObjectBinding\n" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Binds the Actor to the Variant, internally creating a VariantObjectBinding" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddActorBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "AddActorBinding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddActorBinding_Statics::VariantManagerBlueprintLibrary_eventAddActorBinding_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddActorBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddActorBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddActorBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddActorBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddActorBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddActorBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddDependency_Statics
	{
		struct VariantManagerBlueprintLibrary_eventAddDependency_Parms
		{
			UVariant* Variant;
			FVariantDependency Dependency;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Variant;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Dependency;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddDependency_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventAddDependency_Parms, Variant), Z_Construct_UClass_UVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddDependency_Statics::NewProp_Dependency = { "Dependency", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventAddDependency_Parms, Dependency), Z_Construct_UScriptStruct_FVariantDependency, METADATA_PARAMS(nullptr, 0) }; // 3362229139
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddDependency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventAddDependency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddDependency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddDependency_Statics::NewProp_Variant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddDependency_Statics::NewProp_Dependency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddDependency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddDependency_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "AddDependency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddDependency_Statics::VariantManagerBlueprintLibrary_eventAddDependency_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddDependency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddDependency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddDependency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddDependency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddDependency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariant_Statics
	{
		struct VariantManagerBlueprintLibrary_eventAddVariant_Parms
		{
			UVariantSet* VariantSet;
			UVariant* Variant;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VariantSet;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Variant;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariant_Statics::NewProp_VariantSet = { "VariantSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventAddVariant_Parms, VariantSet), Z_Construct_UClass_UVariantSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariant_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventAddVariant_Parms, Variant), Z_Construct_UClass_UVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariant_Statics::NewProp_VariantSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariant_Statics::NewProp_Variant,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariant_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager" },
		{ "Comment", "// Adds Variant to the VariantSet's list of Variants\n" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Adds Variant to the VariantSet's list of Variants" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "AddVariant", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariant_Statics::VariantManagerBlueprintLibrary_eventAddVariant_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariantSet_Statics
	{
		struct VariantManagerBlueprintLibrary_eventAddVariantSet_Parms
		{
			ULevelVariantSets* LevelVariantSets;
			UVariantSet* VariantSet;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelVariantSets;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VariantSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariantSet_Statics::NewProp_LevelVariantSets = { "LevelVariantSets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventAddVariantSet_Parms, LevelVariantSets), Z_Construct_UClass_ULevelVariantSets_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariantSet_Statics::NewProp_VariantSet = { "VariantSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventAddVariantSet_Parms, VariantSet), Z_Construct_UClass_UVariantSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariantSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariantSet_Statics::NewProp_LevelVariantSets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariantSet_Statics::NewProp_VariantSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariantSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager" },
		{ "Comment", "// Adds VariantSet to the LevelVariantSets' list of VariantSets\n" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Adds VariantSet to the LevelVariantSets' list of VariantSets" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariantSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "AddVariantSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariantSet_Statics::VariantManagerBlueprintLibrary_eventAddVariantSet_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariantSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariantSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariantSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariantSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariantSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariantSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_Apply_Statics
	{
		struct VariantManagerBlueprintLibrary_eventApply_Parms
		{
			UPropertyValue* PropVal;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PropVal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_Apply_Statics::NewProp_PropVal = { "PropVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventApply_Parms, PropVal), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_Apply_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_Apply_Statics::NewProp_PropVal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_Apply_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager" },
		{ "Comment", "// Applies the recorded data from PropVal to the actor from which it was captured\n" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Applies the recorded data from PropVal to the actor from which it was captured" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_Apply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "Apply", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_Apply_Statics::VariantManagerBlueprintLibrary_eventApply_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_Apply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_Apply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_Apply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_Apply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_Apply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_Apply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CaptureProperty_Statics
	{
		struct VariantManagerBlueprintLibrary_eventCaptureProperty_Parms
		{
			UVariant* Variant;
			AActor* Actor;
			FString PropertyPath;
			UPropertyValue* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Variant;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyPath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CaptureProperty_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventCaptureProperty_Parms, Variant), Z_Construct_UClass_UVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CaptureProperty_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventCaptureProperty_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CaptureProperty_Statics::NewProp_PropertyPath = { "PropertyPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventCaptureProperty_Parms, PropertyPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CaptureProperty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventCaptureProperty_Parms, ReturnValue), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CaptureProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CaptureProperty_Statics::NewProp_Variant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CaptureProperty_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CaptureProperty_Statics::NewProp_PropertyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CaptureProperty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CaptureProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager" },
		{ "Comment", "// Finds the actor binding to Actor within Variant and tries capturing a property with PropertyPath\n// Returns the captured UPropertyValue if succeeded or nullptr if it failed.\n" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Finds the actor binding to Actor within Variant and tries capturing a property with PropertyPath\nReturns the captured UPropertyValue if succeeded or nullptr if it failed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CaptureProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "CaptureProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CaptureProperty_Statics::VariantManagerBlueprintLibrary_eventCaptureProperty_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CaptureProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CaptureProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CaptureProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CaptureProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CaptureProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CaptureProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsActor_Statics
	{
		struct VariantManagerBlueprintLibrary_eventCreateLevelVariantSetsActor_Parms
		{
			ULevelVariantSets* LevelVariantSetsAsset;
			ALevelVariantSetsActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelVariantSetsAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsActor_Statics::NewProp_LevelVariantSetsAsset = { "LevelVariantSetsAsset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventCreateLevelVariantSetsActor_Parms, LevelVariantSetsAsset), Z_Construct_UClass_ULevelVariantSets_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventCreateLevelVariantSetsActor_Parms, ReturnValue), Z_Construct_UClass_ALevelVariantSetsActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsActor_Statics::NewProp_LevelVariantSetsAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager" },
		{ "Comment", "// Creates a new ALevelVariantSetsActor in the current scene and assigns LevelVariantSetsAsset to it\n" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ToolTip", "Creates a new ALevelVariantSetsActor in the current scene and assigns LevelVariantSetsAsset to it" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "CreateLevelVariantSetsActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsActor_Statics::VariantManagerBlueprintLibrary_eventCreateLevelVariantSetsActor_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsAsset_Statics
	{
		struct VariantManagerBlueprintLibrary_eventCreateLevelVariantSetsAsset_Parms
		{
			FString AssetName;
			FString AssetPath;
			ULevelVariantSets* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetPath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsAsset_Statics::NewProp_AssetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsAsset_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventCreateLevelVariantSetsAsset_Parms, AssetName), METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsAsset_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsAsset_Statics::NewProp_AssetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsAsset_Statics::NewProp_AssetPath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsAsset_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventCreateLevelVariantSetsAsset_Parms, AssetPath), METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsAsset_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsAsset_Statics::NewProp_AssetPath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventCreateLevelVariantSetsAsset_Parms, ReturnValue), Z_Construct_UClass_ULevelVariantSets_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsAsset_Statics::NewProp_AssetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsAsset_Statics::NewProp_AssetPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager" },
		{ "Comment", "// Creates a new LevelVariantSetsAsset named AssetName (e.g. 'MyLevelVariantSets') in the content path AssetPath (e.g. '/Game')\n" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ToolTip", "Creates a new LevelVariantSetsAsset named AssetName (e.g. 'MyLevelVariantSets') in the content path AssetPath (e.g. '/Game')" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "CreateLevelVariantSetsAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsAsset_Statics::VariantManagerBlueprintLibrary_eventCreateLevelVariantSetsAsset_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_DeleteDependency_Statics
	{
		struct VariantManagerBlueprintLibrary_eventDeleteDependency_Parms
		{
			UVariant* Variant;
			int32 Index;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Variant;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_DeleteDependency_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventDeleteDependency_Parms, Variant), Z_Construct_UClass_UVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_DeleteDependency_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventDeleteDependency_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_DeleteDependency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_DeleteDependency_Statics::NewProp_Variant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_DeleteDependency_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_DeleteDependency_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_DeleteDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "DeleteDependency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_DeleteDependency_Statics::VariantManagerBlueprintLibrary_eventDeleteDependency_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_DeleteDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_DeleteDependency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_DeleteDependency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_DeleteDependency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_DeleteDependency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_DeleteDependency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturableProperties_Statics
	{
		struct VariantManagerBlueprintLibrary_eventGetCapturableProperties_Parms
		{
			UObject* ActorOrClass;
			TArray<FString> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorOrClass;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturableProperties_Statics::NewProp_ActorOrClass = { "ActorOrClass", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetCapturableProperties_Parms, ActorOrClass), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturableProperties_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturableProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetCapturableProperties_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturableProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturableProperties_Statics::NewProp_ActorOrClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturableProperties_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturableProperties_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturableProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager" },
		{ "Comment", "// Returns a property path for all the properties we can capture for an actor. Will also\n// handle receiving the actor's class instead.\n" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ToolTip", "Returns a property path for all the properties we can capture for an actor. Will also\nhandle receiving the actor's class instead." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturableProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "GetCapturableProperties", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturableProperties_Statics::VariantManagerBlueprintLibrary_eventGetCapturableProperties_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturableProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturableProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturableProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturableProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturableProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturableProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturedProperties_Statics
	{
		struct VariantManagerBlueprintLibrary_eventGetCapturedProperties_Parms
		{
			UVariant* Variant;
			AActor* Actor;
			TArray<UPropertyValue*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Variant;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturedProperties_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetCapturedProperties_Parms, Variant), Z_Construct_UClass_UVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturedProperties_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetCapturedProperties_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturedProperties_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturedProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetCapturedProperties_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturedProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturedProperties_Statics::NewProp_Variant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturedProperties_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturedProperties_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturedProperties_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturedProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager" },
		{ "Comment", "// Returns which properties have been captured for this actor in Variant\n" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Returns which properties have been captured for this actor in Variant" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturedProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "GetCapturedProperties", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturedProperties_Statics::VariantManagerBlueprintLibrary_eventGetCapturedProperties_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturedProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturedProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturedProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturedProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturedProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturedProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetPropertyTypeString_Statics
	{
		struct VariantManagerBlueprintLibrary_eventGetPropertyTypeString_Parms
		{
			UPropertyValue* PropVal;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PropVal;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetPropertyTypeString_Statics::NewProp_PropVal = { "PropVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetPropertyTypeString_Parms, PropVal), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetPropertyTypeString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetPropertyTypeString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetPropertyTypeString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetPropertyTypeString_Statics::NewProp_PropVal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetPropertyTypeString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetPropertyTypeString_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager" },
		{ "Comment", "// This allows the scripting language to get the type of the C++ property its dealing with\n" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "This allows the scripting language to get the type of the C++ property its dealing with" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetPropertyTypeString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "GetPropertyTypeString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetPropertyTypeString_Statics::VariantManagerBlueprintLibrary_eventGetPropertyTypeString_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetPropertyTypeString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetPropertyTypeString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetPropertyTypeString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetPropertyTypeString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetPropertyTypeString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetPropertyTypeString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueBool_Statics
	{
		struct VariantManagerBlueprintLibrary_eventGetValueBool_Parms
		{
			UPropertyValue* Property;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueBool_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetValueBool_Parms, Property), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueBool_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VariantManagerBlueprintLibrary_eventGetValueBool_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueBool_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VariantManagerBlueprintLibrary_eventGetValueBool_Parms), &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueBool_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueBool_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueBool_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager|PropertyAccessors" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "GetValueBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueBool_Statics::VariantManagerBlueprintLibrary_eventGetValueBool_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueColor_Statics
	{
		struct VariantManagerBlueprintLibrary_eventGetValueColor_Parms
		{
			UPropertyValue* Property;
			FColor ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueColor_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetValueColor_Parms, Property), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetValueColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueColor_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager|PropertyAccessors" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "GetValueColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueColor_Statics::VariantManagerBlueprintLibrary_eventGetValueColor_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueFloat_Statics
	{
		struct VariantManagerBlueprintLibrary_eventGetValueFloat_Parms
		{
			UPropertyValue* Property;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueFloat_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetValueFloat_Parms, Property), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetValueFloat_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueFloat_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueFloat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager|PropertyAccessors" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "GetValueFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueFloat_Statics::VariantManagerBlueprintLibrary_eventGetValueFloat_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueInt_Statics
	{
		struct VariantManagerBlueprintLibrary_eventGetValueInt_Parms
		{
			UPropertyValue* Property;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueInt_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetValueInt_Parms, Property), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueInt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetValueInt_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueInt_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueInt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager|PropertyAccessors" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "GetValueInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueInt_Statics::VariantManagerBlueprintLibrary_eventGetValueInt_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueIntPoint_Statics
	{
		struct VariantManagerBlueprintLibrary_eventGetValueIntPoint_Parms
		{
			UPropertyValue* Property;
			FIntPoint ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueIntPoint_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetValueIntPoint_Parms, Property), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueIntPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetValueIntPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueIntPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueIntPoint_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueIntPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueIntPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager|PropertyAccessors" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueIntPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "GetValueIntPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueIntPoint_Statics::VariantManagerBlueprintLibrary_eventGetValueIntPoint_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueIntPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueIntPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueIntPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueIntPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueIntPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueIntPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueLinearColor_Statics
	{
		struct VariantManagerBlueprintLibrary_eventGetValueLinearColor_Parms
		{
			UPropertyValue* Property;
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueLinearColor_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetValueLinearColor_Parms, Property), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueLinearColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetValueLinearColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueLinearColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueLinearColor_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueLinearColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueLinearColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager|PropertyAccessors" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueLinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "GetValueLinearColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueLinearColor_Statics::VariantManagerBlueprintLibrary_eventGetValueLinearColor_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueLinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueLinearColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueLinearColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueLinearColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueLinearColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueLinearColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueObject_Statics
	{
		struct VariantManagerBlueprintLibrary_eventGetValueObject_Parms
		{
			UPropertyValue* Property;
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueObject_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetValueObject_Parms, Property), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetValueObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueObject_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager|PropertyAccessors" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "GetValueObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueObject_Statics::VariantManagerBlueprintLibrary_eventGetValueObject_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueQuat_Statics
	{
		struct VariantManagerBlueprintLibrary_eventGetValueQuat_Parms
		{
			UPropertyValue* Property;
			FQuat ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueQuat_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetValueQuat_Parms, Property), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueQuat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetValueQuat_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueQuat_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueQuat_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager|PropertyAccessors" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "GetValueQuat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueQuat_Statics::VariantManagerBlueprintLibrary_eventGetValueQuat_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueRotator_Statics
	{
		struct VariantManagerBlueprintLibrary_eventGetValueRotator_Parms
		{
			UPropertyValue* Property;
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueRotator_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetValueRotator_Parms, Property), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueRotator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetValueRotator_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueRotator_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueRotator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager|PropertyAccessors" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "GetValueRotator", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueRotator_Statics::VariantManagerBlueprintLibrary_eventGetValueRotator_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueString_Statics
	{
		struct VariantManagerBlueprintLibrary_eventGetValueString_Parms
		{
			UPropertyValue* Property;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueString_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetValueString_Parms, Property), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetValueString_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueString_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueString_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueString_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager|PropertyAccessors" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "GetValueString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueString_Statics::VariantManagerBlueprintLibrary_eventGetValueString_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector_Statics
	{
		struct VariantManagerBlueprintLibrary_eventGetValueVector_Parms
		{
			UPropertyValue* Property;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetValueVector_Parms, Property), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetValueVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager|PropertyAccessors" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "GetValueVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector_Statics::VariantManagerBlueprintLibrary_eventGetValueVector_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector2D_Statics
	{
		struct VariantManagerBlueprintLibrary_eventGetValueVector2D_Parms
		{
			UPropertyValue* Property;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector2D_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetValueVector2D_Parms, Property), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetValueVector2D_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector2D_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager|PropertyAccessors" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "GetValueVector2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector2D_Statics::VariantManagerBlueprintLibrary_eventGetValueVector2D_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector4_Statics
	{
		struct VariantManagerBlueprintLibrary_eventGetValueVector4_Parms
		{
			UPropertyValue* Property;
			FVector4 ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector4_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetValueVector4_Parms, Property), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector4_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventGetValueVector4_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector4_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector4_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector4_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector4_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager|PropertyAccessors" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "GetValueVector4", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector4_Statics::VariantManagerBlueprintLibrary_eventGetValueVector4_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_Record_Statics
	{
		struct VariantManagerBlueprintLibrary_eventRecord_Parms
		{
			UPropertyValue* PropVal;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PropVal;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_Record_Statics::NewProp_PropVal = { "PropVal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventRecord_Parms, PropVal), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_Record_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_Record_Statics::NewProp_PropVal,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_Record_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager" },
		{ "Comment", "// Records new data for PropVal from the actor from which it was captured\n" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Records new data for PropVal from the actor from which it was captured" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_Record_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "Record", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_Record_Statics::VariantManagerBlueprintLibrary_eventRecord_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_Record_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_Record_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_Record_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_Record_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_Record()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_Record_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBinding_Statics
	{
		struct VariantManagerBlueprintLibrary_eventRemoveActorBinding_Parms
		{
			UVariant* Variant;
			AActor* Actor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Variant;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBinding_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventRemoveActorBinding_Parms, Variant), Z_Construct_UClass_UVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBinding_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventRemoveActorBinding_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBinding_Statics::NewProp_Variant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBinding_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager" },
		{ "Comment", "// Removes an actor binding to Actor from Variant, if it exists\n" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Removes an actor binding to Actor from Variant, if it exists" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "RemoveActorBinding", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBinding_Statics::VariantManagerBlueprintLibrary_eventRemoveActorBinding_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBindingByName_Statics
	{
		struct VariantManagerBlueprintLibrary_eventRemoveActorBindingByName_Parms
		{
			UVariant* Variant;
			FString ActorName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Variant;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ActorName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBindingByName_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventRemoveActorBindingByName_Parms, Variant), Z_Construct_UClass_UVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBindingByName_Statics::NewProp_ActorName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBindingByName_Statics::NewProp_ActorName = { "ActorName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventRemoveActorBindingByName_Parms, ActorName), METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBindingByName_Statics::NewProp_ActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBindingByName_Statics::NewProp_ActorName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBindingByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBindingByName_Statics::NewProp_Variant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBindingByName_Statics::NewProp_ActorName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBindingByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager" },
		{ "Comment", "// Looks for an actor binding to an actor with ActorLabel within Variant and removes it, if it exists\n" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Looks for an actor binding to an actor with ActorLabel within Variant and removes it, if it exists" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBindingByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "RemoveActorBindingByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBindingByName_Statics::VariantManagerBlueprintLibrary_eventRemoveActorBindingByName_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBindingByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBindingByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBindingByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBindingByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBindingByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBindingByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedProperty_Statics
	{
		struct VariantManagerBlueprintLibrary_eventRemoveCapturedProperty_Parms
		{
			UVariant* Variant;
			AActor* Actor;
			UPropertyValue* Property;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Variant;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedProperty_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventRemoveCapturedProperty_Parms, Variant), Z_Construct_UClass_UVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedProperty_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventRemoveCapturedProperty_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedProperty_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventRemoveCapturedProperty_Parms, Property), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedProperty_Statics::NewProp_Variant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedProperty_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedProperty_Statics::NewProp_Property,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager" },
		{ "Comment", "// Removes a property capture from an actor binding within Variant, if it exists\n" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Removes a property capture from an actor binding within Variant, if it exists" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "RemoveCapturedProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedProperty_Statics::VariantManagerBlueprintLibrary_eventRemoveCapturedProperty_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedPropertyByName_Statics
	{
		struct VariantManagerBlueprintLibrary_eventRemoveCapturedPropertyByName_Parms
		{
			UVariant* Variant;
			AActor* Actor;
			FString PropertyPath;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Variant;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertyPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedPropertyByName_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventRemoveCapturedPropertyByName_Parms, Variant), Z_Construct_UClass_UVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedPropertyByName_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventRemoveCapturedPropertyByName_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedPropertyByName_Statics::NewProp_PropertyPath = { "PropertyPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventRemoveCapturedPropertyByName_Parms, PropertyPath), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedPropertyByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedPropertyByName_Statics::NewProp_Variant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedPropertyByName_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedPropertyByName_Statics::NewProp_PropertyPath,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedPropertyByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager" },
		{ "Comment", "// Removes property capture with PropertyPath from Actor's binding within Variant, if it exists\n" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Removes property capture with PropertyPath from Actor's binding within Variant, if it exists" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedPropertyByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "RemoveCapturedPropertyByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedPropertyByName_Statics::VariantManagerBlueprintLibrary_eventRemoveCapturedPropertyByName_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedPropertyByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedPropertyByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedPropertyByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedPropertyByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedPropertyByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedPropertyByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariant_Statics
	{
		struct VariantManagerBlueprintLibrary_eventRemoveVariant_Parms
		{
			UVariantSet* VariantSet;
			UVariant* Variant;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VariantSet;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Variant;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariant_Statics::NewProp_VariantSet = { "VariantSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventRemoveVariant_Parms, VariantSet), Z_Construct_UClass_UVariantSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariant_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventRemoveVariant_Parms, Variant), Z_Construct_UClass_UVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariant_Statics::NewProp_VariantSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariant_Statics::NewProp_Variant,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariant_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager" },
		{ "Comment", "// Removes Variant from VariantSet, if that is its parent\n" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Removes Variant from VariantSet, if that is its parent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "RemoveVariant", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariant_Statics::VariantManagerBlueprintLibrary_eventRemoveVariant_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantByName_Statics
	{
		struct VariantManagerBlueprintLibrary_eventRemoveVariantByName_Parms
		{
			UVariantSet* VariantSet;
			FString VariantName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VariantSet;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariantName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariantName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantByName_Statics::NewProp_VariantSet = { "VariantSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventRemoveVariantByName_Parms, VariantSet), Z_Construct_UClass_UVariantSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantByName_Statics::NewProp_VariantName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantByName_Statics::NewProp_VariantName = { "VariantName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventRemoveVariantByName_Parms, VariantName), METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantByName_Statics::NewProp_VariantName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantByName_Statics::NewProp_VariantName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantByName_Statics::NewProp_VariantSet,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantByName_Statics::NewProp_VariantName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager" },
		{ "Comment", "// Looks for a variant with VariantName within VariantSet and removes it, if it exists\n" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Looks for a variant with VariantName within VariantSet and removes it, if it exists" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "RemoveVariantByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantByName_Statics::VariantManagerBlueprintLibrary_eventRemoveVariantByName_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSet_Statics
	{
		struct VariantManagerBlueprintLibrary_eventRemoveVariantSet_Parms
		{
			ULevelVariantSets* LevelVariantSets;
			UVariantSet* VariantSet;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelVariantSets;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VariantSet;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSet_Statics::NewProp_LevelVariantSets = { "LevelVariantSets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventRemoveVariantSet_Parms, LevelVariantSets), Z_Construct_UClass_ULevelVariantSets_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSet_Statics::NewProp_VariantSet = { "VariantSet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventRemoveVariantSet_Parms, VariantSet), Z_Construct_UClass_UVariantSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSet_Statics::NewProp_LevelVariantSets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSet_Statics::NewProp_VariantSet,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager" },
		{ "Comment", "// Removes VariantSet from LevelVariantSets, if that is its parent\n" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Removes VariantSet from LevelVariantSets, if that is its parent" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "RemoveVariantSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSet_Statics::VariantManagerBlueprintLibrary_eventRemoveVariantSet_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSetByName_Statics
	{
		struct VariantManagerBlueprintLibrary_eventRemoveVariantSetByName_Parms
		{
			ULevelVariantSets* LevelVariantSets;
			FString VariantSetName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelVariantSets;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariantSetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariantSetName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSetByName_Statics::NewProp_LevelVariantSets = { "LevelVariantSets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventRemoveVariantSetByName_Parms, LevelVariantSets), Z_Construct_UClass_ULevelVariantSets_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSetByName_Statics::NewProp_VariantSetName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSetByName_Statics::NewProp_VariantSetName = { "VariantSetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventRemoveVariantSetByName_Parms, VariantSetName), METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSetByName_Statics::NewProp_VariantSetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSetByName_Statics::NewProp_VariantSetName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSetByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSetByName_Statics::NewProp_LevelVariantSets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSetByName_Statics::NewProp_VariantSetName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSetByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager" },
		{ "Comment", "// Looks for a variant set with VariantSetName within LevelVariantSets and removes it, if it exists\n" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
		{ "ToolTip", "Looks for a variant set with VariantSetName within LevelVariantSets and removes it, if it exists" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSetByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "RemoveVariantSetByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSetByName_Statics::VariantManagerBlueprintLibrary_eventRemoveVariantSetByName_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSetByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSetByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSetByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSetByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSetByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSetByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetDependency_Statics
	{
		struct VariantManagerBlueprintLibrary_eventSetDependency_Parms
		{
			UVariant* Variant;
			int32 Index;
			FVariantDependency Dependency;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Variant;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Dependency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetDependency_Statics::NewProp_Variant = { "Variant", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventSetDependency_Parms, Variant), Z_Construct_UClass_UVariant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetDependency_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventSetDependency_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetDependency_Statics::NewProp_Dependency = { "Dependency", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventSetDependency_Parms, Dependency), Z_Construct_UScriptStruct_FVariantDependency, METADATA_PARAMS(nullptr, 0) }; // 3362229139
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetDependency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetDependency_Statics::NewProp_Variant,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetDependency_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetDependency_Statics::NewProp_Dependency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetDependency_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetDependency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "SetDependency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetDependency_Statics::VariantManagerBlueprintLibrary_eventSetDependency_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetDependency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetDependency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetDependency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetDependency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetDependency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetDependency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueBool_Statics
	{
		struct VariantManagerBlueprintLibrary_eventSetValueBool_Parms
		{
			UPropertyValue* Property;
			bool InValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static void NewProp_InValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueBool_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventSetValueBool_Parms, Property), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueBool_Statics::NewProp_InValue_SetBit(void* Obj)
	{
		((VariantManagerBlueprintLibrary_eventSetValueBool_Parms*)Obj)->InValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueBool_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VariantManagerBlueprintLibrary_eventSetValueBool_Parms), &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueBool_Statics::NewProp_InValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueBool_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueBool_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager|PropertyAccessors" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "SetValueBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueBool_Statics::VariantManagerBlueprintLibrary_eventSetValueBool_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueColor_Statics
	{
		struct VariantManagerBlueprintLibrary_eventSetValueColor_Parms
		{
			UPropertyValue* Property;
			FColor InValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueColor_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventSetValueColor_Parms, Property), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventSetValueColor_Parms, InValue), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueColor_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueColor_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager|PropertyAccessors" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "SetValueColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueColor_Statics::VariantManagerBlueprintLibrary_eventSetValueColor_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueFloat_Statics
	{
		struct VariantManagerBlueprintLibrary_eventSetValueFloat_Parms
		{
			UPropertyValue* Property;
			float InValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueFloat_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventSetValueFloat_Parms, Property), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueFloat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventSetValueFloat_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueFloat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueFloat_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueFloat_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueFloat_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager|PropertyAccessors" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueFloat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "SetValueFloat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueFloat_Statics::VariantManagerBlueprintLibrary_eventSetValueFloat_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueFloat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueFloat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueFloat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueFloat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueFloat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueInt_Statics
	{
		struct VariantManagerBlueprintLibrary_eventSetValueInt_Parms
		{
			UPropertyValue* Property;
			int32 InValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UECodeGen_Private::FIntPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueInt_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventSetValueInt_Parms, Property), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueInt_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventSetValueInt_Parms, InValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueInt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueInt_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueInt_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueInt_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager|PropertyAccessors" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueInt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "SetValueInt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueInt_Statics::VariantManagerBlueprintLibrary_eventSetValueInt_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueInt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueInt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueInt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueInt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueInt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueInt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueIntPoint_Statics
	{
		struct VariantManagerBlueprintLibrary_eventSetValueIntPoint_Parms
		{
			UPropertyValue* Property;
			FIntPoint InValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueIntPoint_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventSetValueIntPoint_Parms, Property), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueIntPoint_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventSetValueIntPoint_Parms, InValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueIntPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueIntPoint_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueIntPoint_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueIntPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager|PropertyAccessors" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueIntPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "SetValueIntPoint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueIntPoint_Statics::VariantManagerBlueprintLibrary_eventSetValueIntPoint_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueIntPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueIntPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueIntPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueIntPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueIntPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueIntPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueLinearColor_Statics
	{
		struct VariantManagerBlueprintLibrary_eventSetValueLinearColor_Parms
		{
			UPropertyValue* Property;
			FLinearColor InValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueLinearColor_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventSetValueLinearColor_Parms, Property), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueLinearColor_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventSetValueLinearColor_Parms, InValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueLinearColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueLinearColor_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueLinearColor_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueLinearColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager|PropertyAccessors" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueLinearColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "SetValueLinearColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueLinearColor_Statics::VariantManagerBlueprintLibrary_eventSetValueLinearColor_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueLinearColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueLinearColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueLinearColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueLinearColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueLinearColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueLinearColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueObject_Statics
	{
		struct VariantManagerBlueprintLibrary_eventSetValueObject_Parms
		{
			UPropertyValue* Property;
			UObject* InValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueObject_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventSetValueObject_Parms, Property), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueObject_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventSetValueObject_Parms, InValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueObject_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueObject_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager|PropertyAccessors" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "SetValueObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueObject_Statics::VariantManagerBlueprintLibrary_eventSetValueObject_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueQuat_Statics
	{
		struct VariantManagerBlueprintLibrary_eventSetValueQuat_Parms
		{
			UPropertyValue* Property;
			FQuat InValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueQuat_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventSetValueQuat_Parms, Property), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueQuat_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventSetValueQuat_Parms, InValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueQuat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueQuat_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueQuat_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager|PropertyAccessors" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "SetValueQuat", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueQuat_Statics::VariantManagerBlueprintLibrary_eventSetValueQuat_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueRotator_Statics
	{
		struct VariantManagerBlueprintLibrary_eventSetValueRotator_Parms
		{
			UPropertyValue* Property;
			FRotator InValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueRotator_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventSetValueRotator_Parms, Property), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueRotator_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventSetValueRotator_Parms, InValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueRotator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueRotator_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueRotator_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueRotator_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager|PropertyAccessors" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueRotator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "SetValueRotator", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueRotator_Statics::VariantManagerBlueprintLibrary_eventSetValueRotator_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueRotator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueRotator_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueRotator_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueRotator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueRotator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueRotator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueString_Statics
	{
		struct VariantManagerBlueprintLibrary_eventSetValueString_Parms
		{
			UPropertyValue* Property;
			FString InValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueString_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventSetValueString_Parms, Property), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueString_Statics::NewProp_InValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueString_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventSetValueString_Parms, InValue), METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueString_Statics::NewProp_InValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueString_Statics::NewProp_InValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueString_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueString_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueString_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueString_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager|PropertyAccessors" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "SetValueString", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueString_Statics::VariantManagerBlueprintLibrary_eventSetValueString_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueString_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueString_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueString_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueString()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueString_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector_Statics
	{
		struct VariantManagerBlueprintLibrary_eventSetValueVector_Parms
		{
			UPropertyValue* Property;
			FVector InValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventSetValueVector_Parms, Property), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventSetValueVector_Parms, InValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager|PropertyAccessors" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "SetValueVector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector_Statics::VariantManagerBlueprintLibrary_eventSetValueVector_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector2D_Statics
	{
		struct VariantManagerBlueprintLibrary_eventSetValueVector2D_Parms
		{
			UPropertyValue* Property;
			FVector2D InValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector2D_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventSetValueVector2D_Parms, Property), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector2D_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventSetValueVector2D_Parms, InValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector2D_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector2D_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager|PropertyAccessors" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "SetValueVector2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector2D_Statics::VariantManagerBlueprintLibrary_eventSetValueVector2D_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector4_Statics
	{
		struct VariantManagerBlueprintLibrary_eventSetValueVector4_Parms
		{
			UPropertyValue* Property;
			FVector4 InValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Property;
		static const UECodeGen_Private::FStructPropertyParams NewProp_InValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector4_Statics::NewProp_Property = { "Property", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventSetValueVector4_Parms, Property), Z_Construct_UClass_UPropertyValue_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector4_Statics::NewProp_InValue = { "InValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VariantManagerBlueprintLibrary_eventSetValueVector4_Parms, InValue), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector4_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector4_Statics::NewProp_Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector4_Statics::NewProp_InValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector4_Statics::Function_MetaDataParams[] = {
		{ "Category", "VariantManager|PropertyAccessors" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptMethod", "" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector4_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVariantManagerBlueprintLibrary, nullptr, "SetValueVector4", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector4_Statics::VariantManagerBlueprintLibrary_eventSetValueVector4_Parms), Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector4_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector4_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector4_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector4_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector4()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector4_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVariantManagerBlueprintLibrary);
	UClass* Z_Construct_UClass_UVariantManagerBlueprintLibrary_NoRegister()
	{
		return UVariantManagerBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVariantManagerBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVariantManagerBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManager,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVariantManagerBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddActorBinding, "AddActorBinding" }, // 4022678030
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddDependency, "AddDependency" }, // 1394629430
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariant, "AddVariant" }, // 1627044523
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_AddVariantSet, "AddVariantSet" }, // 1178231310
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_Apply, "Apply" }, // 398387877
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CaptureProperty, "CaptureProperty" }, // 3323372116
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsActor, "CreateLevelVariantSetsActor" }, // 4225275465
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_CreateLevelVariantSetsAsset, "CreateLevelVariantSetsAsset" }, // 4185075099
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_DeleteDependency, "DeleteDependency" }, // 1474910183
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturableProperties, "GetCapturableProperties" }, // 1468874876
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetCapturedProperties, "GetCapturedProperties" }, // 3506283843
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetPropertyTypeString, "GetPropertyTypeString" }, // 185742129
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueBool, "GetValueBool" }, // 3509540376
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueColor, "GetValueColor" }, // 2753432522
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueFloat, "GetValueFloat" }, // 497775806
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueInt, "GetValueInt" }, // 743810712
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueIntPoint, "GetValueIntPoint" }, // 3873295935
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueLinearColor, "GetValueLinearColor" }, // 1857912739
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueObject, "GetValueObject" }, // 4104456544
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueQuat, "GetValueQuat" }, // 391520681
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueRotator, "GetValueRotator" }, // 2734781104
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueString, "GetValueString" }, // 3135809976
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector, "GetValueVector" }, // 2982567457
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector2D, "GetValueVector2D" }, // 3195408186
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_GetValueVector4, "GetValueVector4" }, // 2183876730
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_Record, "Record" }, // 2581595177
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBinding, "RemoveActorBinding" }, // 1026706363
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveActorBindingByName, "RemoveActorBindingByName" }, // 2191054276
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedProperty, "RemoveCapturedProperty" }, // 1140183288
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveCapturedPropertyByName, "RemoveCapturedPropertyByName" }, // 1894964402
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariant, "RemoveVariant" }, // 1186468275
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantByName, "RemoveVariantByName" }, // 3362895451
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSet, "RemoveVariantSet" }, // 3858444643
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_RemoveVariantSetByName, "RemoveVariantSetByName" }, // 1739821249
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetDependency, "SetDependency" }, // 1706813366
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueBool, "SetValueBool" }, // 3270757098
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueColor, "SetValueColor" }, // 2895755349
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueFloat, "SetValueFloat" }, // 4205956293
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueInt, "SetValueInt" }, // 2615596661
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueIntPoint, "SetValueIntPoint" }, // 2105211514
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueLinearColor, "SetValueLinearColor" }, // 1794103436
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueObject, "SetValueObject" }, // 3650974166
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueQuat, "SetValueQuat" }, // 804291221
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueRotator, "SetValueRotator" }, // 2151172305
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueString, "SetValueString" }, // 1179570872
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector, "SetValueVector" }, // 780796432
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector2D, "SetValueVector2D" }, // 1302950922
		{ &Z_Construct_UFunction_UVariantManagerBlueprintLibrary_SetValueVector4, "SetValueVector4" }, // 3449287473
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVariantManagerBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* Library of functions that can be used by the Python API to trigger VariantManager operations\n*/" },
		{ "IncludePath", "VariantManagerBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/VariantManagerBlueprintLibrary.h" },
		{ "ScriptName", "VariantManagerLibrary" },
		{ "ToolTip", "Library of functions that can be used by the Python API to trigger VariantManager operations" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVariantManagerBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVariantManagerBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVariantManagerBlueprintLibrary_Statics::ClassParams = {
		&UVariantManagerBlueprintLibrary::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVariantManagerBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVariantManagerBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVariantManagerBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UVariantManagerBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVariantManagerBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UVariantManagerBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVariantManagerBlueprintLibrary.OuterSingleton;
	}
	template<> VARIANTMANAGER_API UClass* StaticClass<UVariantManagerBlueprintLibrary>()
	{
		return UVariantManagerBlueprintLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVariantManagerBlueprintLibrary);
	UVariantManagerBlueprintLibrary::~UVariantManagerBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_VariantManagerBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_VariantManagerBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVariantManagerBlueprintLibrary, UVariantManagerBlueprintLibrary::StaticClass, TEXT("UVariantManagerBlueprintLibrary"), &Z_Registration_Info_UClass_UVariantManagerBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVariantManagerBlueprintLibrary), 3336395908U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_VariantManagerBlueprintLibrary_h_2545039233(TEXT("/Script/VariantManager"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_VariantManagerBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Public_VariantManagerBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
