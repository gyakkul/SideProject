// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/NativeWidgetHost.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNativeWidgetHost() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UNativeWidgetHost();
	UMG_API UClass* Z_Construct_UClass_UNativeWidgetHost_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UNativeWidgetHost::StaticRegisterNativesUNativeWidgetHost()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNativeWidgetHost);
	UClass* Z_Construct_UClass_UNativeWidgetHost_NoRegister()
	{
		return UNativeWidgetHost::StaticClass();
	}
	struct Z_Construct_UClass_UNativeWidgetHost_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNativeWidgetHost_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNativeWidgetHost_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A NativeWidgetHost is a container widget that can contain one child slate widget.  This should\n * be used when all you need is to nest a native widget inside a UMG widget.\n */" },
		{ "IncludePath", "Components/NativeWidgetHost.h" },
		{ "ModuleRelativePath", "Public/Components/NativeWidgetHost.h" },
		{ "ToolTip", "A NativeWidgetHost is a container widget that can contain one child slate widget.  This should\nbe used when all you need is to nest a native widget inside a UMG widget." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNativeWidgetHost_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNativeWidgetHost>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNativeWidgetHost_Statics::ClassParams = {
		&UNativeWidgetHost::StaticClass,
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
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNativeWidgetHost_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNativeWidgetHost_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNativeWidgetHost()
	{
		if (!Z_Registration_Info_UClass_UNativeWidgetHost.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNativeWidgetHost.OuterSingleton, Z_Construct_UClass_UNativeWidgetHost_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNativeWidgetHost.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UNativeWidgetHost>()
	{
		return UNativeWidgetHost::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNativeWidgetHost);
	UNativeWidgetHost::~UNativeWidgetHost() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNativeWidgetHost, UNativeWidgetHost::StaticClass, TEXT("UNativeWidgetHost"), &Z_Registration_Info_UClass_UNativeWidgetHost, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNativeWidgetHost), 2651038651U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_2621191054(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_NativeWidgetHost_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
