// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/MeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMeshComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UMeshComponent::execSetVectorParameterValueOnMaterials)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_STRUCT(FVector,Z_Param_ParameterValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVectorParameterValueOnMaterials(Z_Param_ParameterName,Z_Param_ParameterValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshComponent::execSetScalarParameterValueOnMaterials)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ParameterName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_ParameterValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScalarParameterValueOnMaterials(Z_Param_ParameterName,Z_Param_ParameterValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshComponent::execPrestreamTextures)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Seconds);
		P_GET_UBOOL(Z_Param_bPrioritizeCharacterTextures);
		P_GET_PROPERTY(FIntProperty,Z_Param_CinematicTextureGroups);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrestreamTextures(Z_Param_Seconds,Z_Param_bPrioritizeCharacterTextures,Z_Param_CinematicTextureGroups);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshComponent::execSetOverlayMaterialMaxDrawDistance)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMaxDrawDistance);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOverlayMaterialMaxDrawDistance(Z_Param_InMaxDrawDistance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshComponent::execSetOverlayMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewOverlayMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOverlayMaterial(Z_Param_NewOverlayMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshComponent::execGetOverlayMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInterface**)Z_Param__Result=P_THIS->GetOverlayMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshComponent::execIsMaterialSlotNameValid)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MaterialSlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMaterialSlotNameValid(Z_Param_MaterialSlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshComponent::execGetMaterialSlotNames)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->GetMaterialSlotNames();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshComponent::execGetMaterialIndex)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_MaterialSlotName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaterialIndex(Z_Param_MaterialSlotName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMeshComponent::execGetMaterials)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UMaterialInterface*>*)Z_Param__Result=P_THIS->GetMaterials();
		P_NATIVE_END;
	}
	void UMeshComponent::StaticRegisterNativesUMeshComponent()
	{
		UClass* Class = UMeshComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaterialIndex", &UMeshComponent::execGetMaterialIndex },
			{ "GetMaterials", &UMeshComponent::execGetMaterials },
			{ "GetMaterialSlotNames", &UMeshComponent::execGetMaterialSlotNames },
			{ "GetOverlayMaterial", &UMeshComponent::execGetOverlayMaterial },
			{ "IsMaterialSlotNameValid", &UMeshComponent::execIsMaterialSlotNameValid },
			{ "PrestreamTextures", &UMeshComponent::execPrestreamTextures },
			{ "SetOverlayMaterial", &UMeshComponent::execSetOverlayMaterial },
			{ "SetOverlayMaterialMaxDrawDistance", &UMeshComponent::execSetOverlayMaterialMaxDrawDistance },
			{ "SetScalarParameterValueOnMaterials", &UMeshComponent::execSetScalarParameterValueOnMaterials },
			{ "SetVectorParameterValueOnMaterials", &UMeshComponent::execSetVectorParameterValueOnMaterials },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMeshComponent_GetMaterialIndex_Statics
	{
		struct MeshComponent_eventGetMaterialIndex_Parms
		{
			FName MaterialSlotName;
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMeshComponent_GetMaterialIndex_Statics::NewProp_MaterialSlotName = { "MaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MeshComponent_eventGetMaterialIndex_Parms, MaterialSlotName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshComponent_GetMaterialIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MeshComponent_eventGetMaterialIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshComponent_GetMaterialIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_GetMaterialIndex_Statics::NewProp_MaterialSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_GetMaterialIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponent_GetMaterialIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshComponent_GetMaterialIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, nullptr, "GetMaterialIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMeshComponent_GetMaterialIndex_Statics::MeshComponent_eventGetMaterialIndex_Parms), Z_Construct_UFunction_UMeshComponent_GetMaterialIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_GetMaterialIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshComponent_GetMaterialIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_GetMaterialIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshComponent_GetMaterialIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshComponent_GetMaterialIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics
	{
		struct MeshComponent_eventGetMaterials_Parms
		{
			TArray<UMaterialInterface*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MeshComponent_eventGetMaterials_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, nullptr, "GetMaterials", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::MeshComponent_eventGetMaterials_Parms), Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshComponent_GetMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshComponent_GetMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames_Statics
	{
		struct MeshComponent_eventGetMaterialSlotNames_Parms
		{
			TArray<FName> ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MeshComponent_eventGetMaterialSlotNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, nullptr, "GetMaterialSlotNames", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames_Statics::MeshComponent_eventGetMaterialSlotNames_Parms), Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial_Statics
	{
		struct MeshComponent_eventGetOverlayMaterial_Parms
		{
			UMaterialInterface* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MeshComponent_eventGetOverlayMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Get the overlay material used by this instance */" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
		{ "ToolTip", "Get the overlay material used by this instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, nullptr, "GetOverlayMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial_Statics::MeshComponent_eventGetOverlayMaterial_Parms), Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics
	{
		struct MeshComponent_eventIsMaterialSlotNameValid_Parms
		{
			FName MaterialSlotName;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_MaterialSlotName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::NewProp_MaterialSlotName = { "MaterialSlotName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MeshComponent_eventIsMaterialSlotNameValid_Parms, MaterialSlotName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MeshComponent_eventIsMaterialSlotNameValid_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MeshComponent_eventIsMaterialSlotNameValid_Parms), &Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::NewProp_MaterialSlotName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, nullptr, "IsMaterialSlotNameValid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::MeshComponent_eventIsMaterialSlotNameValid_Parms), Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics
	{
		struct MeshComponent_eventPrestreamTextures_Parms
		{
			float Seconds;
			bool bPrioritizeCharacterTextures;
			int32 CinematicTextureGroups;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Seconds;
		static void NewProp_bPrioritizeCharacterTextures_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrioritizeCharacterTextures;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CinematicTextureGroups;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::NewProp_Seconds = { "Seconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MeshComponent_eventPrestreamTextures_Parms, Seconds), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::NewProp_bPrioritizeCharacterTextures_SetBit(void* Obj)
	{
		((MeshComponent_eventPrestreamTextures_Parms*)Obj)->bPrioritizeCharacterTextures = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::NewProp_bPrioritizeCharacterTextures = { "bPrioritizeCharacterTextures", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MeshComponent_eventPrestreamTextures_Parms), &Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::NewProp_bPrioritizeCharacterTextures_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::NewProp_CinematicTextureGroups = { "CinematicTextureGroups", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MeshComponent_eventPrestreamTextures_Parms, CinematicTextureGroups), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::NewProp_Seconds,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::NewProp_bPrioritizeCharacterTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::NewProp_CinematicTextureGroups,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/**\n\x09 *\x09Tell the streaming system to start loading all textures with all mip-levels.\n\x09 *\x09@param Seconds\x09\x09\x09\x09\x09\x09\x09Number of seconds to force all mip-levels to be resident\n\x09 *\x09@param bPrioritizeCharacterTextures\x09\x09Whether character textures should be prioritized for a while by the streaming system\n\x09 *\x09@param CinematicTextureGroups\x09\x09\x09""Bitfield indicating which texture groups that use extra high-resolution mips\n\x09 */" },
		{ "CPP_Default_CinematicTextureGroups", "0" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
		{ "ToolTip", "Tell the streaming system to start loading all textures with all mip-levels.\n@param Seconds                                                  Number of seconds to force all mip-levels to be resident\n@param bPrioritizeCharacterTextures             Whether character textures should be prioritized for a while by the streaming system\n@param CinematicTextureGroups                   Bitfield indicating which texture groups that use extra high-resolution mips" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, nullptr, "PrestreamTextures", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::MeshComponent_eventPrestreamTextures_Parms), Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshComponent_PrestreamTextures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshComponent_PrestreamTextures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial_Statics
	{
		struct MeshComponent_eventSetOverlayMaterial_Parms
		{
			UMaterialInterface* NewOverlayMaterial;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewOverlayMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial_Statics::NewProp_NewOverlayMaterial = { "NewOverlayMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MeshComponent_eventSetOverlayMaterial_Parms, NewOverlayMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial_Statics::NewProp_NewOverlayMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Change the overlay material used by this instance */" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
		{ "ToolTip", "Change the overlay material used by this instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, nullptr, "SetOverlayMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial_Statics::MeshComponent_eventSetOverlayMaterial_Parms), Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance_Statics
	{
		struct MeshComponent_eventSetOverlayMaterialMaxDrawDistance_Parms
		{
			float InMaxDrawDistance;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InMaxDrawDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance_Statics::NewProp_InMaxDrawDistance = { "InMaxDrawDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MeshComponent_eventSetOverlayMaterialMaxDrawDistance_Parms, InMaxDrawDistance), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance_Statics::NewProp_InMaxDrawDistance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Change the overlay material max draw distance used by this instance */" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
		{ "ToolTip", "Change the overlay material max draw distance used by this instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, nullptr, "SetOverlayMaterialMaxDrawDistance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance_Statics::MeshComponent_eventSetOverlayMaterialMaxDrawDistance_Parms), Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics
	{
		struct MeshComponent_eventSetScalarParameterValueOnMaterials_Parms
		{
			FName ParameterName;
			float ParameterValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ParameterValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MeshComponent_eventSetScalarParameterValueOnMaterials_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MeshComponent_eventSetScalarParameterValueOnMaterials_Parms, ParameterValue), METADATA_PARAMS(Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::NewProp_ParameterValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::NewProp_ParameterValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set all occurrences of Scalar Material Parameters with ParameterName in the set of materials of the SkeletalMesh to ParameterValue */" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
		{ "ToolTip", "Set all occurrences of Scalar Material Parameters with ParameterName in the set of materials of the SkeletalMesh to ParameterValue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, nullptr, "SetScalarParameterValueOnMaterials", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::MeshComponent_eventSetScalarParameterValueOnMaterials_Parms), Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics
	{
		struct MeshComponent_eventSetVectorParameterValueOnMaterials_Parms
		{
			FName ParameterName;
			FVector ParameterValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ParameterName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::NewProp_ParameterName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::NewProp_ParameterName = { "ParameterName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MeshComponent_eventSetVectorParameterValueOnMaterials_Parms, ParameterName), METADATA_PARAMS(Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::NewProp_ParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::NewProp_ParameterName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::NewProp_ParameterValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::NewProp_ParameterValue = { "ParameterValue", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MeshComponent_eventSetVectorParameterValueOnMaterials_Parms, ParameterValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::NewProp_ParameterValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::NewProp_ParameterValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::NewProp_ParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::NewProp_ParameterValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Material" },
		{ "Comment", "/** Set all occurrences of Vector Material Parameters with ParameterName in the set of materials of the SkeletalMesh to ParameterValue */" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
		{ "ToolTip", "Set all occurrences of Vector Material Parameters with ParameterName in the set of materials of the SkeletalMesh to ParameterValue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMeshComponent, nullptr, "SetVectorParameterValueOnMaterials", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::MeshComponent_eventSetVectorParameterValueOnMaterials_Parms), Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMeshComponent);
	UClass* Z_Construct_UClass_UMeshComponent_NoRegister()
	{
		return UMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverrideMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverrideMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OverrideMaterials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_OverlayMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlayMaterialMaxDrawDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OverlayMaterialMaxDrawDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMaterialParameterCaching_MetaData[];
#endif
		static void NewProp_bEnableMaterialParameterCaching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMaterialParameterCaching;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMeshComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMeshComponent_GetMaterialIndex, "GetMaterialIndex" }, // 527779250
		{ &Z_Construct_UFunction_UMeshComponent_GetMaterials, "GetMaterials" }, // 2015060171
		{ &Z_Construct_UFunction_UMeshComponent_GetMaterialSlotNames, "GetMaterialSlotNames" }, // 530364137
		{ &Z_Construct_UFunction_UMeshComponent_GetOverlayMaterial, "GetOverlayMaterial" }, // 4160865858
		{ &Z_Construct_UFunction_UMeshComponent_IsMaterialSlotNameValid, "IsMaterialSlotNameValid" }, // 512170939
		{ &Z_Construct_UFunction_UMeshComponent_PrestreamTextures, "PrestreamTextures" }, // 2079827177
		{ &Z_Construct_UFunction_UMeshComponent_SetOverlayMaterial, "SetOverlayMaterial" }, // 2645993733
		{ &Z_Construct_UFunction_UMeshComponent_SetOverlayMaterialMaxDrawDistance, "SetOverlayMaterialMaxDrawDistance" }, // 843180763
		{ &Z_Construct_UFunction_UMeshComponent_SetScalarParameterValueOnMaterials, "SetScalarParameterValueOnMaterials" }, // 1124348022
		{ &Z_Construct_UFunction_UMeshComponent_SetVectorParameterValueOnMaterials, "SetVectorParameterValueOnMaterials" }, // 847125870
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * MeshComponent is an abstract base for any component that is an instance of a renderable collection of triangles.\n *\n * @see UStaticMeshComponent\n * @see USkeletalMeshComponent\n */" },
		{ "HideCategories", "Mobility Trigger" },
		{ "IncludePath", "Components/MeshComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
		{ "ToolTip", "MeshComponent is an abstract base for any component that is an instance of a renderable collection of triangles.\n\n@see UStaticMeshComponent\n@see USkeletalMeshComponent" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverrideMaterials_Inner = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverrideMaterials_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
		{ "ToolTip", "Material overrides." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverrideMaterials = { "OverrideMaterials", nullptr, (EPropertyFlags)0x0014040000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshComponent, OverrideMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverrideMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverrideMaterials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverlayMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Translucent material to blend on top of this mesh. Mesh will be rendered twice - once with a base material and once with overlay material */" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
		{ "ToolTip", "Translucent material to blend on top of this mesh. Mesh will be rendered twice - once with a base material and once with overlay material" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverlayMaterial = { "OverlayMaterial", nullptr, (EPropertyFlags)0x0014040000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshComponent, OverlayMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverlayMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverlayMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverlayMaterialMaxDrawDistance_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** The max draw distance for overlay material. A distance of 0 indicates that overlay will be culled using primitive max distance. */" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
		{ "ToolTip", "The max draw distance for overlay material. A distance of 0 indicates that overlay will be culled using primitive max distance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverlayMaterialMaxDrawDistance = { "OverlayMaterialMaxDrawDistance", nullptr, (EPropertyFlags)0x0010040000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMeshComponent, OverlayMaterialMaxDrawDistance), METADATA_PARAMS(Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverlayMaterialMaxDrawDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverlayMaterialMaxDrawDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMeshComponent_Statics::NewProp_bEnableMaterialParameterCaching_MetaData[] = {
		{ "Category", "MaterialParameters" },
		{ "ModuleRelativePath", "Classes/Components/MeshComponent.h" },
	};
#endif
	void Z_Construct_UClass_UMeshComponent_Statics::NewProp_bEnableMaterialParameterCaching_SetBit(void* Obj)
	{
		((UMeshComponent*)Obj)->bEnableMaterialParameterCaching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMeshComponent_Statics::NewProp_bEnableMaterialParameterCaching = { "bEnableMaterialParameterCaching", nullptr, (EPropertyFlags)0x00200c0000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMeshComponent), &Z_Construct_UClass_UMeshComponent_Statics::NewProp_bEnableMaterialParameterCaching_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMeshComponent_Statics::NewProp_bEnableMaterialParameterCaching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshComponent_Statics::NewProp_bEnableMaterialParameterCaching_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverrideMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverrideMaterials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverlayMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshComponent_Statics::NewProp_OverlayMaterialMaxDrawDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMeshComponent_Statics::NewProp_bEnableMaterialParameterCaching,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMeshComponent_Statics::ClassParams = {
		&UMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMeshComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMeshComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMeshComponent.OuterSingleton, Z_Construct_UClass_UMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMeshComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMeshComponent>()
	{
		return UMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMeshComponent);
	UMeshComponent::~UMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMeshComponent, UMeshComponent::StaticClass, TEXT("UMeshComponent"), &Z_Registration_Info_UClass_UMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMeshComponent), 3417746366U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_1282065203(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_MeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
