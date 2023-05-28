// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/NiagaraDataInterfaceMousePosition.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceMousePosition() {}
// Cross Module References
	EXAMPLECUSTOMDATAINTERFACE_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceMousePosition();
	EXAMPLECUSTOMDATAINTERFACE_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceMousePosition_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	UPackage* Z_Construct_UPackage__Script_ExampleCustomDataInterface();
// End Cross Module References
	void UNiagaraDataInterfaceMousePosition::StaticRegisterNativesUNiagaraDataInterfaceMousePosition()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceMousePosition);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceMousePosition_NoRegister()
	{
		return UNiagaraDataInterfaceMousePosition::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceMousePosition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceMousePosition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_ExampleCustomDataInterface,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceMousePosition_Statics::Class_MetaDataParams[] = {
		{ "Category", "Mouse" },
		{ "DisplayName", "MousePosition Query" },
		{ "IncludePath", "NiagaraDataInterfaceMousePosition.h" },
		{ "ModuleRelativePath", "Private/NiagaraDataInterfaceMousePosition.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceMousePosition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceMousePosition>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceMousePosition_Statics::ClassParams = {
		&UNiagaraDataInterfaceMousePosition::StaticClass,
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
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceMousePosition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceMousePosition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceMousePosition()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceMousePosition.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceMousePosition.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceMousePosition_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceMousePosition.OuterSingleton;
	}
	template<> EXAMPLECUSTOMDATAINTERFACE_API UClass* StaticClass<UNiagaraDataInterfaceMousePosition>()
	{
		return UNiagaraDataInterfaceMousePosition::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceMousePosition);
	UNiagaraDataInterfaceMousePosition::~UNiagaraDataInterfaceMousePosition() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_ExampleCustomDataInterface_Source_ExampleCustomDataInterface_Private_NiagaraDataInterfaceMousePosition_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_ExampleCustomDataInterface_Source_ExampleCustomDataInterface_Private_NiagaraDataInterfaceMousePosition_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceMousePosition, UNiagaraDataInterfaceMousePosition::StaticClass, TEXT("UNiagaraDataInterfaceMousePosition"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceMousePosition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceMousePosition), 3746957172U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_ExampleCustomDataInterface_Source_ExampleCustomDataInterface_Private_NiagaraDataInterfaceMousePosition_h_924168012(TEXT("/Script/ExampleCustomDataInterface"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_ExampleCustomDataInterface_Source_ExampleCustomDataInterface_Private_NiagaraDataInterfaceMousePosition_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_ExampleCustomDataInterface_Source_ExampleCustomDataInterface_Private_NiagaraDataInterfaceMousePosition_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
