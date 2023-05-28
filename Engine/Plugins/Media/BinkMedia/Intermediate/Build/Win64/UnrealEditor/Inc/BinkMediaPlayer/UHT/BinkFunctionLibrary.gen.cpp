// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BinkFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBinkFunctionLibrary() {}
// Cross Module References
	BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkFunctionLibrary();
	BINKMEDIAPLAYER_API UClass* Z_Construct_UClass_UBinkFunctionLibrary_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTimespan();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_BinkMediaPlayer();
// End Cross Module References
	DEFINE_FUNCTION(UBinkFunctionLibrary::execBinkLoadingMovie_GetTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimespan*)Z_Param__Result=UBinkFunctionLibrary::BinkLoadingMovie_GetTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBinkFunctionLibrary::execBinkLoadingMovie_GetDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTimespan*)Z_Param__Result=UBinkFunctionLibrary::BinkLoadingMovie_GetDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBinkFunctionLibrary::execBink_DrawOverlays)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UBinkFunctionLibrary::Bink_DrawOverlays();
		P_NATIVE_END;
	}
	void UBinkFunctionLibrary::StaticRegisterNativesUBinkFunctionLibrary()
	{
		UClass* Class = UBinkFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Bink_DrawOverlays", &UBinkFunctionLibrary::execBink_DrawOverlays },
			{ "BinkLoadingMovie_GetDuration", &UBinkFunctionLibrary::execBinkLoadingMovie_GetDuration },
			{ "BinkLoadingMovie_GetTime", &UBinkFunctionLibrary::execBinkLoadingMovie_GetTime },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBinkFunctionLibrary_Bink_DrawOverlays_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkFunctionLibrary_Bink_DrawOverlays_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bink" },
		{ "ModuleRelativePath", "Public/BinkFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkFunctionLibrary_Bink_DrawOverlays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkFunctionLibrary, nullptr, "Bink_DrawOverlays", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkFunctionLibrary_Bink_DrawOverlays_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkFunctionLibrary_Bink_DrawOverlays_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkFunctionLibrary_Bink_DrawOverlays()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkFunctionLibrary_Bink_DrawOverlays_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Statics
	{
		struct BinkFunctionLibrary_eventBinkLoadingMovie_GetDuration_Parms
		{
			FTimespan ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BinkFunctionLibrary_eventBinkLoadingMovie_GetDuration_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bink" },
		{ "ModuleRelativePath", "Public/BinkFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkFunctionLibrary, nullptr, "BinkLoadingMovie_GetDuration", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Statics::BinkFunctionLibrary_eventBinkLoadingMovie_GetDuration_Parms), Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Statics
	{
		struct BinkFunctionLibrary_eventBinkLoadingMovie_GetTime_Parms
		{
			FTimespan ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(BinkFunctionLibrary_eventBinkLoadingMovie_GetTime_Parms, ReturnValue), Z_Construct_UScriptStruct_FTimespan, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Bink" },
		{ "ModuleRelativePath", "Public/BinkFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBinkFunctionLibrary, nullptr, "BinkLoadingMovie_GetTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Statics::BinkFunctionLibrary_eventBinkLoadingMovie_GetTime_Parms), Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBinkFunctionLibrary);
	UClass* Z_Construct_UClass_UBinkFunctionLibrary_NoRegister()
	{
		return UBinkFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBinkFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBinkFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_BinkMediaPlayer,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBinkFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBinkFunctionLibrary_Bink_DrawOverlays, "Bink_DrawOverlays" }, // 2738056727
		{ &Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetDuration, "BinkLoadingMovie_GetDuration" }, // 1756081241
		{ &Z_Construct_UFunction_UBinkFunctionLibrary_BinkLoadingMovie_GetTime, "BinkLoadingMovie_GetTime" }, // 429103974
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBinkFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BinkFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/BinkFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBinkFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBinkFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBinkFunctionLibrary_Statics::ClassParams = {
		&UBinkFunctionLibrary::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBinkFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBinkFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBinkFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UBinkFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBinkFunctionLibrary.OuterSingleton, Z_Construct_UClass_UBinkFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBinkFunctionLibrary.OuterSingleton;
	}
	template<> BINKMEDIAPLAYER_API UClass* StaticClass<UBinkFunctionLibrary>()
	{
		return UBinkFunctionLibrary::StaticClass();
	}
	UBinkFunctionLibrary::UBinkFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBinkFunctionLibrary);
	UBinkFunctionLibrary::~UBinkFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBinkFunctionLibrary, UBinkFunctionLibrary::StaticClass, TEXT("UBinkFunctionLibrary"), &Z_Registration_Info_UClass_UBinkFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBinkFunctionLibrary), 252372124U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_2686553854(TEXT("/Script/BinkMediaPlayer"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_BinkMedia_Source_BinkMediaPlayer_Public_BinkFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
