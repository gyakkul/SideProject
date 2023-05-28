// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataInterfaceLandscape.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceLandscape() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceLandscape();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceLandscape_NoRegister();
	NIAGARA_API UEnum* Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENDILandscape_SourceMode;
	static UEnum* ENDILandscape_SourceMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENDILandscape_SourceMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENDILandscape_SourceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("ENDILandscape_SourceMode"));
		}
		return Z_Registration_Info_UEnum_ENDILandscape_SourceMode.OuterSingleton;
	}
	template<> NIAGARA_API UEnum* StaticEnum<ENDILandscape_SourceMode>()
	{
		return ENDILandscape_SourceMode_StaticEnum();
	}
	struct Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode_Statics::Enumerators[] = {
		{ "ENDILandscape_SourceMode::Default", (int64)ENDILandscape_SourceMode::Default },
		{ "ENDILandscape_SourceMode::Source", (int64)ENDILandscape_SourceMode::Source },
		{ "ENDILandscape_SourceMode::AttachParent", (int64)ENDILandscape_SourceMode::AttachParent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode_Statics::Enum_MetaDataParams[] = {
		{ "AttachParent.Comment", "/**\n\x09Only use the parent actor or component the system is attached to.\n\x09*/" },
		{ "AttachParent.Name", "ENDILandscape_SourceMode::AttachParent" },
		{ "AttachParent.ToolTip", "Only use the parent actor or component the system is attached to." },
		{ "Default.Comment", "/**\n\x09""Default behavior.\n\x09- Use \"Source\" when explicitly specified.\n\x09- When no source is specified, fall back on attached actor or component or world.\n\x09*/" },
		{ "Default.Name", "ENDILandscape_SourceMode::Default" },
		{ "Default.ToolTip", "Default behavior.\n- Use \"Source\" when explicitly specified.\n- When no source is specified, fall back on attached actor or component or world." },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceLandscape.h" },
		{ "Source.Comment", "/**\n\x09Only use \"Source\".\n\x09*/" },
		{ "Source.Name", "ENDILandscape_SourceMode::Source" },
		{ "Source.ToolTip", "Only use \"Source\"." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		"ENDILandscape_SourceMode",
		"ENDILandscape_SourceMode",
		Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode()
	{
		if (!Z_Registration_Info_UEnum_ENDILandscape_SourceMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENDILandscape_SourceMode.InnerSingleton, Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENDILandscape_SourceMode.InnerSingleton;
	}
	void UNiagaraDataInterfaceLandscape::StaticRegisterNativesUNiagaraDataInterfaceLandscape()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceLandscape);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceLandscape_NoRegister()
	{
		return UNiagaraDataInterfaceLandscape::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceLandscape_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SourceLandscape;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SourceMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SourceMode;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PhysicalMaterials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalMaterials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PhysicalMaterials;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::Class_MetaDataParams[] = {
		{ "Category", "Landscape" },
		{ "Comment", "/** Data Interface allowing sampling of a Landscape */" },
		{ "DisplayName", "Landscape Sample" },
		{ "IncludePath", "NiagaraDataInterfaceLandscape.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceLandscape.h" },
		{ "ToolTip", "Data Interface allowing sampling of a Landscape" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceLandscape_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceLandscape.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceLandscape = { "SourceLandscape", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceLandscape, SourceLandscape), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceLandscape_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceLandscape_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceMode_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceLandscape.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceMode = { "SourceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceLandscape, SourceMode), Z_Construct_UEnum_Niagara_ENDILandscape_SourceMode, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceMode_MetaData)) }; // 2936677960
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_PhysicalMaterials_Inner = { "PhysicalMaterials", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_PhysicalMaterials_MetaData[] = {
		{ "Category", "Landscape" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceLandscape.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_PhysicalMaterials = { "PhysicalMaterials", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceLandscape, PhysicalMaterials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_PhysicalMaterials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_PhysicalMaterials_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceLandscape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_SourceMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_PhysicalMaterials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::NewProp_PhysicalMaterials,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceLandscape>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::ClassParams = {
		&UNiagaraDataInterfaceLandscape::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceLandscape()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceLandscape.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceLandscape.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceLandscape_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceLandscape.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceLandscape>()
	{
		return UNiagaraDataInterfaceLandscape::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceLandscape);
	UNiagaraDataInterfaceLandscape::~UNiagaraDataInterfaceLandscape() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_Statics::EnumInfo[] = {
		{ ENDILandscape_SourceMode_StaticEnum, TEXT("ENDILandscape_SourceMode"), &Z_Registration_Info_UEnum_ENDILandscape_SourceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2936677960U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceLandscape, UNiagaraDataInterfaceLandscape::StaticClass, TEXT("UNiagaraDataInterfaceLandscape"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceLandscape, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceLandscape), 3804138104U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_2862219188(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceLandscape_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
