// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Elements/Component/ComponentElementDetailsInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComponentElementDetailsInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDetailsInterface_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UComponentElementDetailsInterface();
	UNREALED_API UClass* Z_Construct_UClass_UComponentElementDetailsInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UComponentElementDetailsInterface::StaticRegisterNativesUComponentElementDetailsInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComponentElementDetailsInterface);
	UClass* Z_Construct_UClass_UComponentElementDetailsInterface_NoRegister()
	{
		return UComponentElementDetailsInterface::StaticClass();
	}
	struct Z_Construct_UClass_UComponentElementDetailsInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComponentElementDetailsInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComponentElementDetailsInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Component/ComponentElementDetailsInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/Component/ComponentElementDetailsInterface.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UComponentElementDetailsInterface_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTypedElementDetailsInterface_NoRegister, (int32)VTABLE_OFFSET(UComponentElementDetailsInterface, ITypedElementDetailsInterface), false },  // 3783908826
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComponentElementDetailsInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComponentElementDetailsInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComponentElementDetailsInterface_Statics::ClassParams = {
		&UComponentElementDetailsInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UComponentElementDetailsInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComponentElementDetailsInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComponentElementDetailsInterface()
	{
		if (!Z_Registration_Info_UClass_UComponentElementDetailsInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComponentElementDetailsInterface.OuterSingleton, Z_Construct_UClass_UComponentElementDetailsInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComponentElementDetailsInterface.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UComponentElementDetailsInterface>()
	{
		return UComponentElementDetailsInterface::StaticClass();
	}
	UComponentElementDetailsInterface::UComponentElementDetailsInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComponentElementDetailsInterface);
	UComponentElementDetailsInterface::~UComponentElementDetailsInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementDetailsInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementDetailsInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComponentElementDetailsInterface, UComponentElementDetailsInterface::StaticClass, TEXT("UComponentElementDetailsInterface"), &Z_Registration_Info_UClass_UComponentElementDetailsInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComponentElementDetailsInterface), 440840761U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementDetailsInterface_h_3640735728(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementDetailsInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Component_ComponentElementDetailsInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
