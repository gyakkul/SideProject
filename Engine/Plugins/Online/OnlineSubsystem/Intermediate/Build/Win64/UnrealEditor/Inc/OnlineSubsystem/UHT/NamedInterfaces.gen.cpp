// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Public/NamedInterfaces.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNamedInterfaces() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ONLINESUBSYSTEM_API UClass* Z_Construct_UClass_UNamedInterfaces();
	ONLINESUBSYSTEM_API UClass* Z_Construct_UClass_UNamedInterfaces_NoRegister();
	ONLINESUBSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNamedInterface();
	ONLINESUBSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNamedInterfaceDef();
	UPackage* Z_Construct_UPackage__Script_OnlineSubsystem();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NamedInterface;
class UScriptStruct* FNamedInterface::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NamedInterface.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NamedInterface.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedInterface, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystem(), TEXT("NamedInterface"));
	}
	return Z_Registration_Info_UScriptStruct_NamedInterface.OuterSingleton;
}
template<> ONLINESUBSYSTEM_API UScriptStruct* StaticStruct<FNamedInterface>()
{
	return FNamedInterface::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNamedInterface_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterfaceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InterfaceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterfaceObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InterfaceObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedInterface_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds a named object interface for dynamically bound interfaces */" },
		{ "ModuleRelativePath", "Public/NamedInterfaces.h" },
		{ "ToolTip", "Holds a named object interface for dynamically bound interfaces" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedInterface_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedInterface>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedInterface_Statics::NewProp_InterfaceName_MetaData[] = {
		{ "Comment", "/** The name to bind this object to */" },
		{ "ModuleRelativePath", "Public/NamedInterfaces.h" },
		{ "ToolTip", "The name to bind this object to" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNamedInterface_Statics::NewProp_InterfaceName = { "InterfaceName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedInterface, InterfaceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedInterface_Statics::NewProp_InterfaceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedInterface_Statics::NewProp_InterfaceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedInterface_Statics::NewProp_InterfaceObject_MetaData[] = {
		{ "Comment", "/** The object to store at this location */" },
		{ "ModuleRelativePath", "Public/NamedInterfaces.h" },
		{ "ToolTip", "The object to store at this location" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FNamedInterface_Statics::NewProp_InterfaceObject = { "InterfaceObject", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedInterface, InterfaceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedInterface_Statics::NewProp_InterfaceObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedInterface_Statics::NewProp_InterfaceObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedInterface_Statics::NewProp_InterfaceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedInterface_Statics::NewProp_InterfaceObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedInterface_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystem,
		nullptr,
		&NewStructOps,
		"NamedInterface",
		sizeof(FNamedInterface),
		alignof(FNamedInterface),
		Z_Construct_UScriptStruct_FNamedInterface_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedInterface_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedInterface_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedInterface_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedInterface()
	{
		if (!Z_Registration_Info_UScriptStruct_NamedInterface.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NamedInterface.InnerSingleton, Z_Construct_UScriptStruct_FNamedInterface_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NamedInterface.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NamedInterfaceDef;
class UScriptStruct* FNamedInterfaceDef::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NamedInterfaceDef.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NamedInterfaceDef.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNamedInterfaceDef, (UObject*)Z_Construct_UPackage__Script_OnlineSubsystem(), TEXT("NamedInterfaceDef"));
	}
	return Z_Registration_Info_UScriptStruct_NamedInterfaceDef.OuterSingleton;
}
template<> ONLINESUBSYSTEM_API UScriptStruct* StaticStruct<FNamedInterfaceDef>()
{
	return FNamedInterfaceDef::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterfaceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_InterfaceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterfaceClassName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InterfaceClassName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Holds a name to class name mapping for adding the named interfaces automatically */" },
		{ "ModuleRelativePath", "Public/NamedInterfaces.h" },
		{ "ToolTip", "Holds a name to class name mapping for adding the named interfaces automatically" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNamedInterfaceDef>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::NewProp_InterfaceName_MetaData[] = {
		{ "Comment", "/** The name to bind this object to */" },
		{ "ModuleRelativePath", "Public/NamedInterfaces.h" },
		{ "ToolTip", "The name to bind this object to" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::NewProp_InterfaceName = { "InterfaceName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedInterfaceDef, InterfaceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::NewProp_InterfaceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::NewProp_InterfaceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::NewProp_InterfaceClassName_MetaData[] = {
		{ "Comment", "/** The class to load and create for the named interface */" },
		{ "ModuleRelativePath", "Public/NamedInterfaces.h" },
		{ "ToolTip", "The class to load and create for the named interface" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::NewProp_InterfaceClassName = { "InterfaceClassName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNamedInterfaceDef, InterfaceClassName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::NewProp_InterfaceClassName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::NewProp_InterfaceClassName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::NewProp_InterfaceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::NewProp_InterfaceClassName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystem,
		nullptr,
		&NewStructOps,
		"NamedInterfaceDef",
		sizeof(FNamedInterfaceDef),
		alignof(FNamedInterfaceDef),
		Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNamedInterfaceDef()
	{
		if (!Z_Registration_Info_UScriptStruct_NamedInterfaceDef.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NamedInterfaceDef.InnerSingleton, Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NamedInterfaceDef.InnerSingleton;
	}
	void UNamedInterfaces::StaticRegisterNativesUNamedInterfaces()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNamedInterfaces);
	UClass* Z_Construct_UClass_UNamedInterfaces_NoRegister()
	{
		return UNamedInterfaces::StaticClass();
	}
	struct Z_Construct_UClass_UNamedInterfaces_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_NamedInterfaces_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamedInterfaces_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NamedInterfaces;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NamedInterfaceDefs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NamedInterfaceDefs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NamedInterfaceDefs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNamedInterfaces_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineSubsystem,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNamedInterfaces_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Named interfaces are a registry of UObjects accessible by an FName key that will persist for the lifetime of the process\n */" },
		{ "IncludePath", "NamedInterfaces.h" },
		{ "ModuleRelativePath", "Public/NamedInterfaces.h" },
		{ "ToolTip", "Named interfaces are a registry of UObjects accessible by an FName key that will persist for the lifetime of the process" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaces_Inner = { "NamedInterfaces", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNamedInterface, METADATA_PARAMS(nullptr, 0) }; // 1039892923
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaces_MetaData[] = {
		{ "Comment", "/** Holds the set of registered named interfaces */" },
		{ "ModuleRelativePath", "Public/NamedInterfaces.h" },
		{ "ToolTip", "Holds the set of registered named interfaces" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaces = { "NamedInterfaces", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNamedInterfaces, NamedInterfaces), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaces_MetaData)) }; // 1039892923
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaceDefs_Inner = { "NamedInterfaceDefs", nullptr, (EPropertyFlags)0x0000000000004000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNamedInterfaceDef, METADATA_PARAMS(nullptr, 0) }; // 1384754367
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaceDefs_MetaData[] = {
		{ "Comment", "/** The list of named interfaces to automatically create and store */" },
		{ "ModuleRelativePath", "Public/NamedInterfaces.h" },
		{ "ToolTip", "The list of named interfaces to automatically create and store" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaceDefs = { "NamedInterfaceDefs", nullptr, (EPropertyFlags)0x0040000000004000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNamedInterfaces, NamedInterfaceDefs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaceDefs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaceDefs_MetaData)) }; // 1384754367
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNamedInterfaces_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaces_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaces,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaceDefs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNamedInterfaces_Statics::NewProp_NamedInterfaceDefs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNamedInterfaces_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNamedInterfaces>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNamedInterfaces_Statics::ClassParams = {
		&UNamedInterfaces::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNamedInterfaces_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNamedInterfaces_Statics::PropPointers),
		0,
		0x000000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UNamedInterfaces_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNamedInterfaces_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNamedInterfaces()
	{
		if (!Z_Registration_Info_UClass_UNamedInterfaces.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNamedInterfaces.OuterSingleton, Z_Construct_UClass_UNamedInterfaces_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNamedInterfaces.OuterSingleton;
	}
	template<> ONLINESUBSYSTEM_API UClass* StaticClass<UNamedInterfaces>()
	{
		return UNamedInterfaces::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNamedInterfaces);
	UNamedInterfaces::~UNamedInterfaces() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_NamedInterfaces_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_NamedInterfaces_h_Statics::ScriptStructInfo[] = {
		{ FNamedInterface::StaticStruct, Z_Construct_UScriptStruct_FNamedInterface_Statics::NewStructOps, TEXT("NamedInterface"), &Z_Registration_Info_UScriptStruct_NamedInterface, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamedInterface), 1039892923U) },
		{ FNamedInterfaceDef::StaticStruct, Z_Construct_UScriptStruct_FNamedInterfaceDef_Statics::NewStructOps, TEXT("NamedInterfaceDef"), &Z_Registration_Info_UScriptStruct_NamedInterfaceDef, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNamedInterfaceDef), 1384754367U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_NamedInterfaces_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNamedInterfaces, UNamedInterfaces::StaticClass, TEXT("UNamedInterfaces"), &Z_Registration_Info_UClass_UNamedInterfaces, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNamedInterfaces), 888493335U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_NamedInterfaces_h_1472864630(TEXT("/Script/OnlineSubsystem"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_NamedInterfaces_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_NamedInterfaces_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_NamedInterfaces_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Online_OnlineSubsystem_Source_Public_NamedInterfaces_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
