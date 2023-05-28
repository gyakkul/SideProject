// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/WidgetAnimationBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetAnimationBinding() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetAnimationBinding();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetAnimationBinding;
class UScriptStruct* FWidgetAnimationBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetAnimationBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetAnimationBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetAnimationBinding, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("WidgetAnimationBinding"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetAnimationBinding.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FWidgetAnimationBinding>()
{
	return FWidgetAnimationBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WidgetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SlotWidgetName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SlotWidgetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationGuid_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AnimationGuid;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRootWidget_MetaData[];
#endif
		static void NewProp_bIsRootWidget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRootWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * A single object bound to a UMG sequence.\n */" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationBinding.h" },
		{ "ToolTip", "A single object bound to a UMG sequence." },
	};
#endif
	void* Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetAnimationBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_WidgetName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationBinding.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_WidgetName = { "WidgetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetAnimationBinding, WidgetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_WidgetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_WidgetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_SlotWidgetName_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationBinding.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_SlotWidgetName = { "SlotWidgetName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetAnimationBinding, SlotWidgetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_SlotWidgetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_SlotWidgetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_AnimationGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationBinding.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_AnimationGuid = { "AnimationGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FWidgetAnimationBinding, AnimationGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_AnimationGuid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_AnimationGuid_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_bIsRootWidget_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationBinding.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_bIsRootWidget_SetBit(void* Obj)
	{
		((FWidgetAnimationBinding*)Obj)->bIsRootWidget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_bIsRootWidget = { "bIsRootWidget", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FWidgetAnimationBinding), &Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_bIsRootWidget_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_bIsRootWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_bIsRootWidget_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_WidgetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_SlotWidgetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_AnimationGuid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewProp_bIsRootWidget,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"WidgetAnimationBinding",
		sizeof(FWidgetAnimationBinding),
		alignof(FWidgetAnimationBinding),
		Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWidgetAnimationBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_WidgetAnimationBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetAnimationBinding.InnerSingleton, Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_WidgetAnimationBinding.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationBinding_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationBinding_h_Statics::ScriptStructInfo[] = {
		{ FWidgetAnimationBinding::StaticStruct, Z_Construct_UScriptStruct_FWidgetAnimationBinding_Statics::NewStructOps, TEXT("WidgetAnimationBinding"), &Z_Registration_Info_UScriptStruct_WidgetAnimationBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetAnimationBinding), 656858518U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationBinding_h_4004027239(TEXT("/Script/UMG"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationBinding_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
