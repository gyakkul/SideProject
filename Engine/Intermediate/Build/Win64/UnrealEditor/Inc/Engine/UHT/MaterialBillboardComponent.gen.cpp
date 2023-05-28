// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Components/MaterialBillboardComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaterialBillboardComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialBillboardComponent();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialSpriteElement();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MaterialSpriteElement;
class UScriptStruct* FMaterialSpriteElement::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MaterialSpriteElement.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MaterialSpriteElement.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMaterialSpriteElement, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("MaterialSpriteElement"));
	}
	return Z_Registration_Info_UScriptStruct_MaterialSpriteElement.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FMaterialSpriteElement>()
{
	return FMaterialSpriteElement::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToOpacityCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DistanceToOpacityCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSizeIsInScreenSpace_MetaData[];
#endif
		static void NewProp_bSizeIsInScreenSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSizeIsInScreenSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseSizeX_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSizeX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseSizeY_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSizeY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToSizeCurve_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DistanceToSizeCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMaterialSpriteElement>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "MaterialSpriteElement" },
		{ "Comment", "/** The material that the sprite is rendered with. */" },
		{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
		{ "ToolTip", "The material that the sprite is rendered with." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialSpriteElement, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_DistanceToOpacityCurve_MetaData[] = {
		{ "Category", "MaterialSpriteElement" },
		{ "Comment", "/** A curve that maps distance on the X axis to the sprite opacity on the Y axis. */" },
		{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
		{ "ToolTip", "A curve that maps distance on the X axis to the sprite opacity on the Y axis." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_DistanceToOpacityCurve = { "DistanceToOpacityCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialSpriteElement, DistanceToOpacityCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_DistanceToOpacityCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_DistanceToOpacityCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_bSizeIsInScreenSpace_MetaData[] = {
		{ "Category", "MaterialSpriteElement" },
		{ "Comment", "/** Whether the size is defined in screen-space or world-space. */" },
		{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
		{ "ToolTip", "Whether the size is defined in screen-space or world-space." },
	};
#endif
	void Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_bSizeIsInScreenSpace_SetBit(void* Obj)
	{
		((FMaterialSpriteElement*)Obj)->bSizeIsInScreenSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_bSizeIsInScreenSpace = { "bSizeIsInScreenSpace", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(FMaterialSpriteElement), &Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_bSizeIsInScreenSpace_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_bSizeIsInScreenSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_bSizeIsInScreenSpace_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_BaseSizeX_MetaData[] = {
		{ "Category", "MaterialSpriteElement" },
		{ "Comment", "/** The base width of the sprite, multiplied with the DistanceToSizeCurve. */" },
		{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
		{ "ToolTip", "The base width of the sprite, multiplied with the DistanceToSizeCurve." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_BaseSizeX = { "BaseSizeX", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialSpriteElement, BaseSizeX), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_BaseSizeX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_BaseSizeX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_BaseSizeY_MetaData[] = {
		{ "Category", "MaterialSpriteElement" },
		{ "Comment", "/** The base height of the sprite, multiplied with the DistanceToSizeCurve. */" },
		{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
		{ "ToolTip", "The base height of the sprite, multiplied with the DistanceToSizeCurve." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_BaseSizeY = { "BaseSizeY", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialSpriteElement, BaseSizeY), METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_BaseSizeY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_BaseSizeY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_DistanceToSizeCurve_MetaData[] = {
		{ "Category", "MaterialSpriteElement" },
		{ "Comment", "/** A curve that maps distance on the X axis to the sprite size on the Y axis. */" },
		{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
		{ "ToolTip", "A curve that maps distance on the X axis to the sprite size on the Y axis." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_DistanceToSizeCurve = { "DistanceToSizeCurve", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMaterialSpriteElement, DistanceToSizeCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_DistanceToSizeCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_DistanceToSizeCurve_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_DistanceToOpacityCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_bSizeIsInScreenSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_BaseSizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_BaseSizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewProp_DistanceToSizeCurve,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"MaterialSpriteElement",
		sizeof(FMaterialSpriteElement),
		alignof(FMaterialSpriteElement),
		Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMaterialSpriteElement()
	{
		if (!Z_Registration_Info_UScriptStruct_MaterialSpriteElement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MaterialSpriteElement.InnerSingleton, Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MaterialSpriteElement.InnerSingleton;
	}
	DEFINE_FUNCTION(UMaterialBillboardComponent::execAddElement)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_GET_OBJECT(UCurveFloat,Z_Param_DistanceToOpacityCurve);
		P_GET_UBOOL(Z_Param_bSizeIsInScreenSpace);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BaseSizeX);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BaseSizeY);
		P_GET_OBJECT(UCurveFloat,Z_Param_DistanceToSizeCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddElement(Z_Param_Material,Z_Param_DistanceToOpacityCurve,Z_Param_bSizeIsInScreenSpace,Z_Param_BaseSizeX,Z_Param_BaseSizeY,Z_Param_DistanceToSizeCurve);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMaterialBillboardComponent::execSetElements)
	{
		P_GET_TARRAY_REF(FMaterialSpriteElement,Z_Param_Out_NewElements);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetElements(Z_Param_Out_NewElements);
		P_NATIVE_END;
	}
	void UMaterialBillboardComponent::StaticRegisterNativesUMaterialBillboardComponent()
	{
		UClass* Class = UMaterialBillboardComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddElement", &UMaterialBillboardComponent::execAddElement },
			{ "SetElements", &UMaterialBillboardComponent::execSetElements },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics
	{
		struct MaterialBillboardComponent_eventAddElement_Parms
		{
			UMaterialInterface* Material;
			UCurveFloat* DistanceToOpacityCurve;
			bool bSizeIsInScreenSpace;
			float BaseSizeX;
			float BaseSizeY;
			UCurveFloat* DistanceToSizeCurve;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceToOpacityCurve;
		static void NewProp_bSizeIsInScreenSpace_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSizeIsInScreenSpace;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSizeX;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseSizeY;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DistanceToSizeCurve;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialBillboardComponent_eventAddElement_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::NewProp_DistanceToOpacityCurve = { "DistanceToOpacityCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialBillboardComponent_eventAddElement_Parms, DistanceToOpacityCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::NewProp_bSizeIsInScreenSpace_SetBit(void* Obj)
	{
		((MaterialBillboardComponent_eventAddElement_Parms*)Obj)->bSizeIsInScreenSpace = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::NewProp_bSizeIsInScreenSpace = { "bSizeIsInScreenSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MaterialBillboardComponent_eventAddElement_Parms), &Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::NewProp_bSizeIsInScreenSpace_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::NewProp_BaseSizeX = { "BaseSizeX", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialBillboardComponent_eventAddElement_Parms, BaseSizeX), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::NewProp_BaseSizeY = { "BaseSizeY", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialBillboardComponent_eventAddElement_Parms, BaseSizeY), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::NewProp_DistanceToSizeCurve = { "DistanceToSizeCurve", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialBillboardComponent_eventAddElement_Parms, DistanceToSizeCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::NewProp_DistanceToOpacityCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::NewProp_bSizeIsInScreenSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::NewProp_BaseSizeX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::NewProp_BaseSizeY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::NewProp_DistanceToSizeCurve,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|MaterialSprite" },
		{ "Comment", "/** Adds an element to the sprite. */" },
		{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
		{ "ToolTip", "Adds an element to the sprite." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialBillboardComponent, nullptr, "AddElement", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::MaterialBillboardComponent_eventAddElement_Parms), Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialBillboardComponent_AddElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialBillboardComponent_AddElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics
	{
		struct MaterialBillboardComponent_eventSetElements_Parms
		{
			TArray<FMaterialSpriteElement> NewElements;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewElements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewElements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NewElements;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::NewProp_NewElements_Inner = { "NewElements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMaterialSpriteElement, METADATA_PARAMS(nullptr, 0) }; // 644479001
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::NewProp_NewElements_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::NewProp_NewElements = { "NewElements", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MaterialBillboardComponent_eventSetElements_Parms, NewElements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::NewProp_NewElements_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::NewProp_NewElements_MetaData)) }; // 644479001
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::NewProp_NewElements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::NewProp_NewElements,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::Function_MetaDataParams[] = {
		{ "Category", "Rendering|Components|MaterialSprite" },
		{ "Comment", "/** Set all elements of this material billboard component */" },
		{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
		{ "ToolTip", "Set all elements of this material billboard component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMaterialBillboardComponent, nullptr, "SetElements", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::MaterialBillboardComponent_eventSetElements_Parms), Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMaterialBillboardComponent_SetElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMaterialBillboardComponent_SetElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMaterialBillboardComponent);
	UClass* Z_Construct_UClass_UMaterialBillboardComponent_NoRegister()
	{
		return UMaterialBillboardComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMaterialBillboardComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Elements_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Elements_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Elements;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaterialBillboardComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPrimitiveComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMaterialBillboardComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMaterialBillboardComponent_AddElement, "AddElement" }, // 1833028328
		{ &Z_Construct_UFunction_UMaterialBillboardComponent_SetElements, "SetElements" }, // 377314126
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialBillboardComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Rendering" },
		{ "Comment", "/** \n * A 2d material that will be rendered always facing the camera.\n */" },
		{ "HideCategories", "Object Activation Components|Activation Physics Collision Lighting Mesh PhysicsVolume Mobility VirtualTexture Trigger" },
		{ "IncludePath", "Components/MaterialBillboardComponent.h" },
		{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
		{ "ToolTip", "A 2d material that will be rendered always facing the camera." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMaterialBillboardComponent_Statics::NewProp_Elements_Inner = { "Elements", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FMaterialSpriteElement, METADATA_PARAMS(nullptr, 0) }; // 644479001
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaterialBillboardComponent_Statics::NewProp_Elements_MetaData[] = {
		{ "Category", "Sprite" },
		{ "Comment", "/** Current array of material billboard elements */" },
		{ "ModuleRelativePath", "Classes/Components/MaterialBillboardComponent.h" },
		{ "ToolTip", "Current array of material billboard elements" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMaterialBillboardComponent_Statics::NewProp_Elements = { "Elements", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMaterialBillboardComponent, Elements), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaterialBillboardComponent_Statics::NewProp_Elements_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialBillboardComponent_Statics::NewProp_Elements_MetaData)) }; // 644479001
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaterialBillboardComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialBillboardComponent_Statics::NewProp_Elements_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaterialBillboardComponent_Statics::NewProp_Elements,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaterialBillboardComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaterialBillboardComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMaterialBillboardComponent_Statics::ClassParams = {
		&UMaterialBillboardComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMaterialBillboardComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialBillboardComponent_Statics::PropPointers),
		0,
		0x00B030A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMaterialBillboardComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaterialBillboardComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaterialBillboardComponent()
	{
		if (!Z_Registration_Info_UClass_UMaterialBillboardComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMaterialBillboardComponent.OuterSingleton, Z_Construct_UClass_UMaterialBillboardComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMaterialBillboardComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UMaterialBillboardComponent>()
	{
		return UMaterialBillboardComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaterialBillboardComponent);
	UMaterialBillboardComponent::~UMaterialBillboardComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_Statics::ScriptStructInfo[] = {
		{ FMaterialSpriteElement::StaticStruct, Z_Construct_UScriptStruct_FMaterialSpriteElement_Statics::NewStructOps, TEXT("MaterialSpriteElement"), &Z_Registration_Info_UScriptStruct_MaterialSpriteElement, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMaterialSpriteElement), 644479001U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMaterialBillboardComponent, UMaterialBillboardComponent::StaticClass, TEXT("UMaterialBillboardComponent"), &Z_Registration_Info_UClass_UMaterialBillboardComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMaterialBillboardComponent), 16730362U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_1843522947(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Components_MaterialBillboardComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
