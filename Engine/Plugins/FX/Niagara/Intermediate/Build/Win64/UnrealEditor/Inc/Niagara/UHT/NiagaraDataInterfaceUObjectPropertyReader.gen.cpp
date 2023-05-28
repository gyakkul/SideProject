// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataInterface/NiagaraDataInterfaceUObjectPropertyReader.h"
#include "../Public/NiagaraCommon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceUObjectPropertyReader() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUserParameterBinding();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraUObjectPropertyReaderRemap;
class UScriptStruct* FNiagaraUObjectPropertyReaderRemap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraUObjectPropertyReaderRemap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraUObjectPropertyReaderRemap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraUObjectPropertyReaderRemap"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraUObjectPropertyReaderRemap.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraUObjectPropertyReaderRemap>()
{
	return FNiagaraUObjectPropertyReaderRemap::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraphName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_GraphName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RemapName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_RemapName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceUObjectPropertyReader.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraUObjectPropertyReaderRemap>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::NewProp_GraphName_MetaData[] = {
		{ "Category", "Remap" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceUObjectPropertyReader.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraUObjectPropertyReaderRemap, GraphName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::NewProp_GraphName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::NewProp_GraphName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::NewProp_RemapName_MetaData[] = {
		{ "Category", "Remap" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceUObjectPropertyReader.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::NewProp_RemapName = { "RemapName", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraUObjectPropertyReaderRemap, RemapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::NewProp_RemapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::NewProp_RemapName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::NewProp_GraphName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::NewProp_RemapName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraUObjectPropertyReaderRemap",
		sizeof(FNiagaraUObjectPropertyReaderRemap),
		alignof(FNiagaraUObjectPropertyReaderRemap),
		Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraUObjectPropertyReaderRemap.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraUObjectPropertyReaderRemap.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraUObjectPropertyReaderRemap.InnerSingleton;
	}
	DEFINE_FUNCTION(UNiagaraDataInterfaceUObjectPropertyReader::execSetUObjectReaderPropertyRemap)
	{
		P_GET_OBJECT(UNiagaraComponent,Z_Param_NiagaraComponent);
		P_GET_PROPERTY(FNameProperty,Z_Param_UserParameterName);
		P_GET_PROPERTY(FNameProperty,Z_Param_GraphName);
		P_GET_PROPERTY(FNameProperty,Z_Param_RemapName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UNiagaraDataInterfaceUObjectPropertyReader::SetUObjectReaderPropertyRemap(Z_Param_NiagaraComponent,Z_Param_UserParameterName,Z_Param_GraphName,Z_Param_RemapName);
		P_NATIVE_END;
	}
	void UNiagaraDataInterfaceUObjectPropertyReader::StaticRegisterNativesUNiagaraDataInterfaceUObjectPropertyReader()
	{
		UClass* Class = UNiagaraDataInterfaceUObjectPropertyReader::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetUObjectReaderPropertyRemap", &UNiagaraDataInterfaceUObjectPropertyReader::execSetUObjectReaderPropertyRemap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics
	{
		struct NiagaraDataInterfaceUObjectPropertyReader_eventSetUObjectReaderPropertyRemap_Parms
		{
			UNiagaraComponent* NiagaraComponent;
			FName UserParameterName;
			FName GraphName;
			FName RemapName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NiagaraComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NiagaraComponent;
		static const UECodeGen_Private::FNamePropertyParams NewProp_UserParameterName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_GraphName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RemapName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::NewProp_NiagaraComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::NewProp_NiagaraComponent = { "NiagaraComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceUObjectPropertyReader_eventSetUObjectReaderPropertyRemap_Parms, NiagaraComponent), Z_Construct_UClass_UNiagaraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::NewProp_NiagaraComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::NewProp_NiagaraComponent_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::NewProp_UserParameterName = { "UserParameterName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceUObjectPropertyReader_eventSetUObjectReaderPropertyRemap_Parms, UserParameterName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::NewProp_GraphName = { "GraphName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceUObjectPropertyReader_eventSetUObjectReaderPropertyRemap_Parms, GraphName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::NewProp_RemapName = { "RemapName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NiagaraDataInterfaceUObjectPropertyReader_eventSetUObjectReaderPropertyRemap_Parms, RemapName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::NewProp_NiagaraComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::NewProp_UserParameterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::NewProp_GraphName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::NewProp_RemapName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::Function_MetaDataParams[] = {
		{ "Category", "Niagara" },
		{ "Comment", "/** Remaps a property reader, where the  */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceUObjectPropertyReader.h" },
		{ "ToolTip", "Remaps a property reader, where the" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader, nullptr, "SetUObjectReaderPropertyRemap", nullptr, nullptr, sizeof(Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::NiagaraDataInterfaceUObjectPropertyReader_eventSetUObjectReaderPropertyRemap_Parms), Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceUObjectPropertyReader);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_NoRegister()
	{
		return UNiagaraDataInterfaceUObjectPropertyReader::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UObjectParameterBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UObjectParameterBinding;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyRemap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyRemap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyRemap;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceActor_MetaData[];
#endif
		static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SourceActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceActorComponentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_SourceActorComponentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNiagaraDataInterfaceUObjectPropertyReader_SetUObjectReaderPropertyRemap, "SetUObjectReaderPropertyRemap" }, // 3974614948
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::Class_MetaDataParams[] = {
		{ "Category", "DataInterface" },
		{ "Comment", "/**\nData interface to read properties from UObjects.\nRather than having BP tick functions that push data into Niagara this data interface will instead pull them.\n*/" },
		{ "DisplayName", "Object Reader" },
		{ "IncludePath", "DataInterface/NiagaraDataInterfaceUObjectPropertyReader.h" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceUObjectPropertyReader.h" },
		{ "ToolTip", "Data interface to read properties from UObjects.\nRather than having BP tick functions that push data into Niagara this data interface will instead pull them." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_UObjectParameterBinding_MetaData[] = {
		{ "Category", "UObjectPropertyReader" },
		{ "Comment", "/** User parameter Object binding to read properties from. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceUObjectPropertyReader.h" },
		{ "ToolTip", "User parameter Object binding to read properties from." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_UObjectParameterBinding = { "UObjectParameterBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceUObjectPropertyReader, UObjectParameterBinding), Z_Construct_UScriptStruct_FNiagaraUserParameterBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_UObjectParameterBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_UObjectParameterBinding_MetaData)) }; // 1724214256
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_PropertyRemap_Inner = { "PropertyRemap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap, METADATA_PARAMS(nullptr, 0) }; // 1037552530
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_PropertyRemap_MetaData[] = {
		{ "Category", "UObjectPropertyReader" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceUObjectPropertyReader.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_PropertyRemap = { "PropertyRemap", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceUObjectPropertyReader, PropertyRemap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_PropertyRemap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_PropertyRemap_MetaData)) }; // 1037552530
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_SourceActor_MetaData[] = {
		{ "Category", "UObjectPropertyReader" },
		{ "Comment", "/** Optional source actor to use, if the user parameter binding is valid this will be ignored. */" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceUObjectPropertyReader.h" },
		{ "ToolTip", "Optional source actor to use, if the user parameter binding is valid this will be ignored." },
	};
#endif
	const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_SourceActor = { "SourceActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceUObjectPropertyReader, SourceActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_SourceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_SourceActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_SourceActorComponentClass_MetaData[] = {
		{ "Category", "UObjectPropertyReader" },
		{ "Comment", "/**\n\x09When an actor is bound as the object we will also search for a component of this type to bind properties to.\n\x09""For example, setting this to a UPointLightComponent when binding properties we will first look at the actor\n\x09then look for a component of UPointLightComponent and look at properties on that also.\n\x09If no class is specified here we look at the RootComponent instead.\n\x09*/" },
		{ "ModuleRelativePath", "Private/DataInterface/NiagaraDataInterfaceUObjectPropertyReader.h" },
		{ "ToolTip", "When an actor is bound as the object we will also search for a component of this type to bind properties to.\nFor example, setting this to a UPointLightComponent when binding properties we will first look at the actor\nthen look for a component of UPointLightComponent and look at properties on that also.\nIf no class is specified here we look at the RootComponent instead." },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_SourceActorComponentClass = { "SourceActorComponentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceUObjectPropertyReader, SourceActorComponentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_SourceActorComponentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_SourceActorComponentClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_UObjectParameterBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_PropertyRemap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_PropertyRemap,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_SourceActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::NewProp_SourceActorComponentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceUObjectPropertyReader>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::ClassParams = {
		&UNiagaraDataInterfaceUObjectPropertyReader::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceUObjectPropertyReader.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceUObjectPropertyReader.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceUObjectPropertyReader.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceUObjectPropertyReader>()
	{
		return UNiagaraDataInterfaceUObjectPropertyReader::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceUObjectPropertyReader);
	UNiagaraDataInterfaceUObjectPropertyReader::~UNiagaraDataInterfaceUObjectPropertyReader() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraUObjectPropertyReaderRemap::StaticStruct, Z_Construct_UScriptStruct_FNiagaraUObjectPropertyReaderRemap_Statics::NewStructOps, TEXT("NiagaraUObjectPropertyReaderRemap"), &Z_Registration_Info_UScriptStruct_NiagaraUObjectPropertyReaderRemap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraUObjectPropertyReaderRemap), 1037552530U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceUObjectPropertyReader, UNiagaraDataInterfaceUObjectPropertyReader::StaticClass, TEXT("UNiagaraDataInterfaceUObjectPropertyReader"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceUObjectPropertyReader, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceUObjectPropertyReader), 541271114U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_578162021(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Private_DataInterface_NiagaraDataInterfaceUObjectPropertyReader_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
