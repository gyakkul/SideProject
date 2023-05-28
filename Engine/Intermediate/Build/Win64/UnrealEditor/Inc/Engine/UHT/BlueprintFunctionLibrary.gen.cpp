// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlueprintFunctionLibrary() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UBlueprintFunctionLibrary::StaticRegisterNativesUBlueprintFunctionLibrary()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlueprintFunctionLibrary);
	UClass* Z_Construct_UClass_UBlueprintFunctionLibrary_NoRegister()
	{
		return UBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "// This class is a base class for any function libraries exposed to blueprints.\n// Methods in subclasses are expected to be static, and no methods should be added to this base class.\n" },
		{ "IncludePath", "Kismet/BlueprintFunctionLibrary.h" },
		{ "ModuleRelativePath", "Classes/Kismet/BlueprintFunctionLibrary.h" },
		{ "ToolTip", "This class is a base class for any function libraries exposed to blueprints.\nMethods in subclasses are expected to be static, and no methods should be added to this base class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlueprintFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlueprintFunctionLibrary_Statics::ClassParams = {
		&UBlueprintFunctionLibrary::StaticClass,
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
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlueprintFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UBlueprintFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlueprintFunctionLibrary.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UBlueprintFunctionLibrary>()
	{
		return UBlueprintFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlueprintFunctionLibrary);
	UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlueprintFunctionLibrary, UBlueprintFunctionLibrary::StaticClass, TEXT("UBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlueprintFunctionLibrary), 2773262114U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_4143095144(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Kismet_BlueprintFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
