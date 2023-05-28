// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VideoInputTab/SMediaFrameworkVideoInputDisplay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMediaFrameworkVideoInputDisplay() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* Z_Construct_UClass_UMediaFrameworkVideoInputDisplayCallback();
	MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* Z_Construct_UClass_UMediaFrameworkVideoInputDisplayCallback_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor();
// End Cross Module References
	DEFINE_FUNCTION(UMediaFrameworkVideoInputDisplayCallback::execOnMediaClosed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMediaClosed();
		P_NATIVE_END;
	}
	void UMediaFrameworkVideoInputDisplayCallback::StaticRegisterNativesUMediaFrameworkVideoInputDisplayCallback()
	{
		UClass* Class = UMediaFrameworkVideoInputDisplayCallback::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnMediaClosed", &UMediaFrameworkVideoInputDisplayCallback::execOnMediaClosed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMediaFrameworkVideoInputDisplayCallback_OnMediaClosed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMediaFrameworkVideoInputDisplayCallback_OnMediaClosed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/VideoInputTab/SMediaFrameworkVideoInputDisplay.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMediaFrameworkVideoInputDisplayCallback_OnMediaClosed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMediaFrameworkVideoInputDisplayCallback, nullptr, "OnMediaClosed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMediaFrameworkVideoInputDisplayCallback_OnMediaClosed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMediaFrameworkVideoInputDisplayCallback_OnMediaClosed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMediaFrameworkVideoInputDisplayCallback_OnMediaClosed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMediaFrameworkVideoInputDisplayCallback_OnMediaClosed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMediaFrameworkVideoInputDisplayCallback);
	UClass* Z_Construct_UClass_UMediaFrameworkVideoInputDisplayCallback_NoRegister()
	{
		return UMediaFrameworkVideoInputDisplayCallback::StaticClass();
	}
	struct Z_Construct_UClass_UMediaFrameworkVideoInputDisplayCallback_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMediaFrameworkVideoInputDisplayCallback_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MediaFrameworkUtilitiesEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMediaFrameworkVideoInputDisplayCallback_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMediaFrameworkVideoInputDisplayCallback_OnMediaClosed, "OnMediaClosed" }, // 549081218
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMediaFrameworkVideoInputDisplayCallback_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Callback object for SMediaFrameworkVideoInputDisplay\n */" },
		{ "IncludePath", "VideoInputTab/SMediaFrameworkVideoInputDisplay.h" },
		{ "ModuleRelativePath", "Private/VideoInputTab/SMediaFrameworkVideoInputDisplay.h" },
		{ "ToolTip", "Callback object for SMediaFrameworkVideoInputDisplay" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMediaFrameworkVideoInputDisplayCallback_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMediaFrameworkVideoInputDisplayCallback>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMediaFrameworkVideoInputDisplayCallback_Statics::ClassParams = {
		&UMediaFrameworkVideoInputDisplayCallback::StaticClass,
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
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMediaFrameworkVideoInputDisplayCallback_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMediaFrameworkVideoInputDisplayCallback_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMediaFrameworkVideoInputDisplayCallback()
	{
		if (!Z_Registration_Info_UClass_UMediaFrameworkVideoInputDisplayCallback.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMediaFrameworkVideoInputDisplayCallback.OuterSingleton, Z_Construct_UClass_UMediaFrameworkVideoInputDisplayCallback_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMediaFrameworkVideoInputDisplayCallback.OuterSingleton;
	}
	template<> MEDIAFRAMEWORKUTILITIESEDITOR_API UClass* StaticClass<UMediaFrameworkVideoInputDisplayCallback>()
	{
		return UMediaFrameworkVideoInputDisplayCallback::StaticClass();
	}
	UMediaFrameworkVideoInputDisplayCallback::UMediaFrameworkVideoInputDisplayCallback(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMediaFrameworkVideoInputDisplayCallback);
	UMediaFrameworkVideoInputDisplayCallback::~UMediaFrameworkVideoInputDisplayCallback() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_VideoInputTab_SMediaFrameworkVideoInputDisplay_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_VideoInputTab_SMediaFrameworkVideoInputDisplay_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMediaFrameworkVideoInputDisplayCallback, UMediaFrameworkVideoInputDisplayCallback::StaticClass, TEXT("UMediaFrameworkVideoInputDisplayCallback"), &Z_Registration_Info_UClass_UMediaFrameworkVideoInputDisplayCallback, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMediaFrameworkVideoInputDisplayCallback), 3383292410U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_VideoInputTab_SMediaFrameworkVideoInputDisplay_h_1049665643(TEXT("/Script/MediaFrameworkUtilitiesEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_VideoInputTab_SMediaFrameworkVideoInputDisplay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_MediaFrameworkUtilities_Source_MediaFrameworkUtilitiesEditor_Private_VideoInputTab_SMediaFrameworkVideoInputDisplay_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
