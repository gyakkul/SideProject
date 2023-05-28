// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnitTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitTask() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTask();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTask_NoRegister();
	NETCODEUNITTEST_API UClass* Z_Construct_UClass_UUnitTest_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NetcodeUnitTest();
// End Cross Module References
	void UUnitTask::StaticRegisterNativesUUnitTask()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UUnitTask);
	UClass* Z_Construct_UClass_UUnitTask_NoRegister()
	{
		return UUnitTask::StaticClass();
	}
	struct Z_Construct_UClass_UUnitTask_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnitTask_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_NetcodeUnitTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitTask_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UnitTask's are used to implement supporting code for UnitTest's, for handling complex behind-the-scenes setup prior to test execution\n * (e.g. primarily for implementing game-specific server/client environment setup), which is shared between many unit tests,\n * and which is better to abstract-away from visibility in unit tests themselves, for code clarity.\n *\n * For example, some games require authentication negotiation before the game client can connect to a server,\n * and this is the type of task that UnitTask's are designed for.\n *\n * Unit tasks that are added to a unit test, must complete execution before the unit test itself can execute.\n */" },
		{ "IncludePath", "UnitTask.h" },
		{ "ModuleRelativePath", "Classes/UnitTask.h" },
		{ "ToolTip", "UnitTask's are used to implement supporting code for UnitTest's, for handling complex behind-the-scenes setup prior to test execution\n(e.g. primarily for implementing game-specific server/client environment setup), which is shared between many unit tests,\nand which is better to abstract-away from visibility in unit tests themselves, for code clarity.\n\nFor example, some games require authentication negotiation before the game client can connect to a server,\nand this is the type of task that UnitTask's are designed for.\n\nUnit tasks that are added to a unit test, must complete execution before the unit test itself can execute." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitTask_Statics::NewProp_Owner_MetaData[] = {
		{ "Comment", "/** The UnitTest that owns this task */" },
		{ "ModuleRelativePath", "Classes/UnitTask.h" },
		{ "ToolTip", "The UnitTest that owns this task" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UUnitTask_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UUnitTask, Owner), Z_Construct_UClass_UUnitTest_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUnitTask_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTask_Statics::NewProp_Owner_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnitTask_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitTask_Statics::NewProp_Owner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnitTask_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnitTask>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UUnitTask_Statics::ClassParams = {
		&UUnitTask::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUnitTask_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTask_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUnitTask_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnitTask_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnitTask()
	{
		if (!Z_Registration_Info_UClass_UUnitTask.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UUnitTask.OuterSingleton, Z_Construct_UClass_UUnitTask_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UUnitTask.OuterSingleton;
	}
	template<> NETCODEUNITTEST_API UClass* StaticClass<UUnitTask>()
	{
		return UUnitTask::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnitTask);
	UUnitTask::~UUnitTask() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTask_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTask_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UUnitTask, UUnitTask::StaticClass, TEXT("UUnitTask"), &Z_Registration_Info_UClass_UUnitTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UUnitTask), 755818723U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTask_h_3793481400(TEXT("/Script/NetcodeUnitTest"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_NetcodeUnitTest_NetcodeUnitTest_Source_NetcodeUnitTest_Classes_UnitTask_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
