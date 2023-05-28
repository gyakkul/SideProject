// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Streaming/ActorTextureStreamingBuildDataComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorTextureStreamingBuildDataComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorTextureStreamingBuildDataComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FStreamableTexture();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_StreamableTexture;
class UScriptStruct* FStreamableTexture::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_StreamableTexture.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_StreamableTexture.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FStreamableTexture, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("StreamableTexture"));
	}
	return Z_Registration_Info_UScriptStruct_StreamableTexture.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FStreamableTexture>()
{
	return FStreamableTexture::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FStreamableTexture_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Guid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Guid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamableTexture_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Streaming/ActorTextureStreamingBuildDataComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStreamableTexture_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStreamableTexture>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamableTexture_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Public/Streaming/ActorTextureStreamingBuildDataComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStreamableTexture_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStreamableTexture, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamableTexture_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamableTexture_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStreamableTexture_Statics::NewProp_Guid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Streaming/ActorTextureStreamingBuildDataComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStreamableTexture_Statics::NewProp_Guid = { "Guid", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FStreamableTexture, Guid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamableTexture_Statics::NewProp_Guid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamableTexture_Statics::NewProp_Guid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStreamableTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamableTexture_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStreamableTexture_Statics::NewProp_Guid,
	};
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStreamableTexture_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"StreamableTexture",
		sizeof(FStreamableTexture),
		alignof(FStreamableTexture),
		IF_WITH_EDITORONLY_DATA(Z_Construct_UScriptStruct_FStreamableTexture_Statics::PropPointers, nullptr),
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamableTexture_Statics::PropPointers), 0),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStreamableTexture_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStreamableTexture_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStreamableTexture()
	{
		if (!Z_Registration_Info_UScriptStruct_StreamableTexture.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_StreamableTexture.InnerSingleton, Z_Construct_UScriptStruct_FStreamableTexture_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_StreamableTexture.InnerSingleton;
	}
	void UActorTextureStreamingBuildDataComponent::StaticRegisterNativesUActorTextureStreamingBuildDataComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorTextureStreamingBuildDataComponent);
	UClass* Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_NoRegister()
	{
		return UActorTextureStreamingBuildDataComponent::StaticClass();
	}
	struct Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_StreamableTextures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StreamableTextures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_StreamableTextures;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PackedTextureStreamingQualityLevelFeatureLevel_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_PackedTextureStreamingQualityLevelFeatureLevel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Streaming/ActorTextureStreamingBuildDataComponent.h" },
		{ "ModuleRelativePath", "Public/Streaming/ActorTextureStreamingBuildDataComponent.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::NewProp_StreamableTextures_Inner = { "StreamableTextures", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FStreamableTexture, METADATA_PARAMS(nullptr, 0) }; // 1275896403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::NewProp_StreamableTextures_MetaData[] = {
		{ "ModuleRelativePath", "Public/Streaming/ActorTextureStreamingBuildDataComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::NewProp_StreamableTextures = { "StreamableTextures", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorTextureStreamingBuildDataComponent, StreamableTextures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::NewProp_StreamableTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::NewProp_StreamableTextures_MetaData)) }; // 1275896403
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::NewProp_PackedTextureStreamingQualityLevelFeatureLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/Streaming/ActorTextureStreamingBuildDataComponent.h" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::NewProp_PackedTextureStreamingQualityLevelFeatureLevel = { "PackedTextureStreamingQualityLevelFeatureLevel", nullptr, (EPropertyFlags)0x0040000800000000, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorTextureStreamingBuildDataComponent, PackedTextureStreamingQualityLevelFeatureLevel), METADATA_PARAMS(Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::NewProp_PackedTextureStreamingQualityLevelFeatureLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::NewProp_PackedTextureStreamingQualityLevelFeatureLevel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::NewProp_StreamableTextures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::NewProp_StreamableTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::NewProp_PackedTextureStreamingQualityLevelFeatureLevel,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorTextureStreamingBuildDataComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::ClassParams = {
		&UActorTextureStreamingBuildDataComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::PropPointers), 0),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorTextureStreamingBuildDataComponent()
	{
		if (!Z_Registration_Info_UClass_UActorTextureStreamingBuildDataComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorTextureStreamingBuildDataComponent.OuterSingleton, Z_Construct_UClass_UActorTextureStreamingBuildDataComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorTextureStreamingBuildDataComponent.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UActorTextureStreamingBuildDataComponent>()
	{
		return UActorTextureStreamingBuildDataComponent::StaticClass();
	}
	UActorTextureStreamingBuildDataComponent::UActorTextureStreamingBuildDataComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorTextureStreamingBuildDataComponent);
	UActorTextureStreamingBuildDataComponent::~UActorTextureStreamingBuildDataComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_ActorTextureStreamingBuildDataComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_ActorTextureStreamingBuildDataComponent_h_Statics::ScriptStructInfo[] = {
		{ FStreamableTexture::StaticStruct, Z_Construct_UScriptStruct_FStreamableTexture_Statics::NewStructOps, TEXT("StreamableTexture"), &Z_Registration_Info_UScriptStruct_StreamableTexture, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FStreamableTexture), 1275896403U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_ActorTextureStreamingBuildDataComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorTextureStreamingBuildDataComponent, UActorTextureStreamingBuildDataComponent::StaticClass, TEXT("UActorTextureStreamingBuildDataComponent"), &Z_Registration_Info_UClass_UActorTextureStreamingBuildDataComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorTextureStreamingBuildDataComponent), 3754519504U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_ActorTextureStreamingBuildDataComponent_h_243342555(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_ActorTextureStreamingBuildDataComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_ActorTextureStreamingBuildDataComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_ActorTextureStreamingBuildDataComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Streaming_ActorTextureStreamingBuildDataComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
