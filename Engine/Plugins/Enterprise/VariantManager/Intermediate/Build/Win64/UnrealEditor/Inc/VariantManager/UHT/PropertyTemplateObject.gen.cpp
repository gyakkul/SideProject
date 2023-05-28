// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/PropertyTemplateObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyTemplateObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_VariantManager();
	VARIANTMANAGER_API UClass* Z_Construct_UClass_UPropertyTemplateObject();
	VARIANTMANAGER_API UClass* Z_Construct_UClass_UPropertyTemplateObject_NoRegister();
// End Cross Module References
	void UPropertyTemplateObject::StaticRegisterNativesUPropertyTemplateObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPropertyTemplateObject);
	UClass* Z_Construct_UClass_UPropertyTemplateObject_NoRegister()
	{
		return UPropertyTemplateObject::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyTemplateObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedByteProperty_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CapturedByteProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedUInt16Property_MetaData[];
#endif
		static const UECodeGen_Private::FFInt16PropertyParams NewProp_CapturedUInt16Property;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedUInt32Property_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_CapturedUInt32Property;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedUInt64Property_MetaData[];
#endif
		static const UECodeGen_Private::FFInt64PropertyParams NewProp_CapturedUInt64Property;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedInt8Property_MetaData[];
#endif
		static const UECodeGen_Private::FInt8PropertyParams NewProp_CapturedInt8Property;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedInt16Property_MetaData[];
#endif
		static const UECodeGen_Private::FInt16PropertyParams NewProp_CapturedInt16Property;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedIntProperty_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CapturedIntProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedInt64Property_MetaData[];
#endif
		static const UECodeGen_Private::FInt64PropertyParams NewProp_CapturedInt64Property;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedFloatProperty_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CapturedFloatProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedDoubleProperty_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_CapturedDoubleProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCapturedBoolProperty_MetaData[];
#endif
		static void NewProp_bCapturedBoolProperty_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCapturedBoolProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedObjectProperty_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CapturedObjectProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedSoftObjectProperty_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_CapturedSoftObjectProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedInterfaceProperty_MetaData[];
#endif
		static const UECodeGen_Private::FInterfacePropertyParams NewProp_CapturedInterfaceProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedNameProperty_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CapturedNameProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedStrProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_CapturedStrProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedTextProperty_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_CapturedTextProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedVectorProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedVectorProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyTemplateObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManager,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyTemplateObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\nIn order to use PropertyEditorModule.CreateSingleProperty we have to give it an object instance\nand the name of the target property to edit. It will then iterate the object for a property with that\nname and create a property editor widget.\n\nThis is very limiting when editing a single entry within an FArrayProperty, as the inner and the\narray prop will have the same name, leading it to create an array editor. Also, since we have to\ngive it an instance, modifying the widget will automatically modify the object, which we may not\nwant, we may just want a property editor of a particular type.\n\nThis class is a hack around all that: It has an instance of most property types,\nso that you can instantiate one of these and just pass along the name of the property type you want.\nThey are all be named Captured<propertyType> (e.g. CapturedFloatProperty, CapturedObjectProperty,\nbCapturedBoolProperty) but you can use the helper function to get the name of the property you want.\n*/// TODO: Convert this into a static dictionary that maps to a small separate class for each property type\n// Maybe even template it for array/map/set property types\n" },
		{ "IncludePath", "PropertyTemplateObject.h" },
		{ "ModuleRelativePath", "Private/PropertyTemplateObject.h" },
		{ "ToolTip", "In order to use PropertyEditorModule.CreateSingleProperty we have to give it an object instance\nand the name of the target property to edit. It will then iterate the object for a property with that\nname and create a property editor widget.\n\nThis is very limiting when editing a single entry within an FArrayProperty, as the inner and the\narray prop will have the same name, leading it to create an array editor. Also, since we have to\ngive it an instance, modifying the widget will automatically modify the object, which we may not\nwant, we may just want a property editor of a particular type.\n\nThis class is a hack around all that: It has an instance of most property types,\nso that you can instantiate one of these and just pass along the name of the property type you want.\nThey are all be named Captured<propertyType> (e.g. CapturedFloatProperty, CapturedObjectProperty,\nbCapturedBoolProperty) but you can use the helper function to get the name of the property you want.\n// TODO: Convert this into a static dictionary that maps to a small separate class for each property type\n// Maybe even template it for array/map/set property types" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedByteProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Private/PropertyTemplateObject.h" },
		{ "ToolTip", "Captured byte property" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedByteProperty = { "CapturedByteProperty", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyTemplateObject, CapturedByteProperty), nullptr, METADATA_PARAMS(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedByteProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedByteProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedUInt16Property_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Private/PropertyTemplateObject.h" },
		{ "ToolTip", "Captured uint16 property" },
	};
#endif
	const UECodeGen_Private::FFInt16PropertyParams Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedUInt16Property = { "CapturedUInt16Property", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyTemplateObject, CapturedUInt16Property), METADATA_PARAMS(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedUInt16Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedUInt16Property_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedUInt32Property_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Private/PropertyTemplateObject.h" },
		{ "ToolTip", "Captured uint32 property" },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedUInt32Property = { "CapturedUInt32Property", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyTemplateObject, CapturedUInt32Property), METADATA_PARAMS(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedUInt32Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedUInt32Property_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedUInt64Property_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Private/PropertyTemplateObject.h" },
		{ "ToolTip", "Captured uint16 property" },
	};
#endif
	const UECodeGen_Private::FFInt64PropertyParams Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedUInt64Property = { "CapturedUInt64Property", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::UInt64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyTemplateObject, CapturedUInt64Property), METADATA_PARAMS(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedUInt64Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedUInt64Property_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedInt8Property_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Private/PropertyTemplateObject.h" },
		{ "ToolTip", "Captured int8 property" },
	};
#endif
	const UECodeGen_Private::FInt8PropertyParams Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedInt8Property = { "CapturedInt8Property", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyTemplateObject, CapturedInt8Property), METADATA_PARAMS(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedInt8Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedInt8Property_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedInt16Property_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Private/PropertyTemplateObject.h" },
		{ "ToolTip", "Captured int16 property" },
	};
#endif
	const UECodeGen_Private::FInt16PropertyParams Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedInt16Property = { "CapturedInt16Property", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Int16, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyTemplateObject, CapturedInt16Property), METADATA_PARAMS(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedInt16Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedInt16Property_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedIntProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Private/PropertyTemplateObject.h" },
		{ "ToolTip", "Captured int32 property" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedIntProperty = { "CapturedIntProperty", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyTemplateObject, CapturedIntProperty), METADATA_PARAMS(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedIntProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedIntProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedInt64Property_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Private/PropertyTemplateObject.h" },
		{ "ToolTip", "Captured int64 property" },
	};
#endif
	const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedInt64Property = { "CapturedInt64Property", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyTemplateObject, CapturedInt64Property), METADATA_PARAMS(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedInt64Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedInt64Property_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedFloatProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Private/PropertyTemplateObject.h" },
		{ "ToolTip", "Captured float property" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedFloatProperty = { "CapturedFloatProperty", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyTemplateObject, CapturedFloatProperty), METADATA_PARAMS(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedFloatProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedFloatProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedDoubleProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Private/PropertyTemplateObject.h" },
		{ "ToolTip", "Captured double property" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedDoubleProperty = { "CapturedDoubleProperty", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyTemplateObject, CapturedDoubleProperty), METADATA_PARAMS(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedDoubleProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedDoubleProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_bCapturedBoolProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Private/PropertyTemplateObject.h" },
		{ "ToolTip", "Captured boolean property" },
	};
#endif
	void Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_bCapturedBoolProperty_SetBit(void* Obj)
	{
		((UPropertyTemplateObject*)Obj)->bCapturedBoolProperty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_bCapturedBoolProperty = { "bCapturedBoolProperty", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UPropertyTemplateObject), &Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_bCapturedBoolProperty_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_bCapturedBoolProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_bCapturedBoolProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedObjectProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Private/PropertyTemplateObject.h" },
		{ "ToolTip", "Captured UObject property" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedObjectProperty = { "CapturedObjectProperty", nullptr, (EPropertyFlags)0x0014000000002001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyTemplateObject, CapturedObjectProperty), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedObjectProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedObjectProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedSoftObjectProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Private/PropertyTemplateObject.h" },
		{ "ToolTip", "Captured Soft UObject property" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedSoftObjectProperty = { "CapturedSoftObjectProperty", nullptr, (EPropertyFlags)0x0014000000002001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyTemplateObject, CapturedSoftObjectProperty), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedSoftObjectProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedSoftObjectProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedInterfaceProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Private/PropertyTemplateObject.h" },
		{ "ToolTip", "Captured UInterface property" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedInterfaceProperty = { "CapturedInterfaceProperty", nullptr, (EPropertyFlags)0x0014000000002001, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyTemplateObject, CapturedInterfaceProperty), Z_Construct_UClass_UInterface, METADATA_PARAMS(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedInterfaceProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedInterfaceProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedNameProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Private/PropertyTemplateObject.h" },
		{ "ToolTip", "Captured FName property" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedNameProperty = { "CapturedNameProperty", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyTemplateObject, CapturedNameProperty), METADATA_PARAMS(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedNameProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedNameProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedStrProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Private/PropertyTemplateObject.h" },
		{ "ToolTip", "Captured FString property" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedStrProperty = { "CapturedStrProperty", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyTemplateObject, CapturedStrProperty), METADATA_PARAMS(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedStrProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedStrProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedTextProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Private/PropertyTemplateObject.h" },
		{ "ToolTip", "Captured FText property" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedTextProperty = { "CapturedTextProperty", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyTemplateObject, CapturedTextProperty), METADATA_PARAMS(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedTextProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedTextProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedVectorProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Private/PropertyTemplateObject.h" },
		{ "ToolTip", "Captured FVector property" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedVectorProperty = { "CapturedVectorProperty", nullptr, (EPropertyFlags)0x0010000000002001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyTemplateObject, CapturedVectorProperty), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedVectorProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedVectorProperty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPropertyTemplateObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedByteProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedUInt16Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedUInt32Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedUInt64Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedInt8Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedInt16Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedIntProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedInt64Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedFloatProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedDoubleProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_bCapturedBoolProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedObjectProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedSoftObjectProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedInterfaceProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedNameProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedStrProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedTextProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyTemplateObject_Statics::NewProp_CapturedVectorProperty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyTemplateObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyTemplateObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPropertyTemplateObject_Statics::ClassParams = {
		&UPropertyTemplateObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPropertyTemplateObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyTemplateObject_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UPropertyTemplateObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyTemplateObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyTemplateObject()
	{
		if (!Z_Registration_Info_UClass_UPropertyTemplateObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPropertyTemplateObject.OuterSingleton, Z_Construct_UClass_UPropertyTemplateObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPropertyTemplateObject.OuterSingleton;
	}
	template<> VARIANTMANAGER_API UClass* StaticClass<UPropertyTemplateObject>()
	{
		return UPropertyTemplateObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyTemplateObject);
	UPropertyTemplateObject::~UPropertyTemplateObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Private_PropertyTemplateObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Private_PropertyTemplateObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPropertyTemplateObject, UPropertyTemplateObject::StaticClass, TEXT("UPropertyTemplateObject"), &Z_Registration_Info_UClass_UPropertyTemplateObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPropertyTemplateObject), 2486749892U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Private_PropertyTemplateObject_h_93441430(TEXT("/Script/VariantManager"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Private_PropertyTemplateObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManager_Source_VariantManager_Private_PropertyTemplateObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
