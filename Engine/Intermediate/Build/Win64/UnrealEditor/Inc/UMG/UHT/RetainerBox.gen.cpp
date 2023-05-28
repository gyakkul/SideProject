// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/RetainerBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRetainerBox() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UMG_API UClass* Z_Construct_UClass_URetainerBox();
	UMG_API UClass* Z_Construct_UClass_URetainerBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(URetainerBox::execSetRetainRendering)
	{
		P_GET_UBOOL(Z_Param_bInRetainRendering);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRetainRendering(Z_Param_bInRetainRendering);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URetainerBox::execSetTextureParameter)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_TextureParameter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextureParameter(Z_Param_TextureParameter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URetainerBox::execSetEffectMaterial)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_EffectMaterial);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEffectMaterial(Z_Param_EffectMaterial);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URetainerBox::execGetEffectMaterial)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMaterialInstanceDynamic**)Z_Param__Result=P_THIS->GetEffectMaterial();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URetainerBox::execRequestRender)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RequestRender();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(URetainerBox::execSetRenderingPhase)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_RenderPhase);
		P_GET_PROPERTY(FIntProperty,Z_Param_TotalPhases);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRenderingPhase(Z_Param_RenderPhase,Z_Param_TotalPhases);
		P_NATIVE_END;
	}
	void URetainerBox::GetbRetainRender_WrapperImpl(const void* Object, void* OutValue)
	{
		const URetainerBox* Obj = (const URetainerBox*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->IsRetainRendering();
	}
	void URetainerBox::SetbRetainRender_WrapperImpl(void* Object, const void* InValue)
	{
		URetainerBox* Obj = (URetainerBox*)Object;
		bool& Value = *(bool*)InValue;
		Obj->SetRetainRendering(Value);
	}
	void URetainerBox::GetRenderOnInvalidation_WrapperImpl(const void* Object, void* OutValue)
	{
		const URetainerBox* Obj = (const URetainerBox*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->IsRenderOnInvalidation();
	}
	void URetainerBox::GetRenderOnPhase_WrapperImpl(const void* Object, void* OutValue)
	{
		const URetainerBox* Obj = (const URetainerBox*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->IsRenderOnPhase();
	}
	void URetainerBox::GetPhase_WrapperImpl(const void* Object, void* OutValue)
	{
		const URetainerBox* Obj = (const URetainerBox*)Object;
		int32& Result = *(int32*)OutValue;
		Result = (int32)Obj->GetPhase();
	}
	void URetainerBox::GetPhaseCount_WrapperImpl(const void* Object, void* OutValue)
	{
		const URetainerBox* Obj = (const URetainerBox*)Object;
		int32& Result = *(int32*)OutValue;
		Result = (int32)Obj->GetPhaseCount();
	}
	void URetainerBox::GetEffectMaterial_WrapperImpl(const void* Object, void* OutValue)
	{
		const URetainerBox* Obj = (const URetainerBox*)Object;
		UMaterialInterface*& Result = *(UMaterialInterface**)OutValue;
		Result = (UMaterialInterface*)Obj->GetEffectMaterialInterface();
	}
	void URetainerBox::SetEffectMaterial_WrapperImpl(void* Object, const void* InValue)
	{
		URetainerBox* Obj = (URetainerBox*)Object;
		UMaterialInterface*& Value = *(UMaterialInterface**)InValue;
		Obj->SetEffectMaterial(Value);
	}
	void URetainerBox::GetTextureParameter_WrapperImpl(const void* Object, void* OutValue)
	{
		const URetainerBox* Obj = (const URetainerBox*)Object;
		FName& Result = *(FName*)OutValue;
		Result = (FName)Obj->GetTextureParameter();
	}
	void URetainerBox::SetTextureParameter_WrapperImpl(void* Object, const void* InValue)
	{
		URetainerBox* Obj = (URetainerBox*)Object;
		FName& Value = *(FName*)InValue;
		Obj->SetTextureParameter(Value);
	}
	void URetainerBox::StaticRegisterNativesURetainerBox()
	{
		UClass* Class = URetainerBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEffectMaterial", &URetainerBox::execGetEffectMaterial },
			{ "RequestRender", &URetainerBox::execRequestRender },
			{ "SetEffectMaterial", &URetainerBox::execSetEffectMaterial },
			{ "SetRenderingPhase", &URetainerBox::execSetRenderingPhase },
			{ "SetRetainRendering", &URetainerBox::execSetRetainRendering },
			{ "SetTextureParameter", &URetainerBox::execSetTextureParameter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics
	{
		struct RetainerBox_eventGetEffectMaterial_Parms
		{
			UMaterialInstanceDynamic* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RetainerBox_eventGetEffectMaterial_Parms, ReturnValue), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Retainer|Effect" },
		{ "Comment", "/**\n\x09 * Get the current dynamic effect material applied to the retainer box.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "Get the current dynamic effect material applied to the retainer box." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URetainerBox, nullptr, "GetEffectMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::RetainerBox_eventGetEffectMaterial_Parms), Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URetainerBox_GetEffectMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URetainerBox_GetEffectMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URetainerBox_RequestRender_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URetainerBox_RequestRender_Statics::Function_MetaDataParams[] = {
		{ "Category", "Retainer" },
		{ "Comment", "/**\n\x09 * Requests the retainer redrawn the contents it has.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "Requests the retainer redrawn the contents it has." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URetainerBox_RequestRender_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URetainerBox, nullptr, "RequestRender", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URetainerBox_RequestRender_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_RequestRender_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URetainerBox_RequestRender()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URetainerBox_RequestRender_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics
	{
		struct RetainerBox_eventSetEffectMaterial_Parms
		{
			UMaterialInterface* EffectMaterial;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EffectMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::NewProp_EffectMaterial = { "EffectMaterial", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RetainerBox_eventSetEffectMaterial_Parms, EffectMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::NewProp_EffectMaterial,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Retainer|Effect" },
		{ "Comment", "/**\n\x09 * Set a new effect material to the retainer widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "Set a new effect material to the retainer widget." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URetainerBox, nullptr, "SetEffectMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::RetainerBox_eventSetEffectMaterial_Parms), Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URetainerBox_SetEffectMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URetainerBox_SetEffectMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics
	{
		struct RetainerBox_eventSetRenderingPhase_Parms
		{
			int32 RenderPhase;
			int32 TotalPhases;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_RenderPhase;
		static const UECodeGen_Private::FIntPropertyParams NewProp_TotalPhases;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::NewProp_RenderPhase = { "RenderPhase", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RetainerBox_eventSetRenderingPhase_Parms, RenderPhase), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::NewProp_TotalPhases = { "TotalPhases", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RetainerBox_eventSetRenderingPhase_Parms, TotalPhases), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::NewProp_RenderPhase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::NewProp_TotalPhases,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::Function_MetaDataParams[] = {
		{ "Category", "Retainer" },
		{ "Comment", "/**\n\x09 * Requests the retainer redrawn the contents it has.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "Requests the retainer redrawn the contents it has." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URetainerBox, nullptr, "SetRenderingPhase", nullptr, nullptr, sizeof(Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::RetainerBox_eventSetRenderingPhase_Parms), Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URetainerBox_SetRenderingPhase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URetainerBox_SetRenderingPhase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics
	{
		struct RetainerBox_eventSetRetainRendering_Parms
		{
			bool bInRetainRendering;
		};
		static void NewProp_bInRetainRendering_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInRetainRendering;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics::NewProp_bInRetainRendering_SetBit(void* Obj)
	{
		((RetainerBox_eventSetRetainRendering_Parms*)Obj)->bInRetainRendering = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics::NewProp_bInRetainRendering = { "bInRetainRendering", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(RetainerBox_eventSetRetainRendering_Parms), &Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics::NewProp_bInRetainRendering_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics::NewProp_bInRetainRendering,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics::Function_MetaDataParams[] = {
		{ "Category", "Retainer" },
		{ "Comment", "/**\n\x09* Set the flag for if we retain the render or pass-through\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "Set the flag for if we retain the render or pass-through" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URetainerBox, nullptr, "SetRetainRendering", nullptr, nullptr, sizeof(Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics::RetainerBox_eventSetRetainRendering_Parms), Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URetainerBox_SetRetainRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URetainerBox_SetRetainRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics
	{
		struct RetainerBox_eventSetTextureParameter_Parms
		{
			FName TextureParameter;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_TextureParameter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::NewProp_TextureParameter = { "TextureParameter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(RetainerBox_eventSetTextureParameter_Parms, TextureParameter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::NewProp_TextureParameter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Retainer|Effect" },
		{ "Comment", "/**\n\x09 * Sets the name of the texture parameter to set the render target to on the material.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "Sets the name of the texture parameter to set the render target to on the material." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URetainerBox, nullptr, "SetTextureParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::RetainerBox_eventSetTextureParameter_Parms), Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_URetainerBox_SetTextureParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URetainerBox_SetTextureParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URetainerBox);
	UClass* Z_Construct_UClass_URetainerBox_NoRegister()
	{
		return URetainerBox::StaticClass();
	}
	struct Z_Construct_UClass_URetainerBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRetainRender_MetaData[];
#endif
		static void NewProp_bRetainRender_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetainRender;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderOnInvalidation_MetaData[];
#endif
		static void NewProp_RenderOnInvalidation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderOnInvalidation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderOnPhase_MetaData[];
#endif
		static void NewProp_RenderOnPhase_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RenderOnPhase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Phase_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Phase;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhaseCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_PhaseCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EffectMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EffectMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureParameter_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_TextureParameter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URetainerBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_URetainerBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_URetainerBox_GetEffectMaterial, "GetEffectMaterial" }, // 280240792
		{ &Z_Construct_UFunction_URetainerBox_RequestRender, "RequestRender" }, // 3045722836
		{ &Z_Construct_UFunction_URetainerBox_SetEffectMaterial, "SetEffectMaterial" }, // 501460414
		{ &Z_Construct_UFunction_URetainerBox_SetRenderingPhase, "SetRenderingPhase" }, // 1479835000
		{ &Z_Construct_UFunction_URetainerBox_SetRetainRendering, "SetRetainRendering" }, // 3499442480
		{ &Z_Construct_UFunction_URetainerBox_SetTextureParameter, "SetTextureParameter" }, // 3318342985
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetainerBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The Retainer Box renders children widgets to a render target first before\n * later rendering that render target to the screen.  This allows both frequency\n * and phase to be controlled so that the UI can actually render less often than the\n * frequency of the main game render.  It also has the side benefit of allow materials\n * to be applied to the render target after drawing the widgets to apply a simple post process.\n *\n * * Single Child\n * * Caching / Performance\n */" },
		{ "IncludePath", "Components/RetainerBox.h" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "The Retainer Box renders children widgets to a render target first before\nlater rendering that render target to the screen.  This allows both frequency\nand phase to be controlled so that the UI can actually render less often than the\nfrequency of the main game render.  It also has the side benefit of allow materials\nto be applied to the render target after drawing the widgets to apply a simple post process.\n\n* Single Child\n* Caching / Performance" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetainerBox_Statics::NewProp_bRetainRender_MetaData[] = {
		{ "BlueprintSetter", "SetRetainRendering" },
		{ "Category", "Render Rules" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
	};
#endif
	void Z_Construct_UClass_URetainerBox_Statics::NewProp_bRetainRender_SetBit(void* Obj)
	{
		((URetainerBox*)Obj)->bRetainRender = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URetainerBox_Statics::NewProp_bRetainRender = { "bRetainRender", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, &URetainerBox::SetbRetainRender_WrapperImpl, &URetainerBox::GetbRetainRender_WrapperImpl, sizeof(bool), sizeof(URetainerBox), &Z_Construct_UClass_URetainerBox_Statics::NewProp_bRetainRender_SetBit, METADATA_PARAMS(Z_Construct_UClass_URetainerBox_Statics::NewProp_bRetainRender_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetainerBox_Statics::NewProp_bRetainRender_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnInvalidation_MetaData[] = {
		{ "Category", "Render Rules" },
		{ "Comment", "/**\n\x09 * Should this widget redraw the contents it has every time it receives an invalidation request\n\x09 * from it's children, similar to the invalidation panel.\n\x09 */" },
		{ "EditCondition", "bRetainRender" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "Should this widget redraw the contents it has every time it receives an invalidation request\nfrom it's children, similar to the invalidation panel." },
	};
#endif
	void Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnInvalidation_SetBit(void* Obj)
	{
		((URetainerBox*)Obj)->RenderOnInvalidation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnInvalidation = { "RenderOnInvalidation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, &URetainerBox::GetRenderOnInvalidation_WrapperImpl, sizeof(bool), sizeof(URetainerBox), &Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnInvalidation_SetBit, METADATA_PARAMS(Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnInvalidation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnInvalidation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnPhase_MetaData[] = {
		{ "Category", "Render Rules" },
		{ "Comment", "/**\n\x09 * Should this widget redraw the contents it has every time the phase occurs.\n\x09 */" },
		{ "EditCondition", "bRetainRender" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "Should this widget redraw the contents it has every time the phase occurs." },
	};
#endif
	void Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnPhase_SetBit(void* Obj)
	{
		((URetainerBox*)Obj)->RenderOnPhase = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnPhase = { "RenderOnPhase", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, &URetainerBox::GetRenderOnPhase_WrapperImpl, sizeof(bool), sizeof(URetainerBox), &Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnPhase_SetBit, METADATA_PARAMS(Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnPhase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnPhase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetainerBox_Statics::NewProp_Phase_MetaData[] = {
		{ "Category", "Render Rules" },
		{ "ClampMin", "0" },
		{ "Comment", "/**\n\x09 * The Phase this widget will draw on.\n\x09 *\n\x09 * If the Phase is 0, and the PhaseCount is 1, the widget will be drawn fresh every frame.\n\x09 * If the Phase were 0, and the PhaseCount were 2, this retainer would draw a fresh frame every\n\x09 * other frame.  So in a 60Hz game, the UI would render at 30Hz.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "The Phase this widget will draw on.\n\nIf the Phase is 0, and the PhaseCount is 1, the widget will be drawn fresh every frame.\nIf the Phase were 0, and the PhaseCount were 2, this retainer would draw a fresh frame every\nother frame.  So in a 60Hz game, the UI would render at 30Hz." },
		{ "UIMin", "0" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URetainerBox_Statics::NewProp_Phase = { "Phase", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, &URetainerBox::GetPhase_WrapperImpl, STRUCT_OFFSET(URetainerBox, Phase), METADATA_PARAMS(Z_Construct_UClass_URetainerBox_Statics::NewProp_Phase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetainerBox_Statics::NewProp_Phase_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetainerBox_Statics::NewProp_PhaseCount_MetaData[] = {
		{ "Category", "Render Rules" },
		{ "ClampMin", "1" },
		{ "Comment", "/**\n\x09 * The PhaseCount controls how many phases are possible know what to modulus the current frame \n\x09 * count by to determine if this is the current frame to draw the widget on.\n\x09 * \n\x09 * If the Phase is 0, and the PhaseCount is 1, the widget will be drawn fresh every frame.  \n\x09 * If the Phase were 0, and the PhaseCount were 2, this retainer would draw a fresh frame every \n\x09 * other frame.  So in a 60Hz game, the UI would render at 30Hz.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "The PhaseCount controls how many phases are possible know what to modulus the current frame\ncount by to determine if this is the current frame to draw the widget on.\n\nIf the Phase is 0, and the PhaseCount is 1, the widget will be drawn fresh every frame.\nIf the Phase were 0, and the PhaseCount were 2, this retainer would draw a fresh frame every\nother frame.  So in a 60Hz game, the UI would render at 30Hz." },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_URetainerBox_Statics::NewProp_PhaseCount = { "PhaseCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, &URetainerBox::GetPhaseCount_WrapperImpl, STRUCT_OFFSET(URetainerBox, PhaseCount), METADATA_PARAMS(Z_Construct_UClass_URetainerBox_Statics::NewProp_PhaseCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetainerBox_Statics::NewProp_PhaseCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetainerBox_Statics::NewProp_EffectMaterial_MetaData[] = {
		{ "BlueprintSetter", "SetEffectMaterial" },
		{ "Category", "Effect" },
		{ "Comment", "/**\n\x09 * The effect to optionally apply to the render target.  We will set the texture sampler based on the name\n\x09 * set in the @TextureParameter property.\n\x09 * \n\x09 * If you want to adjust transparency of the final image, make sure you set Blend Mode to AlphaComposite (Pre-Multiplied Alpha)\n\x09 * and make sure to multiply the alpha you're apply across the surface to the color and the alpha of the render target, otherwise\n\x09 * you won't see the expected color.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "The effect to optionally apply to the render target.  We will set the texture sampler based on the name\nset in the @TextureParameter property.\n\nIf you want to adjust transparency of the final image, make sure you set Blend Mode to AlphaComposite (Pre-Multiplied Alpha)\nand make sure to multiply the alpha you're apply across the surface to the color and the alpha of the render target, otherwise\nyou won't see the expected color." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URetainerBox_Statics::NewProp_EffectMaterial = { "EffectMaterial", nullptr, (EPropertyFlags)0x0024080000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, &URetainerBox::SetEffectMaterial_WrapperImpl, &URetainerBox::GetEffectMaterial_WrapperImpl, STRUCT_OFFSET(URetainerBox, EffectMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URetainerBox_Statics::NewProp_EffectMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetainerBox_Statics::NewProp_EffectMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URetainerBox_Statics::NewProp_TextureParameter_MetaData[] = {
		{ "BlueprintSetter", "SetTextureParameter" },
		{ "Category", "Effect" },
		{ "Comment", "/**\n\x09 * The texture sampler parameter of the @EffectMaterial, that we'll set to the render target.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/RetainerBox.h" },
		{ "ToolTip", "The texture sampler parameter of the @EffectMaterial, that we'll set to the render target." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_URetainerBox_Statics::NewProp_TextureParameter = { "TextureParameter", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, &URetainerBox::SetTextureParameter_WrapperImpl, &URetainerBox::GetTextureParameter_WrapperImpl, STRUCT_OFFSET(URetainerBox, TextureParameter), METADATA_PARAMS(Z_Construct_UClass_URetainerBox_Statics::NewProp_TextureParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URetainerBox_Statics::NewProp_TextureParameter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URetainerBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetainerBox_Statics::NewProp_bRetainRender,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnInvalidation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetainerBox_Statics::NewProp_RenderOnPhase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetainerBox_Statics::NewProp_Phase,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetainerBox_Statics::NewProp_PhaseCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetainerBox_Statics::NewProp_EffectMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URetainerBox_Statics::NewProp_TextureParameter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URetainerBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URetainerBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URetainerBox_Statics::ClassParams = {
		&URetainerBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_URetainerBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_URetainerBox_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URetainerBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URetainerBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URetainerBox()
	{
		if (!Z_Registration_Info_UClass_URetainerBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URetainerBox.OuterSingleton, Z_Construct_UClass_URetainerBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URetainerBox.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<URetainerBox>()
	{
		return URetainerBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URetainerBox);
	URetainerBox::~URetainerBox() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URetainerBox, URetainerBox::StaticClass, TEXT("URetainerBox"), &Z_Registration_Info_UClass_URetainerBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URetainerBox), 1003003922U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_340614511(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_RetainerBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
