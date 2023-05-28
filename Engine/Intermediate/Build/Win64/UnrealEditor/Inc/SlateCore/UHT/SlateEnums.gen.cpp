// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/SlateEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlateEnums() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EButtonClickMethod();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EButtonPressMethod();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EButtonTouchMethod();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EMenuPlacement();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ENavigationGenesis();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ENavigationSource();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EOrientation();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EScrollDirection();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ESelectInfo();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_ETextCommit();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EUINavigation();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EUINavigationAction();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EButtonClickMethod;
	static UEnum* EButtonClickMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EButtonClickMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EButtonClickMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EButtonClickMethod, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("EButtonClickMethod"));
		}
		return Z_Registration_Info_UEnum_EButtonClickMethod.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EButtonClickMethod::Type>()
	{
		return EButtonClickMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_EButtonClickMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_EButtonClickMethod_Statics::Enumerators[] = {
		{ "EButtonClickMethod::DownAndUp", (int64)EButtonClickMethod::DownAndUp },
		{ "EButtonClickMethod::MouseDown", (int64)EButtonClickMethod::MouseDown },
		{ "EButtonClickMethod::MouseUp", (int64)EButtonClickMethod::MouseUp },
		{ "EButtonClickMethod::PreciseClick", (int64)EButtonClickMethod::PreciseClick },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_EButtonClickMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n\x09 * Enumerates different methods that a button click can be triggered. Normally, DownAndUp is appropriate.\n\x09 */" },
		{ "DownAndUp.Comment", "/**\n\x09\x09 * User must press the button, then release while over the button to trigger the click.\n\x09\x09 * This is the most common type of button.\n\x09\x09 */" },
		{ "DownAndUp.Name", "EButtonClickMethod::DownAndUp" },
		{ "DownAndUp.ToolTip", "User must press the button, then release while over the button to trigger the click.\nThis is the most common type of button." },
		{ "ModuleRelativePath", "Public/Types/SlateEnums.h" },
		{ "MouseDown.Comment", "/**\n\x09\x09 * Click will be triggered immediately on mouse down, and mouse will not be captured.\n\x09\x09 */" },
		{ "MouseDown.Name", "EButtonClickMethod::MouseDown" },
		{ "MouseDown.ToolTip", "Click will be triggered immediately on mouse down, and mouse will not be captured." },
		{ "MouseUp.Comment", "/**\n\x09\x09 * Click will always be triggered when mouse button is released over the button,\n\x09\x09 * even if the button wasn't pressed down over it.\n\x09\x09 */" },
		{ "MouseUp.Name", "EButtonClickMethod::MouseUp" },
		{ "MouseUp.ToolTip", "Click will always be triggered when mouse button is released over the button,\neven if the button wasn't pressed down over it." },
		{ "PreciseClick.Comment", "/**\n\x09\x09 * Inside a list, buttons can only be clicked with precise tap.\n\x09\x09 * Moving the pointer will scroll the list, also allows drag-droppable buttons.\n\x09\x09 */" },
		{ "PreciseClick.Name", "EButtonClickMethod::PreciseClick" },
		{ "PreciseClick.ToolTip", "Inside a list, buttons can only be clicked with precise tap.\nMoving the pointer will scroll the list, also allows drag-droppable buttons." },
		{ "ToolTip", "Enumerates different methods that a button click can be triggered. Normally, DownAndUp is appropriate." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_EButtonClickMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"EButtonClickMethod",
		"EButtonClickMethod::Type",
		Z_Construct_UEnum_SlateCore_EButtonClickMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EButtonClickMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_EButtonClickMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EButtonClickMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_EButtonClickMethod()
	{
		if (!Z_Registration_Info_UEnum_EButtonClickMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EButtonClickMethod.InnerSingleton, Z_Construct_UEnum_SlateCore_EButtonClickMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EButtonClickMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EButtonTouchMethod;
	static UEnum* EButtonTouchMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EButtonTouchMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EButtonTouchMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EButtonTouchMethod, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("EButtonTouchMethod"));
		}
		return Z_Registration_Info_UEnum_EButtonTouchMethod.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EButtonTouchMethod::Type>()
	{
		return EButtonTouchMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_EButtonTouchMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_EButtonTouchMethod_Statics::Enumerators[] = {
		{ "EButtonTouchMethod::DownAndUp", (int64)EButtonTouchMethod::DownAndUp },
		{ "EButtonTouchMethod::Down", (int64)EButtonTouchMethod::Down },
		{ "EButtonTouchMethod::PreciseTap", (int64)EButtonTouchMethod::PreciseTap },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_EButtonTouchMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/** Ways in which touch interactions trigger a \"Clicked\" event. */" },
		{ "Down.Comment", "/**\n\x09\x09 * Click will be triggered immediately on touch down, and touch will not be captured.\n\x09\x09 */" },
		{ "Down.Name", "EButtonTouchMethod::Down" },
		{ "Down.ToolTip", "Click will be triggered immediately on touch down, and touch will not be captured." },
		{ "DownAndUp.Comment", "/** Most buttons behave this way. */" },
		{ "DownAndUp.Name", "EButtonTouchMethod::DownAndUp" },
		{ "DownAndUp.ToolTip", "Most buttons behave this way." },
		{ "ModuleRelativePath", "Public/Types/SlateEnums.h" },
		{ "PreciseTap.Comment", "/**\n\x09\x09 * Inside a list, buttons can only be clicked with precise tap.\n\x09\x09 * Moving the pointer will scroll the list.\n\x09\x09 */" },
		{ "PreciseTap.Name", "EButtonTouchMethod::PreciseTap" },
		{ "PreciseTap.ToolTip", "Inside a list, buttons can only be clicked with precise tap.\nMoving the pointer will scroll the list." },
		{ "ToolTip", "Ways in which touch interactions trigger a \"Clicked\" event." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_EButtonTouchMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"EButtonTouchMethod",
		"EButtonTouchMethod::Type",
		Z_Construct_UEnum_SlateCore_EButtonTouchMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EButtonTouchMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_EButtonTouchMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EButtonTouchMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_EButtonTouchMethod()
	{
		if (!Z_Registration_Info_UEnum_EButtonTouchMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EButtonTouchMethod.InnerSingleton, Z_Construct_UEnum_SlateCore_EButtonTouchMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EButtonTouchMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EButtonPressMethod;
	static UEnum* EButtonPressMethod_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EButtonPressMethod.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EButtonPressMethod.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EButtonPressMethod, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("EButtonPressMethod"));
		}
		return Z_Registration_Info_UEnum_EButtonPressMethod.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EButtonPressMethod::Type>()
	{
		return EButtonPressMethod_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_EButtonPressMethod_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_EButtonPressMethod_Statics::Enumerators[] = {
		{ "EButtonPressMethod::DownAndUp", (int64)EButtonPressMethod::DownAndUp },
		{ "EButtonPressMethod::ButtonPress", (int64)EButtonPressMethod::ButtonPress },
		{ "EButtonPressMethod::ButtonRelease", (int64)EButtonPressMethod::ButtonRelease },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_EButtonPressMethod_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ButtonPress.Comment", "/**\n\x09\x09* Click will be triggered immediately on button press.\n\x09\x09*/" },
		{ "ButtonPress.Name", "EButtonPressMethod::ButtonPress" },
		{ "ButtonPress.ToolTip", "Click will be triggered immediately on button press." },
		{ "ButtonRelease.Comment", "/**\n\x09\x09* Click will always be triggered when a button release occurs on the focused button,\n\x09\x09* even if the button wasn't pressed while focused.\n\x09\x09*/" },
		{ "ButtonRelease.Name", "EButtonPressMethod::ButtonRelease" },
		{ "ButtonRelease.ToolTip", "Click will always be triggered when a button release occurs on the focused button,\neven if the button wasn't pressed while focused." },
		{ "Comment", "/**\n\x09* Enumerates different methods that a button can be triggered with keyboard/controller. Normally, DownAndUp is appropriate.\n\x09*/" },
		{ "DownAndUp.Comment", "/**\n\x09\x09* User must press the button, then release while the button has focus to trigger the click.\n\x09\x09* This is the most common type of button.\n\x09\x09*/" },
		{ "DownAndUp.Name", "EButtonPressMethod::DownAndUp" },
		{ "DownAndUp.ToolTip", "User must press the button, then release while the button has focus to trigger the click.\nThis is the most common type of button." },
		{ "ModuleRelativePath", "Public/Types/SlateEnums.h" },
		{ "ToolTip", "Enumerates different methods that a button can be triggered with keyboard/controller. Normally, DownAndUp is appropriate." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_EButtonPressMethod_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"EButtonPressMethod",
		"EButtonPressMethod::Type",
		Z_Construct_UEnum_SlateCore_EButtonPressMethod_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EButtonPressMethod_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_EButtonPressMethod_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EButtonPressMethod_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_EButtonPressMethod()
	{
		if (!Z_Registration_Info_UEnum_EButtonPressMethod.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EButtonPressMethod.InnerSingleton, Z_Construct_UEnum_SlateCore_EButtonPressMethod_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EButtonPressMethod.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUINavigation;
	static UEnum* EUINavigation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUINavigation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUINavigation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EUINavigation, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("EUINavigation"));
		}
		return Z_Registration_Info_UEnum_EUINavigation.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EUINavigation>()
	{
		return EUINavigation_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_EUINavigation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_EUINavigation_Statics::Enumerators[] = {
		{ "EUINavigation::Left", (int64)EUINavigation::Left },
		{ "EUINavigation::Right", (int64)EUINavigation::Right },
		{ "EUINavigation::Up", (int64)EUINavigation::Up },
		{ "EUINavigation::Down", (int64)EUINavigation::Down },
		{ "EUINavigation::Next", (int64)EUINavigation::Next },
		{ "EUINavigation::Previous", (int64)EUINavigation::Previous },
		{ "EUINavigation::Num", (int64)EUINavigation::Num },
		{ "EUINavigation::Invalid", (int64)EUINavigation::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_EUINavigation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Navigation context for event\n */" },
		{ "Down.Name", "EUINavigation::Down" },
		{ "Invalid.Comment", "/** Denotes an invalid navigation, more important used to denote no specified navigation*/" },
		{ "Invalid.Name", "EUINavigation::Invalid" },
		{ "Invalid.ToolTip", "Denotes an invalid navigation, more important used to denote no specified navigation" },
		{ "Left.Comment", "/** Four cardinal directions*/" },
		{ "Left.Name", "EUINavigation::Left" },
		{ "Left.ToolTip", "Four cardinal directions" },
		{ "ModuleRelativePath", "Public/Types/SlateEnums.h" },
		{ "Next.Comment", "/** Conceptual next and previous*/" },
		{ "Next.Name", "EUINavigation::Next" },
		{ "Next.ToolTip", "Conceptual next and previous" },
		{ "Num.Comment", "/** Number of navigation types*/" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "EUINavigation::Num" },
		{ "Num.ToolTip", "Number of navigation types" },
		{ "Previous.Name", "EUINavigation::Previous" },
		{ "Right.Name", "EUINavigation::Right" },
		{ "ToolTip", "Navigation context for event" },
		{ "Up.Name", "EUINavigation::Up" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_EUINavigation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"EUINavigation",
		"EUINavigation",
		Z_Construct_UEnum_SlateCore_EUINavigation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EUINavigation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_EUINavigation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EUINavigation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_EUINavigation()
	{
		if (!Z_Registration_Info_UEnum_EUINavigation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUINavigation.InnerSingleton, Z_Construct_UEnum_SlateCore_EUINavigation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUINavigation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EUINavigationAction;
	static UEnum* EUINavigationAction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EUINavigationAction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EUINavigationAction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EUINavigationAction, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("EUINavigationAction"));
		}
		return Z_Registration_Info_UEnum_EUINavigationAction.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EUINavigationAction>()
	{
		return EUINavigationAction_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_EUINavigationAction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_EUINavigationAction_Statics::Enumerators[] = {
		{ "EUINavigationAction::Accept", (int64)EUINavigationAction::Accept },
		{ "EUINavigationAction::Back", (int64)EUINavigationAction::Back },
		{ "EUINavigationAction::Num", (int64)EUINavigationAction::Num },
		{ "EUINavigationAction::Invalid", (int64)EUINavigationAction::Invalid },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_EUINavigationAction_Statics::Enum_MetaDataParams[] = {
		{ "Accept.Comment", "/** Accept, normally acts like a mouse click. Corresponds to Virtual_Accept key */" },
		{ "Accept.Name", "EUINavigationAction::Accept" },
		{ "Accept.ToolTip", "Accept, normally acts like a mouse click. Corresponds to Virtual_Accept key" },
		{ "Back.Comment", "/** Back/Cancel, normally acts like escape. Corresponds to Virtual_Back key */" },
		{ "Back.Name", "EUINavigationAction::Back" },
		{ "Back.ToolTip", "Back/Cancel, normally acts like escape. Corresponds to Virtual_Back key" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Generic UI navigation action that are usually bound to a gamepad or other input device\n */" },
		{ "Invalid.Comment", "/** Invalid action */" },
		{ "Invalid.Name", "EUINavigationAction::Invalid" },
		{ "Invalid.ToolTip", "Invalid action" },
		{ "ModuleRelativePath", "Public/Types/SlateEnums.h" },
		{ "Num.Comment", "/** Number of navigation actions */" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "EUINavigationAction::Num" },
		{ "Num.ToolTip", "Number of navigation actions" },
		{ "ToolTip", "Generic UI navigation action that are usually bound to a gamepad or other input device" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_EUINavigationAction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"EUINavigationAction",
		"EUINavigationAction",
		Z_Construct_UEnum_SlateCore_EUINavigationAction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EUINavigationAction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_EUINavigationAction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EUINavigationAction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_EUINavigationAction()
	{
		if (!Z_Registration_Info_UEnum_EUINavigationAction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EUINavigationAction.InnerSingleton, Z_Construct_UEnum_SlateCore_EUINavigationAction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EUINavigationAction.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENavigationSource;
	static UEnum* ENavigationSource_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENavigationSource.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENavigationSource.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ENavigationSource, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ENavigationSource"));
		}
		return Z_Registration_Info_UEnum_ENavigationSource.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ENavigationSource>()
	{
		return ENavigationSource_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_ENavigationSource_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_ENavigationSource_Statics::Enumerators[] = {
		{ "ENavigationSource::FocusedWidget", (int64)ENavigationSource::FocusedWidget },
		{ "ENavigationSource::WidgetUnderCursor", (int64)ENavigationSource::WidgetUnderCursor },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_ENavigationSource_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enumerates the source of the navigation\n */" },
		{ "FocusedWidget.Comment", "/** Navigate from the focused widget */" },
		{ "FocusedWidget.Name", "ENavigationSource::FocusedWidget" },
		{ "FocusedWidget.ToolTip", "Navigate from the focused widget" },
		{ "ModuleRelativePath", "Public/Types/SlateEnums.h" },
		{ "ToolTip", "Enumerates the source of the navigation" },
		{ "WidgetUnderCursor.Comment", "/** Navigate from the widget under the cursor */" },
		{ "WidgetUnderCursor.Name", "ENavigationSource::WidgetUnderCursor" },
		{ "WidgetUnderCursor.ToolTip", "Navigate from the widget under the cursor" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_ENavigationSource_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"ENavigationSource",
		"ENavigationSource",
		Z_Construct_UEnum_SlateCore_ENavigationSource_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ENavigationSource_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_ENavigationSource_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ENavigationSource_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_ENavigationSource()
	{
		if (!Z_Registration_Info_UEnum_ENavigationSource.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENavigationSource.InnerSingleton, Z_Construct_UEnum_SlateCore_ENavigationSource_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENavigationSource.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENavigationGenesis;
	static UEnum* ENavigationGenesis_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENavigationGenesis.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENavigationGenesis.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ENavigationGenesis, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ENavigationGenesis"));
		}
		return Z_Registration_Info_UEnum_ENavigationGenesis.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ENavigationGenesis>()
	{
		return ENavigationGenesis_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_ENavigationGenesis_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_ENavigationGenesis_Statics::Enumerators[] = {
		{ "ENavigationGenesis::Keyboard", (int64)ENavigationGenesis::Keyboard },
		{ "ENavigationGenesis::Controller", (int64)ENavigationGenesis::Controller },
		{ "ENavigationGenesis::User", (int64)ENavigationGenesis::User },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_ENavigationGenesis_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/**\n * Enumerates the genesis of the navigation, where generated the navigation\n */" },
		{ "Controller.Comment", "/** Navigation caused by a Controller */" },
		{ "Controller.Name", "ENavigationGenesis::Controller" },
		{ "Controller.ToolTip", "Navigation caused by a Controller" },
		{ "Keyboard.Comment", "/** Navigation caused by the Keyboard */" },
		{ "Keyboard.Name", "ENavigationGenesis::Keyboard" },
		{ "Keyboard.ToolTip", "Navigation caused by the Keyboard" },
		{ "ModuleRelativePath", "Public/Types/SlateEnums.h" },
		{ "ToolTip", "Enumerates the genesis of the navigation, where generated the navigation" },
		{ "User.Comment", "/** Navigate caused by a user generated event (Users = WIdgets, Client Code, ...)*/" },
		{ "User.Name", "ENavigationGenesis::User" },
		{ "User.ToolTip", "Navigate caused by a user generated event (Users = WIdgets, Client Code, ...)" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_ENavigationGenesis_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"ENavigationGenesis",
		"ENavigationGenesis",
		Z_Construct_UEnum_SlateCore_ENavigationGenesis_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ENavigationGenesis_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_ENavigationGenesis_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ENavigationGenesis_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_ENavigationGenesis()
	{
		if (!Z_Registration_Info_UEnum_ENavigationGenesis.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENavigationGenesis.InnerSingleton, Z_Construct_UEnum_SlateCore_ENavigationGenesis_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENavigationGenesis.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHorizontalAlignment;
	static UEnum* EHorizontalAlignment_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHorizontalAlignment.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHorizontalAlignment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EHorizontalAlignment, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("EHorizontalAlignment"));
		}
		return Z_Registration_Info_UEnum_EHorizontalAlignment.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EHorizontalAlignment>()
	{
		return EHorizontalAlignment_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_EHorizontalAlignment_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_EHorizontalAlignment_Statics::Enumerators[] = {
		{ "HAlign_Fill", (int64)HAlign_Fill },
		{ "HAlign_Left", (int64)HAlign_Left },
		{ "HAlign_Center", (int64)HAlign_Center },
		{ "HAlign_Right", (int64)HAlign_Right },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_EHorizontalAlignment_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Enumerates horizontal alignment options, i.e. for widget slots.\n */" },
		{ "HAlign_Center.Comment", "/** Center-align. */" },
		{ "HAlign_Center.DisplayName", "Center" },
		{ "HAlign_Center.Name", "HAlign_Center" },
		{ "HAlign_Center.ToolTip", "Center-align." },
		{ "HAlign_Fill.Comment", "/** Fill the entire width. */" },
		{ "HAlign_Fill.DisplayName", "Fill" },
		{ "HAlign_Fill.Name", "HAlign_Fill" },
		{ "HAlign_Fill.ToolTip", "Fill the entire width." },
		{ "HAlign_Left.Comment", "/** Left-align. */" },
		{ "HAlign_Left.DisplayName", "Left" },
		{ "HAlign_Left.Name", "HAlign_Left" },
		{ "HAlign_Left.ToolTip", "Left-align." },
		{ "HAlign_Right.Comment", "/** Right-align. */" },
		{ "HAlign_Right.DisplayName", "Right" },
		{ "HAlign_Right.Name", "HAlign_Right" },
		{ "HAlign_Right.ToolTip", "Right-align." },
		{ "ModuleRelativePath", "Public/Types/SlateEnums.h" },
		{ "ToolTip", "Enumerates horizontal alignment options, i.e. for widget slots." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_EHorizontalAlignment_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"EHorizontalAlignment",
		"EHorizontalAlignment",
		Z_Construct_UEnum_SlateCore_EHorizontalAlignment_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EHorizontalAlignment_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_EHorizontalAlignment_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EHorizontalAlignment_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_EHorizontalAlignment()
	{
		if (!Z_Registration_Info_UEnum_EHorizontalAlignment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHorizontalAlignment.InnerSingleton, Z_Construct_UEnum_SlateCore_EHorizontalAlignment_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHorizontalAlignment.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVerticalAlignment;
	static UEnum* EVerticalAlignment_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVerticalAlignment.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVerticalAlignment.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EVerticalAlignment, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("EVerticalAlignment"));
		}
		return Z_Registration_Info_UEnum_EVerticalAlignment.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EVerticalAlignment>()
	{
		return EVerticalAlignment_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_EVerticalAlignment_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_EVerticalAlignment_Statics::Enumerators[] = {
		{ "VAlign_Fill", (int64)VAlign_Fill },
		{ "VAlign_Top", (int64)VAlign_Top },
		{ "VAlign_Center", (int64)VAlign_Center },
		{ "VAlign_Bottom", (int64)VAlign_Bottom },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_EVerticalAlignment_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Enumerates vertical alignment options, i.e. for widget slots.\n */" },
		{ "ModuleRelativePath", "Public/Types/SlateEnums.h" },
		{ "ToolTip", "Enumerates vertical alignment options, i.e. for widget slots." },
		{ "VAlign_Bottom.Comment", "/** Bottom-align. */" },
		{ "VAlign_Bottom.DisplayName", "Bottom" },
		{ "VAlign_Bottom.Name", "VAlign_Bottom" },
		{ "VAlign_Bottom.ToolTip", "Bottom-align." },
		{ "VAlign_Center.Comment", "/** Center-align. */" },
		{ "VAlign_Center.DisplayName", "Center" },
		{ "VAlign_Center.Name", "VAlign_Center" },
		{ "VAlign_Center.ToolTip", "Center-align." },
		{ "VAlign_Fill.Comment", "/** Fill the entire height. */" },
		{ "VAlign_Fill.DisplayName", "Fill" },
		{ "VAlign_Fill.Name", "VAlign_Fill" },
		{ "VAlign_Fill.ToolTip", "Fill the entire height." },
		{ "VAlign_Top.Comment", "/** Top-align. */" },
		{ "VAlign_Top.DisplayName", "Top" },
		{ "VAlign_Top.Name", "VAlign_Top" },
		{ "VAlign_Top.ToolTip", "Top-align." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_EVerticalAlignment_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"EVerticalAlignment",
		"EVerticalAlignment",
		Z_Construct_UEnum_SlateCore_EVerticalAlignment_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EVerticalAlignment_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_EVerticalAlignment_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EVerticalAlignment_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_EVerticalAlignment()
	{
		if (!Z_Registration_Info_UEnum_EVerticalAlignment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVerticalAlignment.InnerSingleton, Z_Construct_UEnum_SlateCore_EVerticalAlignment_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVerticalAlignment.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMenuPlacement;
	static UEnum* EMenuPlacement_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMenuPlacement.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMenuPlacement.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EMenuPlacement, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("EMenuPlacement"));
		}
		return Z_Registration_Info_UEnum_EMenuPlacement.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EMenuPlacement>()
	{
		return EMenuPlacement_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_EMenuPlacement_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_EMenuPlacement_Statics::Enumerators[] = {
		{ "MenuPlacement_BelowAnchor", (int64)MenuPlacement_BelowAnchor },
		{ "MenuPlacement_CenteredBelowAnchor", (int64)MenuPlacement_CenteredBelowAnchor },
		{ "MenuPlacement_BelowRightAnchor", (int64)MenuPlacement_BelowRightAnchor },
		{ "MenuPlacement_ComboBox", (int64)MenuPlacement_ComboBox },
		{ "MenuPlacement_ComboBoxRight", (int64)MenuPlacement_ComboBoxRight },
		{ "MenuPlacement_MenuRight", (int64)MenuPlacement_MenuRight },
		{ "MenuPlacement_AboveAnchor", (int64)MenuPlacement_AboveAnchor },
		{ "MenuPlacement_CenteredAboveAnchor", (int64)MenuPlacement_CenteredAboveAnchor },
		{ "MenuPlacement_AboveRightAnchor", (int64)MenuPlacement_AboveRightAnchor },
		{ "MenuPlacement_MenuLeft", (int64)MenuPlacement_MenuLeft },
		{ "MenuPlacement_Center", (int64)MenuPlacement_Center },
		{ "MenuPlacement_RightLeftCenter", (int64)MenuPlacement_RightLeftCenter },
		{ "MenuPlacement_MatchBottomLeft", (int64)MenuPlacement_MatchBottomLeft },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_EMenuPlacement_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Enumerates possible placements for pop-up menus.\n */" },
		{ "MenuPlacement_AboveAnchor.Comment", "/** Place the menu immediately above the anchor, no transition effect */" },
		{ "MenuPlacement_AboveAnchor.DisplayName", "Above" },
		{ "MenuPlacement_AboveAnchor.Name", "MenuPlacement_AboveAnchor" },
		{ "MenuPlacement_AboveAnchor.ToolTip", "Place the menu immediately above the anchor, no transition effect" },
		{ "MenuPlacement_AboveRightAnchor.Comment", "/** Place the menu immediately above the anchor aligned to the right of the content */" },
		{ "MenuPlacement_AboveRightAnchor.DisplayName", "Above Right" },
		{ "MenuPlacement_AboveRightAnchor.Name", "MenuPlacement_AboveRightAnchor" },
		{ "MenuPlacement_AboveRightAnchor.ToolTip", "Place the menu immediately above the anchor aligned to the right of the content" },
		{ "MenuPlacement_BelowAnchor.Comment", "/** Place the menu immediately below the anchor */" },
		{ "MenuPlacement_BelowAnchor.DisplayName", "Below" },
		{ "MenuPlacement_BelowAnchor.Name", "MenuPlacement_BelowAnchor" },
		{ "MenuPlacement_BelowAnchor.ToolTip", "Place the menu immediately below the anchor" },
		{ "MenuPlacement_BelowRightAnchor.Comment", "/** Place the menu immediately below the anchor aligned to the right of the content */" },
		{ "MenuPlacement_BelowRightAnchor.DisplayName", "Below Right" },
		{ "MenuPlacement_BelowRightAnchor.Name", "MenuPlacement_BelowRightAnchor" },
		{ "MenuPlacement_BelowRightAnchor.ToolTip", "Place the menu immediately below the anchor aligned to the right of the content" },
		{ "MenuPlacement_Center.Comment", "/** Place the menu's center on top of the menu anchor's center point */" },
		{ "MenuPlacement_Center.DisplayName", "Center" },
		{ "MenuPlacement_Center.Name", "MenuPlacement_Center" },
		{ "MenuPlacement_Center.ToolTip", "Place the menu's center on top of the menu anchor's center point" },
		{ "MenuPlacement_CenteredAboveAnchor.Comment", "/** Place the menu immediately centered above the anchor, no transition effect */" },
		{ "MenuPlacement_CenteredAboveAnchor.DisplayName", "Centered Above" },
		{ "MenuPlacement_CenteredAboveAnchor.Name", "MenuPlacement_CenteredAboveAnchor" },
		{ "MenuPlacement_CenteredAboveAnchor.ToolTip", "Place the menu immediately centered above the anchor, no transition effect" },
		{ "MenuPlacement_CenteredBelowAnchor.Comment", "/** Place the menu immediately centered below the anchor */" },
		{ "MenuPlacement_CenteredBelowAnchor.DisplayName", "Centered Below" },
		{ "MenuPlacement_CenteredBelowAnchor.Name", "MenuPlacement_CenteredBelowAnchor" },
		{ "MenuPlacement_CenteredBelowAnchor.ToolTip", "Place the menu immediately centered below the anchor" },
		{ "MenuPlacement_ComboBox.Comment", "/** Place the menu immediately below the anchor and match is width to the anchor's content */" },
		{ "MenuPlacement_ComboBox.DisplayName", "Combo Box" },
		{ "MenuPlacement_ComboBox.Name", "MenuPlacement_ComboBox" },
		{ "MenuPlacement_ComboBox.ToolTip", "Place the menu immediately below the anchor and match is width to the anchor's content" },
		{ "MenuPlacement_ComboBoxRight.Comment", "/** Place the menu immediately below the anchor and match is width to the anchor's content. If the width overflows, align with the right edge of the anchor. */" },
		{ "MenuPlacement_ComboBoxRight.DisplayName", "Combo Box Right" },
		{ "MenuPlacement_ComboBoxRight.Name", "MenuPlacement_ComboBoxRight" },
		{ "MenuPlacement_ComboBoxRight.ToolTip", "Place the menu immediately below the anchor and match is width to the anchor's content. If the width overflows, align with the right edge of the anchor." },
		{ "MenuPlacement_MatchBottomLeft.Comment", "/** Place the menu's bottom left corner directly on top of the menu anchor's bottom left corner */" },
		{ "MenuPlacement_MatchBottomLeft.DisplayName", "Match Bottom Left Corner" },
		{ "MenuPlacement_MatchBottomLeft.Name", "MenuPlacement_MatchBottomLeft" },
		{ "MenuPlacement_MatchBottomLeft.ToolTip", "Place the menu's bottom left corner directly on top of the menu anchor's bottom left corner" },
		{ "MenuPlacement_MenuLeft.Comment", "/** Place the menu to the left of the anchor */" },
		{ "MenuPlacement_MenuLeft.DisplayName", "Left" },
		{ "MenuPlacement_MenuLeft.Name", "MenuPlacement_MenuLeft" },
		{ "MenuPlacement_MenuLeft.ToolTip", "Place the menu to the left of the anchor" },
		{ "MenuPlacement_MenuRight.Comment", "/** Place the menu to the right of the anchor */" },
		{ "MenuPlacement_MenuRight.DisplayName", "Right" },
		{ "MenuPlacement_MenuRight.Name", "MenuPlacement_MenuRight" },
		{ "MenuPlacement_MenuRight.ToolTip", "Place the menu to the right of the anchor" },
		{ "MenuPlacement_RightLeftCenter.Comment", "/** Place the menu's vertical center on the left side at the menu anchor's vertical center on the right side */" },
		{ "MenuPlacement_RightLeftCenter.DisplayName", "Right Center, Left Center" },
		{ "MenuPlacement_RightLeftCenter.Name", "MenuPlacement_RightLeftCenter" },
		{ "MenuPlacement_RightLeftCenter.ToolTip", "Place the menu's vertical center on the left side at the menu anchor's vertical center on the right side" },
		{ "ModuleRelativePath", "Public/Types/SlateEnums.h" },
		{ "ToolTip", "Enumerates possible placements for pop-up menus." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_EMenuPlacement_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"EMenuPlacement",
		"EMenuPlacement",
		Z_Construct_UEnum_SlateCore_EMenuPlacement_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EMenuPlacement_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_EMenuPlacement_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EMenuPlacement_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_EMenuPlacement()
	{
		if (!Z_Registration_Info_UEnum_EMenuPlacement.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMenuPlacement.InnerSingleton, Z_Construct_UEnum_SlateCore_EMenuPlacement_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMenuPlacement.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EOrientation;
	static UEnum* EOrientation_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EOrientation.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EOrientation.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EOrientation, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("EOrientation"));
		}
		return Z_Registration_Info_UEnum_EOrientation.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EOrientation>()
	{
		return EOrientation_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_EOrientation_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_EOrientation_Statics::Enumerators[] = {
		{ "Orient_Horizontal", (int64)Orient_Horizontal },
		{ "Orient_Vertical", (int64)Orient_Vertical },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_EOrientation_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Enumerates widget orientations.\n */" },
		{ "ModuleRelativePath", "Public/Types/SlateEnums.h" },
		{ "Orient_Horizontal.Comment", "/** Orient horizontally, i.e. left to right. */" },
		{ "Orient_Horizontal.DisplayName", "Horizontal" },
		{ "Orient_Horizontal.Name", "Orient_Horizontal" },
		{ "Orient_Horizontal.ToolTip", "Orient horizontally, i.e. left to right." },
		{ "Orient_Vertical.Comment", "/** Orient vertically, i.e. top to bottom. */" },
		{ "Orient_Vertical.DisplayName", "Vertical" },
		{ "Orient_Vertical.Name", "Orient_Vertical" },
		{ "Orient_Vertical.ToolTip", "Orient vertically, i.e. top to bottom." },
		{ "ToolTip", "Enumerates widget orientations." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_EOrientation_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"EOrientation",
		"EOrientation",
		Z_Construct_UEnum_SlateCore_EOrientation_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EOrientation_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_EOrientation_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EOrientation_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_EOrientation()
	{
		if (!Z_Registration_Info_UEnum_EOrientation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EOrientation.InnerSingleton, Z_Construct_UEnum_SlateCore_EOrientation_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EOrientation.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EScrollDirection;
	static UEnum* EScrollDirection_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EScrollDirection.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EScrollDirection.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EScrollDirection, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("EScrollDirection"));
		}
		return Z_Registration_Info_UEnum_EScrollDirection.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EScrollDirection>()
	{
		return EScrollDirection_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_EScrollDirection_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_EScrollDirection_Statics::Enumerators[] = {
		{ "Scroll_Down", (int64)Scroll_Down },
		{ "Scroll_Up", (int64)Scroll_Up },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_EScrollDirection_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Enumerates scroll directions.\n */" },
		{ "ModuleRelativePath", "Public/Types/SlateEnums.h" },
		{ "Scroll_Down.Comment", "/** Scroll down. */" },
		{ "Scroll_Down.DisplayName", "Down" },
		{ "Scroll_Down.Name", "Scroll_Down" },
		{ "Scroll_Down.ToolTip", "Scroll down." },
		{ "Scroll_Up.Comment", "/** Scroll up. */" },
		{ "Scroll_Up.DisplayName", "Up" },
		{ "Scroll_Up.Name", "Scroll_Up" },
		{ "Scroll_Up.ToolTip", "Scroll up." },
		{ "ToolTip", "Enumerates scroll directions." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_EScrollDirection_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"EScrollDirection",
		"EScrollDirection",
		Z_Construct_UEnum_SlateCore_EScrollDirection_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EScrollDirection_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Regular,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_EScrollDirection_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EScrollDirection_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_EScrollDirection()
	{
		if (!Z_Registration_Info_UEnum_EScrollDirection.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EScrollDirection.InnerSingleton, Z_Construct_UEnum_SlateCore_EScrollDirection_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EScrollDirection.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETextCommit;
	static UEnum* ETextCommit_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETextCommit.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETextCommit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ETextCommit, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ETextCommit"));
		}
		return Z_Registration_Info_UEnum_ETextCommit.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ETextCommit::Type>()
	{
		return ETextCommit_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_ETextCommit_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_ETextCommit_Statics::Enumerators[] = {
		{ "ETextCommit::Default", (int64)ETextCommit::Default },
		{ "ETextCommit::OnEnter", (int64)ETextCommit::OnEnter },
		{ "ETextCommit::OnUserMovedFocus", (int64)ETextCommit::OnUserMovedFocus },
		{ "ETextCommit::OnCleared", (int64)ETextCommit::OnCleared },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_ETextCommit_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Additional information about a text committal\n */" },
		{ "Default.Comment", "/** Losing focus or similar event caused implicit commit */" },
		{ "Default.Name", "ETextCommit::Default" },
		{ "Default.ToolTip", "Losing focus or similar event caused implicit commit" },
		{ "ModuleRelativePath", "Public/Types/SlateEnums.h" },
		{ "OnCleared.Comment", "/** Keyboard focus was explicitly cleared via the escape key or other similar action */" },
		{ "OnCleared.Name", "ETextCommit::OnCleared" },
		{ "OnCleared.ToolTip", "Keyboard focus was explicitly cleared via the escape key or other similar action" },
		{ "OnEnter.Comment", "/** User committed via the enter key */" },
		{ "OnEnter.Name", "ETextCommit::OnEnter" },
		{ "OnEnter.ToolTip", "User committed via the enter key" },
		{ "OnUserMovedFocus.Comment", "/** User committed via tabbing away or moving focus explicitly away */" },
		{ "OnUserMovedFocus.Name", "ETextCommit::OnUserMovedFocus" },
		{ "OnUserMovedFocus.ToolTip", "User committed via tabbing away or moving focus explicitly away" },
		{ "ToolTip", "Additional information about a text committal" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_ETextCommit_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"ETextCommit",
		"ETextCommit::Type",
		Z_Construct_UEnum_SlateCore_ETextCommit_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ETextCommit_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_ETextCommit_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ETextCommit_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_ETextCommit()
	{
		if (!Z_Registration_Info_UEnum_ETextCommit.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETextCommit.InnerSingleton, Z_Construct_UEnum_SlateCore_ETextCommit_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETextCommit.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESelectInfo;
	static UEnum* ESelectInfo_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESelectInfo.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESelectInfo.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_ESelectInfo, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("ESelectInfo"));
		}
		return Z_Registration_Info_UEnum_ESelectInfo.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<ESelectInfo::Type>()
	{
		return ESelectInfo_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_ESelectInfo_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_ESelectInfo_Statics::Enumerators[] = {
		{ "ESelectInfo::OnKeyPress", (int64)ESelectInfo::OnKeyPress },
		{ "ESelectInfo::OnNavigation", (int64)ESelectInfo::OnNavigation },
		{ "ESelectInfo::OnMouseClick", (int64)ESelectInfo::OnMouseClick },
		{ "ESelectInfo::Direct", (int64)ESelectInfo::Direct },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_ESelectInfo_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Additional information about a selection event\n */" },
		{ "Direct.Comment", "/** Selection was directly set in code */" },
		{ "Direct.Name", "ESelectInfo::Direct" },
		{ "Direct.ToolTip", "Selection was directly set in code" },
		{ "ModuleRelativePath", "Public/Types/SlateEnums.h" },
		{ "OnKeyPress.Comment", "/** User selected via a key press */" },
		{ "OnKeyPress.Name", "ESelectInfo::OnKeyPress" },
		{ "OnKeyPress.ToolTip", "User selected via a key press" },
		{ "OnMouseClick.Comment", "/** User selected by clicking on the item */" },
		{ "OnMouseClick.Name", "ESelectInfo::OnMouseClick" },
		{ "OnMouseClick.ToolTip", "User selected by clicking on the item" },
		{ "OnNavigation.Comment", "/** User selected by navigating to the item */" },
		{ "OnNavigation.Name", "ESelectInfo::OnNavigation" },
		{ "OnNavigation.ToolTip", "User selected by navigating to the item" },
		{ "ToolTip", "Additional information about a selection event" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_ESelectInfo_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"ESelectInfo",
		"ESelectInfo::Type",
		Z_Construct_UEnum_SlateCore_ESelectInfo_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESelectInfo_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::Namespaced,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_ESelectInfo_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_ESelectInfo_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_ESelectInfo()
	{
		if (!Z_Registration_Info_UEnum_ESelectInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESelectInfo.InnerSingleton, Z_Construct_UEnum_SlateCore_ESelectInfo_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESelectInfo.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Types_SlateEnums_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Types_SlateEnums_h_Statics::EnumInfo[] = {
		{ EButtonClickMethod_StaticEnum, TEXT("EButtonClickMethod"), &Z_Registration_Info_UEnum_EButtonClickMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4238010345U) },
		{ EButtonTouchMethod_StaticEnum, TEXT("EButtonTouchMethod"), &Z_Registration_Info_UEnum_EButtonTouchMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 922219495U) },
		{ EButtonPressMethod_StaticEnum, TEXT("EButtonPressMethod"), &Z_Registration_Info_UEnum_EButtonPressMethod, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 73978870U) },
		{ EUINavigation_StaticEnum, TEXT("EUINavigation"), &Z_Registration_Info_UEnum_EUINavigation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 637548137U) },
		{ EUINavigationAction_StaticEnum, TEXT("EUINavigationAction"), &Z_Registration_Info_UEnum_EUINavigationAction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 520136403U) },
		{ ENavigationSource_StaticEnum, TEXT("ENavigationSource"), &Z_Registration_Info_UEnum_ENavigationSource, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 198643097U) },
		{ ENavigationGenesis_StaticEnum, TEXT("ENavigationGenesis"), &Z_Registration_Info_UEnum_ENavigationGenesis, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3096906662U) },
		{ EHorizontalAlignment_StaticEnum, TEXT("EHorizontalAlignment"), &Z_Registration_Info_UEnum_EHorizontalAlignment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4247529014U) },
		{ EVerticalAlignment_StaticEnum, TEXT("EVerticalAlignment"), &Z_Registration_Info_UEnum_EVerticalAlignment, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1453904578U) },
		{ EMenuPlacement_StaticEnum, TEXT("EMenuPlacement"), &Z_Registration_Info_UEnum_EMenuPlacement, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1455066231U) },
		{ EOrientation_StaticEnum, TEXT("EOrientation"), &Z_Registration_Info_UEnum_EOrientation, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3412645699U) },
		{ EScrollDirection_StaticEnum, TEXT("EScrollDirection"), &Z_Registration_Info_UEnum_EScrollDirection, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3423351679U) },
		{ ETextCommit_StaticEnum, TEXT("ETextCommit"), &Z_Registration_Info_UEnum_ETextCommit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1116915171U) },
		{ ESelectInfo_StaticEnum, TEXT("ESelectInfo"), &Z_Registration_Info_UEnum_ESelectInfo, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2646121829U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Types_SlateEnums_h_4168374364(TEXT("/Script/SlateCore"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Types_SlateEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Types_SlateEnums_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
