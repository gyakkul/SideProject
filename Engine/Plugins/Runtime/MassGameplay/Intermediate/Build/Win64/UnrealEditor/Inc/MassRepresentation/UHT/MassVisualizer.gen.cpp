// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassRepresentation/Public/MassVisualizer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassVisualizer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_AMassVisualizer();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_AMassVisualizer_NoRegister();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassVisualizationComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassRepresentation();
// End Cross Module References
	void AMassVisualizer::StaticRegisterNativesAMassVisualizer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMassVisualizer);
	UClass* Z_Construct_UClass_AMassVisualizer_NoRegister()
	{
		return AMassVisualizer::StaticClass();
	}
	struct Z_Construct_UClass_AMassVisualizer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_VisComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMassVisualizer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MassRepresentation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassVisualizer_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Actor holding the mass visual component responsible to handle the representation of the mass agent as the static mesh instances \n * There may be a separate instance of these for different types of Agents (Cars, NPC's etc)\n */" },
		{ "IncludePath", "MassVisualizer.h" },
		{ "ModuleRelativePath", "Public/MassVisualizer.h" },
		{ "ToolTip", "Actor holding the mass visual component responsible to handle the representation of the mass agent as the static mesh instances\nThere may be a separate instance of these for different types of Agents (Cars, NPC's etc)" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMassVisualizer_Statics::NewProp_VisComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MassVisualizer.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AMassVisualizer_Statics::NewProp_VisComponent = { "VisComponent", nullptr, (EPropertyFlags)0x0024080000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AMassVisualizer, VisComponent), Z_Construct_UClass_UMassVisualizationComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMassVisualizer_Statics::NewProp_VisComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AMassVisualizer_Statics::NewProp_VisComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMassVisualizer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMassVisualizer_Statics::NewProp_VisComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMassVisualizer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMassVisualizer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMassVisualizer_Statics::ClassParams = {
		&AMassVisualizer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMassVisualizer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AMassVisualizer_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMassVisualizer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMassVisualizer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMassVisualizer()
	{
		if (!Z_Registration_Info_UClass_AMassVisualizer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMassVisualizer.OuterSingleton, Z_Construct_UClass_AMassVisualizer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMassVisualizer.OuterSingleton;
	}
	template<> MASSREPRESENTATION_API UClass* StaticClass<AMassVisualizer>()
	{
		return AMassVisualizer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMassVisualizer);
	AMassVisualizer::~AMassVisualizer() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMassVisualizer, AMassVisualizer::StaticClass, TEXT("AMassVisualizer"), &Z_Registration_Info_UClass_AMassVisualizer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMassVisualizer), 852370027U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizer_h_2339375937(TEXT("/Script/MassRepresentation"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassVisualizer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
