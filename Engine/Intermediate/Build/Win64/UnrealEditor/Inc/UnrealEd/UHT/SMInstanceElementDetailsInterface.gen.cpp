// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Elements/SMInstance/SMInstanceElementDetailsInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSMInstanceElementDetailsInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	EDITORFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDetailsInterface_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_USMInstanceElementDetailsInterface();
	UNREALED_API UClass* Z_Construct_UClass_USMInstanceElementDetailsInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void USMInstanceElementDetailsInterface::StaticRegisterNativesUSMInstanceElementDetailsInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USMInstanceElementDetailsInterface);
	UClass* Z_Construct_UClass_USMInstanceElementDetailsInterface_NoRegister()
	{
		return USMInstanceElementDetailsInterface::StaticClass();
	}
	struct Z_Construct_UClass_USMInstanceElementDetailsInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USMInstanceElementDetailsInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USMInstanceElementDetailsInterface_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Elements/SMInstance/SMInstanceElementDetailsInterface.h" },
		{ "ModuleRelativePath", "Public/Elements/SMInstance/SMInstanceElementDetailsInterface.h" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_USMInstanceElementDetailsInterface_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UTypedElementDetailsInterface_NoRegister, (int32)VTABLE_OFFSET(USMInstanceElementDetailsInterface, ITypedElementDetailsInterface), false },  // 3783908826
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USMInstanceElementDetailsInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USMInstanceElementDetailsInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USMInstanceElementDetailsInterface_Statics::ClassParams = {
		&USMInstanceElementDetailsInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USMInstanceElementDetailsInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USMInstanceElementDetailsInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USMInstanceElementDetailsInterface()
	{
		if (!Z_Registration_Info_UClass_USMInstanceElementDetailsInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USMInstanceElementDetailsInterface.OuterSingleton, Z_Construct_UClass_USMInstanceElementDetailsInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USMInstanceElementDetailsInterface.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<USMInstanceElementDetailsInterface>()
	{
		return USMInstanceElementDetailsInterface::StaticClass();
	}
	USMInstanceElementDetailsInterface::USMInstanceElementDetailsInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USMInstanceElementDetailsInterface);
	USMInstanceElementDetailsInterface::~USMInstanceElementDetailsInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementDetailsInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementDetailsInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USMInstanceElementDetailsInterface, USMInstanceElementDetailsInterface::StaticClass, TEXT("USMInstanceElementDetailsInterface"), &Z_Registration_Info_UClass_USMInstanceElementDetailsInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USMInstanceElementDetailsInterface), 3619465867U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementDetailsInterface_h_3467375209(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementDetailsInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Elements_SMInstance_SMInstanceElementDetailsInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
