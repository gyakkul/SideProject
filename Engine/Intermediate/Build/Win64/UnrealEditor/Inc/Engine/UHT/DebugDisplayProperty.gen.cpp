// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugDisplayProperty() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDebugDisplayProperty();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DebugDisplayProperty;
class UScriptStruct* FDebugDisplayProperty::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DebugDisplayProperty.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DebugDisplayProperty.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugDisplayProperty, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("DebugDisplayProperty"));
	}
	return Z_Registration_Info_UScriptStruct_DebugDisplayProperty.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FDebugDisplayProperty>()
{
	return FDebugDisplayProperty::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Obj_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Obj;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WithinClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_WithinClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** \n * Debug property display functionality to interact with this, use \"display\", \"displayall\", \"displayclear\"\n *\n * @see UGameViewportClient\n * @see FDebugDisplayProperty\n * @see DrawStatsHUD\n */" },
		{ "ModuleRelativePath", "Classes/Engine/DebugDisplayProperty.h" },
		{ "ToolTip", "Debug property display functionality to interact with this, use \"display\", \"displayall\", \"displayclear\"\n\n@see UGameViewportClient\n@see FDebugDisplayProperty\n@see DrawStatsHUD" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugDisplayProperty>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::NewProp_Obj_MetaData[] = {
		{ "Comment", "/** the object whose property to display. If this is a class, all objects of that class are drawn. */" },
		{ "ModuleRelativePath", "Classes/Engine/DebugDisplayProperty.h" },
		{ "ToolTip", "the object whose property to display. If this is a class, all objects of that class are drawn." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::NewProp_Obj = { "Obj", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDebugDisplayProperty, Obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::NewProp_Obj_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::NewProp_Obj_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::NewProp_WithinClass_MetaData[] = {
		{ "Comment", "/** if Obj is a class and WithinClass is not nullptr, further limit the display to objects that have an Outer of WithinClass */" },
		{ "ModuleRelativePath", "Classes/Engine/DebugDisplayProperty.h" },
		{ "ToolTip", "if Obj is a class and WithinClass is not nullptr, further limit the display to objects that have an Outer of WithinClass" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::NewProp_WithinClass = { "WithinClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDebugDisplayProperty, WithinClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::NewProp_WithinClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::NewProp_WithinClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::NewProp_Obj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::NewProp_WithinClass,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"DebugDisplayProperty",
		sizeof(FDebugDisplayProperty),
		alignof(FDebugDisplayProperty),
		Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDebugDisplayProperty()
	{
		if (!Z_Registration_Info_UScriptStruct_DebugDisplayProperty.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DebugDisplayProperty.InnerSingleton, Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DebugDisplayProperty.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugDisplayProperty_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugDisplayProperty_h_Statics::ScriptStructInfo[] = {
		{ FDebugDisplayProperty::StaticStruct, Z_Construct_UScriptStruct_FDebugDisplayProperty_Statics::NewStructOps, TEXT("DebugDisplayProperty"), &Z_Registration_Info_UScriptStruct_DebugDisplayProperty, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDebugDisplayProperty), 3163862492U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugDisplayProperty_h_1801301054(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugDisplayProperty_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_DebugDisplayProperty_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
