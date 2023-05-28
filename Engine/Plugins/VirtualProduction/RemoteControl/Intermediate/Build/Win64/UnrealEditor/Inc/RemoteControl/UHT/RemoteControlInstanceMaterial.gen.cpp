// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RemoteControlInstanceMaterial.h"
#include "../../Source/Runtime/Engine/Public/MaterialTypes.h"
#include "RemoteControlFieldPath.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRemoteControlInstanceMaterial() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FSoftObjectPath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialParameterInfo();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRCFieldPathInfo();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial();
	REMOTECONTROL_API UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlProperty();
	UPackage* Z_Construct_UPackage__Script_RemoteControl();
// End Cross Module References

static_assert(std::is_polymorphic<FRemoteControlInstanceMaterial>() == std::is_polymorphic<FRemoteControlProperty>(), "USTRUCT FRemoteControlInstanceMaterial cannot be polymorphic unless super FRemoteControlProperty is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RemoteControlInstanceMaterial;
class UScriptStruct* FRemoteControlInstanceMaterial::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RemoteControlInstanceMaterial.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RemoteControlInstanceMaterial.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial, (UObject*)Z_Construct_UPackage__Script_RemoteControl(), TEXT("RemoteControlInstanceMaterial"));
	}
	return Z_Registration_Info_UScriptStruct_RemoteControlInstanceMaterial.OuterSingleton;
}
template<> REMOTECONTROL_API UScriptStruct* StaticStruct<FRemoteControlInstanceMaterial>()
{
	return FRemoteControlInstanceMaterial::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPtrPropertyParams NewProp_OriginalClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalFieldPathInfo_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalFieldPathInfo;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstancePath_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InstancePath;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Represents a material instance property that has been exposed to remote control.\n */" },
		{ "ModuleRelativePath", "Public/RemoteControlInstanceMaterial.h" },
		{ "ToolTip", "Represents a material instance property that has been exposed to remote control." },
	};
#endif
	void* Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRemoteControlInstanceMaterial>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::NewProp_OriginalClass_MetaData[] = {
		{ "Comment", "/** Stores original binding class */" },
		{ "ModuleRelativePath", "Public/RemoteControlInstanceMaterial.h" },
		{ "ToolTip", "Stores original binding class" },
	};
#endif
	const UECodeGen_Private::FClassPtrPropertyParams Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::NewProp_OriginalClass = { "OriginalClass", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlInstanceMaterial, OriginalClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::NewProp_OriginalClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::NewProp_OriginalClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::NewProp_ParameterInfo_MetaData[] = {
		{ "Comment", "/** Stores original material parameter info */" },
		{ "ModuleRelativePath", "Public/RemoteControlInstanceMaterial.h" },
		{ "ToolTip", "Stores original material parameter info" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::NewProp_ParameterInfo = { "ParameterInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlInstanceMaterial, ParameterInfo), Z_Construct_UScriptStruct_FMaterialParameterInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::NewProp_ParameterInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::NewProp_ParameterInfo_MetaData)) }; // 1695244105
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::NewProp_OriginalFieldPathInfo_MetaData[] = {
		{ "Comment", "/** Store original property path */" },
		{ "ModuleRelativePath", "Public/RemoteControlInstanceMaterial.h" },
		{ "ToolTip", "Store original property path" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::NewProp_OriginalFieldPathInfo = { "OriginalFieldPathInfo", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlInstanceMaterial, OriginalFieldPathInfo), Z_Construct_UScriptStruct_FRCFieldPathInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::NewProp_OriginalFieldPathInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::NewProp_OriginalFieldPathInfo_MetaData)) }; // 1811249294
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::NewProp_InstancePath_MetaData[] = {
		{ "Comment", "/** Store path to Material Instance */" },
		{ "ModuleRelativePath", "Public/RemoteControlInstanceMaterial.h" },
		{ "ToolTip", "Store path to Material Instance" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::NewProp_InstancePath = { "InstancePath", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FRemoteControlInstanceMaterial, InstancePath), Z_Construct_UScriptStruct_FSoftObjectPath, METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::NewProp_InstancePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::NewProp_InstancePath_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::NewProp_OriginalClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::NewProp_ParameterInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::NewProp_OriginalFieldPathInfo,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::NewProp_InstancePath,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RemoteControl,
		Z_Construct_UScriptStruct_FRemoteControlProperty,
		&NewStructOps,
		"RemoteControlInstanceMaterial",
		sizeof(FRemoteControlInstanceMaterial),
		alignof(FRemoteControlInstanceMaterial),
		Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial()
	{
		if (!Z_Registration_Info_UScriptStruct_RemoteControlInstanceMaterial.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RemoteControlInstanceMaterial.InnerSingleton, Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_RemoteControlInstanceMaterial.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlInstanceMaterial_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlInstanceMaterial_h_Statics::ScriptStructInfo[] = {
		{ FRemoteControlInstanceMaterial::StaticStruct, Z_Construct_UScriptStruct_FRemoteControlInstanceMaterial_Statics::NewStructOps, TEXT("RemoteControlInstanceMaterial"), &Z_Registration_Info_UScriptStruct_RemoteControlInstanceMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRemoteControlInstanceMaterial), 4094742837U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlInstanceMaterial_h_2890036973(TEXT("/Script/RemoteControl"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlInstanceMaterial_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_RemoteControl_Source_RemoteControl_Public_RemoteControlInstanceMaterial_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
