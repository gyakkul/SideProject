// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/BrushEditingSubsystemImpl.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBrushEditingSubsystemImpl() {}
// Cross Module References
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UBrushEditingSubsystemImpl();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UBrushEditingSubsystemImpl_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UBrushEditingSubsystem();
	UPackage* Z_Construct_UPackage__Script_GeometryMode();
// End Cross Module References
	void UBrushEditingSubsystemImpl::StaticRegisterNativesUBrushEditingSubsystemImpl()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBrushEditingSubsystemImpl);
	UClass* Z_Construct_UClass_UBrushEditingSubsystemImpl_NoRegister()
	{
		return UBrushEditingSubsystemImpl::StaticClass();
	}
	struct Z_Construct_UClass_UBrushEditingSubsystemImpl_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBrushEditingSubsystemImpl_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBrushEditingSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBrushEditingSubsystemImpl_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BrushEditingSubsystemImpl.h" },
		{ "ModuleRelativePath", "Private/BrushEditingSubsystemImpl.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBrushEditingSubsystemImpl_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBrushEditingSubsystemImpl>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBrushEditingSubsystemImpl_Statics::ClassParams = {
		&UBrushEditingSubsystemImpl::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBrushEditingSubsystemImpl_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBrushEditingSubsystemImpl_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBrushEditingSubsystemImpl()
	{
		if (!Z_Registration_Info_UClass_UBrushEditingSubsystemImpl.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBrushEditingSubsystemImpl.OuterSingleton, Z_Construct_UClass_UBrushEditingSubsystemImpl_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBrushEditingSubsystemImpl.OuterSingleton;
	}
	template<> GEOMETRYMODE_API UClass* StaticClass<UBrushEditingSubsystemImpl>()
	{
		return UBrushEditingSubsystemImpl::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBrushEditingSubsystemImpl);
	UBrushEditingSubsystemImpl::~UBrushEditingSubsystemImpl() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Private_BrushEditingSubsystemImpl_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Private_BrushEditingSubsystemImpl_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBrushEditingSubsystemImpl, UBrushEditingSubsystemImpl::StaticClass, TEXT("UBrushEditingSubsystemImpl"), &Z_Registration_Info_UClass_UBrushEditingSubsystemImpl, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBrushEditingSubsystemImpl), 3405543840U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Private_BrushEditingSubsystemImpl_h_1135003599(TEXT("/Script/GeometryMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Private_BrushEditingSubsystemImpl_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Private_BrushEditingSubsystemImpl_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
