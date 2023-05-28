// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/TileView.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTileView() {}
// Cross Module References
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EListItemAlignment();
	UMG_API UClass* Z_Construct_UClass_UListView();
	UMG_API UClass* Z_Construct_UClass_UTileView();
	UMG_API UClass* Z_Construct_UClass_UTileView_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UTileView::execGetEntryWidth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEntryWidth();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTileView::execGetEntryHeight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetEntryHeight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTileView::execSetEntryWidth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewWidth);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEntryWidth(Z_Param_NewWidth);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTileView::execSetEntryHeight)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewHeight);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEntryHeight(Z_Param_NewHeight);
		P_NATIVE_END;
	}
	void UTileView::StaticRegisterNativesUTileView()
	{
		UClass* Class = UTileView::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEntryHeight", &UTileView::execGetEntryHeight },
			{ "GetEntryWidth", &UTileView::execGetEntryWidth },
			{ "SetEntryHeight", &UTileView::execSetEntryHeight },
			{ "SetEntryWidth", &UTileView::execSetEntryWidth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTileView_GetEntryHeight_Statics
	{
		struct TileView_eventGetEntryHeight_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TileView_eventGetEntryHeight_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "TileView" },
		{ "Comment", "/** Gets the height of tile entries */" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "Gets the height of tile entries" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileView, nullptr, "GetEntryHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::TileView_eventGetEntryHeight_Parms), Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTileView_GetEntryHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTileView_GetEntryHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTileView_GetEntryWidth_Statics
	{
		struct TileView_eventGetEntryWidth_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TileView_eventGetEntryWidth_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "TileView" },
		{ "Comment", "/** Gets the width of tile entries */" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "Gets the width of tile entries" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileView, nullptr, "GetEntryWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::TileView_eventGetEntryWidth_Parms), Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTileView_GetEntryWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTileView_GetEntryWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTileView_SetEntryHeight_Statics
	{
		struct TileView_eventSetEntryHeight_Parms
		{
			float NewHeight;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHeight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::NewProp_NewHeight = { "NewHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TileView_eventSetEntryHeight_Parms, NewHeight), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::NewProp_NewHeight,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::Function_MetaDataParams[] = {
		{ "Category", "TileView" },
		{ "Comment", "/** Sets the height of every tile entry */" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "Sets the height of every tile entry" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileView, nullptr, "SetEntryHeight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::TileView_eventSetEntryHeight_Parms), Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTileView_SetEntryHeight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTileView_SetEntryHeight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTileView_SetEntryWidth_Statics
	{
		struct TileView_eventSetEntryWidth_Parms
		{
			float NewWidth;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewWidth;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::NewProp_NewWidth = { "NewWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TileView_eventSetEntryWidth_Parms, NewWidth), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::NewProp_NewWidth,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::Function_MetaDataParams[] = {
		{ "Category", "TileView" },
		{ "Comment", "/** Sets the width of every tile entry */" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "Sets the width of every tile entry" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTileView, nullptr, "SetEntryWidth", nullptr, nullptr, sizeof(Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::TileView_eventSetEntryWidth_Parms), Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTileView_SetEntryWidth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTileView_SetEntryWidth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTileView);
	UClass* Z_Construct_UClass_UTileView_NoRegister()
	{
		return UTileView::StaticClass();
	}
	struct Z_Construct_UClass_UTileView_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryHeight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EntryHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntryWidth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EntryWidth;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TileAlignment_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileAlignment_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TileAlignment;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bWrapHorizontalNavigation_MetaData[];
#endif
		static void NewProp_bWrapHorizontalNavigation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bWrapHorizontalNavigation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTileView_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UListView,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTileView_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTileView_GetEntryHeight, "GetEntryHeight" }, // 2752947573
		{ &Z_Construct_UFunction_UTileView_GetEntryWidth, "GetEntryWidth" }, // 2535078374
		{ &Z_Construct_UFunction_UTileView_SetEntryHeight, "SetEntryHeight" }, // 1989758016
		{ &Z_Construct_UFunction_UTileView_SetEntryWidth, "SetEntryWidth" }, // 3994019040
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileView_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A ListView that presents the contents as a set of tiles all uniformly sized.\n *\n * To make a widget usable as an entry in a TileView, it must inherit from the IUserObjectListEntry interface.\n */" },
		{ "IncludePath", "Components/TileView.h" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A ListView that presents the contents as a set of tiles all uniformly sized.\n\nTo make a widget usable as an entry in a TileView, it must inherit from the IUserObjectListEntry interface." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileView_Statics::NewProp_EntryHeight_MetaData[] = {
		{ "Category", "ListEntries" },
		{ "Comment", "/** The height of each tile */" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "The height of each tile" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTileView_Statics::NewProp_EntryHeight = { "EntryHeight", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileView, EntryHeight), METADATA_PARAMS(Z_Construct_UClass_UTileView_Statics::NewProp_EntryHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileView_Statics::NewProp_EntryHeight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileView_Statics::NewProp_EntryWidth_MetaData[] = {
		{ "Category", "ListEntries" },
		{ "Comment", "/** The width of each tile */" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "The width of each tile" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTileView_Statics::NewProp_EntryWidth = { "EntryWidth", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileView, EntryWidth), METADATA_PARAMS(Z_Construct_UClass_UTileView_Statics::NewProp_EntryWidth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileView_Statics::NewProp_EntryWidth_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTileView_Statics::NewProp_TileAlignment_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileView_Statics::NewProp_TileAlignment_MetaData[] = {
		{ "Category", "ListEntries" },
		{ "Comment", "/** The method by which to align the tile entries in the available space for the tile view */" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "The method by which to align the tile entries in the available space for the tile view" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTileView_Statics::NewProp_TileAlignment = { "TileAlignment", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTileView, TileAlignment), Z_Construct_UEnum_Slate_EListItemAlignment, METADATA_PARAMS(Z_Construct_UClass_UTileView_Statics::NewProp_TileAlignment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileView_Statics::NewProp_TileAlignment_MetaData)) }; // 1828783791
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTileView_Statics::NewProp_bWrapHorizontalNavigation_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** True to allow left/right navigation to wrap back to the tile on the opposite edge */" },
		{ "ModuleRelativePath", "Public/Components/TileView.h" },
		{ "ToolTip", "True to allow left/right navigation to wrap back to the tile on the opposite edge" },
	};
#endif
	void Z_Construct_UClass_UTileView_Statics::NewProp_bWrapHorizontalNavigation_SetBit(void* Obj)
	{
		((UTileView*)Obj)->bWrapHorizontalNavigation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTileView_Statics::NewProp_bWrapHorizontalNavigation = { "bWrapHorizontalNavigation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UTileView), &Z_Construct_UClass_UTileView_Statics::NewProp_bWrapHorizontalNavigation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTileView_Statics::NewProp_bWrapHorizontalNavigation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTileView_Statics::NewProp_bWrapHorizontalNavigation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTileView_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileView_Statics::NewProp_EntryHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileView_Statics::NewProp_EntryWidth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileView_Statics::NewProp_TileAlignment_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileView_Statics::NewProp_TileAlignment,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTileView_Statics::NewProp_bWrapHorizontalNavigation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTileView_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTileView>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTileView_Statics::ClassParams = {
		&UTileView::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTileView_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTileView_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTileView_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTileView_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTileView()
	{
		if (!Z_Registration_Info_UClass_UTileView.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTileView.OuterSingleton, Z_Construct_UClass_UTileView_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTileView.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UTileView>()
	{
		return UTileView::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTileView);
	UTileView::~UTileView() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TileView_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TileView_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTileView, UTileView::StaticClass, TEXT("UTileView"), &Z_Registration_Info_UClass_UTileView, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTileView), 134902740U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TileView_h_1355214037(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TileView_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_TileView_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
