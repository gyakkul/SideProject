// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MoviePipelineObjectIdPass.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoviePipelineObjectIdPass() {}
// Cross Module References
	MOVIEPIPELINEMASKRENDERPASS_API UClass* Z_Construct_UClass_UMoviePipelineObjectIdRenderPass();
	MOVIEPIPELINEMASKRENDERPASS_API UClass* Z_Construct_UClass_UMoviePipelineObjectIdRenderPass_NoRegister();
	MOVIEPIPELINEMASKRENDERPASS_API UEnum* Z_Construct_UEnum_MoviePipelineMaskRenderPass_EMoviePipelineObjectIdPassIdType();
	MOVIERENDERPIPELINERENDERPASSES_API UClass* Z_Construct_UClass_UMoviePipelineImagePassBase();
	UPackage* Z_Construct_UPackage__Script_MoviePipelineMaskRenderPass();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMoviePipelineObjectIdPassIdType;
	static UEnum* EMoviePipelineObjectIdPassIdType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EMoviePipelineObjectIdPassIdType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EMoviePipelineObjectIdPassIdType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MoviePipelineMaskRenderPass_EMoviePipelineObjectIdPassIdType, (UObject*)Z_Construct_UPackage__Script_MoviePipelineMaskRenderPass(), TEXT("EMoviePipelineObjectIdPassIdType"));
		}
		return Z_Registration_Info_UEnum_EMoviePipelineObjectIdPassIdType.OuterSingleton;
	}
	template<> MOVIEPIPELINEMASKRENDERPASS_API UEnum* StaticEnum<EMoviePipelineObjectIdPassIdType>()
	{
		return EMoviePipelineObjectIdPassIdType_StaticEnum();
	}
	struct Z_Construct_UEnum_MoviePipelineMaskRenderPass_EMoviePipelineObjectIdPassIdType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_MoviePipelineMaskRenderPass_EMoviePipelineObjectIdPassIdType_Statics::Enumerators[] = {
		{ "EMoviePipelineObjectIdPassIdType::Full", (int64)EMoviePipelineObjectIdPassIdType::Full },
		{ "EMoviePipelineObjectIdPassIdType::Material", (int64)EMoviePipelineObjectIdPassIdType::Material },
		{ "EMoviePipelineObjectIdPassIdType::Actor", (int64)EMoviePipelineObjectIdPassIdType::Actor },
		{ "EMoviePipelineObjectIdPassIdType::ActorWithHierarchy", (int64)EMoviePipelineObjectIdPassIdType::ActorWithHierarchy },
		{ "EMoviePipelineObjectIdPassIdType::Folder", (int64)EMoviePipelineObjectIdPassIdType::Folder },
		{ "EMoviePipelineObjectIdPassIdType::Layer", (int64)EMoviePipelineObjectIdPassIdType::Layer },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_MoviePipelineMaskRenderPass_EMoviePipelineObjectIdPassIdType_Statics::Enum_MetaDataParams[] = {
		{ "Actor.Comment", "/** Grouped by Actor Name, all materials for a given actor are merged together, and all actors with that name are merged together as well. */" },
		{ "Actor.Name", "EMoviePipelineObjectIdPassIdType::Actor" },
		{ "Actor.ToolTip", "Grouped by Actor Name, all materials for a given actor are merged together, and all actors with that name are merged together as well." },
		{ "ActorWithHierarchy.Comment", "/** Grouped by Actor Name and Folder Hierarchy. This means actors with the same name in different folders will not be merged together. */" },
		{ "ActorWithHierarchy.Name", "EMoviePipelineObjectIdPassIdType::ActorWithHierarchy" },
		{ "ActorWithHierarchy.ToolTip", "Grouped by Actor Name and Folder Hierarchy. This means actors with the same name in different folders will not be merged together." },
		{ "BlueprintType", "true" },
		{ "Folder.Comment", "/** Grouped by Folder Name. All actors within a given folder hierarchy in the World Outliner are merged together. */" },
		{ "Folder.Name", "EMoviePipelineObjectIdPassIdType::Folder" },
		{ "Folder.ToolTip", "Grouped by Folder Name. All actors within a given folder hierarchy in the World Outliner are merged together." },
		{ "Full.Comment", "/** As much information as the renderer can provide - unique per material per primitive in the world. */" },
		{ "Full.Name", "EMoviePipelineObjectIdPassIdType::Full" },
		{ "Full.ToolTip", "As much information as the renderer can provide - unique per material per primitive in the world." },
		{ "Layer.Comment", "/** Primary Layer. This is the first layer found in the AActor::Layers array. May not do what you expect if an actor belongs to multiple layers. */" },
		{ "Layer.Name", "EMoviePipelineObjectIdPassIdType::Layer" },
		{ "Layer.ToolTip", "Primary Layer. This is the first layer found in the AActor::Layers array. May not do what you expect if an actor belongs to multiple layers." },
		{ "Material.Comment", "/** Grouped by material name. This means different objects that use the same material will be merged. */" },
		{ "Material.Name", "EMoviePipelineObjectIdPassIdType::Material" },
		{ "Material.ToolTip", "Grouped by material name. This means different objects that use the same material will be merged." },
		{ "ModuleRelativePath", "Private/MoviePipelineObjectIdPass.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MoviePipelineMaskRenderPass_EMoviePipelineObjectIdPassIdType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_MoviePipelineMaskRenderPass,
		nullptr,
		"EMoviePipelineObjectIdPassIdType",
		"EMoviePipelineObjectIdPassIdType",
		Z_Construct_UEnum_MoviePipelineMaskRenderPass_EMoviePipelineObjectIdPassIdType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_MoviePipelineMaskRenderPass_EMoviePipelineObjectIdPassIdType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_MoviePipelineMaskRenderPass_EMoviePipelineObjectIdPassIdType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_MoviePipelineMaskRenderPass_EMoviePipelineObjectIdPassIdType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_MoviePipelineMaskRenderPass_EMoviePipelineObjectIdPassIdType()
	{
		if (!Z_Registration_Info_UEnum_EMoviePipelineObjectIdPassIdType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMoviePipelineObjectIdPassIdType.InnerSingleton, Z_Construct_UEnum_MoviePipelineMaskRenderPass_EMoviePipelineObjectIdPassIdType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EMoviePipelineObjectIdPassIdType.InnerSingleton;
	}
	void UMoviePipelineObjectIdRenderPass::StaticRegisterNativesUMoviePipelineObjectIdRenderPass()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMoviePipelineObjectIdRenderPass);
	UClass* Z_Construct_UClass_UMoviePipelineObjectIdRenderPass_NoRegister()
	{
		return UMoviePipelineObjectIdRenderPass::StaticClass();
	}
	struct Z_Construct_UClass_UMoviePipelineObjectIdRenderPass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_IdType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IdType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_IdType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIncludeTranslucentObjects_MetaData[];
#endif
		static void NewProp_bIncludeTranslucentObjects_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeTranslucentObjects;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMoviePipelineObjectIdRenderPass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMoviePipelineImagePassBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MoviePipelineMaskRenderPass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineObjectIdRenderPass_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MoviePipelineObjectIdPass.h" },
		{ "ModuleRelativePath", "Private/MoviePipelineObjectIdPass.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMoviePipelineObjectIdRenderPass_Statics::NewProp_IdType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineObjectIdRenderPass_Statics::NewProp_IdType_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/MoviePipelineObjectIdPass.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMoviePipelineObjectIdRenderPass_Statics::NewProp_IdType = { "IdType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UMoviePipelineObjectIdRenderPass, IdType), Z_Construct_UEnum_MoviePipelineMaskRenderPass_EMoviePipelineObjectIdPassIdType, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineObjectIdRenderPass_Statics::NewProp_IdType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineObjectIdRenderPass_Statics::NewProp_IdType_MetaData)) }; // 1981087776
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMoviePipelineObjectIdRenderPass_Statics::NewProp_bIncludeTranslucentObjects_MetaData[] = {
		{ "Category", "Settings" },
		{ "Comment", "/** If true, translucent objects will be included in the ObjectId pass (but as an opaque layer due to limitations). False will omit translucent objects. */" },
		{ "ModuleRelativePath", "Private/MoviePipelineObjectIdPass.h" },
		{ "ToolTip", "If true, translucent objects will be included in the ObjectId pass (but as an opaque layer due to limitations). False will omit translucent objects." },
	};
#endif
	void Z_Construct_UClass_UMoviePipelineObjectIdRenderPass_Statics::NewProp_bIncludeTranslucentObjects_SetBit(void* Obj)
	{
		((UMoviePipelineObjectIdRenderPass*)Obj)->bIncludeTranslucentObjects = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMoviePipelineObjectIdRenderPass_Statics::NewProp_bIncludeTranslucentObjects = { "bIncludeTranslucentObjects", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UMoviePipelineObjectIdRenderPass), &Z_Construct_UClass_UMoviePipelineObjectIdRenderPass_Statics::NewProp_bIncludeTranslucentObjects_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineObjectIdRenderPass_Statics::NewProp_bIncludeTranslucentObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineObjectIdRenderPass_Statics::NewProp_bIncludeTranslucentObjects_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMoviePipelineObjectIdRenderPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineObjectIdRenderPass_Statics::NewProp_IdType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineObjectIdRenderPass_Statics::NewProp_IdType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMoviePipelineObjectIdRenderPass_Statics::NewProp_bIncludeTranslucentObjects,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMoviePipelineObjectIdRenderPass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMoviePipelineObjectIdRenderPass>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMoviePipelineObjectIdRenderPass_Statics::ClassParams = {
		&UMoviePipelineObjectIdRenderPass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMoviePipelineObjectIdRenderPass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineObjectIdRenderPass_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMoviePipelineObjectIdRenderPass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMoviePipelineObjectIdRenderPass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMoviePipelineObjectIdRenderPass()
	{
		if (!Z_Registration_Info_UClass_UMoviePipelineObjectIdRenderPass.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMoviePipelineObjectIdRenderPass.OuterSingleton, Z_Construct_UClass_UMoviePipelineObjectIdRenderPass_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMoviePipelineObjectIdRenderPass.OuterSingleton;
	}
	template<> MOVIEPIPELINEMASKRENDERPASS_API UClass* StaticClass<UMoviePipelineObjectIdRenderPass>()
	{
		return UMoviePipelineObjectIdRenderPass::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMoviePipelineObjectIdRenderPass);
	UMoviePipelineObjectIdRenderPass::~UMoviePipelineObjectIdRenderPass() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MoviePipelineMaskRenderPass_Source_MoviePipelineMaskRenderPass_Private_MoviePipelineObjectIdPass_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MoviePipelineMaskRenderPass_Source_MoviePipelineMaskRenderPass_Private_MoviePipelineObjectIdPass_h_Statics::EnumInfo[] = {
		{ EMoviePipelineObjectIdPassIdType_StaticEnum, TEXT("EMoviePipelineObjectIdPassIdType"), &Z_Registration_Info_UEnum_EMoviePipelineObjectIdPassIdType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1981087776U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MoviePipelineMaskRenderPass_Source_MoviePipelineMaskRenderPass_Private_MoviePipelineObjectIdPass_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMoviePipelineObjectIdRenderPass, UMoviePipelineObjectIdRenderPass::StaticClass, TEXT("UMoviePipelineObjectIdRenderPass"), &Z_Registration_Info_UClass_UMoviePipelineObjectIdRenderPass, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMoviePipelineObjectIdRenderPass), 1520809731U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MoviePipelineMaskRenderPass_Source_MoviePipelineMaskRenderPass_Private_MoviePipelineObjectIdPass_h_4141629312(TEXT("/Script/MoviePipelineMaskRenderPass"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MoviePipelineMaskRenderPass_Source_MoviePipelineMaskRenderPass_Private_MoviePipelineObjectIdPass_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MoviePipelineMaskRenderPass_Source_MoviePipelineMaskRenderPass_Private_MoviePipelineObjectIdPass_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MoviePipelineMaskRenderPass_Source_MoviePipelineMaskRenderPass_Private_MoviePipelineObjectIdPass_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_MovieScene_MoviePipelineMaskRenderPass_Source_MoviePipelineMaskRenderPass_Private_MoviePipelineObjectIdPass_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
