// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/Info.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInfo() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	ENGINE_API UClass* Z_Construct_UClass_AInfo_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void AInfo::StaticRegisterNativesAInfo()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInfo);
	UClass* Z_Construct_UClass_AInfo_NoRegister()
	{
		return AInfo::StaticClass();
	}
	struct Z_Construct_UClass_AInfo_Statics
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
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInfo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Info is the base class of an Actor that isn't meant to have a physical representation in the world, used primarily\n * for \"manager\" type classes that hold settings data about the world, but might need to be an Actor for replication purposes.\n */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameFramework/Info.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Classes/GameFramework/Info.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Info is the base class of an Actor that isn't meant to have a physical representation in the world, used primarily\nfor \"manager\" type classes that hold settings data about the world, but might need to be an Actor for replication purposes." },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInfo_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "Comment", "/** Billboard Component displayed in editor */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/Info.h" },
		{ "ToolTip", "Billboard Component displayed in editor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AInfo_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0044000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AInfo, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInfo_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInfo_Statics::NewProp_SpriteComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInfo_Statics::NewProp_SpriteComponent,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInfo>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInfo_Statics::ClassParams = {
		&AInfo::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_AInfo_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_AInfo_Statics::PropPointers), 0),
		0,
		0x008800A5u,
		METADATA_PARAMS(Z_Construct_UClass_AInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInfo()
	{
		if (!Z_Registration_Info_UClass_AInfo.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInfo.OuterSingleton, Z_Construct_UClass_AInfo_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInfo.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<AInfo>()
	{
		return AInfo::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInfo);
	AInfo::~AInfo() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Info_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Info_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInfo, AInfo::StaticClass, TEXT("AInfo"), &Z_Registration_Info_UClass_AInfo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInfo), 1818433847U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Info_h_2802798021(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Info_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_Info_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
