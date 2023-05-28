// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyPluginObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPluginObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UOBJECTPLUGIN_API UClass* Z_Construct_UClass_UMyPluginObject();
	UOBJECTPLUGIN_API UClass* Z_Construct_UClass_UMyPluginObject_NoRegister();
	UOBJECTPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FMyPluginStruct();
	UPackage* Z_Construct_UPackage__Script_UObjectPlugin();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MyPluginStruct;
class UScriptStruct* FMyPluginStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MyPluginStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MyPluginStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMyPluginStruct, (UObject*)Z_Construct_UPackage__Script_UObjectPlugin(), TEXT("MyPluginStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MyPluginStruct.OuterSingleton;
}
template<> UOBJECTPLUGIN_API UScriptStruct* StaticStruct<FMyPluginStruct>()
{
	return FMyPluginStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMyPluginStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TestString_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TestString;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyPluginStruct_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Example UStruct declared in a plugin module\n */" },
		{ "ModuleRelativePath", "Classes/MyPluginObject.h" },
		{ "ToolTip", "Example UStruct declared in a plugin module" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMyPluginStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMyPluginStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMyPluginStruct_Statics::NewProp_TestString_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MyPluginObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMyPluginStruct_Statics::NewProp_TestString = { "TestString", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMyPluginStruct, TestString), METADATA_PARAMS(Z_Construct_UScriptStruct_FMyPluginStruct_Statics::NewProp_TestString_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyPluginStruct_Statics::NewProp_TestString_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMyPluginStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMyPluginStruct_Statics::NewProp_TestString,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMyPluginStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_UObjectPlugin,
		nullptr,
		&NewStructOps,
		"MyPluginStruct",
		sizeof(FMyPluginStruct),
		alignof(FMyPluginStruct),
		Z_Construct_UScriptStruct_FMyPluginStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyPluginStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMyPluginStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMyPluginStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMyPluginStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_MyPluginStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MyPluginStruct.InnerSingleton, Z_Construct_UScriptStruct_FMyPluginStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MyPluginStruct.InnerSingleton;
	}
	void UMyPluginObject::StaticRegisterNativesUMyPluginObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMyPluginObject);
	UClass* Z_Construct_UClass_UMyPluginObject_NoRegister()
	{
		return UMyPluginObject::StaticClass();
	}
	struct Z_Construct_UClass_UMyPluginObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MyStruct_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_MyStruct;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyPluginObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UObjectPlugin,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPluginObject_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Example of declaring a UObject in a plugin module\n */" },
		{ "IncludePath", "MyPluginObject.h" },
		{ "ModuleRelativePath", "Classes/MyPluginObject.h" },
		{ "ToolTip", "Example of declaring a UObject in a plugin module" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyPluginObject_Statics::NewProp_MyStruct_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MyPluginObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyPluginObject_Statics::NewProp_MyStruct = { "MyStruct", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMyPluginObject, MyStruct), Z_Construct_UScriptStruct_FMyPluginStruct, METADATA_PARAMS(Z_Construct_UClass_UMyPluginObject_Statics::NewProp_MyStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPluginObject_Statics::NewProp_MyStruct_MetaData)) }; // 3006270036
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyPluginObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyPluginObject_Statics::NewProp_MyStruct,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyPluginObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyPluginObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyPluginObject_Statics::ClassParams = {
		&UMyPluginObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMyPluginObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMyPluginObject_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMyPluginObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMyPluginObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyPluginObject()
	{
		if (!Z_Registration_Info_UClass_UMyPluginObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyPluginObject.OuterSingleton, Z_Construct_UClass_UMyPluginObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMyPluginObject.OuterSingleton;
	}
	template<> UOBJECTPLUGIN_API UClass* StaticClass<UMyPluginObject>()
	{
		return UMyPluginObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyPluginObject);
	UMyPluginObject::~UMyPluginObject() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_Statics::ScriptStructInfo[] = {
		{ FMyPluginStruct::StaticStruct, Z_Construct_UScriptStruct_FMyPluginStruct_Statics::NewStructOps, TEXT("MyPluginStruct"), &Z_Registration_Info_UScriptStruct_MyPluginStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMyPluginStruct), 3006270036U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMyPluginObject, UMyPluginObject::StaticClass, TEXT("UMyPluginObject"), &Z_Registration_Info_UClass_UMyPluginObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyPluginObject), 79483197U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_424558329(TEXT("/Script/UObjectPlugin"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Developer_UObjectPlugin_Source_UObjectPlugin_Classes_MyPluginObject_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
