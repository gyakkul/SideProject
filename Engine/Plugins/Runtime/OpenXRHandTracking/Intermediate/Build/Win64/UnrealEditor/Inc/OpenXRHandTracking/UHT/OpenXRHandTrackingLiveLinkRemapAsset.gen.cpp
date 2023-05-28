// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/OpenXRHandTrackingLiveLinkRemapAsset.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOpenXRHandTrackingLiveLinkRemapAsset() {}
// Cross Module References
	LIVELINKANIMATIONCORE_API UClass* Z_Construct_UClass_ULiveLinkRetargetAsset();
	OPENXRHANDTRACKING_API UClass* Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset();
	OPENXRHANDTRACKING_API UClass* Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_NoRegister();
	OPENXRHANDTRACKING_API UEnum* Z_Construct_UEnum_OpenXRHandTracking_EQuatSwizzleAxisB();
	UPackage* Z_Construct_UPackage__Script_OpenXRHandTracking();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EQuatSwizzleAxisB;
	static UEnum* EQuatSwizzleAxisB_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EQuatSwizzleAxisB.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EQuatSwizzleAxisB.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_OpenXRHandTracking_EQuatSwizzleAxisB, (UObject*)Z_Construct_UPackage__Script_OpenXRHandTracking(), TEXT("EQuatSwizzleAxisB"));
		}
		return Z_Registration_Info_UEnum_EQuatSwizzleAxisB.OuterSingleton;
	}
	template<> OPENXRHANDTRACKING_API UEnum* StaticEnum<EQuatSwizzleAxisB>()
	{
		return EQuatSwizzleAxisB_StaticEnum();
	}
	struct Z_Construct_UEnum_OpenXRHandTracking_EQuatSwizzleAxisB_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_OpenXRHandTracking_EQuatSwizzleAxisB_Statics::Enumerators[] = {
		{ "EQuatSwizzleAxisB::X", (int64)EQuatSwizzleAxisB::X },
		{ "EQuatSwizzleAxisB::Y", (int64)EQuatSwizzleAxisB::Y },
		{ "EQuatSwizzleAxisB::Z", (int64)EQuatSwizzleAxisB::Z },
		{ "EQuatSwizzleAxisB::W", (int64)EQuatSwizzleAxisB::W },
		{ "EQuatSwizzleAxisB::MinusX", (int64)EQuatSwizzleAxisB::MinusX },
		{ "EQuatSwizzleAxisB::MinusY", (int64)EQuatSwizzleAxisB::MinusY },
		{ "EQuatSwizzleAxisB::MinusZ", (int64)EQuatSwizzleAxisB::MinusZ },
		{ "EQuatSwizzleAxisB::MinusW", (int64)EQuatSwizzleAxisB::MinusW },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_OpenXRHandTracking_EQuatSwizzleAxisB_Statics::Enum_MetaDataParams[] = {
		{ "MinusW.DisplayName", "-W" },
		{ "MinusW.Name", "EQuatSwizzleAxisB::MinusW" },
		{ "MinusX.DisplayName", "-X" },
		{ "MinusX.Name", "EQuatSwizzleAxisB::MinusX" },
		{ "MinusY.DisplayName", "-Y" },
		{ "MinusY.Name", "EQuatSwizzleAxisB::MinusY" },
		{ "MinusZ.DisplayName", "-Z" },
		{ "MinusZ.Name", "EQuatSwizzleAxisB::MinusZ" },
		{ "ModuleRelativePath", "Private/OpenXRHandTrackingLiveLinkRemapAsset.h" },
		{ "W.DisplayName", "W" },
		{ "W.Name", "EQuatSwizzleAxisB::W" },
		{ "X.DisplayName", "X" },
		{ "X.Name", "EQuatSwizzleAxisB::X" },
		{ "Y.DisplayName", "Y" },
		{ "Y.Name", "EQuatSwizzleAxisB::Y" },
		{ "Z.DisplayName", "Z" },
		{ "Z.Name", "EQuatSwizzleAxisB::Z" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_OpenXRHandTracking_EQuatSwizzleAxisB_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_OpenXRHandTracking,
		nullptr,
		"EQuatSwizzleAxisB",
		"EQuatSwizzleAxisB",
		Z_Construct_UEnum_OpenXRHandTracking_EQuatSwizzleAxisB_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_OpenXRHandTracking_EQuatSwizzleAxisB_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_OpenXRHandTracking_EQuatSwizzleAxisB_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_OpenXRHandTracking_EQuatSwizzleAxisB_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_OpenXRHandTracking_EQuatSwizzleAxisB()
	{
		if (!Z_Registration_Info_UEnum_EQuatSwizzleAxisB.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EQuatSwizzleAxisB.InnerSingleton, Z_Construct_UEnum_OpenXRHandTracking_EQuatSwizzleAxisB_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EQuatSwizzleAxisB.InnerSingleton;
	}
	void UOpenXRHandTrackingLiveLinkRemapAsset::StaticRegisterNativesUOpenXRHandTrackingLiveLinkRemapAsset()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOpenXRHandTrackingLiveLinkRemapAsset);
	UClass* Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_NoRegister()
	{
		return UOpenXRHandTrackingLiveLinkRemapAsset::StaticClass();
	}
	struct Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasMetacarpals_MetaData[];
#endif
		static void NewProp_bHasMetacarpals_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasMetacarpals;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRetargetRotationOnly_MetaData[];
#endif
		static void NewProp_bRetargetRotationOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRetargetRotationOnly;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SwizzleX_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwizzleX_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SwizzleX;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SwizzleY_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwizzleY_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SwizzleY;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SwizzleZ_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwizzleZ_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SwizzleZ;
		static const UECodeGen_Private::FBytePropertyParams NewProp_SwizzleW_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SwizzleW_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_SwizzleW;
		static const UECodeGen_Private::FNamePropertyParams NewProp_HandTrackingBoneNameMap_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_HandTrackingBoneNameMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandTrackingBoneNameMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_HandTrackingBoneNameMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ULiveLinkRetargetAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_OpenXRHandTracking,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n  * OpenXR HandTracking LiveLink remapping asset\n  */" },
		{ "IncludePath", "OpenXRHandTrackingLiveLinkRemapAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Private/OpenXRHandTrackingLiveLinkRemapAsset.h" },
		{ "ToolTip", "OpenXR HandTracking LiveLink remapping asset" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_bHasMetacarpals_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** If true, remap the full human hand skeleton including metacarpals */" },
		{ "ModuleRelativePath", "Private/OpenXRHandTrackingLiveLinkRemapAsset.h" },
		{ "ToolTip", "If true, remap the full human hand skeleton including metacarpals" },
	};
#endif
	void Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_bHasMetacarpals_SetBit(void* Obj)
	{
		((UOpenXRHandTrackingLiveLinkRemapAsset*)Obj)->bHasMetacarpals = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_bHasMetacarpals = { "bHasMetacarpals", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOpenXRHandTrackingLiveLinkRemapAsset), &Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_bHasMetacarpals_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_bHasMetacarpals_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_bHasMetacarpals_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_bRetargetRotationOnly_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Only apply the orientation to each bone */" },
		{ "ModuleRelativePath", "Private/OpenXRHandTrackingLiveLinkRemapAsset.h" },
		{ "ToolTip", "Only apply the orientation to each bone" },
	};
#endif
	void Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_bRetargetRotationOnly_SetBit(void* Obj)
	{
		((UOpenXRHandTrackingLiveLinkRemapAsset*)Obj)->bRetargetRotationOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_bRetargetRotationOnly = { "bRetargetRotationOnly", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOpenXRHandTrackingLiveLinkRemapAsset), &Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_bRetargetRotationOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_bRetargetRotationOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_bRetargetRotationOnly_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleX_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleX_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "Comment", "/** Reorient the skeleton (swizzle the quaternion) to adjust for base skeleton and incoming skeleton differences */" },
		{ "ModuleRelativePath", "Private/OpenXRHandTrackingLiveLinkRemapAsset.h" },
		{ "ToolTip", "Reorient the skeleton (swizzle the quaternion) to adjust for base skeleton and incoming skeleton differences" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleX = { "SwizzleX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOpenXRHandTrackingLiveLinkRemapAsset, SwizzleX), Z_Construct_UEnum_OpenXRHandTracking_EQuatSwizzleAxisB, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleX_MetaData)) }; // 819236860
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleY_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleY_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Private/OpenXRHandTrackingLiveLinkRemapAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleY = { "SwizzleY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOpenXRHandTrackingLiveLinkRemapAsset, SwizzleY), Z_Construct_UEnum_OpenXRHandTracking_EQuatSwizzleAxisB, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleY_MetaData)) }; // 819236860
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleZ_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleZ_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Private/OpenXRHandTrackingLiveLinkRemapAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleZ = { "SwizzleZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOpenXRHandTrackingLiveLinkRemapAsset, SwizzleZ), Z_Construct_UEnum_OpenXRHandTracking_EQuatSwizzleAxisB, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleZ_MetaData)) }; // 819236860
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleW_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleW_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Private/OpenXRHandTrackingLiveLinkRemapAsset.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleW = { "SwizzleW", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOpenXRHandTrackingLiveLinkRemapAsset, SwizzleW), Z_Construct_UEnum_OpenXRHandTracking_EQuatSwizzleAxisB, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleW_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleW_MetaData)) }; // 819236860
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_HandTrackingBoneNameMap_ValueProp = { "HandTrackingBoneNameMap", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_HandTrackingBoneNameMap_Key_KeyProp = { "HandTrackingBoneNameMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_HandTrackingBoneNameMap_MetaData[] = {
		{ "Category", "LiveLink" },
		{ "ModuleRelativePath", "Private/OpenXRHandTrackingLiveLinkRemapAsset.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_HandTrackingBoneNameMap = { "HandTrackingBoneNameMap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOpenXRHandTrackingLiveLinkRemapAsset, HandTrackingBoneNameMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_HandTrackingBoneNameMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_HandTrackingBoneNameMap_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_bHasMetacarpals,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_bRetargetRotationOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleX_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleY_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleZ_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleZ,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleW_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_SwizzleW,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_HandTrackingBoneNameMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_HandTrackingBoneNameMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::NewProp_HandTrackingBoneNameMap,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOpenXRHandTrackingLiveLinkRemapAsset>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::ClassParams = {
		&UOpenXRHandTrackingLiveLinkRemapAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset()
	{
		if (!Z_Registration_Info_UClass_UOpenXRHandTrackingLiveLinkRemapAsset.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOpenXRHandTrackingLiveLinkRemapAsset.OuterSingleton, Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOpenXRHandTrackingLiveLinkRemapAsset.OuterSingleton;
	}
	template<> OPENXRHANDTRACKING_API UClass* StaticClass<UOpenXRHandTrackingLiveLinkRemapAsset>()
	{
		return UOpenXRHandTrackingLiveLinkRemapAsset::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOpenXRHandTrackingLiveLinkRemapAsset);
	UOpenXRHandTrackingLiveLinkRemapAsset::~UOpenXRHandTrackingLiveLinkRemapAsset() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXRHandTracking_Source_OpenXRHandTracking_Private_OpenXRHandTrackingLiveLinkRemapAsset_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXRHandTracking_Source_OpenXRHandTracking_Private_OpenXRHandTrackingLiveLinkRemapAsset_h_Statics::EnumInfo[] = {
		{ EQuatSwizzleAxisB_StaticEnum, TEXT("EQuatSwizzleAxisB"), &Z_Registration_Info_UEnum_EQuatSwizzleAxisB, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 819236860U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXRHandTracking_Source_OpenXRHandTracking_Private_OpenXRHandTrackingLiveLinkRemapAsset_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOpenXRHandTrackingLiveLinkRemapAsset, UOpenXRHandTrackingLiveLinkRemapAsset::StaticClass, TEXT("UOpenXRHandTrackingLiveLinkRemapAsset"), &Z_Registration_Info_UClass_UOpenXRHandTrackingLiveLinkRemapAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOpenXRHandTrackingLiveLinkRemapAsset), 1977180794U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXRHandTracking_Source_OpenXRHandTracking_Private_OpenXRHandTrackingLiveLinkRemapAsset_h_4272597198(TEXT("/Script/OpenXRHandTracking"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXRHandTracking_Source_OpenXRHandTracking_Private_OpenXRHandTrackingLiveLinkRemapAsset_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXRHandTracking_Source_OpenXRHandTracking_Private_OpenXRHandTrackingLiveLinkRemapAsset_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXRHandTracking_Source_OpenXRHandTracking_Private_OpenXRHandTrackingLiveLinkRemapAsset_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_OpenXRHandTracking_Source_OpenXRHandTracking_Private_OpenXRHandTrackingLiveLinkRemapAsset_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
