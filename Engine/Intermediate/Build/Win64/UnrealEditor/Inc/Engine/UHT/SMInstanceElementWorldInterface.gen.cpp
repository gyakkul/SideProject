// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Elements/SMInstance/SMInstanceElementWorldInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMInstanceElementWorldInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USMInstanceElementWorldInterface();
	ENGINE_API UClass* Z_Construct_UClass_USMInstanceElementWorldInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTypedElementWorldInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USMInstanceElementWorldInterface::StaticRegisterNativesUSMInstanceElementWorldInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMInstanceElementWorldInterface);
	UClass* Z_Construct_UClass_USMInstanceElementWorldInterface_NoRegister()
	{
		return USMInstanceElementWorldInterface::StaticClass();
	}
	struct Z_Construct_UClass_USMInstanceElementWorldInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMInstanceElementWorldInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstanceElementWorldInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/SMInstance/SMInstanceElementWorldInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/SMInstance/SMInstanceElementWorldInterface.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USMInstanceElementWorldInterface_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTypedElementWorldInterface_NoRegister, (int32)VTABLE_OFFSET(USMInstanceElementWorldInterface, ITypedElementWorldInterface), false },  // 3278243553
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMInstanceElementWorldInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMInstanceElementWorldInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMInstanceElementWorldInterface_Statics::ClassParams = {
		&USMInstanceElementWorldInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USMInstanceElementWorldInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstanceElementWorldInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMInstanceElementWorldInterface()
	{
		if (!Z_Registration_Info_UClass_USMInstanceElementWorldInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMInstanceElementWorldInterface.OuterSingleton, Z_Construct_UClass_USMInstanceElementWorldInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMInstanceElementWorldInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USMInstanceElementWorldInterface>()
	{
		return USMInstanceElementWorldInterface::StaticClass();
	}
	USMInstanceElementWorldInterface::USMInstanceElementWorldInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMInstanceElementWorldInterface);
	USMInstanceElementWorldInterface::~USMInstanceElementWorldInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementWorldInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementWorldInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMInstanceElementWorldInterface, USMInstanceElementWorldInterface::StaticClass, TEXT("USMInstanceElementWorldInterface"), &Z_Registration_Info_UClass_USMInstanceElementWorldInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMInstanceElementWorldInterface), 1266464474U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementWorldInterface_h_4010779193(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementWorldInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementWorldInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
