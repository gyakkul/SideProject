// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/BlendableInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlendableInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface();
	ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendableLocation();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBlendableLocation;
	static UEnum* EBlendableLocation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBlendableLocation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBlendableLocation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Engine_EBlendableLocation, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("EBlendableLocation"));
		}
		return Z_Registration_Info_UEnum_EBlendableLocation.OuterSingleton;
	}
	template<> ENGINE_API UEnum* StaticEnum<EBlendableLocation>()
	{
		return EBlendableLocation_StaticEnum();
	}
	struct Z_Construct_UEnum_Engine_EBlendableLocation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Engine_EBlendableLocation_Statics::Enumerators[] = {
		{ "BL_AfterTonemapping", (int64)BL_AfterTonemapping },
		{ "BL_BeforeTonemapping", (int64)BL_BeforeTonemapping },
		{ "BL_BeforeTranslucency", (int64)BL_BeforeTranslucency },
		{ "BL_ReplacingTonemapper", (int64)BL_ReplacingTonemapper },
		{ "BL_SSRInput", (int64)BL_SSRInput },
		{ "BL_MAX", (int64)BL_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Engine_EBlendableLocation_Statics::Enum_MetaDataParams[] = {
		{ "BL_AfterTonemapping.Comment", "/** Input0:former pass color, Input1:SeparateTranslucency. */" },
		{ "BL_AfterTonemapping.DisplayName", "After Tonemapping" },
		{ "BL_AfterTonemapping.Name", "BL_AfterTonemapping" },
		{ "BL_AfterTonemapping.ToolTip", "Input0:former pass color, Input1:SeparateTranslucency." },
		{ "BL_BeforeTonemapping.Comment", "/** Input0:former pass color, Input1:SeparateTranslucency. */" },
		{ "BL_BeforeTonemapping.DisplayName", "Before Tonemapping" },
		{ "BL_BeforeTonemapping.Name", "BL_BeforeTonemapping" },
		{ "BL_BeforeTonemapping.ToolTip", "Input0:former pass color, Input1:SeparateTranslucency." },
		{ "BL_BeforeTranslucency.Comment", "/** Input0:former pass color, Input1:SeparateTranslucency. */" },
		{ "BL_BeforeTranslucency.DisplayName", "Before Translucency" },
		{ "BL_BeforeTranslucency.Name", "BL_BeforeTranslucency" },
		{ "BL_BeforeTranslucency.ToolTip", "Input0:former pass color, Input1:SeparateTranslucency." },
		{ "BL_MAX.Name", "BL_MAX" },
		{ "BL_ReplacingTonemapper.Comment", "/**\n\x09* Input0:former pass color, Input1:SeparateTranslucency, Input2: BloomOutput\n\x09*/" },
		{ "BL_ReplacingTonemapper.DisplayName", "Replacing the Tonemapper" },
		{ "BL_ReplacingTonemapper.Name", "BL_ReplacingTonemapper" },
		{ "BL_ReplacingTonemapper.ToolTip", "Input0:former pass color, Input1:SeparateTranslucency, Input2: BloomOutput" },
		{ "BL_SSRInput.Comment", "/** Input0:former pass color. */" },
		{ "BL_SSRInput.DisplayName", "SSR Input" },
		{ "BL_SSRInput.Name", "BL_SSRInput" },
		{ "BL_SSRInput.ToolTip", "Input0:former pass color." },
		{ "Comment", "/** Where to place a material node in the post processing graph. */" },
		{ "ModuleRelativePath", "Classes/Engine/BlendableInterface.h" },
		{ "ToolTip", "Where to place a material node in the post processing graph." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Engine_EBlendableLocation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		"EBlendableLocation",
		"EBlendableLocation",
		Z_Construct_UEnum_Engine_EBlendableLocation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBlendableLocation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_Engine_EBlendableLocation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Engine_EBlendableLocation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Engine_EBlendableLocation()
	{
		if (!Z_Registration_Info_UEnum_EBlendableLocation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBlendableLocation.InnerSingleton, Z_Construct_UEnum_Engine_EBlendableLocation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBlendableLocation.InnerSingleton;
	}
	void UBlendableInterface::StaticRegisterNativesUBlendableInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlendableInterface);
	UClass* Z_Construct_UClass_UBlendableInterface_NoRegister()
	{
		return UBlendableInterface::StaticClass();
	}
	struct Z_Construct_UClass_UBlendableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlendableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlendableInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Engine/BlendableInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlendableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IBlendableInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlendableInterface_Statics::ClassParams = {
		&UBlendableInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBlendableInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlendableInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlendableInterface()
	{
		if (!Z_Registration_Info_UClass_UBlendableInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlendableInterface.OuterSingleton, Z_Construct_UClass_UBlendableInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBlendableInterface.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UBlendableInterface>()
	{
		return UBlendableInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlendableInterface);
	UBlendableInterface::~UBlendableInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_Statics::EnumInfo[] = {
		{ EBlendableLocation_StaticEnum, TEXT("EBlendableLocation"), &Z_Registration_Info_UEnum_EBlendableLocation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 328439591U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBlendableInterface, UBlendableInterface::StaticClass, TEXT("UBlendableInterface"), &Z_Registration_Info_UClass_UBlendableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlendableInterface), 3766320818U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_900282839(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_BlendableInterface_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
