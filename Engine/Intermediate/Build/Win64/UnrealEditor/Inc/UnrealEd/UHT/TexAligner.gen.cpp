// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/TexAligner/TexAligner.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTexAligner() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UNREALED_API UClass* Z_Construct_UClass_UTexAligner();
	UNREALED_API UClass* Z_Construct_UClass_UTexAligner_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ETexAlign();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETexAlign;
	static UEnum* ETexAlign_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETexAlign.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETexAlign.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ETexAlign, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ETexAlign"));
		}
		return Z_Registration_Info_UEnum_ETexAlign.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ETexAlign>()
	{
		return ETexAlign_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_ETexAlign_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_ETexAlign_Statics::Enumerators[] = {
		{ "TEXALIGN_None", (int64)TEXALIGN_None },
		{ "TEXALIGN_Default", (int64)TEXALIGN_Default },
		{ "TEXALIGN_Box", (int64)TEXALIGN_Box },
		{ "TEXALIGN_Planar", (int64)TEXALIGN_Planar },
		{ "TEXALIGN_Fit", (int64)TEXALIGN_Fit },
		{ "TEXALIGN_PlanarAuto", (int64)TEXALIGN_PlanarAuto },
		{ "TEXALIGN_PlanarWall", (int64)TEXALIGN_PlanarWall },
		{ "TEXALIGN_PlanarFloor", (int64)TEXALIGN_PlanarFloor },
		{ "TEXALIGN_MAX", (int64)TEXALIGN_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_ETexAlign_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Alignment types. */" },
		{ "ModuleRelativePath", "Classes/TexAligner/TexAligner.h" },
		{ "TEXALIGN_Box.Comment", "/** Aligns to best U and V axis based on polys normal. */" },
		{ "TEXALIGN_Box.Name", "TEXALIGN_Box" },
		{ "TEXALIGN_Box.ToolTip", "Aligns to best U and V axis based on polys normal." },
		{ "TEXALIGN_Default.Comment", "/** No special alignment (just derive from UV vectors). */" },
		{ "TEXALIGN_Default.Name", "TEXALIGN_Default" },
		{ "TEXALIGN_Default.ToolTip", "No special alignment (just derive from UV vectors)." },
		{ "TEXALIGN_Fit.Comment", "/** Fits texture to a polygon. */" },
		{ "TEXALIGN_Fit.Name", "TEXALIGN_Fit" },
		{ "TEXALIGN_Fit.ToolTip", "Fits texture to a polygon." },
		{ "TEXALIGN_MAX.Name", "TEXALIGN_MAX" },
		{ "TEXALIGN_None.Comment", "/** When passed to functions it means \"use whatever the aligners default is\". */" },
		{ "TEXALIGN_None.Name", "TEXALIGN_None" },
		{ "TEXALIGN_None.ToolTip", "When passed to functions it means \"use whatever the aligners default is\"." },
		{ "TEXALIGN_Planar.Comment", "/** Maps the poly to the axis it is closest to laying parallel to. */" },
		{ "TEXALIGN_Planar.Name", "TEXALIGN_Planar" },
		{ "TEXALIGN_Planar.ToolTip", "Maps the poly to the axis it is closest to laying parallel to." },
		{ "TEXALIGN_PlanarAuto.Comment", "/** Special version of TEXALIGN_Planar. */" },
		{ "TEXALIGN_PlanarAuto.Name", "TEXALIGN_PlanarAuto" },
		{ "TEXALIGN_PlanarAuto.ToolTip", "Special version of TEXALIGN_Planar." },
		{ "TEXALIGN_PlanarFloor.Comment", "/** Special version of TEXALIGN_Planar. */" },
		{ "TEXALIGN_PlanarFloor.Name", "TEXALIGN_PlanarFloor" },
		{ "TEXALIGN_PlanarFloor.ToolTip", "Special version of TEXALIGN_Planar." },
		{ "TEXALIGN_PlanarWall.Comment", "/** Special version of TEXALIGN_Planar. */" },
		{ "TEXALIGN_PlanarWall.Name", "TEXALIGN_PlanarWall" },
		{ "TEXALIGN_PlanarWall.ToolTip", "Special version of TEXALIGN_Planar." },
		{ "ToolTip", "Alignment types." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_ETexAlign_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"ETexAlign",
		"ETexAlign",
		Z_Construct_UEnum_UnrealEd_ETexAlign_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ETexAlign_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_ETexAlign_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ETexAlign_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_ETexAlign()
	{
		if (!Z_Registration_Info_UEnum_ETexAlign.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETexAlign.InnerSingleton, Z_Construct_UEnum_UnrealEd_ETexAlign_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETexAlign.InnerSingleton;
	}
	void UTexAligner::StaticRegisterNativesUTexAligner()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTexAligner);
	UClass* Z_Construct_UClass_UTexAligner_NoRegister()
	{
		return UTexAligner::StaticClass();
	}
	struct Z_Construct_UClass_UTexAligner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefTexAlign_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_DefTexAlign;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TAxis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UTile_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UTile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VTile_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VTile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Desc_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Desc;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTexAligner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexAligner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TexAligner/TexAligner.h" },
		{ "ModuleRelativePath", "Classes/TexAligner/TexAligner.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexAligner_Statics::NewProp_DefTexAlign_MetaData[] = {
		{ "Comment", "/** The default alignment this aligner represents. */" },
		{ "ModuleRelativePath", "Classes/TexAligner/TexAligner.h" },
		{ "ToolTip", "The default alignment this aligner represents." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexAligner_Statics::NewProp_DefTexAlign = { "DefTexAlign", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTexAligner, DefTexAlign), Z_Construct_UEnum_UnrealEd_ETexAlign, METADATA_PARAMS(Z_Construct_UClass_UTexAligner_Statics::NewProp_DefTexAlign_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexAligner_Statics::NewProp_DefTexAlign_MetaData)) }; // 1435084404
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexAligner_Statics::NewProp_TAxis_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TexAligner/TexAligner.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTexAligner_Statics::NewProp_TAxis = { "TAxis", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTexAligner, TAxis), nullptr, METADATA_PARAMS(Z_Construct_UClass_UTexAligner_Statics::NewProp_TAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexAligner_Statics::NewProp_TAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexAligner_Statics::NewProp_UTile_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TexAligner/TexAligner.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexAligner_Statics::NewProp_UTile = { "UTile", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTexAligner, UTile), METADATA_PARAMS(Z_Construct_UClass_UTexAligner_Statics::NewProp_UTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexAligner_Statics::NewProp_UTile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexAligner_Statics::NewProp_VTile_MetaData[] = {
		{ "ModuleRelativePath", "Classes/TexAligner/TexAligner.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTexAligner_Statics::NewProp_VTile = { "VTile", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTexAligner, VTile), METADATA_PARAMS(Z_Construct_UClass_UTexAligner_Statics::NewProp_VTile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexAligner_Statics::NewProp_VTile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTexAligner_Statics::NewProp_Desc_MetaData[] = {
		{ "Comment", "/** Description for the editor to display. */" },
		{ "ModuleRelativePath", "Classes/TexAligner/TexAligner.h" },
		{ "ToolTip", "Description for the editor to display." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UTexAligner_Statics::NewProp_Desc = { "Desc", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTexAligner, Desc), METADATA_PARAMS(Z_Construct_UClass_UTexAligner_Statics::NewProp_Desc_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTexAligner_Statics::NewProp_Desc_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTexAligner_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexAligner_Statics::NewProp_DefTexAlign,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexAligner_Statics::NewProp_TAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexAligner_Statics::NewProp_UTile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexAligner_Statics::NewProp_VTile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTexAligner_Statics::NewProp_Desc,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTexAligner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTexAligner>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTexAligner_Statics::ClassParams = {
		&UTexAligner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTexAligner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTexAligner_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTexAligner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTexAligner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTexAligner()
	{
		if (!Z_Registration_Info_UClass_UTexAligner.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTexAligner.OuterSingleton, Z_Construct_UClass_UTexAligner_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTexAligner.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<UTexAligner>()
	{
		return UTexAligner::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTexAligner);
	UTexAligner::~UTexAligner() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_Statics::EnumInfo[] = {
		{ ETexAlign_StaticEnum, TEXT("ETexAlign"), &Z_Registration_Info_UEnum_ETexAlign, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1435084404U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTexAligner, UTexAligner::StaticClass, TEXT("UTexAligner"), &Z_Registration_Info_UClass_UTexAligner, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTexAligner), 1096614038U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_2808596879(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_TexAligner_TexAligner_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
