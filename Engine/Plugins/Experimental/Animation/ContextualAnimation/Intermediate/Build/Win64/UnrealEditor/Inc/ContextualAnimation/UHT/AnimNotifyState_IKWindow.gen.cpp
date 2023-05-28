// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimNotifyState_IKWindow.h"
#include "../../Source/Runtime/Engine/Public/AlphaBlend.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_IKWindow() {}
// Cross Module References
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UAnimNotifyState_IKWindow();
	CONTEXTUALANIMATION_API UClass* Z_Construct_UClass_UAnimNotifyState_IKWindow_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAlphaBlend();
	UPackage* Z_Construct_UPackage__Script_ContextualAnimation();
// End Cross Module References
	void UAnimNotifyState_IKWindow::StaticRegisterNativesUAnimNotifyState_IKWindow()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_IKWindow);
	UClass* Z_Construct_UClass_UAnimNotifyState_IKWindow_NoRegister()
	{
		return UAnimNotifyState_IKWindow::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GoalName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GoalName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendIn_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendIn;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendOut_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendOut;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[];
#endif
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_ContextualAnimation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** AnimNotifyState used to define areas in an animation where IK should be enable */" },
		{ "DisplayName", "IK Window" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "AnimNotifyState_IKWindow.h" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_IKWindow.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "AnimNotifyState used to define areas in an animation where IK should be enable" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::NewProp_GoalName_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_IKWindow.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::NewProp_GoalName = { "GoalName", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotifyState_IKWindow, GoalName), METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::NewProp_GoalName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::NewProp_GoalName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::NewProp_BlendIn_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_IKWindow.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::NewProp_BlendIn = { "BlendIn", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotifyState_IKWindow, BlendIn), Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::NewProp_BlendIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::NewProp_BlendIn_MetaData)) }; // 3900153020
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::NewProp_BlendOut_MetaData[] = {
		{ "Category", "Config" },
		{ "ModuleRelativePath", "Public/AnimNotifyState_IKWindow.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::NewProp_BlendOut = { "BlendOut", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotifyState_IKWindow, BlendOut), Z_Construct_UScriptStruct_FAlphaBlend, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::NewProp_BlendOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::NewProp_BlendOut_MetaData)) }; // 3900153020
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::NewProp_bEnable_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNotifyState_IKWindow.h" },
	};
#endif
	void Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((UAnimNotifyState_IKWindow*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000010, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimNotifyState_IKWindow), &Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::NewProp_bEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::NewProp_bEnable_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::NewProp_GoalName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::NewProp_BlendIn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::NewProp_BlendOut,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::NewProp_bEnable,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_IKWindow>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::ClassParams = {
		&UAnimNotifyState_IKWindow::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotifyState_IKWindow()
	{
		if (!Z_Registration_Info_UClass_UAnimNotifyState_IKWindow.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_IKWindow.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_IKWindow_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNotifyState_IKWindow.OuterSingleton;
	}
	template<> CONTEXTUALANIMATION_API UClass* StaticClass<UAnimNotifyState_IKWindow>()
	{
		return UAnimNotifyState_IKWindow::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_IKWindow);
	UAnimNotifyState_IKWindow::~UAnimNotifyState_IKWindow() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_AnimNotifyState_IKWindow_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_AnimNotifyState_IKWindow_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_IKWindow, UAnimNotifyState_IKWindow::StaticClass, TEXT("UAnimNotifyState_IKWindow"), &Z_Registration_Info_UClass_UAnimNotifyState_IKWindow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_IKWindow), 285344190U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_AnimNotifyState_IKWindow_h_3160013973(TEXT("/Script/ContextualAnimation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_AnimNotifyState_IKWindow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Animation_ContextualAnimation_Source_ContextualAnimation_Public_AnimNotifyState_IKWindow_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
