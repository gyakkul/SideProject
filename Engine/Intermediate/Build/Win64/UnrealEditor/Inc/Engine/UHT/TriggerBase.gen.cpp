// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TriggerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTriggerBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBase();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UShapeComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	void ATriggerBase::StaticRegisterNativesATriggerBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATriggerBase);
	UClass* Z_Construct_UClass_ATriggerBase_NoRegister()
	{
		return ATriggerBase::StaticClass();
	}
	struct Z_Construct_UClass_ATriggerBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CollisionComponent;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATriggerBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBase_Statics::Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Common" },
		{ "Comment", "/** An actor used to generate collision events (begin/end overlap) in the level. */" },
		{ "IncludePath", "Engine/TriggerBase.h" },
		{ "IsConversionRoot", "true" },
		{ "ModuleRelativePath", "Classes/Engine/TriggerBase.h" },
		{ "ToolTip", "An actor used to generate collision events (begin/end overlap) in the level." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBase_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TriggerBase" },
		{ "Comment", "/** Shape component used for collision */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/TriggerBase.h" },
		{ "ToolTip", "Shape component used for collision" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATriggerBase_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x00440000000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATriggerBase, CollisionComponent), Z_Construct_UClass_UShapeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerBase_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBase_Statics::NewProp_CollisionComponent_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATriggerBase_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "TriggerBase" },
		{ "Comment", "/** Billboard used to see the trigger in the editor */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/Engine/TriggerBase.h" },
		{ "ToolTip", "Billboard used to see the trigger in the editor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ATriggerBase_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x004400080008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ATriggerBase, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATriggerBase_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBase_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATriggerBase_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBase_Statics::NewProp_CollisionComponent,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATriggerBase_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATriggerBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATriggerBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ATriggerBase_Statics::ClassParams = {
		&ATriggerBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATriggerBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBase_Statics::PropPointers),
		0,
		0x008800A5u,
		METADATA_PARAMS(Z_Construct_UClass_ATriggerBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ATriggerBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATriggerBase()
	{
		if (!Z_Registration_Info_UClass_ATriggerBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATriggerBase.OuterSingleton, Z_Construct_UClass_ATriggerBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ATriggerBase.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<ATriggerBase>()
	{
		return ATriggerBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATriggerBase);
	ATriggerBase::~ATriggerBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ATriggerBase, ATriggerBase::StaticClass, TEXT("ATriggerBase"), &Z_Registration_Info_UClass_ATriggerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATriggerBase), 3283921915U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_3769192665(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Engine_TriggerBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
