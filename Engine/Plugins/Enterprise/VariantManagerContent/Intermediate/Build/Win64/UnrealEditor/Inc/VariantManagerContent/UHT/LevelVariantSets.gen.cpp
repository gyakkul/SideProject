// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "LevelVariantSets.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLevelVariantSets() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VariantManagerContent();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ULevelVariantSets();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_ULevelVariantSets_NoRegister();
	VARIANTMANAGERCONTENT_API UClass* Z_Construct_UClass_UVariantSet_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ULevelVariantSets::execGetVariantSetByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_VariantSetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVariantSet**)Z_Param__Result=P_THIS->GetVariantSetByName(Z_Param_VariantSetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelVariantSets::execGetVariantSet)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_VariantSetIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVariantSet**)Z_Param__Result=P_THIS->GetVariantSet(Z_Param_VariantSetIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ULevelVariantSets::execGetNumVariantSets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetNumVariantSets();
		P_NATIVE_END;
	}
	void ULevelVariantSets::StaticRegisterNativesULevelVariantSets()
	{
		UClass* Class = ULevelVariantSets::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetNumVariantSets", &ULevelVariantSets::execGetNumVariantSets },
			{ "GetVariantSet", &ULevelVariantSets::execGetVariantSet },
			{ "GetVariantSetByName", &ULevelVariantSets::execGetVariantSetByName },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics
	{
		struct LevelVariantSets_eventGetNumVariantSets_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelVariantSets_eventGetNumVariantSets_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelVariantSets" },
		{ "ModuleRelativePath", "Public/LevelVariantSets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelVariantSets, nullptr, "GetNumVariantSets", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::LevelVariantSets_eventGetNumVariantSets_Parms), Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics
	{
		struct LevelVariantSets_eventGetVariantSet_Parms
		{
			int32 VariantSetIndex;
			UVariantSet* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_VariantSetIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::NewProp_VariantSetIndex = { "VariantSetIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelVariantSets_eventGetVariantSet_Parms, VariantSetIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelVariantSets_eventGetVariantSet_Parms, ReturnValue), Z_Construct_UClass_UVariantSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::NewProp_VariantSetIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelVariantSets" },
		{ "ModuleRelativePath", "Public/LevelVariantSets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelVariantSets, nullptr, "GetVariantSet", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::LevelVariantSets_eventGetVariantSet_Parms), Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelVariantSets_GetVariantSet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelVariantSets_GetVariantSet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics
	{
		struct LevelVariantSets_eventGetVariantSetByName_Parms
		{
			FString VariantSetName;
			UVariantSet* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_VariantSetName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::NewProp_VariantSetName = { "VariantSetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelVariantSets_eventGetVariantSetByName_Parms, VariantSetName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(LevelVariantSets_eventGetVariantSetByName_Parms, ReturnValue), Z_Construct_UClass_UVariantSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::NewProp_VariantSetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "LevelVariantSets" },
		{ "ModuleRelativePath", "Public/LevelVariantSets.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ULevelVariantSets, nullptr, "GetVariantSetByName", nullptr, nullptr, sizeof(Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::LevelVariantSets_eventGetVariantSetByName_Parms), Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULevelVariantSets);
	UClass* Z_Construct_UClass_ULevelVariantSets_NoRegister()
	{
		return ULevelVariantSets::StaticClass();
	}
	struct Z_Construct_UClass_ULevelVariantSets_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectorBlueprint_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DirectorBlueprint;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DirectorClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_DirectorClass;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VariantSets_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VariantSets_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VariantSets;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULevelVariantSets_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VariantManagerContent,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ULevelVariantSets_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ULevelVariantSets_GetNumVariantSets, "GetNumVariantSets" }, // 4083330004
		{ &Z_Construct_UFunction_ULevelVariantSets_GetVariantSet, "GetVariantSet" }, // 2022818608
		{ &Z_Construct_UFunction_ULevelVariantSets_GetVariantSetByName, "GetVariantSetByName" }, // 3844172344
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelVariantSets_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "LevelVariantSets.h" },
		{ "ModuleRelativePath", "Public/LevelVariantSets.h" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_DirectorBlueprint_MetaData[] = {
		{ "Comment", "// A pointer to the director blueprint that generates this levelvariantsets' DirectorClass\n" },
		{ "ModuleRelativePath", "Public/LevelVariantSets.h" },
		{ "ToolTip", "A pointer to the director blueprint that generates this levelvariantsets' DirectorClass" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_DirectorBlueprint = { "DirectorBlueprint", nullptr, (EPropertyFlags)0x0044000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelVariantSets, DirectorBlueprint), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_DirectorBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_DirectorBlueprint_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_DirectorClass_MetaData[] = {
		{ "Comment", "// The class that is used to spawn this levelvariantsets' director instance.\n// Director instances are allocated one per instance\n" },
		{ "ModuleRelativePath", "Public/LevelVariantSets.h" },
		{ "ToolTip", "The class that is used to spawn this levelvariantsets' director instance.\nDirector instances are allocated one per instance" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_DirectorClass = { "DirectorClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelVariantSets, DirectorClass), Z_Construct_UClass_UBlueprintGeneratedClass_NoRegister, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_DirectorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_DirectorClass_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_VariantSets_Inner = { "VariantSets", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UVariantSet_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_VariantSets_MetaData[] = {
		{ "ModuleRelativePath", "Public/LevelVariantSets.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_VariantSets = { "VariantSets", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ULevelVariantSets, VariantSets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_VariantSets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_VariantSets_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULevelVariantSets_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_DirectorBlueprint,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_DirectorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_VariantSets_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULevelVariantSets_Statics::NewProp_VariantSets,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULevelVariantSets_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULevelVariantSets>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULevelVariantSets_Statics::ClassParams = {
		&ULevelVariantSets::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ULevelVariantSets_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ULevelVariantSets_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULevelVariantSets_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULevelVariantSets_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULevelVariantSets()
	{
		if (!Z_Registration_Info_UClass_ULevelVariantSets.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULevelVariantSets.OuterSingleton, Z_Construct_UClass_ULevelVariantSets_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULevelVariantSets.OuterSingleton;
	}
	template<> VARIANTMANAGERCONTENT_API UClass* StaticClass<ULevelVariantSets>()
	{
		return ULevelVariantSets::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULevelVariantSets);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ULevelVariantSets)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSets_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSets_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ULevelVariantSets, ULevelVariantSets::StaticClass, TEXT("ULevelVariantSets"), &Z_Registration_Info_UClass_ULevelVariantSets, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULevelVariantSets), 2108404053U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSets_h_397565684(TEXT("/Script/VariantManagerContent"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSets_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Enterprise_VariantManagerContent_Source_VariantManagerContent_Public_LevelVariantSets_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
