// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PreProcessor/LiveLinkAxisSwitchPreProcessor.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLiveLinkAxisSwitchPreProcessor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkAnimationAxisSwitchPreProcessor();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkAnimationAxisSwitchPreProcessor_NoRegister();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor();
	LIVELINK_API UClass* Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_NoRegister();
	LIVELINK_API UEnum* Z_Construct_UEnum_LiveLink_ELiveLinkAxis();
	LIVELINKINTERFACE_API UClass* Z_Construct_UClass_ULiveLinkFramePreProcessor();
	UPackage* Z_Construct_UPackage__Script_LiveLink();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ELiveLinkAxis;
	static UEnum* ELiveLinkAxis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ELiveLinkAxis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ELiveLinkAxis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_LiveLink_ELiveLinkAxis, (UObject*)Z_Construct_UPackage__Script_LiveLink(), TEXT("ELiveLinkAxis"));
		}
		return Z_Registration_Info_UEnum_ELiveLinkAxis.OuterSingleton;
	}
	template<> LIVELINK_API UEnum* StaticEnum<ELiveLinkAxis>()
	{
		return ELiveLinkAxis_StaticEnum();
	}
	struct Z_Construct_UEnum_LiveLink_ELiveLinkAxis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_LiveLink_ELiveLinkAxis_Statics::Enumerators[] = {
		{ "ELiveLinkAxis::X", (int64)ELiveLinkAxis::X },
		{ "ELiveLinkAxis::Y", (int64)ELiveLinkAxis::Y },
		{ "ELiveLinkAxis::Z", (int64)ELiveLinkAxis::Z },
		{ "ELiveLinkAxis::XNeg", (int64)ELiveLinkAxis::XNeg },
		{ "ELiveLinkAxis::YNeg", (int64)ELiveLinkAxis::YNeg },
		{ "ELiveLinkAxis::ZNeg", (int64)ELiveLinkAxis::ZNeg },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_LiveLink_ELiveLinkAxis_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "// DO NOT modify the order or values of these enums - the code relies on the order and values and will fail if it's changed\n" },
		{ "ModuleRelativePath", "Public/PreProcessor/LiveLinkAxisSwitchPreProcessor.h" },
		{ "ToolTip", "DO NOT modify the order or values of these enums - the code relies on the order and values and will fail if it's changed" },
		{ "X.DisplayName", "X-Axis" },
		{ "X.Name", "ELiveLinkAxis::X" },
		{ "XNeg.DisplayName", "-X-Axis" },
		{ "XNeg.Name", "ELiveLinkAxis::XNeg" },
		{ "Y.DisplayName", "Y-Axis" },
		{ "Y.Name", "ELiveLinkAxis::Y" },
		{ "YNeg.DisplayName", "-Y-Axis" },
		{ "YNeg.Name", "ELiveLinkAxis::YNeg" },
		{ "Z.DisplayName", "Z-Axis" },
		{ "Z.Name", "ELiveLinkAxis::Z" },
		{ "ZNeg.DisplayName", "-Z-Axis" },
		{ "ZNeg.Name", "ELiveLinkAxis::ZNeg" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_LiveLink_ELiveLinkAxis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_LiveLink,
		nullptr,
		"ELiveLinkAxis",
		"ELiveLinkAxis",
		Z_Construct_UEnum_LiveLink_ELiveLinkAxis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLink_ELiveLinkAxis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_LiveLink_ELiveLinkAxis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_LiveLink_ELiveLinkAxis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_LiveLink_ELiveLinkAxis()
	{
		if (!Z_Registration_Info_UEnum_ELiveLinkAxis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ELiveLinkAxis.InnerSingleton, Z_Construct_UEnum_LiveLink_ELiveLinkAxis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ELiveLinkAxis.InnerSingleton;
	}
	void ULiveLinkTransformAxisSwitchPreProcessor::StaticRegisterNativesULiveLinkTransformAxisSwitchPreProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkTransformAxisSwitchPreProcessor);
	UClass* Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_NoRegister()
	{
		return ULiveLinkTransformAxisSwitchPreProcessor::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_OrientationAxisX_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrientationAxisX_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OrientationAxisX;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OrientationAxisY_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrientationAxisY_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OrientationAxisY;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OrientationAxisZ_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OrientationAxisZ_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OrientationAxisZ;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TranslationAxisX_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationAxisX_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TranslationAxisX;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TranslationAxisY_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationAxisY_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TranslationAxisY;
		static const UECodeGen_Private::FBytePropertyParams NewProp_TranslationAxisZ_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationAxisZ_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TranslationAxisZ;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FBytePropertyParams NewProp_FrontAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrontAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_FrontAxis;
		static const UECodeGen_Private::FBytePropertyParams NewProp_RightAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_RightAxis;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UpAxis_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpAxis_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UpAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseOffsetPosition_MetaData[];
#endif
		static void NewProp_bUseOffsetPosition_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOffsetPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseOffsetOrientation_MetaData[];
#endif
		static void NewProp_bUseOffsetOrientation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseOffsetOrientation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetPosition_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetPosition;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffsetOrientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffsetOrientation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkFramePreProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows to switch any axis of an incoming transform with another axis.\n * @note For example the Z-Axis of an incoming transform can be set to the (optionally negated) Y-Axis of the transform in UE.\n * @note This implies that translation, rotation and scale will be affected by switching an axis.\n */" },
		{ "DisplayName", "Transform Axis Switch" },
		{ "IncludePath", "PreProcessor/LiveLinkAxisSwitchPreProcessor.h" },
		{ "ModuleRelativePath", "Public/PreProcessor/LiveLinkAxisSwitchPreProcessor.h" },
		{ "ToolTip", "Allows to switch any axis of an incoming transform with another axis.\n@note For example the Z-Axis of an incoming transform can be set to the (optionally negated) Y-Axis of the transform in UE.\n@note This implies that translation, rotation and scale will be affected by switching an axis." },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OrientationAxisX_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OrientationAxisX_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use FrontAxis, RightAxis, UpAxis instead" },
		{ "ModuleRelativePath", "Public/PreProcessor/LiveLinkAxisSwitchPreProcessor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OrientationAxisX = { "OrientationAxisX", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkTransformAxisSwitchPreProcessor, OrientationAxisX_DEPRECATED), Z_Construct_UEnum_LiveLink_ELiveLinkAxis, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OrientationAxisX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OrientationAxisX_MetaData)) }; // 3672135808
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OrientationAxisY_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OrientationAxisY_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use FrontAxis, RightAxis, UpAxis instead" },
		{ "ModuleRelativePath", "Public/PreProcessor/LiveLinkAxisSwitchPreProcessor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OrientationAxisY = { "OrientationAxisY", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkTransformAxisSwitchPreProcessor, OrientationAxisY_DEPRECATED), Z_Construct_UEnum_LiveLink_ELiveLinkAxis, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OrientationAxisY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OrientationAxisY_MetaData)) }; // 3672135808
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OrientationAxisZ_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OrientationAxisZ_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use FrontAxis, RightAxis, UpAxis instead" },
		{ "ModuleRelativePath", "Public/PreProcessor/LiveLinkAxisSwitchPreProcessor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OrientationAxisZ = { "OrientationAxisZ", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkTransformAxisSwitchPreProcessor, OrientationAxisZ_DEPRECATED), Z_Construct_UEnum_LiveLink_ELiveLinkAxis, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OrientationAxisZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OrientationAxisZ_MetaData)) }; // 3672135808
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_TranslationAxisX_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_TranslationAxisX_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use FrontAxis, RightAxis, UpAxis instead" },
		{ "ModuleRelativePath", "Public/PreProcessor/LiveLinkAxisSwitchPreProcessor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_TranslationAxisX = { "TranslationAxisX", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkTransformAxisSwitchPreProcessor, TranslationAxisX_DEPRECATED), Z_Construct_UEnum_LiveLink_ELiveLinkAxis, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_TranslationAxisX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_TranslationAxisX_MetaData)) }; // 3672135808
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_TranslationAxisY_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_TranslationAxisY_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use FrontAxis, RightAxis, UpAxis instead" },
		{ "ModuleRelativePath", "Public/PreProcessor/LiveLinkAxisSwitchPreProcessor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_TranslationAxisY = { "TranslationAxisY", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkTransformAxisSwitchPreProcessor, TranslationAxisY_DEPRECATED), Z_Construct_UEnum_LiveLink_ELiveLinkAxis, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_TranslationAxisY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_TranslationAxisY_MetaData)) }; // 3672135808
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_TranslationAxisZ_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_TranslationAxisZ_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "Use FrontAxis, RightAxis, UpAxis instead" },
		{ "ModuleRelativePath", "Public/PreProcessor/LiveLinkAxisSwitchPreProcessor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_TranslationAxisZ = { "TranslationAxisZ", nullptr, (EPropertyFlags)0x0020080820000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkTransformAxisSwitchPreProcessor, TranslationAxisZ_DEPRECATED), Z_Construct_UEnum_LiveLink_ELiveLinkAxis, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_TranslationAxisZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_TranslationAxisZ_MetaData)) }; // 3672135808
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_FrontAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_FrontAxis_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/PreProcessor/LiveLinkAxisSwitchPreProcessor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_FrontAxis = { "FrontAxis", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkTransformAxisSwitchPreProcessor, FrontAxis), Z_Construct_UEnum_LiveLink_ELiveLinkAxis, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_FrontAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_FrontAxis_MetaData)) }; // 3672135808
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_RightAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_RightAxis_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/PreProcessor/LiveLinkAxisSwitchPreProcessor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_RightAxis = { "RightAxis", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkTransformAxisSwitchPreProcessor, RightAxis), Z_Construct_UEnum_LiveLink_ELiveLinkAxis, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_RightAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_RightAxis_MetaData)) }; // 3672135808
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_UpAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_UpAxis_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Public/PreProcessor/LiveLinkAxisSwitchPreProcessor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_UpAxis = { "UpAxis", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkTransformAxisSwitchPreProcessor, UpAxis), Z_Construct_UEnum_LiveLink_ELiveLinkAxis, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_UpAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_UpAxis_MetaData)) }; // 3672135808
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_bUseOffsetPosition_MetaData[] = {
		{ "Category", "Enables" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PreProcessor/LiveLinkAxisSwitchPreProcessor.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_bUseOffsetPosition_SetBit(void* Obj)
	{
		((ULiveLinkTransformAxisSwitchPreProcessor*)Obj)->bUseOffsetPosition = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_bUseOffsetPosition = { "bUseOffsetPosition", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveLinkTransformAxisSwitchPreProcessor), &Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_bUseOffsetPosition_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_bUseOffsetPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_bUseOffsetPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_bUseOffsetOrientation_MetaData[] = {
		{ "Category", "Enables" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/PreProcessor/LiveLinkAxisSwitchPreProcessor.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_bUseOffsetOrientation_SetBit(void* Obj)
	{
		((ULiveLinkTransformAxisSwitchPreProcessor*)Obj)->bUseOffsetOrientation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_bUseOffsetOrientation = { "bUseOffsetOrientation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ULiveLinkTransformAxisSwitchPreProcessor), &Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_bUseOffsetOrientation_SetBit, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_bUseOffsetOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_bUseOffsetOrientation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OffsetPosition_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "EditCondition", "bUseOffsetPosition" },
		{ "ModuleRelativePath", "Public/PreProcessor/LiveLinkAxisSwitchPreProcessor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OffsetPosition = { "OffsetPosition", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkTransformAxisSwitchPreProcessor, OffsetPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OffsetPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OffsetPosition_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OffsetOrientation_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "EditCondition", "bUseOffsetOrientation" },
		{ "ModuleRelativePath", "Public/PreProcessor/LiveLinkAxisSwitchPreProcessor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OffsetOrientation = { "OffsetOrientation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULiveLinkTransformAxisSwitchPreProcessor, OffsetOrientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OffsetOrientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OffsetOrientation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OrientationAxisX_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OrientationAxisX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OrientationAxisY_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OrientationAxisY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OrientationAxisZ_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OrientationAxisZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_TranslationAxisX_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_TranslationAxisX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_TranslationAxisY_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_TranslationAxisY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_TranslationAxisZ_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_TranslationAxisZ,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_FrontAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_FrontAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_RightAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_RightAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_UpAxis_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_UpAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_bUseOffsetPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_bUseOffsetOrientation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OffsetPosition,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::NewProp_OffsetOrientation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkTransformAxisSwitchPreProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::ClassParams = {
		&ULiveLinkTransformAxisSwitchPreProcessor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkTransformAxisSwitchPreProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkTransformAxisSwitchPreProcessor.OuterSingleton, Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkTransformAxisSwitchPreProcessor.OuterSingleton;
	}
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkTransformAxisSwitchPreProcessor>()
	{
		return ULiveLinkTransformAxisSwitchPreProcessor::StaticClass();
	}
	ULiveLinkTransformAxisSwitchPreProcessor::ULiveLinkTransformAxisSwitchPreProcessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkTransformAxisSwitchPreProcessor);
	ULiveLinkTransformAxisSwitchPreProcessor::~ULiveLinkTransformAxisSwitchPreProcessor() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULiveLinkTransformAxisSwitchPreProcessor)
	void ULiveLinkAnimationAxisSwitchPreProcessor::StaticRegisterNativesULiveLinkAnimationAxisSwitchPreProcessor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULiveLinkAnimationAxisSwitchPreProcessor);
	UClass* Z_Construct_UClass_ULiveLinkAnimationAxisSwitchPreProcessor_NoRegister()
	{
		return ULiveLinkAnimationAxisSwitchPreProcessor::StaticClass();
	}
	struct Z_Construct_UClass_ULiveLinkAnimationAxisSwitchPreProcessor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULiveLinkAnimationAxisSwitchPreProcessor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor,
		(UObject* (*)())Z_Construct_UPackage__Script_LiveLink,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULiveLinkAnimationAxisSwitchPreProcessor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Allows to switch any axis of an incoming animation with another axis.\n * @note For example the Z-Axis of an incoming transform can be set to the (optionally negated) Y-Axis of the transform in UE.\n * @note This implies that translation, rotation and scale will be affected by switching an axis.\n */" },
		{ "DisplayName", "Animation Axis Switch" },
		{ "IncludePath", "PreProcessor/LiveLinkAxisSwitchPreProcessor.h" },
		{ "ModuleRelativePath", "Public/PreProcessor/LiveLinkAxisSwitchPreProcessor.h" },
		{ "ToolTip", "Allows to switch any axis of an incoming animation with another axis.\n@note For example the Z-Axis of an incoming transform can be set to the (optionally negated) Y-Axis of the transform in UE.\n@note This implies that translation, rotation and scale will be affected by switching an axis." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULiveLinkAnimationAxisSwitchPreProcessor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULiveLinkAnimationAxisSwitchPreProcessor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULiveLinkAnimationAxisSwitchPreProcessor_Statics::ClassParams = {
		&ULiveLinkAnimationAxisSwitchPreProcessor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULiveLinkAnimationAxisSwitchPreProcessor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULiveLinkAnimationAxisSwitchPreProcessor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULiveLinkAnimationAxisSwitchPreProcessor()
	{
		if (!Z_Registration_Info_UClass_ULiveLinkAnimationAxisSwitchPreProcessor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULiveLinkAnimationAxisSwitchPreProcessor.OuterSingleton, Z_Construct_UClass_ULiveLinkAnimationAxisSwitchPreProcessor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULiveLinkAnimationAxisSwitchPreProcessor.OuterSingleton;
	}
	template<> LIVELINK_API UClass* StaticClass<ULiveLinkAnimationAxisSwitchPreProcessor>()
	{
		return ULiveLinkAnimationAxisSwitchPreProcessor::StaticClass();
	}
	ULiveLinkAnimationAxisSwitchPreProcessor::ULiveLinkAnimationAxisSwitchPreProcessor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULiveLinkAnimationAxisSwitchPreProcessor);
	ULiveLinkAnimationAxisSwitchPreProcessor::~ULiveLinkAnimationAxisSwitchPreProcessor() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_PreProcessor_LiveLinkAxisSwitchPreProcessor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_PreProcessor_LiveLinkAxisSwitchPreProcessor_h_Statics::EnumInfo[] = {
		{ ELiveLinkAxis_StaticEnum, TEXT("ELiveLinkAxis"), &Z_Registration_Info_UEnum_ELiveLinkAxis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3672135808U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_PreProcessor_LiveLinkAxisSwitchPreProcessor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULiveLinkTransformAxisSwitchPreProcessor, ULiveLinkTransformAxisSwitchPreProcessor::StaticClass, TEXT("ULiveLinkTransformAxisSwitchPreProcessor"), &Z_Registration_Info_UClass_ULiveLinkTransformAxisSwitchPreProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkTransformAxisSwitchPreProcessor), 2250814882U) },
		{ Z_Construct_UClass_ULiveLinkAnimationAxisSwitchPreProcessor, ULiveLinkAnimationAxisSwitchPreProcessor::StaticClass, TEXT("ULiveLinkAnimationAxisSwitchPreProcessor"), &Z_Registration_Info_UClass_ULiveLinkAnimationAxisSwitchPreProcessor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULiveLinkAnimationAxisSwitchPreProcessor), 2629988902U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_PreProcessor_LiveLinkAxisSwitchPreProcessor_h_3291666811(TEXT("/Script/LiveLink"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_PreProcessor_LiveLinkAxisSwitchPreProcessor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_PreProcessor_LiveLinkAxisSwitchPreProcessor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_PreProcessor_LiveLinkAxisSwitchPreProcessor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_LiveLink_Source_LiveLink_Public_PreProcessor_LiveLinkAxisSwitchPreProcessor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
