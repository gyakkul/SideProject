// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Framework/Commands/UICommandInfo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUICommandInfo() {}
// Cross Module References
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EMultipleKeyBindingIndex();
	SLATE_API UEnum* Z_Construct_UEnum_Slate_EUserInterfaceActionType();
	UPackage* Z_Construct_UPackage__Script_Slate();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUserInterfaceActionType;
	static UEnum* EUserInterfaceActionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUserInterfaceActionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUserInterfaceActionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Slate_EUserInterfaceActionType, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("EUserInterfaceActionType"));
		}
		return Z_Registration_Info_UEnum_EUserInterfaceActionType.OuterSingleton;
	}
	template<> SLATE_API UEnum* StaticEnum<EUserInterfaceActionType>()
	{
		return EUserInterfaceActionType_StaticEnum();
	}
	struct Z_Construct_UEnum_Slate_EUserInterfaceActionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Slate_EUserInterfaceActionType_Statics::Enumerators[] = {
		{ "EUserInterfaceActionType::None", (int64)EUserInterfaceActionType::None },
		{ "EUserInterfaceActionType::Button", (int64)EUserInterfaceActionType::Button },
		{ "EUserInterfaceActionType::ToggleButton", (int64)EUserInterfaceActionType::ToggleButton },
		{ "EUserInterfaceActionType::RadioButton", (int64)EUserInterfaceActionType::RadioButton },
		{ "EUserInterfaceActionType::Check", (int64)EUserInterfaceActionType::Check },
		{ "EUserInterfaceActionType::CollapsedButton", (int64)EUserInterfaceActionType::CollapsedButton },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Slate_EUserInterfaceActionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Button.Comment", "/** Momentary buttons or menu items.  These support enable state, and execute a delegate when clicked. */" },
		{ "Button.Name", "EUserInterfaceActionType::Button" },
		{ "Button.ToolTip", "Momentary buttons or menu items.  These support enable state, and execute a delegate when clicked." },
		{ "Check.Comment", "/** Similar to Button but will display a readonly checkbox next to the item. */" },
		{ "Check.Name", "EUserInterfaceActionType::Check" },
		{ "Check.ToolTip", "Similar to Button but will display a readonly checkbox next to the item." },
		{ "CollapsedButton.Comment", "/** Similar to Button but has the checkbox area collapsed */" },
		{ "CollapsedButton.Name", "EUserInterfaceActionType::CollapsedButton" },
		{ "CollapsedButton.ToolTip", "Similar to Button but has the checkbox area collapsed" },
		{ "Comment", "/** Types of user interfaces that can be associated with a user interface action */" },
		{ "ModuleRelativePath", "Public/Framework/Commands/UICommandInfo.h" },
		{ "None.Comment", "/** An action which should not be associated with a user interface action */" },
		{ "None.Name", "EUserInterfaceActionType::None" },
		{ "None.ToolTip", "An action which should not be associated with a user interface action" },
		{ "RadioButton.Comment", "/** Radio buttons are similar to toggle buttons in that they are for menu items that store on/off state.  However they should be used to indicate that menu items in a group can only be in one state */" },
		{ "RadioButton.Name", "EUserInterfaceActionType::RadioButton" },
		{ "RadioButton.ToolTip", "Radio buttons are similar to toggle buttons in that they are for menu items that store on/off state.  However they should be used to indicate that menu items in a group can only be in one state" },
		{ "ToggleButton.Comment", "/** Toggleable buttons or menu items that store on/off state.  These support enable state, and execute a delegate when toggled. */" },
		{ "ToggleButton.Name", "EUserInterfaceActionType::ToggleButton" },
		{ "ToggleButton.ToolTip", "Toggleable buttons or menu items that store on/off state.  These support enable state, and execute a delegate when toggled." },
		{ "ToolTip", "Types of user interfaces that can be associated with a user interface action" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Slate_EUserInterfaceActionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Slate,
		nullptr,
		"EUserInterfaceActionType",
		"EUserInterfaceActionType",
		Z_Construct_UEnum_Slate_EUserInterfaceActionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_EUserInterfaceActionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Slate_EUserInterfaceActionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_EUserInterfaceActionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Slate_EUserInterfaceActionType()
	{
		if (!Z_Registration_Info_UEnum_EUserInterfaceActionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUserInterfaceActionType.InnerSingleton, Z_Construct_UEnum_Slate_EUserInterfaceActionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUserInterfaceActionType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMultipleKeyBindingIndex;
	static UEnum* EMultipleKeyBindingIndex_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMultipleKeyBindingIndex.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMultipleKeyBindingIndex.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Slate_EMultipleKeyBindingIndex, (UObject*)Z_Construct_UPackage__Script_Slate(), TEXT("EMultipleKeyBindingIndex"));
		}
		return Z_Registration_Info_UEnum_EMultipleKeyBindingIndex.OuterSingleton;
	}
	template<> SLATE_API UEnum* StaticEnum<EMultipleKeyBindingIndex>()
	{
		return EMultipleKeyBindingIndex_StaticEnum();
	}
	struct Z_Construct_UEnum_Slate_EMultipleKeyBindingIndex_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Slate_EMultipleKeyBindingIndex_Statics::Enumerators[] = {
		{ "EMultipleKeyBindingIndex::Primary", (int64)EMultipleKeyBindingIndex::Primary },
		{ "EMultipleKeyBindingIndex::Secondary", (int64)EMultipleKeyBindingIndex::Secondary },
		{ "EMultipleKeyBindingIndex::NumChords", (int64)EMultipleKeyBindingIndex::NumChords },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Slate_EMultipleKeyBindingIndex_Statics::Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Framework/Commands/UICommandInfo.h" },
		{ "NumChords.Name", "EMultipleKeyBindingIndex::NumChords" },
		{ "Primary.Name", "EMultipleKeyBindingIndex::Primary" },
		{ "Secondary.Name", "EMultipleKeyBindingIndex::Secondary" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Slate_EMultipleKeyBindingIndex_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Slate,
		nullptr,
		"EMultipleKeyBindingIndex",
		"EMultipleKeyBindingIndex",
		Z_Construct_UEnum_Slate_EMultipleKeyBindingIndex_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_EMultipleKeyBindingIndex_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Slate_EMultipleKeyBindingIndex_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Slate_EMultipleKeyBindingIndex_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Slate_EMultipleKeyBindingIndex()
	{
		if (!Z_Registration_Info_UEnum_EMultipleKeyBindingIndex.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMultipleKeyBindingIndex.InnerSingleton, Z_Construct_UEnum_Slate_EMultipleKeyBindingIndex_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMultipleKeyBindingIndex.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Commands_UICommandInfo_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Commands_UICommandInfo_h_Statics::EnumInfo[] = {
		{ EUserInterfaceActionType_StaticEnum, TEXT("EUserInterfaceActionType"), &Z_Registration_Info_UEnum_EUserInterfaceActionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 870607062U) },
		{ EMultipleKeyBindingIndex_StaticEnum, TEXT("EMultipleKeyBindingIndex"), &Z_Registration_Info_UEnum_EMultipleKeyBindingIndex, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 516377328U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Commands_UICommandInfo_h_958021988(TEXT("/Script/Slate"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Commands_UICommandInfo_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Slate_Public_Framework_Commands_UICommandInfo_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
