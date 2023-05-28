// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavSystemConfigOverride.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavSystemConfigOverride() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UNavigationSystemConfig_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavSystemConfigOverride();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavSystemConfigOverride_NoRegister();
	NAVIGATIONSYSTEM_API UEnum* Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENavSystemOverridePolicy;
	static UEnum* ENavSystemOverridePolicy_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENavSystemOverridePolicy.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENavSystemOverridePolicy.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy, (UObject*)Z_Construct_UPackage__Script_NavigationSystem(), TEXT("ENavSystemOverridePolicy"));
		}
		return Z_Registration_Info_UEnum_ENavSystemOverridePolicy.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UEnum* StaticEnum<ENavSystemOverridePolicy>()
	{
		return ENavSystemOverridePolicy_StaticEnum();
	}
	struct Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy_Statics::Enumerators[] = {
		{ "ENavSystemOverridePolicy::Override", (int64)ENavSystemOverridePolicy::Override },
		{ "ENavSystemOverridePolicy::Append", (int64)ENavSystemOverridePolicy::Append },
		{ "ENavSystemOverridePolicy::Skip", (int64)ENavSystemOverridePolicy::Skip },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy_Statics::Enum_MetaDataParams[] = {
		{ "Append.Comment", "// the pre-existing nav system instance will be destroyed.\n" },
		{ "Append.Name", "ENavSystemOverridePolicy::Append" },
		{ "Append.ToolTip", "the pre-existing nav system instance will be destroyed." },
		{ "ModuleRelativePath", "Public/NavSystemConfigOverride.h" },
		{ "Override.Name", "ENavSystemOverridePolicy::Override" },
		{ "Skip.Comment", "// config information will be added to pre-existing nav system instance\n" },
		{ "Skip.Name", "ENavSystemOverridePolicy::Skip" },
		{ "Skip.ToolTip", "config information will be added to pre-existing nav system instance" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_NavigationSystem,
		nullptr,
		"ENavSystemOverridePolicy",
		"ENavSystemOverridePolicy",
		Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy()
	{
		if (!Z_Registration_Info_UEnum_ENavSystemOverridePolicy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENavSystemOverridePolicy.InnerSingleton, Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENavSystemOverridePolicy.InnerSingleton;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(ANavSystemConfigOverride::execApplyChanges)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ApplyChanges();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	void ANavSystemConfigOverride::StaticRegisterNativesANavSystemConfigOverride()
	{
#if WITH_EDITOR
		UClass* Class = ANavSystemConfigOverride::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplyChanges", &ANavSystemConfigOverride::execApplyChanges },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Navigation" },
		{ "Comment", "/** made an explicit function since rebuilding navigation system can be expensive */" },
		{ "ModuleRelativePath", "Public/NavSystemConfigOverride.h" },
		{ "ToolTip", "made an explicit function since rebuilding navigation system can be expensive" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavSystemConfigOverride, nullptr, "ApplyChanges", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x20020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANavSystemConfigOverride);
	UClass* Z_Construct_UClass_ANavSystemConfigOverride_NoRegister()
	{
		return ANavSystemConfigOverride::StaticClass();
	}
	struct Z_Construct_UClass_ANavSystemConfigOverride_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
		static const FClassFunctionLinkInfo FuncInfo[];
#endif //WITH_EDITOR
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpriteComponent;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavigationSystemConfig_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NavigationSystemConfig;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OverridePolicy_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverridePolicy_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OverridePolicy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bLoadOnClient_MetaData[];
#endif
		static void NewProp_bLoadOnClient_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bLoadOnClient;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavSystemConfigOverride_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
#if WITH_EDITOR
	const FClassFunctionLinkInfo Z_Construct_UClass_ANavSystemConfigOverride_Statics::FuncInfo[] = {
#if WITH_EDITOR
		{ &Z_Construct_UFunction_ANavSystemConfigOverride_ApplyChanges, "ApplyChanges" }, // 380627668
#endif //WITH_EDITOR
	};
#endif //WITH_EDITOR
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavSystemConfigOverride_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Rendering Actor LOD Cooking" },
		{ "IncludePath", "NavSystemConfigOverride.h" },
		{ "ModuleRelativePath", "Public/NavSystemConfigOverride.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavSystemConfigOverride.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0044000800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavSystemConfigOverride, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_SpriteComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_NavigationSystemConfig_MetaData[] = {
		{ "Category", "Navigation" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NavSystemConfigOverride.h" },
		{ "NoResetToDefault", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_NavigationSystemConfig = { "NavigationSystemConfig", nullptr, (EPropertyFlags)0x002608000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavSystemConfigOverride, NavigationSystemConfig), Z_Construct_UClass_UNavigationSystemConfig_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_NavigationSystemConfig_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_NavigationSystemConfig_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_OverridePolicy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_OverridePolicy_MetaData[] = {
		{ "Category", "Navigation" },
		{ "Comment", "/** If there's already a NavigationSystem instance in the world how should this nav override behave */" },
		{ "ModuleRelativePath", "Public/NavSystemConfigOverride.h" },
		{ "ToolTip", "If there's already a NavigationSystem instance in the world how should this nav override behave" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_OverridePolicy = { "OverridePolicy", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavSystemConfigOverride, OverridePolicy), Z_Construct_UEnum_NavigationSystem_ENavSystemOverridePolicy, METADATA_PARAMS(Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_OverridePolicy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_OverridePolicy_MetaData)) }; // 1260931835
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_bLoadOnClient_MetaData[] = {
		{ "Category", "Navigation" },
		{ "ModuleRelativePath", "Public/NavSystemConfigOverride.h" },
	};
#endif
	void Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_bLoadOnClient_SetBit(void* Obj)
	{
		((ANavSystemConfigOverride*)Obj)->bLoadOnClient = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_bLoadOnClient = { "bLoadOnClient", nullptr, (EPropertyFlags)0x00200c0000000005, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(ANavSystemConfigOverride), &Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_bLoadOnClient_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_bLoadOnClient_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_bLoadOnClient_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavSystemConfigOverride_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_SpriteComponent,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_NavigationSystemConfig,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_OverridePolicy_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_OverridePolicy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavSystemConfigOverride_Statics::NewProp_bLoadOnClient,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavSystemConfigOverride_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavSystemConfigOverride>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavSystemConfigOverride_Statics::ClassParams = {
		&ANavSystemConfigOverride::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		IF_WITH_EDITOR(FuncInfo, nullptr),
		Z_Construct_UClass_ANavSystemConfigOverride_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANavSystemConfigOverride_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANavSystemConfigOverride_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavSystemConfigOverride_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavSystemConfigOverride()
	{
		if (!Z_Registration_Info_UClass_ANavSystemConfigOverride.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavSystemConfigOverride.OuterSingleton, Z_Construct_UClass_ANavSystemConfigOverride_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANavSystemConfigOverride.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<ANavSystemConfigOverride>()
	{
		return ANavSystemConfigOverride::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavSystemConfigOverride);
	ANavSystemConfigOverride::~ANavSystemConfigOverride() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_Statics::EnumInfo[] = {
		{ ENavSystemOverridePolicy_StaticEnum, TEXT("ENavSystemOverridePolicy"), &Z_Registration_Info_UEnum_ENavSystemOverridePolicy, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1260931835U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANavSystemConfigOverride, ANavSystemConfigOverride::StaticClass, TEXT("ANavSystemConfigOverride"), &Z_Registration_Info_UClass_ANavSystemConfigOverride, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavSystemConfigOverride), 1116202842U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_4283624383(TEXT("/Script/NavigationSystem"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavSystemConfigOverride_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
