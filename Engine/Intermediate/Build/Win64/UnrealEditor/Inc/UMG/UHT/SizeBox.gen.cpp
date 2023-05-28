// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/SizeBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSizeBox() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UMG_API UClass* Z_Construct_UClass_USizeBox();
	UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(USizeBox::execClearMaxAspectRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMaxAspectRatio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execSetMaxAspectRatio)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMaxAspectRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxAspectRatio(Z_Param_InMaxAspectRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execClearMinAspectRatio)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMinAspectRatio();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execSetMinAspectRatio)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMinAspectRatio);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinAspectRatio(Z_Param_InMinAspectRatio);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execClearMaxDesiredHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMaxDesiredHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execSetMaxDesiredHeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMaxDesiredHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxDesiredHeight(Z_Param_InMaxDesiredHeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execClearMaxDesiredWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMaxDesiredWidth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execSetMaxDesiredWidth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMaxDesiredWidth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxDesiredWidth(Z_Param_InMaxDesiredWidth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execClearMinDesiredHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMinDesiredHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execSetMinDesiredHeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMinDesiredHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinDesiredHeight(Z_Param_InMinDesiredHeight);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execClearMinDesiredWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMinDesiredWidth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execSetMinDesiredWidth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InMinDesiredWidth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinDesiredWidth(Z_Param_InMinDesiredWidth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execClearHeightOverride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearHeightOverride();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execSetHeightOverride)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InHeightOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetHeightOverride(Z_Param_InHeightOverride);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execClearWidthOverride)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearWidthOverride();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USizeBox::execSetWidthOverride)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InWidthOverride);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidthOverride(Z_Param_InWidthOverride);
		P_NATIVE_END;
	}
	void USizeBox::GetWidthOverride_WrapperImpl(const void* Object, void* OutValue)
	{
		const USizeBox* Obj = (const USizeBox*)Object;
		float& Result = *(float*)OutValue;
		Result = (float)Obj->GetWidthOverride();
	}
	void USizeBox::SetWidthOverride_WrapperImpl(void* Object, const void* InValue)
	{
		USizeBox* Obj = (USizeBox*)Object;
		float& Value = *(float*)InValue;
		Obj->SetWidthOverride(Value);
	}
	void USizeBox::GetHeightOverride_WrapperImpl(const void* Object, void* OutValue)
	{
		const USizeBox* Obj = (const USizeBox*)Object;
		float& Result = *(float*)OutValue;
		Result = (float)Obj->GetHeightOverride();
	}
	void USizeBox::SetHeightOverride_WrapperImpl(void* Object, const void* InValue)
	{
		USizeBox* Obj = (USizeBox*)Object;
		float& Value = *(float*)InValue;
		Obj->SetHeightOverride(Value);
	}
	void USizeBox::GetMinDesiredWidth_WrapperImpl(const void* Object, void* OutValue)
	{
		const USizeBox* Obj = (const USizeBox*)Object;
		float& Result = *(float*)OutValue;
		Result = (float)Obj->GetMinDesiredWidth();
	}
	void USizeBox::SetMinDesiredWidth_WrapperImpl(void* Object, const void* InValue)
	{
		USizeBox* Obj = (USizeBox*)Object;
		float& Value = *(float*)InValue;
		Obj->SetMinDesiredWidth(Value);
	}
	void USizeBox::GetMinDesiredHeight_WrapperImpl(const void* Object, void* OutValue)
	{
		const USizeBox* Obj = (const USizeBox*)Object;
		float& Result = *(float*)OutValue;
		Result = (float)Obj->GetMinDesiredHeight();
	}
	void USizeBox::SetMinDesiredHeight_WrapperImpl(void* Object, const void* InValue)
	{
		USizeBox* Obj = (USizeBox*)Object;
		float& Value = *(float*)InValue;
		Obj->SetMinDesiredHeight(Value);
	}
	void USizeBox::GetMaxDesiredWidth_WrapperImpl(const void* Object, void* OutValue)
	{
		const USizeBox* Obj = (const USizeBox*)Object;
		float& Result = *(float*)OutValue;
		Result = (float)Obj->GetMaxDesiredWidth();
	}
	void USizeBox::SetMaxDesiredWidth_WrapperImpl(void* Object, const void* InValue)
	{
		USizeBox* Obj = (USizeBox*)Object;
		float& Value = *(float*)InValue;
		Obj->SetMaxDesiredWidth(Value);
	}
	void USizeBox::GetMaxDesiredHeight_WrapperImpl(const void* Object, void* OutValue)
	{
		const USizeBox* Obj = (const USizeBox*)Object;
		float& Result = *(float*)OutValue;
		Result = (float)Obj->GetMaxDesiredHeight();
	}
	void USizeBox::SetMaxDesiredHeight_WrapperImpl(void* Object, const void* InValue)
	{
		USizeBox* Obj = (USizeBox*)Object;
		float& Value = *(float*)InValue;
		Obj->SetMaxDesiredHeight(Value);
	}
	void USizeBox::GetMinAspectRatio_WrapperImpl(const void* Object, void* OutValue)
	{
		const USizeBox* Obj = (const USizeBox*)Object;
		float& Result = *(float*)OutValue;
		Result = (float)Obj->GetMinAspectRatio();
	}
	void USizeBox::SetMinAspectRatio_WrapperImpl(void* Object, const void* InValue)
	{
		USizeBox* Obj = (USizeBox*)Object;
		float& Value = *(float*)InValue;
		Obj->SetMinAspectRatio(Value);
	}
	void USizeBox::GetMaxAspectRatio_WrapperImpl(const void* Object, void* OutValue)
	{
		const USizeBox* Obj = (const USizeBox*)Object;
		float& Result = *(float*)OutValue;
		Result = (float)Obj->GetMaxAspectRatio();
	}
	void USizeBox::SetMaxAspectRatio_WrapperImpl(void* Object, const void* InValue)
	{
		USizeBox* Obj = (USizeBox*)Object;
		float& Value = *(float*)InValue;
		Obj->SetMaxAspectRatio(Value);
	}
	void USizeBox::StaticRegisterNativesUSizeBox()
	{
		UClass* Class = USizeBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClearHeightOverride", &USizeBox::execClearHeightOverride },
			{ "ClearMaxAspectRatio", &USizeBox::execClearMaxAspectRatio },
			{ "ClearMaxDesiredHeight", &USizeBox::execClearMaxDesiredHeight },
			{ "ClearMaxDesiredWidth", &USizeBox::execClearMaxDesiredWidth },
			{ "ClearMinAspectRatio", &USizeBox::execClearMinAspectRatio },
			{ "ClearMinDesiredHeight", &USizeBox::execClearMinDesiredHeight },
			{ "ClearMinDesiredWidth", &USizeBox::execClearMinDesiredWidth },
			{ "ClearWidthOverride", &USizeBox::execClearWidthOverride },
			{ "SetHeightOverride", &USizeBox::execSetHeightOverride },
			{ "SetMaxAspectRatio", &USizeBox::execSetMaxAspectRatio },
			{ "SetMaxDesiredHeight", &USizeBox::execSetMaxDesiredHeight },
			{ "SetMaxDesiredWidth", &USizeBox::execSetMaxDesiredWidth },
			{ "SetMinAspectRatio", &USizeBox::execSetMinAspectRatio },
			{ "SetMinDesiredHeight", &USizeBox::execSetMinDesiredHeight },
			{ "SetMinDesiredWidth", &USizeBox::execSetMinDesiredWidth },
			{ "SetWidthOverride", &USizeBox::execSetWidthOverride },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USizeBox_ClearHeightOverride_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_ClearHeightOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_ClearHeightOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "ClearHeightOverride", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_ClearHeightOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_ClearHeightOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_ClearHeightOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USizeBox_ClearHeightOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_ClearMaxAspectRatio_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_ClearMaxAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_ClearMaxAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "ClearMaxAspectRatio", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_ClearMaxAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_ClearMaxAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_ClearMaxAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USizeBox_ClearMaxAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_ClearMaxDesiredHeight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_ClearMaxDesiredHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_ClearMaxDesiredHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "ClearMaxDesiredHeight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_ClearMaxDesiredHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_ClearMaxDesiredHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_ClearMaxDesiredHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USizeBox_ClearMaxDesiredHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_ClearMaxDesiredWidth_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_ClearMaxDesiredWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_ClearMaxDesiredWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "ClearMaxDesiredWidth", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_ClearMaxDesiredWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_ClearMaxDesiredWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_ClearMaxDesiredWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USizeBox_ClearMaxDesiredWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_ClearMinAspectRatio_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_ClearMinAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_ClearMinAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "ClearMinAspectRatio", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_ClearMinAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_ClearMinAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_ClearMinAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USizeBox_ClearMinAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_ClearMinDesiredHeight_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_ClearMinDesiredHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_ClearMinDesiredHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "ClearMinDesiredHeight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_ClearMinDesiredHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_ClearMinDesiredHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_ClearMinDesiredHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USizeBox_ClearMinDesiredHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_ClearMinDesiredWidth_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_ClearMinDesiredWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_ClearMinDesiredWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "ClearMinDesiredWidth", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_ClearMinDesiredWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_ClearMinDesiredWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_ClearMinDesiredWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USizeBox_ClearMinDesiredWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_ClearWidthOverride_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_ClearWidthOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_ClearWidthOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "ClearWidthOverride", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_ClearWidthOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_ClearWidthOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_ClearWidthOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USizeBox_ClearWidthOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_SetHeightOverride_Statics
	{
		struct SizeBox_eventSetHeightOverride_Parms
		{
			float InHeightOverride;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InHeightOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USizeBox_SetHeightOverride_Statics::NewProp_InHeightOverride = { "InHeightOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SizeBox_eventSetHeightOverride_Parms, InHeightOverride), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USizeBox_SetHeightOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USizeBox_SetHeightOverride_Statics::NewProp_InHeightOverride,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_SetHeightOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "Comment", "/** When specified, ignore the content's desired size and report the HeightOverride as the Box's desired height. */" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
		{ "ToolTip", "When specified, ignore the content's desired size and report the HeightOverride as the Box's desired height." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_SetHeightOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "SetHeightOverride", nullptr, nullptr, sizeof(Z_Construct_UFunction_USizeBox_SetHeightOverride_Statics::SizeBox_eventSetHeightOverride_Parms), Z_Construct_UFunction_USizeBox_SetHeightOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetHeightOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_SetHeightOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetHeightOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_SetHeightOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USizeBox_SetHeightOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_SetMaxAspectRatio_Statics
	{
		struct SizeBox_eventSetMaxAspectRatio_Parms
		{
			float InMaxAspectRatio;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InMaxAspectRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USizeBox_SetMaxAspectRatio_Statics::NewProp_InMaxAspectRatio = { "InMaxAspectRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SizeBox_eventSetMaxAspectRatio_Parms, InMaxAspectRatio), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USizeBox_SetMaxAspectRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USizeBox_SetMaxAspectRatio_Statics::NewProp_InMaxAspectRatio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_SetMaxAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_SetMaxAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "SetMaxAspectRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_USizeBox_SetMaxAspectRatio_Statics::SizeBox_eventSetMaxAspectRatio_Parms), Z_Construct_UFunction_USizeBox_SetMaxAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetMaxAspectRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_SetMaxAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetMaxAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_SetMaxAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USizeBox_SetMaxAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_SetMaxDesiredHeight_Statics
	{
		struct SizeBox_eventSetMaxDesiredHeight_Parms
		{
			float InMaxDesiredHeight;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InMaxDesiredHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USizeBox_SetMaxDesiredHeight_Statics::NewProp_InMaxDesiredHeight = { "InMaxDesiredHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SizeBox_eventSetMaxDesiredHeight_Parms, InMaxDesiredHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USizeBox_SetMaxDesiredHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USizeBox_SetMaxDesiredHeight_Statics::NewProp_InMaxDesiredHeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_SetMaxDesiredHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "Comment", "/** When specified, will report the MaxDesiredHeight if smaller than the content's desired height. */" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
		{ "ToolTip", "When specified, will report the MaxDesiredHeight if smaller than the content's desired height." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_SetMaxDesiredHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "SetMaxDesiredHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_USizeBox_SetMaxDesiredHeight_Statics::SizeBox_eventSetMaxDesiredHeight_Parms), Z_Construct_UFunction_USizeBox_SetMaxDesiredHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetMaxDesiredHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_SetMaxDesiredHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetMaxDesiredHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_SetMaxDesiredHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USizeBox_SetMaxDesiredHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_SetMaxDesiredWidth_Statics
	{
		struct SizeBox_eventSetMaxDesiredWidth_Parms
		{
			float InMaxDesiredWidth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InMaxDesiredWidth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USizeBox_SetMaxDesiredWidth_Statics::NewProp_InMaxDesiredWidth = { "InMaxDesiredWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SizeBox_eventSetMaxDesiredWidth_Parms, InMaxDesiredWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USizeBox_SetMaxDesiredWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USizeBox_SetMaxDesiredWidth_Statics::NewProp_InMaxDesiredWidth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_SetMaxDesiredWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "Comment", "/** When specified, will report the MaxDesiredWidth if smaller than the content's desired width. */" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
		{ "ToolTip", "When specified, will report the MaxDesiredWidth if smaller than the content's desired width." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_SetMaxDesiredWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "SetMaxDesiredWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_USizeBox_SetMaxDesiredWidth_Statics::SizeBox_eventSetMaxDesiredWidth_Parms), Z_Construct_UFunction_USizeBox_SetMaxDesiredWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetMaxDesiredWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_SetMaxDesiredWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetMaxDesiredWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_SetMaxDesiredWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USizeBox_SetMaxDesiredWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_SetMinAspectRatio_Statics
	{
		struct SizeBox_eventSetMinAspectRatio_Parms
		{
			float InMinAspectRatio;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InMinAspectRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USizeBox_SetMinAspectRatio_Statics::NewProp_InMinAspectRatio = { "InMinAspectRatio", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SizeBox_eventSetMinAspectRatio_Parms, InMinAspectRatio), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USizeBox_SetMinAspectRatio_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USizeBox_SetMinAspectRatio_Statics::NewProp_InMinAspectRatio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_SetMinAspectRatio_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_SetMinAspectRatio_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "SetMinAspectRatio", nullptr, nullptr, sizeof(Z_Construct_UFunction_USizeBox_SetMinAspectRatio_Statics::SizeBox_eventSetMinAspectRatio_Parms), Z_Construct_UFunction_USizeBox_SetMinAspectRatio_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetMinAspectRatio_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_SetMinAspectRatio_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetMinAspectRatio_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_SetMinAspectRatio()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USizeBox_SetMinAspectRatio_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_SetMinDesiredHeight_Statics
	{
		struct SizeBox_eventSetMinDesiredHeight_Parms
		{
			float InMinDesiredHeight;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InMinDesiredHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USizeBox_SetMinDesiredHeight_Statics::NewProp_InMinDesiredHeight = { "InMinDesiredHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SizeBox_eventSetMinDesiredHeight_Parms, InMinDesiredHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USizeBox_SetMinDesiredHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USizeBox_SetMinDesiredHeight_Statics::NewProp_InMinDesiredHeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_SetMinDesiredHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "Comment", "/** When specified, will report the MinDesiredHeight if larger than the content's desired height. */" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
		{ "ToolTip", "When specified, will report the MinDesiredHeight if larger than the content's desired height." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_SetMinDesiredHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "SetMinDesiredHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_USizeBox_SetMinDesiredHeight_Statics::SizeBox_eventSetMinDesiredHeight_Parms), Z_Construct_UFunction_USizeBox_SetMinDesiredHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetMinDesiredHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_SetMinDesiredHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetMinDesiredHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_SetMinDesiredHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USizeBox_SetMinDesiredHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_SetMinDesiredWidth_Statics
	{
		struct SizeBox_eventSetMinDesiredWidth_Parms
		{
			float InMinDesiredWidth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InMinDesiredWidth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USizeBox_SetMinDesiredWidth_Statics::NewProp_InMinDesiredWidth = { "InMinDesiredWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SizeBox_eventSetMinDesiredWidth_Parms, InMinDesiredWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USizeBox_SetMinDesiredWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USizeBox_SetMinDesiredWidth_Statics::NewProp_InMinDesiredWidth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_SetMinDesiredWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "Comment", "/** When specified, will report the MinDesiredWidth if larger than the content's desired width. */" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
		{ "ToolTip", "When specified, will report the MinDesiredWidth if larger than the content's desired width." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_SetMinDesiredWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "SetMinDesiredWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_USizeBox_SetMinDesiredWidth_Statics::SizeBox_eventSetMinDesiredWidth_Parms), Z_Construct_UFunction_USizeBox_SetMinDesiredWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetMinDesiredWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_SetMinDesiredWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetMinDesiredWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_SetMinDesiredWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USizeBox_SetMinDesiredWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USizeBox_SetWidthOverride_Statics
	{
		struct SizeBox_eventSetWidthOverride_Parms
		{
			float InWidthOverride;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InWidthOverride;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USizeBox_SetWidthOverride_Statics::NewProp_InWidthOverride = { "InWidthOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SizeBox_eventSetWidthOverride_Parms, InWidthOverride), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USizeBox_SetWidthOverride_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USizeBox_SetWidthOverride_Statics::NewProp_InWidthOverride,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USizeBox_SetWidthOverride_Statics::Function_MetaDataParams[] = {
		{ "Category", "Layout|Size Box" },
		{ "Comment", "/** When specified, ignore the content's desired size and report the WidthOverride as the Box's desired width. */" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
		{ "ToolTip", "When specified, ignore the content's desired size and report the WidthOverride as the Box's desired width." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USizeBox_SetWidthOverride_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USizeBox, nullptr, "SetWidthOverride", nullptr, nullptr, sizeof(Z_Construct_UFunction_USizeBox_SetWidthOverride_Statics::SizeBox_eventSetWidthOverride_Parms), Z_Construct_UFunction_USizeBox_SetWidthOverride_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetWidthOverride_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USizeBox_SetWidthOverride_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USizeBox_SetWidthOverride_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USizeBox_SetWidthOverride()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USizeBox_SetWidthOverride_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USizeBox);
	UClass* Z_Construct_UClass_USizeBox_NoRegister()
	{
		return USizeBox::StaticClass();
	}
	struct Z_Construct_UClass_USizeBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidthOverride_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_WidthOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HeightOverride_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HeightOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinDesiredWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDesiredWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinDesiredHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinDesiredHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDesiredWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDesiredWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxDesiredHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxDesiredHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinAspectRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinAspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAspectRatio_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxAspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_WidthOverride_MetaData[];
#endif
		static void NewProp_bOverride_WidthOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_WidthOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_HeightOverride_MetaData[];
#endif
		static void NewProp_bOverride_HeightOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_HeightOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MinDesiredWidth_MetaData[];
#endif
		static void NewProp_bOverride_MinDesiredWidth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_MinDesiredWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MinDesiredHeight_MetaData[];
#endif
		static void NewProp_bOverride_MinDesiredHeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_MinDesiredHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MaxDesiredWidth_MetaData[];
#endif
		static void NewProp_bOverride_MaxDesiredWidth_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_MaxDesiredWidth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MaxDesiredHeight_MetaData[];
#endif
		static void NewProp_bOverride_MaxDesiredHeight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_MaxDesiredHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MinAspectRatio_MetaData[];
#endif
		static void NewProp_bOverride_MinAspectRatio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_MinAspectRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOverride_MaxAspectRatio_MetaData[];
#endif
		static void NewProp_bOverride_MaxAspectRatio_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride_MaxAspectRatio;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USizeBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USizeBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USizeBox_ClearHeightOverride, "ClearHeightOverride" }, // 3653098700
		{ &Z_Construct_UFunction_USizeBox_ClearMaxAspectRatio, "ClearMaxAspectRatio" }, // 3562406496
		{ &Z_Construct_UFunction_USizeBox_ClearMaxDesiredHeight, "ClearMaxDesiredHeight" }, // 2577658812
		{ &Z_Construct_UFunction_USizeBox_ClearMaxDesiredWidth, "ClearMaxDesiredWidth" }, // 3454242305
		{ &Z_Construct_UFunction_USizeBox_ClearMinAspectRatio, "ClearMinAspectRatio" }, // 3660713576
		{ &Z_Construct_UFunction_USizeBox_ClearMinDesiredHeight, "ClearMinDesiredHeight" }, // 4027507699
		{ &Z_Construct_UFunction_USizeBox_ClearMinDesiredWidth, "ClearMinDesiredWidth" }, // 66057465
		{ &Z_Construct_UFunction_USizeBox_ClearWidthOverride, "ClearWidthOverride" }, // 2760361659
		{ &Z_Construct_UFunction_USizeBox_SetHeightOverride, "SetHeightOverride" }, // 1664931783
		{ &Z_Construct_UFunction_USizeBox_SetMaxAspectRatio, "SetMaxAspectRatio" }, // 2742930936
		{ &Z_Construct_UFunction_USizeBox_SetMaxDesiredHeight, "SetMaxDesiredHeight" }, // 112532578
		{ &Z_Construct_UFunction_USizeBox_SetMaxDesiredWidth, "SetMaxDesiredWidth" }, // 258870884
		{ &Z_Construct_UFunction_USizeBox_SetMinAspectRatio, "SetMinAspectRatio" }, // 129633612
		{ &Z_Construct_UFunction_USizeBox_SetMinDesiredHeight, "SetMinDesiredHeight" }, // 2672141750
		{ &Z_Construct_UFunction_USizeBox_SetMinDesiredWidth, "SetMinDesiredWidth" }, // 3566941626
		{ &Z_Construct_UFunction_USizeBox_SetWidthOverride, "SetWidthOverride" }, // 150555716
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A widget that allows you to specify the size it reports to have and desire.  Not all widgets report a desired size\n * that you actually desire.  Wrapping them in a SizeBox lets you have the Size Box force them to be a particular size.\n *\n * * Single Child\n * * Fixed Size\n */" },
		{ "IncludePath", "Components/SizeBox.h" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
		{ "ToolTip", "A widget that allows you to specify the size it reports to have and desire.  Not all widgets report a desired size\nthat you actually desire.  Wrapping them in a SizeBox lets you have the Size Box force them to be a particular size.\n\n* Single Child\n* Fixed Size" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_WidthOverride_MetaData[] = {
		{ "BlueprintSetter", "SetWidthOverride" },
		{ "Category", "Child Layout" },
		{ "Comment", "/** When specified, ignore the content's desired size and report the WidthOverride as the Box's desired width. */" },
		{ "editcondition", "bOverride_WidthOverride" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
		{ "ToolTip", "When specified, ignore the content's desired size and report the WidthOverride as the Box's desired width." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_WidthOverride = { "WidthOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, &USizeBox::SetWidthOverride_WrapperImpl, &USizeBox::GetWidthOverride_WrapperImpl, STRUCT_OFFSET(USizeBox, WidthOverride), METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_WidthOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_WidthOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_HeightOverride_MetaData[] = {
		{ "BlueprintSetter", "SetHeightOverride" },
		{ "Category", "Child Layout" },
		{ "Comment", "/** When specified, ignore the content's desired size and report the HeightOverride as the Box's desired height. */" },
		{ "editcondition", "bOverride_HeightOverride" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
		{ "ToolTip", "When specified, ignore the content's desired size and report the HeightOverride as the Box's desired height." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_HeightOverride = { "HeightOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, &USizeBox::SetHeightOverride_WrapperImpl, &USizeBox::GetHeightOverride_WrapperImpl, STRUCT_OFFSET(USizeBox, HeightOverride), METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_HeightOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_HeightOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_MinDesiredWidth_MetaData[] = {
		{ "BlueprintSetter", "SetMinDesiredWidth" },
		{ "Category", "Child Layout" },
		{ "Comment", "/** When specified, will report the MinDesiredWidth if larger than the content's desired width. */" },
		{ "editcondition", "bOverride_MinDesiredWidth" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
		{ "ToolTip", "When specified, will report the MinDesiredWidth if larger than the content's desired width." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_MinDesiredWidth = { "MinDesiredWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, &USizeBox::SetMinDesiredWidth_WrapperImpl, &USizeBox::GetMinDesiredWidth_WrapperImpl, STRUCT_OFFSET(USizeBox, MinDesiredWidth), METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_MinDesiredWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_MinDesiredWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_MinDesiredHeight_MetaData[] = {
		{ "BlueprintSetter", "SetMinDesiredHeight" },
		{ "Category", "Child Layout" },
		{ "Comment", "/** When specified, will report the MinDesiredHeight if larger than the content's desired height. */" },
		{ "editcondition", "bOverride_MinDesiredHeight" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
		{ "ToolTip", "When specified, will report the MinDesiredHeight if larger than the content's desired height." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_MinDesiredHeight = { "MinDesiredHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, &USizeBox::SetMinDesiredHeight_WrapperImpl, &USizeBox::GetMinDesiredHeight_WrapperImpl, STRUCT_OFFSET(USizeBox, MinDesiredHeight), METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_MinDesiredHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_MinDesiredHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_MaxDesiredWidth_MetaData[] = {
		{ "BlueprintSetter", "SetMaxDesiredWidth" },
		{ "Category", "Child Layout" },
		{ "Comment", "/** When specified, will report the MaxDesiredWidth if smaller than the content's desired width. */" },
		{ "editcondition", "bOverride_MaxDesiredWidth" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
		{ "ToolTip", "When specified, will report the MaxDesiredWidth if smaller than the content's desired width." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_MaxDesiredWidth = { "MaxDesiredWidth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, &USizeBox::SetMaxDesiredWidth_WrapperImpl, &USizeBox::GetMaxDesiredWidth_WrapperImpl, STRUCT_OFFSET(USizeBox, MaxDesiredWidth), METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_MaxDesiredWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_MaxDesiredWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_MaxDesiredHeight_MetaData[] = {
		{ "BlueprintSetter", "SetMaxDesiredHeight" },
		{ "Category", "Child Layout" },
		{ "Comment", "/** When specified, will report the MaxDesiredHeight if smaller than the content's desired height. */" },
		{ "editcondition", "bOverride_MaxDesiredHeight" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
		{ "ToolTip", "When specified, will report the MaxDesiredHeight if smaller than the content's desired height." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_MaxDesiredHeight = { "MaxDesiredHeight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, &USizeBox::SetMaxDesiredHeight_WrapperImpl, &USizeBox::GetMaxDesiredHeight_WrapperImpl, STRUCT_OFFSET(USizeBox, MaxDesiredHeight), METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_MaxDesiredHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_MaxDesiredHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_MinAspectRatio_MetaData[] = {
		{ "BlueprintSetter", "SetMinAspectRatio" },
		{ "Category", "Child Layout" },
		{ "Comment", "/** */" },
		{ "editcondition", "bOverride_MinAspectRatio" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_MinAspectRatio = { "MinAspectRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, &USizeBox::SetMinAspectRatio_WrapperImpl, &USizeBox::GetMinAspectRatio_WrapperImpl, STRUCT_OFFSET(USizeBox, MinAspectRatio), METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_MinAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_MinAspectRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_MaxAspectRatio_MetaData[] = {
		{ "BlueprintSetter", "SetMaxAspectRatio" },
		{ "Category", "Child Layout" },
		{ "Comment", "/** */" },
		{ "editcondition", "bOverride_MaxAspectRatio" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_MaxAspectRatio = { "MaxAspectRatio", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, &USizeBox::SetMaxAspectRatio_WrapperImpl, &USizeBox::GetMaxAspectRatio_WrapperImpl, STRUCT_OFFSET(USizeBox, MaxAspectRatio), METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_MaxAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_MaxAspectRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_WidthOverride_MetaData[] = {
		{ "Category", "Child Layout" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	void Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_WidthOverride_SetBit(void* Obj)
	{
		((USizeBox*)Obj)->bOverride_WidthOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_WidthOverride = { "bOverride_WidthOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USizeBox), &Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_WidthOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_WidthOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_WidthOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_HeightOverride_MetaData[] = {
		{ "Category", "Child Layout" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	void Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_HeightOverride_SetBit(void* Obj)
	{
		((USizeBox*)Obj)->bOverride_HeightOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_HeightOverride = { "bOverride_HeightOverride", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USizeBox), &Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_HeightOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_HeightOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_HeightOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinDesiredWidth_MetaData[] = {
		{ "Category", "Child Layout" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	void Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinDesiredWidth_SetBit(void* Obj)
	{
		((USizeBox*)Obj)->bOverride_MinDesiredWidth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinDesiredWidth = { "bOverride_MinDesiredWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USizeBox), &Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinDesiredWidth_SetBit, METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinDesiredWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinDesiredWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinDesiredHeight_MetaData[] = {
		{ "Category", "Child Layout" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	void Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinDesiredHeight_SetBit(void* Obj)
	{
		((USizeBox*)Obj)->bOverride_MinDesiredHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinDesiredHeight = { "bOverride_MinDesiredHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USizeBox), &Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinDesiredHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinDesiredHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinDesiredHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxDesiredWidth_MetaData[] = {
		{ "Category", "Child Layout" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	void Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxDesiredWidth_SetBit(void* Obj)
	{
		((USizeBox*)Obj)->bOverride_MaxDesiredWidth = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxDesiredWidth = { "bOverride_MaxDesiredWidth", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USizeBox), &Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxDesiredWidth_SetBit, METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxDesiredWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxDesiredWidth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxDesiredHeight_MetaData[] = {
		{ "Category", "Child Layout" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	void Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxDesiredHeight_SetBit(void* Obj)
	{
		((USizeBox*)Obj)->bOverride_MaxDesiredHeight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxDesiredHeight = { "bOverride_MaxDesiredHeight", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USizeBox), &Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxDesiredHeight_SetBit, METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxDesiredHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxDesiredHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinAspectRatio_MetaData[] = {
		{ "Category", "Child Layout" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	void Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinAspectRatio_SetBit(void* Obj)
	{
		((USizeBox*)Obj)->bOverride_MinAspectRatio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinAspectRatio = { "bOverride_MinAspectRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USizeBox), &Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinAspectRatio_SetBit, METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinAspectRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxAspectRatio_MetaData[] = {
		{ "Category", "Child Layout" },
		{ "Comment", "/**  */" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Components/SizeBox.h" },
	};
#endif
	void Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxAspectRatio_SetBit(void* Obj)
	{
		((USizeBox*)Obj)->bOverride_MaxAspectRatio = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxAspectRatio = { "bOverride_MaxAspectRatio", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(USizeBox), &Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxAspectRatio_SetBit, METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxAspectRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxAspectRatio_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USizeBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_WidthOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_HeightOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_MinDesiredWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_MinDesiredHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_MaxDesiredWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_MaxDesiredHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_MinAspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_MaxAspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_WidthOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_HeightOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinDesiredWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinDesiredHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxDesiredWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxDesiredHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MinAspectRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USizeBox_Statics::NewProp_bOverride_MaxAspectRatio,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USizeBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USizeBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USizeBox_Statics::ClassParams = {
		&USizeBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USizeBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USizeBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USizeBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USizeBox()
	{
		if (!Z_Registration_Info_UClass_USizeBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USizeBox.OuterSingleton, Z_Construct_UClass_USizeBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USizeBox.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<USizeBox>()
	{
		return USizeBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USizeBox);
	USizeBox::~USizeBox() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USizeBox, USizeBox::StaticClass, TEXT("USizeBox"), &Z_Registration_Info_UClass_USizeBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USizeBox), 3719848726U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_3434846682(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SizeBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
