// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprints/TextureShareBlueprintContainers.h"
#include "Blueprints/TextureShareBlueprintContainersBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureShareBlueprintContainers() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	TEXTURESHARE_API UClass* Z_Construct_UClass_UTextureShare();
	TEXTURESHARE_API UClass* Z_Construct_UClass_UTextureShare_NoRegister();
	TEXTURESHARE_API UClass* Z_Construct_UClass_UTextureShareObject();
	TEXTURESHARE_API UClass* Z_Construct_UClass_UTextureShareObject_NoRegister();
	TEXTURESHARE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureShareCustomData();
	TEXTURESHARE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureShareObjectDesc();
	TEXTURESHARE_API UScriptStruct* Z_Construct_UScriptStruct_FTextureShareTexturesDesc();
	UPackage* Z_Construct_UPackage__Script_TextureShare();
// End Cross Module References
	DEFINE_FUNCTION(UTextureShareObject::execSendCustomData)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_InSendParameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SendCustomData(Z_Param_Out_InSendParameters);
		P_NATIVE_END;
	}
	void UTextureShareObject::StaticRegisterNativesUTextureShareObject()
	{
		UClass* Class = UTextureShareObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SendCustomData", &UTextureShareObject::execSendCustomData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextureShareObject_SendCustomData_Statics
	{
		struct TextureShareObject_eventSendCustomData_Parms
		{
			TMap<FString,FString> InSendParameters;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_InSendParameters_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_InSendParameters_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSendParameters_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_InSendParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextureShareObject_SendCustomData_Statics::NewProp_InSendParameters_ValueProp = { "InSendParameters", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextureShareObject_SendCustomData_Statics::NewProp_InSendParameters_Key_KeyProp = { "InSendParameters_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureShareObject_SendCustomData_Statics::NewProp_InSendParameters_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UTextureShareObject_SendCustomData_Statics::NewProp_InSendParameters = { "InSendParameters", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextureShareObject_eventSendCustomData_Parms, InSendParameters), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTextureShareObject_SendCustomData_Statics::NewProp_InSendParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureShareObject_SendCustomData_Statics::NewProp_InSendParameters_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureShareObject_SendCustomData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureShareObject_SendCustomData_Statics::NewProp_InSendParameters_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureShareObject_SendCustomData_Statics::NewProp_InSendParameters_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureShareObject_SendCustomData_Statics::NewProp_InSendParameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureShareObject_SendCustomData_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextureShare" },
		{ "Comment", "// Override CustomData SendParameters\n" },
		{ "DisplayName", "Send Custom Data" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainers.h" },
		{ "ToolTip", "Override CustomData SendParameters" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureShareObject_SendCustomData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureShareObject, nullptr, "SendCustomData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextureShareObject_SendCustomData_Statics::TextureShareObject_eventSendCustomData_Parms), Z_Construct_UFunction_UTextureShareObject_SendCustomData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureShareObject_SendCustomData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextureShareObject_SendCustomData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureShareObject_SendCustomData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextureShareObject_SendCustomData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextureShareObject_SendCustomData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureShareObject);
	UClass* Z_Construct_UClass_UTextureShareObject_NoRegister()
	{
		return UTextureShareObject::StaticClass();
	}
	struct Z_Construct_UClass_UTextureShareObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Desc_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Desc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Textures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CustomData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureShareObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TextureShare,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextureShareObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextureShareObject_SendCustomData, "SendCustomData" }, // 2902911009
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureShareObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * TextureShare UObject container\n */" },
		{ "IncludePath", "Blueprints/TextureShareBlueprintContainers.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainers.h" },
		{ "ToolTip", "TextureShare UObject container" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureShareObject_Statics::NewProp_bEnable_MetaData[] = {
		{ "Category", "TextureShare" },
		{ "Comment", "// Enable this texture share object\n" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainers.h" },
		{ "ToolTip", "Enable this texture share object" },
	};
#endif
	void Z_Construct_UClass_UTextureShareObject_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((UTextureShareObject*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureShareObject_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTextureShareObject), &Z_Construct_UClass_UTextureShareObject_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureShareObject_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureShareObject_Statics::NewProp_bEnable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureShareObject_Statics::NewProp_Desc_MetaData[] = {
		{ "Category", "TextureShare" },
		{ "Comment", "// Object description\n" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainers.h" },
		{ "ToolTip", "Object description" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureShareObject_Statics::NewProp_Desc = { "Desc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureShareObject, Desc), Z_Construct_UScriptStruct_FTextureShareObjectDesc, METADATA_PARAMS(Z_Construct_UClass_UTextureShareObject_Statics::NewProp_Desc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureShareObject_Statics::NewProp_Desc_MetaData)) }; // 1434858546
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureShareObject_Statics::NewProp_Textures_MetaData[] = {
		{ "Category", "TextureShare" },
		{ "Comment", "// Shared resources\n" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainers.h" },
		{ "ToolTip", "Shared resources" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureShareObject_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureShareObject, Textures), Z_Construct_UScriptStruct_FTextureShareTexturesDesc, METADATA_PARAMS(Z_Construct_UClass_UTextureShareObject_Statics::NewProp_Textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureShareObject_Statics::NewProp_Textures_MetaData)) }; // 1772187601
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureShareObject_Statics::NewProp_CustomData_MetaData[] = {
		{ "Category", "TextureShare" },
		{ "Comment", "// Shared custom data\n" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainers.h" },
		{ "ToolTip", "Shared custom data" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTextureShareObject_Statics::NewProp_CustomData = { "CustomData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureShareObject, CustomData), Z_Construct_UScriptStruct_FTextureShareCustomData, METADATA_PARAMS(Z_Construct_UClass_UTextureShareObject_Statics::NewProp_CustomData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureShareObject_Statics::NewProp_CustomData_MetaData)) }; // 2362314987
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureShareObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureShareObject_Statics::NewProp_bEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureShareObject_Statics::NewProp_Desc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureShareObject_Statics::NewProp_Textures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureShareObject_Statics::NewProp_CustomData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureShareObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureShareObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureShareObject_Statics::ClassParams = {
		&UTextureShareObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTextureShareObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextureShareObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureShareObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureShareObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureShareObject()
	{
		if (!Z_Registration_Info_UClass_UTextureShareObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureShareObject.OuterSingleton, Z_Construct_UClass_UTextureShareObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureShareObject.OuterSingleton;
	}
	template<> TEXTURESHARE_API UClass* StaticClass<UTextureShareObject>()
	{
		return UTextureShareObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureShareObject);
	DEFINE_FUNCTION(UTextureShare::execGetTextureShareObjects)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UTextureShareObject*>*)Z_Param__Result=P_THIS->GetTextureShareObjects();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextureShare::execRemoveTextureShareObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InShareName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveTextureShareObject(Z_Param_InShareName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTextureShare::execGetOrCreateTextureShareObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InShareName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureShareObject**)Z_Param__Result=P_THIS->GetOrCreateTextureShareObject(Z_Param_InShareName);
		P_NATIVE_END;
	}
	void UTextureShare::StaticRegisterNativesUTextureShare()
	{
		UClass* Class = UTextureShare::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetOrCreateTextureShareObject", &UTextureShare::execGetOrCreateTextureShareObject },
			{ "GetTextureShareObjects", &UTextureShare::execGetTextureShareObjects },
			{ "RemoveTextureShareObject", &UTextureShare::execRemoveTextureShareObject },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextureShare_GetOrCreateTextureShareObject_Statics
	{
		struct TextureShare_eventGetOrCreateTextureShareObject_Parms
		{
			FString InShareName;
			UTextureShareObject* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InShareName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InShareName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureShare_GetOrCreateTextureShareObject_Statics::NewProp_InShareName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextureShare_GetOrCreateTextureShareObject_Statics::NewProp_InShareName = { "InShareName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextureShare_eventGetOrCreateTextureShareObject_Parms, InShareName), METADATA_PARAMS(Z_Construct_UFunction_UTextureShare_GetOrCreateTextureShareObject_Statics::NewProp_InShareName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureShare_GetOrCreateTextureShareObject_Statics::NewProp_InShareName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextureShare_GetOrCreateTextureShareObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextureShare_eventGetOrCreateTextureShareObject_Parms, ReturnValue), Z_Construct_UClass_UTextureShareObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureShare_GetOrCreateTextureShareObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureShare_GetOrCreateTextureShareObject_Statics::NewProp_InShareName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureShare_GetOrCreateTextureShareObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureShare_GetOrCreateTextureShareObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextureShare" },
		{ "Comment", "// Create new or get exist UTextureShare object\n" },
		{ "DisplayName", "Get or Create TextureShare Object" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainers.h" },
		{ "ToolTip", "Create new or get exist UTextureShare object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureShare_GetOrCreateTextureShareObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureShare, nullptr, "GetOrCreateTextureShareObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextureShare_GetOrCreateTextureShareObject_Statics::TextureShare_eventGetOrCreateTextureShareObject_Parms), Z_Construct_UFunction_UTextureShare_GetOrCreateTextureShareObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureShare_GetOrCreateTextureShareObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextureShare_GetOrCreateTextureShareObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureShare_GetOrCreateTextureShareObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextureShare_GetOrCreateTextureShareObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextureShare_GetOrCreateTextureShareObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextureShare_GetTextureShareObjects_Statics
	{
		struct TextureShare_eventGetTextureShareObjects_Parms
		{
			TArray<UTextureShareObject*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextureShare_GetTextureShareObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTextureShareObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureShare_GetTextureShareObjects_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UTextureShare_GetTextureShareObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextureShare_eventGetTextureShareObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UTextureShare_GetTextureShareObjects_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureShare_GetTextureShareObjects_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureShare_GetTextureShareObjects_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureShare_GetTextureShareObjects_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureShare_GetTextureShareObjects_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureShare_GetTextureShareObjects_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextureShare" },
		{ "DisplayName", "Get All TextureShare Objects" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureShare_GetTextureShareObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureShare, nullptr, "GetTextureShareObjects", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextureShare_GetTextureShareObjects_Statics::TextureShare_eventGetTextureShareObjects_Parms), Z_Construct_UFunction_UTextureShare_GetTextureShareObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureShare_GetTextureShareObjects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextureShare_GetTextureShareObjects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureShare_GetTextureShareObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextureShare_GetTextureShareObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextureShare_GetTextureShareObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTextureShare_RemoveTextureShareObject_Statics
	{
		struct TextureShare_eventRemoveTextureShareObject_Parms
		{
			FString InShareName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InShareName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InShareName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureShare_RemoveTextureShareObject_Statics::NewProp_InShareName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTextureShare_RemoveTextureShareObject_Statics::NewProp_InShareName = { "InShareName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextureShare_eventRemoveTextureShareObject_Parms, InShareName), METADATA_PARAMS(Z_Construct_UFunction_UTextureShare_RemoveTextureShareObject_Statics::NewProp_InShareName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureShare_RemoveTextureShareObject_Statics::NewProp_InShareName_MetaData)) };
	void Z_Construct_UFunction_UTextureShare_RemoveTextureShareObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((TextureShare_eventRemoveTextureShareObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTextureShare_RemoveTextureShareObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(TextureShare_eventRemoveTextureShareObject_Parms), &Z_Construct_UFunction_UTextureShare_RemoveTextureShareObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureShare_RemoveTextureShareObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureShare_RemoveTextureShareObject_Statics::NewProp_InShareName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureShare_RemoveTextureShareObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureShare_RemoveTextureShareObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextureShare" },
		{ "DisplayName", "Remove TextureShare Object" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainers.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureShare_RemoveTextureShareObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureShare, nullptr, "RemoveTextureShareObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextureShare_RemoveTextureShareObject_Statics::TextureShare_eventRemoveTextureShareObject_Parms), Z_Construct_UFunction_UTextureShare_RemoveTextureShareObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureShare_RemoveTextureShareObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextureShare_RemoveTextureShareObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureShare_RemoveTextureShareObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextureShare_RemoveTextureShareObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextureShare_RemoveTextureShareObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureShare);
	UClass* Z_Construct_UClass_UTextureShare_NoRegister()
	{
		return UTextureShare::StaticClass();
	}
	struct Z_Construct_UClass_UTextureShare_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProcessName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProcessName;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextureShareObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureShareObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureShareObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureShare_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TextureShare,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextureShare_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextureShare_GetOrCreateTextureShareObject, "GetOrCreateTextureShareObject" }, // 2924249290
		{ &Z_Construct_UFunction_UTextureShare_GetTextureShareObjects, "GetTextureShareObjects" }, // 20625624
		{ &Z_Construct_UFunction_UTextureShare_RemoveTextureShareObject, "RemoveTextureShareObject" }, // 343061261
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureShare_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * TextureShare UObject interface\n */" },
		{ "IncludePath", "Blueprints/TextureShareBlueprintContainers.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainers.h" },
		{ "ToolTip", "TextureShare UObject interface" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureShare_Statics::NewProp_bEnable_MetaData[] = {
		{ "Category", "TextureShare" },
		{ "Comment", "// Enable sharing for all objects\n" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainers.h" },
		{ "ToolTip", "Enable sharing for all objects" },
	};
#endif
	void Z_Construct_UClass_UTextureShare_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((UTextureShare*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTextureShare_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTextureShare), &Z_Construct_UClass_UTextureShare_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTextureShare_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureShare_Statics::NewProp_bEnable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureShare_Statics::NewProp_ProcessName_MetaData[] = {
		{ "Category", "TextureShare" },
		{ "Comment", "// Unique process name (optional). When empty, used default name\n" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainers.h" },
		{ "ToolTip", "Unique process name (optional). When empty, used default name" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTextureShare_Statics::NewProp_ProcessName = { "ProcessName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureShare, ProcessName), METADATA_PARAMS(Z_Construct_UClass_UTextureShare_Statics::NewProp_ProcessName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureShare_Statics::NewProp_ProcessName_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTextureShare_Statics::NewProp_TextureShareObjects_Inner = { "TextureShareObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTextureShareObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureShare_Statics::NewProp_TextureShareObjects_MetaData[] = {
		{ "Comment", "// Objects for sharing\n" },
		{ "ModuleRelativePath", "Public/Blueprints/TextureShareBlueprintContainers.h" },
		{ "ToolTip", "Objects for sharing" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTextureShare_Statics::NewProp_TextureShareObjects = { "TextureShareObjects", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureShare, TextureShareObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTextureShare_Statics::NewProp_TextureShareObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureShare_Statics::NewProp_TextureShareObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureShare_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureShare_Statics::NewProp_bEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureShare_Statics::NewProp_ProcessName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureShare_Statics::NewProp_TextureShareObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureShare_Statics::NewProp_TextureShareObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureShare_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureShare>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureShare_Statics::ClassParams = {
		&UTextureShare::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTextureShare_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextureShare_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureShare_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureShare_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureShare()
	{
		if (!Z_Registration_Info_UClass_UTextureShare.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureShare.OuterSingleton, Z_Construct_UClass_UTextureShare_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureShare.OuterSingleton;
	}
	template<> TEXTURESHARE_API UClass* StaticClass<UTextureShare>()
	{
		return UTextureShare::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureShare);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Public_Blueprints_TextureShareBlueprintContainers_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Public_Blueprints_TextureShareBlueprintContainers_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureShareObject, UTextureShareObject::StaticClass, TEXT("UTextureShareObject"), &Z_Registration_Info_UClass_UTextureShareObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureShareObject), 3769824724U) },
		{ Z_Construct_UClass_UTextureShare, UTextureShare::StaticClass, TEXT("UTextureShare"), &Z_Registration_Info_UClass_UTextureShare, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureShare), 703381603U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Public_Blueprints_TextureShareBlueprintContainers_h_2539162821(TEXT("/Script/TextureShare"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Public_Blueprints_TextureShareBlueprintContainers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Public_Blueprints_TextureShareBlueprintContainers_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
