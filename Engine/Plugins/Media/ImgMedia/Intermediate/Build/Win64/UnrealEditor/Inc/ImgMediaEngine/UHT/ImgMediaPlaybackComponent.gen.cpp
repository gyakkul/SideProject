// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Unreal/ImgMediaPlaybackComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeImgMediaPlaybackComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	IMGMEDIAENGINE_API UClass* Z_Construct_UClass_UImgMediaPlaybackComponent();
	IMGMEDIAENGINE_API UClass* Z_Construct_UClass_UImgMediaPlaybackComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ImgMediaEngine();
// End Cross Module References
	void UImgMediaPlaybackComponent::StaticRegisterNativesUImgMediaPlaybackComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UImgMediaPlaybackComponent);
	UClass* Z_Construct_UClass_UImgMediaPlaybackComponent_NoRegister()
	{
		return UImgMediaPlaybackComponent::StaticClass();
	}
	struct Z_Construct_UClass_UImgMediaPlaybackComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODBias_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_LODBias;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_ImgMediaEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Media" },
		{ "Comment", "/**\n * Component to help with ImgMedia playback.\n * If desired, add this to an object that displays an ImgMedia sequence.\n * Not necessary to do this, but if you do then you can get additional functionality\n * such as selective mipmap loading.\n */" },
		{ "IncludePath", "Unreal/ImgMediaPlaybackComponent.h" },
		{ "ModuleRelativePath", "Public/Unreal/ImgMediaPlaybackComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Component to help with ImgMedia playback.\nIf desired, add this to an object that displays an ImgMedia sequence.\nNot necessary to do this, but if you do then you can get additional functionality\nsuch as selective mipmap loading." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::NewProp_LODBias_MetaData[] = {
		{ "Category", "MipMaps" },
		{ "Comment", "/** This will be added to the calculated mipmap level. E.g. if set to 2, and you would normally be at mipmap level 1, then you will actually be at level 3. */" },
		{ "ModuleRelativePath", "Public/Unreal/ImgMediaPlaybackComponent.h" },
		{ "ToolTip", "This will be added to the calculated mipmap level. E.g. if set to 2, and you would normally be at mipmap level 1, then you will actually be at level 3." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::NewProp_LODBias = { "LODBias", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UImgMediaPlaybackComponent, LODBias), METADATA_PARAMS(Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::NewProp_LODBias_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::NewProp_LODBias_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::NewProp_LODBias,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UImgMediaPlaybackComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::ClassParams = {
		&UImgMediaPlaybackComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UImgMediaPlaybackComponent()
	{
		if (!Z_Registration_Info_UClass_UImgMediaPlaybackComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UImgMediaPlaybackComponent.OuterSingleton, Z_Construct_UClass_UImgMediaPlaybackComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UImgMediaPlaybackComponent.OuterSingleton;
	}
	template<> IMGMEDIAENGINE_API UClass* StaticClass<UImgMediaPlaybackComponent>()
	{
		return UImgMediaPlaybackComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UImgMediaPlaybackComponent);
	UImgMediaPlaybackComponent::~UImgMediaPlaybackComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEngine_Public_Unreal_ImgMediaPlaybackComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEngine_Public_Unreal_ImgMediaPlaybackComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UImgMediaPlaybackComponent, UImgMediaPlaybackComponent::StaticClass, TEXT("UImgMediaPlaybackComponent"), &Z_Registration_Info_UClass_UImgMediaPlaybackComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UImgMediaPlaybackComponent), 1230505405U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEngine_Public_Unreal_ImgMediaPlaybackComponent_h_601649483(TEXT("/Script/ImgMediaEngine"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEngine_Public_Unreal_ImgMediaPlaybackComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Media_ImgMedia_Source_ImgMediaEngine_Public_Unreal_ImgMediaPlaybackComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
