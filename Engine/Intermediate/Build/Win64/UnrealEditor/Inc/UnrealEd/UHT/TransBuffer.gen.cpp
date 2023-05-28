// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Editor/TransBuffer.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTransBuffer() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UTransactor();
	UNREALED_API UClass* Z_Construct_UClass_UTransBuffer();
	UNREALED_API UClass* Z_Construct_UClass_UTransBuffer_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UTransBuffer::StaticRegisterNativesUTransBuffer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTransBuffer);
	UClass* Z_Construct_UClass_UTransBuffer_NoRegister()
	{
		return UTransBuffer::StaticClass();
	}
	struct Z_Construct_UClass_UTransBuffer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTransBuffer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTransactor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTransBuffer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Editor/TransBuffer.h" },
		{ "ModuleRelativePath", "Classes/Editor/TransBuffer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTransBuffer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTransBuffer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTransBuffer_Statics::ClassParams = {
		&UTransBuffer::StaticClass,
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
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UTransBuffer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTransBuffer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTransBuffer()
	{
		if (!Z_Registration_Info_UClass_UTransBuffer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTransBuffer.OuterSingleton, Z_Construct_UClass_UTransBuffer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTransBuffer.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UTransBuffer>()
	{
		return UTransBuffer::StaticClass();
	}
	UTransBuffer::UTransBuffer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTransBuffer);
	UTransBuffer::~UTransBuffer() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UTransBuffer)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTransBuffer, UTransBuffer::StaticClass, TEXT("UTransBuffer"), &Z_Registration_Info_UClass_UTransBuffer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTransBuffer), 1264863401U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_1992005046(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Editor_TransBuffer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
