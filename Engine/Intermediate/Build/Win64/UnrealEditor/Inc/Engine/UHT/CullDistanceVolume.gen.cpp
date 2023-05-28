// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/CullDistanceVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCullDistanceVolume() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_ACullDistanceVolume();
	ENGINE_API UClass* Z_Construct_UClass_ACullDistanceVolume_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCullDistanceSizePair();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CullDistanceSizePair;
class UScriptStruct* FCullDistanceSizePair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CullDistanceSizePair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CullDistanceSizePair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCullDistanceSizePair, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("CullDistanceSizePair"));
	}
	return Z_Registration_Info_UScriptStruct_CullDistanceSizePair.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FCullDistanceSizePair>()
{
	return FCullDistanceSizePair::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CullDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CullDistance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Helper structure containing size and cull distance pair.\n */" },
		{ "ModuleRelativePath", "Classes/Engine/CullDistanceVolume.h" },
		{ "ToolTip", "Helper structure containing size and cull distance pair." },
	};
#endif
	void* Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCullDistanceSizePair>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "CullDistanceSizePair" },
		{ "Comment", "/** Size to associate with cull distance. */" },
		{ "ModuleRelativePath", "Classes/Engine/CullDistanceVolume.h" },
		{ "ToolTip", "Size to associate with cull distance." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCullDistanceSizePair, Size), METADATA_PARAMS(Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewProp_CullDistance_MetaData[] = {
		{ "Category", "CullDistanceSizePair" },
		{ "Comment", "/** Cull distance associated with size. */" },
		{ "ModuleRelativePath", "Classes/Engine/CullDistanceVolume.h" },
		{ "ToolTip", "Cull distance associated with size." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewProp_CullDistance = { "CullDistance", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCullDistanceSizePair, CullDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewProp_CullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewProp_CullDistance_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewProp_Size,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewProp_CullDistance,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		nullptr,
		&NewStructOps,
		"CullDistanceSizePair",
		sizeof(FCullDistanceSizePair),
		alignof(FCullDistanceSizePair),
		Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCullDistanceSizePair()
	{
		if (!Z_Registration_Info_UScriptStruct_CullDistanceSizePair.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CullDistanceSizePair.InnerSingleton, Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CullDistanceSizePair.InnerSingleton;
	}
	void ACullDistanceVolume::StaticRegisterNativesACullDistanceVolume()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACullDistanceVolume);
	UClass* Z_Construct_UClass_ACullDistanceVolume_NoRegister()
	{
		return ACullDistanceVolume::StaticClass();
	}
	struct Z_Construct_UClass_ACullDistanceVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CullDistances_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CullDistances_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CullDistances;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnabled_MetaData[];
#endif
		static void NewProp_bEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACullDistanceVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACullDistanceVolume_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Advanced Attachment Collision Volume Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "Engine/CullDistanceVolume.h" },
		{ "ModuleRelativePath", "Classes/Engine/CullDistanceVolume.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_CullDistances_Inner = { "CullDistances", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCullDistanceSizePair, METADATA_PARAMS(nullptr, 0) }; // 3643695589
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_CullDistances_MetaData[] = {
		{ "Category", "CullDistanceVolume" },
		{ "Comment", "/**\n\x09 * Array of size and cull distance pairs. The code will calculate the sphere diameter of a primitive's BB and look for a best\n\x09 * fit in this array to determine which cull distance to use.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/CullDistanceVolume.h" },
		{ "ToolTip", "Array of size and cull distance pairs. The code will calculate the sphere diameter of a primitive's BB and look for a best\nfit in this array to determine which cull distance to use." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_CullDistances = { "CullDistances", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACullDistanceVolume, CullDistances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_CullDistances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_CullDistances_MetaData)) }; // 3643695589
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_bEnabled_MetaData[] = {
		{ "Category", "CullDistanceVolume" },
		{ "Comment", "/**\n\x09 * Whether the volume is currently enabled or not.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/Engine/CullDistanceVolume.h" },
		{ "ToolTip", "Whether the volume is currently enabled or not." },
	};
#endif
	void Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_bEnabled_SetBit(void* Obj)
	{
		((ACullDistanceVolume*)Obj)->bEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ACullDistanceVolume), &Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_bEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_bEnabled_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACullDistanceVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_CullDistances_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_CullDistances,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACullDistanceVolume_Statics::NewProp_bEnabled,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACullDistanceVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACullDistanceVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACullDistanceVolume_Statics::ClassParams = {
		&ACullDistanceVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACullDistanceVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACullDistanceVolume_Statics::PropPointers),
		0,
		0x008800A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACullDistanceVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACullDistanceVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACullDistanceVolume()
	{
		if (!Z_Registration_Info_UClass_ACullDistanceVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACullDistanceVolume.OuterSingleton, Z_Construct_UClass_ACullDistanceVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACullDistanceVolume.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ACullDistanceVolume>()
	{
		return ACullDistanceVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACullDistanceVolume);
	ACullDistanceVolume::~ACullDistanceVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_Statics::ScriptStructInfo[] = {
		{ FCullDistanceSizePair::StaticStruct, Z_Construct_UScriptStruct_FCullDistanceSizePair_Statics::NewStructOps, TEXT("CullDistanceSizePair"), &Z_Registration_Info_UScriptStruct_CullDistanceSizePair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCullDistanceSizePair), 3643695589U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACullDistanceVolume, ACullDistanceVolume::StaticClass, TEXT("ACullDistanceVolume"), &Z_Registration_Info_UClass_ACullDistanceVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACullDistanceVolume), 1220828881U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_1914465861(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_CullDistanceVolume_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
