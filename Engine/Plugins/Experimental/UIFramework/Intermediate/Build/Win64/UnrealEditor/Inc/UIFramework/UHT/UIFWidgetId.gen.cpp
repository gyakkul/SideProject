// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/UIFWidgetId.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIFWidgetId() {}
// Cross Module References
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkWidgetId();
	UPackage* Z_Construct_UPackage__Script_UIFramework();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIFrameworkWidgetId;
class UScriptStruct* FUIFrameworkWidgetId::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIFrameworkWidgetId.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIFrameworkWidgetId.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIFrameworkWidgetId, (UObject*)Z_Construct_UPackage__Script_UIFramework(), TEXT("UIFrameworkWidgetId"));
	}
	return Z_Registration_Info_UScriptStruct_UIFrameworkWidgetId.OuterSingleton;
}
template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<FUIFrameworkWidgetId>()
{
	return FUIFrameworkWidgetId::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIFrameworkWidgetId_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_Key;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkWidgetId_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/Types/UIFWidgetId.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIFrameworkWidgetId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIFrameworkWidgetId>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkWidgetId_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/UIFWidgetId.h" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FUIFrameworkWidgetId_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkWidgetId, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkWidgetId_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkWidgetId_Statics::NewProp_Key_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIFrameworkWidgetId_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkWidgetId_Statics::NewProp_Key,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIFrameworkWidgetId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
		nullptr,
		&NewStructOps,
		"UIFrameworkWidgetId",
		sizeof(FUIFrameworkWidgetId),
		alignof(FUIFrameworkWidgetId),
		Z_Construct_UScriptStruct_FUIFrameworkWidgetId_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkWidgetId_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkWidgetId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkWidgetId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkWidgetId()
	{
		if (!Z_Registration_Info_UScriptStruct_UIFrameworkWidgetId.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIFrameworkWidgetId.InnerSingleton, Z_Construct_UScriptStruct_FUIFrameworkWidgetId_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIFrameworkWidgetId.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFWidgetId_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFWidgetId_h_Statics::ScriptStructInfo[] = {
		{ FUIFrameworkWidgetId::StaticStruct, Z_Construct_UScriptStruct_FUIFrameworkWidgetId_Statics::NewStructOps, TEXT("UIFrameworkWidgetId"), &Z_Registration_Info_UScriptStruct_UIFrameworkWidgetId, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIFrameworkWidgetId), 4193507828U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFWidgetId_h_2880432775(TEXT("/Script/UIFramework"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFWidgetId_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFWidgetId_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
