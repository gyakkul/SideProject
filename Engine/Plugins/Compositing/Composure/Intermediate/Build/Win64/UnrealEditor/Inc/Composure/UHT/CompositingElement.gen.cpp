// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CompositingElement.h"
#include "../Public/CompositingElements/CompositingMaterialPass.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCompositingElement() {}
// Cross Module References
	COMPOSURE_API UClass* Z_Construct_UClass_ACompositingElement();
	COMPOSURE_API UClass* Z_Construct_UClass_ACompositingElement_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_AComposurePipelineBaseActor();
	COMPOSURE_API UClass* Z_Construct_UClass_UAlphaTransformPass_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompImageColorPickerInterface_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementInput_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementOutput_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementPass_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UCompositingElementTransform_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposureCompositingTargetComponent_NoRegister();
	COMPOSURE_API UClass* Z_Construct_UClass_UComposurePostProcessingPassProxy_NoRegister();
	COMPOSURE_API UEnum* Z_Construct_UEnum_Composure_ECompPassConstructionType();
	COMPOSURE_API UEnum* Z_Construct_UEnum_Composure_EInheritedSourceType();
	COMPOSURE_API UEnum* Z_Construct_UEnum_Composure_ESceneCameraLinkType();
	COMPOSURE_API UEnum* Z_Construct_UEnum_Composure_ETargetUsageFlags();
	COMPOSURE_API UFunction* Z_Construct_UDelegateFunction_Composure_DynamicOnFinalPassRendered__DelegateSignature();
	COMPOSURE_API UFunction* Z_Construct_UDelegateFunction_Composure_DynamicOnTransformPassRendered__DelegateSignature();
	COMPOSURE_API UScriptStruct* Z_Construct_UScriptStruct_FCompositingMaterial();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetFormat();
	UPackage* Z_Construct_UPackage__Script_Composure();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Composure_DynamicOnTransformPassRendered__DelegateSignature_Statics
	{
		struct _Script_Composure_eventDynamicOnTransformPassRendered_Parms
		{
			ACompositingElement* CompElement;
			UTexture* Texture;
			FName PassName;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CompElement;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FNamePropertyParams NewProp_PassName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Composure_DynamicOnTransformPassRendered__DelegateSignature_Statics::NewProp_CompElement = { "CompElement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Composure_eventDynamicOnTransformPassRendered_Parms, CompElement), Z_Construct_UClass_ACompositingElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Composure_DynamicOnTransformPassRendered__DelegateSignature_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Composure_eventDynamicOnTransformPassRendered_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UDelegateFunction_Composure_DynamicOnTransformPassRendered__DelegateSignature_Statics::NewProp_PassName = { "PassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Composure_eventDynamicOnTransformPassRendered_Parms, PassName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Composure_DynamicOnTransformPassRendered__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Composure_DynamicOnTransformPassRendered__DelegateSignature_Statics::NewProp_CompElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Composure_DynamicOnTransformPassRendered__DelegateSignature_Statics::NewProp_Texture,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Composure_DynamicOnTransformPassRendered__DelegateSignature_Statics::NewProp_PassName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Composure_DynamicOnTransformPassRendered__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Composure_DynamicOnTransformPassRendered__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Composure, nullptr, "DynamicOnTransformPassRendered__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Composure_DynamicOnTransformPassRendered__DelegateSignature_Statics::_Script_Composure_eventDynamicOnTransformPassRendered_Parms), Z_Construct_UDelegateFunction_Composure_DynamicOnTransformPassRendered__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Composure_DynamicOnTransformPassRendered__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Composure_DynamicOnTransformPassRendered__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Composure_DynamicOnTransformPassRendered__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Composure_DynamicOnTransformPassRendered__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Composure_DynamicOnTransformPassRendered__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDynamicOnTransformPassRendered_DelegateWrapper(const FMulticastScriptDelegate& DynamicOnTransformPassRendered, ACompositingElement* CompElement, UTexture* Texture, FName PassName)
{
	struct _Script_Composure_eventDynamicOnTransformPassRendered_Parms
	{
		ACompositingElement* CompElement;
		UTexture* Texture;
		FName PassName;
	};
	_Script_Composure_eventDynamicOnTransformPassRendered_Parms Parms;
	Parms.CompElement=CompElement;
	Parms.Texture=Texture;
	Parms.PassName=PassName;
	DynamicOnTransformPassRendered.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_Composure_DynamicOnFinalPassRendered__DelegateSignature_Statics
	{
		struct _Script_Composure_eventDynamicOnFinalPassRendered_Parms
		{
			ACompositingElement* CompElement;
			UTexture* Texture;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CompElement;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Composure_DynamicOnFinalPassRendered__DelegateSignature_Statics::NewProp_CompElement = { "CompElement", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Composure_eventDynamicOnFinalPassRendered_Parms, CompElement), Z_Construct_UClass_ACompositingElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_Composure_DynamicOnFinalPassRendered__DelegateSignature_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_Composure_eventDynamicOnFinalPassRendered_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Composure_DynamicOnFinalPassRendered__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Composure_DynamicOnFinalPassRendered__DelegateSignature_Statics::NewProp_CompElement,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Composure_DynamicOnFinalPassRendered__DelegateSignature_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Composure_DynamicOnFinalPassRendered__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Composure_DynamicOnFinalPassRendered__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Composure, nullptr, "DynamicOnFinalPassRendered__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_Composure_DynamicOnFinalPassRendered__DelegateSignature_Statics::_Script_Composure_eventDynamicOnFinalPassRendered_Parms), Z_Construct_UDelegateFunction_Composure_DynamicOnFinalPassRendered__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Composure_DynamicOnFinalPassRendered__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Composure_DynamicOnFinalPassRendered__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Composure_DynamicOnFinalPassRendered__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Composure_DynamicOnFinalPassRendered__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Composure_DynamicOnFinalPassRendered__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDynamicOnFinalPassRendered_DelegateWrapper(const FMulticastScriptDelegate& DynamicOnFinalPassRendered, ACompositingElement* CompElement, UTexture* Texture)
{
	struct _Script_Composure_eventDynamicOnFinalPassRendered_Parms
	{
		ACompositingElement* CompElement;
		UTexture* Texture;
	};
	_Script_Composure_eventDynamicOnFinalPassRendered_Parms Parms;
	Parms.CompElement=CompElement;
	Parms.Texture=Texture;
	DynamicOnFinalPassRendered.ProcessMulticastDelegate<UObject>(&Parms);
}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESceneCameraLinkType;
	static UEnum* ESceneCameraLinkType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ESceneCameraLinkType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ESceneCameraLinkType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Composure_ESceneCameraLinkType, (UObject*)Z_Construct_UPackage__Script_Composure(), TEXT("ESceneCameraLinkType"));
		}
		return Z_Registration_Info_UEnum_ESceneCameraLinkType.OuterSingleton;
	}
	template<> COMPOSURE_API UEnum* StaticEnum<ESceneCameraLinkType>()
	{
		return ESceneCameraLinkType_StaticEnum();
	}
	struct Z_Construct_UEnum_Composure_ESceneCameraLinkType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Composure_ESceneCameraLinkType_Statics::Enumerators[] = {
		{ "ESceneCameraLinkType::Inherited", (int64)ESceneCameraLinkType::Inherited },
		{ "ESceneCameraLinkType::Override", (int64)ESceneCameraLinkType::Override },
		{ "ESceneCameraLinkType::Unused", (int64)ESceneCameraLinkType::Unused },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Composure_ESceneCameraLinkType_Statics::Enum_MetaDataParams[] = {
		{ "Inherited.Name", "ESceneCameraLinkType::Inherited" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "Override.Name", "ESceneCameraLinkType::Override" },
		{ "Unused.Name", "ESceneCameraLinkType::Unused" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Composure_ESceneCameraLinkType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Composure,
		nullptr,
		"ESceneCameraLinkType",
		"ESceneCameraLinkType",
		Z_Construct_UEnum_Composure_ESceneCameraLinkType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Composure_ESceneCameraLinkType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Composure_ESceneCameraLinkType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Composure_ESceneCameraLinkType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Composure_ESceneCameraLinkType()
	{
		if (!Z_Registration_Info_UEnum_ESceneCameraLinkType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESceneCameraLinkType.InnerSingleton, Z_Construct_UEnum_Composure_ESceneCameraLinkType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ESceneCameraLinkType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EInheritedSourceType;
	static UEnum* EInheritedSourceType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EInheritedSourceType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EInheritedSourceType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Composure_EInheritedSourceType, (UObject*)Z_Construct_UPackage__Script_Composure(), TEXT("EInheritedSourceType"));
		}
		return Z_Registration_Info_UEnum_EInheritedSourceType.OuterSingleton;
	}
	template<> COMPOSURE_API UEnum* StaticEnum<EInheritedSourceType>()
	{
		return EInheritedSourceType_StaticEnum();
	}
	struct Z_Construct_UEnum_Composure_EInheritedSourceType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Composure_EInheritedSourceType_Statics::Enumerators[] = {
		{ "EInheritedSourceType::Inherited", (int64)EInheritedSourceType::Inherited },
		{ "EInheritedSourceType::Override", (int64)EInheritedSourceType::Override },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Composure_EInheritedSourceType_Statics::Enum_MetaDataParams[] = {
		{ "Inherited.Name", "EInheritedSourceType::Inherited" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "Override.Name", "EInheritedSourceType::Override" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Composure_EInheritedSourceType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Composure,
		nullptr,
		"EInheritedSourceType",
		"EInheritedSourceType",
		Z_Construct_UEnum_Composure_EInheritedSourceType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Composure_EInheritedSourceType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Composure_EInheritedSourceType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Composure_EInheritedSourceType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Composure_EInheritedSourceType()
	{
		if (!Z_Registration_Info_UEnum_EInheritedSourceType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EInheritedSourceType.InnerSingleton, Z_Construct_UEnum_Composure_EInheritedSourceType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EInheritedSourceType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETargetUsageFlags;
	static UEnum* ETargetUsageFlags_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETargetUsageFlags.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETargetUsageFlags.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Composure_ETargetUsageFlags, (UObject*)Z_Construct_UPackage__Script_Composure(), TEXT("ETargetUsageFlags"));
		}
		return Z_Registration_Info_UEnum_ETargetUsageFlags.OuterSingleton;
	}
	template<> COMPOSURE_API UEnum* StaticEnum<ETargetUsageFlags>()
	{
		return ETargetUsageFlags_StaticEnum();
	}
	struct Z_Construct_UEnum_Composure_ETargetUsageFlags_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Composure_ETargetUsageFlags_Statics::Enumerators[] = {
		{ "ETargetUsageFlags::USAGE_None", (int64)ETargetUsageFlags::USAGE_None },
		{ "ETargetUsageFlags::USAGE_Input", (int64)ETargetUsageFlags::USAGE_Input },
		{ "ETargetUsageFlags::USAGE_Transform", (int64)ETargetUsageFlags::USAGE_Transform },
		{ "ETargetUsageFlags::USAGE_Output", (int64)ETargetUsageFlags::USAGE_Output },
		{ "ETargetUsageFlags::USAGE_Persistent", (int64)ETargetUsageFlags::USAGE_Persistent },
		{ "ETargetUsageFlags::USAGE_Intermediate0", (int64)ETargetUsageFlags::USAGE_Intermediate0 },
		{ "ETargetUsageFlags::USAGE_Intermediate1", (int64)ETargetUsageFlags::USAGE_Intermediate1 },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Composure_ETargetUsageFlags_Statics::Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "USAGE_Input.Name", "ETargetUsageFlags::USAGE_Input" },
		{ "USAGE_Intermediate0.Comment", "// If a pass is tagged 'intermediate' it is still available to the pass immediately \n// after it. So we ping-pong between intermediate tags, clearing the older one.\n" },
		{ "USAGE_Intermediate0.Hidden", "" },
		{ "USAGE_Intermediate0.Name", "ETargetUsageFlags::USAGE_Intermediate0" },
		{ "USAGE_Intermediate0.ToolTip", "If a pass is tagged 'intermediate' it is still available to the pass immediately\nafter it. So we ping-pong between intermediate tags, clearing the older one." },
		{ "USAGE_Intermediate1.Hidden", "" },
		{ "USAGE_Intermediate1.Name", "ETargetUsageFlags::USAGE_Intermediate1" },
		{ "USAGE_None.Name", "ETargetUsageFlags::USAGE_None" },
		{ "USAGE_Output.Name", "ETargetUsageFlags::USAGE_Output" },
		{ "USAGE_Persistent.Name", "ETargetUsageFlags::USAGE_Persistent" },
		{ "USAGE_Transform.Name", "ETargetUsageFlags::USAGE_Transform" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Composure_ETargetUsageFlags_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Composure,
		nullptr,
		"ETargetUsageFlags",
		"ETargetUsageFlags",
		Z_Construct_UEnum_Composure_ETargetUsageFlags_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Composure_ETargetUsageFlags_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Composure_ETargetUsageFlags_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Composure_ETargetUsageFlags_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Composure_ETargetUsageFlags()
	{
		if (!Z_Registration_Info_UEnum_ETargetUsageFlags.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETargetUsageFlags.InnerSingleton, Z_Construct_UEnum_Composure_ETargetUsageFlags_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETargetUsageFlags.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ECompPassConstructionType;
	static UEnum* ECompPassConstructionType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ECompPassConstructionType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ECompPassConstructionType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Composure_ECompPassConstructionType, (UObject*)Z_Construct_UPackage__Script_Composure(), TEXT("ECompPassConstructionType"));
		}
		return Z_Registration_Info_UEnum_ECompPassConstructionType.OuterSingleton;
	}
	template<> COMPOSURE_API UEnum* StaticEnum<ECompPassConstructionType>()
	{
		return ECompPassConstructionType_StaticEnum();
	}
	struct Z_Construct_UEnum_Composure_ECompPassConstructionType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Composure_ECompPassConstructionType_Statics::Enumerators[] = {
		{ "ECompPassConstructionType::Unknown", (int64)ECompPassConstructionType::Unknown },
		{ "ECompPassConstructionType::EditorConstructed", (int64)ECompPassConstructionType::EditorConstructed },
		{ "ECompPassConstructionType::BlueprintConstructed", (int64)ECompPassConstructionType::BlueprintConstructed },
		{ "ECompPassConstructionType::CodeConstructed", (int64)ECompPassConstructionType::CodeConstructed },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Composure_ECompPassConstructionType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintConstructed.Name", "ECompPassConstructionType::BlueprintConstructed" },
		{ "CodeConstructed.Name", "ECompPassConstructionType::CodeConstructed" },
		{ "EditorConstructed.Name", "ECompPassConstructionType::EditorConstructed" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "Unknown.Name", "ECompPassConstructionType::Unknown" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Composure_ECompPassConstructionType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Composure,
		nullptr,
		"ECompPassConstructionType",
		"ECompPassConstructionType",
		Z_Construct_UEnum_Composure_ECompPassConstructionType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Composure_ECompPassConstructionType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_Composure_ECompPassConstructionType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_Composure_ECompPassConstructionType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_Composure_ECompPassConstructionType()
	{
		if (!Z_Registration_Info_UEnum_ECompPassConstructionType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ECompPassConstructionType.InnerSingleton, Z_Construct_UEnum_Composure_ECompPassConstructionType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ECompPassConstructionType.InnerSingleton;
	}
	DEFINE_FUNCTION(ACompositingElement::execGetRenderPriority)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetRenderPriority();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execAddNewOutputPass)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PassName);
		P_GET_OBJECT(UClass,Z_Param_OutputType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCompositingElementOutput**)Z_Param__Result=P_THIS->AddNewOutputPass(Z_Param_PassName,Z_Param_OutputType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execAddNewTransformPass)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PassName);
		P_GET_OBJECT(UClass,Z_Param_TransformType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCompositingElementTransform**)Z_Param__Result=P_THIS->AddNewTransformPass(Z_Param_PassName,Z_Param_TransformType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execAddNewInputPass)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PassName);
		P_GET_OBJECT(UClass,Z_Param_InputType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCompositingElementInput**)Z_Param__Result=P_THIS->AddNewInputPass(Z_Param_PassName,Z_Param_InputType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execCreateNewOutputPass)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PassName);
		P_GET_OBJECT(UClass,Z_Param_OutputType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCompositingElementOutput**)Z_Param__Result=P_THIS->CreateNewOutputPass(Z_Param_PassName,Z_Param_OutputType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execCreateNewTransformPass)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PassName);
		P_GET_OBJECT(UClass,Z_Param_TransformType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCompositingElementTransform**)Z_Param__Result=P_THIS->CreateNewTransformPass(Z_Param_PassName,Z_Param_TransformType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execCreateNewInputPass)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PassName);
		P_GET_OBJECT(UClass,Z_Param_InputType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCompositingElementInput**)Z_Param__Result=P_THIS->CreateNewInputPass(Z_Param_PassName,Z_Param_InputType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execDeletePass)
	{
		P_GET_OBJECT(UCompositingElementPass,Z_Param_PassToDelete);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DeletePass(Z_Param_PassToDelete);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execGetOutputsList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UCompositingElementOutput*>*)Z_Param__Result=P_THIS->GetOutputsList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execGetTransformsList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UCompositingElementTransform*>*)Z_Param__Result=P_THIS->GetTransformsList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execGetInputsList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UCompositingElementInput*>*)Z_Param__Result=P_THIS->GetInputsList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execFindOutputPass)
	{
		P_GET_OBJECT(UClass,Z_Param_OutputType);
		P_GET_PROPERTY(FNameProperty,Z_Param_OptionalPassName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCompositingElementOutput**)Z_Param__Result=P_THIS->FindOutputPass(Z_Param_OutputType,Z_Param_OptionalPassName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execFindTransformPass)
	{
		P_GET_OBJECT(UClass,Z_Param_TransformType);
		P_GET_OBJECT_REF(UTexture,Z_Param_Out_PassResult);
		P_GET_PROPERTY(FNameProperty,Z_Param_OptionalPassName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCompositingElementTransform**)Z_Param__Result=P_THIS->FindTransformPass(Z_Param_TransformType,Z_Param_Out_PassResult,Z_Param_OptionalPassName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execFindInputPass)
	{
		P_GET_OBJECT(UClass,Z_Param_InputType);
		P_GET_OBJECT_REF(UTexture,Z_Param_Out_PassResult);
		P_GET_PROPERTY(FNameProperty,Z_Param_OptionalPassName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCompositingElementInput**)Z_Param__Result=P_THIS->FindInputPass(Z_Param_InputType,Z_Param_Out_PassResult,Z_Param_OptionalPassName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execSetRenderResolution)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_NewResolution);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRenderResolution(Z_Param_NewResolution);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execGetRenderResolution)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=P_THIS->GetRenderResolution();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execGetLatestRenderResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=P_THIS->GetLatestRenderResult();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execFindNamedRenderResult)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PassName);
		P_GET_UBOOL(Z_Param_bSearchSubElements);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=P_THIS->FindNamedRenderResult(Z_Param_PassName,Z_Param_bSearchSubElements);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execRegisterPassResult)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ReferenceName);
		P_GET_OBJECT(UTexture,Z_Param_PassResult);
		P_GET_UBOOL(Z_Param_bSetAsLatestRenderResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegisterPassResult(Z_Param_ReferenceName,Z_Param_PassResult,Z_Param_bSetAsLatestRenderResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execSetTargetCamera)
	{
		P_GET_OBJECT(ACameraActor,Z_Param_NewCameraActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTargetCamera(Z_Param_NewCameraActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execFindTargetCamera)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACameraActor**)Z_Param__Result=P_THIS->FindTargetCamera();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execRenderCompositingMaterialToTarget)
	{
		P_GET_STRUCT_REF(FCompositingMaterial,Z_Param_Out_CompMaterial);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_RenderTarget);
		P_GET_PROPERTY(FNameProperty,Z_Param_ResultLookupName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->RenderCompositingMaterialToTarget(Z_Param_Out_CompMaterial,Z_Param_RenderTarget,Z_Param_ResultLookupName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execRenderCompositingMaterial)
	{
		P_GET_STRUCT_REF(FCompositingMaterial,Z_Param_Out_CompMaterial);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RenderScale);
		P_GET_PROPERTY(FNameProperty,Z_Param_ResultLookupName);
		P_GET_ENUM(ETargetUsageFlags,Z_Param_UsageTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=P_THIS->RenderCompositingMaterial(Z_Param_Out_CompMaterial,Z_Param_RenderScale,Z_Param_ResultLookupName,ETargetUsageFlags(Z_Param_UsageTag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execReleaseOwnedTarget)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_OwnedTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ReleaseOwnedTarget(Z_Param_OwnedTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execRequestNamedRenderTarget)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_ReferenceName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RenderPercentage);
		P_GET_ENUM(ETargetUsageFlags,Z_Param_UsageTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=P_THIS->RequestNamedRenderTarget(Z_Param_ReferenceName,Z_Param_RenderPercentage,ETargetUsageFlags(Z_Param_UsageTag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execGetCompElementName)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetCompElementName();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execRenderCompElement)
	{
		P_GET_UBOOL(Z_Param_bCameraCutThisFrame);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture**)Z_Param__Result=P_THIS->RenderCompElement_Implementation(Z_Param_bCameraCutThisFrame);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execSetEditorColorPickerDisplayImage)
	{
		P_GET_OBJECT(UTexture,Z_Param_PickerDisplayImage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEditorColorPickerDisplayImage(Z_Param_PickerDisplayImage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execSetEditorColorPickingTarget)
	{
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_PickingTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEditorColorPickingTarget(Z_Param_PickingTarget);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execSetOpacity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewOpacity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOpacity(Z_Param_NewOpacity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execGetOpacity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetOpacity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execGetChildElements)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ACompositingElement*>*)Z_Param__Result=P_THIS->GetChildElements();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execGetElementParent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACompositingElement**)Z_Param__Result=P_THIS->GetElementParent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execIsSubElement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsSubElement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACompositingElement::execSetElementName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetElementName(Z_Param_NewName);
		P_NATIVE_END;
	}
	struct CompositingElement_eventRenderCompElement_Parms
	{
		bool bCameraCutThisFrame;
		UTexture* ReturnValue;

		/** Constructor, initializes return property only **/
		CompositingElement_eventRenderCompElement_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	static FName NAME_ACompositingElement_RenderCompElement = FName(TEXT("RenderCompElement"));
	UTexture* ACompositingElement::RenderCompElement(bool bCameraCutThisFrame)
	{
		CompositingElement_eventRenderCompElement_Parms Parms;
		Parms.bCameraCutThisFrame=bCameraCutThisFrame ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ACompositingElement_RenderCompElement),&Parms);
		return Parms.ReturnValue;
	}
	void ACompositingElement::StaticRegisterNativesACompositingElement()
	{
		UClass* Class = ACompositingElement::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddNewInputPass", &ACompositingElement::execAddNewInputPass },
			{ "AddNewOutputPass", &ACompositingElement::execAddNewOutputPass },
			{ "AddNewTransformPass", &ACompositingElement::execAddNewTransformPass },
			{ "CreateNewInputPass", &ACompositingElement::execCreateNewInputPass },
			{ "CreateNewOutputPass", &ACompositingElement::execCreateNewOutputPass },
			{ "CreateNewTransformPass", &ACompositingElement::execCreateNewTransformPass },
			{ "DeletePass", &ACompositingElement::execDeletePass },
			{ "FindInputPass", &ACompositingElement::execFindInputPass },
			{ "FindNamedRenderResult", &ACompositingElement::execFindNamedRenderResult },
			{ "FindOutputPass", &ACompositingElement::execFindOutputPass },
			{ "FindTargetCamera", &ACompositingElement::execFindTargetCamera },
			{ "FindTransformPass", &ACompositingElement::execFindTransformPass },
			{ "GetChildElements", &ACompositingElement::execGetChildElements },
			{ "GetCompElementName", &ACompositingElement::execGetCompElementName },
			{ "GetElementParent", &ACompositingElement::execGetElementParent },
			{ "GetInputsList", &ACompositingElement::execGetInputsList },
			{ "GetLatestRenderResult", &ACompositingElement::execGetLatestRenderResult },
			{ "GetOpacity", &ACompositingElement::execGetOpacity },
			{ "GetOutputsList", &ACompositingElement::execGetOutputsList },
			{ "GetRenderPriority", &ACompositingElement::execGetRenderPriority },
			{ "GetRenderResolution", &ACompositingElement::execGetRenderResolution },
			{ "GetTransformsList", &ACompositingElement::execGetTransformsList },
			{ "IsSubElement", &ACompositingElement::execIsSubElement },
			{ "RegisterPassResult", &ACompositingElement::execRegisterPassResult },
			{ "ReleaseOwnedTarget", &ACompositingElement::execReleaseOwnedTarget },
			{ "RenderCompElement", &ACompositingElement::execRenderCompElement },
			{ "RenderCompositingMaterial", &ACompositingElement::execRenderCompositingMaterial },
			{ "RenderCompositingMaterialToTarget", &ACompositingElement::execRenderCompositingMaterialToTarget },
			{ "RequestNamedRenderTarget", &ACompositingElement::execRequestNamedRenderTarget },
			{ "SetEditorColorPickerDisplayImage", &ACompositingElement::execSetEditorColorPickerDisplayImage },
			{ "SetEditorColorPickingTarget", &ACompositingElement::execSetEditorColorPickingTarget },
			{ "SetElementName", &ACompositingElement::execSetElementName },
			{ "SetOpacity", &ACompositingElement::execSetOpacity },
			{ "SetRenderResolution", &ACompositingElement::execSetRenderResolution },
			{ "SetTargetCamera", &ACompositingElement::execSetTargetCamera },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACompositingElement_AddNewInputPass_Statics
	{
		struct CompositingElement_eventAddNewInputPass_Parms
		{
			FName PassName;
			TSubclassOf<UCompositingElementInput>  InputType;
			UCompositingElementInput* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_PassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InputType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACompositingElement_AddNewInputPass_Statics::NewProp_PassName = { "PassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventAddNewInputPass_Parms, PassName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_AddNewInputPass_Statics::NewProp_InputType_MetaData[] = {
		{ "AllowAbstract", "false" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACompositingElement_AddNewInputPass_Statics::NewProp_InputType = { "InputType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventAddNewInputPass_Parms, InputType), Z_Construct_UClass_UClass, Z_Construct_UClass_UCompositingElementInput_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_AddNewInputPass_Statics::NewProp_InputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_AddNewInputPass_Statics::NewProp_InputType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_AddNewInputPass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventAddNewInputPass_Parms, ReturnValue), Z_Construct_UClass_UCompositingElementInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_AddNewInputPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_AddNewInputPass_Statics::NewProp_PassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_AddNewInputPass_Statics::NewProp_InputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_AddNewInputPass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_AddNewInputPass_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Composure|Input" },
		{ "DeterminesOutputType", "InputType" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_AddNewInputPass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "AddNewInputPass", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_AddNewInputPass_Statics::CompositingElement_eventAddNewInputPass_Parms), Z_Construct_UFunction_ACompositingElement_AddNewInputPass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_AddNewInputPass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_AddNewInputPass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_AddNewInputPass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_AddNewInputPass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_AddNewInputPass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_AddNewOutputPass_Statics
	{
		struct CompositingElement_eventAddNewOutputPass_Parms
		{
			FName PassName;
			TSubclassOf<UCompositingElementOutput>  OutputType;
			UCompositingElementOutput* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_PassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OutputType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACompositingElement_AddNewOutputPass_Statics::NewProp_PassName = { "PassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventAddNewOutputPass_Parms, PassName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_AddNewOutputPass_Statics::NewProp_OutputType_MetaData[] = {
		{ "AllowAbstract", "false" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACompositingElement_AddNewOutputPass_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventAddNewOutputPass_Parms, OutputType), Z_Construct_UClass_UClass, Z_Construct_UClass_UCompositingElementOutput_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_AddNewOutputPass_Statics::NewProp_OutputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_AddNewOutputPass_Statics::NewProp_OutputType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_AddNewOutputPass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventAddNewOutputPass_Parms, ReturnValue), Z_Construct_UClass_UCompositingElementOutput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_AddNewOutputPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_AddNewOutputPass_Statics::NewProp_PassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_AddNewOutputPass_Statics::NewProp_OutputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_AddNewOutputPass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_AddNewOutputPass_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Composure|Input" },
		{ "DeterminesOutputType", "OutputType" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_AddNewOutputPass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "AddNewOutputPass", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_AddNewOutputPass_Statics::CompositingElement_eventAddNewOutputPass_Parms), Z_Construct_UFunction_ACompositingElement_AddNewOutputPass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_AddNewOutputPass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_AddNewOutputPass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_AddNewOutputPass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_AddNewOutputPass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_AddNewOutputPass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_AddNewTransformPass_Statics
	{
		struct CompositingElement_eventAddNewTransformPass_Parms
		{
			FName PassName;
			TSubclassOf<UCompositingElementTransform>  TransformType;
			UCompositingElementTransform* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_PassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TransformType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACompositingElement_AddNewTransformPass_Statics::NewProp_PassName = { "PassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventAddNewTransformPass_Parms, PassName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_AddNewTransformPass_Statics::NewProp_TransformType_MetaData[] = {
		{ "AllowAbstract", "false" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACompositingElement_AddNewTransformPass_Statics::NewProp_TransformType = { "TransformType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventAddNewTransformPass_Parms, TransformType), Z_Construct_UClass_UClass, Z_Construct_UClass_UCompositingElementTransform_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_AddNewTransformPass_Statics::NewProp_TransformType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_AddNewTransformPass_Statics::NewProp_TransformType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_AddNewTransformPass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventAddNewTransformPass_Parms, ReturnValue), Z_Construct_UClass_UCompositingElementTransform_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_AddNewTransformPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_AddNewTransformPass_Statics::NewProp_PassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_AddNewTransformPass_Statics::NewProp_TransformType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_AddNewTransformPass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_AddNewTransformPass_Statics::Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "Composure|Input" },
		{ "DeterminesOutputType", "TransformType" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_AddNewTransformPass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "AddNewTransformPass", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_AddNewTransformPass_Statics::CompositingElement_eventAddNewTransformPass_Parms), Z_Construct_UFunction_ACompositingElement_AddNewTransformPass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_AddNewTransformPass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_AddNewTransformPass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_AddNewTransformPass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_AddNewTransformPass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_AddNewTransformPass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_CreateNewInputPass_Statics
	{
		struct CompositingElement_eventCreateNewInputPass_Parms
		{
			FName PassName;
			TSubclassOf<UCompositingElementInput>  InputType;
			UCompositingElementInput* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_PassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InputType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACompositingElement_CreateNewInputPass_Statics::NewProp_PassName = { "PassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventCreateNewInputPass_Parms, PassName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_CreateNewInputPass_Statics::NewProp_InputType_MetaData[] = {
		{ "AllowAbstract", "false" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACompositingElement_CreateNewInputPass_Statics::NewProp_InputType = { "InputType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventCreateNewInputPass_Parms, InputType), Z_Construct_UClass_UClass, Z_Construct_UClass_UCompositingElementInput_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_CreateNewInputPass_Statics::NewProp_InputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_CreateNewInputPass_Statics::NewProp_InputType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_CreateNewInputPass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventCreateNewInputPass_Parms, ReturnValue), Z_Construct_UClass_UCompositingElementInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_CreateNewInputPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_CreateNewInputPass_Statics::NewProp_PassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_CreateNewInputPass_Statics::NewProp_InputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_CreateNewInputPass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_CreateNewInputPass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|Pass" },
		{ "Comment", "/**\n\x09 * Create a new input pass into the public list which directly shows in the editor. \n\x09 * @param  PassName                       The name for the new pass.\n\x09 * @param  InputType                      The class type of the created pass.\n\x09 * @return CompositingElementInput        The newly created input pass object.\n\x09 */" },
		{ "DeterminesOutputType", "InputType" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ToolTip", "Create a new input pass into the public list which directly shows in the editor.\n@param  PassName                       The name for the new pass.\n@param  InputType                      The class type of the created pass.\n@return CompositingElementInput        The newly created input pass object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_CreateNewInputPass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "CreateNewInputPass", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_CreateNewInputPass_Statics::CompositingElement_eventCreateNewInputPass_Parms), Z_Construct_UFunction_ACompositingElement_CreateNewInputPass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_CreateNewInputPass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_CreateNewInputPass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_CreateNewInputPass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_CreateNewInputPass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_CreateNewInputPass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_CreateNewOutputPass_Statics
	{
		struct CompositingElement_eventCreateNewOutputPass_Parms
		{
			FName PassName;
			TSubclassOf<UCompositingElementOutput>  OutputType;
			UCompositingElementOutput* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_PassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OutputType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACompositingElement_CreateNewOutputPass_Statics::NewProp_PassName = { "PassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventCreateNewOutputPass_Parms, PassName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_CreateNewOutputPass_Statics::NewProp_OutputType_MetaData[] = {
		{ "AllowAbstract", "false" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACompositingElement_CreateNewOutputPass_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventCreateNewOutputPass_Parms, OutputType), Z_Construct_UClass_UClass, Z_Construct_UClass_UCompositingElementOutput_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_CreateNewOutputPass_Statics::NewProp_OutputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_CreateNewOutputPass_Statics::NewProp_OutputType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_CreateNewOutputPass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventCreateNewOutputPass_Parms, ReturnValue), Z_Construct_UClass_UCompositingElementOutput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_CreateNewOutputPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_CreateNewOutputPass_Statics::NewProp_PassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_CreateNewOutputPass_Statics::NewProp_OutputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_CreateNewOutputPass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_CreateNewOutputPass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|Pass" },
		{ "Comment", "/**\n\x09 * Create a new Output pass into the public list which directly shows in the editor.\n\x09 * @param  PassName                       The name for the new pass.\n\x09 * @param  OutputType                     The class type of the created pass.\n\x09 * @return CompositingElementOutput       The newly created output pass object.\n\x09 */" },
		{ "DeterminesOutputType", "OutputType" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ToolTip", "Create a new Output pass into the public list which directly shows in the editor.\n@param  PassName                       The name for the new pass.\n@param  OutputType                     The class type of the created pass.\n@return CompositingElementOutput       The newly created output pass object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_CreateNewOutputPass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "CreateNewOutputPass", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_CreateNewOutputPass_Statics::CompositingElement_eventCreateNewOutputPass_Parms), Z_Construct_UFunction_ACompositingElement_CreateNewOutputPass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_CreateNewOutputPass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_CreateNewOutputPass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_CreateNewOutputPass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_CreateNewOutputPass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_CreateNewOutputPass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_CreateNewTransformPass_Statics
	{
		struct CompositingElement_eventCreateNewTransformPass_Parms
		{
			FName PassName;
			TSubclassOf<UCompositingElementTransform>  TransformType;
			UCompositingElementTransform* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_PassName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TransformType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACompositingElement_CreateNewTransformPass_Statics::NewProp_PassName = { "PassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventCreateNewTransformPass_Parms, PassName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_CreateNewTransformPass_Statics::NewProp_TransformType_MetaData[] = {
		{ "AllowAbstract", "false" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACompositingElement_CreateNewTransformPass_Statics::NewProp_TransformType = { "TransformType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventCreateNewTransformPass_Parms, TransformType), Z_Construct_UClass_UClass, Z_Construct_UClass_UCompositingElementTransform_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_CreateNewTransformPass_Statics::NewProp_TransformType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_CreateNewTransformPass_Statics::NewProp_TransformType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_CreateNewTransformPass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventCreateNewTransformPass_Parms, ReturnValue), Z_Construct_UClass_UCompositingElementTransform_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_CreateNewTransformPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_CreateNewTransformPass_Statics::NewProp_PassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_CreateNewTransformPass_Statics::NewProp_TransformType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_CreateNewTransformPass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_CreateNewTransformPass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|Pass" },
		{ "Comment", "/**\n\x09 * Create a new Transform pass into the public list which directly shows in the editor.\n\x09 * @param  PassName                       The name for the new pass.\n\x09 * @param  TransformType                  The class type of the created pass.\n\x09 * @return CompositingElementTransform    The newly created transform pass object.\n\x09 */" },
		{ "DeterminesOutputType", "TransformType" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ToolTip", "Create a new Transform pass into the public list which directly shows in the editor.\n@param  PassName                       The name for the new pass.\n@param  TransformType                  The class type of the created pass.\n@return CompositingElementTransform    The newly created transform pass object." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_CreateNewTransformPass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "CreateNewTransformPass", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_CreateNewTransformPass_Statics::CompositingElement_eventCreateNewTransformPass_Parms), Z_Construct_UFunction_ACompositingElement_CreateNewTransformPass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_CreateNewTransformPass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_CreateNewTransformPass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_CreateNewTransformPass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_CreateNewTransformPass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_CreateNewTransformPass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_DeletePass_Statics
	{
		struct CompositingElement_eventDeletePass_Parms
		{
			UCompositingElementPass* PassToDelete;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PassToDelete;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_DeletePass_Statics::NewProp_PassToDelete = { "PassToDelete", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventDeletePass_Parms, PassToDelete), Z_Construct_UClass_UCompositingElementPass_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACompositingElement_DeletePass_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CompositingElement_eventDeletePass_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACompositingElement_DeletePass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CompositingElement_eventDeletePass_Parms), &Z_Construct_UFunction_ACompositingElement_DeletePass_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_DeletePass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_DeletePass_Statics::NewProp_PassToDelete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_DeletePass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_DeletePass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|Pass" },
		{ "Comment", "/**\n\x09 * Delete a specific pass. This function deals with the public list where deletion is directly reflected in the editor.\n\x09 * @param  PassToDelete\x09\x09\x09  The pass that will be deleted.\n\x09 * @return bool                   Whether the delete operation is successful or not\n\x09 */" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ToolTip", "Delete a specific pass. This function deals with the public list where deletion is directly reflected in the editor.\n@param  PassToDelete                   The pass that will be deleted.\n@return bool                   Whether the delete operation is successful or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_DeletePass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "DeletePass", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_DeletePass_Statics::CompositingElement_eventDeletePass_Parms), Z_Construct_UFunction_ACompositingElement_DeletePass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_DeletePass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_DeletePass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_DeletePass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_DeletePass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_DeletePass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_FindInputPass_Statics
	{
		struct CompositingElement_eventFindInputPass_Parms
		{
			TSubclassOf<UCompositingElementInput>  InputType;
			UTexture* PassResult;
			FName OptionalPassName;
			UCompositingElementInput* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_InputType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PassResult;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OptionalPassName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_FindInputPass_Statics::NewProp_InputType_MetaData[] = {
		{ "AllowAbstract", "false" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACompositingElement_FindInputPass_Statics::NewProp_InputType = { "InputType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventFindInputPass_Parms, InputType), Z_Construct_UClass_UClass, Z_Construct_UClass_UCompositingElementInput_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_FindInputPass_Statics::NewProp_InputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_FindInputPass_Statics::NewProp_InputType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_FindInputPass_Statics::NewProp_PassResult = { "PassResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventFindInputPass_Parms, PassResult), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACompositingElement_FindInputPass_Statics::NewProp_OptionalPassName = { "OptionalPassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventFindInputPass_Parms, OptionalPassName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_FindInputPass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventFindInputPass_Parms, ReturnValue), Z_Construct_UClass_UCompositingElementInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_FindInputPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_FindInputPass_Statics::NewProp_InputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_FindInputPass_Statics::NewProp_PassResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_FindInputPass_Statics::NewProp_OptionalPassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_FindInputPass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_FindInputPass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure" },
		{ "Comment", "/*********************************/// Pass Management \n" },
		{ "CPP_Default_OptionalPassName", "None" },
		{ "DeterminesOutputType", "InputType" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ToolTip", "*****************************// Pass Management" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_FindInputPass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "FindInputPass", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_FindInputPass_Statics::CompositingElement_eventFindInputPass_Parms), Z_Construct_UFunction_ACompositingElement_FindInputPass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_FindInputPass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_FindInputPass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_FindInputPass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_FindInputPass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_FindInputPass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_FindNamedRenderResult_Statics
	{
		struct CompositingElement_eventFindNamedRenderResult_Parms
		{
			FName PassName;
			bool bSearchSubElements;
			UTexture* ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_PassName;
		static void NewProp_bSearchSubElements_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSearchSubElements;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACompositingElement_FindNamedRenderResult_Statics::NewProp_PassName = { "PassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventFindNamedRenderResult_Parms, PassName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACompositingElement_FindNamedRenderResult_Statics::NewProp_bSearchSubElements_SetBit(void* Obj)
	{
		((CompositingElement_eventFindNamedRenderResult_Parms*)Obj)->bSearchSubElements = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACompositingElement_FindNamedRenderResult_Statics::NewProp_bSearchSubElements = { "bSearchSubElements", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CompositingElement_eventFindNamedRenderResult_Parms), &Z_Construct_UFunction_ACompositingElement_FindNamedRenderResult_Statics::NewProp_bSearchSubElements_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_FindNamedRenderResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventFindNamedRenderResult_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_FindNamedRenderResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_FindNamedRenderResult_Statics::NewProp_PassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_FindNamedRenderResult_Statics::NewProp_bSearchSubElements,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_FindNamedRenderResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_FindNamedRenderResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure" },
		{ "CPP_Default_bSearchSubElements", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_FindNamedRenderResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "FindNamedRenderResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_FindNamedRenderResult_Statics::CompositingElement_eventFindNamedRenderResult_Parms), Z_Construct_UFunction_ACompositingElement_FindNamedRenderResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_FindNamedRenderResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_FindNamedRenderResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_FindNamedRenderResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_FindNamedRenderResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_FindNamedRenderResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_FindOutputPass_Statics
	{
		struct CompositingElement_eventFindOutputPass_Parms
		{
			TSubclassOf<UCompositingElementOutput>  OutputType;
			FName OptionalPassName;
			UCompositingElementOutput* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_OutputType;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OptionalPassName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_FindOutputPass_Statics::NewProp_OutputType_MetaData[] = {
		{ "AllowAbstract", "false" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACompositingElement_FindOutputPass_Statics::NewProp_OutputType = { "OutputType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventFindOutputPass_Parms, OutputType), Z_Construct_UClass_UClass, Z_Construct_UClass_UCompositingElementOutput_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_FindOutputPass_Statics::NewProp_OutputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_FindOutputPass_Statics::NewProp_OutputType_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACompositingElement_FindOutputPass_Statics::NewProp_OptionalPassName = { "OptionalPassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventFindOutputPass_Parms, OptionalPassName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_FindOutputPass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventFindOutputPass_Parms, ReturnValue), Z_Construct_UClass_UCompositingElementOutput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_FindOutputPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_FindOutputPass_Statics::NewProp_OutputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_FindOutputPass_Statics::NewProp_OptionalPassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_FindOutputPass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_FindOutputPass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure" },
		{ "CPP_Default_OptionalPassName", "None" },
		{ "DeterminesOutputType", "OutputType" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_FindOutputPass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "FindOutputPass", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_FindOutputPass_Statics::CompositingElement_eventFindOutputPass_Parms), Z_Construct_UFunction_ACompositingElement_FindOutputPass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_FindOutputPass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_FindOutputPass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_FindOutputPass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_FindOutputPass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_FindOutputPass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_FindTargetCamera_Statics
	{
		struct CompositingElement_eventFindTargetCamera_Parms
		{
			ACameraActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_FindTargetCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventFindTargetCamera_Parms, ReturnValue), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_FindTargetCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_FindTargetCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_FindTargetCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|Input" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_FindTargetCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "FindTargetCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_FindTargetCamera_Statics::CompositingElement_eventFindTargetCamera_Parms), Z_Construct_UFunction_ACompositingElement_FindTargetCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_FindTargetCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_FindTargetCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_FindTargetCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_FindTargetCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_FindTargetCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_FindTransformPass_Statics
	{
		struct CompositingElement_eventFindTransformPass_Parms
		{
			TSubclassOf<UCompositingElementTransform>  TransformType;
			UTexture* PassResult;
			FName OptionalPassName;
			UCompositingElementTransform* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_TransformType;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PassResult;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OptionalPassName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_FindTransformPass_Statics::NewProp_TransformType_MetaData[] = {
		{ "AllowAbstract", "false" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ACompositingElement_FindTransformPass_Statics::NewProp_TransformType = { "TransformType", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventFindTransformPass_Parms, TransformType), Z_Construct_UClass_UClass, Z_Construct_UClass_UCompositingElementTransform_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_FindTransformPass_Statics::NewProp_TransformType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_FindTransformPass_Statics::NewProp_TransformType_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_FindTransformPass_Statics::NewProp_PassResult = { "PassResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventFindTransformPass_Parms, PassResult), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACompositingElement_FindTransformPass_Statics::NewProp_OptionalPassName = { "OptionalPassName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventFindTransformPass_Parms, OptionalPassName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_FindTransformPass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventFindTransformPass_Parms, ReturnValue), Z_Construct_UClass_UCompositingElementTransform_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_FindTransformPass_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_FindTransformPass_Statics::NewProp_TransformType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_FindTransformPass_Statics::NewProp_PassResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_FindTransformPass_Statics::NewProp_OptionalPassName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_FindTransformPass_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_FindTransformPass_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure" },
		{ "CPP_Default_OptionalPassName", "None" },
		{ "DeterminesOutputType", "TransformType" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_FindTransformPass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "FindTransformPass", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_FindTransformPass_Statics::CompositingElement_eventFindTransformPass_Parms), Z_Construct_UFunction_ACompositingElement_FindTransformPass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_FindTransformPass_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_FindTransformPass_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_FindTransformPass_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_FindTransformPass()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_FindTransformPass_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_GetChildElements_Statics
	{
		struct CompositingElement_eventGetChildElements_Parms
		{
			TArray<ACompositingElement*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_GetChildElements_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ACompositingElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_GetChildElements_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACompositingElement_GetChildElements_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventGetChildElements_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_GetChildElements_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_GetChildElements_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_GetChildElements_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_GetChildElements_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_GetChildElements_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_GetChildElements_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|Element" },
		{ "Comment", "/**\n\x09 * Get the first level of current element's child composure elements. \n\x09 * @return TArray<ACompositingElement*>   The array containing all the first level children without any grandchildren.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ToolTip", "Get the first level of current element's child composure elements.\n@return TArray<ACompositingElement*>   The array containing all the first level children without any grandchildren." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_GetChildElements_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "GetChildElements", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_GetChildElements_Statics::CompositingElement_eventGetChildElements_Parms), Z_Construct_UFunction_ACompositingElement_GetChildElements_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_GetChildElements_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_GetChildElements_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_GetChildElements_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_GetChildElements()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_GetChildElements_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_GetCompElementName_Statics
	{
		struct CompositingElement_eventGetCompElementName_Parms
		{
			FName ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACompositingElement_GetCompElementName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventGetCompElementName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_GetCompElementName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_GetCompElementName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_GetCompElementName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|Element" },
		{ "Comment", "/** Return the FName of the composure element object*/" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ToolTip", "Return the FName of the composure element object" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_GetCompElementName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "GetCompElementName", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_GetCompElementName_Statics::CompositingElement_eventGetCompElementName_Parms), Z_Construct_UFunction_ACompositingElement_GetCompElementName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_GetCompElementName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_GetCompElementName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_GetCompElementName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_GetCompElementName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_GetCompElementName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_GetElementParent_Statics
	{
		struct CompositingElement_eventGetElementParent_Parms
		{
			ACompositingElement* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_GetElementParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventGetElementParent_Parms, ReturnValue), Z_Construct_UClass_ACompositingElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_GetElementParent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_GetElementParent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_GetElementParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|Element" },
		{ "Comment", "/**\n\x09 * Get the parent composure element of current element.\n\x09 * @return bool                Whether the function successfully finds the parent or not.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ToolTip", "Get the parent composure element of current element.\n@return bool                Whether the function successfully finds the parent or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_GetElementParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "GetElementParent", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_GetElementParent_Statics::CompositingElement_eventGetElementParent_Parms), Z_Construct_UFunction_ACompositingElement_GetElementParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_GetElementParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_GetElementParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_GetElementParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_GetElementParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_GetElementParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_GetInputsList_Statics
	{
		struct CompositingElement_eventGetInputsList_Parms
		{
			TArray<UCompositingElementInput*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_GetInputsList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCompositingElementInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACompositingElement_GetInputsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventGetInputsList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_GetInputsList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_GetInputsList_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_GetInputsList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_GetInputsList_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_GetInputsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "GetInputsList", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_GetInputsList_Statics::CompositingElement_eventGetInputsList_Parms), Z_Construct_UFunction_ACompositingElement_GetInputsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_GetInputsList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_GetInputsList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_GetInputsList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_GetInputsList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_GetInputsList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_GetLatestRenderResult_Statics
	{
		struct CompositingElement_eventGetLatestRenderResult_Parms
		{
			UTexture* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_GetLatestRenderResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventGetLatestRenderResult_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_GetLatestRenderResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_GetLatestRenderResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_GetLatestRenderResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure" },
		{ "Comment", "//const;\n" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ToolTip", "const;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_GetLatestRenderResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "GetLatestRenderResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_GetLatestRenderResult_Statics::CompositingElement_eventGetLatestRenderResult_Parms), Z_Construct_UFunction_ACompositingElement_GetLatestRenderResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_GetLatestRenderResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_GetLatestRenderResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_GetLatestRenderResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_GetLatestRenderResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_GetLatestRenderResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_GetOpacity_Statics
	{
		struct CompositingElement_eventGetOpacity_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACompositingElement_GetOpacity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventGetOpacity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_GetOpacity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_GetOpacity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_GetOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|Element" },
		{ "Comment", "/**\n\x09 * Return the rendering opacity of current composure actor.\n\x09 * @return float                The rendering opacity of current composure element.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ToolTip", "Return the rendering opacity of current composure actor.\n@return float                The rendering opacity of current composure element." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_GetOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "GetOpacity", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_GetOpacity_Statics::CompositingElement_eventGetOpacity_Parms), Z_Construct_UFunction_ACompositingElement_GetOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_GetOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_GetOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_GetOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_GetOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_GetOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_GetOutputsList_Statics
	{
		struct CompositingElement_eventGetOutputsList_Parms
		{
			TArray<UCompositingElementOutput*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_GetOutputsList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCompositingElementOutput_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACompositingElement_GetOutputsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventGetOutputsList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_GetOutputsList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_GetOutputsList_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_GetOutputsList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_GetOutputsList_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_GetOutputsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "GetOutputsList", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_GetOutputsList_Statics::CompositingElement_eventGetOutputsList_Parms), Z_Construct_UFunction_ACompositingElement_GetOutputsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_GetOutputsList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_GetOutputsList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_GetOutputsList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_GetOutputsList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_GetOutputsList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_GetRenderPriority_Statics
	{
		struct CompositingElement_eventGetRenderPriority_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACompositingElement_GetRenderPriority_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventGetRenderPriority_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_GetRenderPriority_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_GetRenderPriority_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_GetRenderPriority_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_GetRenderPriority_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "GetRenderPriority", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_GetRenderPriority_Statics::CompositingElement_eventGetRenderPriority_Parms), Z_Construct_UFunction_ACompositingElement_GetRenderPriority_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_GetRenderPriority_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_GetRenderPriority_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_GetRenderPriority_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_GetRenderPriority()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_GetRenderPriority_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_GetRenderResolution_Statics
	{
		struct CompositingElement_eventGetRenderResolution_Parms
		{
			FIntPoint ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACompositingElement_GetRenderResolution_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventGetRenderResolution_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_GetRenderResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_GetRenderResolution_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_GetRenderResolution_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_GetRenderResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "GetRenderResolution", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_GetRenderResolution_Statics::CompositingElement_eventGetRenderResolution_Parms), Z_Construct_UFunction_ACompositingElement_GetRenderResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_GetRenderResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_GetRenderResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_GetRenderResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_GetRenderResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_GetRenderResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_GetTransformsList_Statics
	{
		struct CompositingElement_eventGetTransformsList_Parms
		{
			TArray<UCompositingElementTransform*> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_GetTransformsList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCompositingElementTransform_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ACompositingElement_GetTransformsList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventGetTransformsList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_GetTransformsList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_GetTransformsList_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_GetTransformsList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_GetTransformsList_Statics::Function_MetaDataParams[] = {
		{ "BlueprintGetter", "" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_GetTransformsList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "GetTransformsList", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_GetTransformsList_Statics::CompositingElement_eventGetTransformsList_Parms), Z_Construct_UFunction_ACompositingElement_GetTransformsList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_GetTransformsList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_GetTransformsList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_GetTransformsList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_GetTransformsList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_GetTransformsList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_IsSubElement_Statics
	{
		struct CompositingElement_eventIsSubElement_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACompositingElement_IsSubElement_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CompositingElement_eventIsSubElement_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACompositingElement_IsSubElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CompositingElement_eventIsSubElement_Parms), &Z_Construct_UFunction_ACompositingElement_IsSubElement_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_IsSubElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_IsSubElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_IsSubElement_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|Element" },
		{ "Comment", "/**\n\x09 * Determines whether current composure element is a child of another composure element or not.\n\x09 * @return bool                Whether current composure actor is a child actor or not.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ToolTip", "Determines whether current composure element is a child of another composure element or not.\n@return bool                Whether current composure actor is a child actor or not." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_IsSubElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "IsSubElement", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_IsSubElement_Statics::CompositingElement_eventIsSubElement_Parms), Z_Construct_UFunction_ACompositingElement_IsSubElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_IsSubElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_IsSubElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_IsSubElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_IsSubElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_IsSubElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_RegisterPassResult_Statics
	{
		struct CompositingElement_eventRegisterPassResult_Parms
		{
			FName ReferenceName;
			UTexture* PassResult;
			bool bSetAsLatestRenderResult;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReferenceName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PassResult;
		static void NewProp_bSetAsLatestRenderResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSetAsLatestRenderResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACompositingElement_RegisterPassResult_Statics::NewProp_ReferenceName = { "ReferenceName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventRegisterPassResult_Parms, ReferenceName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_RegisterPassResult_Statics::NewProp_PassResult = { "PassResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventRegisterPassResult_Parms, PassResult), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACompositingElement_RegisterPassResult_Statics::NewProp_bSetAsLatestRenderResult_SetBit(void* Obj)
	{
		((CompositingElement_eventRegisterPassResult_Parms*)Obj)->bSetAsLatestRenderResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACompositingElement_RegisterPassResult_Statics::NewProp_bSetAsLatestRenderResult = { "bSetAsLatestRenderResult", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CompositingElement_eventRegisterPassResult_Parms), &Z_Construct_UFunction_ACompositingElement_RegisterPassResult_Statics::NewProp_bSetAsLatestRenderResult_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_RegisterPassResult_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_RegisterPassResult_Statics::NewProp_ReferenceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_RegisterPassResult_Statics::NewProp_PassResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_RegisterPassResult_Statics::NewProp_bSetAsLatestRenderResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_RegisterPassResult_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure" },
		{ "CPP_Default_bSetAsLatestRenderResult", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_RegisterPassResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "RegisterPassResult", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_RegisterPassResult_Statics::CompositingElement_eventRegisterPassResult_Parms), Z_Construct_UFunction_ACompositingElement_RegisterPassResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_RegisterPassResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_RegisterPassResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_RegisterPassResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_RegisterPassResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_RegisterPassResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_ReleaseOwnedTarget_Statics
	{
		struct CompositingElement_eventReleaseOwnedTarget_Parms
		{
			UTextureRenderTarget2D* OwnedTarget;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnedTarget;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_ReleaseOwnedTarget_Statics::NewProp_OwnedTarget = { "OwnedTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventReleaseOwnedTarget_Parms, OwnedTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACompositingElement_ReleaseOwnedTarget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CompositingElement_eventReleaseOwnedTarget_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACompositingElement_ReleaseOwnedTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CompositingElement_eventReleaseOwnedTarget_Parms), &Z_Construct_UFunction_ACompositingElement_ReleaseOwnedTarget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_ReleaseOwnedTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_ReleaseOwnedTarget_Statics::NewProp_OwnedTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_ReleaseOwnedTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_ReleaseOwnedTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_ReleaseOwnedTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "ReleaseOwnedTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_ReleaseOwnedTarget_Statics::CompositingElement_eventReleaseOwnedTarget_Parms), Z_Construct_UFunction_ACompositingElement_ReleaseOwnedTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_ReleaseOwnedTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_ReleaseOwnedTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_ReleaseOwnedTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_ReleaseOwnedTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_ReleaseOwnedTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_RenderCompElement_Statics
	{
		static void NewProp_bCameraCutThisFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCameraCutThisFrame;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ACompositingElement_RenderCompElement_Statics::NewProp_bCameraCutThisFrame_SetBit(void* Obj)
	{
		((CompositingElement_eventRenderCompElement_Parms*)Obj)->bCameraCutThisFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACompositingElement_RenderCompElement_Statics::NewProp_bCameraCutThisFrame = { "bCameraCutThisFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CompositingElement_eventRenderCompElement_Parms), &Z_Construct_UFunction_ACompositingElement_RenderCompElement_Statics::NewProp_bCameraCutThisFrame_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_RenderCompElement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventRenderCompElement_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_RenderCompElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_RenderCompElement_Statics::NewProp_bCameraCutThisFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_RenderCompElement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_RenderCompElement_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Composure" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_RenderCompElement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "RenderCompElement", nullptr, nullptr, sizeof(CompositingElement_eventRenderCompElement_Parms), Z_Construct_UFunction_ACompositingElement_RenderCompElement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_RenderCompElement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_RenderCompElement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_RenderCompElement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_RenderCompElement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_RenderCompElement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterial_Statics
	{
		struct CompositingElement_eventRenderCompositingMaterial_Parms
		{
			FCompositingMaterial CompMaterial;
			float RenderScale;
			FName ResultLookupName;
			ETargetUsageFlags UsageTag;
			UTexture* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompMaterial;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RenderScale;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ResultLookupName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UsageTag_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UsageTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterial_Statics::NewProp_CompMaterial = { "CompMaterial", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventRenderCompositingMaterial_Parms, CompMaterial), Z_Construct_UScriptStruct_FCompositingMaterial, METADATA_PARAMS(nullptr, 0) }; // 3535646560
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterial_Statics::NewProp_RenderScale = { "RenderScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventRenderCompositingMaterial_Parms, RenderScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterial_Statics::NewProp_ResultLookupName = { "ResultLookupName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventRenderCompositingMaterial_Parms, ResultLookupName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterial_Statics::NewProp_UsageTag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterial_Statics::NewProp_UsageTag = { "UsageTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventRenderCompositingMaterial_Parms, UsageTag), Z_Construct_UEnum_Composure_ETargetUsageFlags, METADATA_PARAMS(nullptr, 0) }; // 3417512825
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterial_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventRenderCompositingMaterial_Parms, ReturnValue), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterial_Statics::NewProp_CompMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterial_Statics::NewProp_RenderScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterial_Statics::NewProp_ResultLookupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterial_Statics::NewProp_UsageTag_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterial_Statics::NewProp_UsageTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterial_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure" },
		{ "CPP_Default_RenderScale", "1.000000" },
		{ "CPP_Default_ResultLookupName", "None" },
		{ "CPP_Default_UsageTag", "USAGE_None" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "RenderCompositingMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterial_Statics::CompositingElement_eventRenderCompositingMaterial_Parms), Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterialToTarget_Statics
	{
		struct CompositingElement_eventRenderCompositingMaterialToTarget_Parms
		{
			FCompositingMaterial CompMaterial;
			UTextureRenderTarget2D* RenderTarget;
			FName ResultLookupName;
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CompMaterial;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RenderTarget;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ResultLookupName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterialToTarget_Statics::NewProp_CompMaterial = { "CompMaterial", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventRenderCompositingMaterialToTarget_Parms, CompMaterial), Z_Construct_UScriptStruct_FCompositingMaterial, METADATA_PARAMS(nullptr, 0) }; // 3535646560
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterialToTarget_Statics::NewProp_RenderTarget = { "RenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventRenderCompositingMaterialToTarget_Parms, RenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterialToTarget_Statics::NewProp_ResultLookupName = { "ResultLookupName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventRenderCompositingMaterialToTarget_Parms, ResultLookupName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterialToTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventRenderCompositingMaterialToTarget_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterialToTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterialToTarget_Statics::NewProp_CompMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterialToTarget_Statics::NewProp_RenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterialToTarget_Statics::NewProp_ResultLookupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterialToTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterialToTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure" },
		{ "CPP_Default_ResultLookupName", "None" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterialToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "RenderCompositingMaterialToTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterialToTarget_Statics::CompositingElement_eventRenderCompositingMaterialToTarget_Parms), Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterialToTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterialToTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterialToTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterialToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterialToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterialToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_RequestNamedRenderTarget_Statics
	{
		struct CompositingElement_eventRequestNamedRenderTarget_Parms
		{
			FName ReferenceName;
			float RenderPercentage;
			ETargetUsageFlags UsageTag;
			UTextureRenderTarget2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReferenceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReferenceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderPercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RenderPercentage;
		static const UECodeGen_Private::FBytePropertyParams NewProp_UsageTag_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UsageTag;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_RequestNamedRenderTarget_Statics::NewProp_ReferenceName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACompositingElement_RequestNamedRenderTarget_Statics::NewProp_ReferenceName = { "ReferenceName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventRequestNamedRenderTarget_Parms, ReferenceName), METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_RequestNamedRenderTarget_Statics::NewProp_ReferenceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_RequestNamedRenderTarget_Statics::NewProp_ReferenceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_RequestNamedRenderTarget_Statics::NewProp_RenderPercentage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACompositingElement_RequestNamedRenderTarget_Statics::NewProp_RenderPercentage = { "RenderPercentage", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventRequestNamedRenderTarget_Parms, RenderPercentage), METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_RequestNamedRenderTarget_Statics::NewProp_RenderPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_RequestNamedRenderTarget_Statics::NewProp_RenderPercentage_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACompositingElement_RequestNamedRenderTarget_Statics::NewProp_UsageTag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACompositingElement_RequestNamedRenderTarget_Statics::NewProp_UsageTag = { "UsageTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventRequestNamedRenderTarget_Parms, UsageTag), Z_Construct_UEnum_Composure_ETargetUsageFlags, METADATA_PARAMS(nullptr, 0) }; // 3417512825
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_RequestNamedRenderTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventRequestNamedRenderTarget_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_RequestNamedRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_RequestNamedRenderTarget_Statics::NewProp_ReferenceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_RequestNamedRenderTarget_Statics::NewProp_RenderPercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_RequestNamedRenderTarget_Statics::NewProp_UsageTag_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_RequestNamedRenderTarget_Statics::NewProp_UsageTag,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_RequestNamedRenderTarget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_RequestNamedRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure" },
		{ "CPP_Default_RenderPercentage", "1.000000" },
		{ "CPP_Default_UsageTag", "USAGE_None" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_RequestNamedRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "RequestNamedRenderTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_RequestNamedRenderTarget_Statics::CompositingElement_eventRequestNamedRenderTarget_Parms), Z_Construct_UFunction_ACompositingElement_RequestNamedRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_RequestNamedRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_RequestNamedRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_RequestNamedRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_RequestNamedRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_RequestNamedRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_SetEditorColorPickerDisplayImage_Statics
	{
		struct CompositingElement_eventSetEditorColorPickerDisplayImage_Parms
		{
			UTexture* PickerDisplayImage;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickerDisplayImage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_SetEditorColorPickerDisplayImage_Statics::NewProp_PickerDisplayImage = { "PickerDisplayImage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventSetEditorColorPickerDisplayImage_Parms, PickerDisplayImage), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_SetEditorColorPickerDisplayImage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_SetEditorColorPickerDisplayImage_Statics::NewProp_PickerDisplayImage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_SetEditorColorPickerDisplayImage_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|Editor" },
		{ "Comment", "/* EDITOR ONLY - Specifies an intermediate image to display when picking (if left unset, we default to the final output image) */" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ToolTip", "EDITOR ONLY - Specifies an intermediate image to display when picking (if left unset, we default to the final output image)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_SetEditorColorPickerDisplayImage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "SetEditorColorPickerDisplayImage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_SetEditorColorPickerDisplayImage_Statics::CompositingElement_eventSetEditorColorPickerDisplayImage_Parms), Z_Construct_UFunction_ACompositingElement_SetEditorColorPickerDisplayImage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_SetEditorColorPickerDisplayImage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_SetEditorColorPickerDisplayImage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_SetEditorColorPickerDisplayImage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_SetEditorColorPickerDisplayImage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_SetEditorColorPickerDisplayImage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_SetEditorColorPickingTarget_Statics
	{
		struct CompositingElement_eventSetEditorColorPickingTarget_Parms
		{
			UTextureRenderTarget2D* PickingTarget;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PickingTarget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_SetEditorColorPickingTarget_Statics::NewProp_PickingTarget = { "PickingTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventSetEditorColorPickingTarget_Parms, PickingTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_SetEditorColorPickingTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_SetEditorColorPickingTarget_Statics::NewProp_PickingTarget,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_SetEditorColorPickingTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|Editor" },
		{ "Comment", "/* EDITOR ONLY - Specifies which intermediate target to pick colors from (if left unset, we default to the display image) */" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ToolTip", "EDITOR ONLY - Specifies which intermediate target to pick colors from (if left unset, we default to the display image)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_SetEditorColorPickingTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "SetEditorColorPickingTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_SetEditorColorPickingTarget_Statics::CompositingElement_eventSetEditorColorPickingTarget_Parms), Z_Construct_UFunction_ACompositingElement_SetEditorColorPickingTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_SetEditorColorPickingTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_SetEditorColorPickingTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_SetEditorColorPickingTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_SetEditorColorPickingTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_SetEditorColorPickingTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_SetElementName_Statics
	{
		struct CompositingElement_eventSetElementName_Parms
		{
			FName NewName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_NewName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_SetElementName_Statics::NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ACompositingElement_SetElementName_Statics::NewProp_NewName = { "NewName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventSetElementName_Parms, NewName), METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_SetElementName_Statics::NewProp_NewName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_SetElementName_Statics::NewProp_NewName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_SetElementName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_SetElementName_Statics::NewProp_NewName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_SetElementName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|Element" },
		{ "Comment", "/**\n\x09 * Rename composure actor's name\n\x09 * @param NewName             New name for current composure element.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ToolTip", "Rename composure actor's name\n@param NewName             New name for current composure element." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_SetElementName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "SetElementName", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_SetElementName_Statics::CompositingElement_eventSetElementName_Parms), Z_Construct_UFunction_ACompositingElement_SetElementName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_SetElementName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_SetElementName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_SetElementName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_SetElementName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_SetElementName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_SetOpacity_Statics
	{
		struct CompositingElement_eventSetOpacity_Parms
		{
			float NewOpacity;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NewOpacity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_SetOpacity_Statics::NewProp_NewOpacity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACompositingElement_SetOpacity_Statics::NewProp_NewOpacity = { "NewOpacity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventSetOpacity_Parms, NewOpacity), METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_SetOpacity_Statics::NewProp_NewOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_SetOpacity_Statics::NewProp_NewOpacity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_SetOpacity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_SetOpacity_Statics::NewProp_NewOpacity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_SetOpacity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|Element" },
		{ "Comment", "/**\n\x09 * Set the rendering opacity of current composure actor.\n\x09 * @param NewOpacity            The new opacity value set to the composure element. \n\x09 */" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ToolTip", "Set the rendering opacity of current composure actor.\n@param NewOpacity            The new opacity value set to the composure element." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_SetOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "SetOpacity", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_SetOpacity_Statics::CompositingElement_eventSetOpacity_Parms), Z_Construct_UFunction_ACompositingElement_SetOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_SetOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_SetOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_SetOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_SetOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_SetOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_SetRenderResolution_Statics
	{
		struct CompositingElement_eventSetRenderResolution_Parms
		{
			FIntPoint NewResolution;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewResolution;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACompositingElement_SetRenderResolution_Statics::NewProp_NewResolution = { "NewResolution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventSetRenderResolution_Parms, NewResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_SetRenderResolution_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_SetRenderResolution_Statics::NewProp_NewResolution,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_SetRenderResolution_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_SetRenderResolution_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "SetRenderResolution", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_SetRenderResolution_Statics::CompositingElement_eventSetRenderResolution_Parms), Z_Construct_UFunction_ACompositingElement_SetRenderResolution_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_SetRenderResolution_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_SetRenderResolution_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_SetRenderResolution_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_SetRenderResolution()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_SetRenderResolution_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACompositingElement_SetTargetCamera_Statics
	{
		struct CompositingElement_eventSetTargetCamera_Parms
		{
			ACameraActor* NewCameraActor;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCameraActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACompositingElement_SetTargetCamera_Statics::NewProp_NewCameraActor = { "NewCameraActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CompositingElement_eventSetTargetCamera_Parms, NewCameraActor), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACompositingElement_SetTargetCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACompositingElement_SetTargetCamera_Statics::NewProp_NewCameraActor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACompositingElement_SetTargetCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "Composure|Input" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACompositingElement_SetTargetCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACompositingElement, nullptr, "SetTargetCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACompositingElement_SetTargetCamera_Statics::CompositingElement_eventSetTargetCamera_Parms), Z_Construct_UFunction_ACompositingElement_SetTargetCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_SetTargetCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACompositingElement_SetTargetCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACompositingElement_SetTargetCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACompositingElement_SetTargetCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACompositingElement_SetTargetCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACompositingElement);
	UClass* Z_Construct_UClass_ACompositingElement_NoRegister()
	{
		return ACompositingElement::StaticClass();
	}
	struct Z_Construct_UClass_ACompositingElement_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompositingTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CompositingTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PostProcessProxy_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PostProcessProxy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Inputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformPasses_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TransformPasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransformPasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TransformPasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Outputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Outputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Outputs;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_CameraSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CameraSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetCameraActor_MetaData[];
#endif
		static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_TargetCameraActor;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ResolutionSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ResolutionSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ResolutionSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderResolution_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RenderResolution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RenderFormat_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RenderFormat;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseSharedTargetPool_MetaData[];
#endif
		static void NewProp_bUseSharedTargetPool_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSharedTargetPool;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FreezeFrameMask_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FreezeFrameMask;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_PreviewTransformSource_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewTransformSource_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_PreviewTransformSource;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreviewTransform_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PreviewTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultInputType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultInputType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultTransformType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultTransformType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOutputType_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultOutputType;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnTransformPassRendered_BP_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTransformPassRendered_BP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFinalPassRendered_BP_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinalPassRendered_BP;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompShotIdName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CompShotIdName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Parent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Parent;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ChildLayers_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ChildLayers_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildLayers;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DisabledMsgImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_DisabledMsgImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EmptyWarnImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EmptyWarnImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuspendedDbgImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SuspendedDbgImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CompilerErrImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CompilerErrImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsingDebugDisplayImage_MetaData[];
#endif
		static void NewProp_bUsingDebugDisplayImage_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsingDebugDisplayImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorPickerDisplayImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ColorPickerDisplayImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EditorPreviewImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_EditorPreviewImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorPickerTarget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ColorPickerTarget;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutputOpacity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutputOpacity;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UserConstructedInputs_ValueProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UserConstructedInputs_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UserConstructedInputs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserConstructedInputs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_UserConstructedInputs;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UserConstructedTransforms_ValueProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UserConstructedTransforms_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UserConstructedTransforms_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserConstructedTransforms_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_UserConstructedTransforms;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_UserConstructedOutputs_ValueProp_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_UserConstructedOutputs_ValueProp;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_UserConstructedOutputs_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UserConstructedOutputs_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_UserConstructedOutputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalInputs_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InternalInputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalInputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InternalInputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalTransformPasses_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InternalTransformPasses_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalTransformPasses_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InternalTransformPasses;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalOutputs_Inner_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InternalOutputs_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalOutputs_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InternalOutputs;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InternalAlphaPass_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_InternalAlphaPass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACompositingElement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AComposurePipelineBaseActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Composure,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACompositingElement_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACompositingElement_AddNewInputPass, "AddNewInputPass" }, // 1999617636
		{ &Z_Construct_UFunction_ACompositingElement_AddNewOutputPass, "AddNewOutputPass" }, // 3527863601
		{ &Z_Construct_UFunction_ACompositingElement_AddNewTransformPass, "AddNewTransformPass" }, // 2147738845
		{ &Z_Construct_UFunction_ACompositingElement_CreateNewInputPass, "CreateNewInputPass" }, // 1188543306
		{ &Z_Construct_UFunction_ACompositingElement_CreateNewOutputPass, "CreateNewOutputPass" }, // 1560328088
		{ &Z_Construct_UFunction_ACompositingElement_CreateNewTransformPass, "CreateNewTransformPass" }, // 2186649074
		{ &Z_Construct_UFunction_ACompositingElement_DeletePass, "DeletePass" }, // 2729461921
		{ &Z_Construct_UFunction_ACompositingElement_FindInputPass, "FindInputPass" }, // 4102880647
		{ &Z_Construct_UFunction_ACompositingElement_FindNamedRenderResult, "FindNamedRenderResult" }, // 1668644473
		{ &Z_Construct_UFunction_ACompositingElement_FindOutputPass, "FindOutputPass" }, // 654802298
		{ &Z_Construct_UFunction_ACompositingElement_FindTargetCamera, "FindTargetCamera" }, // 3748057103
		{ &Z_Construct_UFunction_ACompositingElement_FindTransformPass, "FindTransformPass" }, // 103332204
		{ &Z_Construct_UFunction_ACompositingElement_GetChildElements, "GetChildElements" }, // 2418504201
		{ &Z_Construct_UFunction_ACompositingElement_GetCompElementName, "GetCompElementName" }, // 3420275337
		{ &Z_Construct_UFunction_ACompositingElement_GetElementParent, "GetElementParent" }, // 1351619130
		{ &Z_Construct_UFunction_ACompositingElement_GetInputsList, "GetInputsList" }, // 3958631938
		{ &Z_Construct_UFunction_ACompositingElement_GetLatestRenderResult, "GetLatestRenderResult" }, // 1933808140
		{ &Z_Construct_UFunction_ACompositingElement_GetOpacity, "GetOpacity" }, // 1554639737
		{ &Z_Construct_UFunction_ACompositingElement_GetOutputsList, "GetOutputsList" }, // 2278352280
		{ &Z_Construct_UFunction_ACompositingElement_GetRenderPriority, "GetRenderPriority" }, // 2596276626
		{ &Z_Construct_UFunction_ACompositingElement_GetRenderResolution, "GetRenderResolution" }, // 2807945948
		{ &Z_Construct_UFunction_ACompositingElement_GetTransformsList, "GetTransformsList" }, // 500676246
		{ &Z_Construct_UFunction_ACompositingElement_IsSubElement, "IsSubElement" }, // 2316822182
		{ &Z_Construct_UFunction_ACompositingElement_RegisterPassResult, "RegisterPassResult" }, // 1100765339
		{ &Z_Construct_UFunction_ACompositingElement_ReleaseOwnedTarget, "ReleaseOwnedTarget" }, // 2481477095
		{ &Z_Construct_UFunction_ACompositingElement_RenderCompElement, "RenderCompElement" }, // 3189096527
		{ &Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterial, "RenderCompositingMaterial" }, // 3336395057
		{ &Z_Construct_UFunction_ACompositingElement_RenderCompositingMaterialToTarget, "RenderCompositingMaterialToTarget" }, // 3555142830
		{ &Z_Construct_UFunction_ACompositingElement_RequestNamedRenderTarget, "RequestNamedRenderTarget" }, // 2635302496
		{ &Z_Construct_UFunction_ACompositingElement_SetEditorColorPickerDisplayImage, "SetEditorColorPickerDisplayImage" }, // 642050991
		{ &Z_Construct_UFunction_ACompositingElement_SetEditorColorPickingTarget, "SetEditorColorPickingTarget" }, // 568037639
		{ &Z_Construct_UFunction_ACompositingElement_SetElementName, "SetElementName" }, // 963327718
		{ &Z_Construct_UFunction_ACompositingElement_SetOpacity, "SetOpacity" }, // 1654398190
		{ &Z_Construct_UFunction_ACompositingElement_SetRenderResolution, "SetRenderResolution" }, // 4239832409
		{ &Z_Construct_UFunction_ACompositingElement_SetTargetCamera, "SetTargetCamera" }, // 1475074209
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "DisplayName", "Empty Comp Shot" },
		{ "IncludePath", "CompositingElement.h" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ShortTooltip", "A simple base actor used to composite multiple render layers together." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_CompositingTarget_MetaData[] = {
		{ "Category", "Composure" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_CompositingTarget = { "CompositingTarget", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, CompositingTarget), Z_Construct_UClass_UComposureCompositingTargetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_CompositingTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_CompositingTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_PostProcessProxy_MetaData[] = {
		{ "Category", "Composure" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_PostProcessProxy = { "PostProcessProxy", nullptr, (EPropertyFlags)0x001400000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, PostProcessProxy), Z_Construct_UClass_UComposurePostProcessingPassProxy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_PostProcessProxy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_PostProcessProxy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_Inputs_Inner_MetaData[] = {
		{ "BlueprintGetter", "GetInputsList" },
		{ "Category", "Composure|Input" },
		{ "Comment", "/*********************************/// Pipeline Passes \n//   - protected to prevent users from directly modifying these lists (use the accessor functions instead)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "*****************************// Pipeline Passes\n//   - protected to prevent users from directly modifying these lists (use the accessor functions instead)" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCompositingElementInput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_Inputs_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_Inputs_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_Inputs_MetaData[] = {
		{ "BlueprintGetter", "GetInputsList" },
		{ "Category", "Composure|Input" },
		{ "Comment", "/*********************************/// Pipeline Passes \n//   - protected to prevent users from directly modifying these lists (use the accessor functions instead)\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "*****************************// Pipeline Passes\n//   - protected to prevent users from directly modifying these lists (use the accessor functions instead)" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x002408800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_Inputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_Inputs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_TransformPasses_Inner_MetaData[] = {
		{ "BlueprintGetter", "GetTransformsList" },
		{ "Category", "Composure|Transform/Compositing Passes" },
		{ "DisplayAfter", "Inputs" },
		{ "DisplayName", "Transform Passes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_TransformPasses_Inner = { "TransformPasses", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCompositingElementTransform_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_TransformPasses_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_TransformPasses_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_TransformPasses_MetaData[] = {
		{ "BlueprintGetter", "GetTransformsList" },
		{ "Category", "Composure|Transform/Compositing Passes" },
		{ "DisplayAfter", "Inputs" },
		{ "DisplayName", "Transform Passes" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_TransformPasses = { "TransformPasses", nullptr, (EPropertyFlags)0x002408800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, TransformPasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_TransformPasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_TransformPasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_Outputs_Inner_MetaData[] = {
		{ "BlueprintGetter", "GetOutputsList" },
		{ "Category", "Composure|Output" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_Outputs_Inner = { "Outputs", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCompositingElementOutput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_Outputs_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_Outputs_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_Outputs_MetaData[] = {
		{ "BlueprintGetter", "GetOutputsList" },
		{ "Category", "Composure|Output" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ShowOnlyInnerProperties", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_Outputs = { "Outputs", nullptr, (EPropertyFlags)0x002408800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, Outputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_Outputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_Outputs_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_CameraSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_CameraSource_MetaData[] = {
		{ "Category", "Composure|Input" },
		{ "Comment", "/*********************************/// Inputs\n" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ToolTip", "*****************************// Inputs" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_CameraSource = { "CameraSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, CameraSource), Z_Construct_UEnum_Composure_ESceneCameraLinkType, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_CameraSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_CameraSource_MetaData)) }; // 1689354421
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_TargetCameraActor_MetaData[] = {
		{ "Category", "Composure|Input" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_TargetCameraActor = { "TargetCameraActor", nullptr, (EPropertyFlags)0x0014000000000801, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, TargetCameraActor), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_TargetCameraActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_TargetCameraActor_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_ResolutionSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_ResolutionSource_MetaData[] = {
		{ "Category", "Composure|Output" },
		{ "Comment", "/*********************************/// Outputs\n" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ToolTip", "*****************************// Outputs" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_ResolutionSource = { "ResolutionSource", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, ResolutionSource), Z_Construct_UEnum_Composure_EInheritedSourceType, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_ResolutionSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_ResolutionSource_MetaData)) }; // 3812976098
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_RenderResolution_MetaData[] = {
		{ "BlueprintGetter", "GetRenderResolution" },
		{ "BlueprintSetter", "SetRenderResolution" },
		{ "Category", "Composure|Output" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_RenderResolution = { "RenderResolution", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, RenderResolution), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_RenderResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_RenderResolution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_RenderFormat_MetaData[] = {
		{ "Category", "Composure|Output" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_RenderFormat = { "RenderFormat", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, RenderFormat), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_RenderFormat_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_RenderFormat_MetaData)) }; // 1004718673
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_bUseSharedTargetPool_MetaData[] = {
		{ "Category", "Composure|Output" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	void Z_Construct_UClass_ACompositingElement_Statics::NewProp_bUseSharedTargetPool_SetBit(void* Obj)
	{
		((ACompositingElement*)Obj)->bUseSharedTargetPool = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_bUseSharedTargetPool = { "bUseSharedTargetPool", nullptr, (EPropertyFlags)0x0010040000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACompositingElement), &Z_Construct_UClass_ACompositingElement_Statics::NewProp_bUseSharedTargetPool_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_bUseSharedTargetPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_bUseSharedTargetPool_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_FreezeFrameMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/Composure.ETargetUsageFlags" },
		{ "Comment", "/*BlueprintReadWrite, Category = \"Composure\",*/" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ToolTip", "BlueprintReadWrite, Category = \"Composure\"," },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_FreezeFrameMask = { "FreezeFrameMask", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, FreezeFrameMask), METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_FreezeFrameMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_FreezeFrameMask_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_PreviewTransformSource_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_PreviewTransformSource_MetaData[] = {
		{ "Category", "Composure|Preview" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_PreviewTransformSource = { "PreviewTransformSource", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, PreviewTransformSource), Z_Construct_UEnum_Composure_EInheritedSourceType, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_PreviewTransformSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_PreviewTransformSource_MetaData)) }; // 3812976098
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_PreviewTransform_MetaData[] = {
		{ "Category", "Composure|Preview" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_PreviewTransform = { "PreviewTransform", nullptr, (EPropertyFlags)0x0016000800080009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, PreviewTransform), Z_Construct_UClass_UCompositingElementTransform_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_PreviewTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_PreviewTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_DefaultInputType_MetaData[] = {
		{ "Category", "Composure|Editor" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_DefaultInputType = { "DefaultInputType", nullptr, (EPropertyFlags)0x0014000800010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, DefaultInputType), Z_Construct_UClass_UClass, Z_Construct_UClass_UCompositingElementInput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_DefaultInputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_DefaultInputType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_DefaultTransformType_MetaData[] = {
		{ "Category", "Composure|Editor" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_DefaultTransformType = { "DefaultTransformType", nullptr, (EPropertyFlags)0x0014000800010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, DefaultTransformType), Z_Construct_UClass_UClass, Z_Construct_UClass_UCompositingElementTransform_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_DefaultTransformType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_DefaultTransformType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_DefaultOutputType_MetaData[] = {
		{ "Category", "Composure|Editor" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_DefaultOutputType = { "DefaultOutputType", nullptr, (EPropertyFlags)0x0014000800010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, DefaultOutputType), Z_Construct_UClass_UClass, Z_Construct_UClass_UCompositingElementOutput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_DefaultOutputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_DefaultOutputType_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_OnTransformPassRendered_BP_MetaData[] = {
		{ "Category", "Composure" },
		{ "Comment", "/** Called when a transform pass on this element is rendered */" },
		{ "DisplayName", "OnTransformPassRendered" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ToolTip", "Called when a transform pass on this element is rendered" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_OnTransformPassRendered_BP = { "OnTransformPassRendered_BP", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, OnTransformPassRendered_BP), Z_Construct_UDelegateFunction_Composure_DynamicOnTransformPassRendered__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_OnTransformPassRendered_BP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_OnTransformPassRendered_BP_MetaData)) }; // 1688905774
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_OnFinalPassRendered_BP_MetaData[] = {
		{ "Category", "Composure" },
		{ "Comment", "/** Called when the final output of this element is rendered */" },
		{ "DisplayName", "OnFinalPassRendered" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ToolTip", "Called when the final output of this element is rendered" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_OnFinalPassRendered_BP = { "OnFinalPassRendered_BP", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, OnFinalPassRendered_BP), Z_Construct_UDelegateFunction_Composure_DynamicOnFinalPassRendered__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_OnFinalPassRendered_BP_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_OnFinalPassRendered_BP_MetaData)) }; // 1844374103
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_CompShotIdName_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_CompShotIdName = { "CompShotIdName", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, CompShotIdName), METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_CompShotIdName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_CompShotIdName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_Parent_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_Parent = { "Parent", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, Parent), Z_Construct_UClass_ACompositingElement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_Parent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_Parent_MetaData)) };
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_ChildLayers_Inner = { "ChildLayers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_ACompositingElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_ChildLayers_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_ChildLayers = { "ChildLayers", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, ChildLayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_ChildLayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_ChildLayers_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_DisabledMsgImage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_DisabledMsgImage = { "DisabledMsgImage", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, DisabledMsgImage), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_DisabledMsgImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_DisabledMsgImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_EmptyWarnImage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_EmptyWarnImage = { "EmptyWarnImage", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, EmptyWarnImage), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_EmptyWarnImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_EmptyWarnImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_SuspendedDbgImage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_SuspendedDbgImage = { "SuspendedDbgImage", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, SuspendedDbgImage), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_SuspendedDbgImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_SuspendedDbgImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_CompilerErrImage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_CompilerErrImage = { "CompilerErrImage", nullptr, (EPropertyFlags)0x0044000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, CompilerErrImage), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_CompilerErrImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_CompilerErrImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_bUsingDebugDisplayImage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	void Z_Construct_UClass_ACompositingElement_Statics::NewProp_bUsingDebugDisplayImage_SetBit(void* Obj)
	{
		((ACompositingElement*)Obj)->bUsingDebugDisplayImage = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_bUsingDebugDisplayImage = { "bUsingDebugDisplayImage", nullptr, (EPropertyFlags)0x0040000800202000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACompositingElement), &Z_Construct_UClass_ACompositingElement_Statics::NewProp_bUsingDebugDisplayImage_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_bUsingDebugDisplayImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_bUsingDebugDisplayImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_ColorPickerDisplayImage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_ColorPickerDisplayImage = { "ColorPickerDisplayImage", nullptr, (EPropertyFlags)0x0044000800202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, ColorPickerDisplayImage), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_ColorPickerDisplayImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_ColorPickerDisplayImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_EditorPreviewImage_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_EditorPreviewImage = { "EditorPreviewImage", nullptr, (EPropertyFlags)0x0044000800202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, EditorPreviewImage), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_EditorPreviewImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_EditorPreviewImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_ColorPickerTarget_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_ColorPickerTarget = { "ColorPickerTarget", nullptr, (EPropertyFlags)0x0044000800202000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, ColorPickerTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_ColorPickerTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_ColorPickerTarget_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_OutputOpacity_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_OutputOpacity = { "OutputOpacity", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, OutputOpacity), METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_OutputOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_OutputOpacity_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedInputs_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedInputs_ValueProp = { "UserConstructedInputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UEnum_Composure_ECompPassConstructionType, METADATA_PARAMS(nullptr, 0) }; // 3049140010
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedInputs_Key_KeyProp = { "UserConstructedInputs_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCompositingElementInput_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedInputs_MetaData[] = {
		{ "Comment", "/** \n\x09 * Lists containing passes added programatically (or through Blueprints) via the AddNewPass() functions. \n\x09 * These need their own separate lists to: 1) hide from the details panel, and 2) clear on \n\x09 * re-construction, so we don't perpetually grow the lists.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ToolTip", "Lists containing passes added programatically (or through Blueprints) via the AddNewPass() functions.\nThese need their own separate lists to: 1) hide from the details panel, and 2) clear on\nre-construction, so we don't perpetually grow the lists." },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedInputs = { "UserConstructedInputs", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, UserConstructedInputs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedInputs_MetaData)) }; // 3049140010
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedTransforms_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedTransforms_ValueProp = { "UserConstructedTransforms", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UEnum_Composure_ECompPassConstructionType, METADATA_PARAMS(nullptr, 0) }; // 3049140010
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedTransforms_Key_KeyProp = { "UserConstructedTransforms_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCompositingElementTransform_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedTransforms_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedTransforms = { "UserConstructedTransforms", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, UserConstructedTransforms), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedTransforms_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedTransforms_MetaData)) }; // 3049140010
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedOutputs_ValueProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedOutputs_ValueProp = { "UserConstructedOutputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UEnum_Composure_ECompPassConstructionType, METADATA_PARAMS(nullptr, 0) }; // 3049140010
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedOutputs_Key_KeyProp = { "UserConstructedOutputs_Key", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCompositingElementOutput_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedOutputs_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedOutputs = { "UserConstructedOutputs", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, UserConstructedOutputs), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedOutputs_MetaData)) }; // 3049140010
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalInputs_Inner_MetaData[] = {
		{ "Comment", "/** \n\x09 * Authoritative lists that we use to iterate on the passes - conjoined from the public lists and the  \n\x09 * internal 'UserConstructed' ones. Used to: 1) have a single 'goto' list (w/ no nullptrs), and 2)\n\x09 * determine passes that were cleared from the public lists so we can halt their processing (still \n\x09 * alive via the transaction buffer).\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ToolTip", "Authoritative lists that we use to iterate on the passes - conjoined from the public lists and the\ninternal 'UserConstructed' ones. Used to: 1) have a single 'goto' list (w/ no nullptrs), and 2)\ndetermine passes that were cleared from the public lists so we can halt their processing (still\nalive via the transaction buffer)." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalInputs_Inner = { "InternalInputs", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCompositingElementInput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalInputs_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalInputs_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalInputs_MetaData[] = {
		{ "Comment", "/** \n\x09 * Authoritative lists that we use to iterate on the passes - conjoined from the public lists and the  \n\x09 * internal 'UserConstructed' ones. Used to: 1) have a single 'goto' list (w/ no nullptrs), and 2)\n\x09 * determine passes that were cleared from the public lists so we can halt their processing (still \n\x09 * alive via the transaction buffer).\n\x09 */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
		{ "ToolTip", "Authoritative lists that we use to iterate on the passes - conjoined from the public lists and the\ninternal 'UserConstructed' ones. Used to: 1) have a single 'goto' list (w/ no nullptrs), and 2)\ndetermine passes that were cleared from the public lists so we can halt their processing (still\nalive via the transaction buffer)." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalInputs = { "InternalInputs", nullptr, (EPropertyFlags)0x00c4008000202008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, InternalInputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalInputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalInputs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalTransformPasses_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalTransformPasses_Inner = { "InternalTransformPasses", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCompositingElementTransform_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalTransformPasses_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalTransformPasses_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalTransformPasses_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalTransformPasses = { "InternalTransformPasses", nullptr, (EPropertyFlags)0x00c4008000202008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, InternalTransformPasses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalTransformPasses_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalTransformPasses_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalOutputs_Inner_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalOutputs_Inner = { "InternalOutputs", nullptr, (EPropertyFlags)0x0006000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UCompositingElementOutput_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalOutputs_Inner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalOutputs_Inner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalOutputs_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalOutputs = { "InternalOutputs", nullptr, (EPropertyFlags)0x00c4008000202008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, InternalOutputs), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalOutputs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalOutputs_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalAlphaPass_MetaData[] = {
		{ "ModuleRelativePath", "Classes/CompositingElement.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalAlphaPass = { "InternalAlphaPass", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACompositingElement, InternalAlphaPass), Z_Construct_UClass_UAlphaTransformPass_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalAlphaPass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalAlphaPass_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACompositingElement_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_CompositingTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_PostProcessProxy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_Inputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_Inputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_TransformPasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_TransformPasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_Outputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_Outputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_CameraSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_CameraSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_TargetCameraActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_ResolutionSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_ResolutionSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_RenderResolution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_RenderFormat,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_bUseSharedTargetPool,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_FreezeFrameMask,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_PreviewTransformSource_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_PreviewTransformSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_PreviewTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_DefaultInputType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_DefaultTransformType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_DefaultOutputType,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_OnTransformPassRendered_BP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_OnFinalPassRendered_BP,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_CompShotIdName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_Parent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_ChildLayers_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_ChildLayers,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_DisabledMsgImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_EmptyWarnImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_SuspendedDbgImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_CompilerErrImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_bUsingDebugDisplayImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_ColorPickerDisplayImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_EditorPreviewImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_ColorPickerTarget,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_OutputOpacity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedInputs_ValueProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedInputs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedInputs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedTransforms_ValueProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedTransforms_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedTransforms_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedTransforms,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedOutputs_ValueProp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedOutputs_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedOutputs_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_UserConstructedOutputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalInputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalInputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalTransformPasses_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalTransformPasses,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalOutputs_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalOutputs,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACompositingElement_Statics::NewProp_InternalAlphaPass,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ACompositingElement_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UCompImageColorPickerInterface_NoRegister, (int32)VTABLE_OFFSET(ACompositingElement, ICompImageColorPickerInterface), false },  // 2773550083
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACompositingElement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACompositingElement>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACompositingElement_Statics::ClassParams = {
		&ACompositingElement::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACompositingElement_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACompositingElement_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACompositingElement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACompositingElement()
	{
		if (!Z_Registration_Info_UClass_ACompositingElement.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACompositingElement.OuterSingleton, Z_Construct_UClass_ACompositingElement_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACompositingElement.OuterSingleton;
	}
	template<> COMPOSURE_API UClass* StaticClass<ACompositingElement>()
	{
		return ACompositingElement::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACompositingElement);
	ACompositingElement::~ACompositingElement() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(ACompositingElement)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_Statics::EnumInfo[] = {
		{ ESceneCameraLinkType_StaticEnum, TEXT("ESceneCameraLinkType"), &Z_Registration_Info_UEnum_ESceneCameraLinkType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1689354421U) },
		{ EInheritedSourceType_StaticEnum, TEXT("EInheritedSourceType"), &Z_Registration_Info_UEnum_EInheritedSourceType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3812976098U) },
		{ ETargetUsageFlags_StaticEnum, TEXT("ETargetUsageFlags"), &Z_Registration_Info_UEnum_ETargetUsageFlags, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3417512825U) },
		{ ECompPassConstructionType_StaticEnum, TEXT("ECompPassConstructionType"), &Z_Registration_Info_UEnum_ECompPassConstructionType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3049140010U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACompositingElement, ACompositingElement::StaticClass, TEXT("ACompositingElement"), &Z_Registration_Info_UClass_ACompositingElement, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACompositingElement), 1372517634U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_472198668(TEXT("/Script/Composure"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_Composure_Source_Composure_Classes_CompositingElement_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
