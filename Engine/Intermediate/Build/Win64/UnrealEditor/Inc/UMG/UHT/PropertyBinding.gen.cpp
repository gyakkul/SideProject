// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Binding/PropertyBinding.h"
#include "Binding/DynamicPropertyPath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePropertyBinding() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPropertyBinding();
	UMG_API UClass* Z_Construct_UClass_UPropertyBinding_NoRegister();
	UMG_API UScriptStruct* Z_Construct_UScriptStruct_FDynamicPropertyPath();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	void UPropertyBinding::StaticRegisterNativesUPropertyBinding()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPropertyBinding);
	UClass* Z_Construct_UClass_UPropertyBinding_NoRegister()
	{
		return UPropertyBinding::StaticClass();
	}
	struct Z_Construct_UClass_UPropertyBinding_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourceObject_MetaData[];
#endif
		static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_SourceObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SourcePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SourcePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestinationProperty_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_DestinationProperty;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPropertyBinding_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyBinding_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Binding/PropertyBinding.h" },
		{ "ModuleRelativePath", "Public/Binding/PropertyBinding.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyBinding_Statics::NewProp_SourceObject_MetaData[] = {
		{ "Comment", "/** The source object to use as the initial container to resolve the Source Property Path on. */" },
		{ "ModuleRelativePath", "Public/Binding/PropertyBinding.h" },
		{ "ToolTip", "The source object to use as the initial container to resolve the Source Property Path on." },
	};
#endif
	const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UPropertyBinding_Statics::NewProp_SourceObject = { "SourceObject", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyBinding, SourceObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPropertyBinding_Statics::NewProp_SourceObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyBinding_Statics::NewProp_SourceObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyBinding_Statics::NewProp_SourcePath_MetaData[] = {
		{ "Comment", "/** The property path to trace to resolve this binding on the Source Object */" },
		{ "ModuleRelativePath", "Public/Binding/PropertyBinding.h" },
		{ "ToolTip", "The property path to trace to resolve this binding on the Source Object" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPropertyBinding_Statics::NewProp_SourcePath = { "SourcePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyBinding, SourcePath), Z_Construct_UScriptStruct_FDynamicPropertyPath, METADATA_PARAMS(Z_Construct_UClass_UPropertyBinding_Statics::NewProp_SourcePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyBinding_Statics::NewProp_SourcePath_MetaData)) }; // 2842537116
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPropertyBinding_Statics::NewProp_DestinationProperty_MetaData[] = {
		{ "Comment", "/** Used to determine if a binding already exists on the object and if this binding can be safely removed. */" },
		{ "ModuleRelativePath", "Public/Binding/PropertyBinding.h" },
		{ "ToolTip", "Used to determine if a binding already exists on the object and if this binding can be safely removed." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UPropertyBinding_Statics::NewProp_DestinationProperty = { "DestinationProperty", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UPropertyBinding, DestinationProperty), METADATA_PARAMS(Z_Construct_UClass_UPropertyBinding_Statics::NewProp_DestinationProperty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyBinding_Statics::NewProp_DestinationProperty_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPropertyBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyBinding_Statics::NewProp_SourceObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyBinding_Statics::NewProp_SourcePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPropertyBinding_Statics::NewProp_DestinationProperty,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPropertyBinding_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPropertyBinding>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPropertyBinding_Statics::ClassParams = {
		&UPropertyBinding::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPropertyBinding_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyBinding_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPropertyBinding_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPropertyBinding_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPropertyBinding()
	{
		if (!Z_Registration_Info_UClass_UPropertyBinding.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPropertyBinding.OuterSingleton, Z_Construct_UClass_UPropertyBinding_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPropertyBinding.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UPropertyBinding>()
	{
		return UPropertyBinding::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPropertyBinding);
	UPropertyBinding::~UPropertyBinding() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPropertyBinding, UPropertyBinding::StaticClass, TEXT("UPropertyBinding"), &Z_Registration_Info_UClass_UPropertyBinding, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPropertyBinding), 3034642839U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_3272101357(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Binding_PropertyBinding_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
