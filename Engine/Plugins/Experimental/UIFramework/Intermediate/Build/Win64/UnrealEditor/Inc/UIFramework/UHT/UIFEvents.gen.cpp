// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/UIFEvents.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIFEvents() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	UIFRAMEWORK_API UClass* Z_Construct_UClass_UUIFrameworkWidget_NoRegister();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkClickEventArgument();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkSimpleEventArgument();
	UPackage* Z_Construct_UPackage__Script_UIFramework();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIFrameworkSimpleEventArgument;
class UScriptStruct* FUIFrameworkSimpleEventArgument::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIFrameworkSimpleEventArgument.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIFrameworkSimpleEventArgument.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIFrameworkSimpleEventArgument, (UObject*)Z_Construct_UPackage__Script_UIFramework(), TEXT("UIFrameworkSimpleEventArgument"));
	}
	return Z_Registration_Info_UScriptStruct_UIFrameworkSimpleEventArgument.OuterSingleton;
}
template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<FUIFrameworkSimpleEventArgument>()
{
	return FUIFrameworkSimpleEventArgument::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIFrameworkSimpleEventArgument_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sender_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Sender;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkSimpleEventArgument_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/Types/UIFEvents.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIFrameworkSimpleEventArgument_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIFrameworkSimpleEventArgument>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkSimpleEventArgument_Statics::NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/UIFEvents.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FUIFrameworkSimpleEventArgument_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkSimpleEventArgument, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkSimpleEventArgument_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkSimpleEventArgument_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkSimpleEventArgument_Statics::NewProp_Sender_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/UIFEvents.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FUIFrameworkSimpleEventArgument_Statics::NewProp_Sender = { "Sender", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkSimpleEventArgument, Sender), Z_Construct_UClass_UUIFrameworkWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkSimpleEventArgument_Statics::NewProp_Sender_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkSimpleEventArgument_Statics::NewProp_Sender_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIFrameworkSimpleEventArgument_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkSimpleEventArgument_Statics::NewProp_PlayerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkSimpleEventArgument_Statics::NewProp_Sender,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIFrameworkSimpleEventArgument_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
		nullptr,
		&NewStructOps,
		"UIFrameworkSimpleEventArgument",
		sizeof(FUIFrameworkSimpleEventArgument),
		alignof(FUIFrameworkSimpleEventArgument),
		Z_Construct_UScriptStruct_FUIFrameworkSimpleEventArgument_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkSimpleEventArgument_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkSimpleEventArgument_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkSimpleEventArgument_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkSimpleEventArgument()
	{
		if (!Z_Registration_Info_UScriptStruct_UIFrameworkSimpleEventArgument.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIFrameworkSimpleEventArgument.InnerSingleton, Z_Construct_UScriptStruct_FUIFrameworkSimpleEventArgument_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIFrameworkSimpleEventArgument.InnerSingleton;
	}

static_assert(std::is_polymorphic<FUIFrameworkClickEventArgument>() == std::is_polymorphic<FUIFrameworkSimpleEventArgument>(), "USTRUCT FUIFrameworkClickEventArgument cannot be polymorphic unless super FUIFrameworkSimpleEventArgument is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIFrameworkClickEventArgument;
class UScriptStruct* FUIFrameworkClickEventArgument::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIFrameworkClickEventArgument.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIFrameworkClickEventArgument.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIFrameworkClickEventArgument, (UObject*)Z_Construct_UPackage__Script_UIFramework(), TEXT("UIFrameworkClickEventArgument"));
	}
	return Z_Registration_Info_UScriptStruct_UIFrameworkClickEventArgument.OuterSingleton;
}
template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<FUIFrameworkClickEventArgument>()
{
	return FUIFrameworkClickEventArgument::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIFrameworkClickEventArgument_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkClickEventArgument_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/Types/UIFEvents.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIFrameworkClickEventArgument_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIFrameworkClickEventArgument>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIFrameworkClickEventArgument_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
		Z_Construct_UScriptStruct_FUIFrameworkSimpleEventArgument,
		&NewStructOps,
		"UIFrameworkClickEventArgument",
		sizeof(FUIFrameworkClickEventArgument),
		alignof(FUIFrameworkClickEventArgument),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkClickEventArgument_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkClickEventArgument_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkClickEventArgument()
	{
		if (!Z_Registration_Info_UScriptStruct_UIFrameworkClickEventArgument.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIFrameworkClickEventArgument.InnerSingleton, Z_Construct_UScriptStruct_FUIFrameworkClickEventArgument_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIFrameworkClickEventArgument.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFEvents_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFEvents_h_Statics::ScriptStructInfo[] = {
		{ FUIFrameworkSimpleEventArgument::StaticStruct, Z_Construct_UScriptStruct_FUIFrameworkSimpleEventArgument_Statics::NewStructOps, TEXT("UIFrameworkSimpleEventArgument"), &Z_Registration_Info_UScriptStruct_UIFrameworkSimpleEventArgument, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIFrameworkSimpleEventArgument), 1053345734U) },
		{ FUIFrameworkClickEventArgument::StaticStruct, Z_Construct_UScriptStruct_FUIFrameworkClickEventArgument_Statics::NewStructOps, TEXT("UIFrameworkClickEventArgument"), &Z_Registration_Info_UScriptStruct_UIFrameworkClickEventArgument, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIFrameworkClickEventArgument), 4252764634U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFEvents_h_1169398325(TEXT("/Script/UIFramework"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFEvents_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFEvents_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
