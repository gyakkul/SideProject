// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DMXFixtureComponent.h"
#include "DMXAttribute.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDMXFixtureComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	DMXFIXTURES_API UClass* Z_Construct_UClass_ADMXFixtureActor_NoRegister();
	DMXFIXTURES_API UClass* Z_Construct_UClass_UDMXFixtureComponent();
	DMXFIXTURES_API UClass* Z_Construct_UClass_UDMXFixtureComponent_NoRegister();
	DMXFIXTURES_API UScriptStruct* Z_Construct_UScriptStruct_FDMXChannelData();
	DMXPROTOCOL_API UScriptStruct* Z_Construct_UScriptStruct_FDMXAttributeName();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_DMXFixtures();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DMXChannelData;
class UScriptStruct* FDMXChannelData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DMXChannelData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DMXChannelData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDMXChannelData, (UObject*)Z_Construct_UPackage__Script_DMXFixtures(), TEXT("DMXChannelData"));
	}
	return Z_Registration_Info_UScriptStruct_DMXChannelData.OuterSingleton;
}
template<> DMXFIXTURES_API UScriptStruct* StaticStruct<FDMXChannelData>()
{
	return FDMXChannelData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FDMXChannelData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MinValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MinValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXChannelData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDMXChannelData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDMXChannelData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXChannelData_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "DMX Channel" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDMXChannelData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXChannelData, Name), Z_Construct_UScriptStruct_FDMXAttributeName, METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXChannelData_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXChannelData_Statics::NewProp_Name_MetaData)) }; // 2246266977
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXChannelData_Statics::NewProp_MinValue_MetaData[] = {
		{ "Category", "DMX Channel" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXChannelData_Statics::NewProp_MinValue = { "MinValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXChannelData, MinValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXChannelData_Statics::NewProp_MinValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXChannelData_Statics::NewProp_MinValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXChannelData_Statics::NewProp_MaxValue_MetaData[] = {
		{ "Category", "DMX Channel" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXChannelData_Statics::NewProp_MaxValue = { "MaxValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXChannelData, MaxValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXChannelData_Statics::NewProp_MaxValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXChannelData_Statics::NewProp_MaxValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDMXChannelData_Statics::NewProp_DefaultValue_MetaData[] = {
		{ "Category", "DMX Channel" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDMXChannelData_Statics::NewProp_DefaultValue = { "DefaultValue", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FDMXChannelData, DefaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXChannelData_Statics::NewProp_DefaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXChannelData_Statics::NewProp_DefaultValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDMXChannelData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXChannelData_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXChannelData_Statics::NewProp_MinValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXChannelData_Statics::NewProp_MaxValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDMXChannelData_Statics::NewProp_DefaultValue,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDMXChannelData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DMXFixtures,
		nullptr,
		&NewStructOps,
		"DMXChannelData",
		sizeof(FDMXChannelData),
		alignof(FDMXChannelData),
		Z_Construct_UScriptStruct_FDMXChannelData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXChannelData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDMXChannelData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDMXChannelData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDMXChannelData()
	{
		if (!Z_Registration_Info_UScriptStruct_DMXChannelData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DMXChannelData.InnerSingleton, Z_Construct_UScriptStruct_FDMXChannelData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_DMXChannelData.InnerSingleton;
	}
	DEFINE_FUNCTION(UDMXFixtureComponent::execGetSupportedDMXAttributes)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_OutAttributeNames);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetSupportedDMXAttributes_Implementation(Z_Param_Out_OutAttributeNames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXFixtureComponent::execGetTextureCenterColors)
	{
		P_GET_OBJECT(UTexture2D,Z_Param_TextureAtlas);
		P_GET_PROPERTY(FIntProperty,Z_Param_numTextures);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FLinearColor>*)Z_Param__Result=P_THIS->GetTextureCenterColors(Z_Param_TextureAtlas,Z_Param_numTextures);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXFixtureComponent::execGetParentFixtureActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADMXFixtureActor**)Z_Param__Result=P_THIS->GetParentFixtureActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDMXFixtureComponent::execInitialize)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize();
		P_NATIVE_END;
	}
	struct DMXFixtureComponent_eventGetSupportedDMXAttributes_Parms
	{
		TArray<FName> OutAttributeNames;
	};
	struct DMXFixtureComponent_eventInterpolateComponent_Parms
	{
		float DeltaSeconds;
	};
	static FName NAME_UDMXFixtureComponent_GetSupportedDMXAttributes = FName(TEXT("GetSupportedDMXAttributes"));
	void UDMXFixtureComponent::GetSupportedDMXAttributes(TArray<FName>& OutAttributeNames)
	{
		DMXFixtureComponent_eventGetSupportedDMXAttributes_Parms Parms;
		Parms.OutAttributeNames=OutAttributeNames;
		ProcessEvent(FindFunctionChecked(NAME_UDMXFixtureComponent_GetSupportedDMXAttributes),&Parms);
		OutAttributeNames=Parms.OutAttributeNames;
	}
	static FName NAME_UDMXFixtureComponent_InitializeComponent = FName(TEXT("InitializeComponent"));
	void UDMXFixtureComponent::InitializeComponent()
	{
		ProcessEvent(FindFunctionChecked(NAME_UDMXFixtureComponent_InitializeComponent),NULL);
	}
	static FName NAME_UDMXFixtureComponent_InterpolateComponent = FName(TEXT("InterpolateComponent"));
	void UDMXFixtureComponent::InterpolateComponent(float DeltaSeconds)
	{
		DMXFixtureComponent_eventInterpolateComponent_Parms Parms;
		Parms.DeltaSeconds=DeltaSeconds;
		ProcessEvent(FindFunctionChecked(NAME_UDMXFixtureComponent_InterpolateComponent),&Parms);
	}
	void UDMXFixtureComponent::StaticRegisterNativesUDMXFixtureComponent()
	{
		UClass* Class = UDMXFixtureComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetParentFixtureActor", &UDMXFixtureComponent::execGetParentFixtureActor },
			{ "GetSupportedDMXAttributes", &UDMXFixtureComponent::execGetSupportedDMXAttributes },
			{ "GetTextureCenterColors", &UDMXFixtureComponent::execGetTextureCenterColors },
			{ "Initialize", &UDMXFixtureComponent::execInitialize },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDMXFixtureComponent_GetParentFixtureActor_Statics
	{
		struct DMXFixtureComponent_eventGetParentFixtureActor_Parms
		{
			ADMXFixtureActor* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXFixtureComponent_GetParentFixtureActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureComponent_eventGetParentFixtureActor_Parms, ReturnValue), Z_Construct_UClass_ADMXFixtureActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXFixtureComponent_GetParentFixtureActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXFixtureComponent_GetParentFixtureActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXFixtureComponent_GetParentFixtureActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** If attached to a DMX Fixture Actor, returns the parent fixture actor. */" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponent.h" },
		{ "ToolTip", "If attached to a DMX Fixture Actor, returns the parent fixture actor." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXFixtureComponent_GetParentFixtureActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXFixtureComponent, nullptr, "GetParentFixtureActor", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXFixtureComponent_GetParentFixtureActor_Statics::DMXFixtureComponent_eventGetParentFixtureActor_Parms), Z_Construct_UFunction_UDMXFixtureComponent_GetParentFixtureActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponent_GetParentFixtureActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXFixtureComponent_GetParentFixtureActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponent_GetParentFixtureActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXFixtureComponent_GetParentFixtureActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXFixtureComponent_GetParentFixtureActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXFixtureComponent_GetSupportedDMXAttributes_Statics
	{
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutAttributeNames_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAttributeNames;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UDMXFixtureComponent_GetSupportedDMXAttributes_Statics::NewProp_OutAttributeNames_Inner = { "OutAttributeNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXFixtureComponent_GetSupportedDMXAttributes_Statics::NewProp_OutAttributeNames = { "OutAttributeNames", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureComponent_eventGetSupportedDMXAttributes_Parms, OutAttributeNames), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXFixtureComponent_GetSupportedDMXAttributes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXFixtureComponent_GetSupportedDMXAttributes_Statics::NewProp_OutAttributeNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXFixtureComponent_GetSupportedDMXAttributes_Statics::NewProp_OutAttributeNames,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXFixtureComponent_GetSupportedDMXAttributes_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Should be implemented to let other objects (e.g. datasmith) know which attributes the component can handle */" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponent.h" },
		{ "ToolTip", "Should be implemented to let other objects (e.g. datasmith) know which attributes the component can handle" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXFixtureComponent_GetSupportedDMXAttributes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXFixtureComponent, nullptr, "GetSupportedDMXAttributes", nullptr, nullptr, sizeof(DMXFixtureComponent_eventGetSupportedDMXAttributes_Parms), Z_Construct_UFunction_UDMXFixtureComponent_GetSupportedDMXAttributes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponent_GetSupportedDMXAttributes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXFixtureComponent_GetSupportedDMXAttributes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponent_GetSupportedDMXAttributes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXFixtureComponent_GetSupportedDMXAttributes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXFixtureComponent_GetSupportedDMXAttributes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXFixtureComponent_GetTextureCenterColors_Statics
	{
		struct DMXFixtureComponent_eventGetTextureCenterColors_Parms
		{
			UTexture2D* TextureAtlas;
			int32 numTextures;
			TArray<FLinearColor> ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureAtlas;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_numTextures;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDMXFixtureComponent_GetTextureCenterColors_Statics::NewProp_TextureAtlas = { "TextureAtlas", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureComponent_eventGetTextureCenterColors_Parms, TextureAtlas), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UDMXFixtureComponent_GetTextureCenterColors_Statics::NewProp_numTextures = { "numTextures", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureComponent_eventGetTextureCenterColors_Parms, numTextures), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UDMXFixtureComponent_GetTextureCenterColors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UDMXFixtureComponent_GetTextureCenterColors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureComponent_eventGetTextureCenterColors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXFixtureComponent_GetTextureCenterColors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXFixtureComponent_GetTextureCenterColors_Statics::NewProp_TextureAtlas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXFixtureComponent_GetTextureCenterColors_Statics::NewProp_numTextures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXFixtureComponent_GetTextureCenterColors_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXFixtureComponent_GetTextureCenterColors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXFixtureComponent_GetTextureCenterColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Reads pixel color in the middle of each \"Texture\" and output linear colors */" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponent.h" },
		{ "ToolTip", "Reads pixel color in the middle of each \"Texture\" and output linear colors" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXFixtureComponent_GetTextureCenterColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXFixtureComponent, nullptr, "GetTextureCenterColors", nullptr, nullptr, sizeof(Z_Construct_UFunction_UDMXFixtureComponent_GetTextureCenterColors_Statics::DMXFixtureComponent_eventGetTextureCenterColors_Parms), Z_Construct_UFunction_UDMXFixtureComponent_GetTextureCenterColors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponent_GetTextureCenterColors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXFixtureComponent_GetTextureCenterColors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponent_GetTextureCenterColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXFixtureComponent_GetTextureCenterColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXFixtureComponent_GetTextureCenterColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXFixtureComponent_Initialize_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXFixtureComponent_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Initializes the component */" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponent.h" },
		{ "ToolTip", "Initializes the component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXFixtureComponent_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXFixtureComponent, nullptr, "Initialize", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXFixtureComponent_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponent_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXFixtureComponent_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXFixtureComponent_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXFixtureComponent_InitializeComponent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXFixtureComponent_InitializeComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Called to initialize the component in blueprints */" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponent.h" },
		{ "ToolTip", "Called to initialize the component in blueprints" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXFixtureComponent_InitializeComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXFixtureComponent, nullptr, "InitializeComponent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXFixtureComponent_InitializeComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponent_InitializeComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXFixtureComponent_InitializeComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXFixtureComponent_InitializeComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDMXFixtureComponent_InterpolateComponent_Statics
	{
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UDMXFixtureComponent_InterpolateComponent_Statics::NewProp_DeltaSeconds = { "DeltaSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(DMXFixtureComponent_eventInterpolateComponent_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDMXFixtureComponent_InterpolateComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDMXFixtureComponent_InterpolateComponent_Statics::NewProp_DeltaSeconds,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDMXFixtureComponent_InterpolateComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "DMX" },
		{ "Comment", "/** Called each tick when interpolation is enabled, to calculate the next value */" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponent.h" },
		{ "ToolTip", "Called each tick when interpolation is enabled, to calculate the next value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDMXFixtureComponent_InterpolateComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDMXFixtureComponent, nullptr, "InterpolateComponent", nullptr, nullptr, sizeof(DMXFixtureComponent_eventInterpolateComponent_Parms), Z_Construct_UFunction_UDMXFixtureComponent_InterpolateComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponent_InterpolateComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDMXFixtureComponent_InterpolateComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDMXFixtureComponent_InterpolateComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDMXFixtureComponent_InterpolateComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDMXFixtureComponent_InterpolateComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDMXFixtureComponent);
	UClass* Z_Construct_UClass_UDMXFixtureComponent_NoRegister()
	{
		return UDMXFixtureComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDMXFixtureComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsEnabled_MetaData[];
#endif
		static void NewProp_bIsEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkipThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SkipThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseInterpolation_MetaData[];
#endif
		static void NewProp_bUseInterpolation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseInterpolation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpolationScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpolationScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUsingMatrixData_MetaData[];
#endif
		static void NewProp_bUsingMatrixData_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsingMatrixData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDMXFixtureComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DMXFixtures,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDMXFixtureComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDMXFixtureComponent_GetParentFixtureActor, "GetParentFixtureActor" }, // 4014322338
		{ &Z_Construct_UFunction_UDMXFixtureComponent_GetSupportedDMXAttributes, "GetSupportedDMXAttributes" }, // 2058760470
		{ &Z_Construct_UFunction_UDMXFixtureComponent_GetTextureCenterColors, "GetTextureCenterColors" }, // 3932326728
		{ &Z_Construct_UFunction_UDMXFixtureComponent_Initialize, "Initialize" }, // 1897967023
		{ &Z_Construct_UFunction_UDMXFixtureComponent_InitializeComponent, "InitializeComponent" }, // 936398260
		{ &Z_Construct_UFunction_UDMXFixtureComponent_InterpolateComponent, "InterpolateComponent" }, // 3784656298
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXFixtureComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DMXFixtureComponent.h" },
		{ "IsBlueprintBase", "FALSE" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_bIsEnabled_MetaData[] = {
		{ "Category", "DMX Parameters" },
		{ "Comment", "/** If used within a DMX Fixture Actor or Fixture Matrix Actor, the component only receives data when set to true. Else needs be implemented in blueprints. */" },
		{ "DisplayPriority", "0" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponent.h" },
		{ "ToolTip", "If used within a DMX Fixture Actor or Fixture Matrix Actor, the component only receives data when set to true. Else needs be implemented in blueprints." },
	};
#endif
	void Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
	{
		((UDMXFixtureComponent*)Obj)->bIsEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXFixtureComponent), &Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_bIsEnabled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_bIsEnabled_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_SkipThreshold_MetaData[] = {
		{ "Category", "DMX Parameters" },
		{ "Comment", "/** Value changes smaller than this threshold are ignored */" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponent.h" },
		{ "ToolTip", "Value changes smaller than this threshold are ignored" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_SkipThreshold = { "SkipThreshold", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXFixtureComponent, SkipThreshold), METADATA_PARAMS(Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_SkipThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_SkipThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_bUseInterpolation_MetaData[] = {
		{ "Category", "DMX Parameters" },
		{ "Comment", "/** If used within a DMX Fixture Actor or Fixture Matrix Actor, the plugin interpolates towards the last set value. */" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponent.h" },
		{ "ToolTip", "If used within a DMX Fixture Actor or Fixture Matrix Actor, the plugin interpolates towards the last set value." },
	};
#endif
	void Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_bUseInterpolation_SetBit(void* Obj)
	{
		((UDMXFixtureComponent*)Obj)->bUseInterpolation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_bUseInterpolation = { "bUseInterpolation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXFixtureComponent), &Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_bUseInterpolation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_bUseInterpolation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_bUseInterpolation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_InterpolationScale_MetaData[] = {
		{ "Category", "DMX Parameters" },
		{ "Comment", "/** The scale of the interpolation speed. Faster when > 1, slower when < 1 */" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponent.h" },
		{ "ToolTip", "The scale of the interpolation speed. Faster when > 1, slower when < 1" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_InterpolationScale = { "InterpolationScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UDMXFixtureComponent, InterpolationScale), METADATA_PARAMS(Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_InterpolationScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_InterpolationScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_bUsingMatrixData_MetaData[] = {
		{ "Comment", "/** True if the component is attached to a matrix fixture */" },
		{ "ModuleRelativePath", "Public/DMXFixtureComponent.h" },
		{ "ToolTip", "True if the component is attached to a matrix fixture" },
	};
#endif
	void Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_bUsingMatrixData_SetBit(void* Obj)
	{
		((UDMXFixtureComponent*)Obj)->bUsingMatrixData = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_bUsingMatrixData = { "bUsingMatrixData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UDMXFixtureComponent), &Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_bUsingMatrixData_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_bUsingMatrixData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_bUsingMatrixData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDMXFixtureComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_bIsEnabled,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_SkipThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_bUseInterpolation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_InterpolationScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDMXFixtureComponent_Statics::NewProp_bUsingMatrixData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDMXFixtureComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDMXFixtureComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDMXFixtureComponent_Statics::ClassParams = {
		&UDMXFixtureComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDMXFixtureComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixtureComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UDMXFixtureComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDMXFixtureComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDMXFixtureComponent()
	{
		if (!Z_Registration_Info_UClass_UDMXFixtureComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDMXFixtureComponent.OuterSingleton, Z_Construct_UClass_UDMXFixtureComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDMXFixtureComponent.OuterSingleton;
	}
	template<> DMXFIXTURES_API UClass* StaticClass<UDMXFixtureComponent>()
	{
		return UDMXFixtureComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDMXFixtureComponent);
	UDMXFixtureComponent::~UDMXFixtureComponent() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_Statics::ScriptStructInfo[] = {
		{ FDMXChannelData::StaticStruct, Z_Construct_UScriptStruct_FDMXChannelData_Statics::NewStructOps, TEXT("DMXChannelData"), &Z_Registration_Info_UScriptStruct_DMXChannelData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDMXChannelData), 2484573544U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDMXFixtureComponent, UDMXFixtureComponent::StaticClass, TEXT("UDMXFixtureComponent"), &Z_Registration_Info_UClass_UDMXFixtureComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDMXFixtureComponent), 1227198996U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_1013980026(TEXT("/Script/DMXFixtures"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_VirtualProduction_DMX_DMXFixtures_Source_DMXFixtures_Public_DMXFixtureComponent_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
