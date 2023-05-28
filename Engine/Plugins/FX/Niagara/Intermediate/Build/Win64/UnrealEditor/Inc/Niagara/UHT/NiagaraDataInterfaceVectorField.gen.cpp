// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Classes/NiagaraDataInterfaceVectorField.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraDataInterfaceVectorField() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UVectorField_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterface();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceVectorField();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraDataInterfaceVectorField_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	void UNiagaraDataInterfaceVectorField::StaticRegisterNativesUNiagaraDataInterfaceVectorField()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraDataInterfaceVectorField);
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceVectorField_NoRegister()
	{
		return UNiagaraDataInterfaceVectorField::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Field_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Field;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTileX_MetaData[];
#endif
		static void NewProp_bTileX_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTileX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTileY_MetaData[];
#endif
		static void NewProp_bTileY_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTileY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTileZ_MetaData[];
#endif
		static void NewProp_bTileZ_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTileZ;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::Class_MetaDataParams[] = {
		{ "Category", "Vector Field" },
		{ "DisplayName", "Vector Field" },
		{ "IncludePath", "NiagaraDataInterfaceVectorField.h" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVectorField.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_Field_MetaData[] = {
		{ "Category", "VectorField" },
		{ "Comment", "/** Vector field to sample from. */" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVectorField.h" },
		{ "ToolTip", "Vector field to sample from." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_Field = { "Field", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraDataInterfaceVectorField, Field), Z_Construct_UClass_UVectorField_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_Field_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_Field_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileX_MetaData[] = {
		{ "Category", "VectorField" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVectorField.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileX_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceVectorField*)Obj)->bTileX = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileX = { "bTileX", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceVectorField), &Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileX_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileX_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileY_MetaData[] = {
		{ "Category", "VectorField" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVectorField.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileY_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceVectorField*)Obj)->bTileY = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileY = { "bTileY", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceVectorField), &Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileY_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileY_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileZ_MetaData[] = {
		{ "Category", "VectorField" },
		{ "ModuleRelativePath", "Classes/NiagaraDataInterfaceVectorField.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileZ_SetBit(void* Obj)
	{
		((UNiagaraDataInterfaceVectorField*)Obj)->bTileZ = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileZ = { "bTileZ", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraDataInterfaceVectorField), &Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileZ_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileZ_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_Field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::NewProp_bTileZ,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraDataInterfaceVectorField>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::ClassParams = {
		&UNiagaraDataInterfaceVectorField::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraDataInterfaceVectorField()
	{
		if (!Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorField.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorField.OuterSingleton, Z_Construct_UClass_UNiagaraDataInterfaceVectorField_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorField.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraDataInterfaceVectorField>()
	{
		return UNiagaraDataInterfaceVectorField::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraDataInterfaceVectorField);
	UNiagaraDataInterfaceVectorField::~UNiagaraDataInterfaceVectorField() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVectorField_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVectorField_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraDataInterfaceVectorField, UNiagaraDataInterfaceVectorField::StaticClass, TEXT("UNiagaraDataInterfaceVectorField"), &Z_Registration_Info_UClass_UNiagaraDataInterfaceVectorField, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraDataInterfaceVectorField), 1378418544U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVectorField_h_1943348000(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVectorField_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Classes_NiagaraDataInterfaceVectorField_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
