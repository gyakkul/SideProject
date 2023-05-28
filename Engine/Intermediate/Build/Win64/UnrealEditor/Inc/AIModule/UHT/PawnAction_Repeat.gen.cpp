// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../AIModule/Classes/Actions/PawnAction_Repeat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePawnAction_Repeat() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnAction();
	AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister();
	AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat();
	AIMODULE_API UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat_NoRegister();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EPawnActionFailHandling();
	UPackage* Z_Construct_UPackage__Script_AIModule();
// End Cross Module References
	void UDEPRECATED_PawnAction_Repeat::StaticRegisterNativesUDEPRECATED_PawnAction_Repeat()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDEPRECATED_PawnAction_Repeat);
	UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat_NoRegister()
	{
		return UDEPRECATED_PawnAction_Repeat::StaticClass();
	}
	struct Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActionToRepeat_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ActionToRepeat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RecentActionCopy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RecentActionCopy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildFailureHandlingMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ChildFailureHandlingMode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDEPRECATED_PawnAction,
		(UObject* (*)())Z_Construct_UPackage__Script_AIModule,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Actions/PawnAction_Repeat.h" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Repeat.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat_Statics::NewProp_ActionToRepeat_MetaData[] = {
		{ "Comment", "/** Action to repeat. This instance won't really be run, it's a source for copying actions to be actually performed */" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Repeat.h" },
		{ "ToolTip", "Action to repeat. This instance won't really be run, it's a source for copying actions to be actually performed" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat_Statics::NewProp_ActionToRepeat = { "ActionToRepeat", nullptr, (EPropertyFlags)0x0014000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_PawnAction_Repeat, ActionToRepeat_DEPRECATED), Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat_Statics::NewProp_ActionToRepeat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat_Statics::NewProp_ActionToRepeat_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat_Statics::NewProp_RecentActionCopy_MetaData[] = {
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Repeat.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat_Statics::NewProp_RecentActionCopy = { "RecentActionCopy", nullptr, (EPropertyFlags)0x0014000020002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_PawnAction_Repeat, RecentActionCopy_DEPRECATED), Z_Construct_UClass_UDEPRECATED_PawnAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat_Statics::NewProp_RecentActionCopy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat_Statics::NewProp_RecentActionCopy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat_Statics::NewProp_ChildFailureHandlingMode_MetaData[] = {
		{ "Category", "PawnAction" },
		{ "ModuleRelativePath", "Classes/Actions/PawnAction_Repeat.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat_Statics::NewProp_ChildFailureHandlingMode = { "ChildFailureHandlingMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDEPRECATED_PawnAction_Repeat, ChildFailureHandlingMode), Z_Construct_UEnum_AIModule_EPawnActionFailHandling, METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat_Statics::NewProp_ChildFailureHandlingMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat_Statics::NewProp_ChildFailureHandlingMode_MetaData)) }; // 4138157017
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat_Statics::NewProp_ActionToRepeat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat_Statics::NewProp_RecentActionCopy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat_Statics::NewProp_ChildFailureHandlingMode,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDEPRECATED_PawnAction_Repeat>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat_Statics::ClassParams = {
		&UDEPRECATED_PawnAction_Repeat::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat_Statics::PropPointers),
		0,
		0x029012A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat()
	{
		if (!Z_Registration_Info_UClass_UDEPRECATED_PawnAction_Repeat.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDEPRECATED_PawnAction_Repeat.OuterSingleton, Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDEPRECATED_PawnAction_Repeat.OuterSingleton;
	}
	template<> AIMODULE_API UClass* StaticClass<UDEPRECATED_PawnAction_Repeat>()
	{
		return UDEPRECATED_PawnAction_Repeat::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDEPRECATED_PawnAction_Repeat);
	UDEPRECATED_PawnAction_Repeat::~UDEPRECATED_PawnAction_Repeat() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Repeat_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Repeat_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDEPRECATED_PawnAction_Repeat, UDEPRECATED_PawnAction_Repeat::StaticClass, TEXT("UDEPRECATED_PawnAction_Repeat"), &Z_Registration_Info_UClass_UDEPRECATED_PawnAction_Repeat, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDEPRECATED_PawnAction_Repeat), 2597907346U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Repeat_h_3188989182(TEXT("/Script/AIModule"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Repeat_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_AIModule_Classes_Actions_PawnAction_Repeat_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
