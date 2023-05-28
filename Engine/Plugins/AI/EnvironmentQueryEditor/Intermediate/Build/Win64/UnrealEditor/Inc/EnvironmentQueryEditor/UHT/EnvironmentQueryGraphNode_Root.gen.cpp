// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EnvironmentQueryGraphNode_Root.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvironmentQueryGraphNode_Root() {}
// Cross Module References
	ENVIRONMENTQUERYEDITOR_API UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode();
	ENVIRONMENTQUERYEDITOR_API UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Root();
	ENVIRONMENTQUERYEDITOR_API UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EnvironmentQueryEditor();
// End Cross Module References
	void UEnvironmentQueryGraphNode_Root::StaticRegisterNativesUEnvironmentQueryGraphNode_Root()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvironmentQueryGraphNode_Root);
	UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_NoRegister()
	{
		return UEnvironmentQueryGraphNode_Root::StaticClass();
	}
	struct Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_DebugMessages_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugMessages_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DebugMessages;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasDebugError_MetaData[];
#endif
		static void NewProp_bHasDebugError_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasDebugError;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvironmentQueryGraphNode,
		(UObject* (*)())Z_Construct_UPackage__Script_EnvironmentQueryEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQueryGraphNode_Root.h" },
		{ "ModuleRelativePath", "Public/EnvironmentQueryGraphNode_Root.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::NewProp_DebugMessages_Inner = { "DebugMessages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::NewProp_DebugMessages_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/EnvironmentQueryGraphNode_Root.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::NewProp_DebugMessages = { "DebugMessages", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvironmentQueryGraphNode_Root, DebugMessages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::NewProp_DebugMessages_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::NewProp_DebugMessages_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::NewProp_bHasDebugError_MetaData[] = {
		{ "ModuleRelativePath", "Public/EnvironmentQueryGraphNode_Root.h" },
	};
#endif
	void Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::NewProp_bHasDebugError_SetBit(void* Obj)
	{
		((UEnvironmentQueryGraphNode_Root*)Obj)->bHasDebugError = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::NewProp_bHasDebugError = { "bHasDebugError", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEnvironmentQueryGraphNode_Root), &Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::NewProp_bHasDebugError_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::NewProp_bHasDebugError_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::NewProp_bHasDebugError_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::NewProp_DebugMessages_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::NewProp_DebugMessages,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::NewProp_bHasDebugError,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvironmentQueryGraphNode_Root>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::ClassParams = {
		&UEnvironmentQueryGraphNode_Root::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvironmentQueryGraphNode_Root()
	{
		if (!Z_Registration_Info_UClass_UEnvironmentQueryGraphNode_Root.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvironmentQueryGraphNode_Root.OuterSingleton, Z_Construct_UClass_UEnvironmentQueryGraphNode_Root_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvironmentQueryGraphNode_Root.OuterSingleton;
	}
	template<> ENVIRONMENTQUERYEDITOR_API UClass* StaticClass<UEnvironmentQueryGraphNode_Root>()
	{
		return UEnvironmentQueryGraphNode_Root::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvironmentQueryGraphNode_Root);
	UEnvironmentQueryGraphNode_Root::~UEnvironmentQueryGraphNode_Root() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraphNode_Root_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraphNode_Root_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvironmentQueryGraphNode_Root, UEnvironmentQueryGraphNode_Root::StaticClass, TEXT("UEnvironmentQueryGraphNode_Root"), &Z_Registration_Info_UClass_UEnvironmentQueryGraphNode_Root, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvironmentQueryGraphNode_Root), 1109303607U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraphNode_Root_h_2487798048(TEXT("/Script/EnvironmentQueryEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraphNode_Root_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_EnvironmentQueryEditor_Source_EnvironmentQueryEditor_Public_EnvironmentQueryGraphNode_Root_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
