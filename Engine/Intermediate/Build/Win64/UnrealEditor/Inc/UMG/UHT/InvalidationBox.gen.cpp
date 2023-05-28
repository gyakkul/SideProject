// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/InvalidationBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInvalidationBox() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UMG_API UClass* Z_Construct_UClass_UInvalidationBox();
	UMG_API UClass* Z_Construct_UClass_UInvalidationBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UInvalidationBox::execSetCanCache)
	{
		P_GET_UBOOL(Z_Param_CanCache);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCanCache(Z_Param_CanCache);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInvalidationBox::execGetCanCache)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCanCache();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInvalidationBox::execInvalidateCache)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InvalidateCache();
		P_NATIVE_END;
	}
	void UInvalidationBox::GetbCanCache_WrapperImpl(const void* Object, void* OutValue)
	{
		const UInvalidationBox* Obj = (const UInvalidationBox*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->GetCanCache();
	}
	void UInvalidationBox::SetbCanCache_WrapperImpl(void* Object, const void* InValue)
	{
		UInvalidationBox* Obj = (UInvalidationBox*)Object;
		bool& Value = *(bool*)InValue;
		Obj->SetCanCache(Value);
	}
	void UInvalidationBox::StaticRegisterNativesUInvalidationBox()
	{
		UClass* Class = UInvalidationBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCanCache", &UInvalidationBox::execGetCanCache },
			{ "InvalidateCache", &UInvalidationBox::execInvalidateCache },
			{ "SetCanCache", &UInvalidationBox::execSetCanCache },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInvalidationBox_GetCanCache_Statics
	{
		struct InvalidationBox_eventGetCanCache_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInvalidationBox_GetCanCache_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InvalidationBox_eventGetCanCache_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInvalidationBox_GetCanCache_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InvalidationBox_eventGetCanCache_Parms), &Z_Construct_UFunction_UInvalidationBox_GetCanCache_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInvalidationBox_GetCanCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInvalidationBox_GetCanCache_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInvalidationBox_GetCanCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Invalidation Box" },
		{ "Comment", "/**\n\x09 * @returns true when the invalidation box cache the widgets.\n\x09 * The widgets will be updated only if they get invalidated.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/InvalidationBox.h" },
		{ "ToolTip", "@returns true when the invalidation box cache the widgets.\nThe widgets will be updated only if they get invalidated." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInvalidationBox_GetCanCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInvalidationBox, nullptr, "GetCanCache", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInvalidationBox_GetCanCache_Statics::InvalidationBox_eventGetCanCache_Parms), Z_Construct_UFunction_UInvalidationBox_GetCanCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInvalidationBox_GetCanCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInvalidationBox_GetCanCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInvalidationBox_GetCanCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInvalidationBox_GetCanCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInvalidationBox_GetCanCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInvalidationBox_InvalidateCache_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInvalidationBox_InvalidateCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Invalidation Box" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Public/Components/InvalidationBox.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInvalidationBox_InvalidateCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInvalidationBox, nullptr, "InvalidateCache", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInvalidationBox_InvalidateCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInvalidationBox_InvalidateCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInvalidationBox_InvalidateCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInvalidationBox_InvalidateCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInvalidationBox_SetCanCache_Statics
	{
		struct InvalidationBox_eventSetCanCache_Parms
		{
			bool CanCache;
		};
		static void NewProp_CanCache_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_CanCache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInvalidationBox_SetCanCache_Statics::NewProp_CanCache_SetBit(void* Obj)
	{
		((InvalidationBox_eventSetCanCache_Parms*)Obj)->CanCache = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInvalidationBox_SetCanCache_Statics::NewProp_CanCache = { "CanCache", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(InvalidationBox_eventSetCanCache_Parms), &Z_Construct_UFunction_UInvalidationBox_SetCanCache_Statics::NewProp_CanCache_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInvalidationBox_SetCanCache_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInvalidationBox_SetCanCache_Statics::NewProp_CanCache,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInvalidationBox_SetCanCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "Invalidation Box" },
		{ "Comment", "/**\n\x09 * Tell the InvalidationBox to use the invalidation process.\n\x09 * @note the other internal flags can disable the option.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/InvalidationBox.h" },
		{ "ToolTip", "Tell the InvalidationBox to use the invalidation process.\n@note the other internal flags can disable the option." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInvalidationBox_SetCanCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInvalidationBox, nullptr, "SetCanCache", nullptr, nullptr, sizeof(Z_Construct_UFunction_UInvalidationBox_SetCanCache_Statics::InvalidationBox_eventSetCanCache_Parms), Z_Construct_UFunction_UInvalidationBox_SetCanCache_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInvalidationBox_SetCanCache_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInvalidationBox_SetCanCache_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInvalidationBox_SetCanCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInvalidationBox_SetCanCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInvalidationBox_SetCanCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInvalidationBox);
	UClass* Z_Construct_UClass_UInvalidationBox_NoRegister()
	{
		return UInvalidationBox::StaticClass();
	}
	struct Z_Construct_UClass_UInvalidationBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanCache_MetaData[];
#endif
		static void NewProp_bCanCache_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanCache;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInvalidationBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInvalidationBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInvalidationBox_GetCanCache, "GetCanCache" }, // 3401322579
		{ &Z_Construct_UFunction_UInvalidationBox_InvalidateCache, "InvalidateCache" }, // 769458690
		{ &Z_Construct_UFunction_UInvalidationBox_SetCanCache, "SetCanCache" }, // 3375199155
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInvalidationBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Invalidate\n * * Single Child\n * * Caching / Performance\n */" },
		{ "IncludePath", "Components/InvalidationBox.h" },
		{ "ModuleRelativePath", "Public/Components/InvalidationBox.h" },
		{ "ToolTip", "Invalidate\n* Single Child\n* Caching / Performance" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInvalidationBox_Statics::NewProp_bCanCache_MetaData[] = {
		{ "BlueprintGetter", "GetCanCache" },
		{ "BlueprintSetter", "SetCanCache" },
		{ "Category", "Caching" },
		{ "Comment", "/**\n\x09 * Should the invalidation panel cache the widgets?  Making this false makes it so the invalidation\n\x09 * panel stops acting like an invalidation panel, just becomes a simple container widget.\n\x09 */" },
		{ "ModuleRelativePath", "Public/Components/InvalidationBox.h" },
		{ "ToolTip", "Should the invalidation panel cache the widgets?  Making this false makes it so the invalidation\npanel stops acting like an invalidation panel, just becomes a simple container widget." },
	};
#endif
	void Z_Construct_UClass_UInvalidationBox_Statics::NewProp_bCanCache_SetBit(void* Obj)
	{
		((UInvalidationBox*)Obj)->bCanCache = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInvalidationBox_Statics::NewProp_bCanCache = { "bCanCache", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UInvalidationBox::SetbCanCache_WrapperImpl, &UInvalidationBox::GetbCanCache_WrapperImpl, sizeof(bool), sizeof(UInvalidationBox), &Z_Construct_UClass_UInvalidationBox_Statics::NewProp_bCanCache_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInvalidationBox_Statics::NewProp_bCanCache_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInvalidationBox_Statics::NewProp_bCanCache_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInvalidationBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInvalidationBox_Statics::NewProp_bCanCache,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInvalidationBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInvalidationBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInvalidationBox_Statics::ClassParams = {
		&UInvalidationBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInvalidationBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInvalidationBox_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInvalidationBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInvalidationBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInvalidationBox()
	{
		if (!Z_Registration_Info_UClass_UInvalidationBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInvalidationBox.OuterSingleton, Z_Construct_UClass_UInvalidationBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInvalidationBox.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UInvalidationBox>()
	{
		return UInvalidationBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInvalidationBox);
	UInvalidationBox::~UInvalidationBox() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInvalidationBox, UInvalidationBox::StaticClass, TEXT("UInvalidationBox"), &Z_Registration_Info_UClass_UInvalidationBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInvalidationBox), 2797765256U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_674921396(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_InvalidationBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
