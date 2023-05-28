// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ControlRigBlueprintFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlRigBlueprintFactory() {}
// Cross Module References
	CONTROLRIG_API UClass* Z_Construct_UClass_UControlRig_NoRegister();
	CONTROLRIGDEVELOPER_API UClass* Z_Construct_UClass_UControlRigBlueprint_NoRegister();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigBlueprintFactory();
	CONTROLRIGEDITOR_API UClass* Z_Construct_UClass_UControlRigBlueprintFactory_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UFactory();
	UPackage* Z_Construct_UPackage__Script_ControlRigEditor();
// End Cross Module References
	DEFINE_FUNCTION(UControlRigBlueprintFactory::execCreateControlRigFromSkeletalMeshOrSkeleton)
	{
		P_GET_OBJECT(UObject,Z_Param_InSelectedObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UControlRigBlueprint**)Z_Param__Result=UControlRigBlueprintFactory::CreateControlRigFromSkeletalMeshOrSkeleton(Z_Param_InSelectedObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UControlRigBlueprintFactory::execCreateNewControlRigAsset)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_InDesiredPackagePath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UControlRigBlueprint**)Z_Param__Result=UControlRigBlueprintFactory::CreateNewControlRigAsset(Z_Param_InDesiredPackagePath);
		P_NATIVE_END;
	}
	void UControlRigBlueprintFactory::StaticRegisterNativesUControlRigBlueprintFactory()
	{
		UClass* Class = UControlRigBlueprintFactory::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateControlRigFromSkeletalMeshOrSkeleton", &UControlRigBlueprintFactory::execCreateControlRigFromSkeletalMeshOrSkeleton },
			{ "CreateNewControlRigAsset", &UControlRigBlueprintFactory::execCreateNewControlRigAsset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UControlRigBlueprintFactory_CreateControlRigFromSkeletalMeshOrSkeleton_Statics
	{
		struct ControlRigBlueprintFactory_eventCreateControlRigFromSkeletalMeshOrSkeleton_Parms
		{
			UObject* InSelectedObject;
			UControlRigBlueprint* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InSelectedObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprintFactory_CreateControlRigFromSkeletalMeshOrSkeleton_Statics::NewProp_InSelectedObject = { "InSelectedObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprintFactory_eventCreateControlRigFromSkeletalMeshOrSkeleton_Parms, InSelectedObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprintFactory_CreateControlRigFromSkeletalMeshOrSkeleton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprintFactory_eventCreateControlRigFromSkeletalMeshOrSkeleton_Parms, ReturnValue), Z_Construct_UClass_UControlRigBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprintFactory_CreateControlRigFromSkeletalMeshOrSkeleton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintFactory_CreateControlRigFromSkeletalMeshOrSkeleton_Statics::NewProp_InSelectedObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintFactory_CreateControlRigFromSkeletalMeshOrSkeleton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprintFactory_CreateControlRigFromSkeletalMeshOrSkeleton_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "Comment", "/**\n\x09 * Create a new control rig asset within the contents space of the project\n\x09 * based on a skeletal mesh or skeleton object.\n\x09 * @param InSelectedObject The SkeletalMesh / Skeleton object to base the control rig asset on\n\x09 */" },
		{ "ModuleRelativePath", "Private/ControlRigBlueprintFactory.h" },
		{ "ToolTip", "Create a new control rig asset within the contents space of the project\nbased on a skeletal mesh or skeleton object.\n@param InSelectedObject The SkeletalMesh / Skeleton object to base the control rig asset on" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprintFactory_CreateControlRigFromSkeletalMeshOrSkeleton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprintFactory, nullptr, "CreateControlRigFromSkeletalMeshOrSkeleton", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprintFactory_CreateControlRigFromSkeletalMeshOrSkeleton_Statics::ControlRigBlueprintFactory_eventCreateControlRigFromSkeletalMeshOrSkeleton_Parms), Z_Construct_UFunction_UControlRigBlueprintFactory_CreateControlRigFromSkeletalMeshOrSkeleton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintFactory_CreateControlRigFromSkeletalMeshOrSkeleton_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprintFactory_CreateControlRigFromSkeletalMeshOrSkeleton_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintFactory_CreateControlRigFromSkeletalMeshOrSkeleton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprintFactory_CreateControlRigFromSkeletalMeshOrSkeleton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprintFactory_CreateControlRigFromSkeletalMeshOrSkeleton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UControlRigBlueprintFactory_CreateNewControlRigAsset_Statics
	{
		struct ControlRigBlueprintFactory_eventCreateNewControlRigAsset_Parms
		{
			FString InDesiredPackagePath;
			UControlRigBlueprint* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InDesiredPackagePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_InDesiredPackagePath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprintFactory_CreateNewControlRigAsset_Statics::NewProp_InDesiredPackagePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UControlRigBlueprintFactory_CreateNewControlRigAsset_Statics::NewProp_InDesiredPackagePath = { "InDesiredPackagePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprintFactory_eventCreateNewControlRigAsset_Parms, InDesiredPackagePath), METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprintFactory_CreateNewControlRigAsset_Statics::NewProp_InDesiredPackagePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintFactory_CreateNewControlRigAsset_Statics::NewProp_InDesiredPackagePath_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UControlRigBlueprintFactory_CreateNewControlRigAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ControlRigBlueprintFactory_eventCreateNewControlRigAsset_Parms, ReturnValue), Z_Construct_UClass_UControlRigBlueprint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UControlRigBlueprintFactory_CreateNewControlRigAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintFactory_CreateNewControlRigAsset_Statics::NewProp_InDesiredPackagePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UControlRigBlueprintFactory_CreateNewControlRigAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UControlRigBlueprintFactory_CreateNewControlRigAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Control Rig" },
		{ "Comment", "/**\n\x09 * Create a new control rig asset within the contents space of the project.\n\x09 * @param InDesiredPackagePath The package path to use for the control rig asset\n\x09 */" },
		{ "ModuleRelativePath", "Private/ControlRigBlueprintFactory.h" },
		{ "ToolTip", "Create a new control rig asset within the contents space of the project.\n@param InDesiredPackagePath The package path to use for the control rig asset" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UControlRigBlueprintFactory_CreateNewControlRigAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UControlRigBlueprintFactory, nullptr, "CreateNewControlRigAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UControlRigBlueprintFactory_CreateNewControlRigAsset_Statics::ControlRigBlueprintFactory_eventCreateNewControlRigAsset_Parms), Z_Construct_UFunction_UControlRigBlueprintFactory_CreateNewControlRigAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintFactory_CreateNewControlRigAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UControlRigBlueprintFactory_CreateNewControlRigAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UControlRigBlueprintFactory_CreateNewControlRigAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UControlRigBlueprintFactory_CreateNewControlRigAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UControlRigBlueprintFactory_CreateNewControlRigAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UControlRigBlueprintFactory);
	UClass* Z_Construct_UClass_UControlRigBlueprintFactory_NoRegister()
	{
		return UControlRigBlueprintFactory::StaticClass();
	}
	struct Z_Construct_UClass_UControlRigBlueprintFactory_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UControlRigBlueprintFactory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UFactory,
		(UObject* (*)())Z_Construct_UPackage__Script_ControlRigEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UControlRigBlueprintFactory_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UControlRigBlueprintFactory_CreateControlRigFromSkeletalMeshOrSkeleton, "CreateControlRigFromSkeletalMeshOrSkeleton" }, // 1784382087
		{ &Z_Construct_UFunction_UControlRigBlueprintFactory_CreateNewControlRigAsset, "CreateNewControlRigAsset" }, // 2940798743
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprintFactory_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "ControlRigBlueprintFactory.h" },
		{ "ModuleRelativePath", "Private/ControlRigBlueprintFactory.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UControlRigBlueprintFactory_Statics::NewProp_ParentClass_MetaData[] = {
		{ "AllowAbstract", "" },
		{ "Category", "Control Rig Factory" },
		{ "Comment", "// The parent class of the created blueprint\n" },
		{ "ModuleRelativePath", "Private/ControlRigBlueprintFactory.h" },
		{ "ToolTip", "The parent class of the created blueprint" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UControlRigBlueprintFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UControlRigBlueprintFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UControlRig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprintFactory_Statics::NewProp_ParentClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprintFactory_Statics::NewProp_ParentClass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UControlRigBlueprintFactory_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UControlRigBlueprintFactory_Statics::NewProp_ParentClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UControlRigBlueprintFactory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UControlRigBlueprintFactory>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UControlRigBlueprintFactory_Statics::ClassParams = {
		&UControlRigBlueprintFactory::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UControlRigBlueprintFactory_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprintFactory_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UControlRigBlueprintFactory_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UControlRigBlueprintFactory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UControlRigBlueprintFactory()
	{
		if (!Z_Registration_Info_UClass_UControlRigBlueprintFactory.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UControlRigBlueprintFactory.OuterSingleton, Z_Construct_UClass_UControlRigBlueprintFactory_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UControlRigBlueprintFactory.OuterSingleton;
	}
	template<> CONTROLRIGEDITOR_API UClass* StaticClass<UControlRigBlueprintFactory>()
	{
		return UControlRigBlueprintFactory::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UControlRigBlueprintFactory);
	UControlRigBlueprintFactory::~UControlRigBlueprintFactory() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_ControlRigBlueprintFactory_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_ControlRigBlueprintFactory_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UControlRigBlueprintFactory, UControlRigBlueprintFactory::StaticClass, TEXT("UControlRigBlueprintFactory"), &Z_Registration_Info_UClass_UControlRigBlueprintFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UControlRigBlueprintFactory), 1289846260U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_ControlRigBlueprintFactory_h_1375080293(TEXT("/Script/ControlRigEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_ControlRigBlueprintFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Animation_ControlRig_Source_ControlRigEditor_Private_ControlRigBlueprintFactory_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
