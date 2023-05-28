// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/StackBox.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStackBox() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget();
	UMG_API UClass* Z_Construct_UClass_UStackBox();
	UMG_API UClass* Z_Construct_UClass_UStackBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UStackBoxSlot_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UStackBox::execReplaceStackBoxChildAt)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_OBJECT(UWidget,Z_Param_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReplaceStackBoxChildAt(Z_Param_Index,Z_Param_Content);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStackBox::execAddChildToStackBox)
	{
		P_GET_OBJECT(UWidget,Z_Param_Content);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UStackBoxSlot**)Z_Param__Result=P_THIS->AddChildToStackBox(Z_Param_Content);
		P_NATIVE_END;
	}
	void UStackBox::GetOrientation_WrapperImpl(const void* Object, void* OutValue)
	{
		const UStackBox* Obj = (const UStackBox*)Object;
		EOrientation& Result = *(EOrientation*)OutValue;
		Result = (EOrientation)Obj->GetOrientation();
	}
	void UStackBox::SetOrientation_WrapperImpl(void* Object, const void* InValue)
	{
		UStackBox* Obj = (UStackBox*)Object;
		EOrientation Value = (EOrientation)*(uint8*)InValue;
		Obj->SetOrientation(Value);
	}
	void UStackBox::StaticRegisterNativesUStackBox()
	{
		UClass* Class = UStackBox::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddChildToStackBox", &UStackBox::execAddChildToStackBox },
			{ "ReplaceStackBoxChildAt", &UStackBox::execReplaceStackBoxChildAt },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics
	{
		struct StackBox_eventAddChildToStackBox_Parms
		{
			UWidget* Content;
			UStackBoxSlot* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Content;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StackBox_eventAddChildToStackBox_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::NewProp_Content_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StackBox_eventAddChildToStackBox_Parms, ReturnValue), Z_Construct_UClass_UStackBoxSlot_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::Function_MetaDataParams[] = {
		{ "Category", "Panel" },
		{ "Comment", "/** Adds a new child widget to the container. */" },
		{ "ModuleRelativePath", "Public/Components/StackBox.h" },
		{ "ToolTip", "Adds a new child widget to the container." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStackBox, nullptr, "AddChildToStackBox", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::StackBox_eventAddChildToStackBox_Parms), Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStackBox_AddChildToStackBox()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStackBox_AddChildToStackBox_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics
	{
		struct StackBox_eventReplaceStackBoxChildAt_Parms
		{
			int32 Index;
			UWidget* Content;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Content;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StackBox_eventReplaceStackBoxChildAt_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::NewProp_Content_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(StackBox_eventReplaceStackBoxChildAt_Parms, Content), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::NewProp_Content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::NewProp_Content_MetaData)) };
	void Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StackBox_eventReplaceStackBoxChildAt_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(StackBox_eventReplaceStackBoxChildAt_Parms), &Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::NewProp_Content,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "Panel" },
		{ "Comment", "/** Replace the widget at the given index it with a different widget. */" },
		{ "ModuleRelativePath", "Public/Components/StackBox.h" },
		{ "ToolTip", "Replace the widget at the given index it with a different widget." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStackBox, nullptr, "ReplaceStackBoxChildAt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::StackBox_eventReplaceStackBoxChildAt_Parms), Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStackBox);
	UClass* Z_Construct_UClass_UStackBox_NoRegister()
	{
		return UStackBox::StaticClass();
	}
	struct Z_Construct_UClass_UStackBox_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_Orientation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStackBox_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPanelWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStackBox_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStackBox_AddChildToStackBox, "AddChildToStackBox" }, // 1508463594
		{ &Z_Construct_UFunction_UStackBox_ReplaceStackBoxChildAt, "ReplaceStackBoxChildAt" }, // 2117647953
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStackBox_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A stack box widget is a layout panel allowing child widgets to be automatically laid out\n * vertically or horizontally.\n *\n * * Many Children\n * * Flows Vertical or Horizontal\n */" },
		{ "IncludePath", "Components/StackBox.h" },
		{ "ModuleRelativePath", "Public/Components/StackBox.h" },
		{ "ShortTooltip", "A layout panel for automatically laying child widgets out vertically or horizontally" },
		{ "ToolTip", "A stack box widget is a layout panel allowing child widgets to be automatically laid out\nvertically or horizontally.\n\n* Many Children\n* Flows Vertical or Horizontal" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStackBox_Statics::NewProp_Orientation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Layout" },
		{ "Comment", "/** The orientation of the stack box. */" },
		{ "ModuleRelativePath", "Public/Components/StackBox.h" },
		{ "ToolTip", "The orientation of the stack box." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UStackBox_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UStackBox::SetOrientation_WrapperImpl, &UStackBox::GetOrientation_WrapperImpl, STRUCT_OFFSET(UStackBox, Orientation), Z_Construct_UEnum_SlateCore_EOrientation, METADATA_PARAMS(Z_Construct_UClass_UStackBox_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStackBox_Statics::NewProp_Orientation_MetaData)) }; // 3412645699
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStackBox_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStackBox_Statics::NewProp_Orientation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStackBox_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStackBox>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UStackBox_Statics::ClassParams = {
		&UStackBox::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStackBox_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStackBox_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStackBox_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStackBox_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStackBox()
	{
		if (!Z_Registration_Info_UClass_UStackBox.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStackBox.OuterSingleton, Z_Construct_UClass_UStackBox_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UStackBox.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UStackBox>()
	{
		return UStackBox::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStackBox);
	UStackBox::~UStackBox() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UStackBox, UStackBox::StaticClass, TEXT("UStackBox"), &Z_Registration_Info_UClass_UStackBox, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStackBox), 1757411373U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_1294093846(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_StackBox_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
