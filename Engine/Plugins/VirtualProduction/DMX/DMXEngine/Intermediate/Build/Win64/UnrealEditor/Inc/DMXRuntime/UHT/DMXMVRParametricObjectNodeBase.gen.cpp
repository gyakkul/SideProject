// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MVR/Types/DMXMVRParametricObjectNodeBase.h"
#include "DMXOptionalTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXMVRParametricObjectNodeBase() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRParametricObjectNodeBase();
	DMXRUNTIME_API UClass* Z_Construct_UClass_UDMXMVRParametricObjectNodeBase_NoRegister();
	DMXRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDMXOptionalTransform();
	UPackage* Z_Construct_UPackage__Script_DMXRuntime();
// End Cross Module References
	void UDMXMVRParametricObjectNodeBase::StaticRegisterNativesUDMXMVRParametricObjectNodeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXMVRParametricObjectNodeBase);
	UClass* Z_Construct_UClass_UDMXMVRParametricObjectNodeBase_NoRegister()
	{
		return UDMXMVRParametricObjectNodeBase::StaticClass();
	}
	struct Z_Construct_UClass_UDMXMVRParametricObjectNodeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UUID_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_UUID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Matrix_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Matrix;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXMVRParametricObjectNodeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXRuntime,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRParametricObjectNodeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** UE specific: The base class for all Children in a Child List Node, whereas the standard refers to them as 'Parametric Objects'. */" },
		{ "IncludePath", "MVR/Types/DMXMVRParametricObjectNodeBase.h" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRParametricObjectNodeBase.h" },
		{ "ToolTip", "UE specific: The base class for all Children in a Child List Node, whereas the standard refers to them as 'Parametric Objects'." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRParametricObjectNodeBase_Statics::NewProp_UUID_MetaData[] = {
		{ "Comment", "/** The unique identifier of the object. */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRParametricObjectNodeBase.h" },
		{ "ToolTip", "The unique identifier of the object." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXMVRParametricObjectNodeBase_Statics::NewProp_UUID = { "UUID", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRParametricObjectNodeBase, UUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UDMXMVRParametricObjectNodeBase_Statics::NewProp_UUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRParametricObjectNodeBase_Statics::NewProp_UUID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXMVRParametricObjectNodeBase_Statics::NewProp_Matrix_MetaData[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** The location of the object inside the parent coordinate system. */" },
		{ "ModuleRelativePath", "Public/MVR/Types/DMXMVRParametricObjectNodeBase.h" },
		{ "ToolTip", "The location of the object inside the parent coordinate system." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDMXMVRParametricObjectNodeBase_Statics::NewProp_Matrix = { "Matrix", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXMVRParametricObjectNodeBase, Matrix), Z_Construct_UScriptStruct_FDMXOptionalTransform, METADATA_PARAMS(Z_Construct_UClass_UDMXMVRParametricObjectNodeBase_Statics::NewProp_Matrix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRParametricObjectNodeBase_Statics::NewProp_Matrix_MetaData)) }; // 897329876
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXMVRParametricObjectNodeBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRParametricObjectNodeBase_Statics::NewProp_UUID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXMVRParametricObjectNodeBase_Statics::NewProp_Matrix,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXMVRParametricObjectNodeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXMVRParametricObjectNodeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXMVRParametricObjectNodeBase_Statics::ClassParams = {
		&UDMXMVRParametricObjectNodeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDMXMVRParametricObjectNodeBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRParametricObjectNodeBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXMVRParametricObjectNodeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXMVRParametricObjectNodeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXMVRParametricObjectNodeBase()
	{
		if (!Z_Registration_Info_UClass_UDMXMVRParametricObjectNodeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXMVRParametricObjectNodeBase.OuterSingleton, Z_Construct_UClass_UDMXMVRParametricObjectNodeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXMVRParametricObjectNodeBase.OuterSingleton;
	}
	template<> DMXRUNTIME_API UClass* StaticClass<UDMXMVRParametricObjectNodeBase>()
	{
		return UDMXMVRParametricObjectNodeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXMVRParametricObjectNodeBase);
	UDMXMVRParametricObjectNodeBase::~UDMXMVRParametricObjectNodeBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRParametricObjectNodeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRParametricObjectNodeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXMVRParametricObjectNodeBase, UDMXMVRParametricObjectNodeBase::StaticClass, TEXT("UDMXMVRParametricObjectNodeBase"), &Z_Registration_Info_UClass_UDMXMVRParametricObjectNodeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXMVRParametricObjectNodeBase), 2108454373U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRParametricObjectNodeBase_h_1089459724(TEXT("/Script/DMXRuntime"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRParametricObjectNodeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXEngine_Source_DMXRuntime_Public_MVR_Types_DMXMVRParametricObjectNodeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
