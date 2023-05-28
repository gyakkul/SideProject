// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InteractiveTool.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractiveTool() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehaviorSet_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehaviorSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveTool_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInteractiveToolPropertySet_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolShutdownType();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EToolShutdownType;
	static UEnum* EToolShutdownType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EToolShutdownType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EToolShutdownType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InteractiveToolsFramework_EToolShutdownType, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("EToolShutdownType"));
		}
		return Z_Registration_Info_UEnum_EToolShutdownType.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UEnum* StaticEnum<EToolShutdownType>()
	{
		return EToolShutdownType_StaticEnum();
	}
	struct Z_Construct_UEnum_InteractiveToolsFramework_EToolShutdownType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_InteractiveToolsFramework_EToolShutdownType_Statics::Enumerators[] = {
		{ "EToolShutdownType::Completed", (int64)EToolShutdownType::Completed },
		{ "EToolShutdownType::Accept", (int64)EToolShutdownType::Accept },
		{ "EToolShutdownType::Cancel", (int64)EToolShutdownType::Cancel },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_InteractiveToolsFramework_EToolShutdownType_Statics::Enum_MetaDataParams[] = {
		{ "Accept.Comment", "/** Tool commits current preview to scene */" },
		{ "Accept.Name", "EToolShutdownType::Accept" },
		{ "Accept.ToolTip", "Tool commits current preview to scene" },
		{ "BlueprintType", "true" },
		{ "Cancel.Comment", "/** Tool discards current preview without modifying scene */" },
		{ "Cancel.Name", "EToolShutdownType::Cancel" },
		{ "Cancel.ToolTip", "Tool discards current preview without modifying scene" },
		{ "Comment", "/** Passed to UInteractiveTool::Shutdown to indicate how Tool should shut itself down*/" },
		{ "Completed.Comment", "/** Tool cleans up and exits. Pass this to tools that do not have Accept/Cancel options. */" },
		{ "Completed.Name", "EToolShutdownType::Completed" },
		{ "Completed.ToolTip", "Tool cleans up and exits. Pass this to tools that do not have Accept/Cancel options." },
		{ "ModuleRelativePath", "Public/InteractiveTool.h" },
		{ "ToolTip", "Passed to UInteractiveTool::Shutdown to indicate how Tool should shut itself down" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InteractiveToolsFramework_EToolShutdownType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		"EToolShutdownType",
		"EToolShutdownType",
		Z_Construct_UEnum_InteractiveToolsFramework_EToolShutdownType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EToolShutdownType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_InteractiveToolsFramework_EToolShutdownType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_InteractiveToolsFramework_EToolShutdownType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_InteractiveToolsFramework_EToolShutdownType()
	{
		if (!Z_Registration_Info_UEnum_EToolShutdownType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EToolShutdownType.InnerSingleton, Z_Construct_UEnum_InteractiveToolsFramework_EToolShutdownType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EToolShutdownType.InnerSingleton;
	}
	void UInteractiveToolPropertySet::StaticRegisterNativesUInteractiveToolPropertySet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveToolPropertySet);
	UClass* Z_Construct_UClass_UInteractiveToolPropertySet_NoRegister()
	{
		return UInteractiveToolPropertySet::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveToolPropertySet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedPropertiesMap_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_CachedPropertiesMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedPropertiesMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_CachedPropertiesMap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPropertySetEnabled_MetaData[];
#endif
		static void NewProp_bIsPropertySetEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPropertySetEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveToolPropertySet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolPropertySet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A UInteractiveTool contains a set of UObjects that contain \"properties\" of the Tool, ie\n * the configuration flags, parameters, etc that control the Tool. Currently any UObject\n * can be added as a property set, however there is no automatic mechanism for those child\n * UObjects to notify the Tool when a property changes.\n *\n * If you make your property set UObjects subclasses of UInteractiveToolPropertySet, then\n * when the Tool Properties are changed *in the Editor*, the parent Tool will be automatically notified.\n * You can override UInteractiveTool::OnPropertyModified() to act on these notifications\n */" },
		{ "IncludePath", "InteractiveTool.h" },
		{ "ModuleRelativePath", "Public/InteractiveTool.h" },
		{ "ToolTip", "A UInteractiveTool contains a set of UObjects that contain \"properties\" of the Tool, ie\nthe configuration flags, parameters, etc that control the Tool. Currently any UObject\ncan be added as a property set, however there is no automatic mechanism for those child\nUObjects to notify the Tool when a property changes.\n\nIf you make your property set UObjects subclasses of UInteractiveToolPropertySet, then\nwhen the Tool Properties are changed *in the Editor*, the parent Tool will be automatically notified.\nYou can override UInteractiveTool::OnPropertyModified() to act on these notifications" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_CachedPropertiesMap_ValueProp = { "CachedPropertiesMap", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UInteractiveToolPropertySet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_CachedPropertiesMap_Key_KeyProp = { "CachedPropertiesMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_CachedPropertiesMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractiveTool.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_CachedPropertiesMap = { "CachedPropertiesMap", nullptr, (EPropertyFlags)0x00a4080400202000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractiveToolPropertySet, CachedPropertiesMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_CachedPropertiesMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_CachedPropertiesMap_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_bIsPropertySetEnabled_MetaData[] = {
		{ "Comment", "// Controls whether a property set is shown in the UI.  Transient so that disabling a PropertySet in one tool doesn't disable it in others.\n" },
		{ "ModuleRelativePath", "Public/InteractiveTool.h" },
		{ "ToolTip", "Controls whether a property set is shown in the UI.  Transient so that disabling a PropertySet in one tool doesn't disable it in others." },
		{ "TransientToolProperty", "" },
	};
#endif
	void Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_bIsPropertySetEnabled_SetBit(void* Obj)
	{
		((UInteractiveToolPropertySet*)Obj)->bIsPropertySetEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_bIsPropertySetEnabled = { "bIsPropertySetEnabled", nullptr, (EPropertyFlags)0x00a0080000202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UInteractiveToolPropertySet), &Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_bIsPropertySetEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_bIsPropertySetEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_bIsPropertySetEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractiveToolPropertySet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_CachedPropertiesMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_CachedPropertiesMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_CachedPropertiesMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveToolPropertySet_Statics::NewProp_bIsPropertySetEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveToolPropertySet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveToolPropertySet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveToolPropertySet_Statics::ClassParams = {
		&UInteractiveToolPropertySet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInteractiveToolPropertySet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolPropertySet_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractiveToolPropertySet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveToolPropertySet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractiveToolPropertySet()
	{
		if (!Z_Registration_Info_UClass_UInteractiveToolPropertySet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveToolPropertySet.OuterSingleton, Z_Construct_UClass_UInteractiveToolPropertySet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractiveToolPropertySet.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveToolPropertySet>()
	{
		return UInteractiveToolPropertySet::StaticClass();
	}
	UInteractiveToolPropertySet::UInteractiveToolPropertySet(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveToolPropertySet);
	UInteractiveToolPropertySet::~UInteractiveToolPropertySet() {}
	void UInteractiveTool::StaticRegisterNativesUInteractiveTool()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInteractiveTool);
	UClass* Z_Construct_UClass_UInteractiveTool_NoRegister()
	{
		return UInteractiveTool::StaticClass();
	}
	struct Z_Construct_UClass_UInteractiveTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputBehaviors_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputBehaviors;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ToolPropertyObjects_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ToolPropertyObjects_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ToolPropertyObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractiveTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveTool_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UInteractiveTool is the base class for all Tools in the InteractiveToolsFramework.\n * A Tool is is a \"lightweight mode\" that may \"own\" one or more Actors/Components/etc in\n * the current scene, may capture certain input devices or event streams, and so on.\n * The base implementation essentially does nothing but provide sane default behaviors.\n *\n * The BaseTools/ subfolder contains implementations of various kinds of standard\n * \"tool behavior\", like a tool that responds to a mouse click, etc, that can be\n * extended to implement custom behaviors.\n *\n * In the framework, you do not create instances of UInteractiveTool yourself.\n * You provide a UInteractiveToolBuilder implementation that can properly construct\n * an instance of your Tool, this is where for example default parameters would be set.\n * The ToolBuilder is registered with the ToolManager, and then UInteractiveToolManager::ActivateTool()\n * is used to kick things off.\n *\n * @todo callback/delegate for if/when .InputBehaviors changes\n * @todo callback/delegate for when tool properties change\n */" },
		{ "IncludePath", "InteractiveTool.h" },
		{ "ModuleRelativePath", "Public/InteractiveTool.h" },
		{ "ToolTip", "UInteractiveTool is the base class for all Tools in the InteractiveToolsFramework.\nA Tool is is a \"lightweight mode\" that may \"own\" one or more Actors/Components/etc in\nthe current scene, may capture certain input devices or event streams, and so on.\nThe base implementation essentially does nothing but provide sane default behaviors.\n\nThe BaseTools/ subfolder contains implementations of various kinds of standard\n\"tool behavior\", like a tool that responds to a mouse click, etc, that can be\nextended to implement custom behaviors.\n\nIn the framework, you do not create instances of UInteractiveTool yourself.\nYou provide a UInteractiveToolBuilder implementation that can properly construct\nan instance of your Tool, this is where for example default parameters would be set.\nThe ToolBuilder is registered with the ToolManager, and then UInteractiveToolManager::ActivateTool()\nis used to kick things off.\n\n@todo callback/delegate for if/when .InputBehaviors changes\n@todo callback/delegate for when tool properties change" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveTool_Statics::NewProp_InputBehaviors_MetaData[] = {
		{ "Comment", "/** The current set of InputBehaviors provided by this Tool */" },
		{ "ModuleRelativePath", "Public/InteractiveTool.h" },
		{ "ToolTip", "The current set of InputBehaviors provided by this Tool" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInteractiveTool_Statics::NewProp_InputBehaviors = { "InputBehaviors", nullptr, (EPropertyFlags)0x00a4080400202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractiveTool, InputBehaviors), Z_Construct_UClass_UInputBehaviorSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractiveTool_Statics::NewProp_InputBehaviors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveTool_Statics::NewProp_InputBehaviors_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UInteractiveTool_Statics::NewProp_ToolPropertyObjects_Inner = { "ToolPropertyObjects", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractiveTool_Statics::NewProp_ToolPropertyObjects_MetaData[] = {
		{ "Comment", "/** The current set of Property UObjects provided by this Tool. May contain pointer to itself. */" },
		{ "ModuleRelativePath", "Public/InteractiveTool.h" },
		{ "ToolTip", "The current set of Property UObjects provided by this Tool. May contain pointer to itself." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInteractiveTool_Statics::NewProp_ToolPropertyObjects = { "ToolPropertyObjects", nullptr, (EPropertyFlags)0x00a4080400202000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInteractiveTool, ToolPropertyObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInteractiveTool_Statics::NewProp_ToolPropertyObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveTool_Statics::NewProp_ToolPropertyObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractiveTool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveTool_Statics::NewProp_InputBehaviors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveTool_Statics::NewProp_ToolPropertyObjects_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractiveTool_Statics::NewProp_ToolPropertyObjects,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UInteractiveTool_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInputBehaviorSource_NoRegister, (int32)VTABLE_OFFSET(UInteractiveTool, IInputBehaviorSource), false },  // 4222810999
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractiveTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractiveTool>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInteractiveTool_Statics::ClassParams = {
		&UInteractiveTool::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInteractiveTool_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveTool_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractiveTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractiveTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractiveTool()
	{
		if (!Z_Registration_Info_UClass_UInteractiveTool.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInteractiveTool.OuterSingleton, Z_Construct_UClass_UInteractiveTool_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInteractiveTool.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInteractiveTool>()
	{
		return UInteractiveTool::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractiveTool);
	UInteractiveTool::~UInteractiveTool() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_Statics::EnumInfo[] = {
		{ EToolShutdownType_StaticEnum, TEXT("EToolShutdownType"), &Z_Registration_Info_UEnum_EToolShutdownType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2744993379U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInteractiveToolPropertySet, UInteractiveToolPropertySet::StaticClass, TEXT("UInteractiveToolPropertySet"), &Z_Registration_Info_UClass_UInteractiveToolPropertySet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveToolPropertySet), 1226657908U) },
		{ Z_Construct_UClass_UInteractiveTool, UInteractiveTool::StaticClass, TEXT("UInteractiveTool"), &Z_Registration_Info_UClass_UInteractiveTool, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInteractiveTool), 839236113U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_2939636096(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InteractiveTool_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
