// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ChaosFlesh/ChaosDeformableSolverActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChaosDeformableSolverActor() {}
// Cross Module References
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_ADeformableSolverActor();
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_ADeformableSolverActor_NoRegister();
	CHAOSFLESHENGINE_API UClass* Z_Construct_UClass_UDeformableSolverComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDeformableInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ChaosFleshEngine();
// End Cross Module References
	void ADeformableSolverActor::StaticRegisterNativesADeformableSolverActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADeformableSolverActor);
	UClass* Z_Construct_UClass_ADeformableSolverActor_NoRegister()
	{
		return ADeformableSolverActor::StaticClass();
	}
	struct Z_Construct_UClass_ADeformableSolverActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SolverComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SolverComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpriteComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADeformableSolverActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ChaosFleshEngine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeformableSolverActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ChaosFlesh/ChaosDeformableSolverActor.h" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableSolverActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeformableSolverActor_Statics::NewProp_SolverComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Physics" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableSolverActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADeformableSolverActor_Statics::NewProp_SolverComponent = { "SolverComponent", nullptr, (EPropertyFlags)0x00140000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADeformableSolverActor, SolverComponent), Z_Construct_UClass_UDeformableSolverComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADeformableSolverActor_Statics::NewProp_SolverComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeformableSolverActor_Statics::NewProp_SolverComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADeformableSolverActor_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "Comment", "/*\n\x09* Display icon in the editor\n\x09*/" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/ChaosFlesh/ChaosDeformableSolverActor.h" },
		{ "ToolTip", "* Display icon in the editor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ADeformableSolverActor_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0014000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ADeformableSolverActor, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADeformableSolverActor_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADeformableSolverActor_Statics::NewProp_SpriteComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADeformableSolverActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeformableSolverActor_Statics::NewProp_SolverComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeformableSolverActor_Statics::NewProp_SpriteComponent,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADeformableSolverActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UDeformableInterface_NoRegister, (int32)VTABLE_OFFSET(ADeformableSolverActor, IDeformableInterface), false },  // 221638707
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADeformableSolverActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADeformableSolverActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADeformableSolverActor_Statics::ClassParams = {
		&ADeformableSolverActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADeformableSolverActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADeformableSolverActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADeformableSolverActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADeformableSolverActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADeformableSolverActor()
	{
		if (!Z_Registration_Info_UClass_ADeformableSolverActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADeformableSolverActor.OuterSingleton, Z_Construct_UClass_ADeformableSolverActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADeformableSolverActor.OuterSingleton;
	}
	template<> CHAOSFLESHENGINE_API UClass* StaticClass<ADeformableSolverActor>()
	{
		return ADeformableSolverActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADeformableSolverActor);
	ADeformableSolverActor::~ADeformableSolverActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADeformableSolverActor, ADeformableSolverActor::StaticClass, TEXT("ADeformableSolverActor"), &Z_Registration_Info_UClass_ADeformableSolverActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADeformableSolverActor), 1098920953U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverActor_h_1243211994(TEXT("/Script/ChaosFleshEngine"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_ChaosFlesh_Source_ChaosFleshEngine_Public_ChaosFlesh_ChaosDeformableSolverActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
