// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Elements/Object/ObjectElementDetailsInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectElementDetailsInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDetailsInterface_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UObjectElementDetailsInterface();
	UNREALED_API UClass* Z_Construct_UClass_UObjectElementDetailsInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UObjectElementDetailsInterface::StaticRegisterNativesUObjectElementDetailsInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectElementDetailsInterface);
	UClass* Z_Construct_UClass_UObjectElementDetailsInterface_NoRegister()
	{
		return UObjectElementDetailsInterface::StaticClass();
	}
	struct Z_Construct_UClass_UObjectElementDetailsInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectElementDetailsInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectElementDetailsInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Object/ObjectElementDetailsInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/Object/ObjectElementDetailsInterface.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UObjectElementDetailsInterface_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTypedElementDetailsInterface_NoRegister, (int32)VTABLE_OFFSET(UObjectElementDetailsInterface, ITypedElementDetailsInterface), false },  // 3783908826
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectElementDetailsInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectElementDetailsInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectElementDetailsInterface_Statics::ClassParams = {
		&UObjectElementDetailsInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UObjectElementDetailsInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectElementDetailsInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectElementDetailsInterface()
	{
		if (!Z_Registration_Info_UClass_UObjectElementDetailsInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectElementDetailsInterface.OuterSingleton, Z_Construct_UClass_UObjectElementDetailsInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectElementDetailsInterface.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UObjectElementDetailsInterface>()
	{
		return UObjectElementDetailsInterface::StaticClass();
	}
	UObjectElementDetailsInterface::UObjectElementDetailsInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectElementDetailsInterface);
	UObjectElementDetailsInterface::~UObjectElementDetailsInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Object_ObjectElementDetailsInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Object_ObjectElementDetailsInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectElementDetailsInterface, UObjectElementDetailsInterface::StaticClass, TEXT("UObjectElementDetailsInterface"), &Z_Registration_Info_UClass_UObjectElementDetailsInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectElementDetailsInterface), 2766743731U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Object_ObjectElementDetailsInterface_h_959583836(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Object_ObjectElementDetailsInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Object_ObjectElementDetailsInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
