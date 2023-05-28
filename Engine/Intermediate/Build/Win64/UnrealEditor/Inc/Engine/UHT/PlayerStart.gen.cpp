// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/GameFramework/PlayerStart.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerStart() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ANavigationObjectBase();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void APlayerStart::StaticRegisterNativesAPlayerStart()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerStart);
	UClass* Z_Construct_UClass_APlayerStart_NoRegister()
	{
		return APlayerStart::StaticClass();
	}
	struct Z_Construct_UClass_APlayerStart_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerStartTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PlayerStartTag;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ArrowComponent;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerStart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANavigationObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerStart_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Common" },
		{ "Comment", "/** \n *\x09This class indicates a location where a player can spawn when the game begins.\n *\x09\n * \n *\x09@see https://docs.unrealengine.com/latest/INT/Engine/Actors/PlayerStart/\n */" },
		{ "HideCategories", "Collision Lighting LightColor Force" },
		{ "IncludePath", "GameFramework/PlayerStart.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerStart.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "This class indicates a location where a player can spawn when the game begins.\n\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Actors/PlayerStart/" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerStart_Statics::NewProp_PlayerStartTag_MetaData[] = {
		{ "Category", "Object" },
		{ "Comment", "/** Used when searching for which playerstart to use. */" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerStart.h" },
		{ "ToolTip", "Used when searching for which playerstart to use." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_APlayerStart_Statics::NewProp_PlayerStartTag = { "PlayerStartTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerStart, PlayerStartTag), METADATA_PARAMS(Z_Construct_UClass_APlayerStart_Statics::NewProp_PlayerStartTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerStart_Statics::NewProp_PlayerStartTag_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerStart_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/GameFramework/PlayerStart.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_APlayerStart_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0044000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(APlayerStart, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerStart_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerStart_Statics::NewProp_ArrowComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerStart_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerStart_Statics::NewProp_PlayerStartTag,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerStart_Statics::NewProp_ArrowComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerStart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerStart>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerStart_Statics::ClassParams = {
		&APlayerStart::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerStart_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerStart_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerStart_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerStart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerStart()
	{
		if (!Z_Registration_Info_UClass_APlayerStart.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerStart.OuterSingleton, Z_Construct_UClass_APlayerStart_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APlayerStart.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<APlayerStart>()
	{
		return APlayerStart::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerStart);
	APlayerStart::~APlayerStart() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerStart_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerStart_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APlayerStart, APlayerStart::StaticClass, TEXT("APlayerStart"), &Z_Registration_Info_UClass_APlayerStart, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerStart), 4077775350U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerStart_h_2139625424(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerStart_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_GameFramework_PlayerStart_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
