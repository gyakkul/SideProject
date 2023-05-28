// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VariantManagerTestActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVariantManagerTestActor() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector4();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_VariantManagerContentEditor();
	VARIANTMANAGERCONTENTEDITOR_API UClass* Z_Construct_UClass_AVariantManagerTestActor();
	VARIANTMANAGERCONTENTEDITOR_API UClass* Z_Construct_UClass_AVariantManagerTestActor_NoRegister();
	VARIANTMANAGERCONTENTEDITOR_API UEnum* Z_Construct_UEnum_VariantManagerContentEditor_EVariantManagerTestEnum();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVariantManagerTestEnum;
	static UEnum* EVariantManagerTestEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVariantManagerTestEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVariantManagerTestEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VariantManagerContentEditor_EVariantManagerTestEnum, (UObject*)Z_Construct_UPackage__Script_VariantManagerContentEditor(), TEXT("EVariantManagerTestEnum"));
		}
		return Z_Registration_Info_UEnum_EVariantManagerTestEnum.OuterSingleton;
	}
	template<> VARIANTMANAGERCONTENTEDITOR_API UEnum* StaticEnum<EVariantManagerTestEnum>()
	{
		return EVariantManagerTestEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_VariantManagerContentEditor_EVariantManagerTestEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VariantManagerContentEditor_EVariantManagerTestEnum_Statics::Enumerators[] = {
		{ "EVariantManagerTestEnum::None", (int64)EVariantManagerTestEnum::None },
		{ "EVariantManagerTestEnum::FirstOption", (int64)EVariantManagerTestEnum::FirstOption },
		{ "EVariantManagerTestEnum::SecondOption", (int64)EVariantManagerTestEnum::SecondOption },
		{ "EVariantManagerTestEnum::ThirdOption", (int64)EVariantManagerTestEnum::ThirdOption },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VariantManagerContentEditor_EVariantManagerTestEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "FirstOption.Name", "EVariantManagerTestEnum::FirstOption" },
		{ "ModuleRelativePath", "Public/VariantManagerTestActor.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "EVariantManagerTestEnum::None" },
		{ "SecondOption.Name", "EVariantManagerTestEnum::SecondOption" },
		{ "ThirdOption.Name", "EVariantManagerTestEnum::ThirdOption" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VariantManagerContentEditor_EVariantManagerTestEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VariantManagerContentEditor,
		nullptr,
		"EVariantManagerTestEnum",
		"EVariantManagerTestEnum",
		Z_Construct_UEnum_VariantManagerContentEditor_EVariantManagerTestEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VariantManagerContentEditor_EVariantManagerTestEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VariantManagerContentEditor_EVariantManagerTestEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VariantManagerContentEditor_EVariantManagerTestEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VariantManagerContentEditor_EVariantManagerTestEnum()
	{
		if (!Z_Registration_Info_UEnum_EVariantManagerTestEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVariantManagerTestEnum.InnerSingleton, Z_Construct_UEnum_VariantManagerContentEditor_EVariantManagerTestEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVariantManagerTestEnum.InnerSingleton;
	}
	void AVariantManagerTestActor::StaticRegisterNativesAVariantManagerTestActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVariantManagerTestActor);
	UClass* Z_Construct_UClass_AVariantManagerTestActor_NoRegister()
	{
		return AVariantManagerTestActor::StaticClass();
	}
	struct Z_Construct_UClass_AVariantManagerTestActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnumWithNoDefault_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumWithNoDefault_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EnumWithNoDefault;
		static const UECodeGen_Private::FBytePropertyParams NewProp_EnumWithSecondDefault_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnumWithSecondDefault_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_EnumWithSecondDefault;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedByteProperty_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CapturedByteProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedIntProperty_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CapturedIntProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedFloatProperty_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CapturedFloatProperty;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedRotatorProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedRotatorProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedColorProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedColorProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedLinearColorProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedLinearColorProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedVectorProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedVectorProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedQuatProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedQuatProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedVector4Property_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedVector4Property;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedVector2DProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedVector2DProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedIntPointProperty_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedIntPointProperty;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CapturedUObjectArrayProperty_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedUObjectArrayProperty_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CapturedUObjectArrayProperty;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CapturedVectorArrayProperty_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CapturedVectorArrayProperty_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CapturedVectorArrayProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVariantManagerTestActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContentEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVariantManagerTestActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Physics HLOD Activation Input Actor Cooking" },
		{ "IncludePath", "VariantManagerTestActor.h" },
		{ "ModuleRelativePath", "Public/VariantManagerTestActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_EnumWithNoDefault_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_EnumWithNoDefault_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/VariantManagerTestActor.h" },
		{ "ToolTip", "Captured byte property" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_EnumWithNoDefault = { "EnumWithNoDefault", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVariantManagerTestActor, EnumWithNoDefault), Z_Construct_UEnum_VariantManagerContentEditor_EVariantManagerTestEnum, METADATA_PARAMS(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_EnumWithNoDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_EnumWithNoDefault_MetaData)) }; // 2714644274
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_EnumWithSecondDefault_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_EnumWithSecondDefault_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/VariantManagerTestActor.h" },
		{ "ToolTip", "Captured byte property" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_EnumWithSecondDefault = { "EnumWithSecondDefault", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVariantManagerTestActor, EnumWithSecondDefault), Z_Construct_UEnum_VariantManagerContentEditor_EVariantManagerTestEnum, METADATA_PARAMS(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_EnumWithSecondDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_EnumWithSecondDefault_MetaData)) }; // 2714644274
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedByteProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/VariantManagerTestActor.h" },
		{ "ToolTip", "Captured byte property" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedByteProperty = { "CapturedByteProperty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVariantManagerTestActor, CapturedByteProperty), nullptr, METADATA_PARAMS(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedByteProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedByteProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedIntProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/VariantManagerTestActor.h" },
		{ "ToolTip", "Captured int32 property" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedIntProperty = { "CapturedIntProperty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVariantManagerTestActor, CapturedIntProperty), METADATA_PARAMS(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedIntProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedIntProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedFloatProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/VariantManagerTestActor.h" },
		{ "ToolTip", "Captured float property" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedFloatProperty = { "CapturedFloatProperty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVariantManagerTestActor, CapturedFloatProperty), METADATA_PARAMS(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedFloatProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedFloatProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_bCapturedBoolProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/VariantManagerTestActor.h" },
		{ "ToolTip", "Captured boolean property" },
	};
#endif
	void Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_bCapturedBoolProperty_SetBit(void* Obj)
	{
		((AVariantManagerTestActor*)Obj)->bCapturedBoolProperty = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_bCapturedBoolProperty = { "bCapturedBoolProperty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AVariantManagerTestActor), &Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_bCapturedBoolProperty_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_bCapturedBoolProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_bCapturedBoolProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedObjectProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/VariantManagerTestActor.h" },
		{ "ToolTip", "Captured UObject property" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedObjectProperty = { "CapturedObjectProperty", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVariantManagerTestActor, CapturedObjectProperty), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedObjectProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedObjectProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedInterfaceProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/VariantManagerTestActor.h" },
		{ "ToolTip", "Captured UInterface property" },
	};
#endif
	const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedInterfaceProperty = { "CapturedInterfaceProperty", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVariantManagerTestActor, CapturedInterfaceProperty), Z_Construct_UClass_UInterface, METADATA_PARAMS(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedInterfaceProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedInterfaceProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedNameProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/VariantManagerTestActor.h" },
		{ "ToolTip", "Captured FName property" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedNameProperty = { "CapturedNameProperty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVariantManagerTestActor, CapturedNameProperty), METADATA_PARAMS(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedNameProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedNameProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedStrProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/VariantManagerTestActor.h" },
		{ "ToolTip", "Captured FString property" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedStrProperty = { "CapturedStrProperty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVariantManagerTestActor, CapturedStrProperty), METADATA_PARAMS(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedStrProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedStrProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedTextProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/VariantManagerTestActor.h" },
		{ "ToolTip", "Captured FText property" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedTextProperty = { "CapturedTextProperty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVariantManagerTestActor, CapturedTextProperty), METADATA_PARAMS(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedTextProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedTextProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedRotatorProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/VariantManagerTestActor.h" },
		{ "ToolTip", "Captured FRotator property" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedRotatorProperty = { "CapturedRotatorProperty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVariantManagerTestActor, CapturedRotatorProperty), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedRotatorProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedRotatorProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedColorProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/VariantManagerTestActor.h" },
		{ "ToolTip", "Captured FColor property" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedColorProperty = { "CapturedColorProperty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVariantManagerTestActor, CapturedColorProperty), Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedColorProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedColorProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedLinearColorProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/VariantManagerTestActor.h" },
		{ "ToolTip", "Captured FLinearColor property" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedLinearColorProperty = { "CapturedLinearColorProperty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVariantManagerTestActor, CapturedLinearColorProperty), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedLinearColorProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedLinearColorProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedVectorProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/VariantManagerTestActor.h" },
		{ "ToolTip", "Captured FVector property" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedVectorProperty = { "CapturedVectorProperty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVariantManagerTestActor, CapturedVectorProperty), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedVectorProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedVectorProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedQuatProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/VariantManagerTestActor.h" },
		{ "ToolTip", "Captured FQuat property" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedQuatProperty = { "CapturedQuatProperty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVariantManagerTestActor, CapturedQuatProperty), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedQuatProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedQuatProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedVector4Property_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/VariantManagerTestActor.h" },
		{ "ToolTip", "Captured FVector4 property" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedVector4Property = { "CapturedVector4Property", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVariantManagerTestActor, CapturedVector4Property), Z_Construct_UScriptStruct_FVector4, METADATA_PARAMS(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedVector4Property_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedVector4Property_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedVector2DProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/VariantManagerTestActor.h" },
		{ "ToolTip", "Captured FVector2D property" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedVector2DProperty = { "CapturedVector2DProperty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVariantManagerTestActor, CapturedVector2DProperty), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedVector2DProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedVector2DProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedIntPointProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/VariantManagerTestActor.h" },
		{ "ToolTip", "Captured FIntPoint property" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedIntPointProperty = { "CapturedIntPointProperty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVariantManagerTestActor, CapturedIntPointProperty), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedIntPointProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedIntPointProperty_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedUObjectArrayProperty_Inner = { "CapturedUObjectArrayProperty", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedUObjectArrayProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/VariantManagerTestActor.h" },
		{ "ToolTip", "Captured UObject array property" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedUObjectArrayProperty = { "CapturedUObjectArrayProperty", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVariantManagerTestActor, CapturedUObjectArrayProperty), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedUObjectArrayProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedUObjectArrayProperty_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedVectorArrayProperty_Inner = { "CapturedVectorArrayProperty", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedVectorArrayProperty_MetaData[] = {
		{ "Category", "Template" },
		{ "ModuleRelativePath", "Public/VariantManagerTestActor.h" },
		{ "ToolTip", "Captured FVector array property" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedVectorArrayProperty = { "CapturedVectorArrayProperty", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVariantManagerTestActor, CapturedVectorArrayProperty), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedVectorArrayProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedVectorArrayProperty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVariantManagerTestActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_EnumWithNoDefault_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_EnumWithNoDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_EnumWithSecondDefault_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_EnumWithSecondDefault,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedByteProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedIntProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedFloatProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_bCapturedBoolProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedObjectProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedInterfaceProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedNameProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedStrProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedTextProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedRotatorProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedColorProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedLinearColorProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedVectorProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedQuatProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedVector4Property,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedVector2DProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedIntPointProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedUObjectArrayProperty_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedUObjectArrayProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedVectorArrayProperty_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVariantManagerTestActor_Statics::NewProp_CapturedVectorArrayProperty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVariantManagerTestActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVariantManagerTestActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVariantManagerTestActor_Statics::ClassParams = {
		&AVariantManagerTestActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVariantManagerTestActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVariantManagerTestActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVariantManagerTestActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVariantManagerTestActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVariantManagerTestActor()
	{
		if (!Z_Registration_Info_UClass_AVariantManagerTestActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVariantManagerTestActor.OuterSingleton, Z_Construct_UClass_AVariantManagerTestActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVariantManagerTestActor.OuterSingleton;
	}
	template<> VARIANTMANAGERCONTENTEDITOR_API UClass* StaticClass<AVariantManagerTestActor>()
	{
		return AVariantManagerTestActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVariantManagerTestActor);
	AVariantManagerTestActor::~AVariantManagerTestActor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_Statics::EnumInfo[] = {
		{ EVariantManagerTestEnum_StaticEnum, TEXT("EVariantManagerTestEnum"), &Z_Registration_Info_UEnum_EVariantManagerTestEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2714644274U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVariantManagerTestActor, AVariantManagerTestActor::StaticClass, TEXT("AVariantManagerTestActor"), &Z_Registration_Info_UClass_AVariantManagerTestActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVariantManagerTestActor), 4187289176U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_3821409895(TEXT("/Script/VariantManagerContentEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContentEditor_Public_VariantManagerTestActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
