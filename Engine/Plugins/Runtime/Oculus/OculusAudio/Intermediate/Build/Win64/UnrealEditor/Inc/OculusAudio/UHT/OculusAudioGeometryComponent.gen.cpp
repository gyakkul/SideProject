// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/OculusAudioGeometryComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOculusAudioGeometryComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	OCULUSAUDIO_API UClass* Z_Construct_UClass_UOculusAudioGeometryComponent();
	OCULUSAUDIO_API UClass* Z_Construct_UClass_UOculusAudioGeometryComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_OculusAudio();
// End Cross Module References
	void UOculusAudioGeometryComponent::StaticRegisterNativesUOculusAudioGeometryComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UOculusAudioGeometryComponent);
	UClass* Z_Construct_UClass_UOculusAudioGeometryComponent_NoRegister()
	{
		return UOculusAudioGeometryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOculusAudioGeometryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IncludeChildren_MetaData[];
#endif
		static void NewProp_IncludeChildren_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IncludeChildren;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOculusAudioGeometryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OculusAudio,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioGeometryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Audio" },
		{ "Comment", "/*\n * OculusAudio geometry components are used to customize an a static mesh actor's acoustic properties.\n */" },
		{ "HideCategories", "Activation Collision Cooking" },
		{ "IncludePath", "OculusAudioGeometryComponent.h" },
		{ "ModuleRelativePath", "Private/OculusAudioGeometryComponent.h" },
		{ "ToolTip", "* OculusAudio geometry components are used to customize an a static mesh actor's acoustic properties." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOculusAudioGeometryComponent_Statics::NewProp_IncludeChildren_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "// Mesh hierarchy optimization for both content editing and runtime performance\n// if IncludeChildren is true, children (attached) meshes will be merged\n" },
		{ "ModuleRelativePath", "Private/OculusAudioGeometryComponent.h" },
		{ "ToolTip", "Mesh hierarchy optimization for both content editing and runtime performance\nif IncludeChildren is true, children (attached) meshes will be merged" },
	};
#endif
	void Z_Construct_UClass_UOculusAudioGeometryComponent_Statics::NewProp_IncludeChildren_SetBit(void* Obj)
	{
		((UOculusAudioGeometryComponent*)Obj)->IncludeChildren = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOculusAudioGeometryComponent_Statics::NewProp_IncludeChildren = { "IncludeChildren", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UOculusAudioGeometryComponent), &Z_Construct_UClass_UOculusAudioGeometryComponent_Statics::NewProp_IncludeChildren_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOculusAudioGeometryComponent_Statics::NewProp_IncludeChildren_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioGeometryComponent_Statics::NewProp_IncludeChildren_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOculusAudioGeometryComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOculusAudioGeometryComponent_Statics::NewProp_IncludeChildren,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOculusAudioGeometryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOculusAudioGeometryComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UOculusAudioGeometryComponent_Statics::ClassParams = {
		&UOculusAudioGeometryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOculusAudioGeometryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioGeometryComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOculusAudioGeometryComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOculusAudioGeometryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOculusAudioGeometryComponent()
	{
		if (!Z_Registration_Info_UClass_UOculusAudioGeometryComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UOculusAudioGeometryComponent.OuterSingleton, Z_Construct_UClass_UOculusAudioGeometryComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UOculusAudioGeometryComponent.OuterSingleton;
	}
	template<> OCULUSAUDIO_API UClass* StaticClass<UOculusAudioGeometryComponent>()
	{
		return UOculusAudioGeometryComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOculusAudioGeometryComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UOculusAudioGeometryComponent)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioGeometryComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioGeometryComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UOculusAudioGeometryComponent, UOculusAudioGeometryComponent::StaticClass, TEXT("UOculusAudioGeometryComponent"), &Z_Registration_Info_UClass_UOculusAudioGeometryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UOculusAudioGeometryComponent), 1677257481U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioGeometryComponent_h_3319818200(TEXT("/Script/OculusAudio"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioGeometryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_Oculus_OculusAudio_Source_OculusAudio_Private_OculusAudioGeometryComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
