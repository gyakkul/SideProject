// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h"
#include "../../AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvQueryTest_Dot() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Dot();
	AIMODULE_API UClass* Z_Construct_UClass_UEnvQueryTest_Dot_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EEnvTestDot();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FEnvDirection();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EEnvTestDot;
	static UEnum* EEnvTestDot_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EEnvTestDot.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EEnvTestDot.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_AIModule_EEnvTestDot, (UObject*)Z_Construct_UPackage__Script_AIModule(), TEXT("EEnvTestDot"));
		}
		return Z_Registration_Info_UEnum_EEnvTestDot.OuterSingleton;
	}
	template<> AIMODULE_API UEnum* StaticEnum<EEnvTestDot>()
	{
		return EEnvTestDot_StaticEnum();
	}
	struct Z_Construct_UEnum_AIModule_EEnvTestDot_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_AIModule_EEnvTestDot_Statics::Enumerators[] = {
		{ "EEnvTestDot::Dot3D", (int64)EEnvTestDot::Dot3D },
		{ "EEnvTestDot::Dot2D", (int64)EEnvTestDot::Dot2D },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_AIModule_EEnvTestDot_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Dot2D.DisplayName", "Dot 2D (Heading)" },
		{ "Dot2D.Name", "EEnvTestDot::Dot2D" },
		{ "Dot2D.Tooltip", "Dot Product in the XY-plane, which is equivalent to the cosine of the heading or yaw angle." },
		{ "Dot3D.DisplayName", "Dot (3D)" },
		{ "Dot3D.Name", "EEnvTestDot::Dot3D" },
		{ "Dot3D.Tooltip", "Fully 3D dot-product" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_AIModule_EEnvTestDot_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_AIModule,
		nullptr,
		"EEnvTestDot",
		"EEnvTestDot",
		Z_Construct_UEnum_AIModule_EEnvTestDot_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestDot_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_AIModule_EEnvTestDot_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_AIModule_EEnvTestDot_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_AIModule_EEnvTestDot()
	{
		if (!Z_Registration_Info_UEnum_EEnvTestDot.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EEnvTestDot.InnerSingleton, Z_Construct_UEnum_AIModule_EEnvTestDot_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EEnvTestDot.InnerSingleton;
	}
	void UEnvQueryTest_Dot::StaticRegisterNativesUEnvQueryTest_Dot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEnvQueryTest_Dot);
	UClass* Z_Construct_UClass_UEnvQueryTest_Dot_NoRegister()
	{
		return UEnvQueryTest_Dot::StaticClass();
	}
	struct Z_Construct_UClass_UEnvQueryTest_Dot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineA_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineA;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LineB_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LineB;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TestMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TestMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAbsoluteValue_MetaData[];
#endif
		static void NewProp_bAbsoluteValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAbsoluteValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEnvQueryTest_Dot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEnvQueryTest,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Dot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentQuery/Tests/EnvQueryTest_Dot.h" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_LineA_MetaData[] = {
		{ "Category", "Dot" },
		{ "Comment", "/** defines direction of first line used by test */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h" },
		{ "ToolTip", "defines direction of first line used by test" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_LineA = { "LineA", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest_Dot, LineA), Z_Construct_UScriptStruct_FEnvDirection, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_LineA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_LineA_MetaData)) }; // 3711099915
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_LineB_MetaData[] = {
		{ "Category", "Dot" },
		{ "Comment", "/** defines direction of second line used by test */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h" },
		{ "ToolTip", "defines direction of second line used by test" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_LineB = { "LineB", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest_Dot, LineB), Z_Construct_UScriptStruct_FEnvDirection, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_LineB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_LineB_MetaData)) }; // 3711099915
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_TestMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_TestMode_MetaData[] = {
		{ "Category", "Dot" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_TestMode = { "TestMode", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UEnvQueryTest_Dot, TestMode), Z_Construct_UEnum_AIModule_EEnvTestDot, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_TestMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_TestMode_MetaData)) }; // 1224468048
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_bAbsoluteValue_MetaData[] = {
		{ "Category", "Dot" },
		{ "Comment", "/** If true, this test uses the absolute value of the dot product rather than the dot product itself.  Useful\n\x09  * when you want to compare \"how lateral\" something is.  I.E. values closer to zero are further to the side, \n\x09  * and values closer to 1 are more in front or behind (without distinguishing forward/backward).\n\x09  */" },
		{ "ModuleRelativePath", "Classes/EnvironmentQuery/Tests/EnvQueryTest_Dot.h" },
		{ "ToolTip", "If true, this test uses the absolute value of the dot product rather than the dot product itself.  Useful\nwhen you want to compare \"how lateral\" something is.  I.E. values closer to zero are further to the side,\nand values closer to 1 are more in front or behind (without distinguishing forward/backward)." },
	};
#endif
	void Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_bAbsoluteValue_SetBit(void* Obj)
	{
		((UEnvQueryTest_Dot*)Obj)->bAbsoluteValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_bAbsoluteValue = { "bAbsoluteValue", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UEnvQueryTest_Dot), &Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_bAbsoluteValue_SetBit, METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_bAbsoluteValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_bAbsoluteValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEnvQueryTest_Dot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_LineA,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_LineB,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_TestMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_TestMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEnvQueryTest_Dot_Statics::NewProp_bAbsoluteValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEnvQueryTest_Dot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEnvQueryTest_Dot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UEnvQueryTest_Dot_Statics::ClassParams = {
		&UEnvQueryTest_Dot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEnvQueryTest_Dot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Dot_Statics::PropPointers),
		0,
		0x008800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEnvQueryTest_Dot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEnvQueryTest_Dot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEnvQueryTest_Dot()
	{
		if (!Z_Registration_Info_UClass_UEnvQueryTest_Dot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEnvQueryTest_Dot.OuterSingleton, Z_Construct_UClass_UEnvQueryTest_Dot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UEnvQueryTest_Dot.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UEnvQueryTest_Dot>()
	{
		return UEnvQueryTest_Dot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEnvQueryTest_Dot);
	UEnvQueryTest_Dot::~UEnvQueryTest_Dot() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_Statics::EnumInfo[] = {
		{ EEnvTestDot_StaticEnum, TEXT("EEnvTestDot"), &Z_Registration_Info_UEnum_EEnvTestDot, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1224468048U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UEnvQueryTest_Dot, UEnvQueryTest_Dot::StaticClass, TEXT("UEnvQueryTest_Dot"), &Z_Registration_Info_UClass_UEnvQueryTest_Dot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEnvQueryTest_Dot), 1751938725U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_1351496931(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_EnvironmentQuery_Tests_EnvQueryTest_Dot_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
