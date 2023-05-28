// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/UIFImageBlock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIFImageBlock() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESlateBrushTileType();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkImageBlock();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkImageBlock_NoRegister();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkWidget();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkImageBlockData();
	UPackage* Z_Construct_UPackage__Script_UIFramework();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIFrameworkImageBlockData;
class UScriptStruct* FUIFrameworkImageBlockData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIFrameworkImageBlockData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIFrameworkImageBlockData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIFrameworkImageBlockData, (UObject*)Z_Construct_UPackage__Script_UIFramework(), TEXT("UIFrameworkImageBlockData"));
	}
	return Z_Registration_Info_UScriptStruct_UIFrameworkImageBlockData.OuterSingleton;
}
template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<FUIFrameworkImageBlockData>()
{
	return FUIFrameworkImageBlockData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResourceObject_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ResourceObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tiling_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Tiling;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseTextureSize_MetaData[];
#endif
		static void NewProp_bUseTextureSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTextureSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFImageBlock.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIFrameworkImageBlockData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewProp_Tint_MetaData[] = {
		{ "Comment", "/** Tinting applied to the image. */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFImageBlock.h" },
		{ "ToolTip", "Tinting applied to the image." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewProp_Tint = { "Tint", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkImageBlockData, Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewProp_Tint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewProp_Tint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewProp_ResourceObject_MetaData[] = {
		{ "Comment", "/**\n\x09 * The image to render for this brush, can be a UTexture2D or UMaterialInterface or an object implementing\n\x09 * the AtlasedTextureInterface.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFImageBlock.h" },
		{ "ToolTip", "The image to render for this brush, can be a UTexture2D or UMaterialInterface or an object implementing\nthe AtlasedTextureInterface." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewProp_ResourceObject = { "ResourceObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkImageBlockData, ResourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewProp_ResourceObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewProp_ResourceObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewProp_DesiredSize_MetaData[] = {
		{ "Comment", "/** Size of the resource in Slate Units */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFImageBlock.h" },
		{ "ToolTip", "Size of the resource in Slate Units" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewProp_DesiredSize = { "DesiredSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkImageBlockData, DesiredSize), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewProp_DesiredSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewProp_DesiredSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewProp_Tiling_MetaData[] = {
		{ "Comment", "/** How to tile the image. */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFImageBlock.h" },
		{ "ToolTip", "How to tile the image." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewProp_Tiling = { "Tiling", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkImageBlockData, Tiling), Z_Construct_UEnum_SlateCore_ESlateBrushTileType, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewProp_Tiling_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewProp_Tiling_MetaData)) }; // 3702849228
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewProp_bUseTextureSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFImageBlock.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewProp_bUseTextureSize_SetBit(void* Obj)
	{
		((FUIFrameworkImageBlockData*)Obj)->bUseTextureSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewProp_bUseTextureSize = { "bUseTextureSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FUIFrameworkImageBlockData), &Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewProp_bUseTextureSize_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewProp_bUseTextureSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewProp_bUseTextureSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewProp_Tint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewProp_ResourceObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewProp_DesiredSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewProp_Tiling,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewProp_bUseTextureSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
		nullptr,
		&NewStructOps,
		"UIFrameworkImageBlockData",
		sizeof(FUIFrameworkImageBlockData),
		alignof(FUIFrameworkImageBlockData),
		Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkImageBlockData()
	{
		if (!Z_Registration_Info_UScriptStruct_UIFrameworkImageBlockData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIFrameworkImageBlockData.InnerSingleton, Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIFrameworkImageBlockData.InnerSingleton;
	}
	DEFINE_FUNCTION(UUIFrameworkImageBlock::execOnRep_Data)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Data();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkImageBlock::execGetTiling)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TEnumAsByte<ESlateBrushTileType::Type>*)Z_Param__Result=P_THIS->GetTiling();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkImageBlock::execSetTiling)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_OverflowPolicy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTiling(ESlateBrushTileType::Type(Z_Param_OverflowPolicy));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkImageBlock::execGetDesiredSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2f*)Z_Param__Result=P_THIS->GetDesiredSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkImageBlock::execSetDesiredSize)
	{
		P_GET_STRUCT(FVector2f,Z_Param_DesiredSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredSize(Z_Param_DesiredSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkImageBlock::execGetTint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetTint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkImageBlock::execSetTint)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_Tint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTint(Z_Param_Tint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkImageBlock::execSetTexture)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UTexture2D>,Z_Param_Texture);
		P_GET_UBOOL(Z_Param_bUseTextureSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTexture(Z_Param_Texture,Z_Param_bUseTextureSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkImageBlock::execGeResourceObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSoftObjectPtr<UObject>*)Z_Param__Result=P_THIS->GeResourceObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkImageBlock::execSetMaterial)
	{
		P_GET_SOFTOBJECT(TSoftObjectPtr<UMaterialInterface>,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaterial(Z_Param_Material);
		P_NATIVE_END;
	}
	void UUIFrameworkImageBlock::StaticRegisterNativesUUIFrameworkImageBlock()
	{
		UClass* Class = UUIFrameworkImageBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GeResourceObject", &UUIFrameworkImageBlock::execGeResourceObject },
			{ "GetDesiredSize", &UUIFrameworkImageBlock::execGetDesiredSize },
			{ "GetTiling", &UUIFrameworkImageBlock::execGetTiling },
			{ "GetTint", &UUIFrameworkImageBlock::execGetTint },
			{ "OnRep_Data", &UUIFrameworkImageBlock::execOnRep_Data },
			{ "SetDesiredSize", &UUIFrameworkImageBlock::execSetDesiredSize },
			{ "SetMaterial", &UUIFrameworkImageBlock::execSetMaterial },
			{ "SetTexture", &UUIFrameworkImageBlock::execSetTexture },
			{ "SetTiling", &UUIFrameworkImageBlock::execSetTiling },
			{ "SetTint", &UUIFrameworkImageBlock::execSetTint },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIFrameworkImageBlock_GeResourceObject_Statics
	{
		struct UIFrameworkImageBlock_eventGeResourceObject_Parms
		{
			TSoftObjectPtr<UObject> ReturnValue;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UUIFrameworkImageBlock_GeResourceObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkImageBlock_eventGeResourceObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkImageBlock_GeResourceObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkImageBlock_GeResourceObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkImageBlock_GeResourceObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFImageBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkImageBlock_GeResourceObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkImageBlock, nullptr, "GeResourceObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkImageBlock_GeResourceObject_Statics::UIFrameworkImageBlock_eventGeResourceObject_Parms), Z_Construct_UFunction_UUIFrameworkImageBlock_GeResourceObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkImageBlock_GeResourceObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkImageBlock_GeResourceObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkImageBlock_GeResourceObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkImageBlock_GeResourceObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkImageBlock_GeResourceObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkImageBlock_GetDesiredSize_Statics
	{
		struct UIFrameworkImageBlock_eventGetDesiredSize_Parms
		{
			FVector2f ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIFrameworkImageBlock_GetDesiredSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkImageBlock_eventGetDesiredSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkImageBlock_GetDesiredSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkImageBlock_GetDesiredSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkImageBlock_GetDesiredSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFImageBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkImageBlock_GetDesiredSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkImageBlock, nullptr, "GetDesiredSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkImageBlock_GetDesiredSize_Statics::UIFrameworkImageBlock_eventGetDesiredSize_Parms), Z_Construct_UFunction_UUIFrameworkImageBlock_GetDesiredSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkImageBlock_GetDesiredSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkImageBlock_GetDesiredSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkImageBlock_GetDesiredSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkImageBlock_GetDesiredSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkImageBlock_GetDesiredSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkImageBlock_GetTiling_Statics
	{
		struct UIFrameworkImageBlock_eventGetTiling_Parms
		{
			TEnumAsByte<ESlateBrushTileType::Type> ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUIFrameworkImageBlock_GetTiling_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkImageBlock_eventGetTiling_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_ESlateBrushTileType, METADATA_PARAMS(nullptr, 0) }; // 3702849228
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkImageBlock_GetTiling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkImageBlock_GetTiling_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkImageBlock_GetTiling_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFImageBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkImageBlock_GetTiling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkImageBlock, nullptr, "GetTiling", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkImageBlock_GetTiling_Statics::UIFrameworkImageBlock_eventGetTiling_Parms), Z_Construct_UFunction_UUIFrameworkImageBlock_GetTiling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkImageBlock_GetTiling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkImageBlock_GetTiling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkImageBlock_GetTiling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkImageBlock_GetTiling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkImageBlock_GetTiling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkImageBlock_GetTint_Statics
	{
		struct UIFrameworkImageBlock_eventGetTint_Parms
		{
			FLinearColor ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIFrameworkImageBlock_GetTint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkImageBlock_eventGetTint_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkImageBlock_GetTint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkImageBlock_GetTint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkImageBlock_GetTint_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFImageBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkImageBlock_GetTint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkImageBlock, nullptr, "GetTint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkImageBlock_GetTint_Statics::UIFrameworkImageBlock_eventGetTint_Parms), Z_Construct_UFunction_UUIFrameworkImageBlock_GetTint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkImageBlock_GetTint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkImageBlock_GetTint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkImageBlock_GetTint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkImageBlock_GetTint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkImageBlock_GetTint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkImageBlock_OnRep_Data_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkImageBlock_OnRep_Data_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFImageBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkImageBlock_OnRep_Data_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkImageBlock, nullptr, "OnRep_Data", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkImageBlock_OnRep_Data_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkImageBlock_OnRep_Data_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkImageBlock_OnRep_Data()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkImageBlock_OnRep_Data_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkImageBlock_SetDesiredSize_Statics
	{
		struct UIFrameworkImageBlock_eventSetDesiredSize_Parms
		{
			FVector2f DesiredSize;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIFrameworkImageBlock_SetDesiredSize_Statics::NewProp_DesiredSize = { "DesiredSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkImageBlock_eventSetDesiredSize_Parms, DesiredSize), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkImageBlock_SetDesiredSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkImageBlock_SetDesiredSize_Statics::NewProp_DesiredSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkImageBlock_SetDesiredSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFImageBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkImageBlock_SetDesiredSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkImageBlock, nullptr, "SetDesiredSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkImageBlock_SetDesiredSize_Statics::UIFrameworkImageBlock_eventSetDesiredSize_Parms), Z_Construct_UFunction_UUIFrameworkImageBlock_SetDesiredSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkImageBlock_SetDesiredSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkImageBlock_SetDesiredSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkImageBlock_SetDesiredSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkImageBlock_SetDesiredSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkImageBlock_SetDesiredSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkImageBlock_SetMaterial_Statics
	{
		struct UIFrameworkImageBlock_eventSetMaterial_Parms
		{
			TSoftObjectPtr<UMaterialInterface> Material;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UUIFrameworkImageBlock_SetMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkImageBlock_eventSetMaterial_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkImageBlock_SetMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkImageBlock_SetMaterial_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkImageBlock_SetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFImageBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkImageBlock_SetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkImageBlock, nullptr, "SetMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkImageBlock_SetMaterial_Statics::UIFrameworkImageBlock_eventSetMaterial_Parms), Z_Construct_UFunction_UUIFrameworkImageBlock_SetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkImageBlock_SetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkImageBlock_SetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkImageBlock_SetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkImageBlock_SetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkImageBlock_SetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkImageBlock_SetTexture_Statics
	{
		struct UIFrameworkImageBlock_eventSetTexture_Parms
		{
			TSoftObjectPtr<UTexture2D> Texture;
			bool bUseTextureSize;
		};
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Texture;
		static void NewProp_bUseTextureSize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTextureSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UUIFrameworkImageBlock_SetTexture_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkImageBlock_eventSetTexture_Parms, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUIFrameworkImageBlock_SetTexture_Statics::NewProp_bUseTextureSize_SetBit(void* Obj)
	{
		((UIFrameworkImageBlock_eventSetTexture_Parms*)Obj)->bUseTextureSize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUIFrameworkImageBlock_SetTexture_Statics::NewProp_bUseTextureSize = { "bUseTextureSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UIFrameworkImageBlock_eventSetTexture_Parms), &Z_Construct_UFunction_UUIFrameworkImageBlock_SetTexture_Statics::NewProp_bUseTextureSize_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkImageBlock_SetTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkImageBlock_SetTexture_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkImageBlock_SetTexture_Statics::NewProp_bUseTextureSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkImageBlock_SetTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFImageBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkImageBlock_SetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkImageBlock, nullptr, "SetTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkImageBlock_SetTexture_Statics::UIFrameworkImageBlock_eventSetTexture_Parms), Z_Construct_UFunction_UUIFrameworkImageBlock_SetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkImageBlock_SetTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkImageBlock_SetTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkImageBlock_SetTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkImageBlock_SetTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkImageBlock_SetTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkImageBlock_SetTiling_Statics
	{
		struct UIFrameworkImageBlock_eventSetTiling_Parms
		{
			TEnumAsByte<ESlateBrushTileType::Type> OverflowPolicy;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverflowPolicy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUIFrameworkImageBlock_SetTiling_Statics::NewProp_OverflowPolicy = { "OverflowPolicy", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkImageBlock_eventSetTiling_Parms, OverflowPolicy), Z_Construct_UEnum_SlateCore_ESlateBrushTileType, METADATA_PARAMS(nullptr, 0) }; // 3702849228
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkImageBlock_SetTiling_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkImageBlock_SetTiling_Statics::NewProp_OverflowPolicy,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkImageBlock_SetTiling_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFImageBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkImageBlock_SetTiling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkImageBlock, nullptr, "SetTiling", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkImageBlock_SetTiling_Statics::UIFrameworkImageBlock_eventSetTiling_Parms), Z_Construct_UFunction_UUIFrameworkImageBlock_SetTiling_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkImageBlock_SetTiling_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkImageBlock_SetTiling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkImageBlock_SetTiling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkImageBlock_SetTiling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkImageBlock_SetTiling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkImageBlock_SetTint_Statics
	{
		struct UIFrameworkImageBlock_eventSetTint_Parms
		{
			FLinearColor Tint;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Tint;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIFrameworkImageBlock_SetTint_Statics::NewProp_Tint = { "Tint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkImageBlock_eventSetTint_Parms, Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkImageBlock_SetTint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkImageBlock_SetTint_Statics::NewProp_Tint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkImageBlock_SetTint_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFImageBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkImageBlock_SetTint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkImageBlock, nullptr, "SetTint", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkImageBlock_SetTint_Statics::UIFrameworkImageBlock_eventSetTint_Parms), Z_Construct_UFunction_UUIFrameworkImageBlock_SetTint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkImageBlock_SetTint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkImageBlock_SetTint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkImageBlock_SetTint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkImageBlock_SetTint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkImageBlock_SetTint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIFrameworkImageBlock);
	UClass* Z_Construct_UClass_UUIFrameworkImageBlock_NoRegister()
	{
		return UUIFrameworkImageBlock::StaticClass();
	}
	struct Z_Construct_UClass_UUIFrameworkImageBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWaitForResourceToBeLoaded_MetaData[];
#endif
		static void NewProp_bWaitForResourceToBeLoaded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWaitForResourceToBeLoaded;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIFrameworkImageBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUIFrameworkWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIFrameworkImageBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIFrameworkImageBlock_GeResourceObject, "GeResourceObject" }, // 3960566992
		{ &Z_Construct_UFunction_UUIFrameworkImageBlock_GetDesiredSize, "GetDesiredSize" }, // 3436535513
		{ &Z_Construct_UFunction_UUIFrameworkImageBlock_GetTiling, "GetTiling" }, // 634932077
		{ &Z_Construct_UFunction_UUIFrameworkImageBlock_GetTint, "GetTint" }, // 1976558084
		{ &Z_Construct_UFunction_UUIFrameworkImageBlock_OnRep_Data, "OnRep_Data" }, // 1082214857
		{ &Z_Construct_UFunction_UUIFrameworkImageBlock_SetDesiredSize, "SetDesiredSize" }, // 4201753553
		{ &Z_Construct_UFunction_UUIFrameworkImageBlock_SetMaterial, "SetMaterial" }, // 316178882
		{ &Z_Construct_UFunction_UUIFrameworkImageBlock_SetTexture, "SetTexture" }, // 2392295250
		{ &Z_Construct_UFunction_UUIFrameworkImageBlock_SetTiling, "SetTiling" }, // 2956456299
		{ &Z_Construct_UFunction_UUIFrameworkImageBlock_SetTint, "SetTint" }, // 2020631458
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkImageBlock_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "DisplayName", "Image Block UIFramework" },
		{ "IncludePath", "Widgets/UIFImageBlock.h" },
		{ "ModuleRelativePath", "Public/Widgets/UIFImageBlock.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkImageBlock_Statics::NewProp_Data_MetaData[] = {
		{ "Comment", "/** Tinting applied to the image. */" },
		{ "ModuleRelativePath", "Public/Widgets/UIFImageBlock.h" },
		{ "ToolTip", "Tinting applied to the image." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIFrameworkImageBlock_Statics::NewProp_Data = { "Data", "OnRep_Data", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIFrameworkImageBlock, Data), Z_Construct_UScriptStruct_FUIFrameworkImageBlockData, METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkImageBlock_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkImageBlock_Statics::NewProp_Data_MetaData)) }; // 630364571
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkImageBlock_Statics::NewProp_bWaitForResourceToBeLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFImageBlock.h" },
	};
#endif
	void Z_Construct_UClass_UUIFrameworkImageBlock_Statics::NewProp_bWaitForResourceToBeLoaded_SetBit(void* Obj)
	{
		((UUIFrameworkImageBlock*)Obj)->bWaitForResourceToBeLoaded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUIFrameworkImageBlock_Statics::NewProp_bWaitForResourceToBeLoaded = { "bWaitForResourceToBeLoaded", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UUIFrameworkImageBlock), &Z_Construct_UClass_UUIFrameworkImageBlock_Statics::NewProp_bWaitForResourceToBeLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkImageBlock_Statics::NewProp_bWaitForResourceToBeLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkImageBlock_Statics::NewProp_bWaitForResourceToBeLoaded_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIFrameworkImageBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkImageBlock_Statics::NewProp_Data,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkImageBlock_Statics::NewProp_bWaitForResourceToBeLoaded,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIFrameworkImageBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIFrameworkImageBlock>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIFrameworkImageBlock_Statics::ClassParams = {
		&UUIFrameworkImageBlock::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUIFrameworkImageBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkImageBlock_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkImageBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkImageBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIFrameworkImageBlock()
	{
		if (!Z_Registration_Info_UClass_UUIFrameworkImageBlock.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIFrameworkImageBlock.OuterSingleton, Z_Construct_UClass_UUIFrameworkImageBlock_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUIFrameworkImageBlock.OuterSingleton;
	}
	template<> UIFRAMEWORK_API UClass* StaticClass<UUIFrameworkImageBlock>()
	{
		return UUIFrameworkImageBlock::StaticClass();
	}

	void UUIFrameworkImageBlock::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Data(TEXT("Data"));

		const bool bIsValid = true
			&& Name_Data == ClassReps[(int32)ENetFields_Private::Data].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UUIFrameworkImageBlock"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIFrameworkImageBlock);
	UUIFrameworkImageBlock::~UUIFrameworkImageBlock() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_Statics::ScriptStructInfo[] = {
		{ FUIFrameworkImageBlockData::StaticStruct, Z_Construct_UScriptStruct_FUIFrameworkImageBlockData_Statics::NewStructOps, TEXT("UIFrameworkImageBlockData"), &Z_Registration_Info_UScriptStruct_UIFrameworkImageBlockData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIFrameworkImageBlockData), 630364571U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUIFrameworkImageBlock, UUIFrameworkImageBlock::StaticClass, TEXT("UUIFrameworkImageBlock"), &Z_Registration_Info_UClass_UUIFrameworkImageBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIFrameworkImageBlock), 4116082679U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_700779161(TEXT("/Script/UIFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFImageBlock_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
