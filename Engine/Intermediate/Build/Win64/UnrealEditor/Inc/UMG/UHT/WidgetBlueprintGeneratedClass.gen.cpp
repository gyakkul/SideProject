// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Blueprint/WidgetBlueprintGeneratedClass.h"
#include "Binding/DynamicPropertyPath.h"
#include "FieldNotification/FieldId.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetBlueprintGeneratedClass() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetBlueprintGeneratedClass();
	UMG_API UClass* Z_Construct_UClass_UWidgetBlueprintGeneratedClass_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetTree_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_EBindingKind();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FDelegateRuntimeBinding();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicPropertyPath();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FFieldNotificationId();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBindingKind;
	static UEnum* EBindingKind_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EBindingKind.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EBindingKind.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_UMG_EBindingKind, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("EBindingKind"));
		}
		return Z_Registration_Info_UEnum_EBindingKind.OuterSingleton;
	}
	template<> UMG_API UEnum* StaticEnum<EBindingKind>()
	{
		return EBindingKind_StaticEnum();
	}
	struct Z_Construct_UEnum_UMG_EBindingKind_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_UMG_EBindingKind_Statics::Enumerators[] = {
		{ "EBindingKind::Function", (int64)EBindingKind::Function },
		{ "EBindingKind::Property", (int64)EBindingKind::Property },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_UMG_EBindingKind_Statics::Enum_MetaDataParams[] = {
		{ "Function.Name", "EBindingKind::Function" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
		{ "Property.Name", "EBindingKind::Property" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_UMG_EBindingKind_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		"EBindingKind",
		"EBindingKind",
		Z_Construct_UEnum_UMG_EBindingKind_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EBindingKind_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_UMG_EBindingKind_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_UMG_EBindingKind_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_UMG_EBindingKind()
	{
		if (!Z_Registration_Info_UEnum_EBindingKind.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBindingKind.InnerSingleton, Z_Construct_UEnum_UMG_EBindingKind_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EBindingKind.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DelegateRuntimeBinding;
class UScriptStruct* FDelegateRuntimeBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DelegateRuntimeBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DelegateRuntimeBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDelegateRuntimeBinding, (UObject*)Z_Construct_UPackage__Script_UMG(), TEXT("DelegateRuntimeBinding"));
	}
	return Z_Registration_Info_UScriptStruct_DelegateRuntimeBinding.OuterSingleton;
}
template<> UMG_API UScriptStruct* StaticStruct<FDelegateRuntimeBinding>()
{
	return FDelegateRuntimeBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ObjectName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ObjectName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FunctionName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FunctionName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Kind_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Kind_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Kind;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDelegateRuntimeBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_ObjectName_MetaData[] = {
		{ "Comment", "/** The widget that will be bound to the live data. */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
		{ "ToolTip", "The widget that will be bound to the live data." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_ObjectName = { "ObjectName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDelegateRuntimeBinding, ObjectName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_ObjectName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_ObjectName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Comment", "/** The property on the widget that will have a binding placed on it. */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
		{ "ToolTip", "The property on the widget that will have a binding placed on it." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDelegateRuntimeBinding, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_FunctionName_MetaData[] = {
		{ "Comment", "/** The function or property we're binding to on the source object. */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
		{ "ToolTip", "The function or property we're binding to on the source object." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_FunctionName = { "FunctionName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDelegateRuntimeBinding, FunctionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_FunctionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_FunctionName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_SourcePath_MetaData[] = {
		{ "Comment", "/**  */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDelegateRuntimeBinding, SourcePath), Z_Construct_UScriptStruct_FDynamicPropertyPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_SourcePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_SourcePath_MetaData)) }; // 2842537116
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_Kind_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_Kind_MetaData[] = {
		{ "Comment", "/** The kind of binding we're performing, are we binding to a property or a function. */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
		{ "ToolTip", "The kind of binding we're performing, are we binding to a property or a function." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_Kind = { "Kind", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDelegateRuntimeBinding, Kind), Z_Construct_UEnum_UMG_EBindingKind, METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_Kind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_Kind_MetaData)) }; // 3494567057
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_ObjectName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_FunctionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_SourcePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_Kind_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewProp_Kind,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
		nullptr,
		&NewStructOps,
		"DelegateRuntimeBinding",
		sizeof(FDelegateRuntimeBinding),
		alignof(FDelegateRuntimeBinding),
		Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDelegateRuntimeBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_DelegateRuntimeBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DelegateRuntimeBinding.InnerSingleton, Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DelegateRuntimeBinding.InnerSingleton;
	}
	void UWidgetBlueprintGeneratedClass::StaticRegisterNativesUWidgetBlueprintGeneratedClass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWidgetBlueprintGeneratedClass);
	UClass* Z_Construct_UClass_UWidgetBlueprintGeneratedClass_NoRegister()
	{
		return UWidgetBlueprintGeneratedClass::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidgetTree_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_WidgetTree;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Extensions_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Extensions_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Extensions;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FieldNotifyNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FieldNotifyNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FieldNotifyNames;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bClassRequiresNativeTick_MetaData[];
#endif
		static void NewProp_bClassRequiresNativeTick_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bClassRequiresNativeTick;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanCallPreConstruct_MetaData[];
#endif
		static void NewProp_bCanCallPreConstruct_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanCallPreConstruct;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Bindings;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Animations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Animations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Animations;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NamedSlots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamedSlots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NamedSlots;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructPropertyParams NewProp_NamedSlotsWithID_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NamedSlotsWithID_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamedSlotsWithID_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NamedSlotsWithID;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FNamePropertyParams NewProp_AvailableNamedSlots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AvailableNamedSlots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AvailableNamedSlots;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InstanceNamedSlots_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstanceNamedSlots_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InstanceNamedSlots;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintGeneratedClass,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The widget blueprint generated class allows us to create blueprint-able widgets for UMG at runtime.\n * All WBPGC's are of UUserWidget classes, and they perform special post initialization using this class\n * to give themselves many of the same capabilities as AActor blueprints, like dynamic delegate binding for\n * widgets.\n */" },
		{ "IncludePath", "Blueprint/WidgetBlueprintGeneratedClass.h" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
		{ "ToolTip", "The widget blueprint generated class allows us to create blueprint-able widgets for UMG at runtime.\nAll WBPGC's are of UUserWidget classes, and they perform special post initialization using this class\nto give themselves many of the same capabilities as AActor blueprints, like dynamic delegate binding for\nwidgets." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_WidgetTree_MetaData[] = {
		{ "Comment", "/** A tree of the widget templates to be created */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
		{ "ToolTip", "A tree of the widget templates to be created" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_WidgetTree = { "WidgetTree", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetBlueprintGeneratedClass, WidgetTree), Z_Construct_UClass_UWidgetTree_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_WidgetTree_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_WidgetTree_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Extensions_Inner = { "Extensions", nullptr, (EPropertyFlags)0x0004000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWidgetBlueprintGeneratedClassExtension_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Extensions_MetaData[] = {
		{ "Comment", "/** The extension that are considered static to the class */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
		{ "ToolTip", "The extension that are considered static to the class" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Extensions = { "Extensions", nullptr, (EPropertyFlags)0x0044008000000008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetBlueprintGeneratedClass, Extensions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Extensions_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Extensions_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_FieldNotifyNames_Inner = { "FieldNotifyNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FFieldNotificationId, METADATA_PARAMS(nullptr, 0) }; // 2908908415
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_FieldNotifyNames_MetaData[] = {
		{ "Comment", "/** List Field Notifies. No index here on purpose to prevent saving them. */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
		{ "ToolTip", "List Field Notifies. No index here on purpose to prevent saving them." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_FieldNotifyNames = { "FieldNotifyNames", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetBlueprintGeneratedClass, FieldNotifyNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_FieldNotifyNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_FieldNotifyNames_MetaData)) }; // 2908908415
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bClassRequiresNativeTick_MetaData[] = {
		{ "Comment", "/** The classes native parent requires a native tick */" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
		{ "ToolTip", "The classes native parent requires a native tick" },
	};
#endif
	void Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bClassRequiresNativeTick_SetBit(void* Obj)
	{
		((UWidgetBlueprintGeneratedClass*)Obj)->bClassRequiresNativeTick = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bClassRequiresNativeTick = { "bClassRequiresNativeTick", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UWidgetBlueprintGeneratedClass), &Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bClassRequiresNativeTick_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bClassRequiresNativeTick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bClassRequiresNativeTick_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bCanCallPreConstruct_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
	};
#endif
	void Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bCanCallPreConstruct_SetBit(void* Obj)
	{
		((UWidgetBlueprintGeneratedClass*)Obj)->bCanCallPreConstruct = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bCanCallPreConstruct = { "bCanCallPreConstruct", nullptr, (EPropertyFlags)0x0010000800002000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UWidgetBlueprintGeneratedClass), &Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bCanCallPreConstruct_SetBit, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bCanCallPreConstruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bCanCallPreConstruct_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Bindings_Inner = { "Bindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FDelegateRuntimeBinding, METADATA_PARAMS(nullptr, 0) }; // 2732674522
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Bindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetBlueprintGeneratedClass, Bindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Bindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Bindings_MetaData)) }; // 2732674522
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Animations_Inner = { "Animations", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Animations_MetaData[] = {
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Animations = { "Animations", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetBlueprintGeneratedClass, Animations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Animations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Animations_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_NamedSlots_Inner = { "NamedSlots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_NamedSlots_MetaData[] = {
		{ "Comment", "/**\n\x09 * All named slots, even the ones that have content already filled into them by a parent class and are not\n\x09 * available for extension.\n\x09 **/" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
		{ "ToolTip", "All named slots, even the ones that have content already filled into them by a parent class and are not\navailable for extension." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_NamedSlots = { "NamedSlots", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetBlueprintGeneratedClass, NamedSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_NamedSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_NamedSlots_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_NamedSlotsWithID_ValueProp = { "NamedSlotsWithID", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_NamedSlotsWithID_Key_KeyProp = { "NamedSlotsWithID_Key", nullptr, (EPropertyFlags)0x0000000800000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_NamedSlotsWithID_MetaData[] = {
		{ "Comment", "/** All named slots mapped the assigned GUID of their UNamedSlot widget. **/" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
		{ "ToolTip", "All named slots mapped the assigned GUID of their UNamedSlot widget. *" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_NamedSlotsWithID = { "NamedSlotsWithID", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetBlueprintGeneratedClass, NamedSlotsWithID), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_NamedSlotsWithID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_NamedSlotsWithID_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_AvailableNamedSlots_Inner = { "AvailableNamedSlots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_AvailableNamedSlots_MetaData[] = {
		{ "Comment", "/**\n\x09 * Available Named Slots for content in a subclass.  These are slots that are accumulated from all super\n\x09 * classes on compile.  They will exclude any named slots that are filled by a parent class.\n\x09 **/" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
		{ "ToolTip", "Available Named Slots for content in a subclass.  These are slots that are accumulated from all super\nclasses on compile.  They will exclude any named slots that are filled by a parent class." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_AvailableNamedSlots = { "AvailableNamedSlots", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetBlueprintGeneratedClass, AvailableNamedSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_AvailableNamedSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_AvailableNamedSlots_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_InstanceNamedSlots_Inner = { "InstanceNamedSlots", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_InstanceNamedSlots_MetaData[] = {
		{ "Comment", "/**\n\x09 * These are the set of named slots that can be used on an instance of the widget.  This set is slightly\n\x09 * different from available named slots, because ones designated UNamedSlot::bExposeOnInstanceOnly == true\n\x09 * will also be in this list, even though they wont be in AvailableNamedSlots, if are inherited, as inherited\n\x09 * named slots do not have the capability to remove existing content in a named slot.\n\x09 **/" },
		{ "ModuleRelativePath", "Public/Blueprint/WidgetBlueprintGeneratedClass.h" },
		{ "ToolTip", "These are the set of named slots that can be used on an instance of the widget.  This set is slightly\ndifferent from available named slots, because ones designated UNamedSlot::bExposeOnInstanceOnly == true\nwill also be in this list, even though they wont be in AvailableNamedSlots, if are inherited, as inherited\nnamed slots do not have the capability to remove existing content in a named slot." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_InstanceNamedSlots = { "InstanceNamedSlots", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UWidgetBlueprintGeneratedClass, InstanceNamedSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_InstanceNamedSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_InstanceNamedSlots_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_WidgetTree,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Extensions_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Extensions,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_FieldNotifyNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_FieldNotifyNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bClassRequiresNativeTick,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_bCanCallPreConstruct,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Bindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Bindings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Animations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_Animations,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_NamedSlots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_NamedSlots,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_NamedSlotsWithID_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_NamedSlotsWithID_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_NamedSlotsWithID,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_AvailableNamedSlots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_AvailableNamedSlots,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_InstanceNamedSlots_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::NewProp_InstanceNamedSlots,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetBlueprintGeneratedClass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::ClassParams = {
		&UWidgetBlueprintGeneratedClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::PropPointers),
		0,
		0x009200A0u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetBlueprintGeneratedClass()
	{
		if (!Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClass.OuterSingleton, Z_Construct_UClass_UWidgetBlueprintGeneratedClass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClass.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UWidgetBlueprintGeneratedClass>()
	{
		return UWidgetBlueprintGeneratedClass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetBlueprintGeneratedClass);
	UWidgetBlueprintGeneratedClass::~UWidgetBlueprintGeneratedClass() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UWidgetBlueprintGeneratedClass)
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_Statics::EnumInfo[] = {
		{ EBindingKind_StaticEnum, TEXT("EBindingKind"), &Z_Registration_Info_UEnum_EBindingKind, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3494567057U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_Statics::ScriptStructInfo[] = {
		{ FDelegateRuntimeBinding::StaticStruct, Z_Construct_UScriptStruct_FDelegateRuntimeBinding_Statics::NewStructOps, TEXT("DelegateRuntimeBinding"), &Z_Registration_Info_UScriptStruct_DelegateRuntimeBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDelegateRuntimeBinding), 2732674522U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UWidgetBlueprintGeneratedClass, UWidgetBlueprintGeneratedClass::StaticClass, TEXT("UWidgetBlueprintGeneratedClass"), &Z_Registration_Info_UClass_UWidgetBlueprintGeneratedClass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWidgetBlueprintGeneratedClass), 2118994058U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_1146362289(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Blueprint_WidgetBlueprintGeneratedClass_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
