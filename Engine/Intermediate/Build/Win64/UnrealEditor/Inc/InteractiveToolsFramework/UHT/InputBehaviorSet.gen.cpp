// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputBehaviorSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputBehaviorSet() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehavior_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehaviorSet();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehaviorSet_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehaviorSource();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_UInputBehaviorSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_ULocalInputBehaviorSource();
	INTERACTIVETOOLSFRAMEWORK_API UClass* Z_Construct_UClass_ULocalInputBehaviorSource_NoRegister();
	INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* Z_Construct_UScriptStruct_FBehaviorInfo();
	UPackage* Z_Construct_UPackage__Script_InteractiveToolsFramework();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_BehaviorInfo;
class UScriptStruct* FBehaviorInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_BehaviorInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_BehaviorInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FBehaviorInfo, (UObject*)Z_Construct_UPackage__Script_InteractiveToolsFramework(), TEXT("BehaviorInfo"));
	}
	return Z_Registration_Info_UScriptStruct_BehaviorInfo.OuterSingleton;
}
template<> INTERACTIVETOOLSFRAMEWORK_API UScriptStruct* StaticStruct<FBehaviorInfo>()
{
	return FBehaviorInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FBehaviorInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Behavior_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Behavior;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBehaviorInfo_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/**\n * This is an internal structure used by UInputBehaviorSet. \n */" },
		{ "ModuleRelativePath", "Public/InputBehaviorSet.h" },
		{ "ToolTip", "This is an internal structure used by UInputBehaviorSet." },
	};
#endif
	void* Z_Construct_UScriptStruct_FBehaviorInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBehaviorInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBehaviorInfo_Statics::NewProp_Behavior_MetaData[] = {
		{ "Comment", "/** Reference to a Behavior */" },
		{ "ModuleRelativePath", "Public/InputBehaviorSet.h" },
		{ "ToolTip", "Reference to a Behavior" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FBehaviorInfo_Statics::NewProp_Behavior = { "Behavior", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FBehaviorInfo, Behavior), Z_Construct_UClass_UInputBehavior_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBehaviorInfo_Statics::NewProp_Behavior_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviorInfo_Statics::NewProp_Behavior_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBehaviorInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBehaviorInfo_Statics::NewProp_Behavior,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBehaviorInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
		nullptr,
		&NewStructOps,
		"BehaviorInfo",
		sizeof(FBehaviorInfo),
		alignof(FBehaviorInfo),
		Z_Construct_UScriptStruct_FBehaviorInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviorInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBehaviorInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBehaviorInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBehaviorInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_BehaviorInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_BehaviorInfo.InnerSingleton, Z_Construct_UScriptStruct_FBehaviorInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_BehaviorInfo.InnerSingleton;
	}
	void UInputBehaviorSet::StaticRegisterNativesUInputBehaviorSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputBehaviorSet);
	UClass* Z_Construct_UClass_UInputBehaviorSet_NoRegister()
	{
		return UInputBehaviorSet::StaticClass();
	}
	struct Z_Construct_UClass_UInputBehaviorSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Behaviors_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Behaviors_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Behaviors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputBehaviorSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputBehaviorSet_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UInputBehaviorSet manages a set of UInputBehaviors, and provides various functions\n * to query and forward events to the set. Tools and Widgets provide instances of this via\n * IInputBehaviorSource, and UInputRouter collects and manages them (see comments there)\n *\n * Behaviors in the set each have a source pointer and group tag, which allows sets of\n * behaviors to be managed together. For example one UInputBehaviorSet can be merged into \n * another and removed later.\n */" },
		{ "IncludePath", "InputBehaviorSet.h" },
		{ "ModuleRelativePath", "Public/InputBehaviorSet.h" },
		{ "ToolTip", "UInputBehaviorSet manages a set of UInputBehaviors, and provides various functions\nto query and forward events to the set. Tools and Widgets provide instances of this via\nIInputBehaviorSource, and UInputRouter collects and manages them (see comments there)\n\nBehaviors in the set each have a source pointer and group tag, which allows sets of\nbehaviors to be managed together. For example one UInputBehaviorSet can be merged into\nanother and removed later." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UInputBehaviorSet_Statics::NewProp_Behaviors_Inner = { "Behaviors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FBehaviorInfo, METADATA_PARAMS(nullptr, 0) }; // 833713611
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputBehaviorSet_Statics::NewProp_Behaviors_MetaData[] = {
		{ "Comment", "/** Current set of known Behaviors */" },
		{ "ModuleRelativePath", "Public/InputBehaviorSet.h" },
		{ "ToolTip", "Current set of known Behaviors" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInputBehaviorSet_Statics::NewProp_Behaviors = { "Behaviors", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UInputBehaviorSet, Behaviors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInputBehaviorSet_Statics::NewProp_Behaviors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputBehaviorSet_Statics::NewProp_Behaviors_MetaData)) }; // 833713611
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputBehaviorSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputBehaviorSet_Statics::NewProp_Behaviors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputBehaviorSet_Statics::NewProp_Behaviors,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputBehaviorSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputBehaviorSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputBehaviorSet_Statics::ClassParams = {
		&UInputBehaviorSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputBehaviorSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputBehaviorSet_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UInputBehaviorSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputBehaviorSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputBehaviorSet()
	{
		if (!Z_Registration_Info_UClass_UInputBehaviorSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputBehaviorSet.OuterSingleton, Z_Construct_UClass_UInputBehaviorSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputBehaviorSet.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInputBehaviorSet>()
	{
		return UInputBehaviorSet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputBehaviorSet);
	void UInputBehaviorSource::StaticRegisterNativesUInputBehaviorSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInputBehaviorSource);
	UClass* Z_Construct_UClass_UInputBehaviorSource_NoRegister()
	{
		return UInputBehaviorSource::StaticClass();
	}
	struct Z_Construct_UClass_UInputBehaviorSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputBehaviorSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputBehaviorSource_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InputBehaviorSet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputBehaviorSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInputBehaviorSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInputBehaviorSource_Statics::ClassParams = {
		&UInputBehaviorSource::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInputBehaviorSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputBehaviorSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputBehaviorSource()
	{
		if (!Z_Registration_Info_UClass_UInputBehaviorSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInputBehaviorSource.OuterSingleton, Z_Construct_UClass_UInputBehaviorSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInputBehaviorSource.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<UInputBehaviorSource>()
	{
		return UInputBehaviorSource::StaticClass();
	}
	UInputBehaviorSource::UInputBehaviorSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputBehaviorSource);
	UInputBehaviorSource::~UInputBehaviorSource() {}
	void ULocalInputBehaviorSource::StaticRegisterNativesULocalInputBehaviorSource()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ULocalInputBehaviorSource);
	UClass* Z_Construct_UClass_ULocalInputBehaviorSource_NoRegister()
	{
		return ULocalInputBehaviorSource::StaticClass();
	}
	struct Z_Construct_UClass_ULocalInputBehaviorSource_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULocalInputBehaviorSource_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_InteractiveToolsFramework,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULocalInputBehaviorSource_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * An implementation of IInputBehaviorSource that forwards to a user provided-lambda, to allow\n * a tool to supply a behavior source different from the one it is implementing itself. Useful,\n * for instance, when a tool wants to supply different behaviors to separate input routers.\n */" },
		{ "IncludePath", "InputBehaviorSet.h" },
		{ "ModuleRelativePath", "Public/InputBehaviorSet.h" },
		{ "ToolTip", "An implementation of IInputBehaviorSource that forwards to a user provided-lambda, to allow\na tool to supply a behavior source different from the one it is implementing itself. Useful,\nfor instance, when a tool wants to supply different behaviors to separate input routers." },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ULocalInputBehaviorSource_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInputBehaviorSource_NoRegister, (int32)VTABLE_OFFSET(ULocalInputBehaviorSource, IInputBehaviorSource), false },  // 4222810999
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULocalInputBehaviorSource_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULocalInputBehaviorSource>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ULocalInputBehaviorSource_Statics::ClassParams = {
		&ULocalInputBehaviorSource::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_ULocalInputBehaviorSource_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULocalInputBehaviorSource_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULocalInputBehaviorSource()
	{
		if (!Z_Registration_Info_UClass_ULocalInputBehaviorSource.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ULocalInputBehaviorSource.OuterSingleton, Z_Construct_UClass_ULocalInputBehaviorSource_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ULocalInputBehaviorSource.OuterSingleton;
	}
	template<> INTERACTIVETOOLSFRAMEWORK_API UClass* StaticClass<ULocalInputBehaviorSource>()
	{
		return ULocalInputBehaviorSource::StaticClass();
	}
	ULocalInputBehaviorSource::ULocalInputBehaviorSource(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULocalInputBehaviorSource);
	ULocalInputBehaviorSource::~ULocalInputBehaviorSource() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_Statics::ScriptStructInfo[] = {
		{ FBehaviorInfo::StaticStruct, Z_Construct_UScriptStruct_FBehaviorInfo_Statics::NewStructOps, TEXT("BehaviorInfo"), &Z_Registration_Info_UScriptStruct_BehaviorInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FBehaviorInfo), 833713611U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInputBehaviorSet, UInputBehaviorSet::StaticClass, TEXT("UInputBehaviorSet"), &Z_Registration_Info_UClass_UInputBehaviorSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputBehaviorSet), 2736041089U) },
		{ Z_Construct_UClass_UInputBehaviorSource, UInputBehaviorSource::StaticClass, TEXT("UInputBehaviorSource"), &Z_Registration_Info_UClass_UInputBehaviorSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInputBehaviorSource), 4222810999U) },
		{ Z_Construct_UClass_ULocalInputBehaviorSource, ULocalInputBehaviorSource::StaticClass, TEXT("ULocalInputBehaviorSource"), &Z_Registration_Info_UClass_ULocalInputBehaviorSource, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ULocalInputBehaviorSource), 2226953966U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_3655432489(TEXT("/Script/InteractiveToolsFramework"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_InteractiveToolsFramework_Public_InputBehaviorSet_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
