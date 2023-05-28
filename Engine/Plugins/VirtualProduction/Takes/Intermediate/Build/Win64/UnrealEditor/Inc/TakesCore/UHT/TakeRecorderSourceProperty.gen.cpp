// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TakeRecorderSourceProperty.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTakeRecorderSourceProperty() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	TAKESCORE_API UClass* Z_Construct_UClass_UActorRecorderPropertyMap();
	TAKESCORE_API UClass* Z_Construct_UClass_UActorRecorderPropertyMap_NoRegister();
	TAKESCORE_API UScriptStruct* Z_Construct_UScriptStruct_FActorRecordedProperty();
	UPackage* Z_Construct_UPackage__Script_TakesCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ActorRecordedProperty;
class UScriptStruct* FActorRecordedProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ActorRecordedProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ActorRecordedProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorRecordedProperty, (UObject*)Z_Construct_UPackage__Script_TakesCore(), TEXT("ActorRecordedProperty"));
	}
	return Z_Registration_Info_UScriptStruct_ActorRecordedProperty.OuterSingleton;
}
template<> TAKESCORE_API UScriptStruct* StaticStruct<FActorRecordedProperty>()
{
	return FActorRecordedProperty::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FActorRecordedProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecorderName_MetaData[];
#endif
		static const UECodeGen_Private::FTextPropertyParams NewProp_RecorderName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorRecordedProperty>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorRecordedProperty, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((FActorRecordedProperty*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FActorRecordedProperty), &Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_bEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_RecorderName_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
	};
#endif
	const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_RecorderName = { "RecorderName", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FActorRecordedProperty, RecorderName), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_RecorderName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_RecorderName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_bEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewProp_RecorderName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TakesCore,
		nullptr,
		&NewStructOps,
		"ActorRecordedProperty",
		sizeof(FActorRecordedProperty),
		alignof(FActorRecordedProperty),
		Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorRecordedProperty()
	{
		if (!Z_Registration_Info_UScriptStruct_ActorRecordedProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ActorRecordedProperty.InnerSingleton, Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ActorRecordedProperty.InnerSingleton;
	}
	void UActorRecorderPropertyMap::StaticRegisterNativesUActorRecorderPropertyMap()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UActorRecorderPropertyMap);
	UClass* Z_Construct_UClass_UActorRecorderPropertyMap_NoRegister()
	{
		return UActorRecorderPropertyMap::StaticClass();
	}
	struct Z_Construct_UClass_UActorRecorderPropertyMap_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecordedObject_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_RecordedObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Properties_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Properties;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Children_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Children_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Children;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActorRecorderPropertyMap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_TakesCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecorderPropertyMap_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n* This represents a list of all possible properties and components on an actor\n* which can be recorded by the Actor Recorder and whether or not the user wishes\n* to record them. If you wish to expose a property to be recorded it needs to be marked\n* as \"Interp\" (C++) or \"Expose to Cinematics\" in Blueprints.\n*/" },
		{ "IncludePath", "TakeRecorderSourceProperty.h" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
		{ "ToolTip", "This represents a list of all possible properties and components on an actor\nwhich can be recorded by the Actor Recorder and whether or not the user wishes\nto record them. If you wish to expose a property to be recorded it needs to be marked\nas \"Interp\" (C++) or \"Expose to Cinematics\" in Blueprints." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_RecordedObject_MetaData[] = {
		{ "Category", "Property" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_RecordedObject = { "RecordedObject", nullptr, (EPropertyFlags)0x0014000000020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorRecorderPropertyMap, RecordedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_RecordedObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_RecordedObject_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Properties_Inner = { "Properties", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FActorRecordedProperty, METADATA_PARAMS(nullptr, 0) }; // 322829624
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Properties_MetaData[] = {
		{ "Category", "Property" },
		{ "Comment", "/* Represents properties exposed to Cinematics that can possibly be recorded. */" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
		{ "ToolTip", "Represents properties exposed to Cinematics that can possibly be recorded." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorRecorderPropertyMap, Properties), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Properties_MetaData)) }; // 322829624
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Children_Inner_MetaData[] = {
		{ "Category", "Property" },
		{ "EditFixedOrder", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
		{ "ShowInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Children_Inner = { "Children", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UActorRecorderPropertyMap_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Children_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Children_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Children_MetaData[] = {
		{ "Category", "Property" },
		{ "EditFixedOrder", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/TakeRecorderSourceProperty.h" },
		{ "ShowInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Children = { "Children", nullptr, (EPropertyFlags)0x001400800000000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UActorRecorderPropertyMap, Children), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Children_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Children_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorRecorderPropertyMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_RecordedObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Properties_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Properties,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Children_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorRecorderPropertyMap_Statics::NewProp_Children,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActorRecorderPropertyMap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorRecorderPropertyMap>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorRecorderPropertyMap_Statics::ClassParams = {
		&UActorRecorderPropertyMap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UActorRecorderPropertyMap_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UActorRecorderPropertyMap_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UActorRecorderPropertyMap_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActorRecorderPropertyMap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActorRecorderPropertyMap()
	{
		if (!Z_Registration_Info_UClass_UActorRecorderPropertyMap.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorRecorderPropertyMap.OuterSingleton, Z_Construct_UClass_UActorRecorderPropertyMap_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UActorRecorderPropertyMap.OuterSingleton;
	}
	template<> TAKESCORE_API UClass* StaticClass<UActorRecorderPropertyMap>()
	{
		return UActorRecorderPropertyMap::StaticClass();
	}
	UActorRecorderPropertyMap::UActorRecorderPropertyMap(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActorRecorderPropertyMap);
	UActorRecorderPropertyMap::~UActorRecorderPropertyMap() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSourceProperty_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSourceProperty_h_Statics::ScriptStructInfo[] = {
		{ FActorRecordedProperty::StaticStruct, Z_Construct_UScriptStruct_FActorRecordedProperty_Statics::NewStructOps, TEXT("ActorRecordedProperty"), &Z_Registration_Info_UScriptStruct_ActorRecordedProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorRecordedProperty), 322829624U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSourceProperty_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UActorRecorderPropertyMap, UActorRecorderPropertyMap::StaticClass, TEXT("UActorRecorderPropertyMap"), &Z_Registration_Info_UClass_UActorRecorderPropertyMap, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorRecorderPropertyMap), 3624036388U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSourceProperty_h_928008725(TEXT("/Script/TakesCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSourceProperty_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSourceProperty_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSourceProperty_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_Takes_Source_TakesCore_Public_TakeRecorderSourceProperty_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
