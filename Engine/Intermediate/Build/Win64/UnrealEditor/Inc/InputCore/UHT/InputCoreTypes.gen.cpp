// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputCoreTypes() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INPUTCORE_API UClass* Z_Construct_UClass_UInputCoreTypes();
	INPUTCORE_API UClass* Z_Construct_UClass_UInputCoreTypes_NoRegister();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EConsoleForGamepadLabels();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_EControllerHand();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_ETouchIndex();
	INPUTCORE_API UEnum* Z_Construct_UEnum_InputCore_ETouchType();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_InputCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EControllerHand;
	static UEnum* EControllerHand_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EControllerHand.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EControllerHand.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InputCore_EControllerHand, (UObject*)Z_Construct_UPackage__Script_InputCore(), TEXT("EControllerHand"));
		}
		return Z_Registration_Info_UEnum_EControllerHand.OuterSingleton;
	}
	template<> INPUTCORE_API UEnum* StaticEnum<EControllerHand>()
	{
		return EControllerHand_StaticEnum();
	}
	struct Z_Construct_UEnum_InputCore_EControllerHand_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InputCore_EControllerHand_Statics::Enumerators[] = {
		{ "EControllerHand::Left", (int64)EControllerHand::Left },
		{ "EControllerHand::Right", (int64)EControllerHand::Right },
		{ "EControllerHand::AnyHand", (int64)EControllerHand::AnyHand },
		{ "EControllerHand::Pad", (int64)EControllerHand::Pad },
		{ "EControllerHand::ExternalCamera", (int64)EControllerHand::ExternalCamera },
		{ "EControllerHand::Gun", (int64)EControllerHand::Gun },
		{ "EControllerHand::HMD", (int64)EControllerHand::HMD },
		{ "EControllerHand::Chest", (int64)EControllerHand::Chest },
		{ "EControllerHand::LeftShoulder", (int64)EControllerHand::LeftShoulder },
		{ "EControllerHand::RightShoulder", (int64)EControllerHand::RightShoulder },
		{ "EControllerHand::LeftElbow", (int64)EControllerHand::LeftElbow },
		{ "EControllerHand::RightElbow", (int64)EControllerHand::RightElbow },
		{ "EControllerHand::Waist", (int64)EControllerHand::Waist },
		{ "EControllerHand::LeftKnee", (int64)EControllerHand::LeftKnee },
		{ "EControllerHand::RightKnee", (int64)EControllerHand::RightKnee },
		{ "EControllerHand::LeftFoot", (int64)EControllerHand::LeftFoot },
		{ "EControllerHand::RightFoot", (int64)EControllerHand::RightFoot },
		{ "EControllerHand::Special", (int64)EControllerHand::Special },
		{ "EControllerHand::ControllerHand_Count", (int64)EControllerHand::ControllerHand_Count },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InputCore_EControllerHand_Statics::Enum_MetaDataParams[] = {
		{ "AnyHand.Name", "EControllerHand::AnyHand" },
		{ "BlueprintType", "true" },
		{ "Chest.Name", "EControllerHand::Chest" },
		{ "Comment", "/** Defines the controller hands for tracking.  Could be expanded, as needed, to facilitate non-handheld controllers */" },
		{ "ControllerHand_Count.DisplayName", "<INVALID>" },
		{ "ControllerHand_Count.Hidden", "" },
		{ "ControllerHand_Count.Name", "EControllerHand::ControllerHand_Count" },
		{ "ExternalCamera.Name", "EControllerHand::ExternalCamera" },
		{ "Gun.Name", "EControllerHand::Gun" },
		{ "HMD.Name", "EControllerHand::HMD" },
		{ "Left.Name", "EControllerHand::Left" },
		{ "LeftElbow.Name", "EControllerHand::LeftElbow" },
		{ "LeftFoot.Name", "EControllerHand::LeftFoot" },
		{ "LeftKnee.Name", "EControllerHand::LeftKnee" },
		{ "LeftShoulder.Name", "EControllerHand::LeftShoulder" },
		{ "ModuleRelativePath", "Classes/InputCoreTypes.h" },
		{ "Pad.Name", "EControllerHand::Pad" },
		{ "Right.Name", "EControllerHand::Right" },
		{ "RightElbow.Name", "EControllerHand::RightElbow" },
		{ "RightFoot.Name", "EControllerHand::RightFoot" },
		{ "RightKnee.Name", "EControllerHand::RightKnee" },
		{ "RightShoulder.Name", "EControllerHand::RightShoulder" },
		{ "Special.Name", "EControllerHand::Special" },
		{ "ToolTip", "Defines the controller hands for tracking.  Could be expanded, as needed, to facilitate non-handheld controllers" },
		{ "Waist.Name", "EControllerHand::Waist" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InputCore_EControllerHand_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InputCore,
		nullptr,
		"EControllerHand",
		"EControllerHand",
		Z_Construct_UEnum_InputCore_EControllerHand_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InputCore_EControllerHand_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InputCore_EControllerHand_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InputCore_EControllerHand_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InputCore_EControllerHand()
	{
		if (!Z_Registration_Info_UEnum_EControllerHand.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EControllerHand.InnerSingleton, Z_Construct_UEnum_InputCore_EControllerHand_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EControllerHand.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_Key;
class UScriptStruct* FKey::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_Key.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_Key.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKey, (UObject*)Z_Construct_UPackage__Script_InputCore(), TEXT("Key"));
	}
	return Z_Registration_Info_UScriptStruct_Key.OuterSingleton;
}
template<> INPUTCORE_API UScriptStruct* StaticStruct<FKey>()
{
	return FKey::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKey_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_KeyName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKey_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/InputCoreTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKey>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKey_Statics::NewProp_KeyName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/InputCoreTypes.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FKey_Statics::NewProp_KeyName = { "KeyName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKey, KeyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FKey_Statics::NewProp_KeyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKey_Statics::NewProp_KeyName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKey_Statics::NewProp_KeyName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InputCore,
		nullptr,
		&NewStructOps,
		"Key",
		sizeof(FKey),
		alignof(FKey),
		Z_Construct_UScriptStruct_FKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKey()
	{
		if (!Z_Registration_Info_UScriptStruct_Key.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_Key.InnerSingleton, Z_Construct_UScriptStruct_FKey_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_Key.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETouchIndex;
	static UEnum* ETouchIndex_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETouchIndex.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETouchIndex.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InputCore_ETouchIndex, (UObject*)Z_Construct_UPackage__Script_InputCore(), TEXT("ETouchIndex"));
		}
		return Z_Registration_Info_UEnum_ETouchIndex.OuterSingleton;
	}
	template<> INPUTCORE_API UEnum* StaticEnum<ETouchIndex::Type>()
	{
		return ETouchIndex_StaticEnum();
	}
	struct Z_Construct_UEnum_InputCore_ETouchIndex_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InputCore_ETouchIndex_Statics::Enumerators[] = {
		{ "ETouchIndex::Touch1", (int64)ETouchIndex::Touch1 },
		{ "ETouchIndex::Touch2", (int64)ETouchIndex::Touch2 },
		{ "ETouchIndex::Touch3", (int64)ETouchIndex::Touch3 },
		{ "ETouchIndex::Touch4", (int64)ETouchIndex::Touch4 },
		{ "ETouchIndex::Touch5", (int64)ETouchIndex::Touch5 },
		{ "ETouchIndex::Touch6", (int64)ETouchIndex::Touch6 },
		{ "ETouchIndex::Touch7", (int64)ETouchIndex::Touch7 },
		{ "ETouchIndex::Touch8", (int64)ETouchIndex::Touch8 },
		{ "ETouchIndex::Touch9", (int64)ETouchIndex::Touch9 },
		{ "ETouchIndex::Touch10", (int64)ETouchIndex::Touch10 },
		{ "ETouchIndex::CursorPointerIndex", (int64)ETouchIndex::CursorPointerIndex },
		{ "ETouchIndex::MAX_TOUCHES", (int64)ETouchIndex::MAX_TOUCHES },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InputCore_ETouchIndex_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// The number of entries in ETouchIndex must match the number of touch keys defined in EKeys and NUM_TOUCH_KEYS above\n" },
		{ "CursorPointerIndex.Comment", "/**\n\x09\x09 * This entry is special.  NUM_TOUCH_KEYS - 1, is used for the cursor so that it's represented\n\x09\x09 * as another finger index, but doesn't overlap with touch input indexes.\n\x09\x09 */" },
		{ "CursorPointerIndex.Hidden", "" },
		{ "CursorPointerIndex.Name", "ETouchIndex::CursorPointerIndex" },
		{ "CursorPointerIndex.ToolTip", "This entry is special.  NUM_TOUCH_KEYS - 1, is used for the cursor so that it's represented\nas another finger index, but doesn't overlap with touch input indexes." },
		{ "MAX_TOUCHES.Hidden", "" },
		{ "MAX_TOUCHES.Name", "ETouchIndex::MAX_TOUCHES" },
		{ "ModuleRelativePath", "Classes/InputCoreTypes.h" },
		{ "ToolTip", "The number of entries in ETouchIndex must match the number of touch keys defined in EKeys and NUM_TOUCH_KEYS above" },
		{ "Touch1.Name", "ETouchIndex::Touch1" },
		{ "Touch10.Name", "ETouchIndex::Touch10" },
		{ "Touch2.Name", "ETouchIndex::Touch2" },
		{ "Touch3.Name", "ETouchIndex::Touch3" },
		{ "Touch4.Name", "ETouchIndex::Touch4" },
		{ "Touch5.Name", "ETouchIndex::Touch5" },
		{ "Touch6.Name", "ETouchIndex::Touch6" },
		{ "Touch7.Name", "ETouchIndex::Touch7" },
		{ "Touch8.Name", "ETouchIndex::Touch8" },
		{ "Touch9.Name", "ETouchIndex::Touch9" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InputCore_ETouchIndex_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InputCore,
		nullptr,
		"ETouchIndex",
		"ETouchIndex::Type",
		Z_Construct_UEnum_InputCore_ETouchIndex_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InputCore_ETouchIndex_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_InputCore_ETouchIndex_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InputCore_ETouchIndex_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InputCore_ETouchIndex()
	{
		if (!Z_Registration_Info_UEnum_ETouchIndex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETouchIndex.InnerSingleton, Z_Construct_UEnum_InputCore_ETouchIndex_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETouchIndex.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EConsoleForGamepadLabels;
	static UEnum* EConsoleForGamepadLabels_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EConsoleForGamepadLabels.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EConsoleForGamepadLabels.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InputCore_EConsoleForGamepadLabels, (UObject*)Z_Construct_UPackage__Script_InputCore(), TEXT("EConsoleForGamepadLabels"));
		}
		return Z_Registration_Info_UEnum_EConsoleForGamepadLabels.OuterSingleton;
	}
	template<> INPUTCORE_API UEnum* StaticEnum<EConsoleForGamepadLabels::Type>()
	{
		return EConsoleForGamepadLabels_StaticEnum();
	}
	struct Z_Construct_UEnum_InputCore_EConsoleForGamepadLabels_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InputCore_EConsoleForGamepadLabels_Statics::Enumerators[] = {
		{ "EConsoleForGamepadLabels::None", (int64)EConsoleForGamepadLabels::None },
		{ "EConsoleForGamepadLabels::XBoxOne", (int64)EConsoleForGamepadLabels::XBoxOne },
		{ "EConsoleForGamepadLabels::PS4", (int64)EConsoleForGamepadLabels::PS4 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InputCore_EConsoleForGamepadLabels_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/InputCoreTypes.h" },
		{ "None.Name", "EConsoleForGamepadLabels::None" },
		{ "PS4.Name", "EConsoleForGamepadLabels::PS4" },
		{ "XBoxOne.Name", "EConsoleForGamepadLabels::XBoxOne" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InputCore_EConsoleForGamepadLabels_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InputCore,
		nullptr,
		"EConsoleForGamepadLabels",
		"EConsoleForGamepadLabels::Type",
		Z_Construct_UEnum_InputCore_EConsoleForGamepadLabels_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InputCore_EConsoleForGamepadLabels_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_InputCore_EConsoleForGamepadLabels_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InputCore_EConsoleForGamepadLabels_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InputCore_EConsoleForGamepadLabels()
	{
		if (!Z_Registration_Info_UEnum_EConsoleForGamepadLabels.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EConsoleForGamepadLabels.InnerSingleton, Z_Construct_UEnum_InputCore_EConsoleForGamepadLabels_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EConsoleForGamepadLabels.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETouchType;
	static UEnum* ETouchType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETouchType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETouchType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InputCore_ETouchType, (UObject*)Z_Construct_UPackage__Script_InputCore(), TEXT("ETouchType"));
		}
		return Z_Registration_Info_UEnum_ETouchType.OuterSingleton;
	}
	template<> INPUTCORE_API UEnum* StaticEnum<ETouchType::Type>()
	{
		return ETouchType_StaticEnum();
	}
	struct Z_Construct_UEnum_InputCore_ETouchType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InputCore_ETouchType_Statics::Enumerators[] = {
		{ "ETouchType::Began", (int64)ETouchType::Began },
		{ "ETouchType::Moved", (int64)ETouchType::Moved },
		{ "ETouchType::Stationary", (int64)ETouchType::Stationary },
		{ "ETouchType::ForceChanged", (int64)ETouchType::ForceChanged },
		{ "ETouchType::FirstMove", (int64)ETouchType::FirstMove },
		{ "ETouchType::Ended", (int64)ETouchType::Ended },
		{ "ETouchType::NumTypes", (int64)ETouchType::NumTypes },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InputCore_ETouchType_Statics::Enum_MetaDataParams[] = {
		{ "Began.Name", "ETouchType::Began" },
		{ "Comment", "/** Various states of touch inputs. */" },
		{ "Ended.Name", "ETouchType::Ended" },
		{ "FirstMove.Name", "ETouchType::FirstMove" },
		{ "ForceChanged.Name", "ETouchType::ForceChanged" },
		{ "ModuleRelativePath", "Classes/InputCoreTypes.h" },
		{ "Moved.Name", "ETouchType::Moved" },
		{ "NumTypes.Name", "ETouchType::NumTypes" },
		{ "Stationary.Name", "ETouchType::Stationary" },
		{ "ToolTip", "Various states of touch inputs." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InputCore_ETouchType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InputCore,
		nullptr,
		"ETouchType",
		"ETouchType::Type",
		Z_Construct_UEnum_InputCore_ETouchType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InputCore_ETouchType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_InputCore_ETouchType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InputCore_ETouchType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InputCore_ETouchType()
	{
		if (!Z_Registration_Info_UEnum_ETouchType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETouchType.InnerSingleton, Z_Construct_UEnum_InputCore_ETouchType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETouchType.InnerSingleton;
	}
	void UInputCoreTypes::StaticRegisterNativesUInputCoreTypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputCoreTypes);
	UClass* Z_Construct_UClass_UInputCoreTypes_NoRegister()
	{
		return UInputCoreTypes::StaticClass();
	}
	struct Z_Construct_UClass_UInputCoreTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputCoreTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InputCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputCoreTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InputCoreTypes.h" },
		{ "ModuleRelativePath", "Classes/InputCoreTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputCoreTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputCoreTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputCoreTypes_Statics::ClassParams = {
		&UInputCoreTypes::StaticClass,
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
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInputCoreTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputCoreTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputCoreTypes()
	{
		if (!Z_Registration_Info_UClass_UInputCoreTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputCoreTypes.OuterSingleton, Z_Construct_UClass_UInputCoreTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputCoreTypes.OuterSingleton;
	}
	template<> INPUTCORE_API UClass* StaticClass<UInputCoreTypes>()
	{
		return UInputCoreTypes::StaticClass();
	}
	UInputCoreTypes::UInputCoreTypes(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputCoreTypes);
	UInputCoreTypes::~UInputCoreTypes() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_Statics::EnumInfo[] = {
		{ EControllerHand_StaticEnum, TEXT("EControllerHand"), &Z_Registration_Info_UEnum_EControllerHand, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2834220773U) },
		{ ETouchIndex_StaticEnum, TEXT("ETouchIndex"), &Z_Registration_Info_UEnum_ETouchIndex, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2899773687U) },
		{ EConsoleForGamepadLabels_StaticEnum, TEXT("EConsoleForGamepadLabels"), &Z_Registration_Info_UEnum_EConsoleForGamepadLabels, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 798172611U) },
		{ ETouchType_StaticEnum, TEXT("ETouchType"), &Z_Registration_Info_UEnum_ETouchType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1627830907U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_Statics::ScriptStructInfo[] = {
		{ FKey::StaticStruct, Z_Construct_UScriptStruct_FKey_Statics::NewStructOps, TEXT("Key"), &Z_Registration_Info_UScriptStruct_Key, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKey), 2101135134U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputCoreTypes, UInputCoreTypes::StaticClass, TEXT("UInputCoreTypes"), &Z_Registration_Info_UClass_UInputCoreTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputCoreTypes), 3294488713U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_2627758373(TEXT("/Script/InputCore"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InputCore_Classes_InputCoreTypes_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
