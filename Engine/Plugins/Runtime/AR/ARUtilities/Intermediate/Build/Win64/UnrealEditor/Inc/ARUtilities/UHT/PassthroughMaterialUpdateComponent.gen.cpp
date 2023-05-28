// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PassthroughMaterialUpdateComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePassthroughMaterialUpdateComponent() {}
// Cross Module References
	ARUTILITIES_API UClass* Z_Construct_UClass_UPassthroughMaterialUpdateComponent();
	ARUTILITIES_API UClass* Z_Construct_UClass_UPassthroughMaterialUpdateComponent_NoRegister();
	AUGMENTEDREALITY_API UEnum* Z_Construct_UEnum_AugmentedReality_EARTextureType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ARUtilities();
// End Cross Module References
	DEFINE_FUNCTION(UPassthroughMaterialUpdateComponent::execSetPassthroughDebugColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_NewDebugColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPassthroughDebugColor(Z_Param_NewDebugColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPassthroughMaterialUpdateComponent::execRemoveAffectedComponent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAffectedComponent(Z_Param_InComponent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPassthroughMaterialUpdateComponent::execAddAffectedComponent)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_InComponent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddAffectedComponent(Z_Param_InComponent);
		P_NATIVE_END;
	}
	void UPassthroughMaterialUpdateComponent::StaticRegisterNativesUPassthroughMaterialUpdateComponent()
	{
		UClass* Class = UPassthroughMaterialUpdateComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddAffectedComponent", &UPassthroughMaterialUpdateComponent::execAddAffectedComponent },
			{ "RemoveAffectedComponent", &UPassthroughMaterialUpdateComponent::execRemoveAffectedComponent },
			{ "SetPassthroughDebugColor", &UPassthroughMaterialUpdateComponent::execSetPassthroughDebugColor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_AddAffectedComponent_Statics
	{
		struct PassthroughMaterialUpdateComponent_eventAddAffectedComponent_Parms
		{
			UPrimitiveComponent* InComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_AddAffectedComponent_Statics::NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_AddAffectedComponent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PassthroughMaterialUpdateComponent_eventAddAffectedComponent_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_AddAffectedComponent_Statics::NewProp_InComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_AddAffectedComponent_Statics::NewProp_InComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_AddAffectedComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_AddAffectedComponent_Statics::NewProp_InComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_AddAffectedComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Passthrough" },
		{ "Comment", "/** Add a component to be affected by the passthrough rendering */" },
		{ "ModuleRelativePath", "Public/PassthroughMaterialUpdateComponent.h" },
		{ "ToolTip", "Add a component to be affected by the passthrough rendering" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_AddAffectedComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPassthroughMaterialUpdateComponent, nullptr, "AddAffectedComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_AddAffectedComponent_Statics::PassthroughMaterialUpdateComponent_eventAddAffectedComponent_Parms), Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_AddAffectedComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_AddAffectedComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_AddAffectedComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_AddAffectedComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_AddAffectedComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_AddAffectedComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_RemoveAffectedComponent_Statics
	{
		struct PassthroughMaterialUpdateComponent_eventRemoveAffectedComponent_Parms
		{
			UPrimitiveComponent* InComponent;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_RemoveAffectedComponent_Statics::NewProp_InComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_RemoveAffectedComponent_Statics::NewProp_InComponent = { "InComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PassthroughMaterialUpdateComponent_eventRemoveAffectedComponent_Parms, InComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_RemoveAffectedComponent_Statics::NewProp_InComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_RemoveAffectedComponent_Statics::NewProp_InComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_RemoveAffectedComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_RemoveAffectedComponent_Statics::NewProp_InComponent,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_RemoveAffectedComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Passthrough" },
		{ "Comment", "/** Remove the component from passthrough rendering */" },
		{ "ModuleRelativePath", "Public/PassthroughMaterialUpdateComponent.h" },
		{ "ToolTip", "Remove the component from passthrough rendering" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_RemoveAffectedComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPassthroughMaterialUpdateComponent, nullptr, "RemoveAffectedComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_RemoveAffectedComponent_Statics::PassthroughMaterialUpdateComponent_eventRemoveAffectedComponent_Parms), Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_RemoveAffectedComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_RemoveAffectedComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_RemoveAffectedComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_RemoveAffectedComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_RemoveAffectedComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_RemoveAffectedComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_SetPassthroughDebugColor_Statics
	{
		struct PassthroughMaterialUpdateComponent_eventSetPassthroughDebugColor_Parms
		{
			FLinearColor NewDebugColor;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewDebugColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_SetPassthroughDebugColor_Statics::NewProp_NewDebugColor = { "NewDebugColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PassthroughMaterialUpdateComponent_eventSetPassthroughDebugColor_Parms, NewDebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_SetPassthroughDebugColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_SetPassthroughDebugColor_Statics::NewProp_NewDebugColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_SetPassthroughDebugColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Passthrough" },
		{ "Comment", "/** Update the passthrough debug color */" },
		{ "ModuleRelativePath", "Public/PassthroughMaterialUpdateComponent.h" },
		{ "ToolTip", "Update the passthrough debug color" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_SetPassthroughDebugColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPassthroughMaterialUpdateComponent, nullptr, "SetPassthroughDebugColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_SetPassthroughDebugColor_Statics::PassthroughMaterialUpdateComponent_eventSetPassthroughDebugColor_Parms), Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_SetPassthroughDebugColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_SetPassthroughDebugColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_SetPassthroughDebugColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_SetPassthroughDebugColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_SetPassthroughDebugColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_SetPassthroughDebugColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPassthroughMaterialUpdateComponent);
	UClass* Z_Construct_UClass_UPassthroughMaterialUpdateComponent_NoRegister()
	{
		return UPassthroughMaterialUpdateComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TextureType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TextureType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PassthroughMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PassthroughMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PassthroughMaterialExternalTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PassthroughMaterialExternalTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PassthroughDebugColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PassthroughDebugColor;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_AffectedComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AffectedComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AffectedComponents;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PendingComponents_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PendingComponents_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PendingComponents;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ARUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_AddAffectedComponent, "AddAffectedComponent" }, // 2399007441
		{ &Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_RemoveAffectedComponent, "RemoveAffectedComponent" }, // 730614429
		{ &Z_Construct_UFunction_UPassthroughMaterialUpdateComponent_SetPassthroughDebugColor, "SetPassthroughDebugColor" }, // 3345433693
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "AR" },
		{ "Comment", "/**\n * Helper component that automatically pick the correct passthrough material to use\n * and handles updating the camera texture in the tick.\n */" },
		{ "IncludePath", "PassthroughMaterialUpdateComponent.h" },
		{ "ModuleRelativePath", "Public/PassthroughMaterialUpdateComponent.h" },
		{ "ToolTip", "Helper component that automatically pick the correct passthrough material to use\nand handles updating the camera texture in the tick." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_TextureType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_TextureType_MetaData[] = {
		{ "Category", "Passthrough" },
		{ "Comment", "/** Which AR texture to use as the camera texture */" },
		{ "ModuleRelativePath", "Public/PassthroughMaterialUpdateComponent.h" },
		{ "ToolTip", "Which AR texture to use as the camera texture" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_TextureType = { "TextureType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPassthroughMaterialUpdateComponent, TextureType), Z_Construct_UEnum_AugmentedReality_EARTextureType, METADATA_PARAMS(Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_TextureType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_TextureType_MetaData)) }; // 33872252
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_PassthroughMaterial_MetaData[] = {
		{ "Category", "Passthrough" },
		{ "Comment", "/** Which material to use for a regular camera texture */" },
		{ "ModuleRelativePath", "Public/PassthroughMaterialUpdateComponent.h" },
		{ "ToolTip", "Which material to use for a regular camera texture" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_PassthroughMaterial = { "PassthroughMaterial", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPassthroughMaterialUpdateComponent, PassthroughMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_PassthroughMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_PassthroughMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_PassthroughMaterialExternalTexture_MetaData[] = {
		{ "Category", "Passthrough" },
		{ "Comment", "/** Which material to use for an external camera texture */" },
		{ "ModuleRelativePath", "Public/PassthroughMaterialUpdateComponent.h" },
		{ "ToolTip", "Which material to use for an external camera texture" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_PassthroughMaterialExternalTexture = { "PassthroughMaterialExternalTexture", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPassthroughMaterialUpdateComponent, PassthroughMaterialExternalTexture), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_PassthroughMaterialExternalTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_PassthroughMaterialExternalTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_PassthroughDebugColor_MetaData[] = {
		{ "Category", "Passthrough" },
		{ "Comment", "/**\n\x09 * The debug color used to modulate the passthrough material.\n\x09 * This can be used to visualize the affected meshes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/PassthroughMaterialUpdateComponent.h" },
		{ "ToolTip", "The debug color used to modulate the passthrough material.\nThis can be used to visualize the affected meshes." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_PassthroughDebugColor = { "PassthroughDebugColor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPassthroughMaterialUpdateComponent, PassthroughDebugColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_PassthroughDebugColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_PassthroughDebugColor_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_AffectedComponents_Inner = { "AffectedComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_AffectedComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PassthroughMaterialUpdateComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_AffectedComponents = { "AffectedComponents", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPassthroughMaterialUpdateComponent, AffectedComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_AffectedComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_AffectedComponents_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_PendingComponents_Inner = { "PendingComponents", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_PendingComponents_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PassthroughMaterialUpdateComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_PendingComponents = { "PendingComponents", nullptr, (EPropertyFlags)0x0044008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPassthroughMaterialUpdateComponent, PendingComponents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_PendingComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_PendingComponents_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_TextureType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_TextureType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_PassthroughMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_PassthroughMaterialExternalTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_PassthroughDebugColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_AffectedComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_AffectedComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_PendingComponents_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::NewProp_PendingComponents,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPassthroughMaterialUpdateComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::ClassParams = {
		&UPassthroughMaterialUpdateComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPassthroughMaterialUpdateComponent()
	{
		if (!Z_Registration_Info_UClass_UPassthroughMaterialUpdateComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPassthroughMaterialUpdateComponent.OuterSingleton, Z_Construct_UClass_UPassthroughMaterialUpdateComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPassthroughMaterialUpdateComponent.OuterSingleton;
	}
	template<> ARUTILITIES_API UClass* StaticClass<UPassthroughMaterialUpdateComponent>()
	{
		return UPassthroughMaterialUpdateComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPassthroughMaterialUpdateComponent);
	UPassthroughMaterialUpdateComponent::~UPassthroughMaterialUpdateComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_PassthroughMaterialUpdateComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_PassthroughMaterialUpdateComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPassthroughMaterialUpdateComponent, UPassthroughMaterialUpdateComponent::StaticClass, TEXT("UPassthroughMaterialUpdateComponent"), &Z_Registration_Info_UClass_UPassthroughMaterialUpdateComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPassthroughMaterialUpdateComponent), 2217081890U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_PassthroughMaterialUpdateComponent_h_2490478500(TEXT("/Script/ARUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_PassthroughMaterialUpdateComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_AR_ARUtilities_Source_ARUtilities_Public_PassthroughMaterialUpdateComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
