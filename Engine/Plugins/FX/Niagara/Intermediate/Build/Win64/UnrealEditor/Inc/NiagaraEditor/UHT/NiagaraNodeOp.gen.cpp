// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NiagaraNodeOp.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraNodeOp() {}
// Cross Module References
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinType();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeOp();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeOp_NoRegister();
	NIAGARAEDITOR_API UClass* Z_Construct_UClass_UNiagaraNodeWithDynamicPins();
	NIAGARAEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAddedPinData();
	UPackage* Z_Construct_UPackage__Script_NiagaraEditor();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AddedPinData;
class UScriptStruct* FAddedPinData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AddedPinData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AddedPinData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAddedPinData, (UObject*)Z_Construct_UPackage__Script_NiagaraEditor(), TEXT("AddedPinData"));
	}
	return Z_Registration_Info_UScriptStruct_AddedPinData.OuterSingleton;
}
template<> NIAGARAEDITOR_API UScriptStruct* StaticStruct<FAddedPinData>()
{
	return FAddedPinData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAddedPinData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PinName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddedPinData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraNodeOp.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAddedPinData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAddedPinData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddedPinData_Statics::NewProp_PinType_MetaData[] = {
		{ "Comment", "/** The data type of the added pin */" },
		{ "ModuleRelativePath", "Public/NiagaraNodeOp.h" },
		{ "ToolTip", "The data type of the added pin" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAddedPinData_Statics::NewProp_PinType = { "PinType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAddedPinData, PinType), Z_Construct_UScriptStruct_FEdGraphPinType, METADATA_PARAMS(Z_Construct_UScriptStruct_FAddedPinData_Statics::NewProp_PinType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddedPinData_Statics::NewProp_PinType_MetaData)) }; // 3943443458
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAddedPinData_Statics::NewProp_PinName_MetaData[] = {
		{ "Comment", "/** The name type of the added pin */" },
		{ "ModuleRelativePath", "Public/NiagaraNodeOp.h" },
		{ "ToolTip", "The name type of the added pin" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAddedPinData_Statics::NewProp_PinName = { "PinName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAddedPinData, PinName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAddedPinData_Statics::NewProp_PinName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddedPinData_Statics::NewProp_PinName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAddedPinData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddedPinData_Statics::NewProp_PinType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAddedPinData_Statics::NewProp_PinName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAddedPinData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
		nullptr,
		&NewStructOps,
		"AddedPinData",
		sizeof(FAddedPinData),
		alignof(FAddedPinData),
		Z_Construct_UScriptStruct_FAddedPinData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddedPinData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAddedPinData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAddedPinData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAddedPinData()
	{
		if (!Z_Registration_Info_UScriptStruct_AddedPinData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AddedPinData.InnerSingleton, Z_Construct_UScriptStruct_FAddedPinData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AddedPinData.InnerSingleton;
	}
	void UNiagaraNodeOp::StaticRegisterNativesUNiagaraNodeOp()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraNodeOp);
	UClass* Z_Construct_UClass_UNiagaraNodeOp_NoRegister()
	{
		return UNiagaraNodeOp::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraNodeOp_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_OpName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_AddedPins_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AddedPins_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AddedPins;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllStatic_MetaData[];
#endif
		static void NewProp_bAllStatic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllStatic;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraNodeOp_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraNodeWithDynamicPins,
		(UObject* (*)())Z_Construct_UPackage__Script_NiagaraEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeOp_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NiagaraNodeOp.h" },
		{ "ModuleRelativePath", "Public/NiagaraNodeOp.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeOp_Statics::NewProp_OpName_MetaData[] = {
		{ "Comment", "/** Name of operation */" },
		{ "ModuleRelativePath", "Public/NiagaraNodeOp.h" },
		{ "ToolTip", "Name of operation" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UNiagaraNodeOp_Statics::NewProp_OpName = { "OpName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeOp, OpName), METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeOp_Statics::NewProp_OpName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeOp_Statics::NewProp_OpName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraNodeOp_Statics::NewProp_AddedPins_Inner = { "AddedPins", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAddedPinData, METADATA_PARAMS(nullptr, 0) }; // 2325828241
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeOp_Statics::NewProp_AddedPins_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraNodeOp.h" },
		{ "SkipForCompileHash", "true" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraNodeOp_Statics::NewProp_AddedPins = { "AddedPins", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraNodeOp, AddedPins), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeOp_Statics::NewProp_AddedPins_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeOp_Statics::NewProp_AddedPins_MetaData)) }; // 2325828241
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraNodeOp_Statics::NewProp_bAllStatic_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraNodeOp.h" },
		{ "SkipForCompileHash", "true" },
	};
#endif
	void Z_Construct_UClass_UNiagaraNodeOp_Statics::NewProp_bAllStatic_SetBit(void* Obj)
	{
		((UNiagaraNodeOp*)Obj)->bAllStatic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraNodeOp_Statics::NewProp_bAllStatic = { "bAllStatic", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraNodeOp), &Z_Construct_UClass_UNiagaraNodeOp_Statics::NewProp_bAllStatic_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeOp_Statics::NewProp_bAllStatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeOp_Statics::NewProp_bAllStatic_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraNodeOp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeOp_Statics::NewProp_OpName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeOp_Statics::NewProp_AddedPins_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeOp_Statics::NewProp_AddedPins,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraNodeOp_Statics::NewProp_bAllStatic,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraNodeOp_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraNodeOp>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraNodeOp_Statics::ClassParams = {
		&UNiagaraNodeOp::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraNodeOp_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeOp_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraNodeOp_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraNodeOp_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraNodeOp()
	{
		if (!Z_Registration_Info_UClass_UNiagaraNodeOp.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraNodeOp.OuterSingleton, Z_Construct_UClass_UNiagaraNodeOp_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraNodeOp.OuterSingleton;
	}
	template<> NIAGARAEDITOR_API UClass* StaticClass<UNiagaraNodeOp>()
	{
		return UNiagaraNodeOp::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraNodeOp);
	UNiagaraNodeOp::~UNiagaraNodeOp() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeOp_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeOp_h_Statics::ScriptStructInfo[] = {
		{ FAddedPinData::StaticStruct, Z_Construct_UScriptStruct_FAddedPinData_Statics::NewStructOps, TEXT("AddedPinData"), &Z_Registration_Info_UScriptStruct_AddedPinData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAddedPinData), 2325828241U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeOp_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraNodeOp, UNiagaraNodeOp::StaticClass, TEXT("UNiagaraNodeOp"), &Z_Registration_Info_UClass_UNiagaraNodeOp, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraNodeOp), 2684404439U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeOp_h_2811922182(TEXT("/Script/NiagaraEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeOp_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeOp_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeOp_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_NiagaraEditor_Public_NiagaraNodeOp_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
