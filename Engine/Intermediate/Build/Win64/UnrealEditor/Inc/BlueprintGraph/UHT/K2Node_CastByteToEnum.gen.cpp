// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "K2Node_CastByteToEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_CastByteToEnum() {}
// Cross Module References
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CastByteToEnum();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CastByteToEnum_NoRegister();
	BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UNodeDependingOnEnumInterface_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UEnum();
	UPackage* Z_Construct_UPackage__Script_BlueprintGraph();
// End Cross Module References
	void UK2Node_CastByteToEnum::StaticRegisterNativesUK2Node_CastByteToEnum()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_CastByteToEnum);
	UClass* Z_Construct_UClass_UK2Node_CastByteToEnum_NoRegister()
	{
		return UK2Node_CastByteToEnum::StaticClass();
	}
	struct Z_Construct_UClass_UK2Node_CastByteToEnum_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Enum_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Enum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSafe_MetaData[];
#endif
		static void NewProp_bSafe_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSafe;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UK2Node,
		(UObject* (*)())Z_Construct_UPackage__Script_BlueprintGraph,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K2Node_CastByteToEnum.h" },
		{ "ModuleRelativePath", "Classes/K2Node_CastByteToEnum.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::NewProp_Enum_MetaData[] = {
		{ "ModuleRelativePath", "Classes/K2Node_CastByteToEnum.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::NewProp_Enum = { "Enum", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UK2Node_CastByteToEnum, Enum), Z_Construct_UClass_UEnum, METADATA_PARAMS(Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::NewProp_Enum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::NewProp_Enum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::NewProp_bSafe_MetaData[] = {
		{ "Comment", "/* if true, the node returns always a valid value */" },
		{ "ModuleRelativePath", "Classes/K2Node_CastByteToEnum.h" },
		{ "ToolTip", "if true, the node returns always a valid value" },
	};
#endif
	void Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::NewProp_bSafe_SetBit(void* Obj)
	{
		((UK2Node_CastByteToEnum*)Obj)->bSafe = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::NewProp_bSafe = { "bSafe", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UK2Node_CastByteToEnum), &Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::NewProp_bSafe_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::NewProp_bSafe_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::NewProp_bSafe_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::NewProp_Enum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::NewProp_bSafe,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNodeDependingOnEnumInterface_NoRegister, (int32)VTABLE_OFFSET(UK2Node_CastByteToEnum, INodeDependingOnEnumInterface), false },  // 2360955649
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_CastByteToEnum>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::ClassParams = {
		&UK2Node_CastByteToEnum::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK2Node_CastByteToEnum()
	{
		if (!Z_Registration_Info_UClass_UK2Node_CastByteToEnum.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_CastByteToEnum.OuterSingleton, Z_Construct_UClass_UK2Node_CastByteToEnum_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UK2Node_CastByteToEnum.OuterSingleton;
	}
	template<> BLUEPRINTGRAPH_API UClass* StaticClass<UK2Node_CastByteToEnum>()
	{
		return UK2Node_CastByteToEnum::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_CastByteToEnum);
	UK2Node_CastByteToEnum::~UK2Node_CastByteToEnum() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CastByteToEnum_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CastByteToEnum_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_CastByteToEnum, UK2Node_CastByteToEnum::StaticClass, TEXT("UK2Node_CastByteToEnum"), &Z_Registration_Info_UClass_UK2Node_CastByteToEnum, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_CastByteToEnum), 2743607068U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CastByteToEnum_h_983245537(TEXT("/Script/BlueprintGraph"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CastByteToEnum_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BlueprintGraph_Classes_K2Node_CastByteToEnum_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
