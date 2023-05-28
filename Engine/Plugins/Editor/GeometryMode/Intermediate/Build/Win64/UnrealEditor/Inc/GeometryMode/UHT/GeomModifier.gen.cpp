// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GeomModifier.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGeomModifier() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UPolys_NoRegister();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier();
	GEOMETRYMODE_API UClass* Z_Construct_UClass_UGeomModifier_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GeometryMode();
// End Cross Module References
	void UGeomModifier::StaticRegisterNativesUGeomModifier()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGeomModifier);
	UClass* Z_Construct_UClass_UGeomModifier_NoRegister()
	{
		return UGeomModifier::StaticClass();
	}
	struct Z_Construct_UClass_UGeomModifier_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tooltip_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_Tooltip;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolbarIconName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ToolbarIconName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPushButton_MetaData[];
#endif
		static void NewProp_bPushButton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPushButton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInitialized_MetaData[];
#endif
		static void NewProp_bInitialized_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInitialized;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPendingPivotOffsetUpdate_MetaData[];
#endif
		static void NewProp_bPendingPivotOffsetUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPendingPivotOffsetUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAppearsInToolbar_MetaData[];
#endif
		static void NewProp_bAppearsInToolbar_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAppearsInToolbar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedPolys_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedPolys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGeomModifier_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GeometryMode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object GeomModifier" },
		{ "IncludePath", "GeomModifier.h" },
		{ "ModuleRelativePath", "Classes/GeomModifier.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "GeomModifier" },
		{ "Comment", "/** A human readable name for this modifier (appears on buttons, menus, etc) */" },
		{ "ModuleRelativePath", "Classes/GeomModifier.h" },
		{ "ToolTip", "A human readable name for this modifier (appears on buttons, menus, etc)" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UGeomModifier_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeomModifier, Description), METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Statics::NewProp_Tooltip_MetaData[] = {
		{ "Category", "GeomModifier" },
		{ "Comment", "/** The tooltip to be displayed for this modifier */" },
		{ "ModuleRelativePath", "Classes/GeomModifier.h" },
		{ "ToolTip", "The tooltip to be displayed for this modifier" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UGeomModifier_Statics::NewProp_Tooltip = { "Tooltip", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeomModifier, Tooltip), METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Statics::NewProp_Tooltip_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Statics::NewProp_Tooltip_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Statics::NewProp_ToolbarIconName_MetaData[] = {
		{ "Comment", "/** Icon name for showing this modifier in a toolbar */" },
		{ "ModuleRelativePath", "Classes/GeomModifier.h" },
		{ "ToolTip", "Icon name for showing this modifier in a toolbar" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGeomModifier_Statics::NewProp_ToolbarIconName = { "ToolbarIconName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeomModifier, ToolbarIconName), METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Statics::NewProp_ToolbarIconName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Statics::NewProp_ToolbarIconName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Statics::NewProp_bPushButton_MetaData[] = {
		{ "Category", "GeomModifier" },
		{ "Comment", "/** If true, this modifier should be displayed as a push button instead of a radio button */" },
		{ "ModuleRelativePath", "Classes/GeomModifier.h" },
		{ "ToolTip", "If true, this modifier should be displayed as a push button instead of a radio button" },
	};
#endif
	void Z_Construct_UClass_UGeomModifier_Statics::NewProp_bPushButton_SetBit(void* Obj)
	{
		((UGeomModifier*)Obj)->bPushButton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeomModifier_Statics::NewProp_bPushButton = { "bPushButton", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UGeomModifier), &Z_Construct_UClass_UGeomModifier_Statics::NewProp_bPushButton_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Statics::NewProp_bPushButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Statics::NewProp_bPushButton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Statics::NewProp_bInitialized_MetaData[] = {
		{ "Category", "GeomModifier" },
		{ "Comment", "/**\n\x09 * true if the modifier has been initialized.\n\x09 * This is useful for interpreting user input and mouse drags correctly.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/GeomModifier.h" },
		{ "ToolTip", "true if the modifier has been initialized.\nThis is useful for interpreting user input and mouse drags correctly." },
	};
#endif
	void Z_Construct_UClass_UGeomModifier_Statics::NewProp_bInitialized_SetBit(void* Obj)
	{
		((UGeomModifier*)Obj)->bInitialized = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeomModifier_Statics::NewProp_bInitialized = { "bInitialized", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UGeomModifier), &Z_Construct_UClass_UGeomModifier_Statics::NewProp_bInitialized_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Statics::NewProp_bInitialized_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Statics::NewProp_bInitialized_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Statics::NewProp_bPendingPivotOffsetUpdate_MetaData[] = {
		{ "Comment", "/** If true, the pivot offset should be updated when the modification ends */" },
		{ "ModuleRelativePath", "Classes/GeomModifier.h" },
		{ "ToolTip", "If true, the pivot offset should be updated when the modification ends" },
	};
#endif
	void Z_Construct_UClass_UGeomModifier_Statics::NewProp_bPendingPivotOffsetUpdate_SetBit(void* Obj)
	{
		((UGeomModifier*)Obj)->bPendingPivotOffsetUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeomModifier_Statics::NewProp_bPendingPivotOffsetUpdate = { "bPendingPivotOffsetUpdate", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UGeomModifier), &Z_Construct_UClass_UGeomModifier_Statics::NewProp_bPendingPivotOffsetUpdate_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Statics::NewProp_bPendingPivotOffsetUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Statics::NewProp_bPendingPivotOffsetUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Statics::NewProp_bAppearsInToolbar_MetaData[] = {
		{ "ModuleRelativePath", "Classes/GeomModifier.h" },
	};
#endif
	void Z_Construct_UClass_UGeomModifier_Statics::NewProp_bAppearsInToolbar_SetBit(void* Obj)
	{
		((UGeomModifier*)Obj)->bAppearsInToolbar = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGeomModifier_Statics::NewProp_bAppearsInToolbar = { "bAppearsInToolbar", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UGeomModifier), &Z_Construct_UClass_UGeomModifier_Statics::NewProp_bAppearsInToolbar_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Statics::NewProp_bAppearsInToolbar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Statics::NewProp_bAppearsInToolbar_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGeomModifier_Statics::NewProp_CachedPolys_MetaData[] = {
		{ "Comment", "/** Stored state of polys in case the brush state needs to be restroed */" },
		{ "ModuleRelativePath", "Classes/GeomModifier.h" },
		{ "ToolTip", "Stored state of polys in case the brush state needs to be restroed" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UGeomModifier_Statics::NewProp_CachedPolys = { "CachedPolys", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UGeomModifier, CachedPolys), Z_Construct_UClass_UPolys_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Statics::NewProp_CachedPolys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Statics::NewProp_CachedPolys_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGeomModifier_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Statics::NewProp_Description,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Statics::NewProp_Tooltip,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Statics::NewProp_ToolbarIconName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Statics::NewProp_bPushButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Statics::NewProp_bInitialized,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Statics::NewProp_bPendingPivotOffsetUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Statics::NewProp_bAppearsInToolbar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGeomModifier_Statics::NewProp_CachedPolys,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGeomModifier_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGeomModifier>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGeomModifier_Statics::ClassParams = {
		&UGeomModifier::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGeomModifier_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Statics::PropPointers),
		0,
		0x000000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UGeomModifier_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGeomModifier_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGeomModifier()
	{
		if (!Z_Registration_Info_UClass_UGeomModifier.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGeomModifier.OuterSingleton, Z_Construct_UClass_UGeomModifier_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGeomModifier.OuterSingleton;
	}
	template<> GEOMETRYMODE_API UClass* StaticClass<UGeomModifier>()
	{
		return UGeomModifier::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGeomModifier);
	UGeomModifier::~UGeomModifier() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGeomModifier, UGeomModifier::StaticClass, TEXT("UGeomModifier"), &Z_Registration_Info_UClass_UGeomModifier, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGeomModifier), 4066857216U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_h_2651996441(TEXT("/Script/GeometryMode"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_GeometryMode_Source_GeometryMode_Classes_GeomModifier_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
