// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/ReflectionCapture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReflectionCapture() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AReflectionCapture();
	ENGINE_API UClass* Z_Construct_UClass_AReflectionCapture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UReflectionCaptureComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AReflectionCapture::StaticRegisterNativesAReflectionCapture()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AReflectionCapture);
	UClass* Z_Construct_UClass_AReflectionCapture_NoRegister()
	{
		return AReflectionCapture::StaticClass();
	}
	struct Z_Construct_UClass_AReflectionCapture_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CaptureComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpriteComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CaptureOffsetComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CaptureOffsetComponent;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AReflectionCapture_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReflectionCapture_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Attachment Actor" },
		{ "IncludePath", "Engine/ReflectionCapture.h" },
		{ "ModuleRelativePath", "Classes/Engine/ReflectionCapture.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReflectionCapture_Statics::NewProp_CaptureComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "DecalActor" },
		{ "Comment", "/** Reflection capture component. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/ReflectionCapture.h" },
		{ "ToolTip", "Reflection capture component." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AReflectionCapture_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AReflectionCapture, CaptureComponent), Z_Construct_UClass_UReflectionCaptureComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReflectionCapture_Statics::NewProp_CaptureComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReflectionCapture_Statics::NewProp_CaptureComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReflectionCapture_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/ReflectionCapture.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AReflectionCapture_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0044000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AReflectionCapture, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReflectionCapture_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReflectionCapture_Statics::NewProp_SpriteComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AReflectionCapture_Statics::NewProp_CaptureOffsetComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/ReflectionCapture.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AReflectionCapture_Statics::NewProp_CaptureOffsetComponent = { "CaptureOffsetComponent", nullptr, (EPropertyFlags)0x0044000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AReflectionCapture, CaptureOffsetComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AReflectionCapture_Statics::NewProp_CaptureOffsetComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AReflectionCapture_Statics::NewProp_CaptureOffsetComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AReflectionCapture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReflectionCapture_Statics::NewProp_CaptureComponent,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReflectionCapture_Statics::NewProp_SpriteComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AReflectionCapture_Statics::NewProp_CaptureOffsetComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AReflectionCapture_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AReflectionCapture>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AReflectionCapture_Statics::ClassParams = {
		&AReflectionCapture::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AReflectionCapture_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AReflectionCapture_Statics::PropPointers),
		0,
		0x008800A5u,
		METADATA_PARAMS(Z_Construct_UClass_AReflectionCapture_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AReflectionCapture_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AReflectionCapture()
	{
		if (!Z_Registration_Info_UClass_AReflectionCapture.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AReflectionCapture.OuterSingleton, Z_Construct_UClass_AReflectionCapture_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AReflectionCapture.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<AReflectionCapture>()
	{
		return AReflectionCapture::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AReflectionCapture);
	AReflectionCapture::~AReflectionCapture() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ReflectionCapture_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ReflectionCapture_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AReflectionCapture, AReflectionCapture::StaticClass, TEXT("AReflectionCapture"), &Z_Registration_Info_UClass_AReflectionCapture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AReflectionCapture), 601297457U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ReflectionCapture_h_1263477493(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ReflectionCapture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ReflectionCapture_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
