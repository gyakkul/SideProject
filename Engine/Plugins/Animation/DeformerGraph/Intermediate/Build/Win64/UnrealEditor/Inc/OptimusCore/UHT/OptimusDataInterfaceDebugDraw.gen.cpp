// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/DataInterfaces/OptimusDataInterfaceDebugDraw.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOptimusDataInterfaceDebugDraw() {}
// Cross Module References
	COMPUTEFRAMEWORK_API UClass* Z_Construct_UClass_UComputeDataProvider();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusComputeDataInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDebugDrawDataInterface();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDebugDrawDataInterface_NoRegister();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDebugDrawDataProvider();
	OPTIMUSCORE_API UClass* Z_Construct_UClass_UOptimusDebugDrawDataProvider_NoRegister();
	OPTIMUSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FOptimusDebugDrawParameters();
	UPackage* Z_Construct_UPackage__Script_OptimusCore();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_OptimusDebugDrawParameters;
class UScriptStruct* FOptimusDebugDrawParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_OptimusDebugDrawParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_OptimusDebugDrawParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FOptimusDebugDrawParameters, (UObject*)Z_Construct_UPackage__Script_OptimusCore(), TEXT("OptimusDebugDrawParameters"));
	}
	return Z_Registration_Info_UScriptStruct_OptimusDebugDrawParameters.OuterSingleton;
}
template<> OPTIMUSCORE_API UScriptStruct* StaticStruct<FOptimusDebugDrawParameters>()
{
	return FOptimusDebugDrawParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceEnable_MetaData[];
#endif
		static void NewProp_bForceEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceEnable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxLineCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxLineCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxTriangleCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxTriangleCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxCharacterCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxCharacterCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FontSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FontSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/* User controllable debug draw settings. */" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDebugDraw.h" },
		{ "ToolTip", "User controllable debug draw settings." },
	};
#endif
	void* Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOptimusDebugDrawParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_bForceEnable_MetaData[] = {
		{ "Category", "DebugDraw" },
		{ "Comment", "/** \n\x09 * Force enable debug rendering. \n\x09 * Otherwise \"r.ShaderPrint 1\" needs to be set.\n\x09 */" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDebugDraw.h" },
		{ "ToolTip", "Force enable debug rendering.\nOtherwise \"r.ShaderPrint 1\" needs to be set." },
	};
#endif
	void Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_bForceEnable_SetBit(void* Obj)
	{
		((FOptimusDebugDrawParameters*)Obj)->bForceEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_bForceEnable = { "bForceEnable", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FOptimusDebugDrawParameters), &Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_bForceEnable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_bForceEnable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_bForceEnable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_MaxLineCount_MetaData[] = {
		{ "Category", "DebugDraw" },
		{ "Comment", "/** Space to allocate for line collection. */" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDebugDraw.h" },
		{ "ToolTip", "Space to allocate for line collection." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_MaxLineCount = { "MaxLineCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusDebugDrawParameters, MaxLineCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_MaxLineCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_MaxLineCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_MaxTriangleCount_MetaData[] = {
		{ "Category", "DebugDraw" },
		{ "Comment", "/** Space to allocate for triangle collection. */" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDebugDraw.h" },
		{ "ToolTip", "Space to allocate for triangle collection." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_MaxTriangleCount = { "MaxTriangleCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusDebugDrawParameters, MaxTriangleCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_MaxTriangleCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_MaxTriangleCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_MaxCharacterCount_MetaData[] = {
		{ "Category", "DebugDraw" },
		{ "Comment", "/** Space to allocate for character collection. */" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDebugDraw.h" },
		{ "ToolTip", "Space to allocate for character collection." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_MaxCharacterCount = { "MaxCharacterCount", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusDebugDrawParameters, MaxCharacterCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_MaxCharacterCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_MaxCharacterCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_FontSize_MetaData[] = {
		{ "Category", "DebugDraw" },
		{ "Comment", "/** Font size for characters. */" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDebugDraw.h" },
		{ "ToolTip", "Font size for characters." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_FontSize = { "FontSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FOptimusDebugDrawParameters, FontSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_FontSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_FontSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_bForceEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_MaxLineCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_MaxTriangleCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_MaxCharacterCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewProp_FontSize,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
		nullptr,
		&NewStructOps,
		"OptimusDebugDrawParameters",
		sizeof(FOptimusDebugDrawParameters),
		alignof(FOptimusDebugDrawParameters),
		Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOptimusDebugDrawParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_OptimusDebugDrawParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_OptimusDebugDrawParameters.InnerSingleton, Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_OptimusDebugDrawParameters.InnerSingleton;
	}
	void UOptimusDebugDrawDataInterface::StaticRegisterNativesUOptimusDebugDrawDataInterface()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusDebugDrawDataInterface);
	UClass* Z_Construct_UClass_UOptimusDebugDrawDataInterface_NoRegister()
	{
		return UOptimusDebugDrawDataInterface::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugDrawParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOptimusComputeDataInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::Class_MetaDataParams[] = {
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Interface for writing skinned mesh. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceDebugDraw.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDebugDraw.h" },
		{ "ToolTip", "Compute Framework Data Interface for writing skinned mesh." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::NewProp_DebugDrawParameters_MetaData[] = {
		{ "Category", "DebugDraw" },
		{ "Comment", "//~ End UComputeDataInterface Interface\n" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDebugDraw.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::NewProp_DebugDrawParameters = { "DebugDrawParameters", nullptr, (EPropertyFlags)0x0010000000000011, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusDebugDrawDataInterface, DebugDrawParameters), Z_Construct_UScriptStruct_FOptimusDebugDrawParameters, METADATA_PARAMS(Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::NewProp_DebugDrawParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::NewProp_DebugDrawParameters_MetaData)) }; // 2286767541
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::NewProp_DebugDrawParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusDebugDrawDataInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::ClassParams = {
		&UOptimusDebugDrawDataInterface::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::PropPointers),
		0,
		0x001100A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusDebugDrawDataInterface()
	{
		if (!Z_Registration_Info_UClass_UOptimusDebugDrawDataInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusDebugDrawDataInterface.OuterSingleton, Z_Construct_UClass_UOptimusDebugDrawDataInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusDebugDrawDataInterface.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusDebugDrawDataInterface>()
	{
		return UOptimusDebugDrawDataInterface::StaticClass();
	}
	UOptimusDebugDrawDataInterface::UOptimusDebugDrawDataInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusDebugDrawDataInterface);
	UOptimusDebugDrawDataInterface::~UOptimusDebugDrawDataInterface() {}
	void UOptimusDebugDrawDataProvider::StaticRegisterNativesUOptimusDebugDrawDataProvider()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOptimusDebugDrawDataProvider);
	UClass* Z_Construct_UClass_UOptimusDebugDrawDataProvider_NoRegister()
	{
		return UOptimusDebugDrawDataProvider::StaticClass();
	}
	struct Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrimitiveComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PrimitiveComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DebugDrawParameters_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DebugDrawParameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UComputeDataProvider,
		(UObject* (*)())Z_Construct_UPackage__Script_OptimusCore,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Category", "ComputeFramework" },
		{ "Comment", "/** Compute Framework Data Provider for writing skinned mesh. */" },
		{ "IncludePath", "DataInterfaces/OptimusDataInterfaceDebugDraw.h" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDebugDraw.h" },
		{ "ToolTip", "Compute Framework Data Provider for writing skinned mesh." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::NewProp_PrimitiveComponent_MetaData[] = {
		{ "Category", "Binding" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDebugDraw.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::NewProp_PrimitiveComponent = { "PrimitiveComponent", nullptr, (EPropertyFlags)0x001400000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusDebugDrawDataProvider, PrimitiveComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::NewProp_PrimitiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::NewProp_PrimitiveComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::NewProp_DebugDrawParameters_MetaData[] = {
		{ "ModuleRelativePath", "Private/DataInterfaces/OptimusDataInterfaceDebugDraw.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::NewProp_DebugDrawParameters = { "DebugDrawParameters", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UOptimusDebugDrawDataProvider, DebugDrawParameters), Z_Construct_UScriptStruct_FOptimusDebugDrawParameters, METADATA_PARAMS(Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::NewProp_DebugDrawParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::NewProp_DebugDrawParameters_MetaData)) }; // 2286767541
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::NewProp_PrimitiveComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::NewProp_DebugDrawParameters,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOptimusDebugDrawDataProvider>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::ClassParams = {
		&UOptimusDebugDrawDataProvider::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::PropPointers),
		0,
		0x008010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOptimusDebugDrawDataProvider()
	{
		if (!Z_Registration_Info_UClass_UOptimusDebugDrawDataProvider.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOptimusDebugDrawDataProvider.OuterSingleton, Z_Construct_UClass_UOptimusDebugDrawDataProvider_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOptimusDebugDrawDataProvider.OuterSingleton;
	}
	template<> OPTIMUSCORE_API UClass* StaticClass<UOptimusDebugDrawDataProvider>()
	{
		return UOptimusDebugDrawDataProvider::StaticClass();
	}
	UOptimusDebugDrawDataProvider::UOptimusDebugDrawDataProvider(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOptimusDebugDrawDataProvider);
	UOptimusDebugDrawDataProvider::~UOptimusDebugDrawDataProvider() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDebugDraw_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDebugDraw_h_Statics::ScriptStructInfo[] = {
		{ FOptimusDebugDrawParameters::StaticStruct, Z_Construct_UScriptStruct_FOptimusDebugDrawParameters_Statics::NewStructOps, TEXT("OptimusDebugDrawParameters"), &Z_Registration_Info_UScriptStruct_OptimusDebugDrawParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FOptimusDebugDrawParameters), 2286767541U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDebugDraw_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOptimusDebugDrawDataInterface, UOptimusDebugDrawDataInterface::StaticClass, TEXT("UOptimusDebugDrawDataInterface"), &Z_Registration_Info_UClass_UOptimusDebugDrawDataInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusDebugDrawDataInterface), 1610467930U) },
		{ Z_Construct_UClass_UOptimusDebugDrawDataProvider, UOptimusDebugDrawDataProvider::StaticClass, TEXT("UOptimusDebugDrawDataProvider"), &Z_Registration_Info_UClass_UOptimusDebugDrawDataProvider, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOptimusDebugDrawDataProvider), 3610232292U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDebugDraw_h_944083568(TEXT("/Script/OptimusCore"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDebugDraw_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDebugDraw_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDebugDraw_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_DeformerGraph_Source_OptimusCore_Private_DataInterfaces_OptimusDataInterfaceDebugDraw_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
