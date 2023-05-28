// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Elements/Actor/ActorElementDetailsInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorElementDetailsInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDetailsInterface_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UActorElementDetailsInterface();
	UNREALED_API UClass* Z_Construct_UClass_UActorElementDetailsInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void UActorElementDetailsInterface::StaticRegisterNativesUActorElementDetailsInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorElementDetailsInterface);
	UClass* Z_Construct_UClass_UActorElementDetailsInterface_NoRegister()
	{
		return UActorElementDetailsInterface::StaticClass();
	}
	struct Z_Construct_UClass_UActorElementDetailsInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorElementDetailsInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorElementDetailsInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/Actor/ActorElementDetailsInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/Actor/ActorElementDetailsInterface.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UActorElementDetailsInterface_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTypedElementDetailsInterface_NoRegister, (int32)VTABLE_OFFSET(UActorElementDetailsInterface, ITypedElementDetailsInterface), false },  // 3783908826
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorElementDetailsInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorElementDetailsInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorElementDetailsInterface_Statics::ClassParams = {
		&UActorElementDetailsInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UActorElementDetailsInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorElementDetailsInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorElementDetailsInterface()
	{
		if (!Z_Registration_Info_UClass_UActorElementDetailsInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorElementDetailsInterface.OuterSingleton, Z_Construct_UClass_UActorElementDetailsInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorElementDetailsInterface.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UActorElementDetailsInterface>()
	{
		return UActorElementDetailsInterface::StaticClass();
	}
	UActorElementDetailsInterface::UActorElementDetailsInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorElementDetailsInterface);
	UActorElementDetailsInterface::~UActorElementDetailsInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementDetailsInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementDetailsInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorElementDetailsInterface, UActorElementDetailsInterface::StaticClass, TEXT("UActorElementDetailsInterface"), &Z_Registration_Info_UClass_UActorElementDetailsInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorElementDetailsInterface), 2105688467U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementDetailsInterface_h_2402802075(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementDetailsInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_Actor_ActorElementDetailsInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
