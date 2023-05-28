// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSphylElem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMatrix();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKShapeElem();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FKSphylElem();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References

static_assert(std::is_polymorphic<FKSphylElem>() == std::is_polymorphic<FKShapeElem>(), "USTRUCT FKSphylElem cannot be polymorphic unless super FKShapeElem is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KSphylElem;
class UScriptStruct* FKSphylElem::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KSphylElem.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KSphylElem.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKSphylElem, (UObject*)Z_Construct_UPackage__Script_Engine(), TEXT("KSphylElem"));
	}
	return Z_Registration_Info_UScriptStruct_KSphylElem.OuterSingleton;
}
template<> ENGINE_API UScriptStruct* StaticStruct<FKSphylElem>()
{
	return FKSphylElem::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKSphylElem_Statics
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
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Orientation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Orientation;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Length_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Length;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKSphylElem_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Capsule shape used for collision. Z axis is capsule axis. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/SphylElem.h" },
		{ "ToolTip", "Capsule shape used for collision. Z axis is capsule axis." },
	};
#endif
	void* Z_Construct_UScriptStruct_FKSphylElem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKSphylElem>();
	}
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_TM_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/SphylElem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_TM = { "TM", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKSphylElem, TM_DEPRECATED), Z_Construct_UScriptStruct_FMatrix, METADATA_PARAMS(Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_TM_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_TM_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_Orientation_MetaData[] = {
		{ "ModuleRelativePath", "Classes/PhysicsEngine/SphylElem.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKSphylElem, Orientation_DEPRECATED), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_Orientation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_Orientation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_Center_MetaData[] = {
		{ "Category", "Capsule" },
		{ "Comment", "/** Position of the capsule's origin */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/SphylElem.h" },
		{ "ToolTip", "Position of the capsule's origin" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKSphylElem, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_Center_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_Center_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Capsule" },
		{ "ClampMax", "360" },
		{ "ClampMin", "-360" },
		{ "Comment", "/** Rotation of the capsule */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/SphylElem.h" },
		{ "ToolTip", "Rotation of the capsule" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKSphylElem, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Capsule" },
		{ "Comment", "/** Radius of the capsule */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/SphylElem.h" },
		{ "ToolTip", "Radius of the capsule" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKSphylElem, Radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_Radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_Length_MetaData[] = {
		{ "Category", "Capsule" },
		{ "Comment", "/** This is of line-segment ie. add Radius to both ends to find total length. */" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/SphylElem.h" },
		{ "ToolTip", "This is of line-segment ie. add Radius to both ends to find total length." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_Length = { "Length", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKSphylElem, Length), METADATA_PARAMS(Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_Length_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_Length_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKSphylElem_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_TM,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_Orientation,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_Center,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKSphylElem_Statics::NewProp_Length,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKSphylElem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
		Z_Construct_UScriptStruct_FKShapeElem,
		&NewStructOps,
		"KSphylElem",
		sizeof(FKSphylElem),
		alignof(FKSphylElem),
		Z_Construct_UScriptStruct_FKSphylElem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKSphylElem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKSphylElem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKSphylElem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKSphylElem()
	{
		if (!Z_Registration_Info_UScriptStruct_KSphylElem.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KSphylElem.InnerSingleton, Z_Construct_UScriptStruct_FKSphylElem_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KSphylElem.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SphylElem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SphylElem_h_Statics::ScriptStructInfo[] = {
		{ FKSphylElem::StaticStruct, Z_Construct_UScriptStruct_FKSphylElem_Statics::NewStructOps, TEXT("KSphylElem"), &Z_Registration_Info_UScriptStruct_KSphylElem, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKSphylElem), 1890108108U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SphylElem_h_3730785048(TEXT("/Script/Engine"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SphylElem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_SphylElem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
