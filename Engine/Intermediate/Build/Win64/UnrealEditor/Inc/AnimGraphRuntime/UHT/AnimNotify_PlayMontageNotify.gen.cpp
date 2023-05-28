// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNotifies/AnimNotify_PlayMontageNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotify_PlayMontageNotify() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimNotify_PlayMontageNotify();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimNotify_PlayMontageNotify_NoRegister();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow();
	ANIMGRAPHRUNTIME_API UClass* Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	UPackage* Z_Construct_UPackage__Script_AnimGraphRuntime();
// End Cross Module References
	void UAnimNotify_PlayMontageNotify::StaticRegisterNativesUAnimNotify_PlayMontageNotify()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_PlayMontageNotify);
	UClass* Z_Construct_UClass_UAnimNotify_PlayMontageNotify_NoRegister()
	{
		return UAnimNotify_PlayMontageNotify::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotify,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// UAnimNotify_PlayMontageNotify\n//////////////////////////////////////////////////////////////////////////\n" },
		{ "DisplayName", "Montage Notify" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AnimNotifies/AnimNotify_PlayMontageNotify.h" },
		{ "ModuleRelativePath", "Public/AnimNotifies/AnimNotify_PlayMontageNotify.h" },
		{ "ToolTip", "UAnimNotify_PlayMontageNotify" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::NewProp_NotifyName_MetaData[] = {
		{ "Category", "Notify" },
		{ "Comment", "// Name of notify that is passed to the PlayMontage K2Node.\n" },
		{ "ModuleRelativePath", "Public/AnimNotifies/AnimNotify_PlayMontageNotify.h" },
		{ "ToolTip", "Name of notify that is passed to the PlayMontage K2Node." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_PlayMontageNotify, NotifyName), METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::NewProp_NotifyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::NewProp_NotifyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::NewProp_NotifyName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_PlayMontageNotify>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::ClassParams = {
		&UAnimNotify_PlayMontageNotify::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_PlayMontageNotify()
	{
		if (!Z_Registration_Info_UClass_UAnimNotify_PlayMontageNotify.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_PlayMontageNotify.OuterSingleton, Z_Construct_UClass_UAnimNotify_PlayMontageNotify_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNotify_PlayMontageNotify.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<UAnimNotify_PlayMontageNotify>()
	{
		return UAnimNotify_PlayMontageNotify::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_PlayMontageNotify);
	UAnimNotify_PlayMontageNotify::~UAnimNotify_PlayMontageNotify() {}
	void UAnimNotify_PlayMontageNotifyWindow::StaticRegisterNativesUAnimNotify_PlayMontageNotifyWindow()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotify_PlayMontageNotifyWindow);
	UClass* Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_NoRegister()
	{
		return UAnimNotify_PlayMontageNotifyWindow::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotifyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NotifyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimGraphRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//////////////////////////////////////////////////////////////////////////\n// UAnimNotify_PlayMontageNotifyWindow\n//////////////////////////////////////////////////////////////////////////\n" },
		{ "DisplayName", "Montage Notify Window" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "AnimNotifies/AnimNotify_PlayMontageNotify.h" },
		{ "ModuleRelativePath", "Public/AnimNotifies/AnimNotify_PlayMontageNotify.h" },
		{ "ToolTip", "UAnimNotify_PlayMontageNotifyWindow" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::NewProp_NotifyName_MetaData[] = {
		{ "Category", "Notify" },
		{ "Comment", "// Name of notify that is passed to ability.\n" },
		{ "ModuleRelativePath", "Public/AnimNotifies/AnimNotify_PlayMontageNotify.h" },
		{ "ToolTip", "Name of notify that is passed to ability." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::NewProp_NotifyName = { "NotifyName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotify_PlayMontageNotifyWindow, NotifyName), METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::NewProp_NotifyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::NewProp_NotifyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::NewProp_NotifyName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotify_PlayMontageNotifyWindow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::ClassParams = {
		&UAnimNotify_PlayMontageNotifyWindow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow()
	{
		if (!Z_Registration_Info_UClass_UAnimNotify_PlayMontageNotifyWindow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotify_PlayMontageNotifyWindow.OuterSingleton, Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNotify_PlayMontageNotifyWindow.OuterSingleton;
	}
	template<> ANIMGRAPHRUNTIME_API UClass* StaticClass<UAnimNotify_PlayMontageNotifyWindow>()
	{
		return UAnimNotify_PlayMontageNotifyWindow::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotify_PlayMontageNotifyWindow);
	UAnimNotify_PlayMontageNotifyWindow::~UAnimNotify_PlayMontageNotifyWindow() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNotifies_AnimNotify_PlayMontageNotify_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNotifies_AnimNotify_PlayMontageNotify_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotify_PlayMontageNotify, UAnimNotify_PlayMontageNotify::StaticClass, TEXT("UAnimNotify_PlayMontageNotify"), &Z_Registration_Info_UClass_UAnimNotify_PlayMontageNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_PlayMontageNotify), 734038280U) },
		{ Z_Construct_UClass_UAnimNotify_PlayMontageNotifyWindow, UAnimNotify_PlayMontageNotifyWindow::StaticClass, TEXT("UAnimNotify_PlayMontageNotifyWindow"), &Z_Registration_Info_UClass_UAnimNotify_PlayMontageNotifyWindow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotify_PlayMontageNotifyWindow), 2688217342U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNotifies_AnimNotify_PlayMontageNotify_h_239288198(TEXT("/Script/AnimGraphRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNotifies_AnimNotify_PlayMontageNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AnimGraphRuntime_Public_AnimNotifies_AnimNotify_PlayMontageNotify_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
