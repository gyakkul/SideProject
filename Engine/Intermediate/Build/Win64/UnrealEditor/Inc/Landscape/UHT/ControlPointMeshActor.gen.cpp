// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ControlPointMeshActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlPointMeshActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	LANDSCAPE_API UClass* Z_Construct_UClass_AControlPointMeshActor();
	LANDSCAPE_API UClass* Z_Construct_UClass_AControlPointMeshActor_NoRegister();
	LANDSCAPE_API UClass* Z_Construct_UClass_UControlPointMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Landscape();
// End Cross Module References
	void AControlPointMeshActor::StaticRegisterNativesAControlPointMeshActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AControlPointMeshActor);
	UClass* Z_Construct_UClass_AControlPointMeshActor_NoRegister()
	{
		return AControlPointMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_AControlPointMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ControlPointMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ControlPointMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AControlPointMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Landscape,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPointMeshActor_Statics::Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "Comment", "/**\n * ControlPointMeshActor is an actor with a ControlPointMeshComponent.\n *\n * @see UControlPointMeshComponent\n */" },
		{ "HideCategories", "Input" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "ControlPointMeshActor.h" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Classes/ControlPointMeshActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "ControlPointMeshActor is an actor with a ControlPointMeshComponent.\n\n@see UControlPointMeshComponent" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPointMeshActor_Statics::NewProp_ControlPointMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ControlPointMeshActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|StaticMesh,Components|ControlPointMesh" },
		{ "ModuleRelativePath", "Classes/ControlPointMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AControlPointMeshActor_Statics::NewProp_ControlPointMeshComponent = { "ControlPointMeshComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AControlPointMeshActor, ControlPointMeshComponent), Z_Construct_UClass_UControlPointMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AControlPointMeshActor_Statics::NewProp_ControlPointMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AControlPointMeshActor_Statics::NewProp_ControlPointMeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AControlPointMeshActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPointMeshActor_Statics::NewProp_ControlPointMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AControlPointMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AControlPointMeshActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AControlPointMeshActor_Statics::ClassParams = {
		&AControlPointMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AControlPointMeshActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AControlPointMeshActor_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AControlPointMeshActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AControlPointMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AControlPointMeshActor()
	{
		if (!Z_Registration_Info_UClass_AControlPointMeshActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AControlPointMeshActor.OuterSingleton, Z_Construct_UClass_AControlPointMeshActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AControlPointMeshActor.OuterSingleton;
	}
	template<> LANDSCAPE_API UClass* StaticClass<AControlPointMeshActor>()
	{
		return AControlPointMeshActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AControlPointMeshActor);
	AControlPointMeshActor::~AControlPointMeshActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AControlPointMeshActor, AControlPointMeshActor::StaticClass, TEXT("AControlPointMeshActor"), &Z_Registration_Info_UClass_AControlPointMeshActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AControlPointMeshActor), 840915578U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_1445274670(TEXT("/Script/Landscape"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_ControlPointMeshActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
