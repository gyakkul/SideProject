// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PaperGroupedSpriteComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePaperGroupedSpriteComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperGroupedSpriteComponent();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperGroupedSpriteComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
	PAPER2D_API UScriptStruct* Z_Construct_UScriptStruct_FSpriteInstanceData();
	UPackage* Z_Construct_UPackage__Script_Paper2D();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SpriteInstanceData;
class UScriptStruct* FSpriteInstanceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SpriteInstanceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SpriteInstanceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpriteInstanceData, (UObject*)Z_Construct_UPackage__Script_Paper2D(), TEXT("SpriteInstanceData"));
	}
	return Z_Registration_Info_UScriptStruct_SpriteInstanceData.OuterSingleton;
}
template<> PAPER2D_API UScriptStruct* StaticStruct<FSpriteInstanceData>()
{
	return FSpriteInstanceData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSpriteInstanceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceSprite_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceSprite;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VertexColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VertexColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaterialIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpriteInstanceData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "Instances" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpriteInstanceData, Transform), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_Transform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_SourceSprite_MetaData[] = {
		{ "Category", "Instances" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_SourceSprite = { "SourceSprite", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpriteInstanceData, SourceSprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_SourceSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_SourceSprite_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_VertexColor_MetaData[] = {
		{ "Category", "Instances" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_VertexColor = { "VertexColor", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpriteInstanceData, VertexColor), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_VertexColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_VertexColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_MaterialIndex_MetaData[] = {
		{ "Category", "Instances" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSpriteInstanceData, MaterialIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_MaterialIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_MaterialIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_SourceSprite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_VertexColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewProp_MaterialIndex,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
		nullptr,
		&NewStructOps,
		"SpriteInstanceData",
		sizeof(FSpriteInstanceData),
		alignof(FSpriteInstanceData),
		Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpriteInstanceData()
	{
		if (!Z_Registration_Info_UScriptStruct_SpriteInstanceData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SpriteInstanceData.InnerSingleton, Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SpriteInstanceData.InnerSingleton;
	}
	DEFINE_FUNCTION(UPaperGroupedSpriteComponent::execSortInstancesAlongAxis)
	{
		P_GET_STRUCT(FVector,Z_Param_WorldSpaceSortAxis);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SortInstancesAlongAxis(Z_Param_WorldSpaceSortAxis);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperGroupedSpriteComponent::execGetInstanceCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInstanceCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperGroupedSpriteComponent::execClearInstances)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearInstances();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperGroupedSpriteComponent::execRemoveInstance)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveInstance(Z_Param_InstanceIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperGroupedSpriteComponent::execUpdateInstanceColor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
		P_GET_STRUCT(FLinearColor,Z_Param_NewInstanceColor);
		P_GET_UBOOL(Z_Param_bMarkRenderStateDirty);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateInstanceColor(Z_Param_InstanceIndex,Z_Param_NewInstanceColor,Z_Param_bMarkRenderStateDirty);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperGroupedSpriteComponent::execUpdateInstanceTransform)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_NewInstanceTransform);
		P_GET_UBOOL(Z_Param_bWorldSpace);
		P_GET_UBOOL(Z_Param_bMarkRenderStateDirty);
		P_GET_UBOOL(Z_Param_bTeleport);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->UpdateInstanceTransform(Z_Param_InstanceIndex,Z_Param_Out_NewInstanceTransform,Z_Param_bWorldSpace,Z_Param_bMarkRenderStateDirty,Z_Param_bTeleport);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperGroupedSpriteComponent::execGetInstanceTransform)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InstanceIndex);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_OutInstanceTransform);
		P_GET_UBOOL(Z_Param_bWorldSpace);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetInstanceTransform(Z_Param_InstanceIndex,Z_Param_Out_OutInstanceTransform,Z_Param_bWorldSpace);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPaperGroupedSpriteComponent::execAddInstance)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_Transform);
		P_GET_OBJECT(UPaperSprite,Z_Param_Sprite);
		P_GET_UBOOL(Z_Param_bWorldSpace);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddInstance(Z_Param_Out_Transform,Z_Param_Sprite,Z_Param_bWorldSpace,Z_Param_Color);
		P_NATIVE_END;
	}
	void UPaperGroupedSpriteComponent::StaticRegisterNativesUPaperGroupedSpriteComponent()
	{
		UClass* Class = UPaperGroupedSpriteComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddInstance", &UPaperGroupedSpriteComponent::execAddInstance },
			{ "ClearInstances", &UPaperGroupedSpriteComponent::execClearInstances },
			{ "GetInstanceCount", &UPaperGroupedSpriteComponent::execGetInstanceCount },
			{ "GetInstanceTransform", &UPaperGroupedSpriteComponent::execGetInstanceTransform },
			{ "RemoveInstance", &UPaperGroupedSpriteComponent::execRemoveInstance },
			{ "SortInstancesAlongAxis", &UPaperGroupedSpriteComponent::execSortInstancesAlongAxis },
			{ "UpdateInstanceColor", &UPaperGroupedSpriteComponent::execUpdateInstanceColor },
			{ "UpdateInstanceTransform", &UPaperGroupedSpriteComponent::execUpdateInstanceTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics
	{
		struct PaperGroupedSpriteComponent_eventAddInstance_Parms
		{
			FTransform Transform;
			UPaperSprite* Sprite;
			bool bWorldSpace;
			FLinearColor Color;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Sprite;
		static void NewProp_bWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_Transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventAddInstance_Parms, Transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventAddInstance_Parms, Sprite), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
	{
		((PaperGroupedSpriteComponent_eventAddInstance_Parms*)Obj)->bWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventAddInstance_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventAddInstance_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventAddInstance_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_Sprite,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_bWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Sprite" },
		{ "Comment", "/** Add an instance to this component. Transform can be given either in the local space of this component or world space.  */" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "CPP_Default_Color", "(R=1.000000,G=1.000000,B=1.000000,A=1.000000)" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Add an instance to this component. Transform can be given either in the local space of this component or world space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperGroupedSpriteComponent, nullptr, "AddInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::PaperGroupedSpriteComponent_eventAddInstance_Parms), Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperGroupedSpriteComponent_ClearInstances_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperGroupedSpriteComponent_ClearInstances_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Sprite" },
		{ "Comment", "/** Clear all instances being rendered by this component */" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Clear all instances being rendered by this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_ClearInstances_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperGroupedSpriteComponent, nullptr, "ClearInstances", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperGroupedSpriteComponent_ClearInstances_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_ClearInstances_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperGroupedSpriteComponent_ClearInstances()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperGroupedSpriteComponent_ClearInstances_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics
	{
		struct PaperGroupedSpriteComponent_eventGetInstanceCount_Parms
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
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventGetInstanceCount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Sprite" },
		{ "Comment", "/** Get the number of instances in this component */" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Get the number of instances in this component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperGroupedSpriteComponent, nullptr, "GetInstanceCount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::PaperGroupedSpriteComponent_eventGetInstanceCount_Parms), Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics
	{
		struct PaperGroupedSpriteComponent_eventGetInstanceTransform_Parms
		{
			int32 InstanceIndex;
			FTransform OutInstanceTransform;
			bool bWorldSpace;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutInstanceTransform;
		static void NewProp_bWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventGetInstanceTransform_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_OutInstanceTransform = { "OutInstanceTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventGetInstanceTransform_Parms, OutInstanceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
	{
		((PaperGroupedSpriteComponent_eventGetInstanceTransform_Parms*)Obj)->bWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventGetInstanceTransform_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PaperGroupedSpriteComponent_eventGetInstanceTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventGetInstanceTransform_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_InstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_OutInstanceTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_bWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Sprite" },
		{ "Comment", "/** Get the transform for the instance specified. Instance is returned in local space of this component unless bWorldSpace is set.  Returns True on success. */" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Get the transform for the instance specified. Instance is returned in local space of this component unless bWorldSpace is set.  Returns True on success." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperGroupedSpriteComponent, nullptr, "GetInstanceTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::PaperGroupedSpriteComponent_eventGetInstanceTransform_Parms), Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics
	{
		struct PaperGroupedSpriteComponent_eventRemoveInstance_Parms
		{
			int32 InstanceIndex;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventRemoveInstance_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PaperGroupedSpriteComponent_eventRemoveInstance_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventRemoveInstance_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::NewProp_InstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Sprite" },
		{ "Comment", "/** Remove the instance specified. Returns True on success. */" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Remove the instance specified. Returns True on success." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperGroupedSpriteComponent, nullptr, "RemoveInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::PaperGroupedSpriteComponent_eventRemoveInstance_Parms), Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics
	{
		struct PaperGroupedSpriteComponent_eventSortInstancesAlongAxis_Parms
		{
			FVector WorldSpaceSortAxis;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldSpaceSortAxis;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::NewProp_WorldSpaceSortAxis = { "WorldSpaceSortAxis", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventSortInstancesAlongAxis_Parms, WorldSpaceSortAxis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::NewProp_WorldSpaceSortAxis,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Sprite" },
		{ "Comment", "/** Sort all instances by their world space position along the specified axis */" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Sort all instances by their world space position along the specified axis" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperGroupedSpriteComponent, nullptr, "SortInstancesAlongAxis", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::PaperGroupedSpriteComponent_eventSortInstancesAlongAxis_Parms), Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics
	{
		struct PaperGroupedSpriteComponent_eventUpdateInstanceColor_Parms
		{
			int32 InstanceIndex;
			FLinearColor NewInstanceColor;
			bool bMarkRenderStateDirty;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewInstanceColor;
		static void NewProp_bMarkRenderStateDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkRenderStateDirty;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventUpdateInstanceColor_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_NewInstanceColor = { "NewInstanceColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventUpdateInstanceColor_Parms, NewInstanceColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_bMarkRenderStateDirty_SetBit(void* Obj)
	{
		((PaperGroupedSpriteComponent_eventUpdateInstanceColor_Parms*)Obj)->bMarkRenderStateDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_bMarkRenderStateDirty = { "bMarkRenderStateDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventUpdateInstanceColor_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_bMarkRenderStateDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PaperGroupedSpriteComponent_eventUpdateInstanceColor_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventUpdateInstanceColor_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_InstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_NewInstanceColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_bMarkRenderStateDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Sprite" },
		{ "Comment", "/** Update the color for the instance specified. Returns True on success. */" },
		{ "CPP_Default_bMarkRenderStateDirty", "true" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Update the color for the instance specified. Returns True on success." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperGroupedSpriteComponent, nullptr, "UpdateInstanceColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::PaperGroupedSpriteComponent_eventUpdateInstanceColor_Parms), Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics
	{
		struct PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms
		{
			int32 InstanceIndex;
			FTransform NewInstanceTransform;
			bool bWorldSpace;
			bool bMarkRenderStateDirty;
			bool bTeleport;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_InstanceIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewInstanceTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewInstanceTransform;
		static void NewProp_bWorldSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWorldSpace;
		static void NewProp_bMarkRenderStateDirty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMarkRenderStateDirty;
		static void NewProp_bTeleport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTeleport;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_InstanceIndex = { "InstanceIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms, InstanceIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform = { "NewInstanceTransform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms, NewInstanceTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform_MetaData)) };
	void Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bWorldSpace_SetBit(void* Obj)
	{
		((PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms*)Obj)->bWorldSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bWorldSpace = { "bWorldSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bWorldSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bMarkRenderStateDirty_SetBit(void* Obj)
	{
		((PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms*)Obj)->bMarkRenderStateDirty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bMarkRenderStateDirty = { "bMarkRenderStateDirty", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bMarkRenderStateDirty_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bTeleport_SetBit(void* Obj)
	{
		((PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms*)Obj)->bTeleport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bTeleport = { "bTeleport", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bTeleport_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms), &Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_InstanceIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_NewInstanceTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bWorldSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bMarkRenderStateDirty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_bTeleport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Components|Sprite" },
		{ "Comment", "/** Update the transform for the instance specified. Instance is given in local space of this component unless bWorldSpace is set.  Returns True on success. */" },
		{ "CPP_Default_bMarkRenderStateDirty", "true" },
		{ "CPP_Default_bTeleport", "false" },
		{ "CPP_Default_bWorldSpace", "false" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Update the transform for the instance specified. Instance is given in local space of this component unless bWorldSpace is set.  Returns True on success." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPaperGroupedSpriteComponent, nullptr, "UpdateInstanceTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::PaperGroupedSpriteComponent_eventUpdateInstanceTransform_Parms), Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPaperGroupedSpriteComponent);
	UClass* Z_Construct_UClass_UPaperGroupedSpriteComponent_NoRegister()
	{
		return UPaperGroupedSpriteComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InstanceMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceMaterials;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PerInstanceSpriteData_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerInstanceSpriteData_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PerInstanceSpriteData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Paper2D,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPaperGroupedSpriteComponent_AddInstance, "AddInstance" }, // 405992686
		{ &Z_Construct_UFunction_UPaperGroupedSpriteComponent_ClearInstances, "ClearInstances" }, // 1463169908
		{ &Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceCount, "GetInstanceCount" }, // 3747388947
		{ &Z_Construct_UFunction_UPaperGroupedSpriteComponent_GetInstanceTransform, "GetInstanceTransform" }, // 484309674
		{ &Z_Construct_UFunction_UPaperGroupedSpriteComponent_RemoveInstance, "RemoveInstance" }, // 2033082971
		{ &Z_Construct_UFunction_UPaperGroupedSpriteComponent_SortInstancesAlongAxis, "SortInstancesAlongAxis" }, // 629637743
		{ &Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceColor, "UpdateInstanceColor" }, // 3459080883
		{ &Z_Construct_UFunction_UPaperGroupedSpriteComponent_UpdateInstanceTransform, "UpdateInstanceTransform" }, // 1618160663
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Paper2D" },
		{ "Comment", "/**\n * A component that handles rendering and collision for many instances of one or more UPaperSprite assets.\n *\n * @see UPrimitiveComponent, UPaperSprite\n */" },
		{ "DevelopmentStatus", "EarlyAccess" },
		{ "HideCategories", "Trigger" },
		{ "IncludePath", "PaperGroupedSpriteComponent.h" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "A component that handles rendering and collision for many instances of one or more UPaperSprite assets.\n\n@see UPrimitiveComponent, UPaperSprite" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_InstanceMaterials_Inner = { "InstanceMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_InstanceMaterials_MetaData[] = {
		{ "Comment", "/** Array of materials used by the instances */" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Array of materials used by the instances" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_InstanceMaterials = { "InstanceMaterials", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperGroupedSpriteComponent, InstanceMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_InstanceMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_InstanceMaterials_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_PerInstanceSpriteData_Inner = { "PerInstanceSpriteData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSpriteInstanceData, METADATA_PARAMS(nullptr, 0) }; // 488987198
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_PerInstanceSpriteData_MetaData[] = {
		{ "Category", "Instances" },
		{ "Comment", "/** Array of instances */" },
		{ "DisplayName", "Instances" },
		{ "MakeEditWidget", "TRUE" },
		{ "ModuleRelativePath", "Classes/PaperGroupedSpriteComponent.h" },
		{ "ToolTip", "Array of instances" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_PerInstanceSpriteData = { "PerInstanceSpriteData", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPaperGroupedSpriteComponent, PerInstanceSpriteData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_PerInstanceSpriteData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_PerInstanceSpriteData_MetaData)) }; // 488987198
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_InstanceMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_InstanceMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_PerInstanceSpriteData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::NewProp_PerInstanceSpriteData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPaperGroupedSpriteComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::ClassParams = {
		&UPaperGroupedSpriteComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPaperGroupedSpriteComponent()
	{
		if (!Z_Registration_Info_UClass_UPaperGroupedSpriteComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPaperGroupedSpriteComponent.OuterSingleton, Z_Construct_UClass_UPaperGroupedSpriteComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPaperGroupedSpriteComponent.OuterSingleton;
	}
	template<> PAPER2D_API UClass* StaticClass<UPaperGroupedSpriteComponent>()
	{
		return UPaperGroupedSpriteComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPaperGroupedSpriteComponent);
	UPaperGroupedSpriteComponent::~UPaperGroupedSpriteComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_Statics::ScriptStructInfo[] = {
		{ FSpriteInstanceData::StaticStruct, Z_Construct_UScriptStruct_FSpriteInstanceData_Statics::NewStructOps, TEXT("SpriteInstanceData"), &Z_Registration_Info_UScriptStruct_SpriteInstanceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSpriteInstanceData), 488987198U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPaperGroupedSpriteComponent, UPaperGroupedSpriteComponent::StaticClass, TEXT("UPaperGroupedSpriteComponent"), &Z_Registration_Info_UClass_UPaperGroupedSpriteComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPaperGroupedSpriteComponent), 2935373185U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_2686776584(TEXT("/Script/Paper2D"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_2D_Paper2D_Source_Paper2D_Classes_PaperGroupedSpriteComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
