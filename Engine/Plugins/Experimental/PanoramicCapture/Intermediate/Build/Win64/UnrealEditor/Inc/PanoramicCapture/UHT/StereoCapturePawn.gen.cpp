// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StereoCapturePawn.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LatentActionManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStereoCapturePawn() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ADefaultPawn();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	PANORAMICCAPTURE_API UClass* Z_Construct_UClass_AStereoCapturePawn();
	PANORAMICCAPTURE_API UClass* Z_Construct_UClass_AStereoCapturePawn_NoRegister();
	UPackage* Z_Construct_UPackage__Script_PanoramicCapture();
// End Cross Module References
	DEFINE_FUNCTION(AStereoCapturePawn::execUpdateStereoAtlas)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateStereoAtlas(Z_Param_WorldContextObject,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	void AStereoCapturePawn::StaticRegisterNativesAStereoCapturePawn()
	{
		UClass* Class = AStereoCapturePawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateStereoAtlas", &AStereoCapturePawn::execUpdateStereoAtlas },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas_Statics
	{
		struct StereoCapturePawn_eventUpdateStereoAtlas_Parms
		{
			UObject* WorldContextObject;
			FLatentActionInfo LatentInfo;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StereoCapturePawn_eventUpdateStereoAtlas_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StereoCapturePawn_eventUpdateStereoAtlas_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) }; // 2194022737
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas_Statics::NewProp_LatentInfo,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Public/StereoCapturePawn.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AStereoCapturePawn, nullptr, "UpdateStereoAtlas", nullptr, nullptr, sizeof(Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas_Statics::StereoCapturePawn_eventUpdateStereoAtlas_Parms), Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AStereoCapturePawn);
	UClass* Z_Construct_UClass_AStereoCapturePawn_NoRegister()
	{
		return AStereoCapturePawn::StaticClass();
	}
	struct Z_Construct_UClass_AStereoCapturePawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftEyeAtlas_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_LeftEyeAtlas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightEyeAtlas_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RightEyeAtlas;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStereoCapturePawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADefaultPawn,
		(UObject* (*)())Z_Construct_UPackage__Script_PanoramicCapture,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AStereoCapturePawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AStereoCapturePawn_UpdateStereoAtlas, "UpdateStereoAtlas" }, // 3257907189
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStereoCapturePawn_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "StereoCapturePawn.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/StereoCapturePawn.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStereoCapturePawn_Statics::NewProp_LeftEyeAtlas_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Public/StereoCapturePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AStereoCapturePawn_Statics::NewProp_LeftEyeAtlas = { "LeftEyeAtlas", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStereoCapturePawn, LeftEyeAtlas), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStereoCapturePawn_Statics::NewProp_LeftEyeAtlas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStereoCapturePawn_Statics::NewProp_LeftEyeAtlas_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStereoCapturePawn_Statics::NewProp_RightEyeAtlas_MetaData[] = {
		{ "Category", "Pawn" },
		{ "ModuleRelativePath", "Public/StereoCapturePawn.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AStereoCapturePawn_Statics::NewProp_RightEyeAtlas = { "RightEyeAtlas", nullptr, (EPropertyFlags)0x0014000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AStereoCapturePawn, RightEyeAtlas), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStereoCapturePawn_Statics::NewProp_RightEyeAtlas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AStereoCapturePawn_Statics::NewProp_RightEyeAtlas_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStereoCapturePawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStereoCapturePawn_Statics::NewProp_LeftEyeAtlas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStereoCapturePawn_Statics::NewProp_RightEyeAtlas,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStereoCapturePawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStereoCapturePawn>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AStereoCapturePawn_Statics::ClassParams = {
		&AStereoCapturePawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AStereoCapturePawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AStereoCapturePawn_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AStereoCapturePawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AStereoCapturePawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStereoCapturePawn()
	{
		if (!Z_Registration_Info_UClass_AStereoCapturePawn.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AStereoCapturePawn.OuterSingleton, Z_Construct_UClass_AStereoCapturePawn_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AStereoCapturePawn.OuterSingleton;
	}
	template<> PANORAMICCAPTURE_API UClass* StaticClass<AStereoCapturePawn>()
	{
		return AStereoCapturePawn::StaticClass();
	}
	AStereoCapturePawn::AStereoCapturePawn(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStereoCapturePawn);
	AStereoCapturePawn::~AStereoCapturePawn() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Public_StereoCapturePawn_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Public_StereoCapturePawn_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AStereoCapturePawn, AStereoCapturePawn::StaticClass, TEXT("AStereoCapturePawn"), &Z_Registration_Info_UClass_AStereoCapturePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AStereoCapturePawn), 3950374112U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Public_StereoCapturePawn_h_2172972960(TEXT("/Script/PanoramicCapture"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Public_StereoCapturePawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_PanoramicCapture_Source_PanoramicCapture_Public_StereoCapturePawn_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
