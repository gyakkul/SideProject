// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/StackBoxSlot.h"
#include "Components/SlateWrapperTypes.h"
#include "Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStackBoxSlot() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	UMG_API UClass* Z_Construct_UClass_UPanelSlot();
	UMG_API UClass* Z_Construct_UClass_UStackBoxSlot();
	UMG_API UClass* Z_Construct_UClass_UStackBoxSlot_NoRegister();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FSlateChildSize();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UStackBoxSlot::GetPadding_WrapperImpl(const void* Object, void* OutValue)
	{
		const UStackBoxSlot* Obj = (const UStackBoxSlot*)Object;
		FMargin& Result = *(FMargin*)OutValue;
		Result = (FMargin)Obj->GetPadding();
	}
	void UStackBoxSlot::SetPadding_WrapperImpl(void* Object, const void* InValue)
	{
		UStackBoxSlot* Obj = (UStackBoxSlot*)Object;
		FMargin& Value = *(FMargin*)InValue;
		Obj->SetPadding(Value);
	}
	void UStackBoxSlot::GetSize_WrapperImpl(const void* Object, void* OutValue)
	{
		const UStackBoxSlot* Obj = (const UStackBoxSlot*)Object;
		FSlateChildSize& Result = *(FSlateChildSize*)OutValue;
		Result = (FSlateChildSize)Obj->GetSize();
	}
	void UStackBoxSlot::SetSize_WrapperImpl(void* Object, const void* InValue)
	{
		UStackBoxSlot* Obj = (UStackBoxSlot*)Object;
		FSlateChildSize& Value = *(FSlateChildSize*)InValue;
		Obj->SetSize(Value);
	}
	void UStackBoxSlot::GetHorizontalAlignment_WrapperImpl(const void* Object, void* OutValue)
	{
		const UStackBoxSlot* Obj = (const UStackBoxSlot*)Object;
		EHorizontalAlignment& Result = *(EHorizontalAlignment*)OutValue;
		Result = (EHorizontalAlignment)Obj->GetHorizontalAlignment();
	}
	void UStackBoxSlot::SetHorizontalAlignment_WrapperImpl(void* Object, const void* InValue)
	{
		UStackBoxSlot* Obj = (UStackBoxSlot*)Object;
		EHorizontalAlignment Value = (EHorizontalAlignment)*(uint8*)InValue;
		Obj->SetHorizontalAlignment(Value);
	}
	void UStackBoxSlot::GetVerticalAlignment_WrapperImpl(const void* Object, void* OutValue)
	{
		const UStackBoxSlot* Obj = (const UStackBoxSlot*)Object;
		EVerticalAlignment& Result = *(EVerticalAlignment*)OutValue;
		Result = (EVerticalAlignment)Obj->GetVerticalAlignment();
	}
	void UStackBoxSlot::SetVerticalAlignment_WrapperImpl(void* Object, const void* InValue)
	{
		UStackBoxSlot* Obj = (UStackBoxSlot*)Object;
		EVerticalAlignment Value = (EVerticalAlignment)*(uint8*)InValue;
		Obj->SetVerticalAlignment(Value);
	}
	void UStackBoxSlot::StaticRegisterNativesUStackBoxSlot()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStackBoxSlot);
	UClass* Z_Construct_UClass_UStackBoxSlot_NoRegister()
	{
		return UStackBoxSlot::StaticClass();
	}
	struct Z_Construct_UClass_UStackBoxSlot_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HorizontalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_HorizontalAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VerticalAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_VerticalAlignment;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStackBoxSlot_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelSlot,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStackBoxSlot_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** The Slot for the UStackBox, contains the widget that is flowed vertically or horizontally. */" },
		{ "IncludePath", "Components/StackBoxSlot.h" },
		{ "ModuleRelativePath", "Public/Components/StackBoxSlot.h" },
		{ "ToolTip", "The Slot for the UStackBox, contains the widget that is flowed vertically or horizontally." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStackBoxSlot_Statics::NewProp_Padding_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Layout|Stack Box Slot" },
		{ "Comment", "/** The padding area between the slot and the content it contains. */" },
		{ "ModuleRelativePath", "Public/Components/StackBoxSlot.h" },
		{ "ToolTip", "The padding area between the slot and the content it contains." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStackBoxSlot_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UStackBoxSlot::SetPadding_WrapperImpl, &UStackBoxSlot::GetPadding_WrapperImpl, STRUCT_OFFSET(UStackBoxSlot, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UStackBoxSlot_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStackBoxSlot_Statics::NewProp_Padding_MetaData)) }; // 2014822612
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStackBoxSlot_Statics::NewProp_Size_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Layout|Stack Box Slot" },
		{ "Comment", "/** How much space this slot should occupy in the direction of the panel. */" },
		{ "ModuleRelativePath", "Public/Components/StackBoxSlot.h" },
		{ "ToolTip", "How much space this slot should occupy in the direction of the panel." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStackBoxSlot_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UStackBoxSlot::SetSize_WrapperImpl, &UStackBoxSlot::GetSize_WrapperImpl, STRUCT_OFFSET(UStackBoxSlot, Size), Z_Construct_UScriptStruct_FSlateChildSize, METADATA_PARAMS(Z_Construct_UClass_UStackBoxSlot_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStackBoxSlot_Statics::NewProp_Size_MetaData)) }; // 2981121082
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStackBoxSlot_Statics::NewProp_HorizontalAlignment_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Layout|Stack Box Slot" },
		{ "Comment", "/** The alignment of the object horizontally. */" },
		{ "ModuleRelativePath", "Public/Components/StackBoxSlot.h" },
		{ "ToolTip", "The alignment of the object horizontally." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStackBoxSlot_Statics::NewProp_HorizontalAlignment = { "HorizontalAlignment", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UStackBoxSlot::SetHorizontalAlignment_WrapperImpl, &UStackBoxSlot::GetHorizontalAlignment_WrapperImpl, STRUCT_OFFSET(UStackBoxSlot, HorizontalAlignment), Z_Construct_UEnum_SlateCore_EHorizontalAlignment, METADATA_PARAMS(Z_Construct_UClass_UStackBoxSlot_Statics::NewProp_HorizontalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStackBoxSlot_Statics::NewProp_HorizontalAlignment_MetaData)) }; // 4247529014
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStackBoxSlot_Statics::NewProp_VerticalAlignment_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Layout|Stack Box Slot" },
		{ "Comment", "/** The alignment of the object vertically. */" },
		{ "ModuleRelativePath", "Public/Components/StackBoxSlot.h" },
		{ "ToolTip", "The alignment of the object vertically." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStackBoxSlot_Statics::NewProp_VerticalAlignment = { "VerticalAlignment", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UStackBoxSlot::SetVerticalAlignment_WrapperImpl, &UStackBoxSlot::GetVerticalAlignment_WrapperImpl, STRUCT_OFFSET(UStackBoxSlot, VerticalAlignment), Z_Construct_UEnum_SlateCore_EVerticalAlignment, METADATA_PARAMS(Z_Construct_UClass_UStackBoxSlot_Statics::NewProp_VerticalAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStackBoxSlot_Statics::NewProp_VerticalAlignment_MetaData)) }; // 1453904578
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStackBoxSlot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStackBoxSlot_Statics::NewProp_Padding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStackBoxSlot_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStackBoxSlot_Statics::NewProp_HorizontalAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStackBoxSlot_Statics::NewProp_VerticalAlignment,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStackBoxSlot_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStackBoxSlot>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStackBoxSlot_Statics::ClassParams = {
		&UStackBoxSlot::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStackBoxSlot_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStackBoxSlot_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStackBoxSlot_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStackBoxSlot_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStackBoxSlot()
	{
		if (!Z_Registration_Info_UClass_UStackBoxSlot.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStackBoxSlot.OuterSingleton, Z_Construct_UClass_UStackBoxSlot_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStackBoxSlot.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UStackBoxSlot>()
	{
		return UStackBoxSlot::StaticClass();
	}
	UStackBoxSlot::UStackBoxSlot(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStackBoxSlot);
	UStackBoxSlot::~UStackBoxSlot() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStackBoxSlot, UStackBoxSlot::StaticClass, TEXT("UStackBoxSlot"), &Z_Registration_Info_UClass_UStackBoxSlot, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStackBoxSlot), 2966557607U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_2671200416(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_StackBoxSlot_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
