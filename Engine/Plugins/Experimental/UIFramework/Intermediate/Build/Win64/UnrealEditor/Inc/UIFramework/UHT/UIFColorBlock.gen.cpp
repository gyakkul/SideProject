// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Widgets/UIFColorBlock.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIFColorBlock() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2f();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkColorBlock();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkColorBlock_NoRegister();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkWidget();
	UPackage* Z_Construct_UPackage__Script_UIFramework();
// End Cross Module References
	DEFINE_FUNCTION(UUIFrameworkColorBlock::execOnRep_DesiredSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DesiredSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkColorBlock::execOnRep_Color)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_Color();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkColorBlock::execGetDesiredSize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2f*)Z_Param__Result=P_THIS->GetDesiredSize();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkColorBlock::execSetDesiredSize)
	{
		P_GET_STRUCT(FVector2f,Z_Param_DesiredSize);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDesiredSize(Z_Param_DesiredSize);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkColorBlock::execGetColor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetColor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUIFrameworkColorBlock::execSetColor)
	{
		P_GET_STRUCT(FLinearColor,Z_Param_Tint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColor(Z_Param_Tint);
		P_NATIVE_END;
	}
	void UUIFrameworkColorBlock::StaticRegisterNativesUUIFrameworkColorBlock()
	{
		UClass* Class = UUIFrameworkColorBlock::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetColor", &UUIFrameworkColorBlock::execGetColor },
			{ "GetDesiredSize", &UUIFrameworkColorBlock::execGetDesiredSize },
			{ "OnRep_Color", &UUIFrameworkColorBlock::execOnRep_Color },
			{ "OnRep_DesiredSize", &UUIFrameworkColorBlock::execOnRep_DesiredSize },
			{ "SetColor", &UUIFrameworkColorBlock::execSetColor },
			{ "SetDesiredSize", &UUIFrameworkColorBlock::execSetDesiredSize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUIFrameworkColorBlock_GetColor_Statics
	{
		struct UIFrameworkColorBlock_eventGetColor_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIFrameworkColorBlock_GetColor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkColorBlock_eventGetColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkColorBlock_GetColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkColorBlock_GetColor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkColorBlock_GetColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFColorBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkColorBlock_GetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkColorBlock, nullptr, "GetColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkColorBlock_GetColor_Statics::UIFrameworkColorBlock_eventGetColor_Parms), Z_Construct_UFunction_UUIFrameworkColorBlock_GetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkColorBlock_GetColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkColorBlock_GetColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkColorBlock_GetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkColorBlock_GetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkColorBlock_GetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkColorBlock_GetDesiredSize_Statics
	{
		struct UIFrameworkColorBlock_eventGetDesiredSize_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIFrameworkColorBlock_GetDesiredSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkColorBlock_eventGetDesiredSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkColorBlock_GetDesiredSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkColorBlock_GetDesiredSize_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkColorBlock_GetDesiredSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFColorBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkColorBlock_GetDesiredSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkColorBlock, nullptr, "GetDesiredSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkColorBlock_GetDesiredSize_Statics::UIFrameworkColorBlock_eventGetDesiredSize_Parms), Z_Construct_UFunction_UUIFrameworkColorBlock_GetDesiredSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkColorBlock_GetDesiredSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkColorBlock_GetDesiredSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkColorBlock_GetDesiredSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkColorBlock_GetDesiredSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkColorBlock_GetDesiredSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkColorBlock_OnRep_Color_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkColorBlock_OnRep_Color_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFColorBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkColorBlock_OnRep_Color_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkColorBlock, nullptr, "OnRep_Color", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkColorBlock_OnRep_Color_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkColorBlock_OnRep_Color_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkColorBlock_OnRep_Color()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkColorBlock_OnRep_Color_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkColorBlock_OnRep_DesiredSize_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkColorBlock_OnRep_DesiredSize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFColorBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkColorBlock_OnRep_DesiredSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkColorBlock, nullptr, "OnRep_DesiredSize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkColorBlock_OnRep_DesiredSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkColorBlock_OnRep_DesiredSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkColorBlock_OnRep_DesiredSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkColorBlock_OnRep_DesiredSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkColorBlock_SetColor_Statics
	{
		struct UIFrameworkColorBlock_eventSetColor_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIFrameworkColorBlock_SetColor_Statics::NewProp_Tint = { "Tint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkColorBlock_eventSetColor_Parms, Tint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkColorBlock_SetColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkColorBlock_SetColor_Statics::NewProp_Tint,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkColorBlock_SetColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFColorBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkColorBlock_SetColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkColorBlock, nullptr, "SetColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkColorBlock_SetColor_Statics::UIFrameworkColorBlock_eventSetColor_Parms), Z_Construct_UFunction_UUIFrameworkColorBlock_SetColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkColorBlock_SetColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkColorBlock_SetColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkColorBlock_SetColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkColorBlock_SetColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkColorBlock_SetColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUIFrameworkColorBlock_SetDesiredSize_Statics
	{
		struct UIFrameworkColorBlock_eventSetDesiredSize_Parms
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
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUIFrameworkColorBlock_SetDesiredSize_Statics::NewProp_DesiredSize = { "DesiredSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UIFrameworkColorBlock_eventSetDesiredSize_Parms, DesiredSize), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUIFrameworkColorBlock_SetDesiredSize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUIFrameworkColorBlock_SetDesiredSize_Statics::NewProp_DesiredSize,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUIFrameworkColorBlock_SetDesiredSize_Statics::Function_MetaDataParams[] = {
		{ "Category", "UI Framework" },
		{ "ModuleRelativePath", "Public/Widgets/UIFColorBlock.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUIFrameworkColorBlock_SetDesiredSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUIFrameworkColorBlock, nullptr, "SetDesiredSize", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUIFrameworkColorBlock_SetDesiredSize_Statics::UIFrameworkColorBlock_eventSetDesiredSize_Parms), Z_Construct_UFunction_UUIFrameworkColorBlock_SetDesiredSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkColorBlock_SetDesiredSize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUIFrameworkColorBlock_SetDesiredSize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUIFrameworkColorBlock_SetDesiredSize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUIFrameworkColorBlock_SetDesiredSize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUIFrameworkColorBlock_SetDesiredSize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUIFrameworkColorBlock);
	UClass* Z_Construct_UClass_UUIFrameworkColorBlock_NoRegister()
	{
		return UUIFrameworkColorBlock::StaticClass();
	}
	struct Z_Construct_UClass_UUIFrameworkColorBlock_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DesiredSize_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUIFrameworkColorBlock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUIFrameworkWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUIFrameworkColorBlock_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUIFrameworkColorBlock_GetColor, "GetColor" }, // 166207292
		{ &Z_Construct_UFunction_UUIFrameworkColorBlock_GetDesiredSize, "GetDesiredSize" }, // 2751321633
		{ &Z_Construct_UFunction_UUIFrameworkColorBlock_OnRep_Color, "OnRep_Color" }, // 3437410703
		{ &Z_Construct_UFunction_UUIFrameworkColorBlock_OnRep_DesiredSize, "OnRep_DesiredSize" }, // 1048743901
		{ &Z_Construct_UFunction_UUIFrameworkColorBlock_SetColor, "SetColor" }, // 1432583281
		{ &Z_Construct_UFunction_UUIFrameworkColorBlock_SetDesiredSize, "SetDesiredSize" }, // 2240478705
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkColorBlock_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "DisplayName", "Color Block UIFramework" },
		{ "IncludePath", "Widgets/UIFColorBlock.h" },
		{ "ModuleRelativePath", "Public/Widgets/UIFColorBlock.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkColorBlock_Statics::NewProp_Color_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFColorBlock.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIFrameworkColorBlock_Statics::NewProp_Color = { "Color", "OnRep_Color", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIFrameworkColorBlock, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkColorBlock_Statics::NewProp_Color_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkColorBlock_Statics::NewProp_Color_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUIFrameworkColorBlock_Statics::NewProp_DesiredSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/UIFColorBlock.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUIFrameworkColorBlock_Statics::NewProp_DesiredSize = { "DesiredSize", "OnRep_DesiredSize", (EPropertyFlags)0x0040000100000020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUIFrameworkColorBlock, DesiredSize), Z_Construct_UScriptStruct_FVector2f, METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkColorBlock_Statics::NewProp_DesiredSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkColorBlock_Statics::NewProp_DesiredSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUIFrameworkColorBlock_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkColorBlock_Statics::NewProp_Color,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUIFrameworkColorBlock_Statics::NewProp_DesiredSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUIFrameworkColorBlock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUIFrameworkColorBlock>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUIFrameworkColorBlock_Statics::ClassParams = {
		&UUIFrameworkColorBlock::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUIFrameworkColorBlock_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkColorBlock_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUIFrameworkColorBlock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUIFrameworkColorBlock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUIFrameworkColorBlock()
	{
		if (!Z_Registration_Info_UClass_UUIFrameworkColorBlock.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUIFrameworkColorBlock.OuterSingleton, Z_Construct_UClass_UUIFrameworkColorBlock_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUIFrameworkColorBlock.OuterSingleton;
	}
	template<> UIFRAMEWORK_API UClass* StaticClass<UUIFrameworkColorBlock>()
	{
		return UUIFrameworkColorBlock::StaticClass();
	}

	void UUIFrameworkColorBlock::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_Color(TEXT("Color"));
		static const FName Name_DesiredSize(TEXT("DesiredSize"));

		const bool bIsValid = true
			&& Name_Color == ClassReps[(int32)ENetFields_Private::Color].Property->GetFName()
			&& Name_DesiredSize == ClassReps[(int32)ENetFields_Private::DesiredSize].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UUIFrameworkColorBlock"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUIFrameworkColorBlock);
	UUIFrameworkColorBlock::~UUIFrameworkColorBlock() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUIFrameworkColorBlock, UUIFrameworkColorBlock::StaticClass, TEXT("UUIFrameworkColorBlock"), &Z_Registration_Info_UClass_UUIFrameworkColorBlock, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUIFrameworkColorBlock), 2250097412U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_3349506640(TEXT("/Script/UIFramework"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Widgets_UIFColorBlock_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
