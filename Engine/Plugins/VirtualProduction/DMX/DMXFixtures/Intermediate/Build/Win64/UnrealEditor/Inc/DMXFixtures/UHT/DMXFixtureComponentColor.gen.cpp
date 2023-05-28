// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMXFixtureComponentColor.h"
#include "DMXAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXFixtureComponentColor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DMXFIXTURES_API UClass* Z_Construct_UClass_UDMXFixtureComponent();
	DMXFIXTURES_API UClass* Z_Construct_UClass_UDMXFixtureComponentColor();
	DMXFIXTURES_API UClass* Z_Construct_UClass_UDMXFixtureComponentColor_NoRegister();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXAttributeName();
	UPackage* Z_Construct_UPackage__Script_DMXFixtures();
// End Cross Module References
	struct DMXFixtureComponentColor_eventSetColorNoInterp_Parms
	{
		FLinearColor NewColor;
	};
	static FName NAME_UDMXFixtureComponentColor_SetColorNoInterp = FName(TEXT("SetColorNoInterp"));
	void UDMXFixtureComponentColor::SetColorNoInterp(FLinearColor const& NewColor)
	{
		DMXFixtureComponentColor_eventSetColorNoInterp_Parms Parms;
		Parms.NewColor=NewColor;
		ProcessEvent(FindFunctionChecked(NAME_UDMXFixtureComponentColor_SetColorNoInterp),&Parms);
	}
	void UDMXFixtureComponentColor::StaticRegisterNativesUDMXFixtureComponentColor()
	{
	}
	struct Z_Construct_UFunction_UDMXFixtureComponentColor_SetColorNoInterp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXFixtureComponentColor_SetColorNoInterp_Statics::NewProp_NewColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXFixtureComponentColor_SetColorNoInterp_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureComponentColor_eventSetColorNoInterp_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UDMXFixtureComponentColor_SetColorNoInterp_Statics::NewProp_NewColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponentColor_SetColorNoInterp_Statics::NewProp_NewColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXFixtureComponentColor_SetColorNoInterp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXFixtureComponentColor_SetColorNoInterp_Statics::NewProp_NewColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXFixtureComponentColor_SetColorNoInterp_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Sets the color of the component. Note DMX Fixture Component Color does not support interpolation */" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponentColor.h" },
		{ "ToolTip", "Sets the color of the component. Note DMX Fixture Component Color does not support interpolation" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXFixtureComponentColor_SetColorNoInterp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXFixtureComponentColor, nullptr, "SetColorNoInterp", nullptr, nullptr, sizeof(DMXFixtureComponentColor_eventSetColorNoInterp_Parms), Z_Construct_UFunction_UDMXFixtureComponentColor_SetColorNoInterp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponentColor_SetColorNoInterp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0CC20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXFixtureComponentColor_SetColorNoInterp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponentColor_SetColorNoInterp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXFixtureComponentColor_SetColorNoInterp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXFixtureComponentColor_SetColorNoInterp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXFixtureComponentColor);
	UClass* Z_Construct_UClass_UDMXFixtureComponentColor_NoRegister()
	{
		return UDMXFixtureComponentColor::StaticClass();
	}
	struct Z_Construct_UClass_UDMXFixtureComponentColor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXChannel1_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DMXChannel1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXChannel2_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DMXChannel2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXChannel3_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DMXChannel3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DMXChannel4_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DMXChannel4;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXFixtureComponentColor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDMXFixtureComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXFixtures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDMXFixtureComponentColor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDMXFixtureComponentColor_SetColorNoInterp, "SetColorNoInterp" }, // 3610506208
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXFixtureComponentColor_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "DMXFixtureComponent" },
		{ "Comment", "/**\n * Specific class to handle color mixing using 4 channels (rgb, cmy, rgbw).\n * Note, the color values are never interpolated.\n */" },
		{ "IncludePath", "DMXFixtureComponentColor.h" },
		{ "IsBlueprintBase", "TRUE" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponentColor.h" },
		{ "ToolTip", "Specific class to handle color mixing using 4 channels (rgb, cmy, rgbw).\nNote, the color values are never interpolated." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXFixtureComponentColor_Statics::NewProp_DMXChannel1_MetaData[] = {
		{ "Category", "DMX Channel" },
		{ "Comment", "//~ End DMXFixtureComponent interface\n" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponentColor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXFixtureComponentColor_Statics::NewProp_DMXChannel1 = { "DMXChannel1", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXFixtureComponentColor, DMXChannel1), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UClass_UDMXFixtureComponentColor_Statics::NewProp_DMXChannel1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixtureComponentColor_Statics::NewProp_DMXChannel1_MetaData)) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXFixtureComponentColor_Statics::NewProp_DMXChannel2_MetaData[] = {
		{ "Category", "DMX Channel" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponentColor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXFixtureComponentColor_Statics::NewProp_DMXChannel2 = { "DMXChannel2", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXFixtureComponentColor, DMXChannel2), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UClass_UDMXFixtureComponentColor_Statics::NewProp_DMXChannel2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixtureComponentColor_Statics::NewProp_DMXChannel2_MetaData)) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXFixtureComponentColor_Statics::NewProp_DMXChannel3_MetaData[] = {
		{ "Category", "DMX Channel" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponentColor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXFixtureComponentColor_Statics::NewProp_DMXChannel3 = { "DMXChannel3", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXFixtureComponentColor, DMXChannel3), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UClass_UDMXFixtureComponentColor_Statics::NewProp_DMXChannel3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixtureComponentColor_Statics::NewProp_DMXChannel3_MetaData)) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXFixtureComponentColor_Statics::NewProp_DMXChannel4_MetaData[] = {
		{ "Category", "DMX Channel" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponentColor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXFixtureComponentColor_Statics::NewProp_DMXChannel4 = { "DMXChannel4", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXFixtureComponentColor, DMXChannel4), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UClass_UDMXFixtureComponentColor_Statics::NewProp_DMXChannel4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixtureComponentColor_Statics::NewProp_DMXChannel4_MetaData)) }; // 2246266977
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXFixtureComponentColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXFixtureComponentColor_Statics::NewProp_DMXChannel1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXFixtureComponentColor_Statics::NewProp_DMXChannel2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXFixtureComponentColor_Statics::NewProp_DMXChannel3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXFixtureComponentColor_Statics::NewProp_DMXChannel4,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXFixtureComponentColor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXFixtureComponentColor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXFixtureComponentColor_Statics::ClassParams = {
		&UDMXFixtureComponentColor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDMXFixtureComponentColor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixtureComponentColor_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXFixtureComponentColor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixtureComponentColor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXFixtureComponentColor()
	{
		if (!Z_Registration_Info_UClass_UDMXFixtureComponentColor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXFixtureComponentColor.OuterSingleton, Z_Construct_UClass_UDMXFixtureComponentColor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXFixtureComponentColor.OuterSingleton;
	}
	template<> DMXFIXTURES_API UClass* StaticClass<UDMXFixtureComponentColor>()
	{
		return UDMXFixtureComponentColor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXFixtureComponentColor);
	UDMXFixtureComponentColor::~UDMXFixtureComponentColor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponentColor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponentColor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXFixtureComponentColor, UDMXFixtureComponentColor::StaticClass, TEXT("UDMXFixtureComponentColor"), &Z_Registration_Info_UClass_UDMXFixtureComponentColor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXFixtureComponentColor), 3907511397U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponentColor_h_3995629799(TEXT("/Script/DMXFixtures"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponentColor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponentColor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
