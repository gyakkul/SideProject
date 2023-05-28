// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/SafeZoneSlot.h"
#include "Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSafeZoneSlot() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UMG_API UClass* Z_Construct_UClass_USafeZoneSlot();
	UMG_API UClass* Z_Construct_UClass_USafeZoneSlot_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void USafeZoneSlot::GetbIsTitleSafe_WrapperImpl(const void* Object, void* OutValue)
	{
		const USafeZoneSlot* Obj = (const USafeZoneSlot*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->IsTitleSafe();
	}
	void USafeZoneSlot::SetbIsTitleSafe_WrapperImpl(void* Object, const void* InValue)
	{
		USafeZoneSlot* Obj = (USafeZoneSlot*)Object;
		bool& Value = *(bool*)InValue;
		Obj->SetIsTitleSafe(Value);
	}
	void USafeZoneSlot::GetSafeAreaScale_WrapperImpl(const void* Object, void* OutValue)
	{
		const USafeZoneSlot* Obj = (const USafeZoneSlot*)Object;
		FMargin& Result = *(FMargin*)OutValue;
		Result = (FMargin)Obj->GetSafeAreaScale();
	}
	void USafeZoneSlot::SetSafeAreaScale_WrapperImpl(void* Object, const void* InValue)
	{
		USafeZoneSlot* Obj = (USafeZoneSlot*)Object;
		FMargin& Value = *(FMargin*)InValue;
		Obj->SetSafeAreaScale(Value);
	}
	void USafeZoneSlot::GetHAlign_WrapperImpl(const void* Object, void* OutValue)
	{
		const USafeZoneSlot* Obj = (const USafeZoneSlot*)Object;
		EHorizontalAlignment& Result = *(EHorizontalAlignment*)OutValue;
		Result = (EHorizontalAlignment)Obj->GetHorizontalAlignment();
	}
	void USafeZoneSlot::SetHAlign_WrapperImpl(void* Object, const void* InValue)
	{
		USafeZoneSlot* Obj = (USafeZoneSlot*)Object;
		EHorizontalAlignment Value = (EHorizontalAlignment)*(uint8*)InValue;
		Obj->SetHorizontalAlignment(Value);
	}
	void USafeZoneSlot::GetVAlign_WrapperImpl(const void* Object, void* OutValue)
	{
		const USafeZoneSlot* Obj = (const USafeZoneSlot*)Object;
		EVerticalAlignment& Result = *(EVerticalAlignment*)OutValue;
		Result = (EVerticalAlignment)Obj->GetVerticalAlignment();
	}
	void USafeZoneSlot::SetVAlign_WrapperImpl(void* Object, const void* InValue)
	{
		USafeZoneSlot* Obj = (USafeZoneSlot*)Object;
		EVerticalAlignment Value = (EVerticalAlignment)*(uint8*)InValue;
		Obj->SetVerticalAlignment(Value);
	}
	void USafeZoneSlot::GetPadding_WrapperImpl(const void* Object, void* OutValue)
	{
		const USafeZoneSlot* Obj = (const USafeZoneSlot*)Object;
		FMargin& Result = *(FMargin*)OutValue;
		Result = (FMargin)Obj->GetPadding();
	}
	void USafeZoneSlot::SetPadding_WrapperImpl(void* Object, const void* InValue)
	{
		USafeZoneSlot* Obj = (USafeZoneSlot*)Object;
		FMargin& Value = *(FMargin*)InValue;
		Obj->SetPadding(Value);
	}
	void USafeZoneSlot::StaticRegisterNativesUSafeZoneSlot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USafeZoneSlot);
	UClass* Z_Construct_UClass_USafeZoneSlot_NoRegister()
	{
		return USafeZoneSlot::StaticClass();
	}
	struct Z_Construct_UClass_USafeZoneSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsTitleSafe_MetaData[];
#endif
		static void NewProp_bIsTitleSafe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsTitleSafe;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SafeAreaScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SafeAreaScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HAlign_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HAlign;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VAlign_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VAlign;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USafeZoneSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZoneSlot_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Components/SafeZoneSlot.h" },
		{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_bIsTitleSafe_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
	};
#endif
	void Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_bIsTitleSafe_SetBit(void* Obj)
	{
		((USafeZoneSlot*)Obj)->bIsTitleSafe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_bIsTitleSafe = { "bIsTitleSafe", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, &USafeZoneSlot::SetbIsTitleSafe_WrapperImpl, &USafeZoneSlot::GetbIsTitleSafe_WrapperImpl, sizeof(bool), sizeof(USafeZoneSlot), &Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_bIsTitleSafe_SetBit, METADATA_PARAMS(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_bIsTitleSafe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_bIsTitleSafe_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_SafeAreaScale_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_SafeAreaScale = { "SafeAreaScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &USafeZoneSlot::SetSafeAreaScale_WrapperImpl, &USafeZoneSlot::GetSafeAreaScale_WrapperImpl, STRUCT_OFFSET(USafeZoneSlot, SafeAreaScale), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_SafeAreaScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_SafeAreaScale_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_HAlign_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_HAlign = { "HAlign", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, &USafeZoneSlot::SetHAlign_WrapperImpl, &USafeZoneSlot::GetHAlign_WrapperImpl, STRUCT_OFFSET(USafeZoneSlot, HAlign), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_HAlign_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_HAlign_MetaData)) }; // 4247529014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_VAlign_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_VAlign = { "VAlign", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, &USafeZoneSlot::SetVAlign_WrapperImpl, &USafeZoneSlot::GetVAlign_WrapperImpl, STRUCT_OFFSET(USafeZoneSlot, VAlign), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_VAlign_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_VAlign_MetaData)) }; // 1453904578
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "ModuleRelativePath", "Public/Components/SafeZoneSlot.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &USafeZoneSlot::SetPadding_WrapperImpl, &USafeZoneSlot::GetPadding_WrapperImpl, STRUCT_OFFSET(USafeZoneSlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_Padding_MetaData)) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USafeZoneSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_bIsTitleSafe,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_SafeAreaScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_HAlign,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_VAlign,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZoneSlot_Statics::NewProp_Padding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USafeZoneSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USafeZoneSlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USafeZoneSlot_Statics::ClassParams = {
		&USafeZoneSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USafeZoneSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USafeZoneSlot_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USafeZoneSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USafeZoneSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USafeZoneSlot()
	{
		if (!Z_Registration_Info_UClass_USafeZoneSlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USafeZoneSlot.OuterSingleton, Z_Construct_UClass_USafeZoneSlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USafeZoneSlot.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<USafeZoneSlot>()
	{
		return USafeZoneSlot::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USafeZoneSlot);
	USafeZoneSlot::~USafeZoneSlot() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SafeZoneSlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SafeZoneSlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USafeZoneSlot, USafeZoneSlot::StaticClass, TEXT("USafeZoneSlot"), &Z_Registration_Info_UClass_USafeZoneSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USafeZoneSlot), 3317552822U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SafeZoneSlot_h_1887912432(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SafeZoneSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SafeZoneSlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
