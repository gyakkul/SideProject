// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Behaviour/Builtin/RangeMap/RCRangeMapBehaviour.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRCRangeMapBehaviour() {}
// Cross Module References
	REMOTECONTROL_API UClass* Z_Construct_UClass_URCVirtualPropertyContainerBase_NoRegister();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URCVirtualPropertySelfContainer_NoRegister();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCAction_NoRegister();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCBehaviour();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCRangeMapBehaviour();
	REMOTECONTROLLOGIC_API UClass* Z_Construct_UClass_URCRangeMapBehaviour_NoRegister();
	REMOTECONTROLLOGIC_API UScriptStruct* Z_Construct_UScriptStruct_FRCRangeMapInput();
	UPackage* Z_Construct_UPackage__Script_RemoteControlLogic();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RCRangeMapInput;
class UScriptStruct* FRCRangeMapInput::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RCRangeMapInput.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RCRangeMapInput.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRCRangeMapInput, (UObject*)Z_Construct_UPackage__Script_RemoteControlLogic(), TEXT("RCRangeMapInput"));
	}
	return Z_Registration_Info_UScriptStruct_RCRangeMapInput.OuterSingleton;
}
template<> REMOTECONTROLLOGIC_API UScriptStruct* StaticStruct<FRCRangeMapInput>()
{
	return FRCRangeMapInput::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRCRangeMapInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputProperty_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InputProperty;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCRangeMapInput_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/RangeMap/RCRangeMapBehaviour.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRCRangeMapInput_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRCRangeMapInput>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCRangeMapInput_Statics::NewProp_InputProperty_MetaData[] = {
		{ "Comment", "/** The Value which we use represent the action based on a normalized step. */" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/RangeMap/RCRangeMapBehaviour.h" },
		{ "ToolTip", "The Value which we use represent the action based on a normalized step." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRCRangeMapInput_Statics::NewProp_InputProperty = { "InputProperty", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCRangeMapInput, InputProperty), Z_Construct_UClass_URCVirtualPropertySelfContainer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCRangeMapInput_Statics::NewProp_InputProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCRangeMapInput_Statics::NewProp_InputProperty_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRCRangeMapInput_Statics::NewProp_PropertyValue_MetaData[] = {
		{ "Comment", "/** The Property this Action holds and will be used for calculations for the lerp. */" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/RangeMap/RCRangeMapBehaviour.h" },
		{ "ToolTip", "The Property this Action holds and will be used for calculations for the lerp." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FRCRangeMapInput_Statics::NewProp_PropertyValue = { "PropertyValue", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRCRangeMapInput, PropertyValue), Z_Construct_UClass_URCVirtualPropertySelfContainer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRCRangeMapInput_Statics::NewProp_PropertyValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCRangeMapInput_Statics::NewProp_PropertyValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRCRangeMapInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCRangeMapInput_Statics::NewProp_InputProperty,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRCRangeMapInput_Statics::NewProp_PropertyValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRCRangeMapInput_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlLogic,
		nullptr,
		&NewStructOps,
		"RCRangeMapInput",
		sizeof(FRCRangeMapInput),
		alignof(FRCRangeMapInput),
		Z_Construct_UScriptStruct_FRCRangeMapInput_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCRangeMapInput_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRCRangeMapInput_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRCRangeMapInput_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRCRangeMapInput()
	{
		if (!Z_Registration_Info_UScriptStruct_RCRangeMapInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RCRangeMapInput.InnerSingleton, Z_Construct_UScriptStruct_FRCRangeMapInput_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RCRangeMapInput.InnerSingleton;
	}
	void URCRangeMapBehaviour::StaticRegisterNativesURCRangeMapBehaviour()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URCRangeMapBehaviour);
	UClass* Z_Construct_UClass_URCRangeMapBehaviour_NoRegister()
	{
		return URCRangeMapBehaviour::StaticClass();
	}
	struct Z_Construct_UClass_URCRangeMapBehaviour_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyContainer_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PropertyContainer;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RangeMapActionContainer_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RangeMapActionContainer_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RangeMapActionContainer_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RangeMapActionContainer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URCRangeMapBehaviour_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URCBehaviour,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControlLogic,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCRangeMapBehaviour_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Custom behaviour for Set Asset By Path Logic Behaviour \n */" },
		{ "IncludePath", "Behaviour/Builtin/RangeMap/RCRangeMapBehaviour.h" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/RangeMap/RCRangeMapBehaviour.h" },
		{ "ToolTip", "Custom behaviour for Set Asset By Path Logic Behaviour" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCRangeMapBehaviour_Statics::NewProp_PropertyContainer_MetaData[] = {
		{ "Comment", "/** Pointer to property container */" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/RangeMap/RCRangeMapBehaviour.h" },
		{ "ToolTip", "Pointer to property container" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URCRangeMapBehaviour_Statics::NewProp_PropertyContainer = { "PropertyContainer", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCRangeMapBehaviour, PropertyContainer), Z_Construct_UClass_URCVirtualPropertyContainerBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URCRangeMapBehaviour_Statics::NewProp_PropertyContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCRangeMapBehaviour_Statics::NewProp_PropertyContainer_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URCRangeMapBehaviour_Statics::NewProp_RangeMapActionContainer_ValueProp = { "RangeMapActionContainer", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FRCRangeMapInput, METADATA_PARAMS(nullptr, 0) }; // 1603023831
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_URCRangeMapBehaviour_Statics::NewProp_RangeMapActionContainer_Key_KeyProp = { "RangeMapActionContainer_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_URCAction_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URCRangeMapBehaviour_Statics::NewProp_RangeMapActionContainer_MetaData[] = {
		{ "Comment", "/** Container holding all FRCRangeMapInputs correlating to each Action in the ActionContainer. */" },
		{ "ModuleRelativePath", "Public/Behaviour/Builtin/RangeMap/RCRangeMapBehaviour.h" },
		{ "ToolTip", "Container holding all FRCRangeMapInputs correlating to each Action in the ActionContainer." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URCRangeMapBehaviour_Statics::NewProp_RangeMapActionContainer = { "RangeMapActionContainer", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URCRangeMapBehaviour, RangeMapActionContainer), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URCRangeMapBehaviour_Statics::NewProp_RangeMapActionContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URCRangeMapBehaviour_Statics::NewProp_RangeMapActionContainer_MetaData)) }; // 1603023831
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URCRangeMapBehaviour_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCRangeMapBehaviour_Statics::NewProp_PropertyContainer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCRangeMapBehaviour_Statics::NewProp_RangeMapActionContainer_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCRangeMapBehaviour_Statics::NewProp_RangeMapActionContainer_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URCRangeMapBehaviour_Statics::NewProp_RangeMapActionContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URCRangeMapBehaviour_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URCRangeMapBehaviour>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URCRangeMapBehaviour_Statics::ClassParams = {
		&URCRangeMapBehaviour::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URCRangeMapBehaviour_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URCRangeMapBehaviour_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URCRangeMapBehaviour_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URCRangeMapBehaviour_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URCRangeMapBehaviour()
	{
		if (!Z_Registration_Info_UClass_URCRangeMapBehaviour.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URCRangeMapBehaviour.OuterSingleton, Z_Construct_UClass_URCRangeMapBehaviour_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URCRangeMapBehaviour.OuterSingleton;
	}
	template<> REMOTECONTROLLOGIC_API UClass* StaticClass<URCRangeMapBehaviour>()
	{
		return URCRangeMapBehaviour::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URCRangeMapBehaviour);
	URCRangeMapBehaviour::~URCRangeMapBehaviour() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RangeMap_RCRangeMapBehaviour_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RangeMap_RCRangeMapBehaviour_h_Statics::ScriptStructInfo[] = {
		{ FRCRangeMapInput::StaticStruct, Z_Construct_UScriptStruct_FRCRangeMapInput_Statics::NewStructOps, TEXT("RCRangeMapInput"), &Z_Registration_Info_UScriptStruct_RCRangeMapInput, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRCRangeMapInput), 1603023831U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RangeMap_RCRangeMapBehaviour_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URCRangeMapBehaviour, URCRangeMapBehaviour::StaticClass, TEXT("URCRangeMapBehaviour"), &Z_Registration_Info_UClass_URCRangeMapBehaviour, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URCRangeMapBehaviour), 1730803047U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RangeMap_RCRangeMapBehaviour_h_2795653316(TEXT("/Script/RemoteControlLogic"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RangeMap_RCRangeMapBehaviour_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RangeMap_RCRangeMapBehaviour_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RangeMap_RCRangeMapBehaviour_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControlLogic_Public_Behaviour_Builtin_RangeMap_RCRangeMapBehaviour_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
