// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelScriptBlueprint() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_ULevelScriptBlueprint();
	ENGINE_API UClass* Z_Construct_UClass_ULevelScriptBlueprint_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ULevelScriptBlueprint::StaticRegisterNativesULevelScriptBlueprint()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelScriptBlueprint);
	UClass* Z_Construct_UClass_ULevelScriptBlueprint_NoRegister()
	{
		return ULevelScriptBlueprint::StaticClass();
	}
	struct Z_Construct_UClass_ULevelScriptBlueprint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FriendlyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FriendlyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelScriptBlueprint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprint,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelScriptBlueprint_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A level blueprint is a specialized type of blueprint. It is used to house\n * global, level-wide logic. In a level blueprint, you can operate on specific \n * level-actor instances through blueprint's node-based interface. Unreal Engine users \n * should be familiar with this concept, as it is very similar to Kismet.\n *\n * @see https://docs.unrealengine.com/latest/INT/Engine/Blueprints/UserGuide/Types/LevelBlueprint/index.html\n * @see https://docs.unrealengine.com/latest/INT/Engine/Blueprints/index.html\n * @see UBlueprint\n * @see ALevelScriptActor\n */" },
		{ "IncludePath", "Engine/LevelScriptBlueprint.h" },
		{ "ModuleRelativePath", "Classes/Engine/LevelScriptBlueprint.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "A level blueprint is a specialized type of blueprint. It is used to house\nglobal, level-wide logic. In a level blueprint, you can operate on specific\nlevel-actor instances through blueprint's node-based interface. Unreal Engine users\nshould be familiar with this concept, as it is very similar to Kismet.\n\n@see https://docs.unrealengine.com/latest/INT/Engine/Blueprints/UserGuide/Types/LevelBlueprint/index.html\n@see https://docs.unrealengine.com/latest/INT/Engine/Blueprints/index.html\n@see UBlueprint\n@see ALevelScriptActor" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelScriptBlueprint_Statics::NewProp_FriendlyName_MetaData[] = {
		{ "Comment", "/** The friendly name to use for UI */" },
		{ "ModuleRelativePath", "Classes/Engine/LevelScriptBlueprint.h" },
		{ "ToolTip", "The friendly name to use for UI" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_ULevelScriptBlueprint_Statics::NewProp_FriendlyName = { "FriendlyName", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelScriptBlueprint, FriendlyName), METADATA_PARAMS(Z_Construct_UClass_ULevelScriptBlueprint_Statics::NewProp_FriendlyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelScriptBlueprint_Statics::NewProp_FriendlyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelScriptBlueprint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelScriptBlueprint_Statics::NewProp_FriendlyName,
	};
#endif // WITH_EDITORONLY_DATA
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelScriptBlueprint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelScriptBlueprint>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelScriptBlueprint_Statics::ClassParams = {
		&ULevelScriptBlueprint::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		IF_WITH_EDITORONLY_DATA(Z_Construct_UClass_ULevelScriptBlueprint_Statics::PropPointers, nullptr),
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		IF_WITH_EDITORONLY_DATA(UE_ARRAY_COUNT(Z_Construct_UClass_ULevelScriptBlueprint_Statics::PropPointers), 0),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelScriptBlueprint_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelScriptBlueprint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelScriptBlueprint()
	{
		if (!Z_Registration_Info_UClass_ULevelScriptBlueprint.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelScriptBlueprint.OuterSingleton, Z_Construct_UClass_ULevelScriptBlueprint_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelScriptBlueprint.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ULevelScriptBlueprint>()
	{
		return ULevelScriptBlueprint::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelScriptBlueprint);
	ULevelScriptBlueprint::~ULevelScriptBlueprint() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelScriptBlueprint, ULevelScriptBlueprint::StaticClass, TEXT("ULevelScriptBlueprint"), &Z_Registration_Info_UClass_ULevelScriptBlueprint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelScriptBlueprint), 3260828671U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_520282000(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_LevelScriptBlueprint_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
