// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MLAdapter/Source/MLAdapter/Public/Sensors/MLAdapterSensor_AIPerception.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLAdapterSensor_AIPerception() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UAIPerceptionComponent_NoRegister();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSensor();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSensor_AIPerception();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSensor_AIPerception_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MLAdapter();
// End Cross Module References
	void UMLAdapterSensor_AIPerception::StaticRegisterNativesUMLAdapterSensor_AIPerception()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLAdapterSensor_AIPerception);
	UClass* Z_Construct_UClass_UMLAdapterSensor_AIPerception_NoRegister()
	{
		return UMLAdapterSensor_AIPerception::StaticClass();
	}
	struct Z_Construct_UClass_UMLAdapterSensor_AIPerception_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PerceptionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PerceptionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSenseOnlyChanges_MetaData[];
#endif
		static void NewProp_bSenseOnlyChanges_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSenseOnlyChanges;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLAdapterSensor_AIPerception_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLAdapterSensor,
		(UObject* (*)())Z_Construct_UPackage__Script_MLAdapter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_AIPerception_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09When applied to a player controller will create an AIPerception component for \n *\x09that player and plug it into the AIPerceptionSystem. The sensor will report \n *\x09information gathered by the perception system on the behalf of this agent.\n *\x09@see UAIPerceptionComponent::ProcessStimuli\n *\n *\x09Note that the world needs to be configured to allow AI Systems to be created\n *\x09@see Server.Configure mz@todo replace with the proper reference\n */" },
		{ "IncludePath", "Sensors/MLAdapterSensor_AIPerception.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor_AIPerception.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "When applied to a player controller will create an AIPerception component for\nthat player and plug it into the AIPerceptionSystem. The sensor will report\ninformation gathered by the perception system on the behalf of this agent.\n@see UAIPerceptionComponent::ProcessStimuli\n\nNote that the world needs to be configured to allow AI Systems to be created\n@see Server.Configure mz@todo replace with the proper reference" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_AIPerception_Statics::NewProp_PerceptionComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor_AIPerception.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLAdapterSensor_AIPerception_Statics::NewProp_PerceptionComponent = { "PerceptionComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterSensor_AIPerception, PerceptionComponent), Z_Construct_UClass_UAIPerceptionComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_AIPerception_Statics::NewProp_PerceptionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_AIPerception_Statics::NewProp_PerceptionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_AIPerception_Statics::NewProp_bSenseOnlyChanges_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09When set to true will only gather perception \"delta\" meaning consecutive\n\x09 *\x09updates will consist of new perception information. Defaults to \"false\" \n\x09 *\x09which means that every update all of data contained by the PerceptionComponent \n\x09 *\x09will be \"sensed\"\n\x09 */" },
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor_AIPerception.h" },
		{ "ToolTip", "When set to true will only gather perception \"delta\" meaning consecutive\nupdates will consist of new perception information. Defaults to \"false\"\nwhich means that every update all of data contained by the PerceptionComponent\nwill be \"sensed\"" },
	};
#endif
	void Z_Construct_UClass_UMLAdapterSensor_AIPerception_Statics::NewProp_bSenseOnlyChanges_SetBit(void* Obj)
	{
		((UMLAdapterSensor_AIPerception*)Obj)->bSenseOnlyChanges = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMLAdapterSensor_AIPerception_Statics::NewProp_bSenseOnlyChanges = { "bSenseOnlyChanges", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMLAdapterSensor_AIPerception), &Z_Construct_UClass_UMLAdapterSensor_AIPerception_Statics::NewProp_bSenseOnlyChanges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_AIPerception_Statics::NewProp_bSenseOnlyChanges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_AIPerception_Statics::NewProp_bSenseOnlyChanges_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLAdapterSensor_AIPerception_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSensor_AIPerception_Statics::NewProp_PerceptionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSensor_AIPerception_Statics::NewProp_bSenseOnlyChanges,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLAdapterSensor_AIPerception_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLAdapterSensor_AIPerception>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLAdapterSensor_AIPerception_Statics::ClassParams = {
		&UMLAdapterSensor_AIPerception::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMLAdapterSensor_AIPerception_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_AIPerception_Statics::PropPointers),
		0,
		0x009010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_AIPerception_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_AIPerception_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLAdapterSensor_AIPerception()
	{
		if (!Z_Registration_Info_UClass_UMLAdapterSensor_AIPerception.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLAdapterSensor_AIPerception.OuterSingleton, Z_Construct_UClass_UMLAdapterSensor_AIPerception_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLAdapterSensor_AIPerception.OuterSingleton;
	}
	template<> MLADAPTER_API UClass* StaticClass<UMLAdapterSensor_AIPerception>()
	{
		return UMLAdapterSensor_AIPerception::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLAdapterSensor_AIPerception);
	UMLAdapterSensor_AIPerception::~UMLAdapterSensor_AIPerception() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_AIPerception_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_AIPerception_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLAdapterSensor_AIPerception, UMLAdapterSensor_AIPerception::StaticClass, TEXT("UMLAdapterSensor_AIPerception"), &Z_Registration_Info_UClass_UMLAdapterSensor_AIPerception, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLAdapterSensor_AIPerception), 830006269U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_AIPerception_h_2914800956(TEXT("/Script/MLAdapter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_AIPerception_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_AIPerception_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
