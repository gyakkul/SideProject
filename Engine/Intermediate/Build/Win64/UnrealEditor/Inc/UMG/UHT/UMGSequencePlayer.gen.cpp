// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/UMGSequencePlayer.h"
#include "Evaluation/MovieSceneEvaluationTemplateInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGSequencePlayer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance();
	UMG_API UClass* Z_Construct_UClass_UUMGSequencePlayer();
	UMG_API UClass* Z_Construct_UClass_UUMGSequencePlayer_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UUMGSequencePlayer::execSetUserTag)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_InUserTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUserTag(Z_Param_InUserTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGSequencePlayer::execGetUserTag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetUserTag();
		P_NATIVE_END;
	}
	void UUMGSequencePlayer::StaticRegisterNativesUUMGSequencePlayer()
	{
		UClass* Class = UUMGSequencePlayer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetUserTag", &UUMGSequencePlayer::execGetUserTag },
			{ "SetUserTag", &UUMGSequencePlayer::execSetUserTag },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics
	{
		struct UMGSequencePlayer_eventGetUserTag_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMGSequencePlayer_eventGetUserTag_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "/** @return */" },
		{ "ModuleRelativePath", "Public/Animation/UMGSequencePlayer.h" },
		{ "ToolTip", "@return" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSequencePlayer, nullptr, "GetUserTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::UMGSequencePlayer_eventGetUserTag_Parms), Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics
	{
		struct UMGSequencePlayer_eventSetUserTag_Parms
		{
			FName InUserTag;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_InUserTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::NewProp_InUserTag = { "InUserTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMGSequencePlayer_eventSetUserTag_Parms, InUserTag), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::NewProp_InUserTag,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/Animation/UMGSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSequencePlayer, nullptr, "SetUserTag", nullptr, nullptr, sizeof(Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::UMGSequencePlayer_eventSetUserTag_Parms), Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUMGSequencePlayer);
	UClass* Z_Construct_UClass_UUMGSequencePlayer_NoRegister()
	{
		return UUMGSequencePlayer::StaticClass();
	}
	struct Z_Construct_UClass_UUMGSequencePlayer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Animation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootTemplateInstance_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootTemplateInstance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGSequencePlayer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGSequencePlayer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGSequencePlayer_GetUserTag, "GetUserTag" }, // 3956132735
		{ &Z_Construct_UFunction_UUMGSequencePlayer_SetUserTag, "SetUserTag" }, // 1800179983
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSequencePlayer_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Animation/UMGSequencePlayer.h" },
		{ "ModuleRelativePath", "Public/Animation/UMGSequencePlayer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSequencePlayer_Statics::NewProp_Animation_MetaData[] = {
		{ "Comment", "/** Animation being played */" },
		{ "ModuleRelativePath", "Public/Animation/UMGSequencePlayer.h" },
		{ "ToolTip", "Animation being played" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUMGSequencePlayer_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUMGSequencePlayer, Animation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSequencePlayer_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSequencePlayer_Statics::NewProp_Animation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSequencePlayer_Statics::NewProp_RootTemplateInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/UMGSequencePlayer.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGSequencePlayer_Statics::NewProp_RootTemplateInstance = { "RootTemplateInstance", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUMGSequencePlayer, RootTemplateInstance), Z_Construct_UScriptStruct_FMovieSceneRootEvaluationTemplateInstance, METADATA_PARAMS(Z_Construct_UClass_UUMGSequencePlayer_Statics::NewProp_RootTemplateInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSequencePlayer_Statics::NewProp_RootTemplateInstance_MetaData)) }; // 4282407389
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGSequencePlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSequencePlayer_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSequencePlayer_Statics::NewProp_RootTemplateInstance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGSequencePlayer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGSequencePlayer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUMGSequencePlayer_Statics::ClassParams = {
		&UUMGSequencePlayer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGSequencePlayer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSequencePlayer_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGSequencePlayer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSequencePlayer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGSequencePlayer()
	{
		if (!Z_Registration_Info_UClass_UUMGSequencePlayer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUMGSequencePlayer.OuterSingleton, Z_Construct_UClass_UUMGSequencePlayer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUMGSequencePlayer.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UUMGSequencePlayer>()
	{
		return UUMGSequencePlayer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGSequencePlayer);
	UUMGSequencePlayer::~UUMGSequencePlayer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUMGSequencePlayer, UUMGSequencePlayer::StaticClass, TEXT("UUMGSequencePlayer"), &Z_Registration_Info_UClass_UUMGSequencePlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUMGSequencePlayer), 525010931U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_4121035849(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_UMGSequencePlayer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
