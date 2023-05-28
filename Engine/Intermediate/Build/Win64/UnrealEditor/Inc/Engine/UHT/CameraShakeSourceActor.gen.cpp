// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Camera/CameraShakeSourceActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCameraShakeSourceActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ACameraShakeSourceActor();
	ENGINE_API UClass* Z_Construct_UClass_ACameraShakeSourceActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ACameraShakeSourceActor::StaticRegisterNativesACameraShakeSourceActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACameraShakeSourceActor);
	UClass* Z_Construct_UClass_ACameraShakeSourceActor_NoRegister()
	{
		return ACameraShakeSourceActor::StaticClass();
	}
	struct Z_Construct_UClass_ACameraShakeSourceActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraShakeSourceComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CameraShakeSourceComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACameraShakeSourceActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraShakeSourceActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Camera/CameraShakeSourceActor.h" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACameraShakeSourceActor_Statics::NewProp_CameraShakeSourceComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "CameraShakeSourceActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Camera/CameraShakeSourceActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACameraShakeSourceActor_Statics::NewProp_CameraShakeSourceComponent = { "CameraShakeSourceComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACameraShakeSourceActor, CameraShakeSourceComponent), Z_Construct_UClass_UCameraShakeSourceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACameraShakeSourceActor_Statics::NewProp_CameraShakeSourceComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraShakeSourceActor_Statics::NewProp_CameraShakeSourceComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACameraShakeSourceActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACameraShakeSourceActor_Statics::NewProp_CameraShakeSourceComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACameraShakeSourceActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACameraShakeSourceActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACameraShakeSourceActor_Statics::ClassParams = {
		&ACameraShakeSourceActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACameraShakeSourceActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACameraShakeSourceActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACameraShakeSourceActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACameraShakeSourceActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACameraShakeSourceActor()
	{
		if (!Z_Registration_Info_UClass_ACameraShakeSourceActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACameraShakeSourceActor.OuterSingleton, Z_Construct_UClass_ACameraShakeSourceActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACameraShakeSourceActor.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ACameraShakeSourceActor>()
	{
		return ACameraShakeSourceActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACameraShakeSourceActor);
	ACameraShakeSourceActor::~ACameraShakeSourceActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACameraShakeSourceActor, ACameraShakeSourceActor::StaticClass, TEXT("ACameraShakeSourceActor"), &Z_Registration_Info_UClass_ACameraShakeSourceActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACameraShakeSourceActor), 2482754668U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceActor_h_3194275560(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Camera_CameraShakeSourceActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
