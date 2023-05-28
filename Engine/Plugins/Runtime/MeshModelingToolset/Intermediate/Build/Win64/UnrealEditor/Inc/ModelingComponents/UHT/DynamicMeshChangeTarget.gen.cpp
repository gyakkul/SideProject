// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Changes/DynamicMeshChangeTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDynamicMeshChangeTarget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	GEOMETRYFRAMEWORK_API UClass* Z_Construct_UClass_UMeshReplacementCommandChangeTarget_NoRegister();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshReplacementChangeTarget();
	MODELINGCOMPONENTS_API UClass* Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_NoRegister();
	UPackage* Z_Construct_UPackage__Script_ModelingComponents();
// End Cross Module References
	void UDynamicMeshReplacementChangeTarget::StaticRegisterNativesUDynamicMeshReplacementChangeTarget()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDynamicMeshReplacementChangeTarget);
	UClass* Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_NoRegister()
	{
		return UDynamicMeshReplacementChangeTarget::StaticClass();
	}
	struct Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ModelingComponents,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Bare bones wrapper of FDynamicMesh3 that supports MeshReplacementChange-based updates.  Shares the mesh ptr with the MeshReplacementChange objects, so it must not be changed directly\n * TODO: also support other MeshChange objects (by making a copy of the mesh when applying these changes)\n */" },
		{ "IncludePath", "Changes/DynamicMeshChangeTarget.h" },
		{ "ModuleRelativePath", "Public/Changes/DynamicMeshChangeTarget.h" },
		{ "ToolTip", "Bare bones wrapper of FDynamicMesh3 that supports MeshReplacementChange-based updates.  Shares the mesh ptr with the MeshReplacementChange objects, so it must not be changed directly\nTODO: also support other MeshChange objects (by making a copy of the mesh when applying these changes)" },
	};
#endif
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UMeshReplacementCommandChangeTarget_NoRegister, (int32)VTABLE_OFFSET(UDynamicMeshReplacementChangeTarget, IMeshReplacementCommandChangeTarget), false },  // 2403131168
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDynamicMeshReplacementChangeTarget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_Statics::ClassParams = {
		&UDynamicMeshReplacementChangeTarget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDynamicMeshReplacementChangeTarget()
	{
		if (!Z_Registration_Info_UClass_UDynamicMeshReplacementChangeTarget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDynamicMeshReplacementChangeTarget.OuterSingleton, Z_Construct_UClass_UDynamicMeshReplacementChangeTarget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDynamicMeshReplacementChangeTarget.OuterSingleton;
	}
	template<> MODELINGCOMPONENTS_API UClass* StaticClass<UDynamicMeshReplacementChangeTarget>()
	{
		return UDynamicMeshReplacementChangeTarget::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDynamicMeshReplacementChangeTarget);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Changes_DynamicMeshChangeTarget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Changes_DynamicMeshChangeTarget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDynamicMeshReplacementChangeTarget, UDynamicMeshReplacementChangeTarget::StaticClass, TEXT("UDynamicMeshReplacementChangeTarget"), &Z_Registration_Info_UClass_UDynamicMeshReplacementChangeTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDynamicMeshReplacementChangeTarget), 1658040743U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Changes_DynamicMeshChangeTarget_h_3275326344(TEXT("/Script/ModelingComponents"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Changes_DynamicMeshChangeTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MeshModelingToolset_Source_ModelingComponents_Public_Changes_DynamicMeshChangeTarget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
