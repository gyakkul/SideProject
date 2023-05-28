// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../Public/NiagaraComponentRendererProperties.h"
#include "../Public/NiagaraCommon.h"
#include "../Public/NiagaraTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNiagaraComponentRendererProperties() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponentRendererProperties();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraComponentRendererProperties_NoRegister();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraRendererProperties();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraTypeDefinition();
	NIAGARA_API UScriptStruct* Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding();
	UPackage* Z_Construct_UPackage__Script_Niagara();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_NiagaraComponentPropertyBinding;
class UScriptStruct* FNiagaraComponentPropertyBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_NiagaraComponentPropertyBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_NiagaraComponentPropertyBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding, (UObject*)Z_Construct_UPackage__Script_Niagara(), TEXT("NiagaraComponentPropertyBinding"));
	}
	return Z_Registration_Info_UScriptStruct_NiagaraComponentPropertyBinding.OuterSingleton;
}
template<> NIAGARA_API UScriptStruct* StaticStruct<FNiagaraComponentPropertyBinding>()
{
	return FNiagaraComponentPropertyBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttributeBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_AttributeBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_PropertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyType_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetadataSetterName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_MetadataSetterName;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertySetterParameterDefaults_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PropertySetterParameterDefaults_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertySetterParameterDefaults_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PropertySetterParameterDefaults;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNiagaraComponentPropertyBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_AttributeBinding_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_AttributeBinding = { "AttributeBinding", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraComponentPropertyBinding, AttributeBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_AttributeBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_AttributeBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertyName_MetaData[] = {
		{ "Comment", "/** Actual name of the property we are bound to */" },
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
		{ "ToolTip", "Actual name of the property we are bound to" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertyName = { "PropertyName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraComponentPropertyBinding, PropertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertyType_MetaData[] = {
		{ "Comment", "/** Type of the target property (used for auto-conversion) */" },
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
		{ "ToolTip", "Type of the target property (used for auto-conversion)" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertyType = { "PropertyType", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraComponentPropertyBinding, PropertyType), Z_Construct_UScriptStruct_FNiagaraTypeDefinition, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertyType_MetaData)) }; // 1791563344
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_MetadataSetterName_MetaData[] = {
		{ "Comment", "/** (Optional) name of the property setter as defined in the metadata */" },
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
		{ "ToolTip", "(Optional) name of the property setter as defined in the metadata" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_MetadataSetterName = { "MetadataSetterName", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraComponentPropertyBinding, MetadataSetterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_MetadataSetterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_MetadataSetterName_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertySetterParameterDefaults_ValueProp = { "PropertySetterParameterDefaults", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertySetterParameterDefaults_Key_KeyProp = { "PropertySetterParameterDefaults_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertySetterParameterDefaults_MetaData[] = {
		{ "Comment", "/** (Optional) If we have a setter with more than one parameter, this holds the default values of any optional function parameters */" },
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
		{ "ToolTip", "(Optional) If we have a setter with more than one parameter, this holds the default values of any optional function parameters" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertySetterParameterDefaults = { "PropertySetterParameterDefaults", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FNiagaraComponentPropertyBinding, PropertySetterParameterDefaults), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertySetterParameterDefaults_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertySetterParameterDefaults_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_AttributeBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertyType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_MetadataSetterName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertySetterParameterDefaults_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertySetterParameterDefaults_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewProp_PropertySetterParameterDefaults,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
		nullptr,
		&NewStructOps,
		"NiagaraComponentPropertyBinding",
		sizeof(FNiagaraComponentPropertyBinding),
		alignof(FNiagaraComponentPropertyBinding),
		Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_NiagaraComponentPropertyBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_NiagaraComponentPropertyBinding.InnerSingleton, Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_NiagaraComponentPropertyBinding.InnerSingleton;
	}
	void UNiagaraComponentRendererProperties::StaticRegisterNativesUNiagaraComponentRendererProperties()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UNiagaraComponentRendererProperties);
	UClass* Z_Construct_UClass_UNiagaraComponentRendererProperties_NoRegister()
	{
		return UNiagaraComponentRendererProperties::StaticClass();
	}
	struct Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_ComponentType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentCountLimit_MetaData[];
#endif
		static const UECodeGen_Private::FUInt32PropertyParams NewProp_ComponentCountLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EnabledBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_EnabledBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererVisibilityTagBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RendererVisibilityTagBinding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAssignComponentsOnParticleID_MetaData[];
#endif
		static void NewProp_bAssignComponentsOnParticleID_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAssignComponentsOnParticleID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreateComponentFirstParticleFrame_MetaData[];
#endif
		static void NewProp_bCreateComponentFirstParticleFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreateComponentFirstParticleFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyActivateNewlyAquiredComponents_MetaData[];
#endif
		static void NewProp_bOnlyActivateNewlyAquiredComponents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyActivateNewlyAquiredComponents;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVisualizeComponents_MetaData[];
#endif
		static void NewProp_bVisualizeComponents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisualizeComponents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOnlyCreateComponentsOnParticleSpawn_MetaData[];
#endif
		static void NewProp_bOnlyCreateComponentsOnParticleSpawn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOnlyCreateComponentsOnParticleSpawn;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RendererVisibility_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_RendererVisibility;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TemplateComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TemplateComponent;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PropertyBindings_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PropertyBindings_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PropertyBindings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNiagaraRendererProperties,
		(UObject* (*)())Z_Construct_UPackage__Script_Niagara,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::Class_MetaDataParams[] = {
		{ "DisplayName", "Component Renderer" },
		{ "IncludePath", "NiagaraComponentRendererProperties.h" },
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_ComponentType_MetaData[] = {
		{ "Category", "Component Rendering" },
		{ "Comment", "/** The scene component class to instantiate */" },
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
		{ "ToolTip", "The scene component class to instantiate" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_ComponentType = { "ComponentType", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraComponentRendererProperties, ComponentType), Z_Construct_UClass_UClass, Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_ComponentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_ComponentType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_ComponentCountLimit_MetaData[] = {
		{ "Category", "Component Rendering" },
		{ "ClampMin", "1" },
		{ "Comment", "/** The max number of components that this emitter will spawn or update each frame. */" },
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
		{ "ToolTip", "The max number of components that this emitter will spawn or update each frame." },
	};
#endif
	const UECodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_ComponentCountLimit = { "ComponentCountLimit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraComponentRendererProperties, ComponentCountLimit), METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_ComponentCountLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_ComponentCountLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_EnabledBinding_MetaData[] = {
		{ "Category", "Component Rendering" },
		{ "Comment", "/** Which attribute should we use to check if component rendering should be enabled for a particle? This can be used to control the spawn-rate on a per-particle basis. */" },
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use to check if component rendering should be enabled for a particle? This can be used to control the spawn-rate on a per-particle basis." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_EnabledBinding = { "EnabledBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraComponentRendererProperties, EnabledBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_EnabledBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_EnabledBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_RendererVisibilityTagBinding_MetaData[] = {
		{ "Category", "Component Rendering" },
		{ "Comment", "/** Which attribute should we use to check if component rendering should be enabled for a particle? This can be used to control the spawn-rate on a per-particle basis. */" },
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
		{ "ToolTip", "Which attribute should we use to check if component rendering should be enabled for a particle? This can be used to control the spawn-rate on a per-particle basis." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_RendererVisibilityTagBinding = { "RendererVisibilityTagBinding", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraComponentRendererProperties, RendererVisibilityTagBinding), Z_Construct_UScriptStruct_FNiagaraVariableAttributeBinding, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_RendererVisibilityTagBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_RendererVisibilityTagBinding_MetaData)) }; // 2514448469
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bAssignComponentsOnParticleID_MetaData[] = {
		{ "Category", "Component Rendering" },
		{ "Comment", "/** If true then components will not be automatically assigned to the first particle available, but try to stick to the same particle based on its unique id.\n\x09 * Disabling this option is faster, but a particle can get a different component each tick, which can lead to problems with for example motion blur. */" },
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
		{ "ToolTip", "If true then components will not be automatically assigned to the first particle available, but try to stick to the same particle based on its unique id.\nDisabling this option is faster, but a particle can get a different component each tick, which can lead to problems with for example motion blur." },
	};
#endif
	void Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bAssignComponentsOnParticleID_SetBit(void* Obj)
	{
		((UNiagaraComponentRendererProperties*)Obj)->bAssignComponentsOnParticleID = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bAssignComponentsOnParticleID = { "bAssignComponentsOnParticleID", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraComponentRendererProperties), &Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bAssignComponentsOnParticleID_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bAssignComponentsOnParticleID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bAssignComponentsOnParticleID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bCreateComponentFirstParticleFrame_MetaData[] = {
		{ "Category", "Component Rendering" },
		{ "Comment", "/** If true then new components can only be created on newly spawned particles. If a particle is not able to create a component on it's first frame (e.g. because the component\n\x09 * limit was reached) then it will be blocked from spawning a component on subsequent frames. */" },
		{ "DisplayName", "Only Create Components on Particle Spawn" },
		{ "EditCondition", "bAssignComponentsOnParticleID" },
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
		{ "ToolTip", "If true then new components can only be created on newly spawned particles. If a particle is not able to create a component on it's first frame (e.g. because the component\nlimit was reached) then it will be blocked from spawning a component on subsequent frames." },
	};
#endif
	void Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bCreateComponentFirstParticleFrame_SetBit(void* Obj)
	{
		((UNiagaraComponentRendererProperties*)Obj)->bCreateComponentFirstParticleFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bCreateComponentFirstParticleFrame = { "bCreateComponentFirstParticleFrame", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraComponentRendererProperties), &Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bCreateComponentFirstParticleFrame_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bCreateComponentFirstParticleFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bCreateComponentFirstParticleFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bOnlyActivateNewlyAquiredComponents_MetaData[] = {
		{ "Category", "Component Rendering" },
		{ "Comment", "/** \n\x09If true then components will only be activated when newly acquired. e.g. on particle spawn or when the particle enables/disables the component.\n\x09If false, components will be always kept active while they are used by an enabled particle.\n\x09This can be useful for component types that can internally activate and deactivate during their lifetimes while still being used by an enabled particle.\n\x09""For example NiagaraComponents that deactivate/reactivate according to scalability settings.\n\x09This setting is only valid when bAssignComponentsOnParticleID is true.\n\x09*/" },
		{ "EditCondition", "bAssignComponentsOnParticleID" },
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
		{ "ToolTip", "If true then components will only be activated when newly acquired. e.g. on particle spawn or when the particle enables/disables the component.\nIf false, components will be always kept active while they are used by an enabled particle.\nThis can be useful for component types that can internally activate and deactivate during their lifetimes while still being used by an enabled particle.\nFor example NiagaraComponents that deactivate/reactivate according to scalability settings.\nThis setting is only valid when bAssignComponentsOnParticleID is true." },
	};
#endif
	void Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bOnlyActivateNewlyAquiredComponents_SetBit(void* Obj)
	{
		((UNiagaraComponentRendererProperties*)Obj)->bOnlyActivateNewlyAquiredComponents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bOnlyActivateNewlyAquiredComponents = { "bOnlyActivateNewlyAquiredComponents", nullptr, (EPropertyFlags)0x0010040000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraComponentRendererProperties), &Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bOnlyActivateNewlyAquiredComponents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bOnlyActivateNewlyAquiredComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bOnlyActivateNewlyAquiredComponents_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bVisualizeComponents_MetaData[] = {
		{ "Category", "Component Rendering" },
		{ "Comment", "/** If true then the editor visualization is enabled for the component; has no effect in-game. */" },
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
		{ "ToolTip", "If true then the editor visualization is enabled for the component; has no effect in-game." },
	};
#endif
	void Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bVisualizeComponents_SetBit(void* Obj)
	{
		((UNiagaraComponentRendererProperties*)Obj)->bVisualizeComponents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bVisualizeComponents = { "bVisualizeComponents", nullptr, (EPropertyFlags)0x0010040800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraComponentRendererProperties), &Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bVisualizeComponents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bVisualizeComponents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bVisualizeComponents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bOnlyCreateComponentsOnParticleSpawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
	};
#endif
	void Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bOnlyCreateComponentsOnParticleSpawn_SetBit(void* Obj)
	{
		((UNiagaraComponentRendererProperties*)Obj)->bOnlyCreateComponentsOnParticleSpawn_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bOnlyCreateComponentsOnParticleSpawn = { "bOnlyCreateComponentsOnParticleSpawn", nullptr, (EPropertyFlags)0x0010000820000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UNiagaraComponentRendererProperties), &Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bOnlyCreateComponentsOnParticleSpawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bOnlyCreateComponentsOnParticleSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bOnlyCreateComponentsOnParticleSpawn_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_RendererVisibility_MetaData[] = {
		{ "Category", "Component Rendering" },
		{ "Comment", "/** If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer. */" },
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
		{ "ToolTip", "If a render visibility tag is present, particles whose tag matches this value will be visible in this renderer." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_RendererVisibility = { "RendererVisibility", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraComponentRendererProperties, RendererVisibility), METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_RendererVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_RendererVisibility_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_TemplateComponent_MetaData[] = {
		{ "Category", "Component Properties" },
		{ "Comment", "/** The object template used to create new components at runtime. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
		{ "ToolTip", "The object template used to create new components at runtime." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_TemplateComponent = { "TemplateComponent", nullptr, (EPropertyFlags)0x0016000000080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraComponentRendererProperties, TemplateComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_TemplateComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_TemplateComponent_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_PropertyBindings_Inner = { "PropertyBindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding, METADATA_PARAMS(nullptr, 0) }; // 336427545
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_PropertyBindings_MetaData[] = {
		{ "ModuleRelativePath", "Public/NiagaraComponentRendererProperties.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_PropertyBindings = { "PropertyBindings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UNiagaraComponentRendererProperties, PropertyBindings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_PropertyBindings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_PropertyBindings_MetaData)) }; // 336427545
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_ComponentType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_ComponentCountLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_EnabledBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_RendererVisibilityTagBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bAssignComponentsOnParticleID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bCreateComponentFirstParticleFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bOnlyActivateNewlyAquiredComponents,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bVisualizeComponents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_bOnlyCreateComponentsOnParticleSpawn,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_RendererVisibility,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_TemplateComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_PropertyBindings_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::NewProp_PropertyBindings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNiagaraComponentRendererProperties>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::ClassParams = {
		&UNiagaraComponentRendererProperties::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::PropPointers),
		0,
		0x008810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNiagaraComponentRendererProperties()
	{
		if (!Z_Registration_Info_UClass_UNiagaraComponentRendererProperties.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UNiagaraComponentRendererProperties.OuterSingleton, Z_Construct_UClass_UNiagaraComponentRendererProperties_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UNiagaraComponentRendererProperties.OuterSingleton;
	}
	template<> NIAGARA_API UClass* StaticClass<UNiagaraComponentRendererProperties>()
	{
		return UNiagaraComponentRendererProperties::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNiagaraComponentRendererProperties);
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentRendererProperties_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentRendererProperties_h_Statics::ScriptStructInfo[] = {
		{ FNiagaraComponentPropertyBinding::StaticStruct, Z_Construct_UScriptStruct_FNiagaraComponentPropertyBinding_Statics::NewStructOps, TEXT("NiagaraComponentPropertyBinding"), &Z_Registration_Info_UScriptStruct_NiagaraComponentPropertyBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FNiagaraComponentPropertyBinding), 336427545U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentRendererProperties_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UNiagaraComponentRendererProperties, UNiagaraComponentRendererProperties::StaticClass, TEXT("UNiagaraComponentRendererProperties"), &Z_Registration_Info_UClass_UNiagaraComponentRendererProperties, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UNiagaraComponentRendererProperties), 1351176187U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentRendererProperties_h_2773935809(TEXT("/Script/Niagara"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentRendererProperties_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentRendererProperties_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentRendererProperties_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_FX_Niagara_Source_Niagara_Public_NiagaraComponentRendererProperties_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
