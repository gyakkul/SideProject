// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/AI/MLAdapter/Source/MLAdapter/Public/Sensors/MLAdapterSensor_Input.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMLAdapterSensor_Input() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient_NoRegister();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSensor();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSensor_Input();
	MLADAPTER_API UClass* Z_Construct_UClass_UMLAdapterSensor_Input_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MLAdapter();
// End Cross Module References
	void UMLAdapterSensor_Input::StaticRegisterNativesUMLAdapterSensor_Input()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMLAdapterSensor_Input);
	UClass* Z_Construct_UClass_UMLAdapterSensor_Input_NoRegister()
	{
		return UMLAdapterSensor_Input::StaticClass();
	}
	struct Z_Construct_UClass_UMLAdapterSensor_Input_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GameViewport_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_GameViewport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecordKeyRelease_MetaData[];
#endif
		static void NewProp_bRecordKeyRelease_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecordKeyRelease;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMLAdapterSensor_Input_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMLAdapterSensor,
		(UObject* (*)())Z_Construct_UPackage__Script_MLAdapter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_Input_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\x09Note that this sensor doesn't buffer input state between GetObservations call\n *\x09@todo a child class could easily do that by overriding OnInputKey/OnInputAxis and GetObservations\n */" },
		{ "IncludePath", "Sensors/MLAdapterSensor_Input.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor_Input.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "Note that this sensor doesn't buffer input state between GetObservations call\n@todo a child class could easily do that by overriding OnInputKey/OnInputAxis and GetObservations" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_Input_Statics::NewProp_GameViewport_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor_Input.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UMLAdapterSensor_Input_Statics::NewProp_GameViewport = { "GameViewport", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMLAdapterSensor_Input, GameViewport), Z_Construct_UClass_UGameViewportClient_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_Input_Statics::NewProp_GameViewport_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_Input_Statics::NewProp_GameViewport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMLAdapterSensor_Input_Statics::NewProp_bRecordKeyRelease_MetaData[] = {
		{ "Category", "MLAdapter" },
		{ "ModuleRelativePath", "Public/Sensors/MLAdapterSensor_Input.h" },
	};
#endif
	void Z_Construct_UClass_UMLAdapterSensor_Input_Statics::NewProp_bRecordKeyRelease_SetBit(void* Obj)
	{
		((UMLAdapterSensor_Input*)Obj)->bRecordKeyRelease = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMLAdapterSensor_Input_Statics::NewProp_bRecordKeyRelease = { "bRecordKeyRelease", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UMLAdapterSensor_Input), &Z_Construct_UClass_UMLAdapterSensor_Input_Statics::NewProp_bRecordKeyRelease_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_Input_Statics::NewProp_bRecordKeyRelease_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_Input_Statics::NewProp_bRecordKeyRelease_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMLAdapterSensor_Input_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSensor_Input_Statics::NewProp_GameViewport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMLAdapterSensor_Input_Statics::NewProp_bRecordKeyRelease,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMLAdapterSensor_Input_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMLAdapterSensor_Input>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMLAdapterSensor_Input_Statics::ClassParams = {
		&UMLAdapterSensor_Input::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMLAdapterSensor_Input_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_Input_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMLAdapterSensor_Input_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMLAdapterSensor_Input_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMLAdapterSensor_Input()
	{
		if (!Z_Registration_Info_UClass_UMLAdapterSensor_Input.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMLAdapterSensor_Input.OuterSingleton, Z_Construct_UClass_UMLAdapterSensor_Input_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMLAdapterSensor_Input.OuterSingleton;
	}
	template<> MLADAPTER_API UClass* StaticClass<UMLAdapterSensor_Input>()
	{
		return UMLAdapterSensor_Input::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMLAdapterSensor_Input);
	UMLAdapterSensor_Input::~UMLAdapterSensor_Input() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_Input_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_Input_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMLAdapterSensor_Input, UMLAdapterSensor_Input::StaticClass, TEXT("UMLAdapterSensor_Input"), &Z_Registration_Info_UClass_UMLAdapterSensor_Input, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMLAdapterSensor_Input), 1345132827U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_Input_h_2195275515(TEXT("/Script/MLAdapter"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_Input_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_AI_MLAdapter_Source_MLAdapter_Public_Sensors_MLAdapterSensor_Input_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
