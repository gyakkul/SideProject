// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphereElem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKShapeElem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKSphereElem();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FKSphereElem>() == std::is_polymorphic<FKShapeElem>(), "USTRUCT FKSphereElem cannot be polymorphic unless super FKShapeElem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KSphereElem;
class UScriptStruct* FKSphereElem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KSphereElem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KSphereElem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKSphereElem, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("KSphereElem"));
	}
	return Z_Registration_Info_UScriptStruct_KSphereElem.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FKSphereElem>()
{
	return FKSphereElem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKSphereElem_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TM_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TM;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKSphereElem_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Sphere shape used for collision */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/SphereElem.h" },
		{ "ToolTip", "Sphere shape used for collision" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKSphereElem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKSphereElem>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKSphereElem_Statics::NewProp_TM_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/SphereElem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKSphereElem_Statics::NewProp_TM = { "TM", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKSphereElem, TM_DEPRECATED), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UScriptStruct_FKSphereElem_Statics::NewProp_TM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKSphereElem_Statics::NewProp_TM_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKSphereElem_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "Sphere" },
		{ "Comment", "/** Position of the sphere's origin */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/SphereElem.h" },
		{ "ToolTip", "Position of the sphere's origin" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKSphereElem_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKSphereElem, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FKSphereElem_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKSphereElem_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKSphereElem_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Sphere" },
		{ "Comment", "/** Radius of the sphere */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/SphereElem.h" },
		{ "ToolTip", "Radius of the sphere" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKSphereElem_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKSphereElem, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FKSphereElem_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKSphereElem_Statics::NewProp_Radius_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKSphereElem_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKSphereElem_Statics::NewProp_TM,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKSphereElem_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKSphereElem_Statics::NewProp_Radius,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKSphereElem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FKShapeElem,
		&NewStructOps,
		"KSphereElem",
		sizeof(FKSphereElem),
		alignof(FKSphereElem),
		Z_Construct_UScriptStruct_FKSphereElem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKSphereElem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKSphereElem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKSphereElem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKSphereElem()
	{
		if (!Z_Registration_Info_UScriptStruct_KSphereElem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KSphereElem.InnerSingleton, Z_Construct_UScriptStruct_FKSphereElem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KSphereElem.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SphereElem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SphereElem_h_Statics::ScriptStructInfo[] = {
		{ FKSphereElem::StaticStruct, Z_Construct_UScriptStruct_FKSphereElem_Statics::NewStructOps, TEXT("KSphereElem"), &Z_Registration_Info_UScriptStruct_KSphereElem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKSphereElem), 3923825620U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SphereElem_h_1656170762(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SphereElem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SphereElem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
