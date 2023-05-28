// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetDriverEOSBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNetDriverEOSBase() {}
// Cross Module References
	ONLINESUBSYSTEMUTILS_API UClass* Z_Construct_UClass_UIpNetDriver();
	SOCKETSUBSYSTEMEOS_API UClass* Z_Construct_UClass_UNetDriverEOSBase();
	SOCKETSUBSYSTEMEOS_API UClass* Z_Construct_UClass_UNetDriverEOSBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SocketSubsystemEOS();
// End Cross Module References
	void UNetDriverEOSBase::StaticRegisterNativesUNetDriverEOSBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNetDriverEOSBase);
	UClass* Z_Construct_UClass_UNetDriverEOSBase_NoRegister()
	{
		return UNetDriverEOSBase::StaticClass();
	}
	struct Z_Construct_UClass_UNetDriverEOSBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPassthrough_MetaData[];
#endif
		static void NewProp_bIsPassthrough_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPassthrough;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsUsingP2PSockets_MetaData[];
#endif
		static void NewProp_bIsUsingP2PSockets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsUsingP2PSockets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNetDriverEOSBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UIpNetDriver,
		(UObject* (*)())Z_Construct_UPackage__Script_SocketSubsystemEOS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriverEOSBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NetDriverEOSBase.h" },
		{ "ModuleRelativePath", "Public/NetDriverEOSBase.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriverEOSBase_Statics::NewProp_bIsPassthrough_MetaData[] = {
		{ "ModuleRelativePath", "Public/NetDriverEOSBase.h" },
	};
#endif
	void Z_Construct_UClass_UNetDriverEOSBase_Statics::NewProp_bIsPassthrough_SetBit(void* Obj)
	{
		((UNetDriverEOSBase*)Obj)->bIsPassthrough = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNetDriverEOSBase_Statics::NewProp_bIsPassthrough = { "bIsPassthrough", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNetDriverEOSBase), &Z_Construct_UClass_UNetDriverEOSBase_Statics::NewProp_bIsPassthrough_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNetDriverEOSBase_Statics::NewProp_bIsPassthrough_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriverEOSBase_Statics::NewProp_bIsPassthrough_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNetDriverEOSBase_Statics::NewProp_bIsUsingP2PSockets_MetaData[] = {
		{ "ModuleRelativePath", "Public/NetDriverEOSBase.h" },
	};
#endif
	void Z_Construct_UClass_UNetDriverEOSBase_Statics::NewProp_bIsUsingP2PSockets_SetBit(void* Obj)
	{
		((UNetDriverEOSBase*)Obj)->bIsUsingP2PSockets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNetDriverEOSBase_Statics::NewProp_bIsUsingP2PSockets = { "bIsUsingP2PSockets", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNetDriverEOSBase), &Z_Construct_UClass_UNetDriverEOSBase_Statics::NewProp_bIsUsingP2PSockets_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNetDriverEOSBase_Statics::NewProp_bIsUsingP2PSockets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriverEOSBase_Statics::NewProp_bIsUsingP2PSockets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNetDriverEOSBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriverEOSBase_Statics::NewProp_bIsPassthrough,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNetDriverEOSBase_Statics::NewProp_bIsUsingP2PSockets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNetDriverEOSBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNetDriverEOSBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNetDriverEOSBase_Statics::ClassParams = {
		&UNetDriverEOSBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNetDriverEOSBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriverEOSBase_Statics::PropPointers),
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UNetDriverEOSBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNetDriverEOSBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNetDriverEOSBase()
	{
		if (!Z_Registration_Info_UClass_UNetDriverEOSBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNetDriverEOSBase.OuterSingleton, Z_Construct_UClass_UNetDriverEOSBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNetDriverEOSBase.OuterSingleton;
	}
	template<> SOCKETSUBSYSTEMEOS_API UClass* StaticClass<UNetDriverEOSBase>()
	{
		return UNetDriverEOSBase::StaticClass();
	}
	UNetDriverEOSBase::UNetDriverEOSBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNetDriverEOSBase);
	UNetDriverEOSBase::~UNetDriverEOSBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Public_NetDriverEOSBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Public_NetDriverEOSBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNetDriverEOSBase, UNetDriverEOSBase::StaticClass, TEXT("UNetDriverEOSBase"), &Z_Registration_Info_UClass_UNetDriverEOSBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNetDriverEOSBase), 44114697U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Public_NetDriverEOSBase_h_2673083314(TEXT("/Script/SocketSubsystemEOS"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Public_NetDriverEOSBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_SocketSubsystemEOS_Source_SocketSubsystemEOS_Public_NetDriverEOSBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
