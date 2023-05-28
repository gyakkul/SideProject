// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Text3DActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeText3DActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	TEXT3D_API UClass* Z_Construct_UClass_AText3DActor();
	TEXT3D_API UClass* Z_Construct_UClass_AText3DActor_NoRegister();
	TEXT3D_API UClass* Z_Construct_UClass_UText3DComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Text3D();
// End Cross Module References
	void AText3DActor::StaticRegisterNativesAText3DActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AText3DActor);
	UClass* Z_Construct_UClass_AText3DActor_NoRegister()
	{
		return AText3DActor::StaticClass();
	}
	struct Z_Construct_UClass_AText3DActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Text3DComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Text3DComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AText3DActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Text3D,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AText3DActor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Text3D" },
		{ "ComponentWrapperClass", "" },
		{ "DisplayName", "Text 3D" },
		{ "IncludePath", "Text3DActor.h" },
		{ "ModuleRelativePath", "Public/Text3DActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AText3DActor_Statics::NewProp_Text3DComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Text" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Text3DActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AText3DActor_Statics::NewProp_Text3DComponent = { "Text3DComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AText3DActor, Text3DComponent), Z_Construct_UClass_UText3DComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AText3DActor_Statics::NewProp_Text3DComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AText3DActor_Statics::NewProp_Text3DComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AText3DActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AText3DActor_Statics::NewProp_Text3DComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AText3DActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AText3DActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AText3DActor_Statics::ClassParams = {
		&AText3DActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AText3DActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AText3DActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AText3DActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AText3DActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AText3DActor()
	{
		if (!Z_Registration_Info_UClass_AText3DActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AText3DActor.OuterSingleton, Z_Construct_UClass_AText3DActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AText3DActor.OuterSingleton;
	}
	template<> TEXT3D_API UClass* StaticClass<AText3DActor>()
	{
		return AText3DActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AText3DActor);
	AText3DActor::~AText3DActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AText3DActor, AText3DActor::StaticClass, TEXT("AText3DActor"), &Z_Registration_Info_UClass_AText3DActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AText3DActor), 4119745743U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DActor_h_1683938989(TEXT("/Script/Text3D"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Text3D_Source_Text3D_Public_Text3DActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
