// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NavModifierVolume.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavModifierVolume() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	ENGINE_API UClass* Z_Construct_UClass_UNavRelevantInterface_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ENavigationDataResolution();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavModifierVolume();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_ANavModifierVolume_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavArea_NoRegister();
	UPackage* Z_Construct_UPackage__Script_NavigationSystem();
// End Cross Module References
	DEFINE_FUNCTION(ANavModifierVolume::execSetAreaClass)
	{
		P_GET_OBJECT(UClass,Z_Param_NewAreaClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAreaClass(Z_Param_NewAreaClass);
		P_NATIVE_END;
	}
	void ANavModifierVolume::StaticRegisterNativesANavModifierVolume()
	{
		UClass* Class = ANavModifierVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetAreaClass", &ANavModifierVolume::execSetAreaClass },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics
	{
		struct NavModifierVolume_eventSetAreaClass_Parms
		{
			TSubclassOf<UNavArea>  NewAreaClass;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_NewAreaClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::NewProp_NewAreaClass = { "NewAreaClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(NavModifierVolume_eventSetAreaClass_Parms, NewAreaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavArea_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::NewProp_NewAreaClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::Function_MetaDataParams[] = {
		{ "Category", "AI|Navigation" },
		{ "CPP_Default_NewAreaClass", "None" },
		{ "ModuleRelativePath", "Public/NavModifierVolume.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANavModifierVolume, nullptr, "SetAreaClass", nullptr, nullptr, sizeof(Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::NavModifierVolume_eventSetAreaClass_Parms), Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANavModifierVolume_SetAreaClass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ANavModifierVolume_SetAreaClass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ANavModifierVolume);
	UClass* Z_Construct_UClass_ANavModifierVolume_NoRegister()
	{
		return ANavModifierVolume::StaticClass();
	}
	struct Z_Construct_UClass_ANavModifierVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AreaClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_AreaClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMaskFillCollisionUnderneathForNavmesh_MetaData[];
#endif
		static void NewProp_bMaskFillCollisionUnderneathForNavmesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMaskFillCollisionUnderneathForNavmesh;
		static const UECodeGen_Private::FBytePropertyParams NewProp_NavMeshResolution_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NavMeshResolution_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_NavMeshResolution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANavModifierVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_NavigationSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANavModifierVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANavModifierVolume_SetAreaClass, "SetAreaClass" }, // 3677332244
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavModifierVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** \n *\x09""Allows applying selected AreaClass to navmesh, using Volume's shape\n */" },
		{ "HideCategories", "Navigation Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "NavModifierVolume.h" },
		{ "ModuleRelativePath", "Public/NavModifierVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "Allows applying selected AreaClass to navmesh, using Volume's shape" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_AreaClass_MetaData[] = {
		{ "Category", "Default" },
		{ "ModuleRelativePath", "Public/NavModifierVolume.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_AreaClass = { "AreaClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavModifierVolume, AreaClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UNavArea_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_AreaClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_AreaClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_bMaskFillCollisionUnderneathForNavmesh_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Experimental: if set, the 2D space occupied by the volume box will ignore FillCollisionUnderneathForNavmesh */" },
		{ "ModuleRelativePath", "Public/NavModifierVolume.h" },
		{ "ToolTip", "Experimental: if set, the 2D space occupied by the volume box will ignore FillCollisionUnderneathForNavmesh" },
	};
#endif
	void Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_bMaskFillCollisionUnderneathForNavmesh_SetBit(void* Obj)
	{
		((ANavModifierVolume*)Obj)->bMaskFillCollisionUnderneathForNavmesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_bMaskFillCollisionUnderneathForNavmesh = { "bMaskFillCollisionUnderneathForNavmesh", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ANavModifierVolume), &Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_bMaskFillCollisionUnderneathForNavmesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_bMaskFillCollisionUnderneathForNavmesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_bMaskFillCollisionUnderneathForNavmesh_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_NavMeshResolution_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_NavMeshResolution_MetaData[] = {
		{ "Category", "Default" },
		{ "Comment", "/** Experimental: When not set to None, the navmesh tiles touched by the navigation modifier volume will be built\n\x09 * using the highest resolution found. */" },
		{ "ModuleRelativePath", "Public/NavModifierVolume.h" },
		{ "ToolTip", "Experimental: When not set to None, the navmesh tiles touched by the navigation modifier volume will be built\nusing the highest resolution found." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_NavMeshResolution = { "NavMeshResolution", nullptr, (EPropertyFlags)0x00200c0000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ANavModifierVolume, NavMeshResolution), Z_Construct_UEnum_Engine_ENavigationDataResolution, METADATA_PARAMS(Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_NavMeshResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_NavMeshResolution_MetaData)) }; // 16081659
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANavModifierVolume_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_AreaClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_bMaskFillCollisionUnderneathForNavmesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_NavMeshResolution_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANavModifierVolume_Statics::NewProp_NavMeshResolution,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ANavModifierVolume_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UNavRelevantInterface_NoRegister, (int32)VTABLE_OFFSET(ANavModifierVolume, INavRelevantInterface), false },  // 4115074815
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANavModifierVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANavModifierVolume>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ANavModifierVolume_Statics::ClassParams = {
		&ANavModifierVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANavModifierVolume_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANavModifierVolume_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANavModifierVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANavModifierVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANavModifierVolume()
	{
		if (!Z_Registration_Info_UClass_ANavModifierVolume.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ANavModifierVolume.OuterSingleton, Z_Construct_UClass_ANavModifierVolume_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ANavModifierVolume.OuterSingleton;
	}
	template<> NAVIGATIONSYSTEM_API UClass* StaticClass<ANavModifierVolume>()
	{
		return ANavModifierVolume::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANavModifierVolume);
	ANavModifierVolume::~ANavModifierVolume() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ANavModifierVolume, ANavModifierVolume::StaticClass, TEXT("ANavModifierVolume"), &Z_Registration_Info_UClass_ANavModifierVolume, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ANavModifierVolume), 2217983393U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_1690736967(TEXT("/Script/NavigationSystem"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_NavigationSystem_Public_NavModifierVolume_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
