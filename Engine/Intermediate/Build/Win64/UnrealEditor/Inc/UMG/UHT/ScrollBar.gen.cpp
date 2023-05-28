// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/ScrollBar.h"
#include "Layout/Margin.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#include "Styling/SlateTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScrollBar() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FScrollBarStyle();
	UMG_API UClass* Z_Construct_UClass_UScrollBar();
	UMG_API UClass* Z_Construct_UClass_UScrollBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UScrollBar::execSetState)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InOffsetFraction);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InThumbSizeFraction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetState(Z_Param_InOffsetFraction,Z_Param_InThumbSizeFraction);
		P_NATIVE_END;
	}
	void UScrollBar::GetWidgetStyle_WrapperImpl(const void* Object, void* OutValue)
	{
		const UScrollBar* Obj = (const UScrollBar*)Object;
		FScrollBarStyle& Result = *(FScrollBarStyle*)OutValue;
		Result = (FScrollBarStyle)Obj->GetWidgetStyle();
	}
	void UScrollBar::SetWidgetStyle_WrapperImpl(void* Object, const void* InValue)
	{
		UScrollBar* Obj = (UScrollBar*)Object;
		FScrollBarStyle& Value = *(FScrollBarStyle*)InValue;
		Obj->SetWidgetStyle(Value);
	}
	void UScrollBar::GetbAlwaysShowScrollbar_WrapperImpl(const void* Object, void* OutValue)
	{
		const UScrollBar* Obj = (const UScrollBar*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->IsAlwaysShowScrollbar();
	}
	void UScrollBar::SetbAlwaysShowScrollbar_WrapperImpl(void* Object, const void* InValue)
	{
		UScrollBar* Obj = (UScrollBar*)Object;
		bool& Value = *(bool*)InValue;
		Obj->SetAlwaysShowScrollbar(Value);
	}
	void UScrollBar::GetbAlwaysShowScrollbarTrack_WrapperImpl(const void* Object, void* OutValue)
	{
		const UScrollBar* Obj = (const UScrollBar*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->IsAlwaysShowScrollbarTrack();
	}
	void UScrollBar::SetbAlwaysShowScrollbarTrack_WrapperImpl(void* Object, const void* InValue)
	{
		UScrollBar* Obj = (UScrollBar*)Object;
		bool& Value = *(bool*)InValue;
		Obj->SetAlwaysShowScrollbarTrack(Value);
	}
	void UScrollBar::GetOrientation_WrapperImpl(const void* Object, void* OutValue)
	{
		const UScrollBar* Obj = (const UScrollBar*)Object;
		EOrientation& Result = *(EOrientation*)OutValue;
		Result = (EOrientation)Obj->GetOrientation();
	}
	void UScrollBar::GetThickness_WrapperImpl(const void* Object, void* OutValue)
	{
		const UScrollBar* Obj = (const UScrollBar*)Object;
		FVector2D& Result = *(FVector2D*)OutValue;
		Result = (FVector2D)Obj->GetThickness();
	}
	void UScrollBar::SetThickness_WrapperImpl(void* Object, const void* InValue)
	{
		UScrollBar* Obj = (UScrollBar*)Object;
		FVector2D& Value = *(FVector2D*)InValue;
		Obj->SetThickness(Value);
	}
	void UScrollBar::GetPadding_WrapperImpl(const void* Object, void* OutValue)
	{
		const UScrollBar* Obj = (const UScrollBar*)Object;
		FMargin& Result = *(FMargin*)OutValue;
		Result = (FMargin)Obj->GetPadding();
	}
	void UScrollBar::SetPadding_WrapperImpl(void* Object, const void* InValue)
	{
		UScrollBar* Obj = (UScrollBar*)Object;
		FMargin& Value = *(FMargin*)InValue;
		Obj->SetPadding(Value);
	}
	void UScrollBar::StaticRegisterNativesUScrollBar()
	{
		UClass* Class = UScrollBar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetState", &UScrollBar::execSetState },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UScrollBar_SetState_Statics
	{
		struct ScrollBar_eventSetState_Parms
		{
			float InOffsetFraction;
			float InThumbSizeFraction;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InOffsetFraction;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InThumbSizeFraction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScrollBar_SetState_Statics::NewProp_InOffsetFraction = { "InOffsetFraction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScrollBar_eventSetState_Parms, InOffsetFraction), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UScrollBar_SetState_Statics::NewProp_InThumbSizeFraction = { "InThumbSizeFraction", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ScrollBar_eventSetState_Parms, InThumbSizeFraction), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UScrollBar_SetState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBar_SetState_Statics::NewProp_InOffsetFraction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UScrollBar_SetState_Statics::NewProp_InThumbSizeFraction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UScrollBar_SetState_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scrolling" },
		{ "Comment", "/**\n\x09* Set the offset and size of the track's thumb.\n\x09* Note that the maximum offset is 1.0-ThumbSizeFraction.\n\x09* If the user can view 1/3 of the items in a single page, the maximum offset will be ~0.667f\n\x09*\n\x09* @param InOffsetFraction     Offset of the thumbnail from the top as a fraction of the total available scroll space.\n\x09* @param InThumbSizeFraction  Size of thumbnail as a fraction of the total available scroll space.\n\x09*/" },
		{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
		{ "ToolTip", "Set the offset and size of the track's thumb.\nNote that the maximum offset is 1.0-ThumbSizeFraction.\nIf the user can view 1/3 of the items in a single page, the maximum offset will be ~0.667f\n\n@param InOffsetFraction     Offset of the thumbnail from the top as a fraction of the total available scroll space.\n@param InThumbSizeFraction  Size of thumbnail as a fraction of the total available scroll space." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UScrollBar_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UScrollBar, nullptr, "SetState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UScrollBar_SetState_Statics::ScrollBar_eventSetState_Parms), Z_Construct_UFunction_UScrollBar_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBar_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UScrollBar_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UScrollBar_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UScrollBar_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UScrollBar_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UScrollBar);
	UClass* Z_Construct_UClass_UScrollBar_NoRegister()
	{
		return UScrollBar::StaticClass();
	}
	struct Z_Construct_UClass_UScrollBar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetStyle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetStyle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysShowScrollbar_MetaData[];
#endif
		static void NewProp_bAlwaysShowScrollbar_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysShowScrollbar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlwaysShowScrollbarTrack_MetaData[];
#endif
		static void NewProp_bAlwaysShowScrollbarTrack_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlwaysShowScrollbarTrack;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Orientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thickness_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Thickness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Padding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Padding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UScrollBar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UScrollBar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UScrollBar_SetState, "SetState" }, // 4281061886
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBar_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Components/ScrollBar.h" },
		{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBar_Statics::NewProp_WidgetStyle_MetaData[] = {
		{ "Category", "Style" },
		{ "Comment", "/** Style of the scrollbar */" },
		{ "DisplayName", "Style" },
		{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
		{ "ToolTip", "Style of the scrollbar" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScrollBar_Statics::NewProp_WidgetStyle = { "WidgetStyle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UScrollBar::SetWidgetStyle_WrapperImpl, &UScrollBar::GetWidgetStyle_WrapperImpl, STRUCT_OFFSET(UScrollBar, WidgetStyle), Z_Construct_UScriptStruct_FScrollBarStyle, METADATA_PARAMS(Z_Construct_UClass_UScrollBar_Statics::NewProp_WidgetStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBar_Statics::NewProp_WidgetStyle_MetaData)) }; // 2161279079
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbar_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
	};
#endif
	void Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbar_SetBit(void* Obj)
	{
		((UScrollBar*)Obj)->bAlwaysShowScrollbar = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbar = { "bAlwaysShowScrollbar", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UScrollBar::SetbAlwaysShowScrollbar_WrapperImpl, &UScrollBar::GetbAlwaysShowScrollbar_WrapperImpl, sizeof(bool), sizeof(UScrollBar), &Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbar_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbarTrack_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
	};
#endif
	void Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbarTrack_SetBit(void* Obj)
	{
		((UScrollBar*)Obj)->bAlwaysShowScrollbarTrack = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbarTrack = { "bAlwaysShowScrollbarTrack", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UScrollBar::SetbAlwaysShowScrollbarTrack_WrapperImpl, &UScrollBar::GetbAlwaysShowScrollbarTrack_WrapperImpl, sizeof(bool), sizeof(UScrollBar), &Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbarTrack_SetBit, METADATA_PARAMS(Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbarTrack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbarTrack_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBar_Statics::NewProp_Orientation_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UScrollBar_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, &UScrollBar::GetOrientation_WrapperImpl, STRUCT_OFFSET(UScrollBar, Orientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(Z_Construct_UClass_UScrollBar_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBar_Statics::NewProp_Orientation_MetaData)) }; // 3412645699
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBar_Statics::NewProp_Thickness_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** The thickness of the scrollbar thumb */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
		{ "ToolTip", "The thickness of the scrollbar thumb" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScrollBar_Statics::NewProp_Thickness = { "Thickness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UScrollBar::SetThickness_WrapperImpl, &UScrollBar::GetThickness_WrapperImpl, STRUCT_OFFSET(UScrollBar, Thickness), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UScrollBar_Statics::NewProp_Thickness_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBar_Statics::NewProp_Thickness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UScrollBar_Statics::NewProp_Padding_MetaData[] = {
		{ "Category", "Behavior" },
		{ "Comment", "/** The margin around the scrollbar */" },
		{ "ModuleRelativePath", "Public/Components/ScrollBar.h" },
		{ "ToolTip", "The margin around the scrollbar" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UScrollBar_Statics::NewProp_Padding = { "Padding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UScrollBar::SetPadding_WrapperImpl, &UScrollBar::GetPadding_WrapperImpl, STRUCT_OFFSET(UScrollBar, Padding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UScrollBar_Statics::NewProp_Padding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBar_Statics::NewProp_Padding_MetaData)) }; // 2014822612
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UScrollBar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBar_Statics::NewProp_WidgetStyle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBar_Statics::NewProp_bAlwaysShowScrollbarTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBar_Statics::NewProp_Orientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBar_Statics::NewProp_Thickness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UScrollBar_Statics::NewProp_Padding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UScrollBar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UScrollBar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UScrollBar_Statics::ClassParams = {
		&UScrollBar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UScrollBar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBar_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UScrollBar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UScrollBar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UScrollBar()
	{
		if (!Z_Registration_Info_UClass_UScrollBar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UScrollBar.OuterSingleton, Z_Construct_UClass_UScrollBar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UScrollBar.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UScrollBar>()
	{
		return UScrollBar::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UScrollBar);
	UScrollBar::~UScrollBar() {}
#if WITH_EDITORONLY_DATA
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UScrollBar)
#endif
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UScrollBar, UScrollBar::StaticClass, TEXT("UScrollBar"), &Z_Registration_Info_UClass_UScrollBar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UScrollBar), 3003456044U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_3318711598(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_ScrollBar_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
