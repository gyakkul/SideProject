// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InterchangeTextureNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInterchangeTextureNode() {}
// Cross Module References
	INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangeBaseNode();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTextureNode();
	INTERCHANGENODES_API UClass* Z_Construct_UClass_UInterchangeTextureNode_NoRegister();
	INTERCHANGENODES_API UEnum* Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureFilterMode();
	INTERCHANGENODES_API UEnum* Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureWrapMode();
	UPackage* Z_Construct_UPackage__Script_InterchangeNodes();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeTextureWrapMode;
	static UEnum* EInterchangeTextureWrapMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInterchangeTextureWrapMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInterchangeTextureWrapMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureWrapMode, (UObject*)Z_Construct_UPackage__Script_InterchangeNodes(), TEXT("EInterchangeTextureWrapMode"));
		}
		return Z_Registration_Info_UEnum_EInterchangeTextureWrapMode.OuterSingleton;
	}
	template<> INTERCHANGENODES_API UEnum* StaticEnum<EInterchangeTextureWrapMode>()
	{
		return EInterchangeTextureWrapMode_StaticEnum();
	}
	struct Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureWrapMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureWrapMode_Statics::Enumerators[] = {
		{ "EInterchangeTextureWrapMode::Wrap", (int64)EInterchangeTextureWrapMode::Wrap },
		{ "EInterchangeTextureWrapMode::Clamp", (int64)EInterchangeTextureWrapMode::Clamp },
		{ "EInterchangeTextureWrapMode::Mirror", (int64)EInterchangeTextureWrapMode::Mirror },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureWrapMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Clamp.Name", "EInterchangeTextureWrapMode::Clamp" },
		{ "Comment", "//ns UE\n" },
		{ "Mirror.Name", "EInterchangeTextureWrapMode::Mirror" },
		{ "ModuleRelativePath", "Public/InterchangeTextureNode.h" },
		{ "ToolTip", "ns UE" },
		{ "Wrap.Name", "EInterchangeTextureWrapMode::Wrap" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureWrapMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InterchangeNodes,
		nullptr,
		"EInterchangeTextureWrapMode",
		"EInterchangeTextureWrapMode",
		Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureWrapMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureWrapMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureWrapMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureWrapMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureWrapMode()
	{
		if (!Z_Registration_Info_UEnum_EInterchangeTextureWrapMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeTextureWrapMode.InnerSingleton, Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureWrapMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInterchangeTextureWrapMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInterchangeTextureFilterMode;
	static UEnum* EInterchangeTextureFilterMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInterchangeTextureFilterMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInterchangeTextureFilterMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureFilterMode, (UObject*)Z_Construct_UPackage__Script_InterchangeNodes(), TEXT("EInterchangeTextureFilterMode"));
		}
		return Z_Registration_Info_UEnum_EInterchangeTextureFilterMode.OuterSingleton;
	}
	template<> INTERCHANGENODES_API UEnum* StaticEnum<EInterchangeTextureFilterMode>()
	{
		return EInterchangeTextureFilterMode_StaticEnum();
	}
	struct Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureFilterMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureFilterMode_Statics::Enumerators[] = {
		{ "EInterchangeTextureFilterMode::Nearest", (int64)EInterchangeTextureFilterMode::Nearest },
		{ "EInterchangeTextureFilterMode::Bilinear", (int64)EInterchangeTextureFilterMode::Bilinear },
		{ "EInterchangeTextureFilterMode::Trilinear", (int64)EInterchangeTextureFilterMode::Trilinear },
		{ "EInterchangeTextureFilterMode::Default", (int64)EInterchangeTextureFilterMode::Default },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureFilterMode_Statics::Enum_MetaDataParams[] = {
		{ "Bilinear.Name", "EInterchangeTextureFilterMode::Bilinear" },
		{ "BlueprintType", "true" },
		{ "Default.Comment", "/** Use setting from the Texture Group. */" },
		{ "Default.Name", "EInterchangeTextureFilterMode::Default" },
		{ "Default.ToolTip", "Use setting from the Texture Group." },
		{ "ModuleRelativePath", "Public/InterchangeTextureNode.h" },
		{ "Nearest.Name", "EInterchangeTextureFilterMode::Nearest" },
		{ "Trilinear.Name", "EInterchangeTextureFilterMode::Trilinear" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureFilterMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InterchangeNodes,
		nullptr,
		"EInterchangeTextureFilterMode",
		"EInterchangeTextureFilterMode",
		Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureFilterMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureFilterMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureFilterMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureFilterMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureFilterMode()
	{
		if (!Z_Registration_Info_UEnum_EInterchangeTextureFilterMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInterchangeTextureFilterMode.InnerSingleton, Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureFilterMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInterchangeTextureFilterMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UInterchangeTextureNode::execSetCustomFilter)
	{
		P_GET_ENUM_REF(EInterchangeTextureFilterMode,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomFilter((EInterchangeTextureFilterMode&)(Z_Param_Out_AttributeValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureNode::execGetCustomFilter)
	{
		P_GET_ENUM_REF(EInterchangeTextureFilterMode,Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomFilter((EInterchangeTextureFilterMode&)(Z_Param_Out_AttributeValue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureNode::execSetCustombFlipGreenChannel)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustombFlipGreenChannel(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureNode::execGetCustombFlipGreenChannel)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustombFlipGreenChannel(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureNode::execSetCustomSRGB)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCustomSRGB(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureNode::execGetCustomSRGB)
	{
		P_GET_UBOOL_REF(Z_Param_Out_AttributeValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCustomSRGB(Z_Param_Out_AttributeValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInterchangeTextureNode::execSetPayLoadKey)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_PayloadKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPayLoadKey(Z_Param_PayloadKey);
		P_NATIVE_END;
	}
	void UInterchangeTextureNode::StaticRegisterNativesUInterchangeTextureNode()
	{
		UClass* Class = UInterchangeTextureNode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCustombFlipGreenChannel", &UInterchangeTextureNode::execGetCustombFlipGreenChannel },
			{ "GetCustomFilter", &UInterchangeTextureNode::execGetCustomFilter },
			{ "GetCustomSRGB", &UInterchangeTextureNode::execGetCustomSRGB },
			{ "SetCustombFlipGreenChannel", &UInterchangeTextureNode::execSetCustombFlipGreenChannel },
			{ "SetCustomFilter", &UInterchangeTextureNode::execSetCustomFilter },
			{ "SetCustomSRGB", &UInterchangeTextureNode::execSetCustomSRGB },
			{ "SetPayLoadKey", &UInterchangeTextureNode::execSetPayLoadKey },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics
	{
		struct InterchangeTextureNode_eventGetCustombFlipGreenChannel_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeTextureNode_eventGetCustombFlipGreenChannel_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeTextureNode_eventGetCustombFlipGreenChannel_Parms), &Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureNode_eventGetCustombFlipGreenChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeTextureNode_eventGetCustombFlipGreenChannel_Parms), &Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "ModuleRelativePath", "Public/InterchangeTextureNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureNode, nullptr, "GetCustombFlipGreenChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::InterchangeTextureNode_eventGetCustombFlipGreenChannel_Parms), Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics
	{
		struct InterchangeTextureNode_eventGetCustomFilter_Parms
		{
			EInterchangeTextureFilterMode AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeTextureNode_eventGetCustomFilter_Parms, AttributeValue), Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureFilterMode, METADATA_PARAMS(nullptr, 0) }; // 139045276
	void Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureNode_eventGetCustomFilter_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeTextureNode_eventGetCustomFilter_Parms), &Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::NewProp_AttributeValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "ModuleRelativePath", "Public/InterchangeTextureNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureNode, nullptr, "GetCustomFilter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::InterchangeTextureNode_eventGetCustomFilter_Parms), Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics
	{
		struct InterchangeTextureNode_eventGetCustomSRGB_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeTextureNode_eventGetCustomSRGB_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeTextureNode_eventGetCustomSRGB_Parms), &Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureNode_eventGetCustomSRGB_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeTextureNode_eventGetCustomSRGB_Parms), &Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "ModuleRelativePath", "Public/InterchangeTextureNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureNode, nullptr, "GetCustomSRGB", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::InterchangeTextureNode_eventGetCustomSRGB_Parms), Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics
	{
		struct InterchangeTextureNode_eventSetCustombFlipGreenChannel_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeTextureNode_eventSetCustombFlipGreenChannel_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeTextureNode_eventSetCustombFlipGreenChannel_Parms), &Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureNode_eventSetCustombFlipGreenChannel_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeTextureNode_eventSetCustombFlipGreenChannel_Parms), &Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "ModuleRelativePath", "Public/InterchangeTextureNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureNode, nullptr, "SetCustombFlipGreenChannel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::InterchangeTextureNode_eventSetCustombFlipGreenChannel_Parms), Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics
	{
		struct InterchangeTextureNode_eventSetCustomFilter_Parms
		{
			EInterchangeTextureFilterMode AttributeValue;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_AttributeValue_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::NewProp_AttributeValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeTextureNode_eventSetCustomFilter_Parms, AttributeValue), Z_Construct_UEnum_InterchangeNodes_EInterchangeTextureFilterMode, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::NewProp_AttributeValue_MetaData)) }; // 139045276
	void Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureNode_eventSetCustomFilter_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeTextureNode_eventSetCustomFilter_Parms), &Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::NewProp_AttributeValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "ModuleRelativePath", "Public/InterchangeTextureNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureNode, nullptr, "SetCustomFilter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::InterchangeTextureNode_eventSetCustomFilter_Parms), Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics
	{
		struct InterchangeTextureNode_eventSetCustomSRGB_Parms
		{
			bool AttributeValue;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeValue_MetaData[];
#endif
		static void NewProp_AttributeValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_AttributeValue;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::NewProp_AttributeValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::NewProp_AttributeValue_SetBit(void* Obj)
	{
		((InterchangeTextureNode_eventSetCustomSRGB_Parms*)Obj)->AttributeValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::NewProp_AttributeValue = { "AttributeValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeTextureNode_eventSetCustomSRGB_Parms), &Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::NewProp_AttributeValue_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::NewProp_AttributeValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::NewProp_AttributeValue_MetaData)) };
	void Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InterchangeTextureNode_eventSetCustomSRGB_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InterchangeTextureNode_eventSetCustomSRGB_Parms), &Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::NewProp_AttributeValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "ModuleRelativePath", "Public/InterchangeTextureNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureNode, nullptr, "SetCustomSRGB", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::InterchangeTextureNode_eventSetCustomSRGB_Parms), Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey_Statics
	{
		struct InterchangeTextureNode_eventSetPayLoadKey_Parms
		{
			FString PayloadKey;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PayloadKey_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_PayloadKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey_Statics::NewProp_PayloadKey_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey_Statics::NewProp_PayloadKey = { "PayloadKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(InterchangeTextureNode_eventSetPayLoadKey_Parms, PayloadKey), METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey_Statics::NewProp_PayloadKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey_Statics::NewProp_PayloadKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey_Statics::NewProp_PayloadKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Interchange | Node | Texture" },
		{ "ModuleRelativePath", "Public/InterchangeTextureNode.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInterchangeTextureNode, nullptr, "SetPayLoadKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey_Statics::InterchangeTextureNode_eventSetPayLoadKey_Parms), Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInterchangeTextureNode);
	UClass* Z_Construct_UClass_UInterchangeTextureNode_NoRegister()
	{
		return UInterchangeTextureNode::StaticClass();
	}
	struct Z_Construct_UClass_UInterchangeTextureNode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInterchangeTextureNode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterchangeBaseNode,
		(UObject* (*)())Z_Construct_UPackage__Script_InterchangeNodes,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInterchangeTextureNode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInterchangeTextureNode_GetCustombFlipGreenChannel, "GetCustombFlipGreenChannel" }, // 1541454471
		{ &Z_Construct_UFunction_UInterchangeTextureNode_GetCustomFilter, "GetCustomFilter" }, // 1553468607
		{ &Z_Construct_UFunction_UInterchangeTextureNode_GetCustomSRGB, "GetCustomSRGB" }, // 3549420362
		{ &Z_Construct_UFunction_UInterchangeTextureNode_SetCustombFlipGreenChannel, "SetCustombFlipGreenChannel" }, // 2181775508
		{ &Z_Construct_UFunction_UInterchangeTextureNode_SetCustomFilter, "SetCustomFilter" }, // 163216891
		{ &Z_Construct_UFunction_UInterchangeTextureNode_SetCustomSRGB, "SetCustomSRGB" }, // 2205919833
		{ &Z_Construct_UFunction_UInterchangeTextureNode_SetPayLoadKey, "SetPayLoadKey" }, // 2936019773
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInterchangeTextureNode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "InterchangeTextureNode.h" },
		{ "ModuleRelativePath", "Public/InterchangeTextureNode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInterchangeTextureNode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInterchangeTextureNode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInterchangeTextureNode_Statics::ClassParams = {
		&UInterchangeTextureNode::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInterchangeTextureNode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInterchangeTextureNode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInterchangeTextureNode()
	{
		if (!Z_Registration_Info_UClass_UInterchangeTextureNode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInterchangeTextureNode.OuterSingleton, Z_Construct_UClass_UInterchangeTextureNode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInterchangeTextureNode.OuterSingleton;
	}
	template<> INTERCHANGENODES_API UClass* StaticClass<UInterchangeTextureNode>()
	{
		return UInterchangeTextureNode::StaticClass();
	}
	UInterchangeTextureNode::UInterchangeTextureNode() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInterchangeTextureNode);
	UInterchangeTextureNode::~UInterchangeTextureNode() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_Statics::EnumInfo[] = {
		{ EInterchangeTextureWrapMode_StaticEnum, TEXT("EInterchangeTextureWrapMode"), &Z_Registration_Info_UEnum_EInterchangeTextureWrapMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1504979457U) },
		{ EInterchangeTextureFilterMode_StaticEnum, TEXT("EInterchangeTextureFilterMode"), &Z_Registration_Info_UEnum_EInterchangeTextureFilterMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 139045276U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInterchangeTextureNode, UInterchangeTextureNode::StaticClass, TEXT("UInterchangeTextureNode"), &Z_Registration_Info_UClass_UInterchangeTextureNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInterchangeTextureNode), 1278020699U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_321294149(TEXT("/Script/InterchangeNodes"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Interchange_Runtime_Source_Nodes_Public_InterchangeTextureNode_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
