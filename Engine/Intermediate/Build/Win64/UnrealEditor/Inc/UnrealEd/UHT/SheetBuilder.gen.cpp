// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../Editor/UnrealEd/Classes/Builders/SheetBuilder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSheetBuilder() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_UEditorBrushBuilder();
	UNREALED_API UClass* Z_Construct_UClass_USheetBuilder();
	UNREALED_API UClass* Z_Construct_UClass_USheetBuilder_NoRegister();
	UNREALED_API UEnum* Z_Construct_UEnum_UnrealEd_ESheetAxis();
	UPackage* Z_Construct_UPackage__Script_UnrealEd();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESheetAxis;
	static UEnum* ESheetAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESheetAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESheetAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UnrealEd_ESheetAxis, (UObject*)Z_Construct_UPackage__Script_UnrealEd(), TEXT("ESheetAxis"));
		}
		return Z_Registration_Info_UEnum_ESheetAxis.OuterSingleton;
	}
	template<> UNREALED_API UEnum* StaticEnum<ESheetAxis>()
	{
		return ESheetAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_UnrealEd_ESheetAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UnrealEd_ESheetAxis_Statics::Enumerators[] = {
		{ "AX_Horizontal", (int64)AX_Horizontal },
		{ "AX_XAxis", (int64)AX_XAxis },
		{ "AX_YAxis", (int64)AX_YAxis },
		{ "AX_MAX", (int64)AX_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UnrealEd_ESheetAxis_Statics::Enum_MetaDataParams[] = {
		{ "AX_Horizontal.Name", "AX_Horizontal" },
		{ "AX_MAX.Name", "AX_MAX" },
		{ "AX_XAxis.Name", "AX_XAxis" },
		{ "AX_YAxis.Name", "AX_YAxis" },
		{ "ModuleRelativePath", "Classes/Builders/SheetBuilder.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UnrealEd_ESheetAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UnrealEd,
		nullptr,
		"ESheetAxis",
		"ESheetAxis",
		Z_Construct_UEnum_UnrealEd_ESheetAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ESheetAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_UnrealEd_ESheetAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UnrealEd_ESheetAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UnrealEd_ESheetAxis()
	{
		if (!Z_Registration_Info_UEnum_ESheetAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESheetAxis.InnerSingleton, Z_Construct_UEnum_UnrealEd_ESheetAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESheetAxis.InnerSingleton;
	}
	void USheetBuilder::StaticRegisterNativesUSheetBuilder()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USheetBuilder);
	UClass* Z_Construct_UClass_USheetBuilder_NoRegister()
	{
		return USheetBuilder::StaticClass();
	}
	struct Z_Construct_UClass_USheetBuilder_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_X;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XSegments_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_XSegments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YSegments_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_YSegments;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Axis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GroupName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GroupName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USheetBuilder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEditorBrushBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealEd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USheetBuilder_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "BrushSettings" },
		{ "DisplayName", "Plane" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "Builders/SheetBuilder.h" },
		{ "ModuleRelativePath", "Classes/Builders/SheetBuilder.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USheetBuilder_Statics::NewProp_X_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Builders/SheetBuilder.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USheetBuilder_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USheetBuilder, X), METADATA_PARAMS(Z_Construct_UClass_USheetBuilder_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USheetBuilder_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USheetBuilder_Statics::NewProp_Y_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Builders/SheetBuilder.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USheetBuilder_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USheetBuilder, Y), METADATA_PARAMS(Z_Construct_UClass_USheetBuilder_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USheetBuilder_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USheetBuilder_Statics::NewProp_XSegments_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Builders/SheetBuilder.h" },
		{ "UIMax", "20" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USheetBuilder_Statics::NewProp_XSegments = { "XSegments", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USheetBuilder, XSegments), METADATA_PARAMS(Z_Construct_UClass_USheetBuilder_Statics::NewProp_XSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USheetBuilder_Statics::NewProp_XSegments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USheetBuilder_Statics::NewProp_YSegments_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ClampMax", "100" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Classes/Builders/SheetBuilder.h" },
		{ "UIMax", "20" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USheetBuilder_Statics::NewProp_YSegments = { "YSegments", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USheetBuilder, YSegments), METADATA_PARAMS(Z_Construct_UClass_USheetBuilder_Statics::NewProp_YSegments_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USheetBuilder_Statics::NewProp_YSegments_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USheetBuilder_Statics::NewProp_Axis_MetaData[] = {
		{ "Category", "BrushSettings" },
		{ "ModuleRelativePath", "Classes/Builders/SheetBuilder.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USheetBuilder_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USheetBuilder, Axis), Z_Construct_UEnum_UnrealEd_ESheetAxis, METADATA_PARAMS(Z_Construct_UClass_USheetBuilder_Statics::NewProp_Axis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USheetBuilder_Statics::NewProp_Axis_MetaData)) }; // 4243188790
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USheetBuilder_Statics::NewProp_GroupName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Builders/SheetBuilder.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USheetBuilder_Statics::NewProp_GroupName = { "GroupName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USheetBuilder, GroupName), METADATA_PARAMS(Z_Construct_UClass_USheetBuilder_Statics::NewProp_GroupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USheetBuilder_Statics::NewProp_GroupName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USheetBuilder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USheetBuilder_Statics::NewProp_X,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USheetBuilder_Statics::NewProp_Y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USheetBuilder_Statics::NewProp_XSegments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USheetBuilder_Statics::NewProp_YSegments,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USheetBuilder_Statics::NewProp_Axis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USheetBuilder_Statics::NewProp_GroupName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USheetBuilder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USheetBuilder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USheetBuilder_Statics::ClassParams = {
		&USheetBuilder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USheetBuilder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USheetBuilder_Statics::PropPointers),
		0,
		0x000810A0u,
		METADATA_PARAMS(Z_Construct_UClass_USheetBuilder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USheetBuilder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USheetBuilder()
	{
		if (!Z_Registration_Info_UClass_USheetBuilder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USheetBuilder.OuterSingleton, Z_Construct_UClass_USheetBuilder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USheetBuilder.OuterSingleton;
	}
	template<> UNREALED_API UClass* StaticClass<USheetBuilder>()
	{
		return USheetBuilder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USheetBuilder);
	USheetBuilder::~USheetBuilder() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_Statics::EnumInfo[] = {
		{ ESheetAxis_StaticEnum, TEXT("ESheetAxis"), &Z_Registration_Info_UEnum_ESheetAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4243188790U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USheetBuilder, USheetBuilder::StaticClass, TEXT("USheetBuilder"), &Z_Registration_Info_UClass_USheetBuilder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USheetBuilder), 497280700U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_3616951464(TEXT("/Script/UnrealEd"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_UnrealEd_Classes_Builders_SheetBuilder_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
