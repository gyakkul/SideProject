// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "IAnimNextInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIAnimNextInterface() {}
// Cross Module References
	ANIMNEXTINTERFACE_API UClass* Z_Construct_UClass_UAnimNextInterface();
	ANIMNEXTINTERFACE_API UClass* Z_Construct_UClass_UAnimNextInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_AnimNextInterface();
// End Cross Module References
	void UAnimNextInterface::StaticRegisterNativesUAnimNextInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNextInterface);
	UClass* Z_Construct_UClass_UAnimNextInterface_NoRegister()
	{
		return UAnimNextInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNextInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNextInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_AnimNextInterface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNextInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/IAnimNextInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNextInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAnimNextInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNextInterface_Statics::ClassParams = {
		&UAnimNextInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNextInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNextInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNextInterface()
	{
		if (!Z_Registration_Info_UClass_UAnimNextInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNextInterface.OuterSingleton, Z_Construct_UClass_UAnimNextInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNextInterface.OuterSingleton;
	}
	template<> ANIMNEXTINTERFACE_API UClass* StaticClass<UAnimNextInterface>()
	{
		return UAnimNextInterface::StaticClass();
	}
	UAnimNextInterface::UAnimNextInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNextInterface);
	UAnimNextInterface::~UAnimNextInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterface_Public_IAnimNextInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterface_Public_IAnimNextInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNextInterface, UAnimNextInterface::StaticClass, TEXT("UAnimNextInterface"), &Z_Registration_Info_UClass_UAnimNextInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNextInterface), 3851592269U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterface_Public_IAnimNextInterface_h_2745431944(TEXT("/Script/AnimNextInterface"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterface_Public_IAnimNextInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_AnimNext_Source_AnimNextInterface_Public_IAnimNextInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
