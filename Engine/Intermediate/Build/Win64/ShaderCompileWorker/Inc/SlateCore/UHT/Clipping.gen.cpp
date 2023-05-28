// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Layout/Clipping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClipping() {}
// Cross Module References
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EWidgetClipping();
	UPackage* Z_Construct_UPackage__Script_SlateCore();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWidgetClipping;
	static UEnum* EWidgetClipping_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EWidgetClipping.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EWidgetClipping.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_SlateCore_EWidgetClipping, (UObject*)Z_Construct_UPackage__Script_SlateCore(), TEXT("EWidgetClipping"));
		}
		return Z_Registration_Info_UEnum_EWidgetClipping.OuterSingleton;
	}
	template<> SLATECORE_API UEnum* StaticEnum<EWidgetClipping>()
	{
		return EWidgetClipping_StaticEnum();
	}
	struct Z_Construct_UEnum_SlateCore_EWidgetClipping_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_SlateCore_EWidgetClipping_Statics::Enumerators[] = {
		{ "EWidgetClipping::Inherit", (int64)EWidgetClipping::Inherit },
		{ "EWidgetClipping::ClipToBounds", (int64)EWidgetClipping::ClipToBounds },
		{ "EWidgetClipping::ClipToBoundsWithoutIntersecting", (int64)EWidgetClipping::ClipToBoundsWithoutIntersecting },
		{ "EWidgetClipping::ClipToBoundsAlways", (int64)EWidgetClipping::ClipToBoundsAlways },
		{ "EWidgetClipping::OnDemand", (int64)EWidgetClipping::OnDemand },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_SlateCore_EWidgetClipping_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClipToBounds.Comment", "/**\n\x09 * This widget clips content the bounds of this widget.  It intersects those bounds with any previous clipping area.\n\x09 */" },
		{ "ClipToBounds.Name", "EWidgetClipping::ClipToBounds" },
		{ "ClipToBounds.ToolTip", "This widget clips content the bounds of this widget.  It intersects those bounds with any previous clipping area." },
		{ "ClipToBoundsAlways.Comment", "/**\n\x09 * This widget clips to its bounds.  It intersects those bounds with any previous clipping area.\n\x09 *\n\x09 * NOTE: This clipping area can NOT be ignored, it will always clip children.  Useful for hard barriers\n\x09 * in the UI where you never want animations or other effects to break this region.\n\x09 */" },
		{ "ClipToBoundsAlways.DisplayName", "Clip To Bounds - Always (Advanced)" },
		{ "ClipToBoundsAlways.Name", "EWidgetClipping::ClipToBoundsAlways" },
		{ "ClipToBoundsAlways.ToolTip", "This widget clips to its bounds.  It intersects those bounds with any previous clipping area.\n\nNOTE: This clipping area can NOT be ignored, it will always clip children.  Useful for hard barriers\nin the UI where you never want animations or other effects to break this region." },
		{ "ClipToBoundsWithoutIntersecting.Comment", "/**\n\x09 * This widget clips to its bounds.  It does NOT intersect with any existing clipping geometry, it pushes a new clipping \n\x09 * state.  Effectively allowing it to render outside the bounds of hierarchy that does clip.\n\x09 * \n\x09 * NOTE: This will NOT allow you ignore the clipping zone that is set to [Yes - Always].\n\x09 */" },
		{ "ClipToBoundsWithoutIntersecting.DisplayName", "Clip To Bounds - Without Intersecting (Advanced)" },
		{ "ClipToBoundsWithoutIntersecting.Name", "EWidgetClipping::ClipToBoundsWithoutIntersecting" },
		{ "ClipToBoundsWithoutIntersecting.ToolTip", "This widget clips to its bounds.  It does NOT intersect with any existing clipping geometry, it pushes a new clipping\nstate.  Effectively allowing it to render outside the bounds of hierarchy that does clip.\n\nNOTE: This will NOT allow you ignore the clipping zone that is set to [Yes - Always]." },
		{ "Comment", "/**\n * This enum controls clipping of widgets in Slate.  By default all SWidgets do not need to clip their children.\n * Most of the time, you don't need to clip, the only times it becomes important is when something might become hidden\n * due to panning.  You should use this wisely, as Slate can not batch across clipping areas, so if widget A and widget B\n * are set to EWidgetClipping::Yes, no drawing that happens inside their widget trees will ever be batch together, adding\n * additional GPU overhead.\n */" },
		{ "Inherit.Comment", "/**\n\x09 * This widget does not clip children, it and all children inherit the clipping area of the last widget that clipped.\n\x09 */" },
		{ "Inherit.Name", "EWidgetClipping::Inherit" },
		{ "Inherit.ToolTip", "This widget does not clip children, it and all children inherit the clipping area of the last widget that clipped." },
		{ "ModuleRelativePath", "Public/Layout/Clipping.h" },
		{ "OnDemand.Comment", "/**\n\x09 * This widget clips to its bounds when it's Desired Size is larger than the allocated geometry \n\x09 * the widget is given.  If that occurs, it work like [Yes].\n\x09 * \n\x09 * NOTE: This mode was primarily added for Text, which is often placed into containers that eventually \n\x09 * are resized to not be able to support the length of the text.  So rather than needing to tag every \n\x09 * container that could contain text with [Yes], which would result in almost no batching, this mode \n\x09 * was added to dynamically adjust the clipping if needed.  The reason not every panel is set to OnDemand, \n\x09 * is because not every panel returns a Desired Size that matches what it plans to render at.\n\x09 */" },
		{ "OnDemand.DisplayName", "On Demand (Advanced)" },
		{ "OnDemand.Name", "EWidgetClipping::OnDemand" },
		{ "OnDemand.ToolTip", "This widget clips to its bounds when it's Desired Size is larger than the allocated geometry\nthe widget is given.  If that occurs, it work like [Yes].\n\nNOTE: This mode was primarily added for Text, which is often placed into containers that eventually\nare resized to not be able to support the length of the text.  So rather than needing to tag every\ncontainer that could contain text with [Yes], which would result in almost no batching, this mode\nwas added to dynamically adjust the clipping if needed.  The reason not every panel is set to OnDemand,\nis because not every panel returns a Desired Size that matches what it plans to render at." },
		{ "ToolTip", "This enum controls clipping of widgets in Slate.  By default all SWidgets do not need to clip their children.\nMost of the time, you don't need to clip, the only times it becomes important is when something might become hidden\ndue to panning.  You should use this wisely, as Slate can not batch across clipping areas, so if widget A and widget B\nare set to EWidgetClipping::Yes, no drawing that happens inside their widget trees will ever be batch together, adding\nadditional GPU overhead." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_SlateCore_EWidgetClipping_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_SlateCore,
		nullptr,
		"EWidgetClipping",
		"EWidgetClipping",
		Z_Construct_UEnum_SlateCore_EWidgetClipping_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EWidgetClipping_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_SlateCore_EWidgetClipping_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_SlateCore_EWidgetClipping_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_SlateCore_EWidgetClipping()
	{
		if (!Z_Registration_Info_UEnum_EWidgetClipping.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWidgetClipping.InnerSingleton, Z_Construct_UEnum_SlateCore_EWidgetClipping_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EWidgetClipping.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Layout_Clipping_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Layout_Clipping_h_Statics::EnumInfo[] = {
		{ EWidgetClipping_StaticEnum, TEXT("EWidgetClipping"), &Z_Registration_Info_UEnum_EWidgetClipping, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1444779388U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Layout_Clipping_h_4065476172(TEXT("/Script/SlateCore"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Layout_Clipping_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_SlateCore_Public_Layout_Clipping_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
