// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObjectFilter/ObjectMixerEditorObjectFilter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObjectMixerEditorObjectFilter() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	OBJECTMIXEREDITOR_API UClass* Z_Construct_UClass_UObjectMixerBlueprintObjectFilter();
	OBJECTMIXEREDITOR_API UClass* Z_Construct_UClass_UObjectMixerBlueprintObjectFilter_NoRegister();
	OBJECTMIXEREDITOR_API UClass* Z_Construct_UClass_UObjectMixerObjectFilter();
	OBJECTMIXEREDITOR_API UClass* Z_Construct_UClass_UObjectMixerObjectFilter_NoRegister();
	OBJECTMIXEREDITOR_API UEnum* Z_Construct_UEnum_ObjectMixerEditor_EObjectMixerInheritanceInclusionOptions();
	OBJECTMIXEREDITOR_API UEnum* Z_Construct_UEnum_ObjectMixerEditor_EObjectMixerTreeViewMode();
	UPackage* Z_Construct_UPackage__Script_ObjectMixerEditor();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EObjectMixerInheritanceInclusionOptions;
	static UEnum* EObjectMixerInheritanceInclusionOptions_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EObjectMixerInheritanceInclusionOptions.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EObjectMixerInheritanceInclusionOptions.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ObjectMixerEditor_EObjectMixerInheritanceInclusionOptions, (UObject*)Z_Construct_UPackage__Script_ObjectMixerEditor(), TEXT("EObjectMixerInheritanceInclusionOptions"));
		}
		return Z_Registration_Info_UEnum_EObjectMixerInheritanceInclusionOptions.OuterSingleton;
	}
	template<> OBJECTMIXEREDITOR_API UEnum* StaticEnum<EObjectMixerInheritanceInclusionOptions>()
	{
		return EObjectMixerInheritanceInclusionOptions_StaticEnum();
	}
	struct Z_Construct_UEnum_ObjectMixerEditor_EObjectMixerInheritanceInclusionOptions_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ObjectMixerEditor_EObjectMixerInheritanceInclusionOptions_Statics::Enumerators[] = {
		{ "EObjectMixerInheritanceInclusionOptions::None", (int64)EObjectMixerInheritanceInclusionOptions::None },
		{ "EObjectMixerInheritanceInclusionOptions::IncludeOnlyImmediateParent", (int64)EObjectMixerInheritanceInclusionOptions::IncludeOnlyImmediateParent },
		{ "EObjectMixerInheritanceInclusionOptions::IncludeOnlyImmediateChildren", (int64)EObjectMixerInheritanceInclusionOptions::IncludeOnlyImmediateChildren },
		{ "EObjectMixerInheritanceInclusionOptions::IncludeOnlyImmediateParentAndChildren", (int64)EObjectMixerInheritanceInclusionOptions::IncludeOnlyImmediateParentAndChildren },
		{ "EObjectMixerInheritanceInclusionOptions::IncludeAllParents", (int64)EObjectMixerInheritanceInclusionOptions::IncludeAllParents },
		{ "EObjectMixerInheritanceInclusionOptions::IncludeAllChildren", (int64)EObjectMixerInheritanceInclusionOptions::IncludeAllChildren },
		{ "EObjectMixerInheritanceInclusionOptions::IncludeAllParentsAndChildren", (int64)EObjectMixerInheritanceInclusionOptions::IncludeAllParentsAndChildren },
		{ "EObjectMixerInheritanceInclusionOptions::IncludeAllParentsAndOnlyImmediateChildren", (int64)EObjectMixerInheritanceInclusionOptions::IncludeAllParentsAndOnlyImmediateChildren },
		{ "EObjectMixerInheritanceInclusionOptions::IncludeOnlyImmediateParentAndAllChildren", (int64)EObjectMixerInheritanceInclusionOptions::IncludeOnlyImmediateParentAndAllChildren },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ObjectMixerEditor_EObjectMixerInheritanceInclusionOptions_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludeAllChildren.Comment", "// Get properties from all derived classes recursively + Specified Classes\n" },
		{ "IncludeAllChildren.Name", "EObjectMixerInheritanceInclusionOptions::IncludeAllChildren" },
		{ "IncludeAllChildren.ToolTip", "Get properties from all derived classes recursively + Specified Classes" },
		{ "IncludeAllParents.Comment", "// Go up the chain of parent classes to get all properties in the specified classes' ancestries + Specified Classes\n" },
		{ "IncludeAllParents.Name", "EObjectMixerInheritanceInclusionOptions::IncludeAllParents" },
		{ "IncludeAllParents.ToolTip", "Go up the chain of parent classes to get all properties in the specified classes' ancestries + Specified Classes" },
		{ "IncludeAllParentsAndChildren.Comment", "// IncludeAllParents + IncludeAllChildren + Specified Classes\n" },
		{ "IncludeAllParentsAndChildren.Name", "EObjectMixerInheritanceInclusionOptions::IncludeAllParentsAndChildren" },
		{ "IncludeAllParentsAndChildren.ToolTip", "IncludeAllParents + IncludeAllChildren + Specified Classes" },
		{ "IncludeAllParentsAndOnlyImmediateChildren.Comment", "// IncludeAllParents + IncludeOnlyImmediateChildren + Specified Classes\n" },
		{ "IncludeAllParentsAndOnlyImmediateChildren.Name", "EObjectMixerInheritanceInclusionOptions::IncludeAllParentsAndOnlyImmediateChildren" },
		{ "IncludeAllParentsAndOnlyImmediateChildren.ToolTip", "IncludeAllParents + IncludeOnlyImmediateChildren + Specified Classes" },
		{ "IncludeOnlyImmediateChildren.Comment", "// Get properties from child classes but not child classes of child classes + Specified Classes\n" },
		{ "IncludeOnlyImmediateChildren.Name", "EObjectMixerInheritanceInclusionOptions::IncludeOnlyImmediateChildren" },
		{ "IncludeOnlyImmediateChildren.ToolTip", "Get properties from child classes but not child classes of child classes + Specified Classes" },
		{ "IncludeOnlyImmediateParent.Comment", "// Get properties from the class that the specified classes immediately derive from, but not the parents' parents + Specified Classes\n" },
		{ "IncludeOnlyImmediateParent.Name", "EObjectMixerInheritanceInclusionOptions::IncludeOnlyImmediateParent" },
		{ "IncludeOnlyImmediateParent.ToolTip", "Get properties from the class that the specified classes immediately derive from, but not the parents' parents + Specified Classes" },
		{ "IncludeOnlyImmediateParentAndAllChildren.Comment", "// IncludeOnlyImmediateParent + IncludeAllChildren + Specified Classes\n" },
		{ "IncludeOnlyImmediateParentAndAllChildren.Name", "EObjectMixerInheritanceInclusionOptions::IncludeOnlyImmediateParentAndAllChildren" },
		{ "IncludeOnlyImmediateParentAndAllChildren.ToolTip", "IncludeOnlyImmediateParent + IncludeAllChildren + Specified Classes" },
		{ "IncludeOnlyImmediateParentAndChildren.Comment", "// IncludeOnlyImmediateParent + IncludeOnlyImmediateChildren + Specified Classes\n" },
		{ "IncludeOnlyImmediateParentAndChildren.Name", "EObjectMixerInheritanceInclusionOptions::IncludeOnlyImmediateParentAndChildren" },
		{ "IncludeOnlyImmediateParentAndChildren.ToolTip", "IncludeOnlyImmediateParent + IncludeOnlyImmediateChildren + Specified Classes" },
		{ "ModuleRelativePath", "Public/ObjectFilter/ObjectMixerEditorObjectFilter.h" },
		{ "None.Comment", "// Get only the properties in the specified classes without considering parent or child classes\n" },
		{ "None.Name", "EObjectMixerInheritanceInclusionOptions::None" },
		{ "None.ToolTip", "Get only the properties in the specified classes without considering parent or child classes" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ObjectMixerEditor_EObjectMixerInheritanceInclusionOptions_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ObjectMixerEditor,
		nullptr,
		"EObjectMixerInheritanceInclusionOptions",
		"EObjectMixerInheritanceInclusionOptions",
		Z_Construct_UEnum_ObjectMixerEditor_EObjectMixerInheritanceInclusionOptions_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ObjectMixerEditor_EObjectMixerInheritanceInclusionOptions_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ObjectMixerEditor_EObjectMixerInheritanceInclusionOptions_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ObjectMixerEditor_EObjectMixerInheritanceInclusionOptions_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ObjectMixerEditor_EObjectMixerInheritanceInclusionOptions()
	{
		if (!Z_Registration_Info_UEnum_EObjectMixerInheritanceInclusionOptions.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EObjectMixerInheritanceInclusionOptions.InnerSingleton, Z_Construct_UEnum_ObjectMixerEditor_EObjectMixerInheritanceInclusionOptions_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EObjectMixerInheritanceInclusionOptions.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EObjectMixerTreeViewMode;
	static UEnum* EObjectMixerTreeViewMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EObjectMixerTreeViewMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EObjectMixerTreeViewMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ObjectMixerEditor_EObjectMixerTreeViewMode, (UObject*)Z_Construct_UPackage__Script_ObjectMixerEditor(), TEXT("EObjectMixerTreeViewMode"));
		}
		return Z_Registration_Info_UEnum_EObjectMixerTreeViewMode.OuterSingleton;
	}
	template<> OBJECTMIXEREDITOR_API UEnum* StaticEnum<EObjectMixerTreeViewMode>()
	{
		return EObjectMixerTreeViewMode_StaticEnum();
	}
	struct Z_Construct_UEnum_ObjectMixerEditor_EObjectMixerTreeViewMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_ObjectMixerEditor_EObjectMixerTreeViewMode_Statics::Enumerators[] = {
		{ "EObjectMixerTreeViewMode::NoFolders", (int64)EObjectMixerTreeViewMode::NoFolders },
		{ "EObjectMixerTreeViewMode::Folders", (int64)EObjectMixerTreeViewMode::Folders },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_ObjectMixerEditor_EObjectMixerTreeViewMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Folders.Comment", "// Display objects in a hierarchy with folders\n" },
		{ "Folders.Name", "EObjectMixerTreeViewMode::Folders" },
		{ "Folders.ToolTip", "Display objects in a hierarchy with folders" },
		{ "ModuleRelativePath", "Public/ObjectFilter/ObjectMixerEditorObjectFilter.h" },
		{ "NoFolders.Comment", "// Show all matching objects without folders\n" },
		{ "NoFolders.Name", "EObjectMixerTreeViewMode::NoFolders" },
		{ "NoFolders.ToolTip", "Show all matching objects without folders" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ObjectMixerEditor_EObjectMixerTreeViewMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_ObjectMixerEditor,
		nullptr,
		"EObjectMixerTreeViewMode",
		"EObjectMixerTreeViewMode",
		Z_Construct_UEnum_ObjectMixerEditor_EObjectMixerTreeViewMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_ObjectMixerEditor_EObjectMixerTreeViewMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_ObjectMixerEditor_EObjectMixerTreeViewMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_ObjectMixerEditor_EObjectMixerTreeViewMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_ObjectMixerEditor_EObjectMixerTreeViewMode()
	{
		if (!Z_Registration_Info_UEnum_EObjectMixerTreeViewMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EObjectMixerTreeViewMode.InnerSingleton, Z_Construct_UEnum_ObjectMixerEditor_EObjectMixerTreeViewMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EObjectMixerTreeViewMode.InnerSingleton;
	}
	void UObjectMixerObjectFilter::StaticRegisterNativesUObjectMixerObjectFilter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectMixerObjectFilter);
	UClass* Z_Construct_UClass_UObjectMixerObjectFilter_NoRegister()
	{
		return UObjectMixerObjectFilter::StaticClass();
	}
	struct Z_Construct_UClass_UObjectMixerObjectFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectMixerObjectFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectMixerEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectMixerObjectFilter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Native class for filtering object types to Object Mixer.\n * Native C++ classes should inherit directly from this class.\n */" },
		{ "IncludePath", "ObjectFilter/ObjectMixerEditorObjectFilter.h" },
		{ "ModuleRelativePath", "Public/ObjectFilter/ObjectMixerEditorObjectFilter.h" },
		{ "ToolTip", "Native class for filtering object types to Object Mixer.\nNative C++ classes should inherit directly from this class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectMixerObjectFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectMixerObjectFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectMixerObjectFilter_Statics::ClassParams = {
		&UObjectMixerObjectFilter::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectMixerObjectFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectMixerObjectFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectMixerObjectFilter()
	{
		if (!Z_Registration_Info_UClass_UObjectMixerObjectFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectMixerObjectFilter.OuterSingleton, Z_Construct_UClass_UObjectMixerObjectFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectMixerObjectFilter.OuterSingleton;
	}
	template<> OBJECTMIXEREDITOR_API UClass* StaticClass<UObjectMixerObjectFilter>()
	{
		return UObjectMixerObjectFilter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectMixerObjectFilter);
	UObjectMixerObjectFilter::~UObjectMixerObjectFilter() {}
	DEFINE_FUNCTION(UObjectMixerBlueprintObjectFilter::execGetPropertiesThatRequireListRefresh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->GetPropertiesThatRequireListRefresh_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectMixerBlueprintObjectFilter::execShouldIncludeUnsupportedProperties)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldIncludeUnsupportedProperties_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectMixerBlueprintObjectFilter::execGetObjectMixerPlacementClassInclusionOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EObjectMixerInheritanceInclusionOptions*)Z_Param__Result=P_THIS->GetObjectMixerPlacementClassInclusionOptions_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectMixerBlueprintObjectFilter::execGetObjectMixerPropertyInheritanceInclusionOptions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EObjectMixerInheritanceInclusionOptions*)Z_Param__Result=P_THIS->GetObjectMixerPropertyInheritanceInclusionOptions_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectMixerBlueprintObjectFilter::execGetForceAddedColumns)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->GetForceAddedColumns_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectMixerBlueprintObjectFilter::execGetColumnsToExclude)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->GetColumnsToExclude_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectMixerBlueprintObjectFilter::execGetColumnsToShowByDefault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<FName>*)Z_Param__Result=P_THIS->GetColumnsToShowByDefault_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectMixerBlueprintObjectFilter::execOnSetRowEditorVisibility)
	{
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_GET_UBOOL(Z_Param_bNewIsVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSetRowEditorVisibility_Implementation(Z_Param_InObject,Z_Param_bNewIsVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectMixerBlueprintObjectFilter::execGetRowEditorVisibility)
	{
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetRowEditorVisibility_Implementation(Z_Param_InObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectMixerBlueprintObjectFilter::execGetRowTooltipText)
	{
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_GET_UBOOL(Z_Param_bIsHybridRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetRowTooltipText_Implementation(Z_Param_InObject,Z_Param_bIsHybridRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectMixerBlueprintObjectFilter::execGetRowDisplayName)
	{
		P_GET_OBJECT(UObject,Z_Param_InObject);
		P_GET_UBOOL(Z_Param_bIsHybridRow);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetRowDisplayName_Implementation(Z_Param_InObject,Z_Param_bIsHybridRow);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectMixerBlueprintObjectFilter::execGetObjectClassesToPlace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<TSubclassOf<AActor> >*)Z_Param__Result=P_THIS->GetObjectClassesToPlace_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UObjectMixerBlueprintObjectFilter::execGetObjectClassesToFilter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSet<UClass*>*)Z_Param__Result=P_THIS->GetObjectClassesToFilter_Implementation();
		P_NATIVE_END;
	}
	struct ObjectMixerBlueprintObjectFilter_eventGetColumnsToExclude_Parms
	{
		TSet<FName> ReturnValue;
	};
	struct ObjectMixerBlueprintObjectFilter_eventGetColumnsToShowByDefault_Parms
	{
		TSet<FName> ReturnValue;
	};
	struct ObjectMixerBlueprintObjectFilter_eventGetForceAddedColumns_Parms
	{
		TSet<FName> ReturnValue;
	};
	struct ObjectMixerBlueprintObjectFilter_eventGetObjectClassesToFilter_Parms
	{
		TSet<UClass*> ReturnValue;
	};
	struct ObjectMixerBlueprintObjectFilter_eventGetObjectClassesToPlace_Parms
	{
		TSet<TSubclassOf<AActor> > ReturnValue;
	};
	struct ObjectMixerBlueprintObjectFilter_eventGetObjectMixerPlacementClassInclusionOptions_Parms
	{
		EObjectMixerInheritanceInclusionOptions ReturnValue;

		/** Constructor, initializes return property only **/
		ObjectMixerBlueprintObjectFilter_eventGetObjectMixerPlacementClassInclusionOptions_Parms()
			: ReturnValue((EObjectMixerInheritanceInclusionOptions)0)
		{
		}
	};
	struct ObjectMixerBlueprintObjectFilter_eventGetObjectMixerPropertyInheritanceInclusionOptions_Parms
	{
		EObjectMixerInheritanceInclusionOptions ReturnValue;

		/** Constructor, initializes return property only **/
		ObjectMixerBlueprintObjectFilter_eventGetObjectMixerPropertyInheritanceInclusionOptions_Parms()
			: ReturnValue((EObjectMixerInheritanceInclusionOptions)0)
		{
		}
	};
	struct ObjectMixerBlueprintObjectFilter_eventGetPropertiesThatRequireListRefresh_Parms
	{
		TSet<FName> ReturnValue;
	};
	struct ObjectMixerBlueprintObjectFilter_eventGetRowDisplayName_Parms
	{
		UObject* InObject;
		bool bIsHybridRow;
		FText ReturnValue;
	};
	struct ObjectMixerBlueprintObjectFilter_eventGetRowEditorVisibility_Parms
	{
		UObject* InObject;
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ObjectMixerBlueprintObjectFilter_eventGetRowEditorVisibility_Parms()
			: ReturnValue(false)
		{
		}
	};
	struct ObjectMixerBlueprintObjectFilter_eventGetRowTooltipText_Parms
	{
		UObject* InObject;
		bool bIsHybridRow;
		FText ReturnValue;
	};
	struct ObjectMixerBlueprintObjectFilter_eventOnSetRowEditorVisibility_Parms
	{
		UObject* InObject;
		bool bNewIsVisible;
	};
	struct ObjectMixerBlueprintObjectFilter_eventShouldIncludeUnsupportedProperties_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		ObjectMixerBlueprintObjectFilter_eventShouldIncludeUnsupportedProperties_Parms()
			: ReturnValue(false)
		{
		}
	};
	static FName NAME_UObjectMixerBlueprintObjectFilter_GetColumnsToExclude = FName(TEXT("GetColumnsToExclude"));
	TSet<FName> UObjectMixerBlueprintObjectFilter::GetColumnsToExclude() const
	{
		ObjectMixerBlueprintObjectFilter_eventGetColumnsToExclude_Parms Parms;
		const_cast<UObjectMixerBlueprintObjectFilter*>(this)->ProcessEvent(FindFunctionChecked(NAME_UObjectMixerBlueprintObjectFilter_GetColumnsToExclude),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UObjectMixerBlueprintObjectFilter_GetColumnsToShowByDefault = FName(TEXT("GetColumnsToShowByDefault"));
	TSet<FName> UObjectMixerBlueprintObjectFilter::GetColumnsToShowByDefault() const
	{
		ObjectMixerBlueprintObjectFilter_eventGetColumnsToShowByDefault_Parms Parms;
		const_cast<UObjectMixerBlueprintObjectFilter*>(this)->ProcessEvent(FindFunctionChecked(NAME_UObjectMixerBlueprintObjectFilter_GetColumnsToShowByDefault),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UObjectMixerBlueprintObjectFilter_GetForceAddedColumns = FName(TEXT("GetForceAddedColumns"));
	TSet<FName> UObjectMixerBlueprintObjectFilter::GetForceAddedColumns() const
	{
		ObjectMixerBlueprintObjectFilter_eventGetForceAddedColumns_Parms Parms;
		const_cast<UObjectMixerBlueprintObjectFilter*>(this)->ProcessEvent(FindFunctionChecked(NAME_UObjectMixerBlueprintObjectFilter_GetForceAddedColumns),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UObjectMixerBlueprintObjectFilter_GetObjectClassesToFilter = FName(TEXT("GetObjectClassesToFilter"));
	TSet<UClass*> UObjectMixerBlueprintObjectFilter::GetObjectClassesToFilter() const
	{
		ObjectMixerBlueprintObjectFilter_eventGetObjectClassesToFilter_Parms Parms;
		const_cast<UObjectMixerBlueprintObjectFilter*>(this)->ProcessEvent(FindFunctionChecked(NAME_UObjectMixerBlueprintObjectFilter_GetObjectClassesToFilter),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UObjectMixerBlueprintObjectFilter_GetObjectClassesToPlace = FName(TEXT("GetObjectClassesToPlace"));
	TSet<TSubclassOf<AActor> > UObjectMixerBlueprintObjectFilter::GetObjectClassesToPlace() const
	{
		ObjectMixerBlueprintObjectFilter_eventGetObjectClassesToPlace_Parms Parms;
		const_cast<UObjectMixerBlueprintObjectFilter*>(this)->ProcessEvent(FindFunctionChecked(NAME_UObjectMixerBlueprintObjectFilter_GetObjectClassesToPlace),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UObjectMixerBlueprintObjectFilter_GetObjectMixerPlacementClassInclusionOptions = FName(TEXT("GetObjectMixerPlacementClassInclusionOptions"));
	EObjectMixerInheritanceInclusionOptions UObjectMixerBlueprintObjectFilter::GetObjectMixerPlacementClassInclusionOptions() const
	{
		ObjectMixerBlueprintObjectFilter_eventGetObjectMixerPlacementClassInclusionOptions_Parms Parms;
		const_cast<UObjectMixerBlueprintObjectFilter*>(this)->ProcessEvent(FindFunctionChecked(NAME_UObjectMixerBlueprintObjectFilter_GetObjectMixerPlacementClassInclusionOptions),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UObjectMixerBlueprintObjectFilter_GetObjectMixerPropertyInheritanceInclusionOptions = FName(TEXT("GetObjectMixerPropertyInheritanceInclusionOptions"));
	EObjectMixerInheritanceInclusionOptions UObjectMixerBlueprintObjectFilter::GetObjectMixerPropertyInheritanceInclusionOptions() const
	{
		ObjectMixerBlueprintObjectFilter_eventGetObjectMixerPropertyInheritanceInclusionOptions_Parms Parms;
		const_cast<UObjectMixerBlueprintObjectFilter*>(this)->ProcessEvent(FindFunctionChecked(NAME_UObjectMixerBlueprintObjectFilter_GetObjectMixerPropertyInheritanceInclusionOptions),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UObjectMixerBlueprintObjectFilter_GetPropertiesThatRequireListRefresh = FName(TEXT("GetPropertiesThatRequireListRefresh"));
	TSet<FName> UObjectMixerBlueprintObjectFilter::GetPropertiesThatRequireListRefresh() const
	{
		ObjectMixerBlueprintObjectFilter_eventGetPropertiesThatRequireListRefresh_Parms Parms;
		const_cast<UObjectMixerBlueprintObjectFilter*>(this)->ProcessEvent(FindFunctionChecked(NAME_UObjectMixerBlueprintObjectFilter_GetPropertiesThatRequireListRefresh),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UObjectMixerBlueprintObjectFilter_GetRowDisplayName = FName(TEXT("GetRowDisplayName"));
	FText UObjectMixerBlueprintObjectFilter::GetRowDisplayName(UObject* InObject, bool bIsHybridRow) const
	{
		ObjectMixerBlueprintObjectFilter_eventGetRowDisplayName_Parms Parms;
		Parms.InObject=InObject;
		Parms.bIsHybridRow=bIsHybridRow ? true : false;
		const_cast<UObjectMixerBlueprintObjectFilter*>(this)->ProcessEvent(FindFunctionChecked(NAME_UObjectMixerBlueprintObjectFilter_GetRowDisplayName),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UObjectMixerBlueprintObjectFilter_GetRowEditorVisibility = FName(TEXT("GetRowEditorVisibility"));
	bool UObjectMixerBlueprintObjectFilter::GetRowEditorVisibility(UObject* InObject) const
	{
		ObjectMixerBlueprintObjectFilter_eventGetRowEditorVisibility_Parms Parms;
		Parms.InObject=InObject;
		const_cast<UObjectMixerBlueprintObjectFilter*>(this)->ProcessEvent(FindFunctionChecked(NAME_UObjectMixerBlueprintObjectFilter_GetRowEditorVisibility),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UObjectMixerBlueprintObjectFilter_GetRowTooltipText = FName(TEXT("GetRowTooltipText"));
	FText UObjectMixerBlueprintObjectFilter::GetRowTooltipText(UObject* InObject, bool bIsHybridRow) const
	{
		ObjectMixerBlueprintObjectFilter_eventGetRowTooltipText_Parms Parms;
		Parms.InObject=InObject;
		Parms.bIsHybridRow=bIsHybridRow ? true : false;
		const_cast<UObjectMixerBlueprintObjectFilter*>(this)->ProcessEvent(FindFunctionChecked(NAME_UObjectMixerBlueprintObjectFilter_GetRowTooltipText),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UObjectMixerBlueprintObjectFilter_OnSetRowEditorVisibility = FName(TEXT("OnSetRowEditorVisibility"));
	void UObjectMixerBlueprintObjectFilter::OnSetRowEditorVisibility(UObject* InObject, bool bNewIsVisible) const
	{
		ObjectMixerBlueprintObjectFilter_eventOnSetRowEditorVisibility_Parms Parms;
		Parms.InObject=InObject;
		Parms.bNewIsVisible=bNewIsVisible ? true : false;
		const_cast<UObjectMixerBlueprintObjectFilter*>(this)->ProcessEvent(FindFunctionChecked(NAME_UObjectMixerBlueprintObjectFilter_OnSetRowEditorVisibility),&Parms);
	}
	static FName NAME_UObjectMixerBlueprintObjectFilter_ShouldIncludeUnsupportedProperties = FName(TEXT("ShouldIncludeUnsupportedProperties"));
	bool UObjectMixerBlueprintObjectFilter::ShouldIncludeUnsupportedProperties() const
	{
		ObjectMixerBlueprintObjectFilter_eventShouldIncludeUnsupportedProperties_Parms Parms;
		const_cast<UObjectMixerBlueprintObjectFilter*>(this)->ProcessEvent(FindFunctionChecked(NAME_UObjectMixerBlueprintObjectFilter_ShouldIncludeUnsupportedProperties),&Parms);
		return !!Parms.ReturnValue;
	}
	void UObjectMixerBlueprintObjectFilter::StaticRegisterNativesUObjectMixerBlueprintObjectFilter()
	{
		UClass* Class = UObjectMixerBlueprintObjectFilter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetColumnsToExclude", &UObjectMixerBlueprintObjectFilter::execGetColumnsToExclude },
			{ "GetColumnsToShowByDefault", &UObjectMixerBlueprintObjectFilter::execGetColumnsToShowByDefault },
			{ "GetForceAddedColumns", &UObjectMixerBlueprintObjectFilter::execGetForceAddedColumns },
			{ "GetObjectClassesToFilter", &UObjectMixerBlueprintObjectFilter::execGetObjectClassesToFilter },
			{ "GetObjectClassesToPlace", &UObjectMixerBlueprintObjectFilter::execGetObjectClassesToPlace },
			{ "GetObjectMixerPlacementClassInclusionOptions", &UObjectMixerBlueprintObjectFilter::execGetObjectMixerPlacementClassInclusionOptions },
			{ "GetObjectMixerPropertyInheritanceInclusionOptions", &UObjectMixerBlueprintObjectFilter::execGetObjectMixerPropertyInheritanceInclusionOptions },
			{ "GetPropertiesThatRequireListRefresh", &UObjectMixerBlueprintObjectFilter::execGetPropertiesThatRequireListRefresh },
			{ "GetRowDisplayName", &UObjectMixerBlueprintObjectFilter::execGetRowDisplayName },
			{ "GetRowEditorVisibility", &UObjectMixerBlueprintObjectFilter::execGetRowEditorVisibility },
			{ "GetRowTooltipText", &UObjectMixerBlueprintObjectFilter::execGetRowTooltipText },
			{ "OnSetRowEditorVisibility", &UObjectMixerBlueprintObjectFilter::execOnSetRowEditorVisibility },
			{ "ShouldIncludeUnsupportedProperties", &UObjectMixerBlueprintObjectFilter::execShouldIncludeUnsupportedProperties },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToExclude_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToExclude_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToExclude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ObjectMixerBlueprintObjectFilter_eventGetColumnsToExclude_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToExclude_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToExclude_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToExclude_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToExclude_Statics::Function_MetaDataParams[] = {
		{ "Category", "Object Mixer" },
		{ "Comment", "/**\n\x09 * Specify a list of property names corresponding to columns you don't want to ever show.\n\x09 * For example, you can specify \"Intensity\" and \"LightColor\" to ensure that they can't be enabled or shown in the UI.\n\x09 * Columns not specified can be enabled by the user in the UI.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectFilter/ObjectMixerEditorObjectFilter.h" },
		{ "ToolTip", "Specify a list of property names corresponding to columns you don't want to ever show.\nFor example, you can specify \"Intensity\" and \"LightColor\" to ensure that they can't be enabled or shown in the UI.\nColumns not specified can be enabled by the user in the UI." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToExclude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectMixerBlueprintObjectFilter, nullptr, "GetColumnsToExclude", nullptr, nullptr, sizeof(ObjectMixerBlueprintObjectFilter_eventGetColumnsToExclude_Parms), Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToExclude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToExclude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToExclude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToExclude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToExclude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToExclude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToShowByDefault_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToShowByDefault_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToShowByDefault_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ObjectMixerBlueprintObjectFilter_eventGetColumnsToShowByDefault_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToShowByDefault_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToShowByDefault_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToShowByDefault_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToShowByDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Object Mixer" },
		{ "Comment", "/**\n\x09 * Specify a list of property names corresponding to columns you want to show by default.\n\x09 * For example, you can specify \"Intensity\" and \"LightColor\" to show only those property columns by default in the UI.\n\x09 * Columns not specified will not be shown by default but can be enabled by the user in the UI.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectFilter/ObjectMixerEditorObjectFilter.h" },
		{ "ToolTip", "Specify a list of property names corresponding to columns you want to show by default.\nFor example, you can specify \"Intensity\" and \"LightColor\" to show only those property columns by default in the UI.\nColumns not specified will not be shown by default but can be enabled by the user in the UI." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToShowByDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectMixerBlueprintObjectFilter, nullptr, "GetColumnsToShowByDefault", nullptr, nullptr, sizeof(ObjectMixerBlueprintObjectFilter_eventGetColumnsToShowByDefault_Parms), Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToShowByDefault_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToShowByDefault_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToShowByDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToShowByDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToShowByDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToShowByDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetForceAddedColumns_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetForceAddedColumns_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetForceAddedColumns_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ObjectMixerBlueprintObjectFilter_eventGetForceAddedColumns_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetForceAddedColumns_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetForceAddedColumns_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetForceAddedColumns_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetForceAddedColumns_Statics::Function_MetaDataParams[] = {
		{ "Category", "Object Mixer" },
		{ "Comment", "/**\n\x09 * Specify a list of property names found in parent classes you want to show that aren't in the specified classes.\n\x09 * Note that properties specified here do not override the properties specified in GetColumnsToExclude().\n\x09 * For example, a ULightComponent displays \"LightColor\" in the editor's details panel,\n\x09 * but ULightComponent itself doesn't have a property named \"LightColor\". Instead it's in its parent class, ULightComponentBase.\n\x09 * In this scenario, ULightComponent is specified and PropertyInheritanceInclusionOptions is None, so \"LightColor\" won't appear by default.\n\x09 * Specify \"LightColor\" in this function to ensure that \"LightColor\" will appear as a column as long as\n\x09 * the property is accessible to one of the specified classes regardless of which parent class it comes from.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectFilter/ObjectMixerEditorObjectFilter.h" },
		{ "ToolTip", "Specify a list of property names found in parent classes you want to show that aren't in the specified classes.\nNote that properties specified here do not override the properties specified in GetColumnsToExclude().\nFor example, a ULightComponent displays \"LightColor\" in the editor's details panel,\nbut ULightComponent itself doesn't have a property named \"LightColor\". Instead it's in its parent class, ULightComponentBase.\nIn this scenario, ULightComponent is specified and PropertyInheritanceInclusionOptions is None, so \"LightColor\" won't appear by default.\nSpecify \"LightColor\" in this function to ensure that \"LightColor\" will appear as a column as long as\nthe property is accessible to one of the specified classes regardless of which parent class it comes from." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetForceAddedColumns_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectMixerBlueprintObjectFilter, nullptr, "GetForceAddedColumns", nullptr, nullptr, sizeof(ObjectMixerBlueprintObjectFilter_eventGetForceAddedColumns_Parms), Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetForceAddedColumns_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetForceAddedColumns_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetForceAddedColumns_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetForceAddedColumns_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetForceAddedColumns()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetForceAddedColumns_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToFilter_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToFilter_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ObjectMixerBlueprintObjectFilter_eventGetObjectClassesToFilter_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToFilter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToFilter_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToFilter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToFilter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Object Mixer" },
		{ "Comment", "/**\n\x09 * Return the basic object types you want to filter for in your level.\n\x09 * For example, if you want to work with Lights, return ULightComponentBase.\n\x09 * If you also want to see the properties for parent or child classes,\n\x09 * override the GetObjectMixerPropertyInheritanceInclusionOptions and GetForceAddedColumns functions.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectFilter/ObjectMixerEditorObjectFilter.h" },
		{ "ToolTip", "Return the basic object types you want to filter for in your level.\nFor example, if you want to work with Lights, return ULightComponentBase.\nIf you also want to see the properties for parent or child classes,\noverride the GetObjectMixerPropertyInheritanceInclusionOptions and GetForceAddedColumns functions." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectMixerBlueprintObjectFilter, nullptr, "GetObjectClassesToFilter", nullptr, nullptr, sizeof(ObjectMixerBlueprintObjectFilter_eventGetObjectClassesToFilter_Parms), Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToFilter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToFilter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToFilter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToFilter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToFilter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToPlace_Statics
	{
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToPlace_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToPlace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ObjectMixerBlueprintObjectFilter_eventGetObjectClassesToPlace_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToPlace_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToPlace_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToPlace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToPlace_Statics::Function_MetaDataParams[] = {
		{ "Category", "Object Mixer" },
		{ "Comment", "/**\n\x09 * Return the basic actor types you want to be able to place using the Add button.\n\x09 * Note that only subclasses of AActor are supported and only those which have a registered factory.\n\x09 * This includes most engine actor types.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectFilter/ObjectMixerEditorObjectFilter.h" },
		{ "ToolTip", "Return the basic actor types you want to be able to place using the Add button.\nNote that only subclasses of AActor are supported and only those which have a registered factory.\nThis includes most engine actor types." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToPlace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectMixerBlueprintObjectFilter, nullptr, "GetObjectClassesToPlace", nullptr, nullptr, sizeof(ObjectMixerBlueprintObjectFilter_eventGetObjectClassesToPlace_Parms), Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToPlace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToPlace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToPlace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToPlace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToPlace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToPlace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPlacementClassInclusionOptions_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPlacementClassInclusionOptions_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPlacementClassInclusionOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ObjectMixerBlueprintObjectFilter_eventGetObjectMixerPlacementClassInclusionOptions_Parms, ReturnValue), Z_Construct_UEnum_ObjectMixerEditor_EObjectMixerInheritanceInclusionOptions, METADATA_PARAMS(nullptr, 0) }; // 2723145799
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPlacementClassInclusionOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPlacementClassInclusionOptions_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPlacementClassInclusionOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPlacementClassInclusionOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Object Mixer" },
		{ "Comment", "/**\n\x09 * Specify whether we should return only the specified classes or the parent and child classes in placement mode.\n\x09 * Defaults to 'None' which only considers the specified classes.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectFilter/ObjectMixerEditorObjectFilter.h" },
		{ "ToolTip", "Specify whether we should return only the specified classes or the parent and child classes in placement mode.\nDefaults to 'None' which only considers the specified classes." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPlacementClassInclusionOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectMixerBlueprintObjectFilter, nullptr, "GetObjectMixerPlacementClassInclusionOptions", nullptr, nullptr, sizeof(ObjectMixerBlueprintObjectFilter_eventGetObjectMixerPlacementClassInclusionOptions_Parms), Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPlacementClassInclusionOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPlacementClassInclusionOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPlacementClassInclusionOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPlacementClassInclusionOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPlacementClassInclusionOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPlacementClassInclusionOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPropertyInheritanceInclusionOptions_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPropertyInheritanceInclusionOptions_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPropertyInheritanceInclusionOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ObjectMixerBlueprintObjectFilter_eventGetObjectMixerPropertyInheritanceInclusionOptions_Parms, ReturnValue), Z_Construct_UEnum_ObjectMixerEditor_EObjectMixerInheritanceInclusionOptions, METADATA_PARAMS(nullptr, 0) }; // 2723145799
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPropertyInheritanceInclusionOptions_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPropertyInheritanceInclusionOptions_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPropertyInheritanceInclusionOptions_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPropertyInheritanceInclusionOptions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Object Mixer" },
		{ "Comment", "/**\n\x09 * Specify whether we should return only the properties of the specified classes or the properties of parent and child classes.\n\x09 * Defaults to 'None' which only considers the properties of the specified classes.\n\x09 * If you're not seeing all the properties you expected, try overloading this function.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectFilter/ObjectMixerEditorObjectFilter.h" },
		{ "ToolTip", "Specify whether we should return only the properties of the specified classes or the properties of parent and child classes.\nDefaults to 'None' which only considers the properties of the specified classes.\nIf you're not seeing all the properties you expected, try overloading this function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPropertyInheritanceInclusionOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectMixerBlueprintObjectFilter, nullptr, "GetObjectMixerPropertyInheritanceInclusionOptions", nullptr, nullptr, sizeof(ObjectMixerBlueprintObjectFilter_eventGetObjectMixerPropertyInheritanceInclusionOptions_Parms), Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPropertyInheritanceInclusionOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPropertyInheritanceInclusionOptions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPropertyInheritanceInclusionOptions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPropertyInheritanceInclusionOptions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPropertyInheritanceInclusionOptions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPropertyInheritanceInclusionOptions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetPropertiesThatRequireListRefresh_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_ElementProp;
		static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetPropertiesThatRequireListRefresh_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetPropertiesThatRequireListRefresh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ObjectMixerBlueprintObjectFilter_eventGetPropertiesThatRequireListRefresh_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetPropertiesThatRequireListRefresh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetPropertiesThatRequireListRefresh_Statics::NewProp_ReturnValue_ElementProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetPropertiesThatRequireListRefresh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetPropertiesThatRequireListRefresh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Object Mixer" },
		{ "Comment", "/**\n\x09 * If a property is changed that has a name found in this set, the panel will be refreshed.\n\x09 * Add a property name to this list if you expect the list to change in some way after changing that property.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectFilter/ObjectMixerEditorObjectFilter.h" },
		{ "ToolTip", "If a property is changed that has a name found in this set, the panel will be refreshed.\nAdd a property name to this list if you expect the list to change in some way after changing that property." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetPropertiesThatRequireListRefresh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectMixerBlueprintObjectFilter, nullptr, "GetPropertiesThatRequireListRefresh", nullptr, nullptr, sizeof(ObjectMixerBlueprintObjectFilter_eventGetPropertiesThatRequireListRefresh_Parms), Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetPropertiesThatRequireListRefresh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetPropertiesThatRequireListRefresh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetPropertiesThatRequireListRefresh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetPropertiesThatRequireListRefresh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetPropertiesThatRequireListRefresh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetPropertiesThatRequireListRefresh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowDisplayName_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsHybridRow_MetaData[];
#endif
		static void NewProp_bIsHybridRow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHybridRow;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowDisplayName_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ObjectMixerBlueprintObjectFilter_eventGetRowDisplayName_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowDisplayName_Statics::NewProp_bIsHybridRow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowDisplayName_Statics::NewProp_bIsHybridRow_SetBit(void* Obj)
	{
		((ObjectMixerBlueprintObjectFilter_eventGetRowDisplayName_Parms*)Obj)->bIsHybridRow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowDisplayName_Statics::NewProp_bIsHybridRow = { "bIsHybridRow", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ObjectMixerBlueprintObjectFilter_eventGetRowDisplayName_Parms), &Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowDisplayName_Statics::NewProp_bIsHybridRow_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowDisplayName_Statics::NewProp_bIsHybridRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowDisplayName_Statics::NewProp_bIsHybridRow_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ObjectMixerBlueprintObjectFilter_eventGetRowDisplayName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowDisplayName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowDisplayName_Statics::NewProp_InObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowDisplayName_Statics::NewProp_bIsHybridRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowDisplayName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowDisplayName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Object Mixer" },
		{ "Comment", "/**\n\x09 * Get the text to display for the object name/label.\n\x09 * This is useful if one of your classes is a component type and you want the label of the component's owning actor, for example.\n\x09 * If not overridden, this returns the actor's label if it's an actor and the object's name for all other objects.\n\x09 * @param bIsHybridRow If true, this row represents a single matching component condensed into a single row with its actor parent.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectFilter/ObjectMixerEditorObjectFilter.h" },
		{ "ToolTip", "Get the text to display for the object name/label.\nThis is useful if one of your classes is a component type and you want the label of the component's owning actor, for example.\nIf not overridden, this returns the actor's label if it's an actor and the object's name for all other objects.\n@param bIsHybridRow If true, this row represents a single matching component condensed into a single row with its actor parent." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectMixerBlueprintObjectFilter, nullptr, "GetRowDisplayName", nullptr, nullptr, sizeof(ObjectMixerBlueprintObjectFilter_eventGetRowDisplayName_Parms), Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowDisplayName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowDisplayName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowDisplayName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowDisplayName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowDisplayName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowEditorVisibility_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowEditorVisibility_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ObjectMixerBlueprintObjectFilter_eventGetRowEditorVisibility_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowEditorVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ObjectMixerBlueprintObjectFilter_eventGetRowEditorVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowEditorVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ObjectMixerBlueprintObjectFilter_eventGetRowEditorVisibility_Parms), &Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowEditorVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowEditorVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowEditorVisibility_Statics::NewProp_InObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowEditorVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowEditorVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Object Mixer" },
		{ "Comment", "/**\n\x09 * Controls how to display the row's visibility icon. Return true if the object should be visible.\n\x09 * Generally this should work like the Scene Outliner does.\n\x09 * If not overridden, we use the Editor Visibility of the object's AActor outer (unless it's an actor itself).\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectFilter/ObjectMixerEditorObjectFilter.h" },
		{ "ToolTip", "Controls how to display the row's visibility icon. Return true if the object should be visible.\nGenerally this should work like the Scene Outliner does.\nIf not overridden, we use the Editor Visibility of the object's AActor outer (unless it's an actor itself)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowEditorVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectMixerBlueprintObjectFilter, nullptr, "GetRowEditorVisibility", nullptr, nullptr, sizeof(ObjectMixerBlueprintObjectFilter_eventGetRowEditorVisibility_Parms), Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowEditorVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowEditorVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowEditorVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowEditorVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowEditorVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowEditorVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowTooltipText_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsHybridRow_MetaData[];
#endif
		static void NewProp_bIsHybridRow_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsHybridRow;
		static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowTooltipText_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ObjectMixerBlueprintObjectFilter_eventGetRowTooltipText_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowTooltipText_Statics::NewProp_bIsHybridRow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowTooltipText_Statics::NewProp_bIsHybridRow_SetBit(void* Obj)
	{
		((ObjectMixerBlueprintObjectFilter_eventGetRowTooltipText_Parms*)Obj)->bIsHybridRow = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowTooltipText_Statics::NewProp_bIsHybridRow = { "bIsHybridRow", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ObjectMixerBlueprintObjectFilter_eventGetRowTooltipText_Parms), &Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowTooltipText_Statics::NewProp_bIsHybridRow_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowTooltipText_Statics::NewProp_bIsHybridRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowTooltipText_Statics::NewProp_bIsHybridRow_MetaData)) };
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowTooltipText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ObjectMixerBlueprintObjectFilter_eventGetRowTooltipText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowTooltipText_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowTooltipText_Statics::NewProp_InObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowTooltipText_Statics::NewProp_bIsHybridRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowTooltipText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowTooltipText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Object Mixer" },
		{ "Comment", "/**\n\x09 * Get the text to display for the row's tooltip when hovering over it.\n\x09 * @param bIsHybridRow If true, this row represents a single matching component condensed into a single row with its actor parent. (unused)\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectFilter/ObjectMixerEditorObjectFilter.h" },
		{ "ToolTip", "Get the text to display for the row's tooltip when hovering over it.\n@param bIsHybridRow If true, this row represents a single matching component condensed into a single row with its actor parent. (unused)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowTooltipText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectMixerBlueprintObjectFilter, nullptr, "GetRowTooltipText", nullptr, nullptr, sizeof(ObjectMixerBlueprintObjectFilter_eventGetRowTooltipText_Parms), Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowTooltipText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowTooltipText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowTooltipText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowTooltipText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowTooltipText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowTooltipText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_OnSetRowEditorVisibility_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
		static void NewProp_bNewIsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bNewIsVisible;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_OnSetRowEditorVisibility_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ObjectMixerBlueprintObjectFilter_eventOnSetRowEditorVisibility_Parms, InObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_OnSetRowEditorVisibility_Statics::NewProp_bNewIsVisible_SetBit(void* Obj)
	{
		((ObjectMixerBlueprintObjectFilter_eventOnSetRowEditorVisibility_Parms*)Obj)->bNewIsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_OnSetRowEditorVisibility_Statics::NewProp_bNewIsVisible = { "bNewIsVisible", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ObjectMixerBlueprintObjectFilter_eventOnSetRowEditorVisibility_Parms), &Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_OnSetRowEditorVisibility_Statics::NewProp_bNewIsVisible_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_OnSetRowEditorVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_OnSetRowEditorVisibility_Statics::NewProp_InObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_OnSetRowEditorVisibility_Statics::NewProp_bNewIsVisible,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_OnSetRowEditorVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Object Mixer" },
		{ "Comment", "/**\n\x09 * Controls what happens when the row's visibility icon is clicked.\n\x09 * Generally this should work like the Scene Outliner does.\n\x09 * If not overridden, we set the Editor Visibility of the object's AActor outer (unless it's an actor itself).\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectFilter/ObjectMixerEditorObjectFilter.h" },
		{ "ToolTip", "Controls what happens when the row's visibility icon is clicked.\nGenerally this should work like the Scene Outliner does.\nIf not overridden, we set the Editor Visibility of the object's AActor outer (unless it's an actor itself)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_OnSetRowEditorVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectMixerBlueprintObjectFilter, nullptr, "OnSetRowEditorVisibility", nullptr, nullptr, sizeof(ObjectMixerBlueprintObjectFilter_eventOnSetRowEditorVisibility_Parms), Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_OnSetRowEditorVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_OnSetRowEditorVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x4C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_OnSetRowEditorVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_OnSetRowEditorVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_OnSetRowEditorVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_OnSetRowEditorVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_ShouldIncludeUnsupportedProperties_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_ShouldIncludeUnsupportedProperties_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ObjectMixerBlueprintObjectFilter_eventShouldIncludeUnsupportedProperties_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_ShouldIncludeUnsupportedProperties_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ObjectMixerBlueprintObjectFilter_eventShouldIncludeUnsupportedProperties_Parms), &Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_ShouldIncludeUnsupportedProperties_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_ShouldIncludeUnsupportedProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_ShouldIncludeUnsupportedProperties_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_ShouldIncludeUnsupportedProperties_Statics::Function_MetaDataParams[] = {
		{ "Category", "Object Mixer" },
		{ "Comment", "/**\n\x09 * If true, properties that are not visible in the details panel and properties not supported by SSingleProperty will be selectable.\n\x09 * Defaults to false.\n\x09 */" },
		{ "ModuleRelativePath", "Public/ObjectFilter/ObjectMixerEditorObjectFilter.h" },
		{ "ToolTip", "If true, properties that are not visible in the details panel and properties not supported by SSingleProperty will be selectable.\nDefaults to false." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_ShouldIncludeUnsupportedProperties_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UObjectMixerBlueprintObjectFilter, nullptr, "ShouldIncludeUnsupportedProperties", nullptr, nullptr, sizeof(ObjectMixerBlueprintObjectFilter_eventShouldIncludeUnsupportedProperties_Parms), Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_ShouldIncludeUnsupportedProperties_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_ShouldIncludeUnsupportedProperties_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_ShouldIncludeUnsupportedProperties_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_ShouldIncludeUnsupportedProperties_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_ShouldIncludeUnsupportedProperties()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_ShouldIncludeUnsupportedProperties_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UObjectMixerBlueprintObjectFilter);
	UClass* Z_Construct_UClass_UObjectMixerBlueprintObjectFilter_NoRegister()
	{
		return UObjectMixerBlueprintObjectFilter::StaticClass();
	}
	struct Z_Construct_UClass_UObjectMixerBlueprintObjectFilter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UObjectMixerBlueprintObjectFilter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObjectMixerObjectFilter,
		(UObject* (*)())Z_Construct_UPackage__Script_ObjectMixerEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UObjectMixerBlueprintObjectFilter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToExclude, "GetColumnsToExclude" }, // 883447504
		{ &Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetColumnsToShowByDefault, "GetColumnsToShowByDefault" }, // 3585029927
		{ &Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetForceAddedColumns, "GetForceAddedColumns" }, // 3958244818
		{ &Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToFilter, "GetObjectClassesToFilter" }, // 1889213601
		{ &Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectClassesToPlace, "GetObjectClassesToPlace" }, // 15169867
		{ &Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPlacementClassInclusionOptions, "GetObjectMixerPlacementClassInclusionOptions" }, // 3008825063
		{ &Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetObjectMixerPropertyInheritanceInclusionOptions, "GetObjectMixerPropertyInheritanceInclusionOptions" }, // 2782844700
		{ &Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetPropertiesThatRequireListRefresh, "GetPropertiesThatRequireListRefresh" }, // 2404292647
		{ &Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowDisplayName, "GetRowDisplayName" }, // 286065415
		{ &Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowEditorVisibility, "GetRowEditorVisibility" }, // 1695803394
		{ &Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_GetRowTooltipText, "GetRowTooltipText" }, // 1555900602
		{ &Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_OnSetRowEditorVisibility, "OnSetRowEditorVisibility" }, // 1779842065
		{ &Z_Construct_UFunction_UObjectMixerBlueprintObjectFilter_ShouldIncludeUnsupportedProperties, "ShouldIncludeUnsupportedProperties" }, // 3164028594
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UObjectMixerBlueprintObjectFilter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Script class for filtering object types to Object Mixer.\n * Blueprint classes should inherit directly from this class.\n */" },
		{ "IncludePath", "ObjectFilter/ObjectMixerEditorObjectFilter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ObjectFilter/ObjectMixerEditorObjectFilter.h" },
		{ "ToolTip", "Script class for filtering object types to Object Mixer.\nBlueprint classes should inherit directly from this class." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UObjectMixerBlueprintObjectFilter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UObjectMixerBlueprintObjectFilter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UObjectMixerBlueprintObjectFilter_Statics::ClassParams = {
		&UObjectMixerBlueprintObjectFilter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UObjectMixerBlueprintObjectFilter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UObjectMixerBlueprintObjectFilter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UObjectMixerBlueprintObjectFilter()
	{
		if (!Z_Registration_Info_UClass_UObjectMixerBlueprintObjectFilter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UObjectMixerBlueprintObjectFilter.OuterSingleton, Z_Construct_UClass_UObjectMixerBlueprintObjectFilter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UObjectMixerBlueprintObjectFilter.OuterSingleton;
	}
	template<> OBJECTMIXEREDITOR_API UClass* StaticClass<UObjectMixerBlueprintObjectFilter>()
	{
		return UObjectMixerBlueprintObjectFilter::StaticClass();
	}
	UObjectMixerBlueprintObjectFilter::UObjectMixerBlueprintObjectFilter() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UObjectMixerBlueprintObjectFilter);
	UObjectMixerBlueprintObjectFilter::~UObjectMixerBlueprintObjectFilter() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_Statics::EnumInfo[] = {
		{ EObjectMixerInheritanceInclusionOptions_StaticEnum, TEXT("EObjectMixerInheritanceInclusionOptions"), &Z_Registration_Info_UEnum_EObjectMixerInheritanceInclusionOptions, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2723145799U) },
		{ EObjectMixerTreeViewMode_StaticEnum, TEXT("EObjectMixerTreeViewMode"), &Z_Registration_Info_UEnum_EObjectMixerTreeViewMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1371894617U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UObjectMixerObjectFilter, UObjectMixerObjectFilter::StaticClass, TEXT("UObjectMixerObjectFilter"), &Z_Registration_Info_UClass_UObjectMixerObjectFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectMixerObjectFilter), 474530397U) },
		{ Z_Construct_UClass_UObjectMixerBlueprintObjectFilter, UObjectMixerBlueprintObjectFilter::StaticClass, TEXT("UObjectMixerBlueprintObjectFilter"), &Z_Registration_Info_UClass_UObjectMixerBlueprintObjectFilter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UObjectMixerBlueprintObjectFilter), 2891424130U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_2535882021(TEXT("/Script/ObjectMixerEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Editor_ObjectMixer_ObjectMixer_Source_ObjectMixer_Public_ObjectFilter_ObjectMixerEditorObjectFilter_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
