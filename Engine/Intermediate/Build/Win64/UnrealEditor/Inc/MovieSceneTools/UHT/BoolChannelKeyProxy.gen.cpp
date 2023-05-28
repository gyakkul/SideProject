// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Channels/BoolChannelKeyProxy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoolChannelKeyProxy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorKeyProxy_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneKeyProxy_NoRegister();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UBoolChannelKeyProxy();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UBoolChannelKeyProxy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTools();
// End Cross Module References
	void UBoolChannelKeyProxy::StaticRegisterNativesUBoolChannelKeyProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBoolChannelKeyProxy);
	UClass* Z_Construct_UClass_UBoolChannelKeyProxy_NoRegister()
	{
		return UBoolChannelKeyProxy::StaticClass();
	}
	struct Z_Construct_UClass_UBoolChannelKeyProxy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Time;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValue_MetaData[];
#endif
		static void NewProp_bValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBoolChannelKeyProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoolChannelKeyProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Channels/BoolChannelKeyProxy.h" },
		{ "ModuleRelativePath", "Private/Channels/BoolChannelKeyProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoolChannelKeyProxy_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** User-facing time of the key, applied to the actual key on PostEditChange, and updated every tick */" },
		{ "ModuleRelativePath", "Private/Channels/BoolChannelKeyProxy.h" },
		{ "ToolTip", "User-facing time of the key, applied to the actual key on PostEditChange, and updated every tick" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBoolChannelKeyProxy_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UBoolChannelKeyProxy, Time), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_UBoolChannelKeyProxy_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoolChannelKeyProxy_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBoolChannelKeyProxy_Statics::NewProp_bValue_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** User-facing value of the key, applied to the actual key on PostEditChange, and updated every tick */" },
		{ "ModuleRelativePath", "Private/Channels/BoolChannelKeyProxy.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "User-facing value of the key, applied to the actual key on PostEditChange, and updated every tick" },
	};
#endif
	void Z_Construct_UClass_UBoolChannelKeyProxy_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((UBoolChannelKeyProxy*)Obj)->bValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBoolChannelKeyProxy_Statics::NewProp_bValue = { "bValue", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UBoolChannelKeyProxy), &Z_Construct_UClass_UBoolChannelKeyProxy_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBoolChannelKeyProxy_Statics::NewProp_bValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBoolChannelKeyProxy_Statics::NewProp_bValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBoolChannelKeyProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoolChannelKeyProxy_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBoolChannelKeyProxy_Statics::NewProp_bValue,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBoolChannelKeyProxy_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCurveEditorKeyProxy_NoRegister, (int32)VTABLE_OFFSET(UBoolChannelKeyProxy, ICurveEditorKeyProxy), false },  // 626884676
			{ Z_Construct_UClass_UMovieSceneKeyProxy_NoRegister, (int32)VTABLE_OFFSET(UBoolChannelKeyProxy, IMovieSceneKeyProxy), false },  // 81227150
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBoolChannelKeyProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBoolChannelKeyProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBoolChannelKeyProxy_Statics::ClassParams = {
		&UBoolChannelKeyProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBoolChannelKeyProxy_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBoolChannelKeyProxy_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBoolChannelKeyProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBoolChannelKeyProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBoolChannelKeyProxy()
	{
		if (!Z_Registration_Info_UClass_UBoolChannelKeyProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBoolChannelKeyProxy.OuterSingleton, Z_Construct_UClass_UBoolChannelKeyProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBoolChannelKeyProxy.OuterSingleton;
	}
	template<> MOVIESCENETOOLS_API UClass* StaticClass<UBoolChannelKeyProxy>()
	{
		return UBoolChannelKeyProxy::StaticClass();
	}
	UBoolChannelKeyProxy::UBoolChannelKeyProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBoolChannelKeyProxy);
	UBoolChannelKeyProxy::~UBoolChannelKeyProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_BoolChannelKeyProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_BoolChannelKeyProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBoolChannelKeyProxy, UBoolChannelKeyProxy::StaticClass, TEXT("UBoolChannelKeyProxy"), &Z_Registration_Info_UClass_UBoolChannelKeyProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBoolChannelKeyProxy), 780132928U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_BoolChannelKeyProxy_h_1920494517(TEXT("/Script/MovieSceneTools"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_BoolChannelKeyProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_BoolChannelKeyProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
