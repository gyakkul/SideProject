// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Public/Elements/SMInstance/SMInstanceElementHierarchyInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMInstanceElementHierarchyInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USMInstanceElementHierarchyInterface();
	ENGINE_API UClass* Z_Construct_UClass_USMInstanceElementHierarchyInterface_NoRegister();
	TYPEDELEMENTRUNTIME_API UClass* Z_Construct_UClass_UTypedElementHierarchyInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void USMInstanceElementHierarchyInterface::StaticRegisterNativesUSMInstanceElementHierarchyInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMInstanceElementHierarchyInterface);
	UClass* Z_Construct_UClass_USMInstanceElementHierarchyInterface_NoRegister()
	{
		return USMInstanceElementHierarchyInterface::StaticClass();
	}
	struct Z_Construct_UClass_USMInstanceElementHierarchyInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMInstanceElementHierarchyInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstanceElementHierarchyInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/SMInstance/SMInstanceElementHierarchyInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/SMInstance/SMInstanceElementHierarchyInterface.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USMInstanceElementHierarchyInterface_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTypedElementHierarchyInterface_NoRegister, (int32)VTABLE_OFFSET(USMInstanceElementHierarchyInterface, ITypedElementHierarchyInterface), false },  // 1481080909
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMInstanceElementHierarchyInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMInstanceElementHierarchyInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMInstanceElementHierarchyInterface_Statics::ClassParams = {
		&USMInstanceElementHierarchyInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USMInstanceElementHierarchyInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstanceElementHierarchyInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMInstanceElementHierarchyInterface()
	{
		if (!Z_Registration_Info_UClass_USMInstanceElementHierarchyInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMInstanceElementHierarchyInterface.OuterSingleton, Z_Construct_UClass_USMInstanceElementHierarchyInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMInstanceElementHierarchyInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<USMInstanceElementHierarchyInterface>()
	{
		return USMInstanceElementHierarchyInterface::StaticClass();
	}
	USMInstanceElementHierarchyInterface::USMInstanceElementHierarchyInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMInstanceElementHierarchyInterface);
	USMInstanceElementHierarchyInterface::~USMInstanceElementHierarchyInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementHierarchyInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementHierarchyInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMInstanceElementHierarchyInterface, USMInstanceElementHierarchyInterface::StaticClass, TEXT("USMInstanceElementHierarchyInterface"), &Z_Registration_Info_UClass_USMInstanceElementHierarchyInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMInstanceElementHierarchyInterface), 1472213287U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementHierarchyInterface_h_1489033069(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementHierarchyInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Public_Elements_SMInstance_SMInstanceElementHierarchyInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
