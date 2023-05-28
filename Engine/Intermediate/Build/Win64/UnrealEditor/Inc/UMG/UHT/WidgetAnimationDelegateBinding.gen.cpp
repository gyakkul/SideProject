// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Animation/WidgetAnimationDelegateBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetAnimationDelegateBinding() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDynamicBlueprintBinding();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimationDelegateBinding();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimationDelegateBinding_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EWidgetAnimationEvent();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BlueprintWidgetAnimationDelegateBinding;
class UScriptStruct* FBlueprintWidgetAnimationDelegateBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BlueprintWidgetAnimationDelegateBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BlueprintWidgetAnimationDelegateBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("BlueprintWidgetAnimationDelegateBinding"));
	}
	return Z_Registration_Info_UScriptStruct_BlueprintWidgetAnimationDelegateBinding.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FBlueprintWidgetAnimationDelegateBinding>()
{
	return FBlueprintWidgetAnimationDelegateBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_Action_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Action_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Action;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimationToBind_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_AnimationToBind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionNameToBind_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionNameToBind;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_UserTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationDelegateBinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlueprintWidgetAnimationDelegateBinding>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_Action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_Action_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_Action = { "Action", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintWidgetAnimationDelegateBinding, Action), Z_Construct_UEnum_UMG_EWidgetAnimationEvent, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_Action_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_Action_MetaData)) }; // 1444873952
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_AnimationToBind_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_AnimationToBind = { "AnimationToBind", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintWidgetAnimationDelegateBinding, AnimationToBind), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_AnimationToBind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_AnimationToBind_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_FunctionNameToBind = { "FunctionNameToBind", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintWidgetAnimationDelegateBinding, FunctionNameToBind), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_FunctionNameToBind_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_UserTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_UserTag = { "UserTag", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBlueprintWidgetAnimationDelegateBinding, UserTag), METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_UserTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_UserTag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_Action_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_Action,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_AnimationToBind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_FunctionNameToBind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewProp_UserTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"BlueprintWidgetAnimationDelegateBinding",
		sizeof(FBlueprintWidgetAnimationDelegateBinding),
		alignof(FBlueprintWidgetAnimationDelegateBinding),
		Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_BlueprintWidgetAnimationDelegateBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BlueprintWidgetAnimationDelegateBinding.InnerSingleton, Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BlueprintWidgetAnimationDelegateBinding.InnerSingleton;
	}
	void UWidgetAnimationDelegateBinding::StaticRegisterNativesUWidgetAnimationDelegateBinding()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetAnimationDelegateBinding);
	UClass* Z_Construct_UClass_UWidgetAnimationDelegateBinding_NoRegister()
	{
		return UWidgetAnimationDelegateBinding::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetAnimationDelegateBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetAnimationDelegateBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_WidgetAnimationDelegateBindings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDynamicBlueprintBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Animation/WidgetAnimationDelegateBinding.h" },
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::NewProp_WidgetAnimationDelegateBindings_Inner = { "WidgetAnimationDelegateBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding, METADATA_PARAMS(nullptr, 0) }; // 2109910324
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::NewProp_WidgetAnimationDelegateBindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Animation/WidgetAnimationDelegateBinding.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::NewProp_WidgetAnimationDelegateBindings = { "WidgetAnimationDelegateBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetAnimationDelegateBinding, WidgetAnimationDelegateBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::NewProp_WidgetAnimationDelegateBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::NewProp_WidgetAnimationDelegateBindings_MetaData)) }; // 2109910324
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::NewProp_WidgetAnimationDelegateBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::NewProp_WidgetAnimationDelegateBindings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetAnimationDelegateBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::ClassParams = {
		&UWidgetAnimationDelegateBinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetAnimationDelegateBinding()
	{
		if (!Z_Registration_Info_UClass_UWidgetAnimationDelegateBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetAnimationDelegateBinding.OuterSingleton, Z_Construct_UClass_UWidgetAnimationDelegateBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetAnimationDelegateBinding.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UWidgetAnimationDelegateBinding>()
	{
		return UWidgetAnimationDelegateBinding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetAnimationDelegateBinding);
	UWidgetAnimationDelegateBinding::~UWidgetAnimationDelegateBinding() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationDelegateBinding_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationDelegateBinding_h_Statics::ScriptStructInfo[] = {
		{ FBlueprintWidgetAnimationDelegateBinding::StaticStruct, Z_Construct_UScriptStruct_FBlueprintWidgetAnimationDelegateBinding_Statics::NewStructOps, TEXT("BlueprintWidgetAnimationDelegateBinding"), &Z_Registration_Info_UScriptStruct_BlueprintWidgetAnimationDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBlueprintWidgetAnimationDelegateBinding), 2109910324U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationDelegateBinding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetAnimationDelegateBinding, UWidgetAnimationDelegateBinding::StaticClass, TEXT("UWidgetAnimationDelegateBinding"), &Z_Registration_Info_UClass_UWidgetAnimationDelegateBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetAnimationDelegateBinding), 3371937489U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationDelegateBinding_h_2458841565(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationDelegateBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationDelegateBinding_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationDelegateBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Animation_WidgetAnimationDelegateBinding_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
