// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Game/WorldSubsystem/TextureShareWorldSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTextureShareWorldSubsystem() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
	TEXTURESHARE_API UClass* Z_Construct_UClass_UTextureShare_NoRegister();
	TEXTURESHARE_API UClass* Z_Construct_UClass_UTextureShareWorldSubsystem();
	TEXTURESHARE_API UClass* Z_Construct_UClass_UTextureShareWorldSubsystem_NoRegister();
	UPackage* Z_Construct_UPackage__Script_TextureShare();
// End Cross Module References
	DEFINE_FUNCTION(UTextureShareWorldSubsystem::execGetTextureShare)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureShare**)Z_Param__Result=P_THIS->GetTextureShare();
		P_NATIVE_END;
	}
	void UTextureShareWorldSubsystem::StaticRegisterNativesUTextureShareWorldSubsystem()
	{
		UClass* Class = UTextureShareWorldSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetTextureShare", &UTextureShareWorldSubsystem::execGetTextureShare },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTextureShareWorldSubsystem_GetTextureShare_Statics
	{
		struct TextureShareWorldSubsystem_eventGetTextureShare_Parms
		{
			UTextureShare* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTextureShareWorldSubsystem_GetTextureShare_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TextureShareWorldSubsystem_eventGetTextureShare_Parms, ReturnValue), Z_Construct_UClass_UTextureShare_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTextureShareWorldSubsystem_GetTextureShare_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTextureShareWorldSubsystem_GetTextureShare_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTextureShareWorldSubsystem_GetTextureShare_Statics::Function_MetaDataParams[] = {
		{ "Category", "TextureShare" },
		{ "Comment", "// Get textureshare API UObject\n" },
		{ "DisplayName", "TextureShareAPI" },
		{ "ModuleRelativePath", "Private/Game/WorldSubsystem/TextureShareWorldSubsystem.h" },
		{ "ToolTip", "Get textureshare API UObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTextureShareWorldSubsystem_GetTextureShare_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTextureShareWorldSubsystem, nullptr, "GetTextureShare", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTextureShareWorldSubsystem_GetTextureShare_Statics::TextureShareWorldSubsystem_eventGetTextureShare_Parms), Z_Construct_UFunction_UTextureShareWorldSubsystem_GetTextureShare_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureShareWorldSubsystem_GetTextureShare_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTextureShareWorldSubsystem_GetTextureShare_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTextureShareWorldSubsystem_GetTextureShare_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTextureShareWorldSubsystem_GetTextureShare()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTextureShareWorldSubsystem_GetTextureShare_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTextureShareWorldSubsystem);
	UClass* Z_Construct_UClass_UTextureShareWorldSubsystem_NoRegister()
	{
		return UTextureShareWorldSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UTextureShareWorldSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureShare_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextureShare;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTextureShareWorldSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_TextureShare,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTextureShareWorldSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTextureShareWorldSubsystem_GetTextureShare, "GetTextureShare" }, // 251103380
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureShareWorldSubsystem_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Tickable TextureShare World Subsystem used to handle tick and react to level and world changes.\n */" },
		{ "IncludePath", "Game/WorldSubsystem/TextureShareWorldSubsystem.h" },
		{ "ModuleRelativePath", "Private/Game/WorldSubsystem/TextureShareWorldSubsystem.h" },
		{ "ToolTip", "Tickable TextureShare World Subsystem used to handle tick and react to level and world changes." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTextureShareWorldSubsystem_Statics::NewProp_TextureShare_MetaData[] = {
		{ "Comment", "// This UObject implements configuration and API\n" },
		{ "ModuleRelativePath", "Private/Game/WorldSubsystem/TextureShareWorldSubsystem.h" },
		{ "ToolTip", "This UObject implements configuration and API" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UTextureShareWorldSubsystem_Statics::NewProp_TextureShare = { "TextureShare", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTextureShareWorldSubsystem, TextureShare), Z_Construct_UClass_UTextureShare_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UTextureShareWorldSubsystem_Statics::NewProp_TextureShare_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureShareWorldSubsystem_Statics::NewProp_TextureShare_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTextureShareWorldSubsystem_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTextureShareWorldSubsystem_Statics::NewProp_TextureShare,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTextureShareWorldSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTextureShareWorldSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTextureShareWorldSubsystem_Statics::ClassParams = {
		&UTextureShareWorldSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTextureShareWorldSubsystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTextureShareWorldSubsystem_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTextureShareWorldSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTextureShareWorldSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTextureShareWorldSubsystem()
	{
		if (!Z_Registration_Info_UClass_UTextureShareWorldSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTextureShareWorldSubsystem.OuterSingleton, Z_Construct_UClass_UTextureShareWorldSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTextureShareWorldSubsystem.OuterSingleton;
	}
	template<> TEXTURESHARE_API UClass* StaticClass<UTextureShareWorldSubsystem>()
	{
		return UTextureShareWorldSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTextureShareWorldSubsystem);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Private_Game_WorldSubsystem_TextureShareWorldSubsystem_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Private_Game_WorldSubsystem_TextureShareWorldSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTextureShareWorldSubsystem, UTextureShareWorldSubsystem::StaticClass, TEXT("UTextureShareWorldSubsystem"), &Z_Registration_Info_UClass_UTextureShareWorldSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTextureShareWorldSubsystem), 4230604225U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Private_Game_WorldSubsystem_TextureShareWorldSubsystem_h_1235939173(TEXT("/Script/TextureShare"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Private_Game_WorldSubsystem_TextureShareWorldSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_TextureShare_Source_TextureShare_Private_Game_WorldSubsystem_TextureShareWorldSubsystem_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
