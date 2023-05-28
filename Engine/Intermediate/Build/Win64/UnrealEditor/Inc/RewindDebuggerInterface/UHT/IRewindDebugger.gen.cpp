// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IRewindDebugger.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIRewindDebugger() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	REWINDDEBUGGERINTERFACE_API UClass* Z_Construct_UClass_UComponentContextMenuContext();
	REWINDDEBUGGERINTERFACE_API UClass* Z_Construct_UClass_UComponentContextMenuContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_RewindDebuggerInterface();
// End Cross Module References
	void UComponentContextMenuContext::StaticRegisterNativesUComponentContextMenuContext()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComponentContextMenuContext);
	UClass* Z_Construct_UClass_UComponentContextMenuContext_NoRegister()
	{
		return UComponentContextMenuContext::StaticClass();
	}
	struct Z_Construct_UClass_UComponentContextMenuContext_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponentContextMenuContext_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RewindDebuggerInterface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponentContextMenuContext_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IRewindDebugger.h" },
		{ "ModuleRelativePath", "Public/IRewindDebugger.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponentContextMenuContext_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponentContextMenuContext>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComponentContextMenuContext_Statics::ClassParams = {
		&UComponentContextMenuContext::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UComponentContextMenuContext_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponentContextMenuContext_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponentContextMenuContext()
	{
		if (!Z_Registration_Info_UClass_UComponentContextMenuContext.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComponentContextMenuContext.OuterSingleton, Z_Construct_UClass_UComponentContextMenuContext_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComponentContextMenuContext.OuterSingleton;
	}
	template<> REWINDDEBUGGERINTERFACE_API UClass* StaticClass<UComponentContextMenuContext>()
	{
		return UComponentContextMenuContext::StaticClass();
	}
	UComponentContextMenuContext::UComponentContextMenuContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponentContextMenuContext);
	UComponentContextMenuContext::~UComponentContextMenuContext() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_RewindDebuggerInterface_Public_IRewindDebugger_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_RewindDebuggerInterface_Public_IRewindDebugger_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComponentContextMenuContext, UComponentContextMenuContext::StaticClass, TEXT("UComponentContextMenuContext"), &Z_Registration_Info_UClass_UComponentContextMenuContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComponentContextMenuContext), 3499183147U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_RewindDebuggerInterface_Public_IRewindDebugger_h_4283805845(TEXT("/Script/RewindDebuggerInterface"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_RewindDebuggerInterface_Public_IRewindDebugger_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_RewindDebuggerInterface_Public_IRewindDebugger_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
