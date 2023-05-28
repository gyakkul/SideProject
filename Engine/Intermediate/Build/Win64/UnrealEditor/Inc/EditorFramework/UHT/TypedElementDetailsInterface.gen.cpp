// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/Interfaces/TypedElementDetailsInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementDetailsInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDetailsInterface();
	EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDetailsInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_EditorFramework();
// End Cross Module References
	void UTypedElementDetailsInterface::StaticRegisterNativesUTypedElementDetailsInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementDetailsInterface);
	UClass* Z_Construct_UClass_UTypedElementDetailsInterface_NoRegister()
	{
		return UTypedElementDetailsInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementDetailsInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementDetailsInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_EditorFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementDetailsInterface_Statics::Class_MetaDataParams[] = {
		{ "CannotImplementInterfaceInBlueprint", "" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementDetailsInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementDetailsInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITypedElementDetailsInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementDetailsInterface_Statics::ClassParams = {
		&UTypedElementDetailsInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTypedElementDetailsInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementDetailsInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypedElementDetailsInterface()
	{
		if (!Z_Registration_Info_UClass_UTypedElementDetailsInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementDetailsInterface.OuterSingleton, Z_Construct_UClass_UTypedElementDetailsInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementDetailsInterface.OuterSingleton;
	}
	template<> EDITORFRAMEWORK_API UClass* StaticClass<UTypedElementDetailsInterface>()
	{
		return UTypedElementDetailsInterface::StaticClass();
	}
	UTypedElementDetailsInterface::UTypedElementDetailsInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementDetailsInterface);
	UTypedElementDetailsInterface::~UTypedElementDetailsInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Elements_Interfaces_TypedElementDetailsInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Elements_Interfaces_TypedElementDetailsInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementDetailsInterface, UTypedElementDetailsInterface::StaticClass, TEXT("UTypedElementDetailsInterface"), &Z_Registration_Info_UClass_UTypedElementDetailsInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementDetailsInterface), 3783908826U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Elements_Interfaces_TypedElementDetailsInterface_h_612732128(TEXT("/Script/EditorFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Elements_Interfaces_TypedElementDetailsInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_EditorFramework_Public_Elements_Interfaces_TypedElementDetailsInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
