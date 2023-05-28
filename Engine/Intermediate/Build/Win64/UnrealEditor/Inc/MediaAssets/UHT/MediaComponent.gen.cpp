// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MediaComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMediaComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaComponent();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaComponent_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaPlayer_NoRegister();
	MEDIAASSETS_API UClass* Z_Construct_UClass_UMediaTexture_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MediaAssets();
// End Cross Module References
	DEFINE_FUNCTION(UMediaComponent::execGetMediaTexture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMediaTexture**)Z_Param__Result=P_THIS->GetMediaTexture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMediaComponent::execGetMediaPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMediaPlayer**)Z_Param__Result=P_THIS->GetMediaPlayer();
		P_NATIVE_END;
	}
	void UMediaComponent::StaticRegisterNativesUMediaComponent()
	{
		UClass* Class = UMediaComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMediaPlayer", &UMediaComponent::execGetMediaPlayer },
			{ "GetMediaTexture", &UMediaComponent::execGetMediaTexture },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMediaComponent_GetMediaPlayer_Statics
	{
		struct MediaComponent_eventGetMediaPlayer_Parms
		{
			UMediaPlayer* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaComponent_GetMediaPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaComponent_eventGetMediaPlayer_Parms, ReturnValue), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaComponent_GetMediaPlayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaComponent_GetMediaPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaComponent_GetMediaPlayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Get the media player that this component owns */" },
		{ "ModuleRelativePath", "Public/MediaComponent.h" },
		{ "ToolTip", "Get the media player that this component owns" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaComponent_GetMediaPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaComponent, nullptr, "GetMediaPlayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaComponent_GetMediaPlayer_Statics::MediaComponent_eventGetMediaPlayer_Parms), Z_Construct_UFunction_UMediaComponent_GetMediaPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaComponent_GetMediaPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaComponent_GetMediaPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaComponent_GetMediaPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaComponent_GetMediaPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaComponent_GetMediaPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMediaComponent_GetMediaTexture_Statics
	{
		struct MediaComponent_eventGetMediaTexture_Parms
		{
			UMediaTexture* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMediaComponent_GetMediaTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(MediaComponent_eventGetMediaTexture_Parms, ReturnValue), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMediaComponent_GetMediaTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMediaComponent_GetMediaTexture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaComponent_GetMediaTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Media" },
		{ "Comment", "/** Get the media texture that this component owns, bound to its media player. */" },
		{ "ModuleRelativePath", "Public/MediaComponent.h" },
		{ "ToolTip", "Get the media texture that this component owns, bound to its media player." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaComponent_GetMediaTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaComponent, nullptr, "GetMediaTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UMediaComponent_GetMediaTexture_Statics::MediaComponent_eventGetMediaTexture_Parms), Z_Construct_UFunction_UMediaComponent_GetMediaTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaComponent_GetMediaTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaComponent_GetMediaTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaComponent_GetMediaTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaComponent_GetMediaTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaComponent_GetMediaTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaComponent);
	UClass* Z_Construct_UClass_UMediaComponent_NoRegister()
	{
		return UMediaComponent::StaticClass();
	}
	struct Z_Construct_UClass_UMediaComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MediaPlayer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_MediaPlayer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaAssets,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMediaComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaComponent_GetMediaPlayer, "GetMediaPlayer" }, // 1210282431
		{ &Z_Construct_UFunction_UMediaComponent_GetMediaTexture, "GetMediaTexture" }, // 1603910400
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaComponent_Statics::Class_MetaDataParams[] = {
		{ "Category", "Media" },
		{ "HideCategories", "Media Activation" },
		{ "IncludePath", "MediaComponent.h" },
		{ "ModuleRelativePath", "Public/MediaComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaComponent_Statics::NewProp_MediaTexture_MetaData[] = {
		{ "BlueprintGetter", "GetMediaTexture" },
		{ "Category", "Media" },
		{ "Comment", "/** This component's media texture */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaComponent.h" },
		{ "ToolTip", "This component's media texture" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaComponent_Statics::NewProp_MediaTexture = { "MediaTexture", nullptr, (EPropertyFlags)0x004600000008201c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaComponent, MediaTexture), Z_Construct_UClass_UMediaTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaComponent_Statics::NewProp_MediaTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaComponent_Statics::NewProp_MediaTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaComponent_Statics::NewProp_MediaPlayer_MetaData[] = {
		{ "BlueprintGetter", "GetMediaPlayer" },
		{ "Category", "Media" },
		{ "Comment", "/** This component's media player */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MediaComponent.h" },
		{ "ToolTip", "This component's media player" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMediaComponent_Statics::NewProp_MediaPlayer = { "MediaPlayer", nullptr, (EPropertyFlags)0x004600020008201d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMediaComponent, MediaPlayer), Z_Construct_UClass_UMediaPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMediaComponent_Statics::NewProp_MediaPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaComponent_Statics::NewProp_MediaPlayer_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMediaComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaComponent_Statics::NewProp_MediaTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMediaComponent_Statics::NewProp_MediaPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaComponent_Statics::ClassParams = {
		&UMediaComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMediaComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UMediaComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaComponent()
	{
		if (!Z_Registration_Info_UClass_UMediaComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaComponent.OuterSingleton, Z_Construct_UClass_UMediaComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaComponent.OuterSingleton;
	}
	template<> MEDIAASSETS_API UClass* StaticClass<UMediaComponent>()
	{
		return UMediaComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaComponent);
	UMediaComponent::~UMediaComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaComponent, UMediaComponent::StaticClass, TEXT("UMediaComponent"), &Z_Registration_Info_UClass_UMediaComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaComponent), 25621111U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h_3603388985(TEXT("/Script/MediaAssets"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_MediaAssets_Public_MediaComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
