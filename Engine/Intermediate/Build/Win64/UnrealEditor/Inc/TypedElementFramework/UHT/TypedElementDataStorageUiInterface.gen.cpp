// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Elements/Interfaces/TypedElementDataStorageUiInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypedElementDataStorageUiInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDataStorageUiInterface();
	TYPEDELEMENTFRAMEWORK_API UClass* Z_Construct_UClass_UTypedElementDataStorageUiInterface_NoRegister();
	TYPEDELEMENTFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FTypedElementWidgetConstructor();
	UPackage* Z_Construct_UPackage__Script_TypedElementFramework();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TypedElementWidgetConstructor;
class UScriptStruct* FTypedElementWidgetConstructor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TypedElementWidgetConstructor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TypedElementWidgetConstructor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypedElementWidgetConstructor, (UObject*)Z_Construct_UPackage__Script_TypedElementFramework(), TEXT("TypedElementWidgetConstructor"));
	}
	return Z_Registration_Info_UScriptStruct_TypedElementWidgetConstructor.OuterSingleton;
}
template<> TYPEDELEMENTFRAMEWORK_API UScriptStruct* StaticStruct<FTypedElementWidgetConstructor>()
{
	return FTypedElementWidgetConstructor::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTypedElementWidgetConstructor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypedElementWidgetConstructor_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * Base class used to construct Typed Element widgets with.\n * It's recommended to expose any construction variables as properties so they\n * can either be set by a user or set using the passed in arguments. The\n * Arguments can be directly used in case complex operations need to be done that\n * prevent automatically setting construction variables.\n * See below for the options to register a constructor with the Data Storage. For\n * either registration case a new instance/copy of the constructor is created so\n * arguments can be safely applied.\n */" },
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementDataStorageUiInterface.h" },
		{ "ToolTip", "Base class used to construct Typed Element widgets with.\nIt's recommended to expose any construction variables as properties so they\ncan either be set by a user or set using the passed in arguments. The\nArguments can be directly used in case complex operations need to be done that\nprevent automatically setting construction variables.\nSee below for the options to register a constructor with the Data Storage. For\neither registration case a new instance/copy of the constructor is created so\narguments can be safely applied." },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypedElementWidgetConstructor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypedElementWidgetConstructor>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypedElementWidgetConstructor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
		nullptr,
		&NewStructOps,
		"TypedElementWidgetConstructor",
		sizeof(FTypedElementWidgetConstructor),
		alignof(FTypedElementWidgetConstructor),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTypedElementWidgetConstructor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypedElementWidgetConstructor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypedElementWidgetConstructor()
	{
		if (!Z_Registration_Info_UScriptStruct_TypedElementWidgetConstructor.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TypedElementWidgetConstructor.InnerSingleton, Z_Construct_UScriptStruct_FTypedElementWidgetConstructor_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TypedElementWidgetConstructor.InnerSingleton;
	}
	void UTypedElementDataStorageUiInterface::StaticRegisterNativesUTypedElementDataStorageUiInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTypedElementDataStorageUiInterface);
	UClass* Z_Construct_UClass_UTypedElementDataStorageUiInterface_NoRegister()
	{
		return UTypedElementDataStorageUiInterface::StaticClass();
	}
	struct Z_Construct_UClass_UTypedElementDataStorageUiInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTypedElementDataStorageUiInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_TypedElementFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTypedElementDataStorageUiInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Elements/Interfaces/TypedElementDataStorageUiInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTypedElementDataStorageUiInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITypedElementDataStorageUiInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTypedElementDataStorageUiInterface_Statics::ClassParams = {
		&UTypedElementDataStorageUiInterface::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UTypedElementDataStorageUiInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTypedElementDataStorageUiInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTypedElementDataStorageUiInterface()
	{
		if (!Z_Registration_Info_UClass_UTypedElementDataStorageUiInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTypedElementDataStorageUiInterface.OuterSingleton, Z_Construct_UClass_UTypedElementDataStorageUiInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTypedElementDataStorageUiInterface.OuterSingleton;
	}
	template<> TYPEDELEMENTFRAMEWORK_API UClass* StaticClass<UTypedElementDataStorageUiInterface>()
	{
		return UTypedElementDataStorageUiInterface::StaticClass();
	}
	UTypedElementDataStorageUiInterface::UTypedElementDataStorageUiInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTypedElementDataStorageUiInterface);
	UTypedElementDataStorageUiInterface::~UTypedElementDataStorageUiInterface() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h_Statics::ScriptStructInfo[] = {
		{ FTypedElementWidgetConstructor::StaticStruct, Z_Construct_UScriptStruct_FTypedElementWidgetConstructor_Statics::NewStructOps, TEXT("TypedElementWidgetConstructor"), &Z_Registration_Info_UScriptStruct_TypedElementWidgetConstructor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTypedElementWidgetConstructor), 1205622091U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTypedElementDataStorageUiInterface, UTypedElementDataStorageUiInterface::StaticClass, TEXT("UTypedElementDataStorageUiInterface"), &Z_Registration_Info_UClass_UTypedElementDataStorageUiInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTypedElementDataStorageUiInterface), 2905502795U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h_2905078826(TEXT("/Script/TypedElementFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_TypedElementFramework_Public_Elements_Interfaces_TypedElementDataStorageUiInterface_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
