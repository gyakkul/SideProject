// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Private/ComposurePostProcessBlendable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeComposurePostProcessBlendable() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_UComposurePostProcessBlendable();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposurePostProcessBlendable_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposurePostProcessPass_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_UBlendableInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	void UComposurePostProcessBlendable::StaticRegisterNativesUComposurePostProcessBlendable()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UComposurePostProcessBlendable);
	UClass* Z_Construct_UClass_UComposurePostProcessBlendable_NoRegister()
	{
		return UComposurePostProcessBlendable::StaticClass();
	}
	struct Z_Construct_UClass_UComposurePostProcessBlendable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UComposurePostProcessBlendable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposurePostProcessBlendable_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Private blendable interface for  UComposurePostProcessPass.\n */" },
		{ "IncludePath", "ComposurePostProcessBlendable.h" },
		{ "ModuleRelativePath", "Private/ComposurePostProcessBlendable.h" },
		{ "NotBlueprintType", "true" },
		{ "ToolTip", "Private blendable interface for  UComposurePostProcessPass." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UComposurePostProcessBlendable_Statics::NewProp_Target_MetaData[] = {
		{ "Comment", "// Current player camera manager the target is bind on.\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/ComposurePostProcessBlendable.h" },
		{ "ToolTip", "Current player camera manager the target is bind on." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UComposurePostProcessBlendable_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0044000000082008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UComposurePostProcessBlendable, Target), Z_Construct_UClass_UComposurePostProcessPass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UComposurePostProcessBlendable_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UComposurePostProcessBlendable_Statics::NewProp_Target_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UComposurePostProcessBlendable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UComposurePostProcessBlendable_Statics::NewProp_Target,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UComposurePostProcessBlendable_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UBlendableInterface_NoRegister, (int32)VTABLE_OFFSET(UComposurePostProcessBlendable, IBlendableInterface), false },  // 3766320818
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UComposurePostProcessBlendable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UComposurePostProcessBlendable>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UComposurePostProcessBlendable_Statics::ClassParams = {
		&UComposurePostProcessBlendable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UComposurePostProcessBlendable_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UComposurePostProcessBlendable_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UComposurePostProcessBlendable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UComposurePostProcessBlendable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UComposurePostProcessBlendable()
	{
		if (!Z_Registration_Info_UClass_UComposurePostProcessBlendable.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UComposurePostProcessBlendable.OuterSingleton, Z_Construct_UClass_UComposurePostProcessBlendable_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UComposurePostProcessBlendable.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<UComposurePostProcessBlendable>()
	{
		return UComposurePostProcessBlendable::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UComposurePostProcessBlendable);
	UComposurePostProcessBlendable::~UComposurePostProcessBlendable() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposurePostProcessBlendable_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposurePostProcessBlendable_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UComposurePostProcessBlendable, UComposurePostProcessBlendable::StaticClass, TEXT("UComposurePostProcessBlendable"), &Z_Registration_Info_UClass_UComposurePostProcessBlendable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UComposurePostProcessBlendable), 2847135385U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposurePostProcessBlendable_h_4145653281(TEXT("/Script/Composure"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposurePostProcessBlendable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Private_ComposurePostProcessBlendable_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
