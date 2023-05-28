// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCOE/Nodes/CustomizableObjectNodeMaterial.h"
#include "../../Source/Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "../Public/MuCOE/CustomizableObjectEditor_Deprecated.h"
#include "MuCOE/Nodes/CustomizableObjectNode.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectNodeMaterial() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterial();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterial_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialBase();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataParameter();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataParameter_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataScalar();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataScalar_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataVector();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataVector_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialRemapPinsByName();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialRemapPinsByName_NoRegister();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodePinData();
	CUSTOMIZABLEOBJECTEDITOR_API UClass* Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByName();
	CUSTOMIZABLEOBJECTEDITOR_API UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ENodePinMode();
	CUSTOMIZABLEOBJECTEDITOR_API UEnum* Z_Construct_UEnum_CustomizableObjectEditor_EPinMode();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector();
	CUSTOMIZABLEOBJECTEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FPostEditChangePropertyDelegateParameters();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphPinReference();
	UPackage* Z_Construct_UPackage__Script_CustomizableObjectEditor();
// End Cross Module References
	void UCustomizableObjectNodeMaterialRemapPinsByName::StaticRegisterNativesUCustomizableObjectNodeMaterialRemapPinsByName()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeMaterialRemapPinsByName);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialRemapPinsByName_NoRegister()
	{
		return UCustomizableObjectNodeMaterialRemapPinsByName::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeMaterialRemapPinsByName_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeMaterialRemapPinsByName_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeRemapPinsByName,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMaterialRemapPinsByName_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Custom remap pins by name action.\n *\n * Remap pins by Texture Parameter Id. */" },
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
		{ "ToolTip", "Custom remap pins by name action.\n\nRemap pins by Texture Parameter Id." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeMaterialRemapPinsByName_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeMaterialRemapPinsByName>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeMaterialRemapPinsByName_Statics::ClassParams = {
		&UCustomizableObjectNodeMaterialRemapPinsByName::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMaterialRemapPinsByName_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMaterialRemapPinsByName_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialRemapPinsByName()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeMaterialRemapPinsByName.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeMaterialRemapPinsByName.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeMaterialRemapPinsByName_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeMaterialRemapPinsByName.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeMaterialRemapPinsByName>()
	{
		return UCustomizableObjectNodeMaterialRemapPinsByName::StaticClass();
	}
	UCustomizableObjectNodeMaterialRemapPinsByName::UCustomizableObjectNodeMaterialRemapPinsByName(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeMaterialRemapPinsByName);
	UCustomizableObjectNodeMaterialRemapPinsByName::~UCustomizableObjectNodeMaterialRemapPinsByName() {}
	void UCustomizableObjectNodeMaterialPinDataParameter::StaticRegisterNativesUCustomizableObjectNodeMaterialPinDataParameter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeMaterialPinDataParameter);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataParameter_NoRegister()
	{
		return UCustomizableObjectNodeMaterialPinDataParameter::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataParameter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParameterId_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ParameterId;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataParameter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodePinData,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataParameter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Base class for all Material Parameters. */" },
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
		{ "ToolTip", "Base class for all Material Parameters." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataParameter_Statics::NewProp_ParameterId_MetaData[] = {
		{ "Comment", "/** Texture Parameter Id. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
		{ "ToolTip", "Texture Parameter Id." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataParameter_Statics::NewProp_ParameterId = { "ParameterId", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMaterialPinDataParameter, ParameterId), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataParameter_Statics::NewProp_ParameterId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataParameter_Statics::NewProp_ParameterId_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataParameter_Statics::NewProp_ParameterId,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataParameter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeMaterialPinDataParameter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataParameter_Statics::ClassParams = {
		&UCustomizableObjectNodeMaterialPinDataParameter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataParameter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataParameter_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataParameter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataParameter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataParameter()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeMaterialPinDataParameter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeMaterialPinDataParameter.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataParameter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeMaterialPinDataParameter.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeMaterialPinDataParameter>()
	{
		return UCustomizableObjectNodeMaterialPinDataParameter::StaticClass();
	}
	UCustomizableObjectNodeMaterialPinDataParameter::UCustomizableObjectNodeMaterialPinDataParameter() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeMaterialPinDataParameter);
	UCustomizableObjectNodeMaterialPinDataParameter::~UCustomizableObjectNodeMaterialPinDataParameter() {}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENodePinMode;
	static UEnum* ENodePinMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ENodePinMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ENodePinMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableObjectEditor_ENodePinMode, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("ENodePinMode"));
		}
		return Z_Registration_Info_UEnum_ENodePinMode.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UEnum* StaticEnum<ENodePinMode>()
	{
		return ENodePinMode_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableObjectEditor_ENodePinMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableObjectEditor_ENodePinMode_Statics::Enumerators[] = {
		{ "ENodePinMode::Mutable", (int64)ENodePinMode::Mutable },
		{ "ENodePinMode::Passthrough", (int64)ENodePinMode::Passthrough },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableObjectEditor_ENodePinMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Node pin mode. All pins set to EPinMode::Default will use this this mode. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
		{ "Mutable.Name", "ENodePinMode::Mutable" },
		{ "Mutable.ToolTip", "All Material Texture Parameters go through Mutable." },
		{ "Passthrough.Name", "ENodePinMode::Passthrough" },
		{ "Passthrough.ToolTip", "All Material Texture Parameters are not modified by Mutable." },
		{ "ToolTip", "Node pin mode. All pins set to EPinMode::Default will use this this mode." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableObjectEditor_ENodePinMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		"ENodePinMode",
		"ENodePinMode",
		Z_Construct_UEnum_CustomizableObjectEditor_ENodePinMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_ENodePinMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CustomizableObjectEditor_ENodePinMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_ENodePinMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CustomizableObjectEditor_ENodePinMode()
	{
		if (!Z_Registration_Info_UEnum_ENodePinMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENodePinMode.InnerSingleton, Z_Construct_UEnum_CustomizableObjectEditor_ENodePinMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ENodePinMode.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EPinMode;
	static UEnum* EPinMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EPinMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EPinMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_CustomizableObjectEditor_EPinMode, (UObject*)Z_Construct_UPackage__Script_CustomizableObjectEditor(), TEXT("EPinMode"));
		}
		return Z_Registration_Info_UEnum_EPinMode.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UEnum* StaticEnum<EPinMode>()
	{
		return EPinMode_StaticEnum();
	}
	struct Z_Construct_UEnum_CustomizableObjectEditor_EPinMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_CustomizableObjectEditor_EPinMode_Statics::Enumerators[] = {
		{ "EPinMode::Default", (int64)EPinMode::Default },
		{ "EPinMode::Mutable", (int64)EPinMode::Mutable },
		{ "EPinMode::Passthrough", (int64)EPinMode::Passthrough },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_CustomizableObjectEditor_EPinMode_Statics::Enum_MetaDataParams[] = {
		{ "Comment", "/** Image pin, pin mode. */" },
		{ "Default.Comment", "/** Use the defined node pin mode. Does not override it. */" },
		{ "Default.Name", "EPinMode::Default" },
		{ "Default.ToolTip", "Use the defined node pin mode. Does not override it." },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
		{ "Mutable.Comment", "/** Override the node pin mode. Set it to Mutable mode. */" },
		{ "Mutable.Name", "EPinMode::Mutable" },
		{ "Mutable.ToolTip", "Override the node pin mode. Set it to Mutable mode." },
		{ "Passthrough.Comment", "/** Override the node pin mode. Set it to Pass-through mode. */" },
		{ "Passthrough.Name", "EPinMode::Passthrough" },
		{ "Passthrough.ToolTip", "Override the node pin mode. Set it to Pass-through mode." },
		{ "ToolTip", "Image pin, pin mode." },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_CustomizableObjectEditor_EPinMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
		nullptr,
		"EPinMode",
		"EPinMode",
		Z_Construct_UEnum_CustomizableObjectEditor_EPinMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_EPinMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_CustomizableObjectEditor_EPinMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_CustomizableObjectEditor_EPinMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_CustomizableObjectEditor_EPinMode()
	{
		if (!Z_Registration_Info_UEnum_EPinMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EPinMode.InnerSingleton, Z_Construct_UEnum_CustomizableObjectEditor_EPinMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EPinMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UCustomizableObjectNodeMaterial::execMeshPostEditChangeProperty)
	{
		P_GET_STRUCT_REF(FPostEditChangePropertyDelegateParameters,Z_Param_Out_Parameters);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MeshPostEditChangeProperty(Z_Param_Out_Parameters);
		P_NATIVE_END;
	}
	void UCustomizableObjectNodeMaterial::StaticRegisterNativesUCustomizableObjectNodeMaterial()
	{
		UClass* Class = UCustomizableObjectNodeMaterial::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MeshPostEditChangeProperty", &UCustomizableObjectNodeMaterial::execMeshPostEditChangeProperty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomizableObjectNodeMaterial_MeshPostEditChangeProperty_Statics
	{
		struct CustomizableObjectNodeMaterial_eventMeshPostEditChangeProperty_Parms
		{
			FPostEditChangePropertyDelegateParameters Parameters;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Parameters;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectNodeMaterial_MeshPostEditChangeProperty_Statics::NewProp_Parameters = { "Parameters", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectNodeMaterial_eventMeshPostEditChangeProperty_Parms, Parameters), Z_Construct_UScriptStruct_FPostEditChangePropertyDelegateParameters, METADATA_PARAMS(nullptr, 0) }; // 3216778700
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectNodeMaterial_MeshPostEditChangeProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectNodeMaterial_MeshPostEditChangeProperty_Statics::NewProp_Parameters,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectNodeMaterial_MeshPostEditChangeProperty_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Connected NodeStaticMesh or NodeSkeletalMesh Mesh UPROPERTY changed callback function. Sets the default material. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
		{ "ToolTip", "Connected NodeStaticMesh or NodeSkeletalMesh Mesh UPROPERTY changed callback function. Sets the default material." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectNodeMaterial_MeshPostEditChangeProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectNodeMaterial, nullptr, "MeshPostEditChangeProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectNodeMaterial_MeshPostEditChangeProperty_Statics::CustomizableObjectNodeMaterial_eventMeshPostEditChangeProperty_Parms), Z_Construct_UFunction_UCustomizableObjectNodeMaterial_MeshPostEditChangeProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectNodeMaterial_MeshPostEditChangeProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectNodeMaterial_MeshPostEditChangeProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectNodeMaterial_MeshPostEditChangeProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectNodeMaterial_MeshPostEditChangeProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectNodeMaterial_MeshPostEditChangeProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeMaterial);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterial_NoRegister()
	{
		return UCustomizableObjectNodeMaterial::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Material;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_TextureParametersMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureParametersMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_TextureParametersMode;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponentIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MeshComponentIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinsParameter_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinsParameter_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinsParameter_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PinsParameter;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PinsImagePinMode_ValueProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PinsImagePinMode_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PinsImagePinMode_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinsImagePinMode_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_PinsImagePinMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultPinModeMutable_MetaData[];
#endif
		static void NewProp_bDefaultPinModeMutable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultPinModeMutable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Images_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Images_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Images;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorParams_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorParams_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorParams;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ScalarParams_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScalarParams_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ScalarParams;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeMaterialBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomizableObjectNodeMaterial_MeshPostEditChangeProperty, "MeshPostEditChangeProperty" }, // 2337338907
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMaterial, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_TextureParametersMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_TextureParametersMode_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
		{ "ToolTip", "Set all Mateiral Texture Parameters to the specified mode. Each Texture Parameter Pin can override this mode." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_TextureParametersMode = { "TextureParametersMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMaterial, TextureParametersMode), Z_Construct_UEnum_CustomizableObjectEditor_ENodePinMode, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_TextureParametersMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_TextureParametersMode_MetaData)) }; // 2131727877
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMaterial, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_Tags_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_MeshComponentIndex_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "ClampMin", "0" },
		{ "Comment", "/** Selects which Mesh component of the Instance this material belongs to */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
		{ "ToolTip", "Selects which Mesh component of the Instance this material belongs to" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_MeshComponentIndex = { "MeshComponentIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMaterial, MeshComponentIndex), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_MeshComponentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_MeshComponentIndex_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_PinsParameter_ValueProp = { "PinsParameter", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FEdGraphPinReference, METADATA_PARAMS(nullptr, 0) }; // 1910659421
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_PinsParameter_Key_KeyProp = { "PinsParameter_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_PinsParameter_MetaData[] = {
		{ "Comment", "/** Relates a Parameter id (key) to a Pin (value). Only used to improve performance. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
		{ "ToolTip", "Relates a Parameter id (key) to a Pin (value). Only used to improve performance." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_PinsParameter = { "PinsParameter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMaterial, PinsParameter), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_PinsParameter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_PinsParameter_MetaData)) }; // 1910659421
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_PinsImagePinMode_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_PinsImagePinMode_ValueProp = { "PinsImagePinMode", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UEnum_CustomizableObjectEditor_EPinMode, METADATA_PARAMS(nullptr, 0) }; // 1944847668
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_PinsImagePinMode_Key_KeyProp = { "PinsImagePinMode_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_PinsImagePinMode_MetaData[] = {
		{ "Comment", "/** Relates an Image pin (key) to its Image Pin Mode (value). */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
		{ "ToolTip", "Relates an Image pin (key) to its Image Pin Mode (value)." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_PinsImagePinMode = { "PinsImagePinMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMaterial, PinsImagePinMode), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_PinsImagePinMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_PinsImagePinMode_MetaData)) }; // 1944847668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_bDefaultPinModeMutable_MetaData[] = {
		{ "Comment", "/** Set all pins to Mutable mode. Even so, each pin can override its behaviour. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
		{ "ToolTip", "Set all pins to Mutable mode. Even so, each pin can override its behaviour." },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_bDefaultPinModeMutable_SetBit(void* Obj)
	{
		((UCustomizableObjectNodeMaterial*)Obj)->bDefaultPinModeMutable_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_bDefaultPinModeMutable = { "bDefaultPinModeMutable", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCustomizableObjectNodeMaterial), &Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_bDefaultPinModeMutable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_bDefaultPinModeMutable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_bDefaultPinModeMutable_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_Images_Inner = { "Images", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialImage, METADATA_PARAMS(nullptr, 0) }; // 2481421481
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_Images_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_Images = { "Images", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMaterial, Images_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_Images_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_Images_MetaData)) }; // 2481421481
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_VectorParams_Inner = { "VectorParams", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialVector, METADATA_PARAMS(nullptr, 0) }; // 1181303984
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_VectorParams_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_VectorParams = { "VectorParams", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMaterial, VectorParams_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_VectorParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_VectorParams_MetaData)) }; // 1181303984
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_ScalarParams_Inner = { "ScalarParams", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectNodeMaterialScalar, METADATA_PARAMS(nullptr, 0) }; // 3025784112
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_ScalarParams_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_ScalarParams = { "ScalarParams", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMaterial, ScalarParams_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_ScalarParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_ScalarParams_MetaData)) }; // 3025784112
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_TextureParametersMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_TextureParametersMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_Tags_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_Tags,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_MeshComponentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_PinsParameter_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_PinsParameter_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_PinsParameter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_PinsImagePinMode_ValueProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_PinsImagePinMode_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_PinsImagePinMode_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_PinsImagePinMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_bDefaultPinModeMutable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_Images_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_Images,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_VectorParams_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_VectorParams,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_ScalarParams_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::NewProp_ScalarParams,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeMaterial>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::ClassParams = {
		&UCustomizableObjectNodeMaterial::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterial()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeMaterial.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeMaterial.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeMaterial_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeMaterial.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeMaterial>()
	{
		return UCustomizableObjectNodeMaterial::StaticClass();
	}
	UCustomizableObjectNodeMaterial::UCustomizableObjectNodeMaterial(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeMaterial);
	UCustomizableObjectNodeMaterial::~UCustomizableObjectNodeMaterial() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectNodeMaterial)
	void UCustomizableObjectNodeMaterialPinDataImage::StaticRegisterNativesUCustomizableObjectNodeMaterialPinDataImage()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeMaterialPinDataImage);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_NoRegister()
	{
		return UCustomizableObjectNodeMaterialPinDataImage::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PinMode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PinMode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PinMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVLayout_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_UVLayout;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceTexture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ReferenceTexture;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NodeMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_NodeMaterial;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Additional data for a Material Texture Parameter pin. */" },
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
		{ "ToolTip", "Additional data for a Material Texture Parameter pin." },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::NewProp_PinMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::NewProp_PinMode_MetaData[] = {
		{ "Comment", "/** Image pin mode. If is not default, overrides the defined node behaviour. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
		{ "ToolTip", "Image pin mode. If is not default, overrides the defined node behaviour." },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::NewProp_PinMode = { "PinMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMaterialPinDataImage, PinMode), Z_Construct_UEnum_CustomizableObjectEditor_EPinMode, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::NewProp_PinMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::NewProp_PinMode_MetaData)) }; // 1944847668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::NewProp_UVLayout_MetaData[] = {
		{ "Comment", "/** Index of the UV channel that will be used with this image.It is necessary to apply the proper layout transformations to it. */" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
		{ "ToolTip", "Index of the UV channel that will be used with this image.It is necessary to apply the proper layout transformations to it." },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::NewProp_UVLayout = { "UVLayout", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMaterialPinDataImage, UVLayout), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::NewProp_UVLayout_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::NewProp_UVLayout_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::NewProp_ReferenceTexture_MetaData[] = {
		{ "Category", "CustomizableObject" },
		{ "Comment", "/** Reference Texture used to decide the texture properties of the mutable-generated textures\n\x09* connected to this material. If null, it will try to be guessed at compile time from\n\x09* the graph. */// Required to be EditAnywhere for the selector to work.\n" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
		{ "ToolTip", "Reference Texture used to decide the texture properties of the mutable-generated textures\nconnected to this material. If null, it will try to be guessed at compile time from\nthe graph. // Required to be EditAnywhere for the selector to work." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::NewProp_ReferenceTexture = { "ReferenceTexture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMaterialPinDataImage, ReferenceTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::NewProp_ReferenceTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::NewProp_ReferenceTexture_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::NewProp_NodeMaterial_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::NewProp_NodeMaterial = { "NodeMaterial", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectNodeMaterialPinDataImage, NodeMaterial), Z_Construct_UClass_UCustomizableObjectNodeMaterial_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::NewProp_NodeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::NewProp_NodeMaterial_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::NewProp_PinMode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::NewProp_PinMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::NewProp_UVLayout,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::NewProp_ReferenceTexture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::NewProp_NodeMaterial,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeMaterialPinDataImage>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::ClassParams = {
		&UCustomizableObjectNodeMaterialPinDataImage::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeMaterialPinDataImage.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeMaterialPinDataImage.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeMaterialPinDataImage.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeMaterialPinDataImage>()
	{
		return UCustomizableObjectNodeMaterialPinDataImage::StaticClass();
	}
	UCustomizableObjectNodeMaterialPinDataImage::UCustomizableObjectNodeMaterialPinDataImage() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeMaterialPinDataImage);
	UCustomizableObjectNodeMaterialPinDataImage::~UCustomizableObjectNodeMaterialPinDataImage() {}
	void UCustomizableObjectNodeMaterialPinDataVector::StaticRegisterNativesUCustomizableObjectNodeMaterialPinDataVector()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeMaterialPinDataVector);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataVector_NoRegister()
	{
		return UCustomizableObjectNodeMaterialPinDataVector::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataVector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataVector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataVector_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Additional data for a Material Vector Parameter pin. */" },
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
		{ "ToolTip", "Additional data for a Material Vector Parameter pin." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataVector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeMaterialPinDataVector>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataVector_Statics::ClassParams = {
		&UCustomizableObjectNodeMaterialPinDataVector::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataVector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataVector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataVector()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeMaterialPinDataVector.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeMaterialPinDataVector.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataVector_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeMaterialPinDataVector.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeMaterialPinDataVector>()
	{
		return UCustomizableObjectNodeMaterialPinDataVector::StaticClass();
	}
	UCustomizableObjectNodeMaterialPinDataVector::UCustomizableObjectNodeMaterialPinDataVector() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeMaterialPinDataVector);
	UCustomizableObjectNodeMaterialPinDataVector::~UCustomizableObjectNodeMaterialPinDataVector() {}
	void UCustomizableObjectNodeMaterialPinDataScalar::StaticRegisterNativesUCustomizableObjectNodeMaterialPinDataScalar()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectNodeMaterialPinDataScalar);
	UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataScalar_NoRegister()
	{
		return UCustomizableObjectNodeMaterialPinDataScalar::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataScalar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataScalar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataParameter,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObjectEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataScalar_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/** Additional data for a Material Float Parameter pin. */" },
		{ "IncludePath", "MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
		{ "ModuleRelativePath", "Classes/MuCOE/Nodes/CustomizableObjectNodeMaterial.h" },
		{ "ToolTip", "Additional data for a Material Float Parameter pin." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataScalar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectNodeMaterialPinDataScalar>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataScalar_Statics::ClassParams = {
		&UCustomizableObjectNodeMaterialPinDataScalar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataScalar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataScalar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataScalar()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectNodeMaterialPinDataScalar.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectNodeMaterialPinDataScalar.OuterSingleton, Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataScalar_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectNodeMaterialPinDataScalar.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECTEDITOR_API UClass* StaticClass<UCustomizableObjectNodeMaterialPinDataScalar>()
	{
		return UCustomizableObjectNodeMaterialPinDataScalar::StaticClass();
	}
	UCustomizableObjectNodeMaterialPinDataScalar::UCustomizableObjectNodeMaterialPinDataScalar() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectNodeMaterialPinDataScalar);
	UCustomizableObjectNodeMaterialPinDataScalar::~UCustomizableObjectNodeMaterialPinDataScalar() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMaterial_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMaterial_h_Statics::EnumInfo[] = {
		{ ENodePinMode_StaticEnum, TEXT("ENodePinMode"), &Z_Registration_Info_UEnum_ENodePinMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2131727877U) },
		{ EPinMode_StaticEnum, TEXT("EPinMode"), &Z_Registration_Info_UEnum_EPinMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1944847668U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMaterial_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectNodeMaterialRemapPinsByName, UCustomizableObjectNodeMaterialRemapPinsByName::StaticClass, TEXT("UCustomizableObjectNodeMaterialRemapPinsByName"), &Z_Registration_Info_UClass_UCustomizableObjectNodeMaterialRemapPinsByName, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeMaterialRemapPinsByName), 3002060360U) },
		{ Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataParameter, UCustomizableObjectNodeMaterialPinDataParameter::StaticClass, TEXT("UCustomizableObjectNodeMaterialPinDataParameter"), &Z_Registration_Info_UClass_UCustomizableObjectNodeMaterialPinDataParameter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeMaterialPinDataParameter), 4246989412U) },
		{ Z_Construct_UClass_UCustomizableObjectNodeMaterial, UCustomizableObjectNodeMaterial::StaticClass, TEXT("UCustomizableObjectNodeMaterial"), &Z_Registration_Info_UClass_UCustomizableObjectNodeMaterial, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeMaterial), 1477746133U) },
		{ Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataImage, UCustomizableObjectNodeMaterialPinDataImage::StaticClass, TEXT("UCustomizableObjectNodeMaterialPinDataImage"), &Z_Registration_Info_UClass_UCustomizableObjectNodeMaterialPinDataImage, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeMaterialPinDataImage), 773153155U) },
		{ Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataVector, UCustomizableObjectNodeMaterialPinDataVector::StaticClass, TEXT("UCustomizableObjectNodeMaterialPinDataVector"), &Z_Registration_Info_UClass_UCustomizableObjectNodeMaterialPinDataVector, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeMaterialPinDataVector), 1828826168U) },
		{ Z_Construct_UClass_UCustomizableObjectNodeMaterialPinDataScalar, UCustomizableObjectNodeMaterialPinDataScalar::StaticClass, TEXT("UCustomizableObjectNodeMaterialPinDataScalar"), &Z_Registration_Info_UClass_UCustomizableObjectNodeMaterialPinDataScalar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectNodeMaterialPinDataScalar), 2980052561U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMaterial_h_1243750015(TEXT("/Script/CustomizableObjectEditor"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMaterial_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMaterial_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMaterial_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObjectEditor_Classes_MuCOE_Nodes_CustomizableObjectNodeMaterial_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
