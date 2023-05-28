// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassReplication/Public/MassClientBubbleInfoBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassClientBubbleInfoBase() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AInfo();
	MASSREPLICATION_API UClass* Z_Construct_UClass_AMassClientBubbleInfoBase();
	MASSREPLICATION_API UClass* Z_Construct_UClass_AMassClientBubbleInfoBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassReplication();
// End Cross Module References
	void AMassClientBubbleInfoBase::StaticRegisterNativesAMassClientBubbleInfoBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMassClientBubbleInfoBase);
	UClass* Z_Construct_UClass_AMassClientBubbleInfoBase_NoRegister()
	{
		return AMassClientBubbleInfoBase::StaticClass();
	}
	struct Z_Construct_UClass_AMassClientBubbleInfoBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMassClientBubbleInfoBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_MassReplication,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassClientBubbleInfoBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** The info actor base class that provides the actual replication */" },
		{ "HideCategories", "Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MassClientBubbleInfoBase.h" },
		{ "ModuleRelativePath", "Public/MassClientBubbleInfoBase.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "The info actor base class that provides the actual replication" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMassClientBubbleInfoBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMassClientBubbleInfoBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMassClientBubbleInfoBase_Statics::ClassParams = {
		&AMassClientBubbleInfoBase::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AMassClientBubbleInfoBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMassClientBubbleInfoBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMassClientBubbleInfoBase()
	{
		if (!Z_Registration_Info_UClass_AMassClientBubbleInfoBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMassClientBubbleInfoBase.OuterSingleton, Z_Construct_UClass_AMassClientBubbleInfoBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMassClientBubbleInfoBase.OuterSingleton;
	}
	template<> MASSREPLICATION_API UClass* StaticClass<AMassClientBubbleInfoBase>()
	{
		return AMassClientBubbleInfoBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMassClientBubbleInfoBase);
	AMassClientBubbleInfoBase::~AMassClientBubbleInfoBase() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassClientBubbleInfoBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassClientBubbleInfoBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMassClientBubbleInfoBase, AMassClientBubbleInfoBase::StaticClass, TEXT("AMassClientBubbleInfoBase"), &Z_Registration_Info_UClass_AMassClientBubbleInfoBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMassClientBubbleInfoBase), 1420899975U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassClientBubbleInfoBase_h_152934383(TEXT("/Script/MassReplication"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassClientBubbleInfoBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassReplication_Public_MassClientBubbleInfoBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
