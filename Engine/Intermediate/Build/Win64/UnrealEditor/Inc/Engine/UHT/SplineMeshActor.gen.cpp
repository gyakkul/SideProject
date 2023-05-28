// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/SplineMeshActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineMeshActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ASplineMeshActor();
	ENGINE_API UClass* Z_Construct_UClass_ASplineMeshActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ASplineMeshActor::StaticRegisterNativesASplineMeshActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASplineMeshActor);
	UClass* Z_Construct_UClass_ASplineMeshActor_NoRegister()
	{
		return ASplineMeshActor::StaticClass();
	}
	struct Z_Construct_UClass_ASplineMeshActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SplineMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SplineMeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASplineMeshActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineMeshActor_Statics::Class_MetaDataParams[] = {
		{ "ChildCanTick", "" },
		{ "Comment", "/**\n * SplineMeshActor is an actor with a SplineMeshComponent.\n *\n * @see USplineMeshComponent\n */" },
		{ "HideCategories", "Input" },
		{ "IgnoreCategoryKeywordsInSubclasses", "true" },
		{ "IncludePath", "Engine/SplineMeshActor.h" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "SplineMeshActor is an actor with a SplineMeshComponent.\n\n@see USplineMeshComponent" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineMeshActor_Statics::NewProp_SplineMeshComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SplineMeshActor" },
		{ "EditInline", "true" },
		{ "ExposeFunctionCategories", "Mesh,Rendering,Physics,Components|StaticMesh,Components|SplineMesh" },
		{ "ModuleRelativePath", "Classes/Engine/SplineMeshActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ASplineMeshActor_Statics::NewProp_SplineMeshComponent = { "SplineMeshComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ASplineMeshActor, SplineMeshComponent), Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASplineMeshActor_Statics::NewProp_SplineMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineMeshActor_Statics::NewProp_SplineMeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASplineMeshActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineMeshActor_Statics::NewProp_SplineMeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASplineMeshActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASplineMeshActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASplineMeshActor_Statics::ClassParams = {
		&ASplineMeshActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ASplineMeshActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ASplineMeshActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASplineMeshActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASplineMeshActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASplineMeshActor()
	{
		if (!Z_Registration_Info_UClass_ASplineMeshActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASplineMeshActor.OuterSingleton, Z_Construct_UClass_ASplineMeshActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASplineMeshActor.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ASplineMeshActor>()
	{
		return ASplineMeshActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASplineMeshActor);
	ASplineMeshActor::~ASplineMeshActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SplineMeshActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SplineMeshActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASplineMeshActor, ASplineMeshActor::StaticClass, TEXT("ASplineMeshActor"), &Z_Registration_Info_UClass_ASplineMeshActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASplineMeshActor), 3066017373U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SplineMeshActor_h_1897729602(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SplineMeshActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_SplineMeshActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
