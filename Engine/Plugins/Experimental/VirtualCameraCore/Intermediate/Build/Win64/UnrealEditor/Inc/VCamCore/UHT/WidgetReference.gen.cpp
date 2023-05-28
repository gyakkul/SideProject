// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Util/WidgetReference.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetReference() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VCamCore();
	VCAMCORE_API UClass* Z_Construct_UClass_UVCamWidget_NoRegister();
	VCAMCORE_API UClass* Z_Construct_UClass_UWidgetReferenceBlueprintFunctionLibrary();
	VCAMCORE_API UClass* Z_Construct_UClass_UWidgetReferenceBlueprintFunctionLibrary_NoRegister();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FChildWidgetReference();
	VCAMCORE_API UScriptStruct* Z_Construct_UScriptStruct_FVCamChildWidgetReference();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ChildWidgetReference;
class UScriptStruct* FChildWidgetReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ChildWidgetReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ChildWidgetReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FChildWidgetReference, (UObject*)Z_Construct_UPackage__Script_VCamCore(), TEXT("ChildWidgetReference"));
	}
	return Z_Registration_Info_UScriptStruct_ChildWidgetReference.OuterSingleton;
}
template<> VCAMCORE_API UScriptStruct* StaticStruct<FChildWidgetReference>()
{
	return FChildWidgetReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FChildWidgetReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Template_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Template;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChildWidgetReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * A reference to any child widget within an UMG Blueprint; only widgets in the same widget tree can be referenced.\n * Has a detail customization for choosing widget.\n */" },
		{ "ModuleRelativePath", "Public/Util/WidgetReference.h" },
		{ "ToolTip", "A reference to any child widget within an UMG Blueprint; only widgets in the same widget tree can be referenced.\nHas a detail customization for choosing widget." },
	};
#endif
	void* Z_Construct_UScriptStruct_FChildWidgetReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChildWidgetReference>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChildWidgetReference_Statics::NewProp_Template_MetaData[] = {
		{ "Category", "Virtual Camera" },
		{ "Comment", "/**\n\x09 * Pointer to template widget within the Blueprint's widget tree.\n\x09 * \n\x09 * Important: in UMG there are templates and previews.\n\x09 * Templates are like the CDO and previews are what you see in the editor\n\x09 * @see FWidgetReference\n\x09 */" },
		{ "ModuleRelativePath", "Public/Util/WidgetReference.h" },
		{ "ToolTip", "Pointer to template widget within the Blueprint's widget tree.\n\nImportant: in UMG there are templates and previews.\nTemplates are like the CDO and previews are what you see in the editor\n@see FWidgetReference" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FChildWidgetReference_Statics::NewProp_Template = { "Template", nullptr, (EPropertyFlags)0x0014000000080009, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FChildWidgetReference, Template), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FChildWidgetReference_Statics::NewProp_Template_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChildWidgetReference_Statics::NewProp_Template_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChildWidgetReference_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChildWidgetReference_Statics::NewProp_Template,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChildWidgetReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
		nullptr,
		&NewStructOps,
		"ChildWidgetReference",
		sizeof(FChildWidgetReference),
		alignof(FChildWidgetReference),
		Z_Construct_UScriptStruct_FChildWidgetReference_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChildWidgetReference_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChildWidgetReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChildWidgetReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChildWidgetReference()
	{
		if (!Z_Registration_Info_UScriptStruct_ChildWidgetReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ChildWidgetReference.InnerSingleton, Z_Construct_UScriptStruct_FChildWidgetReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ChildWidgetReference.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVCamChildWidgetReference>() == std::is_polymorphic<FChildWidgetReference>(), "USTRUCT FVCamChildWidgetReference cannot be polymorphic unless super FChildWidgetReference is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VCamChildWidgetReference;
class UScriptStruct* FVCamChildWidgetReference::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VCamChildWidgetReference.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VCamChildWidgetReference.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVCamChildWidgetReference, (UObject*)Z_Construct_UPackage__Script_VCamCore(), TEXT("VCamChildWidgetReference"));
	}
	return Z_Registration_Info_UScriptStruct_VCamChildWidgetReference.OuterSingleton;
}
template<> VCAMCORE_API UScriptStruct* StaticStruct<FVCamChildWidgetReference>()
{
	return FVCamChildWidgetReference::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVCamChildWidgetReference_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVCamChildWidgetReference_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Version that restraints Widget to UVCamWidget instances. */" },
		{ "ModuleRelativePath", "Public/Util/WidgetReference.h" },
		{ "ToolTip", "Version that restraints Widget to UVCamWidget instances." },
	};
#endif
	void* Z_Construct_UScriptStruct_FVCamChildWidgetReference_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVCamChildWidgetReference>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVCamChildWidgetReference_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
		Z_Construct_UScriptStruct_FChildWidgetReference,
		&NewStructOps,
		"VCamChildWidgetReference",
		sizeof(FVCamChildWidgetReference),
		alignof(FVCamChildWidgetReference),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVCamChildWidgetReference_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVCamChildWidgetReference_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVCamChildWidgetReference()
	{
		if (!Z_Registration_Info_UScriptStruct_VCamChildWidgetReference.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VCamChildWidgetReference.InnerSingleton, Z_Construct_UScriptStruct_FVCamChildWidgetReference_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VCamChildWidgetReference.InnerSingleton;
	}
	DEFINE_FUNCTION(UWidgetReferenceBlueprintFunctionLibrary::execResolveVCamWidget)
	{
		P_GET_STRUCT_REF(FVCamChildWidgetReference,Z_Param_Out_WidgetReference);
		P_GET_OBJECT(UUserWidget,Z_Param_OwnerWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVCamWidget**)Z_Param__Result=UWidgetReferenceBlueprintFunctionLibrary::ResolveVCamWidget(Z_Param_Out_WidgetReference,Z_Param_OwnerWidget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UWidgetReferenceBlueprintFunctionLibrary::execResolveWidget)
	{
		P_GET_STRUCT_REF(FChildWidgetReference,Z_Param_Out_WidgetReference);
		P_GET_OBJECT(UUserWidget,Z_Param_OwnerWidget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWidget**)Z_Param__Result=UWidgetReferenceBlueprintFunctionLibrary::ResolveWidget(Z_Param_Out_WidgetReference,Z_Param_OwnerWidget);
		P_NATIVE_END;
	}
	void UWidgetReferenceBlueprintFunctionLibrary::StaticRegisterNativesUWidgetReferenceBlueprintFunctionLibrary()
	{
		UClass* Class = UWidgetReferenceBlueprintFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResolveVCamWidget", &UWidgetReferenceBlueprintFunctionLibrary::execResolveVCamWidget },
			{ "ResolveWidget", &UWidgetReferenceBlueprintFunctionLibrary::execResolveWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveVCamWidget_Statics
	{
		struct WidgetReferenceBlueprintFunctionLibrary_eventResolveVCamWidget_Parms
		{
			FVCamChildWidgetReference WidgetReference;
			UUserWidget* OwnerWidget;
			UVCamWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerWidget;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveVCamWidget_Statics::NewProp_WidgetReference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveVCamWidget_Statics::NewProp_WidgetReference = { "WidgetReference", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetReferenceBlueprintFunctionLibrary_eventResolveVCamWidget_Parms, WidgetReference), Z_Construct_UScriptStruct_FVCamChildWidgetReference, METADATA_PARAMS(Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveVCamWidget_Statics::NewProp_WidgetReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveVCamWidget_Statics::NewProp_WidgetReference_MetaData)) }; // 2441531952
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveVCamWidget_Statics::NewProp_OwnerWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveVCamWidget_Statics::NewProp_OwnerWidget = { "OwnerWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetReferenceBlueprintFunctionLibrary_eventResolveVCamWidget_Parms, OwnerWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveVCamWidget_Statics::NewProp_OwnerWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveVCamWidget_Statics::NewProp_OwnerWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveVCamWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveVCamWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetReferenceBlueprintFunctionLibrary_eventResolveVCamWidget_Parms, ReturnValue), Z_Construct_UClass_UVCamWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveVCamWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveVCamWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveVCamWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveVCamWidget_Statics::NewProp_WidgetReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveVCamWidget_Statics::NewProp_OwnerWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveVCamWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveVCamWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera" },
		{ "ModuleRelativePath", "Public/Util/WidgetReference.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveVCamWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetReferenceBlueprintFunctionLibrary, nullptr, "ResolveVCamWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveVCamWidget_Statics::WidgetReferenceBlueprintFunctionLibrary_eventResolveVCamWidget_Parms), Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveVCamWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveVCamWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveVCamWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveVCamWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveVCamWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveVCamWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveWidget_Statics
	{
		struct WidgetReferenceBlueprintFunctionLibrary_eventResolveWidget_Parms
		{
			FChildWidgetReference WidgetReference;
			UUserWidget* OwnerWidget;
			UWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetReference_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetReference;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerWidget;
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
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveWidget_Statics::NewProp_WidgetReference_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveWidget_Statics::NewProp_WidgetReference = { "WidgetReference", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetReferenceBlueprintFunctionLibrary_eventResolveWidget_Parms, WidgetReference), Z_Construct_UScriptStruct_FChildWidgetReference, METADATA_PARAMS(Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveWidget_Statics::NewProp_WidgetReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveWidget_Statics::NewProp_WidgetReference_MetaData)) }; // 520195894
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveWidget_Statics::NewProp_OwnerWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveWidget_Statics::NewProp_OwnerWidget = { "OwnerWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetReferenceBlueprintFunctionLibrary_eventResolveWidget_Parms, OwnerWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveWidget_Statics::NewProp_OwnerWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveWidget_Statics::NewProp_OwnerWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveWidget_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(WidgetReferenceBlueprintFunctionLibrary_eventResolveWidget_Parms, ReturnValue), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveWidget_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveWidget_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveWidget_Statics::NewProp_WidgetReference,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveWidget_Statics::NewProp_OwnerWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Camera" },
		{ "ModuleRelativePath", "Public/Util/WidgetReference.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetReferenceBlueprintFunctionLibrary, nullptr, "ResolveWidget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveWidget_Statics::WidgetReferenceBlueprintFunctionLibrary_eventResolveWidget_Parms), Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetReferenceBlueprintFunctionLibrary);
	UClass* Z_Construct_UClass_UWidgetReferenceBlueprintFunctionLibrary_NoRegister()
	{
		return UWidgetReferenceBlueprintFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetReferenceBlueprintFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetReferenceBlueprintFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VCamCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidgetReferenceBlueprintFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveVCamWidget, "ResolveVCamWidget" }, // 3224911691
		{ &Z_Construct_UFunction_UWidgetReferenceBlueprintFunctionLibrary_ResolveWidget, "ResolveWidget" }, // 2235610742
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetReferenceBlueprintFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Util/WidgetReference.h" },
		{ "ModuleRelativePath", "Public/Util/WidgetReference.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetReferenceBlueprintFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetReferenceBlueprintFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetReferenceBlueprintFunctionLibrary_Statics::ClassParams = {
		&UWidgetReferenceBlueprintFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetReferenceBlueprintFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetReferenceBlueprintFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetReferenceBlueprintFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UWidgetReferenceBlueprintFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetReferenceBlueprintFunctionLibrary.OuterSingleton, Z_Construct_UClass_UWidgetReferenceBlueprintFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetReferenceBlueprintFunctionLibrary.OuterSingleton;
	}
	template<> VCAMCORE_API UClass* StaticClass<UWidgetReferenceBlueprintFunctionLibrary>()
	{
		return UWidgetReferenceBlueprintFunctionLibrary::StaticClass();
	}
	UWidgetReferenceBlueprintFunctionLibrary::UWidgetReferenceBlueprintFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetReferenceBlueprintFunctionLibrary);
	UWidgetReferenceBlueprintFunctionLibrary::~UWidgetReferenceBlueprintFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Util_WidgetReference_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Util_WidgetReference_h_Statics::ScriptStructInfo[] = {
		{ FChildWidgetReference::StaticStruct, Z_Construct_UScriptStruct_FChildWidgetReference_Statics::NewStructOps, TEXT("ChildWidgetReference"), &Z_Registration_Info_UScriptStruct_ChildWidgetReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FChildWidgetReference), 520195894U) },
		{ FVCamChildWidgetReference::StaticStruct, Z_Construct_UScriptStruct_FVCamChildWidgetReference_Statics::NewStructOps, TEXT("VCamChildWidgetReference"), &Z_Registration_Info_UScriptStruct_VCamChildWidgetReference, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVCamChildWidgetReference), 2441531952U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Util_WidgetReference_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetReferenceBlueprintFunctionLibrary, UWidgetReferenceBlueprintFunctionLibrary::StaticClass, TEXT("UWidgetReferenceBlueprintFunctionLibrary"), &Z_Registration_Info_UClass_UWidgetReferenceBlueprintFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetReferenceBlueprintFunctionLibrary), 3944706750U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Util_WidgetReference_h_3813492682(TEXT("/Script/VCamCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Util_WidgetReference_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Util_WidgetReference_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Util_WidgetReference_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualCameraCore_Source_VCamCore_Public_Util_WidgetReference_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
