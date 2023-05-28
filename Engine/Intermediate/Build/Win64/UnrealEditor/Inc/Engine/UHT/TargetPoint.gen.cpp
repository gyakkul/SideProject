// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TargetPoint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetPoint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint();
	ENGINE_API UClass* Z_Construct_UClass_ATargetPoint_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ATargetPoint::StaticRegisterNativesATargetPoint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATargetPoint);
	UClass* Z_Construct_UClass_ATargetPoint_NoRegister()
	{
		return ATargetPoint::StaticClass();
	}
	struct Z_Construct_UClass_ATargetPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpriteComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ArrowComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATargetPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/TargetPoint.h" },
		{ "ModuleRelativePath", "Classes/Engine/TargetPoint.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetPoint_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Display" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/TargetPoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATargetPoint_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x00440008000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATargetPoint, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATargetPoint_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPoint_Statics::NewProp_SpriteComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATargetPoint_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Display" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/TargetPoint.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATargetPoint_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x00440008000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATargetPoint, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATargetPoint_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPoint_Statics::NewProp_ArrowComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATargetPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetPoint_Statics::NewProp_SpriteComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATargetPoint_Statics::NewProp_ArrowComponent,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATargetPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATargetPoint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATargetPoint_Statics::ClassParams = {
		&ATargetPoint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ATargetPoint_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPoint_Statics::PropPointers), 0),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ATargetPoint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATargetPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATargetPoint()
	{
		if (!Z_Registration_Info_UClass_ATargetPoint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATargetPoint.OuterSingleton, Z_Construct_UClass_ATargetPoint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATargetPoint.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ATargetPoint>()
	{
		return ATargetPoint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATargetPoint);
	ATargetPoint::~ATargetPoint() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TargetPoint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TargetPoint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATargetPoint, ATargetPoint::StaticClass, TEXT("ATargetPoint"), &Z_Registration_Info_UClass_ATargetPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATargetPoint), 3674730750U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TargetPoint_h_1575942733(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TargetPoint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TargetPoint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
