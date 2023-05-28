// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/Channels/FloatChannelKeyProxy.h"
#include "Channels/MovieSceneFloatChannel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatChannelKeyProxy() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFrameNumber();
	CURVEEDITOR_API UClass* Z_Construct_UClass_UCurveEditorKeyProxy_NoRegister();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneKeyProxy_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneFloatValue();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UFloatChannelKeyProxy();
	MOVIESCENETOOLS_API UClass* Z_Construct_UClass_UFloatChannelKeyProxy_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MovieSceneTools();
// End Cross Module References
	void UFloatChannelKeyProxy::StaticRegisterNativesUFloatChannelKeyProxy()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFloatChannelKeyProxy);
	UClass* Z_Construct_UClass_UFloatChannelKeyProxy_NoRegister()
	{
		return UFloatChannelKeyProxy::StaticClass();
	}
	struct Z_Construct_UClass_UFloatChannelKeyProxy_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloatChannelKeyProxy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_MovieSceneTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatChannelKeyProxy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Channels/FloatChannelKeyProxy.h" },
		{ "ModuleRelativePath", "Private/Channels/FloatChannelKeyProxy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatChannelKeyProxy_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** User-facing time of the key, applied to the actual key on PostEditChange, and updated every tick */" },
		{ "ModuleRelativePath", "Private/Channels/FloatChannelKeyProxy.h" },
		{ "ToolTip", "User-facing time of the key, applied to the actual key on PostEditChange, and updated every tick" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFloatChannelKeyProxy_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFloatChannelKeyProxy, Time), Z_Construct_UScriptStruct_FFrameNumber, METADATA_PARAMS(Z_Construct_UClass_UFloatChannelKeyProxy_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloatChannelKeyProxy_Statics::NewProp_Time_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatChannelKeyProxy_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "Key" },
		{ "Comment", "/** User-facing value of the key, applied to the actual key on PostEditChange, and updated every tick */" },
		{ "ModuleRelativePath", "Private/Channels/FloatChannelKeyProxy.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "User-facing value of the key, applied to the actual key on PostEditChange, and updated every tick" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFloatChannelKeyProxy_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UFloatChannelKeyProxy, Value), Z_Construct_UScriptStruct_FMovieSceneFloatValue, METADATA_PARAMS(Z_Construct_UClass_UFloatChannelKeyProxy_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UFloatChannelKeyProxy_Statics::NewProp_Value_MetaData)) }; // 4240783157
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFloatChannelKeyProxy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatChannelKeyProxy_Statics::NewProp_Time,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatChannelKeyProxy_Statics::NewProp_Value,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UFloatChannelKeyProxy_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCurveEditorKeyProxy_NoRegister, (int32)VTABLE_OFFSET(UFloatChannelKeyProxy, ICurveEditorKeyProxy), false },  // 626884676
			{ Z_Construct_UClass_UMovieSceneKeyProxy_NoRegister, (int32)VTABLE_OFFSET(UFloatChannelKeyProxy, IMovieSceneKeyProxy), false },  // 81227150
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloatChannelKeyProxy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloatChannelKeyProxy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFloatChannelKeyProxy_Statics::ClassParams = {
		&UFloatChannelKeyProxy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFloatChannelKeyProxy_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFloatChannelKeyProxy_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFloatChannelKeyProxy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFloatChannelKeyProxy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFloatChannelKeyProxy()
	{
		if (!Z_Registration_Info_UClass_UFloatChannelKeyProxy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFloatChannelKeyProxy.OuterSingleton, Z_Construct_UClass_UFloatChannelKeyProxy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFloatChannelKeyProxy.OuterSingleton;
	}
	template<> MOVIESCENETOOLS_API UClass* StaticClass<UFloatChannelKeyProxy>()
	{
		return UFloatChannelKeyProxy::StaticClass();
	}
	UFloatChannelKeyProxy::UFloatChannelKeyProxy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloatChannelKeyProxy);
	UFloatChannelKeyProxy::~UFloatChannelKeyProxy() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFloatChannelKeyProxy, UFloatChannelKeyProxy::StaticClass, TEXT("UFloatChannelKeyProxy"), &Z_Registration_Info_UClass_UFloatChannelKeyProxy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFloatChannelKeyProxy), 1217948297U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_3073169050(TEXT("/Script/MovieSceneTools"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_MovieSceneTools_Private_Channels_FloatChannelKeyProxy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
