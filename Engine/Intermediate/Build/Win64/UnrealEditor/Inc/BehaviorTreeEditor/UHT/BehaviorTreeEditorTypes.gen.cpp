// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BehaviorTreeEditorTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBehaviorTreeEditorTypes() {}
// Cross Module References
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeEditorTypes();
	BEHAVIORTREEEDITOR_API UClass* Z_Construct_UClass_UBehaviorTreeEditorTypes_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_BehaviorTreeEditor();
// End Cross Module References
	void UBehaviorTreeEditorTypes::StaticRegisterNativesUBehaviorTreeEditorTypes()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBehaviorTreeEditorTypes);
	UClass* Z_Construct_UClass_UBehaviorTreeEditorTypes_NoRegister()
	{
		return UBehaviorTreeEditorTypes::StaticClass();
	}
	struct Z_Construct_UClass_UBehaviorTreeEditorTypes_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBehaviorTreeEditorTypes_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_BehaviorTreeEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBehaviorTreeEditorTypes_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BehaviorTreeEditorTypes.h" },
		{ "ModuleRelativePath", "Classes/BehaviorTreeEditorTypes.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBehaviorTreeEditorTypes_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBehaviorTreeEditorTypes>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBehaviorTreeEditorTypes_Statics::ClassParams = {
		&UBehaviorTreeEditorTypes::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBehaviorTreeEditorTypes_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBehaviorTreeEditorTypes_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBehaviorTreeEditorTypes()
	{
		if (!Z_Registration_Info_UClass_UBehaviorTreeEditorTypes.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBehaviorTreeEditorTypes.OuterSingleton, Z_Construct_UClass_UBehaviorTreeEditorTypes_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBehaviorTreeEditorTypes.OuterSingleton;
	}
	template<> BEHAVIORTREEEDITOR_API UClass* StaticClass<UBehaviorTreeEditorTypes>()
	{
		return UBehaviorTreeEditorTypes::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBehaviorTreeEditorTypes);
	UBehaviorTreeEditorTypes::~UBehaviorTreeEditorTypes() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeEditorTypes_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeEditorTypes_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBehaviorTreeEditorTypes, UBehaviorTreeEditorTypes::StaticClass, TEXT("UBehaviorTreeEditorTypes"), &Z_Registration_Info_UClass_UBehaviorTreeEditorTypes, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBehaviorTreeEditorTypes), 4250611089U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeEditorTypes_h_3063842958(TEXT("/Script/BehaviorTreeEditor"),
		Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeEditorTypes_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Editor_BehaviorTreeEditor_Classes_BehaviorTreeEditorTypes_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
