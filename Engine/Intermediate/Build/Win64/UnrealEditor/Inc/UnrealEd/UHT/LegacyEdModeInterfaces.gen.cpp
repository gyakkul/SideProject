// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Public/Tools/LegacyEdModeInterfaces.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLegacyEdModeInterfaces() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UNREALED_API UClass* Z_Construct_UClass_ULegacyEdModeDrawHelperInterface();
	UNREALED_API UClass* Z_Construct_UClass_ULegacyEdModeDrawHelperInterface_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_ULegacyEdModeSelectInterface();
	UNREALED_API UClass* Z_Construct_UClass_ULegacyEdModeSelectInterface_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_ULegacyEdModeToolInterface();
	UNREALED_API UClass* Z_Construct_UClass_ULegacyEdModeToolInterface_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_ULegacyEdModeViewportInterface();
	UNREALED_API UClass* Z_Construct_UClass_ULegacyEdModeViewportInterface_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_ULegacyEdModeWidgetInterface();
	UNREALED_API UClass* Z_Construct_UClass_ULegacyEdModeWidgetInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	void ULegacyEdModeSelectInterface::StaticRegisterNativesULegacyEdModeSelectInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULegacyEdModeSelectInterface);
	UClass* Z_Construct_UClass_ULegacyEdModeSelectInterface_NoRegister()
	{
		return ULegacyEdModeSelectInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULegacyEdModeSelectInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULegacyEdModeSelectInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegacyEdModeSelectInterface_Statics::Class_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Tools/LegacyEdModeInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULegacyEdModeSelectInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILegacyEdModeSelectInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULegacyEdModeSelectInterface_Statics::ClassParams = {
		&ULegacyEdModeSelectInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULegacyEdModeSelectInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyEdModeSelectInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULegacyEdModeSelectInterface()
	{
		if (!Z_Registration_Info_UClass_ULegacyEdModeSelectInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULegacyEdModeSelectInterface.OuterSingleton, Z_Construct_UClass_ULegacyEdModeSelectInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULegacyEdModeSelectInterface.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<ULegacyEdModeSelectInterface>()
	{
		return ULegacyEdModeSelectInterface::StaticClass();
	}
	ULegacyEdModeSelectInterface::ULegacyEdModeSelectInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULegacyEdModeSelectInterface);
	ULegacyEdModeSelectInterface::~ULegacyEdModeSelectInterface() {}
	void ULegacyEdModeWidgetInterface::StaticRegisterNativesULegacyEdModeWidgetInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULegacyEdModeWidgetInterface);
	UClass* Z_Construct_UClass_ULegacyEdModeWidgetInterface_NoRegister()
	{
		return ULegacyEdModeWidgetInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULegacyEdModeWidgetInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULegacyEdModeWidgetInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegacyEdModeWidgetInterface_Statics::Class_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Tools/LegacyEdModeInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULegacyEdModeWidgetInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILegacyEdModeWidgetInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULegacyEdModeWidgetInterface_Statics::ClassParams = {
		&ULegacyEdModeWidgetInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULegacyEdModeWidgetInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyEdModeWidgetInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULegacyEdModeWidgetInterface()
	{
		if (!Z_Registration_Info_UClass_ULegacyEdModeWidgetInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULegacyEdModeWidgetInterface.OuterSingleton, Z_Construct_UClass_ULegacyEdModeWidgetInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULegacyEdModeWidgetInterface.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<ULegacyEdModeWidgetInterface>()
	{
		return ULegacyEdModeWidgetInterface::StaticClass();
	}
	ULegacyEdModeWidgetInterface::ULegacyEdModeWidgetInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULegacyEdModeWidgetInterface);
	ULegacyEdModeWidgetInterface::~ULegacyEdModeWidgetInterface() {}
	void ULegacyEdModeToolInterface::StaticRegisterNativesULegacyEdModeToolInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULegacyEdModeToolInterface);
	UClass* Z_Construct_UClass_ULegacyEdModeToolInterface_NoRegister()
	{
		return ULegacyEdModeToolInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULegacyEdModeToolInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULegacyEdModeToolInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegacyEdModeToolInterface_Statics::Class_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Tools/LegacyEdModeInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULegacyEdModeToolInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILegacyEdModeToolInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULegacyEdModeToolInterface_Statics::ClassParams = {
		&ULegacyEdModeToolInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULegacyEdModeToolInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyEdModeToolInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULegacyEdModeToolInterface()
	{
		if (!Z_Registration_Info_UClass_ULegacyEdModeToolInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULegacyEdModeToolInterface.OuterSingleton, Z_Construct_UClass_ULegacyEdModeToolInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULegacyEdModeToolInterface.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<ULegacyEdModeToolInterface>()
	{
		return ULegacyEdModeToolInterface::StaticClass();
	}
	ULegacyEdModeToolInterface::ULegacyEdModeToolInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULegacyEdModeToolInterface);
	ULegacyEdModeToolInterface::~ULegacyEdModeToolInterface() {}
	void ULegacyEdModeDrawHelperInterface::StaticRegisterNativesULegacyEdModeDrawHelperInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULegacyEdModeDrawHelperInterface);
	UClass* Z_Construct_UClass_ULegacyEdModeDrawHelperInterface_NoRegister()
	{
		return ULegacyEdModeDrawHelperInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULegacyEdModeDrawHelperInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULegacyEdModeDrawHelperInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegacyEdModeDrawHelperInterface_Statics::Class_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Tools/LegacyEdModeInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULegacyEdModeDrawHelperInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILegacyEdModeDrawHelperInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULegacyEdModeDrawHelperInterface_Statics::ClassParams = {
		&ULegacyEdModeDrawHelperInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULegacyEdModeDrawHelperInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyEdModeDrawHelperInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULegacyEdModeDrawHelperInterface()
	{
		if (!Z_Registration_Info_UClass_ULegacyEdModeDrawHelperInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULegacyEdModeDrawHelperInterface.OuterSingleton, Z_Construct_UClass_ULegacyEdModeDrawHelperInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULegacyEdModeDrawHelperInterface.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<ULegacyEdModeDrawHelperInterface>()
	{
		return ULegacyEdModeDrawHelperInterface::StaticClass();
	}
	ULegacyEdModeDrawHelperInterface::ULegacyEdModeDrawHelperInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULegacyEdModeDrawHelperInterface);
	ULegacyEdModeDrawHelperInterface::~ULegacyEdModeDrawHelperInterface() {}
	void ULegacyEdModeViewportInterface::StaticRegisterNativesULegacyEdModeViewportInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULegacyEdModeViewportInterface);
	UClass* Z_Construct_UClass_ULegacyEdModeViewportInterface_NoRegister()
	{
		return ULegacyEdModeViewportInterface::StaticClass();
	}
	struct Z_Construct_UClass_ULegacyEdModeViewportInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULegacyEdModeViewportInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULegacyEdModeViewportInterface_Statics::Class_MetaDataParams[] = {
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Tools/LegacyEdModeInterfaces.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULegacyEdModeViewportInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ILegacyEdModeViewportInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULegacyEdModeViewportInterface_Statics::ClassParams = {
		&ULegacyEdModeViewportInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ULegacyEdModeViewportInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULegacyEdModeViewportInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULegacyEdModeViewportInterface()
	{
		if (!Z_Registration_Info_UClass_ULegacyEdModeViewportInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULegacyEdModeViewportInterface.OuterSingleton, Z_Construct_UClass_ULegacyEdModeViewportInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULegacyEdModeViewportInterface.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<ULegacyEdModeViewportInterface>()
	{
		return ULegacyEdModeViewportInterface::StaticClass();
	}
	ULegacyEdModeViewportInterface::ULegacyEdModeViewportInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULegacyEdModeViewportInterface);
	ULegacyEdModeViewportInterface::~ULegacyEdModeViewportInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tools_LegacyEdModeInterfaces_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tools_LegacyEdModeInterfaces_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULegacyEdModeSelectInterface, ULegacyEdModeSelectInterface::StaticClass, TEXT("ULegacyEdModeSelectInterface"), &Z_Registration_Info_UClass_ULegacyEdModeSelectInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULegacyEdModeSelectInterface), 3415642726U) },
		{ Z_Construct_UClass_ULegacyEdModeWidgetInterface, ULegacyEdModeWidgetInterface::StaticClass, TEXT("ULegacyEdModeWidgetInterface"), &Z_Registration_Info_UClass_ULegacyEdModeWidgetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULegacyEdModeWidgetInterface), 3776018236U) },
		{ Z_Construct_UClass_ULegacyEdModeToolInterface, ULegacyEdModeToolInterface::StaticClass, TEXT("ULegacyEdModeToolInterface"), &Z_Registration_Info_UClass_ULegacyEdModeToolInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULegacyEdModeToolInterface), 181985289U) },
		{ Z_Construct_UClass_ULegacyEdModeDrawHelperInterface, ULegacyEdModeDrawHelperInterface::StaticClass, TEXT("ULegacyEdModeDrawHelperInterface"), &Z_Registration_Info_UClass_ULegacyEdModeDrawHelperInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULegacyEdModeDrawHelperInterface), 3038493219U) },
		{ Z_Construct_UClass_ULegacyEdModeViewportInterface, ULegacyEdModeViewportInterface::StaticClass, TEXT("ULegacyEdModeViewportInterface"), &Z_Registration_Info_UClass_ULegacyEdModeViewportInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULegacyEdModeViewportInterface), 3238461248U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tools_LegacyEdModeInterfaces_h_2460815151(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tools_LegacyEdModeInterfaces_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Public_Tools_LegacyEdModeInterfaces_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
