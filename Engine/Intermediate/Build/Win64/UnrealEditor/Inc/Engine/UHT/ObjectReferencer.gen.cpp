// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/ObjectReferencer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectReferencer() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UObjectReferencer();
	ENGINE_API UClass* Z_Construct_UClass_UObjectReferencer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void UObjectReferencer::StaticRegisterNativesUObjectReferencer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectReferencer);
	UClass* Z_Construct_UClass_UObjectReferencer_NoRegister()
	{
		return UObjectReferencer::StaticClass();
	}
	struct Z_Construct_UClass_UObjectReferencer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReferencedObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferencedObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReferencedObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectReferencer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectReferencer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Engine/ObjectReferencer.h" },
		{ "ModuleRelativePath", "Classes/Engine/ObjectReferencer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UObjectReferencer_Statics::NewProp_ReferencedObjects_Inner = { "ReferencedObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectReferencer_Statics::NewProp_ReferencedObjects_MetaData[] = {
		{ "Category", "ObjectReferencer" },
		{ "Comment", "/** Array of objects being referenced. */" },
		{ "ModuleRelativePath", "Classes/Engine/ObjectReferencer.h" },
		{ "ToolTip", "Array of objects being referenced." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UObjectReferencer_Statics::NewProp_ReferencedObjects = { "ReferencedObjects", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UObjectReferencer, ReferencedObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UObjectReferencer_Statics::NewProp_ReferencedObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectReferencer_Statics::NewProp_ReferencedObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UObjectReferencer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReferencer_Statics::NewProp_ReferencedObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UObjectReferencer_Statics::NewProp_ReferencedObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectReferencer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectReferencer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectReferencer_Statics::ClassParams = {
		&UObjectReferencer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UObjectReferencer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UObjectReferencer_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectReferencer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectReferencer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectReferencer()
	{
		if (!Z_Registration_Info_UClass_UObjectReferencer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectReferencer.OuterSingleton, Z_Construct_UClass_UObjectReferencer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectReferencer.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UObjectReferencer>()
	{
		return UObjectReferencer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectReferencer);
	UObjectReferencer::~UObjectReferencer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectReferencer, UObjectReferencer::StaticClass, TEXT("UObjectReferencer"), &Z_Registration_Info_UClass_UObjectReferencer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectReferencer), 1158347104U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_800774357(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_ObjectReferencer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
