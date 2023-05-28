// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraEditorDataBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraEditorDataBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEditorDataBase();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEditorDataBase_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEditorParametersAdapterBase();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraEditorParametersAdapterBase_NoRegister();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraGraphViewSettings();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraGraphViewSettings;
class UScriptStruct* FNiagaraGraphViewSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraGraphViewSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraGraphViewSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraGraphViewSettings, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraGraphViewSettings"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraGraphViewSettings.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraGraphViewSettings>()
{
	return FNiagaraGraphViewSettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Zoom_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Zoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsValid_MetaData[];
#endif
		static void NewProp_bIsValid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsValid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorDataBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraGraphViewSettings>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_Location_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorDataBase.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraGraphViewSettings, Location), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_Zoom_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorDataBase.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_Zoom = { "Zoom", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraGraphViewSettings, Zoom), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_Zoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_Zoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_bIsValid_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraEditorDataBase.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_bIsValid_SetBit(void* Obj)
	{
		((FNiagaraGraphViewSettings*)Obj)->bIsValid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_bIsValid = { "bIsValid", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FNiagaraGraphViewSettings), &Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_bIsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_bIsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_bIsValid_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_Location,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_Zoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewProp_bIsValid,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraGraphViewSettings",
		sizeof(FNiagaraGraphViewSettings),
		alignof(FNiagaraGraphViewSettings),
		Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraGraphViewSettings()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraGraphViewSettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraGraphViewSettings.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraGraphViewSettings.InnerSingleton;
	}
	void UNiagaraEditorDataBase::StaticRegisterNativesUNiagaraEditorDataBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraEditorDataBase);
	UClass* Z_Construct_UClass_UNiagaraEditorDataBase_NoRegister()
	{
		return UNiagaraEditorDataBase::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraEditorDataBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraEditorDataBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorDataBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A base class for editor only data which supports post loading from the runtime owner object. */" },
		{ "IncludePath", "NiagaraEditorDataBase.h" },
		{ "ModuleRelativePath", "Public/NiagaraEditorDataBase.h" },
		{ "ToolTip", "A base class for editor only data which supports post loading from the runtime owner object." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraEditorDataBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraEditorDataBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraEditorDataBase_Statics::ClassParams = {
		&UNiagaraEditorDataBase::StaticClass,
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
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorDataBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorDataBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraEditorDataBase()
	{
		if (!Z_Registration_Info_UClass_UNiagaraEditorDataBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraEditorDataBase.OuterSingleton, Z_Construct_UClass_UNiagaraEditorDataBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraEditorDataBase.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraEditorDataBase>()
	{
		return UNiagaraEditorDataBase::StaticClass();
	}
	UNiagaraEditorDataBase::UNiagaraEditorDataBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraEditorDataBase);
	UNiagaraEditorDataBase::~UNiagaraEditorDataBase() {}
	void UNiagaraEditorParametersAdapterBase::StaticRegisterNativesUNiagaraEditorParametersAdapterBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraEditorParametersAdapterBase);
	UClass* Z_Construct_UClass_UNiagaraEditorParametersAdapterBase_NoRegister()
	{
		return UNiagaraEditorParametersAdapterBase::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraEditorParametersAdapterBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraEditorParametersAdapterBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraEditorParametersAdapterBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** A base class for editor only data which owns UNiagaraScriptVariables and supports synchronizing them with definitions. */" },
		{ "IncludePath", "NiagaraEditorDataBase.h" },
		{ "ModuleRelativePath", "Public/NiagaraEditorDataBase.h" },
		{ "ToolTip", "A base class for editor only data which owns UNiagaraScriptVariables and supports synchronizing them with definitions." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraEditorParametersAdapterBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraEditorParametersAdapterBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraEditorParametersAdapterBase_Statics::ClassParams = {
		&UNiagaraEditorParametersAdapterBase::StaticClass,
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
		0x000800A1u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraEditorParametersAdapterBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraEditorParametersAdapterBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraEditorParametersAdapterBase()
	{
		if (!Z_Registration_Info_UClass_UNiagaraEditorParametersAdapterBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraEditorParametersAdapterBase.OuterSingleton, Z_Construct_UClass_UNiagaraEditorParametersAdapterBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraEditorParametersAdapterBase.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraEditorParametersAdapterBase>()
	{
		return UNiagaraEditorParametersAdapterBase::StaticClass();
	}
	UNiagaraEditorParametersAdapterBase::UNiagaraEditorParametersAdapterBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraEditorParametersAdapterBase);
	UNiagaraEditorParametersAdapterBase::~UNiagaraEditorParametersAdapterBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraEditorDataBase_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraEditorDataBase_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraGraphViewSettings::StaticStruct, Z_Construct_UScriptStruct_FNiagaraGraphViewSettings_Statics::NewStructOps, TEXT("NiagaraGraphViewSettings"), &Z_Registration_Info_UScriptStruct_NiagaraGraphViewSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraGraphViewSettings), 2452467117U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraEditorDataBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraEditorDataBase, UNiagaraEditorDataBase::StaticClass, TEXT("UNiagaraEditorDataBase"), &Z_Registration_Info_UClass_UNiagaraEditorDataBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraEditorDataBase), 4201407020U) },
		{ Z_Construct_UClass_UNiagaraEditorParametersAdapterBase, UNiagaraEditorParametersAdapterBase::StaticClass, TEXT("UNiagaraEditorParametersAdapterBase"), &Z_Registration_Info_UClass_UNiagaraEditorParametersAdapterBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraEditorParametersAdapterBase), 2136571795U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraEditorDataBase_h_608135116(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraEditorDataBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraEditorDataBase_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraEditorDataBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraEditorDataBase_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
