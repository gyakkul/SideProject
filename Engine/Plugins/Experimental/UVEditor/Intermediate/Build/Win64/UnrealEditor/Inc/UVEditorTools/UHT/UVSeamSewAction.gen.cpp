// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Actions/UVSeamSewAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUVSeamSewAction() {}
// Cross Module References
	UPackage* Z_Construct_UPackage__Script_UVEditorTools();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVSeamSewAction();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVSeamSewAction_NoRegister();
	UVEDITORTOOLS_API UClass* Z_Construct_UClass_UUVToolAction();
// End Cross Module References
	void UUVSeamSewAction::StaticRegisterNativesUUVSeamSewAction()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUVSeamSewAction);
	UClass* Z_Construct_UClass_UUVSeamSewAction_NoRegister()
	{
		return UUVSeamSewAction::StaticClass();
	}
	struct Z_Construct_UClass_UUVSeamSewAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUVSeamSewAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUVToolAction,
		(UObject* (*)())Z_Construct_UPackage__Script_UVEditorTools,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUVSeamSewAction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/UVSeamSewAction.h" },
		{ "ModuleRelativePath", "Public/Actions/UVSeamSewAction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUVSeamSewAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUVSeamSewAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUVSeamSewAction_Statics::ClassParams = {
		&UUVSeamSewAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUVSeamSewAction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUVSeamSewAction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUVSeamSewAction()
	{
		if (!Z_Registration_Info_UClass_UUVSeamSewAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUVSeamSewAction.OuterSingleton, Z_Construct_UClass_UUVSeamSewAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUVSeamSewAction.OuterSingleton;
	}
	template<> UVEDITORTOOLS_API UClass* StaticClass<UUVSeamSewAction>()
	{
		return UUVSeamSewAction::StaticClass();
	}
	UUVSeamSewAction::UUVSeamSewAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUVSeamSewAction);
	UUVSeamSewAction::~UUVSeamSewAction() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Actions_UVSeamSewAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Actions_UVSeamSewAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUVSeamSewAction, UUVSeamSewAction::StaticClass, TEXT("UUVSeamSewAction"), &Z_Registration_Info_UClass_UUVSeamSewAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUVSeamSewAction), 3385379747U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Actions_UVSeamSewAction_h_2525231597(TEXT("/Script/UVEditorTools"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Actions_UVSeamSewAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_UVEditor_Source_UVEditorTools_Public_Actions_UVSeamSewAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
