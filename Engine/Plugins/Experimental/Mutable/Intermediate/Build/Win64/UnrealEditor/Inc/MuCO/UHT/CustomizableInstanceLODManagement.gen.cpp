// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCO/CustomizableInstanceLODManagement.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableInstanceLODManagement() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableInstanceLODManagement();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableInstanceLODManagement_NoRegister();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableInstanceLODManagementBase();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableInstanceLODManagementBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CustomizableObject();
// End Cross Module References
	void UCustomizableInstanceLODManagementBase::StaticRegisterNativesUCustomizableInstanceLODManagementBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableInstanceLODManagementBase);
	UClass* Z_Construct_UClass_UCustomizableInstanceLODManagementBase_NoRegister()
	{
		return UCustomizableInstanceLODManagementBase::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableInstanceLODManagementBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableInstanceLODManagementBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableInstanceLODManagementBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// This is an abstract base class, override it to create a new Instance LOD management system and register with UCustomizableObjectSystem::SetInstanceLODManagement\n" },
		{ "IncludePath", "MuCO/CustomizableInstanceLODManagement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableInstanceLODManagement.h" },
		{ "ToolTip", "This is an abstract base class, override it to create a new Instance LOD management system and register with UCustomizableObjectSystem::SetInstanceLODManagement" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableInstanceLODManagementBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableInstanceLODManagementBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableInstanceLODManagementBase_Statics::ClassParams = {
		&UCustomizableInstanceLODManagementBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableInstanceLODManagementBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableInstanceLODManagementBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableInstanceLODManagementBase()
	{
		if (!Z_Registration_Info_UClass_UCustomizableInstanceLODManagementBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableInstanceLODManagementBase.OuterSingleton, Z_Construct_UClass_UCustomizableInstanceLODManagementBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableInstanceLODManagementBase.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECT_API UClass* StaticClass<UCustomizableInstanceLODManagementBase>()
	{
		return UCustomizableInstanceLODManagementBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableInstanceLODManagementBase);
	void UCustomizableInstanceLODManagement::StaticRegisterNativesUCustomizableInstanceLODManagement()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableInstanceLODManagement);
	UClass* Z_Construct_UClass_UCustomizableInstanceLODManagement_NoRegister()
	{
		return UCustomizableInstanceLODManagement::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableInstanceLODManagement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableInstanceLODManagement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableInstanceLODManagementBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableInstanceLODManagement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MuCO/CustomizableInstanceLODManagement.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableInstanceLODManagement.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableInstanceLODManagement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableInstanceLODManagement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableInstanceLODManagement_Statics::ClassParams = {
		&UCustomizableInstanceLODManagement::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableInstanceLODManagement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableInstanceLODManagement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableInstanceLODManagement()
	{
		if (!Z_Registration_Info_UClass_UCustomizableInstanceLODManagement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableInstanceLODManagement.OuterSingleton, Z_Construct_UClass_UCustomizableInstanceLODManagement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableInstanceLODManagement.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECT_API UClass* StaticClass<UCustomizableInstanceLODManagement>()
	{
		return UCustomizableInstanceLODManagement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableInstanceLODManagement);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableInstanceLODManagement_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableInstanceLODManagement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableInstanceLODManagementBase, UCustomizableInstanceLODManagementBase::StaticClass, TEXT("UCustomizableInstanceLODManagementBase"), &Z_Registration_Info_UClass_UCustomizableInstanceLODManagementBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableInstanceLODManagementBase), 4281708380U) },
		{ Z_Construct_UClass_UCustomizableInstanceLODManagement, UCustomizableInstanceLODManagement::StaticClass, TEXT("UCustomizableInstanceLODManagement"), &Z_Registration_Info_UClass_UCustomizableInstanceLODManagement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableInstanceLODManagement), 3999409804U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableInstanceLODManagement_h_4250576853(TEXT("/Script/CustomizableObject"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableInstanceLODManagement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableInstanceLODManagement_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
