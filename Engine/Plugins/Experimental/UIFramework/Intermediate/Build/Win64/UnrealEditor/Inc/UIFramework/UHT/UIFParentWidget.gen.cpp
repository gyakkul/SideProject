// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/UIFParentWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIFParentWidget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UIFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkParentWidget();
	UPackage* Z_Construct_UPackage__Script_UIFramework();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIFrameworkParentWidget;
class UScriptStruct* FUIFrameworkParentWidget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIFrameworkParentWidget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIFrameworkParentWidget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIFrameworkParentWidget, (UObject*)Z_Construct_UPackage__Script_UIFramework(), TEXT("UIFrameworkParentWidget"));
	}
	return Z_Registration_Info_UScriptStruct_UIFrameworkParentWidget.OuterSingleton;
}
template<> UIFRAMEWORK_API UScriptStruct* StaticStruct<FUIFrameworkParentWidget>()
{
	return FUIFrameworkParentWidget::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FUIFrameworkParentWidget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkParentWidget_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "ModuleRelativePath", "Public/Types/UIFParentWidget.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FUIFrameworkParentWidget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIFrameworkParentWidget>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FUIFrameworkParentWidget_Statics::NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Public/Types/UIFParentWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FUIFrameworkParentWidget_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FUIFrameworkParentWidget, Parent), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkParentWidget_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkParentWidget_Statics::NewProp_Parent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIFrameworkParentWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIFrameworkParentWidget_Statics::NewProp_Parent,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIFrameworkParentWidget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UIFramework,
		nullptr,
		&NewStructOps,
		"UIFrameworkParentWidget",
		sizeof(FUIFrameworkParentWidget),
		alignof(FUIFrameworkParentWidget),
		Z_Construct_UScriptStruct_FUIFrameworkParentWidget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkParentWidget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FUIFrameworkParentWidget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIFrameworkParentWidget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FUIFrameworkParentWidget()
	{
		if (!Z_Registration_Info_UScriptStruct_UIFrameworkParentWidget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIFrameworkParentWidget.InnerSingleton, Z_Construct_UScriptStruct_FUIFrameworkParentWidget_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_UIFrameworkParentWidget.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFParentWidget_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFParentWidget_h_Statics::ScriptStructInfo[] = {
		{ FUIFrameworkParentWidget::StaticStruct, Z_Construct_UScriptStruct_FUIFrameworkParentWidget_Statics::NewStructOps, TEXT("UIFrameworkParentWidget"), &Z_Registration_Info_UScriptStruct_UIFrameworkParentWidget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIFrameworkParentWidget), 2258153769U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFParentWidget_h_3480736333(TEXT("/Script/UIFramework"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFParentWidget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UIFramework_Source_Public_Types_UIFParentWidget_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
