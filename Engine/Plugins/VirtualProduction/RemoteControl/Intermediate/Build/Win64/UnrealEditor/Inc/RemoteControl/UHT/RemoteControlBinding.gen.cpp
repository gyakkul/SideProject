// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteControlBinding.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlBinding() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ULevel_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlBinding();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlBinding_NoRegister();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlLevelDependantBinding();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlLevelDependantBinding_NoRegister();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlLevelIndependantBinding();
	REMOTECONTROL_API UClass* Z_Construct_UClass_URemoteControlLevelIndependantBinding_NoRegister();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext();
	UPackage* Z_Construct_UPackage__Script_RemoteControl();
// End Cross Module References
	void URemoteControlBinding::StaticRegisterNativesURemoteControlBinding()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoteControlBinding);
	UClass* Z_Construct_UClass_URemoteControlBinding_NoRegister()
	{
		return URemoteControlBinding::StaticClass();
	}
	struct Z_Construct_UClass_URemoteControlBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastBoundObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LastBoundObjectPath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteControlBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlBinding_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Acts as a bridge between an exposed property/function and an object to act on.\n */" },
		{ "IncludePath", "RemoteControlBinding.h" },
		{ "ModuleRelativePath", "Public/RemoteControlBinding.h" },
		{ "ToolTip", "Acts as a bridge between an exposed property/function and an object to act on." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlBinding_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/**\n\x09 * The name of this binding. Defaults to the bound object's name.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlBinding.h" },
		{ "ToolTip", "The name of this binding. Defaults to the bound object's name." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URemoteControlBinding_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlBinding, Name), METADATA_PARAMS(Z_Construct_UClass_URemoteControlBinding_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlBinding_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlBinding_Statics::NewProp_LastBoundObjectPath_MetaData[] = {
		{ "Comment", "/**\n\x09 * The path to the last object that was bound.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlBinding.h" },
		{ "ToolTip", "The path to the last object that was bound." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlBinding_Statics::NewProp_LastBoundObjectPath = { "LastBoundObjectPath", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlBinding, LastBoundObjectPath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UClass_URemoteControlBinding_Statics::NewProp_LastBoundObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlBinding_Statics::NewProp_LastBoundObjectPath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoteControlBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlBinding_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlBinding_Statics::NewProp_LastBoundObjectPath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteControlBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteControlBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoteControlBinding_Statics::ClassParams = {
		&URemoteControlBinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URemoteControlBinding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlBinding_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteControlBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteControlBinding()
	{
		if (!Z_Registration_Info_UClass_URemoteControlBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoteControlBinding.OuterSingleton, Z_Construct_UClass_URemoteControlBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoteControlBinding.OuterSingleton;
	}
	template<> REMOTECONTROL_API UClass* StaticClass<URemoteControlBinding>()
	{
		return URemoteControlBinding::StaticClass();
	}
	URemoteControlBinding::URemoteControlBinding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteControlBinding);
	URemoteControlBinding::~URemoteControlBinding() {}
	void URemoteControlLevelIndependantBinding::StaticRegisterNativesURemoteControlLevelIndependantBinding()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoteControlLevelIndependantBinding);
	UClass* Z_Construct_UClass_URemoteControlLevelIndependantBinding_NoRegister()
	{
		return URemoteControlLevelIndependantBinding::StaticClass();
	}
	struct Z_Construct_UClass_URemoteControlLevelIndependantBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundObject_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BoundObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteControlLevelIndependantBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URemoteControlBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlLevelIndependantBinding_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RemoteControlBinding.h" },
		{ "ModuleRelativePath", "Public/RemoteControlBinding.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlLevelIndependantBinding_Statics::NewProp_BoundObject_MetaData[] = {
		{ "Comment", "/**\n\x09 * Holds the bound object.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlBinding.h" },
		{ "ToolTip", "Holds the bound object." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URemoteControlLevelIndependantBinding_Statics::NewProp_BoundObject = { "BoundObject", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlLevelIndependantBinding, BoundObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URemoteControlLevelIndependantBinding_Statics::NewProp_BoundObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlLevelIndependantBinding_Statics::NewProp_BoundObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoteControlLevelIndependantBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlLevelIndependantBinding_Statics::NewProp_BoundObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteControlLevelIndependantBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteControlLevelIndependantBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoteControlLevelIndependantBinding_Statics::ClassParams = {
		&URemoteControlLevelIndependantBinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URemoteControlLevelIndependantBinding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlLevelIndependantBinding_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteControlLevelIndependantBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlLevelIndependantBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteControlLevelIndependantBinding()
	{
		if (!Z_Registration_Info_UClass_URemoteControlLevelIndependantBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoteControlLevelIndependantBinding.OuterSingleton, Z_Construct_UClass_URemoteControlLevelIndependantBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoteControlLevelIndependantBinding.OuterSingleton;
	}
	template<> REMOTECONTROL_API UClass* StaticClass<URemoteControlLevelIndependantBinding>()
	{
		return URemoteControlLevelIndependantBinding::StaticClass();
	}
	URemoteControlLevelIndependantBinding::URemoteControlLevelIndependantBinding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteControlLevelIndependantBinding);
	URemoteControlLevelIndependantBinding::~URemoteControlLevelIndependantBinding() {}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControlInitialBindingContext;
class UScriptStruct* FRemoteControlInitialBindingContext::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControlInitialBindingContext.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControlInitialBindingContext.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RemoteControlInitialBindingContext"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControlInitialBindingContext.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRemoteControlInitialBindingContext>()
{
	return FRemoteControlInitialBindingContext::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SupportedClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_SupportedClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubObjectPath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SubObjectPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerActorClass_MetaData[];
#endif
		static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OwnerActorClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerActorName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OwnerActorName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RemoteControlBinding.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControlInitialBindingContext>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::NewProp_SupportedClass_MetaData[] = {
		{ "Comment", "/*\n\x09 * The class that's supported by this binding.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlBinding.h" },
		{ "ToolTip", "* The class that's supported by this binding." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::NewProp_SupportedClass = { "SupportedClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlInitialBindingContext, SupportedClass), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::NewProp_SupportedClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::NewProp_SupportedClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::NewProp_ComponentName_MetaData[] = {
		{ "Comment", "/**\n\x09 *  Name of the component if any.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlBinding.h" },
		{ "ToolTip", "Name of the component if any." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::NewProp_ComponentName = { "ComponentName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlInitialBindingContext, ComponentName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::NewProp_ComponentName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::NewProp_ComponentName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::NewProp_SubObjectPath_MetaData[] = {
		{ "Comment", "/**\n\x09 * Path to the subobject if any.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlBinding.h" },
		{ "ToolTip", "Path to the subobject if any." },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::NewProp_SubObjectPath = { "SubObjectPath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlInitialBindingContext, SubObjectPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::NewProp_SubObjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::NewProp_SubObjectPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::NewProp_OwnerActorClass_MetaData[] = {
		{ "Comment", "/**\n\x09 * The class of the actor that's targeted by this binding or the class of the actor that owns the component that is targeted.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlBinding.h" },
		{ "ToolTip", "The class of the actor that's targeted by this binding or the class of the actor that owns the component that is targeted." },
	};
#endif
	const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::NewProp_OwnerActorClass = { "OwnerActorClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlInitialBindingContext, OwnerActorClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::NewProp_OwnerActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::NewProp_OwnerActorClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::NewProp_OwnerActorName_MetaData[] = {
		{ "Comment", "/**\n\x09 * Name of the initial actor that was targetted by this binding.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlBinding.h" },
		{ "ToolTip", "Name of the initial actor that was targetted by this binding." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::NewProp_OwnerActorName = { "OwnerActorName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlInitialBindingContext, OwnerActorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::NewProp_OwnerActorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::NewProp_OwnerActorName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::NewProp_SupportedClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::NewProp_ComponentName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::NewProp_SubObjectPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::NewProp_OwnerActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::NewProp_OwnerActorName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		nullptr,
		&NewStructOps,
		"RemoteControlInitialBindingContext",
		sizeof(FRemoteControlInitialBindingContext),
		alignof(FRemoteControlInitialBindingContext),
		Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControlInitialBindingContext.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControlInitialBindingContext.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControlInitialBindingContext.InnerSingleton;
	}
	void URemoteControlLevelDependantBinding::StaticRegisterNativesURemoteControlLevelDependantBinding()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URemoteControlLevelDependantBinding);
	UClass* Z_Construct_UClass_URemoteControlLevelDependantBinding_NoRegister()
	{
		return URemoteControlLevelDependantBinding::StaticClass();
	}
	struct Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BoundObjectMap_ValueProp;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BoundObjectMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundObjectMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BoundObjectMap;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SubLevelSelectionMap_ValueProp;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SubLevelSelectionMap_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubLevelSelectionMap_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SubLevelSelectionMap;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_BoundObjectMapByPath_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoundObjectMapByPath_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoundObjectMapByPath_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BoundObjectMapByPath;
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SubLevelSelectionMapByPath_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubLevelSelectionMapByPath_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubLevelSelectionMapByPath_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_SubLevelSelectionMapByPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelWithLastSuccessfulResolve_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_LevelWithLastSuccessfulResolve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BindingContext_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URemoteControlBinding,
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "RemoteControlBinding.h" },
		{ "ModuleRelativePath", "Public/RemoteControlBinding.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_BoundObjectMap_ValueProp = { "BoundObjectMap", nullptr, (EPropertyFlags)0x0004000820000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_BoundObjectMap_Key_KeyProp = { "BoundObjectMap_Key", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_BoundObjectMap_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "BoundObjectMap is deprecated, please use BoundObjectMapByPath instead." },
		{ "ModuleRelativePath", "Public/RemoteControlBinding.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_BoundObjectMap = { "BoundObjectMap", nullptr, (EPropertyFlags)0x0044000820000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlLevelDependantBinding, BoundObjectMap_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_BoundObjectMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_BoundObjectMap_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_SubLevelSelectionMap_ValueProp = { "SubLevelSelectionMap", nullptr, (EPropertyFlags)0x0004000820000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_SubLevelSelectionMap_Key_KeyProp = { "SubLevelSelectionMap_Key", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_SubLevelSelectionMap_MetaData[] = {
		{ "DeprecatedProperty", "" },
		{ "DeprecationMessage", "SubLevelSelectionMap is deprecated, please use SubLevelSelectionMapByPath instead." },
		{ "ModuleRelativePath", "Public/RemoteControlBinding.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_SubLevelSelectionMap = { "SubLevelSelectionMap", nullptr, (EPropertyFlags)0x0044000820000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlLevelDependantBinding, SubLevelSelectionMap_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_SubLevelSelectionMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_SubLevelSelectionMap_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_BoundObjectMapByPath_ValueProp = { "BoundObjectMapByPath", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_BoundObjectMapByPath_Key_KeyProp = { "BoundObjectMapByPath_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_BoundObjectMapByPath_MetaData[] = {
		{ "Comment", "/**\n\x09 *\x09The map bound objects with their level as key.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlBinding.h" },
		{ "ToolTip", "The map bound objects with their level as key." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_BoundObjectMapByPath = { "BoundObjectMapByPath", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlLevelDependantBinding, BoundObjectMapByPath), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_BoundObjectMapByPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_BoundObjectMapByPath_MetaData)) };
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_SubLevelSelectionMapByPath_ValueProp = { "SubLevelSelectionMapByPath", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_SubLevelSelectionMapByPath_Key_KeyProp = { "SubLevelSelectionMapByPath_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_SubLevelSelectionMapByPath_MetaData[] = {
		{ "Comment", "/**\n\x09 * Keeps track of which sublevel was last used when binding in a particular world.\n\x09 * Used in the case where a binding points to objects that end up in the same world but in different sublevels,\n\x09 * this ensures that we know which object was last\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlBinding.h" },
		{ "ToolTip", "Keeps track of which sublevel was last used when binding in a particular world.\nUsed in the case where a binding points to objects that end up in the same world but in different sublevels,\nthis ensures that we know which object was last" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_SubLevelSelectionMapByPath = { "SubLevelSelectionMapByPath", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlLevelDependantBinding, SubLevelSelectionMapByPath), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_SubLevelSelectionMapByPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_SubLevelSelectionMapByPath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_LevelWithLastSuccessfulResolve_MetaData[] = {
		{ "Comment", "/**\n\x09 * Caches the last level that had a successful resolve.\n\x09 * Used to decide which level to use when reinitializing this binding in a new level.\n\x09 */" },
		{ "ModuleRelativePath", "Public/RemoteControlBinding.h" },
		{ "ToolTip", "Caches the last level that had a successful resolve.\nUsed to decide which level to use when reinitializing this binding in a new level." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_LevelWithLastSuccessfulResolve = { "LevelWithLastSuccessfulResolve", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlLevelDependantBinding, LevelWithLastSuccessfulResolve), Z_Construct_UClass_ULevel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_LevelWithLastSuccessfulResolve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_LevelWithLastSuccessfulResolve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_BindingContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/RemoteControlBinding.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_BindingContext = { "BindingContext", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(URemoteControlLevelDependantBinding, BindingContext), Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext, METADATA_PARAMS(Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_BindingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_BindingContext_MetaData)) }; // 2364107277
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_BoundObjectMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_BoundObjectMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_BoundObjectMap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_SubLevelSelectionMap_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_SubLevelSelectionMap_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_SubLevelSelectionMap,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_BoundObjectMapByPath_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_BoundObjectMapByPath_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_BoundObjectMapByPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_SubLevelSelectionMapByPath_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_SubLevelSelectionMapByPath_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_SubLevelSelectionMapByPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_LevelWithLastSuccessfulResolve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::NewProp_BindingContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URemoteControlLevelDependantBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::ClassParams = {
		&URemoteControlLevelDependantBinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URemoteControlLevelDependantBinding()
	{
		if (!Z_Registration_Info_UClass_URemoteControlLevelDependantBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URemoteControlLevelDependantBinding.OuterSingleton, Z_Construct_UClass_URemoteControlLevelDependantBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_URemoteControlLevelDependantBinding.OuterSingleton;
	}
	template<> REMOTECONTROL_API UClass* StaticClass<URemoteControlLevelDependantBinding>()
	{
		return URemoteControlLevelDependantBinding::StaticClass();
	}
	URemoteControlLevelDependantBinding::URemoteControlLevelDependantBinding(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(URemoteControlLevelDependantBinding);
	URemoteControlLevelDependantBinding::~URemoteControlLevelDependantBinding() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlBinding_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlBinding_h_Statics::ScriptStructInfo[] = {
		{ FRemoteControlInitialBindingContext::StaticStruct, Z_Construct_UScriptStruct_FRemoteControlInitialBindingContext_Statics::NewStructOps, TEXT("RemoteControlInitialBindingContext"), &Z_Registration_Info_UScriptStruct_RemoteControlInitialBindingContext, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControlInitialBindingContext), 2364107277U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlBinding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_URemoteControlBinding, URemoteControlBinding::StaticClass, TEXT("URemoteControlBinding"), &Z_Registration_Info_UClass_URemoteControlBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoteControlBinding), 2699156735U) },
		{ Z_Construct_UClass_URemoteControlLevelIndependantBinding, URemoteControlLevelIndependantBinding::StaticClass, TEXT("URemoteControlLevelIndependantBinding"), &Z_Registration_Info_UClass_URemoteControlLevelIndependantBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoteControlLevelIndependantBinding), 2493872717U) },
		{ Z_Construct_UClass_URemoteControlLevelDependantBinding, URemoteControlLevelDependantBinding::StaticClass, TEXT("URemoteControlLevelDependantBinding"), &Z_Registration_Info_UClass_URemoteControlLevelDependantBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URemoteControlLevelDependantBinding), 2626580956U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlBinding_h_4111175808(TEXT("/Script/RemoteControl"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlBinding_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlBinding_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlBinding_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
