// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/UIFWidgetOwner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIFWidgetOwner() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner();
	UPackage* Z_Construct_UPackage__Script_UIFramework();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIFrameworkWidgetOwner;
class UScriptStruct* FUIFrameworkWidgetOwner::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIFrameworkWidgetOwner.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIFrameworkWidgetOwner.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner, (UObject*)Z_Construct_UPackage__Script_UIFramework(), TEXT("UIFrameworkWidgetOwner"));
	}
	return Z_Registration_Info_UScriptStruct_UIFrameworkWidgetOwner.OuterSingleton;
}
template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<FUIFrameworkWidgetOwner>()
{
	return FUIFrameworkWidgetOwner::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameInstance_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GameInstance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_World_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_World;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/Types/UIFWidgetOwner.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIFrameworkWidgetOwner>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner_Statics::NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/UIFWidgetOwner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkWidgetOwner, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner_Statics::NewProp_GameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/UIFWidgetOwner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner_Statics::NewProp_GameInstance = { "GameInstance", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkWidgetOwner, GameInstance), Z_Construct_UClass_UGameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner_Statics::NewProp_GameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner_Statics::NewProp_GameInstance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner_Statics::NewProp_World_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/UIFWidgetOwner.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkWidgetOwner, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner_Statics::NewProp_World_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner_Statics::NewProp_World_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner_Statics::NewProp_GameInstance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner_Statics::NewProp_World,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
		nullptr,
		&NewStructOps,
		"UIFrameworkWidgetOwner",
		sizeof(FUIFrameworkWidgetOwner),
		alignof(FUIFrameworkWidgetOwner),
		Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner()
	{
		if (!Z_Registration_Info_UScriptStruct_UIFrameworkWidgetOwner.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIFrameworkWidgetOwner.InnerSingleton, Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIFrameworkWidgetOwner.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFWidgetOwner_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFWidgetOwner_h_Statics::ScriptStructInfo[] = {
		{ FUIFrameworkWidgetOwner::StaticStruct, Z_Construct_UScriptStruct_FUIFrameworkWidgetOwner_Statics::NewStructOps, TEXT("UIFrameworkWidgetOwner"), &Z_Registration_Info_UScriptStruct_UIFrameworkWidgetOwner, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIFrameworkWidgetOwner), 3179986550U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFWidgetOwner_h_1149978606(TEXT("/Script/UIFramework"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFWidgetOwner_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFWidgetOwner_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
