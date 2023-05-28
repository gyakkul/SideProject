// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MuCO/CustomizableObjectInstance.h"
#include "../Public/MuCO/CustomizableObjectInstanceDescriptor.h"
#include "../Public/MuCO/CustomizableObjectParameterTypeDefinitions.h"
#include "../Public/MuCO/MultilayerProjector.h"
#include "GameplayTagContainer.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomizableObjectInstance() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableInstancePrivateData_NoRegister();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObject_NoRegister();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectInstance();
	CUSTOMIZABLEOBJECT_API UClass* Z_Construct_UClass_UCustomizableObjectInstance_NoRegister();
	CUSTOMIZABLEOBJECT_API UEnum* Z_Construct_UEnum_CustomizableObject_ECustomizableObjectProjectorType();
	CUSTOMIZABLEOBJECT_API UFunction* Z_Construct_UDelegateFunction_CustomizableObject_BeginDestroyDelegate__DelegateSignature();
	CUSTOMIZABLEOBJECT_API UFunction* Z_Construct_UDelegateFunction_CustomizableObject_BeginUpdateDelegate__DelegateSignature();
	CUSTOMIZABLEOBJECT_API UFunction* Z_Construct_UDelegateFunction_CustomizableObject_EachComponentAnimInstanceClassDelegate__DelegateSignature();
	CUSTOMIZABLEOBJECT_API UFunction* Z_Construct_UDelegateFunction_CustomizableObject_ObjectInstanceUpdatedDelegate__DelegateSignature();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomizedMaterialTexture2D();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMultilayerProjector();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMultilayerProjectorLayer();
	CUSTOMIZABLEOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FMultilayerProjectorVirtualLayer();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
	UPackage* Z_Construct_UPackage__Script_CustomizableObject();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CustomizedMaterialTexture2D;
class UScriptStruct* FCustomizedMaterialTexture2D::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CustomizedMaterialTexture2D.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CustomizedMaterialTexture2D.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomizedMaterialTexture2D, (UObject*)Z_Construct_UPackage__Script_CustomizableObject(), TEXT("CustomizedMaterialTexture2D"));
	}
	return Z_Registration_Info_UScriptStruct_CustomizedMaterialTexture2D.OuterSingleton;
}
template<> CUSTOMIZABLEOBJECT_API UScriptStruct* StaticStruct<FCustomizedMaterialTexture2D>()
{
	return FCustomizedMaterialTexture2D::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FCustomizedMaterialTexture2D_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedMaterialTexture2D_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomizedMaterialTexture2D_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomizedMaterialTexture2D>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedMaterialTexture2D_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "CustomizedMaterialTexture2D" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCustomizedMaterialTexture2D_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizedMaterialTexture2D, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedMaterialTexture2D_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedMaterialTexture2D_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomizedMaterialTexture2D_Statics::NewProp_Texture_MetaData[] = {
		{ "Category", "CustomizedMaterialTexture2D" },
		{ "Comment", "// Replaced EditInline with EditAnywhere for 4.10\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Replaced EditInline with EditAnywhere for 4.10" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FCustomizedMaterialTexture2D_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FCustomizedMaterialTexture2D, Texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedMaterialTexture2D_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedMaterialTexture2D_Statics::NewProp_Texture_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomizedMaterialTexture2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedMaterialTexture2D_Statics::NewProp_Name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomizedMaterialTexture2D_Statics::NewProp_Texture,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomizedMaterialTexture2D_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
		nullptr,
		&NewStructOps,
		"CustomizedMaterialTexture2D",
		sizeof(FCustomizedMaterialTexture2D),
		alignof(FCustomizedMaterialTexture2D),
		Z_Construct_UScriptStruct_FCustomizedMaterialTexture2D_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedMaterialTexture2D_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomizedMaterialTexture2D_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomizedMaterialTexture2D_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomizedMaterialTexture2D()
	{
		if (!Z_Registration_Info_UScriptStruct_CustomizedMaterialTexture2D.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CustomizedMaterialTexture2D.InnerSingleton, Z_Construct_UScriptStruct_FCustomizedMaterialTexture2D_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_CustomizedMaterialTexture2D.InnerSingleton;
	}
	struct Z_Construct_UDelegateFunction_CustomizableObject_BeginUpdateDelegate__DelegateSignature_Statics
	{
		struct _Script_CustomizableObject_eventBeginUpdateDelegate_Parms
		{
			UCustomizableObjectInstance* Instance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CustomizableObject_BeginUpdateDelegate__DelegateSignature_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CustomizableObject_eventBeginUpdateDelegate_Parms, Instance), Z_Construct_UClass_UCustomizableObjectInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CustomizableObject_BeginUpdateDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CustomizableObject_BeginUpdateDelegate__DelegateSignature_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CustomizableObject_BeginUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Broadcast at the end of an Instance update request (e.g., before returning from UpdateSkeletalMeshAsync).\n * Notice that Mutable internally can also request an Instance update. */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Broadcast at the end of an Instance update request (e.g., before returning from UpdateSkeletalMeshAsync).\nNotice that Mutable internally can also request an Instance update." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CustomizableObject_BeginUpdateDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CustomizableObject, nullptr, "BeginUpdateDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CustomizableObject_BeginUpdateDelegate__DelegateSignature_Statics::_Script_CustomizableObject_eventBeginUpdateDelegate_Parms), Z_Construct_UDelegateFunction_CustomizableObject_BeginUpdateDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CustomizableObject_BeginUpdateDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CustomizableObject_BeginUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CustomizableObject_BeginUpdateDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CustomizableObject_BeginUpdateDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CustomizableObject_BeginUpdateDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBeginUpdateDelegate_DelegateWrapper(const FMulticastScriptDelegate& BeginUpdateDelegate, UCustomizableObjectInstance* Instance)
{
	struct _Script_CustomizableObject_eventBeginUpdateDelegate_Parms
	{
		UCustomizableObjectInstance* Instance;
	};
	_Script_CustomizableObject_eventBeginUpdateDelegate_Parms Parms;
	Parms.Instance=Instance;
	BeginUpdateDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_CustomizableObject_ObjectInstanceUpdatedDelegate__DelegateSignature_Statics
	{
		struct _Script_CustomizableObject_eventObjectInstanceUpdatedDelegate_Parms
		{
			UCustomizableObjectInstance* Instance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CustomizableObject_ObjectInstanceUpdatedDelegate__DelegateSignature_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CustomizableObject_eventObjectInstanceUpdatedDelegate_Parms, Instance), Z_Construct_UClass_UCustomizableObjectInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CustomizableObject_ObjectInstanceUpdatedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CustomizableObject_ObjectInstanceUpdatedDelegate__DelegateSignature_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CustomizableObject_ObjectInstanceUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Broadcast when an Instance update has completed.\n * Notice that Mutable internally can also start an Instance update. */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Broadcast when an Instance update has completed.\nNotice that Mutable internally can also start an Instance update." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CustomizableObject_ObjectInstanceUpdatedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CustomizableObject, nullptr, "ObjectInstanceUpdatedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CustomizableObject_ObjectInstanceUpdatedDelegate__DelegateSignature_Statics::_Script_CustomizableObject_eventObjectInstanceUpdatedDelegate_Parms), Z_Construct_UDelegateFunction_CustomizableObject_ObjectInstanceUpdatedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CustomizableObject_ObjectInstanceUpdatedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CustomizableObject_ObjectInstanceUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CustomizableObject_ObjectInstanceUpdatedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CustomizableObject_ObjectInstanceUpdatedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CustomizableObject_ObjectInstanceUpdatedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FObjectInstanceUpdatedDelegate_DelegateWrapper(const FMulticastScriptDelegate& ObjectInstanceUpdatedDelegate, UCustomizableObjectInstance* Instance)
{
	struct _Script_CustomizableObject_eventObjectInstanceUpdatedDelegate_Parms
	{
		UCustomizableObjectInstance* Instance;
	};
	_Script_CustomizableObject_eventObjectInstanceUpdatedDelegate_Parms Parms;
	Parms.Instance=Instance;
	ObjectInstanceUpdatedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_CustomizableObject_BeginDestroyDelegate__DelegateSignature_Statics
	{
		struct _Script_CustomizableObject_eventBeginDestroyDelegate_Parms
		{
			UCustomizableObjectInstance* Instance;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_CustomizableObject_BeginDestroyDelegate__DelegateSignature_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CustomizableObject_eventBeginDestroyDelegate_Parms, Instance), Z_Construct_UClass_UCustomizableObjectInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CustomizableObject_BeginDestroyDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CustomizableObject_BeginDestroyDelegate__DelegateSignature_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CustomizableObject_BeginDestroyDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CustomizableObject_BeginDestroyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CustomizableObject, nullptr, "BeginDestroyDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CustomizableObject_BeginDestroyDelegate__DelegateSignature_Statics::_Script_CustomizableObject_eventBeginDestroyDelegate_Parms), Z_Construct_UDelegateFunction_CustomizableObject_BeginDestroyDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CustomizableObject_BeginDestroyDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CustomizableObject_BeginDestroyDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CustomizableObject_BeginDestroyDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CustomizableObject_BeginDestroyDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CustomizableObject_BeginDestroyDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FBeginDestroyDelegate_DelegateWrapper(const FMulticastScriptDelegate& BeginDestroyDelegate, UCustomizableObjectInstance* Instance)
{
	struct _Script_CustomizableObject_eventBeginDestroyDelegate_Parms
	{
		UCustomizableObjectInstance* Instance;
	};
	_Script_CustomizableObject_eventBeginDestroyDelegate_Parms Parms;
	Parms.Instance=Instance;
	BeginDestroyDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_CustomizableObject_EachComponentAnimInstanceClassDelegate__DelegateSignature_Statics
	{
		struct _Script_CustomizableObject_eventEachComponentAnimInstanceClassDelegate_Parms
		{
			int32 SlotIndex;
			TSubclassOf<UAnimInstance>  AnimInstClass;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
		static const UECodeGen_Private::FClassPropertyParams NewProp_AnimInstClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_CustomizableObject_EachComponentAnimInstanceClassDelegate__DelegateSignature_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CustomizableObject_eventEachComponentAnimInstanceClassDelegate_Parms, SlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_CustomizableObject_EachComponentAnimInstanceClassDelegate__DelegateSignature_Statics::NewProp_AnimInstClass = { "AnimInstClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(_Script_CustomizableObject_eventEachComponentAnimInstanceClassDelegate_Parms, AnimInstClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_CustomizableObject_EachComponentAnimInstanceClassDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CustomizableObject_EachComponentAnimInstanceClassDelegate__DelegateSignature_Statics::NewProp_SlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_CustomizableObject_EachComponentAnimInstanceClassDelegate__DelegateSignature_Statics::NewProp_AnimInstClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_CustomizableObject_EachComponentAnimInstanceClassDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_CustomizableObject_EachComponentAnimInstanceClassDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_CustomizableObject, nullptr, "EachComponentAnimInstanceClassDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_CustomizableObject_EachComponentAnimInstanceClassDelegate__DelegateSignature_Statics::_Script_CustomizableObject_eventEachComponentAnimInstanceClassDelegate_Parms), Z_Construct_UDelegateFunction_CustomizableObject_EachComponentAnimInstanceClassDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CustomizableObject_EachComponentAnimInstanceClassDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_CustomizableObject_EachComponentAnimInstanceClassDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CustomizableObject_EachComponentAnimInstanceClassDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_CustomizableObject_EachComponentAnimInstanceClassDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CustomizableObject_EachComponentAnimInstanceClassDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FEachComponentAnimInstanceClassDelegate_DelegateWrapper(const FScriptDelegate& EachComponentAnimInstanceClassDelegate, int32 SlotIndex, TSubclassOf<UAnimInstance>  AnimInstClass)
{
	struct _Script_CustomizableObject_eventEachComponentAnimInstanceClassDelegate_Parms
	{
		int32 SlotIndex;
		TSubclassOf<UAnimInstance>  AnimInstClass;
	};
	_Script_CustomizableObject_eventEachComponentAnimInstanceClassDelegate_Parms Parms;
	Parms.SlotIndex=SlotIndex;
	Parms.AnimInstClass=AnimInstClass;
	EachComponentAnimInstanceClassDelegate.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execSetReplacePhysicsAssets)
	{
		P_GET_UBOOL(Z_Param_bReplaceEnabled);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReplacePhysicsAssets(Z_Param_bReplaceEnabled);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execForEachAnimInstance)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ComponentIndex);
		P_GET_PROPERTY(FDelegateProperty,Z_Param_Delegate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ForEachAnimInstance(Z_Param_ComponentIndex,FEachComponentAnimInstanceClassDelegate(Z_Param_Delegate));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execGetAnimationGameplayTags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGameplayTagContainer*)Z_Param__Result=P_THIS->GetAnimationGameplayTags();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execGetAnimBP)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ComponentIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_SlotIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TSubclassOf<UAnimInstance> *)Z_Param__Result=P_THIS->GetAnimBP(Z_Param_ComponentIndex,Z_Param_SlotIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execMultilayerProjectorUpdateVirtualLayer)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ProjectorParamName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Id);
		P_GET_STRUCT_REF(FMultilayerProjectorVirtualLayer,Z_Param_Out_Layer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MultilayerProjectorUpdateVirtualLayer(Z_Param_Out_ProjectorParamName,Z_Param_Out_Id,Z_Param_Out_Layer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execMultilayerProjectorGetVirtualLayer)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ProjectorParamName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMultilayerProjectorVirtualLayer*)Z_Param__Result=P_THIS->MultilayerProjectorGetVirtualLayer(Z_Param_Out_ProjectorParamName,Z_Param_Out_Id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execMultilayerProjectorRemoveVirtualLayer)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ProjectorParamName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MultilayerProjectorRemoveVirtualLayer(Z_Param_Out_ProjectorParamName,Z_Param_Out_Id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execMultilayerProjectorFindOrCreateVirtualLayer)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ProjectorParamName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Id);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMultilayerProjectorVirtualLayer*)Z_Param__Result=P_THIS->MultilayerProjectorFindOrCreateVirtualLayer(Z_Param_Out_ProjectorParamName,Z_Param_Out_Id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execMultilayerProjectorCreateVirtualLayer)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ProjectorParamName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MultilayerProjectorCreateVirtualLayer(Z_Param_Out_ProjectorParamName,Z_Param_Out_Id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execMultilayerProjectorGetVirtualLayers)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ProjectorParamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FName>*)Z_Param__Result=P_THIS->MultilayerProjectorGetVirtualLayers(Z_Param_Out_ProjectorParamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execMultilayerProjectorUpdateLayer)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ProjectorParamName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FMultilayerProjectorLayer,Z_Param_Out_Layer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MultilayerProjectorUpdateLayer(Z_Param_Out_ProjectorParamName,Z_Param_Index,Z_Param_Out_Layer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execMultilayerProjectorGetLayer)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ProjectorParamName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FMultilayerProjectorLayer*)Z_Param__Result=P_THIS->MultilayerProjectorGetLayer(Z_Param_Out_ProjectorParamName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execMultilayerProjectorRemoveLayerAt)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ProjectorParamName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MultilayerProjectorRemoveLayerAt(Z_Param_Out_ProjectorParamName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execMultilayerProjectorCreateLayer)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ProjectorParamName);
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MultilayerProjectorCreateLayer(Z_Param_Out_ProjectorParamName,Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execMultilayerProjectorNumLayers)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ProjectorParamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->MultilayerProjectorNumLayers(Z_Param_Out_ProjectorParamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execRemoveMultilayerProjector)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ProjectorParamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveMultilayerProjector(Z_Param_Out_ProjectorParamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execCreateMultiLayerProjector)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_ProjectorParamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CreateMultiLayerProjector(Z_Param_Out_ProjectorParamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execRemoveValueFromProjectorRange)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RemoveValueFromProjectorRange(Z_Param_ParamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execRemoveValueFromFloatRange)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RemoveValueFromFloatRange(Z_Param_ParamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execRemoveValueFromIntRange)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->RemoveValueFromIntRange(Z_Param_ParamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execAddValueToProjectorRange)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddValueToProjectorRange(Z_Param_ParamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execAddValueToFloatRange)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddValueToFloatRange(Z_Param_ParamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execAddValueToIntRange)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->AddValueToIntRange(Z_Param_ParamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execFindProjectorParameterNameIndex)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FindProjectorParameterNameIndex(Z_Param_ParamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execFindVectorParameterNameIndex)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FindVectorParameterNameIndex(Z_Param_ParamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execFindBoolParameterNameIndex)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FindBoolParameterNameIndex(Z_Param_ParamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execFindFloatParameterNameIndex)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FindFloatParameterNameIndex(Z_Param_ParamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execFindIntParameterNameIndex)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FindIntParameterNameIndex(Z_Param_ParamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execGetProjectorParameterType)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_GET_PROPERTY(FIntProperty,Z_Param_RangeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECustomizableObjectProjectorType*)Z_Param__Result=P_THIS->GetProjectorParameterType(Z_Param_ParamName,Z_Param_RangeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execGetProjectorAngle)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_GET_PROPERTY(FIntProperty,Z_Param_RangeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetProjectorAngle(Z_Param_ParamName,Z_Param_RangeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execGetProjectorScale)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_GET_PROPERTY(FIntProperty,Z_Param_RangeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetProjectorScale(Z_Param_ParamName,Z_Param_RangeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execGetProjectorUp)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_GET_PROPERTY(FIntProperty,Z_Param_RangeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetProjectorUp(Z_Param_ParamName,Z_Param_RangeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execGetProjectorDirection)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_GET_PROPERTY(FIntProperty,Z_Param_RangeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetProjectorDirection(Z_Param_ParamName,Z_Param_RangeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execGetProjectorPosition)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_GET_PROPERTY(FIntProperty,Z_Param_RangeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetProjectorPosition(Z_Param_ParamName,Z_Param_RangeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execGetProjectorValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProjectorParamName);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPos);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutDirection);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutUp);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutScale);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutAngle);
		P_GET_ENUM_REF(ECustomizableObjectProjectorType,Z_Param_Out_OutType);
		P_GET_PROPERTY(FIntProperty,Z_Param_RangeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetProjectorValue(Z_Param_ProjectorParamName,Z_Param_Out_OutPos,Z_Param_Out_OutDirection,Z_Param_Out_OutUp,Z_Param_Out_OutScale,Z_Param_Out_OutAngle,(ECustomizableObjectProjectorType&)(Z_Param_Out_OutType),Z_Param_RangeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execSetProjectorValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ProjectorParamName);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutPos);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutDirection);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutUp);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_OutAngle);
		P_GET_PROPERTY(FIntProperty,Z_Param_RangeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProjectorValue(Z_Param_ProjectorParamName,Z_Param_Out_OutPos,Z_Param_Out_OutDirection,Z_Param_Out_OutUp,Z_Param_Out_OutScale,Z_Param_OutAngle,Z_Param_RangeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execSetVectorParameterSelectedOption)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_VectorParamName);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_VectorValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVectorParameterSelectedOption(Z_Param_VectorParamName,Z_Param_Out_VectorValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execSetBoolParameterSelectedOption)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BoolParamName);
		P_GET_UBOOL(Z_Param_BoolValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoolParameterSelectedOption(Z_Param_BoolParamName,Z_Param_BoolValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execGetBoolParameterSelectedOption)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BoolParamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBoolParameterSelectedOption(Z_Param_BoolParamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execSetColorParameterSelectedOption)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ColorParamName);
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_ColorValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetColorParameterSelectedOption(Z_Param_ColorParamName,Z_Param_Out_ColorValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execGetColorParameterSelectedOption)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ColorParamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FLinearColor*)Z_Param__Result=P_THIS->GetColorParameterSelectedOption(Z_Param_ColorParamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execSetTextureParameterSelectedOptionT)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TextureParamName);
		P_GET_OBJECT(UTexture2D,Z_Param_TextureValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_RangeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTextureParameterSelectedOptionT(Z_Param_TextureParamName,Z_Param_TextureValue,Z_Param_RangeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execGetTextureParameterSelectedOptionT)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_TextureParamName);
		P_GET_PROPERTY(FIntProperty,Z_Param_RangeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetTextureParameterSelectedOptionT(Z_Param_TextureParamName,Z_Param_RangeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execSetFloatParameterSelectedOption)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FloatParamName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_FloatValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_RangeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFloatParameterSelectedOption(Z_Param_FloatParamName,Z_Param_FloatValue,Z_Param_RangeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execGetFloatParameterSelectedOption)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_FloatParamName);
		P_GET_PROPERTY(FIntProperty,Z_Param_RangeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFloatParameterSelectedOption(Z_Param_FloatParamName,Z_Param_RangeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execSetIntParameterSelectedOption)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_GET_PROPERTY(FStrProperty,Z_Param_SelectedOptionName);
		P_GET_PROPERTY(FIntProperty,Z_Param_RangeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIntParameterSelectedOption(Z_Param_ParamName,Z_Param_SelectedOptionName,Z_Param_RangeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execGetIntParameterSelectedOption)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_GET_PROPERTY(FIntProperty,Z_Param_RangeIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetIntParameterSelectedOption(Z_Param_ParamName,Z_Param_RangeIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execGetProjectorValueRange)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetProjectorValueRange(Z_Param_ParamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execIsParamMultidimensional)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsParamMultidimensional(Z_Param_ParamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execIsParameterRelevant)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsParameterRelevant(Z_Param_ParamName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execGetParameterDescription)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ParamName);
		P_GET_PROPERTY(FIntProperty,Z_Param_DescIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTexture2D**)Z_Param__Result=P_THIS->GetParameterDescription(Z_Param_ParamName,Z_Param_DescIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execCloneStatic)
	{
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCustomizableObjectInstance**)Z_Param__Result=P_THIS->CloneStatic(Z_Param_Outer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execClone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCustomizableObjectInstance**)Z_Param__Result=P_THIS->Clone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execUpdateSkeletalMeshAsync)
	{
		P_GET_UBOOL(Z_Param_bIgnoreCloseDist);
		P_GET_UBOOL(Z_Param_bForceHighPriority);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateSkeletalMeshAsync(Z_Param_bIgnoreCloseDist,Z_Param_bForceHighPriority);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execSetRandomValues)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRandomValues();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execHasAnyParameters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnyParameters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execGetProjectorParameters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FCustomizableObjectProjectorParameterValue>*)Z_Param__Result=P_THIS->GetProjectorParameters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execGetVectorParameters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FCustomizableObjectVectorParameterValue>*)Z_Param__Result=P_THIS->GetVectorParameters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execGetTextureParameters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FCustomizableObjectTextureParameterValue>*)Z_Param__Result=P_THIS->GetTextureParameters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execGetFloatParameters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FCustomizableObjectFloatParameterValue>*)Z_Param__Result=P_THIS->GetFloatParameters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execGetIntParameters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FCustomizableObjectIntParameterValue>*)Z_Param__Result=P_THIS->GetIntParameters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execGetBoolParameters)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FCustomizableObjectBoolParameterValue>*)Z_Param__Result=P_THIS->GetBoolParameters();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execHasAnySkeletalMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasAnySkeletalMesh();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execGetSkeletalMesh)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ComponentIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(USkeletalMesh**)Z_Param__Result=P_THIS->GetSkeletalMesh(Z_Param_ComponentIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execSetCurrentState)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_StateName);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentState(Z_Param_StateName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execGetCurrentState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetCurrentState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execSetBuildParameterDecorations)
	{
		P_GET_UBOOL(Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBuildParameterDecorations(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execGetBuildParameterDecorations)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetBuildParameterDecorations();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execGetCustomizableObject)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCustomizableObject**)Z_Param__Result=P_THIS->GetCustomizableObject();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UCustomizableObjectInstance::execSetObject)
	{
		P_GET_OBJECT(UCustomizableObject,Z_Param_InObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetObject(Z_Param_InObject);
		P_NATIVE_END;
	}
	void UCustomizableObjectInstance::StaticRegisterNativesUCustomizableObjectInstance()
	{
		UClass* Class = UCustomizableObjectInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddValueToFloatRange", &UCustomizableObjectInstance::execAddValueToFloatRange },
			{ "AddValueToIntRange", &UCustomizableObjectInstance::execAddValueToIntRange },
			{ "AddValueToProjectorRange", &UCustomizableObjectInstance::execAddValueToProjectorRange },
			{ "Clone", &UCustomizableObjectInstance::execClone },
			{ "CloneStatic", &UCustomizableObjectInstance::execCloneStatic },
			{ "CreateMultiLayerProjector", &UCustomizableObjectInstance::execCreateMultiLayerProjector },
			{ "FindBoolParameterNameIndex", &UCustomizableObjectInstance::execFindBoolParameterNameIndex },
			{ "FindFloatParameterNameIndex", &UCustomizableObjectInstance::execFindFloatParameterNameIndex },
			{ "FindIntParameterNameIndex", &UCustomizableObjectInstance::execFindIntParameterNameIndex },
			{ "FindProjectorParameterNameIndex", &UCustomizableObjectInstance::execFindProjectorParameterNameIndex },
			{ "FindVectorParameterNameIndex", &UCustomizableObjectInstance::execFindVectorParameterNameIndex },
			{ "ForEachAnimInstance", &UCustomizableObjectInstance::execForEachAnimInstance },
			{ "GetAnimationGameplayTags", &UCustomizableObjectInstance::execGetAnimationGameplayTags },
			{ "GetAnimBP", &UCustomizableObjectInstance::execGetAnimBP },
			{ "GetBoolParameters", &UCustomizableObjectInstance::execGetBoolParameters },
			{ "GetBoolParameterSelectedOption", &UCustomizableObjectInstance::execGetBoolParameterSelectedOption },
			{ "GetBuildParameterDecorations", &UCustomizableObjectInstance::execGetBuildParameterDecorations },
			{ "GetColorParameterSelectedOption", &UCustomizableObjectInstance::execGetColorParameterSelectedOption },
			{ "GetCurrentState", &UCustomizableObjectInstance::execGetCurrentState },
			{ "GetCustomizableObject", &UCustomizableObjectInstance::execGetCustomizableObject },
			{ "GetFloatParameters", &UCustomizableObjectInstance::execGetFloatParameters },
			{ "GetFloatParameterSelectedOption", &UCustomizableObjectInstance::execGetFloatParameterSelectedOption },
			{ "GetIntParameters", &UCustomizableObjectInstance::execGetIntParameters },
			{ "GetIntParameterSelectedOption", &UCustomizableObjectInstance::execGetIntParameterSelectedOption },
			{ "GetParameterDescription", &UCustomizableObjectInstance::execGetParameterDescription },
			{ "GetProjectorAngle", &UCustomizableObjectInstance::execGetProjectorAngle },
			{ "GetProjectorDirection", &UCustomizableObjectInstance::execGetProjectorDirection },
			{ "GetProjectorParameters", &UCustomizableObjectInstance::execGetProjectorParameters },
			{ "GetProjectorParameterType", &UCustomizableObjectInstance::execGetProjectorParameterType },
			{ "GetProjectorPosition", &UCustomizableObjectInstance::execGetProjectorPosition },
			{ "GetProjectorScale", &UCustomizableObjectInstance::execGetProjectorScale },
			{ "GetProjectorUp", &UCustomizableObjectInstance::execGetProjectorUp },
			{ "GetProjectorValue", &UCustomizableObjectInstance::execGetProjectorValue },
			{ "GetProjectorValueRange", &UCustomizableObjectInstance::execGetProjectorValueRange },
			{ "GetSkeletalMesh", &UCustomizableObjectInstance::execGetSkeletalMesh },
			{ "GetTextureParameters", &UCustomizableObjectInstance::execGetTextureParameters },
			{ "GetTextureParameterSelectedOptionT", &UCustomizableObjectInstance::execGetTextureParameterSelectedOptionT },
			{ "GetVectorParameters", &UCustomizableObjectInstance::execGetVectorParameters },
			{ "HasAnyParameters", &UCustomizableObjectInstance::execHasAnyParameters },
			{ "HasAnySkeletalMesh", &UCustomizableObjectInstance::execHasAnySkeletalMesh },
			{ "IsParameterRelevant", &UCustomizableObjectInstance::execIsParameterRelevant },
			{ "IsParamMultidimensional", &UCustomizableObjectInstance::execIsParamMultidimensional },
			{ "MultilayerProjectorCreateLayer", &UCustomizableObjectInstance::execMultilayerProjectorCreateLayer },
			{ "MultilayerProjectorCreateVirtualLayer", &UCustomizableObjectInstance::execMultilayerProjectorCreateVirtualLayer },
			{ "MultilayerProjectorFindOrCreateVirtualLayer", &UCustomizableObjectInstance::execMultilayerProjectorFindOrCreateVirtualLayer },
			{ "MultilayerProjectorGetLayer", &UCustomizableObjectInstance::execMultilayerProjectorGetLayer },
			{ "MultilayerProjectorGetVirtualLayer", &UCustomizableObjectInstance::execMultilayerProjectorGetVirtualLayer },
			{ "MultilayerProjectorGetVirtualLayers", &UCustomizableObjectInstance::execMultilayerProjectorGetVirtualLayers },
			{ "MultilayerProjectorNumLayers", &UCustomizableObjectInstance::execMultilayerProjectorNumLayers },
			{ "MultilayerProjectorRemoveLayerAt", &UCustomizableObjectInstance::execMultilayerProjectorRemoveLayerAt },
			{ "MultilayerProjectorRemoveVirtualLayer", &UCustomizableObjectInstance::execMultilayerProjectorRemoveVirtualLayer },
			{ "MultilayerProjectorUpdateLayer", &UCustomizableObjectInstance::execMultilayerProjectorUpdateLayer },
			{ "MultilayerProjectorUpdateVirtualLayer", &UCustomizableObjectInstance::execMultilayerProjectorUpdateVirtualLayer },
			{ "RemoveMultilayerProjector", &UCustomizableObjectInstance::execRemoveMultilayerProjector },
			{ "RemoveValueFromFloatRange", &UCustomizableObjectInstance::execRemoveValueFromFloatRange },
			{ "RemoveValueFromIntRange", &UCustomizableObjectInstance::execRemoveValueFromIntRange },
			{ "RemoveValueFromProjectorRange", &UCustomizableObjectInstance::execRemoveValueFromProjectorRange },
			{ "SetBoolParameterSelectedOption", &UCustomizableObjectInstance::execSetBoolParameterSelectedOption },
			{ "SetBuildParameterDecorations", &UCustomizableObjectInstance::execSetBuildParameterDecorations },
			{ "SetColorParameterSelectedOption", &UCustomizableObjectInstance::execSetColorParameterSelectedOption },
			{ "SetCurrentState", &UCustomizableObjectInstance::execSetCurrentState },
			{ "SetFloatParameterSelectedOption", &UCustomizableObjectInstance::execSetFloatParameterSelectedOption },
			{ "SetIntParameterSelectedOption", &UCustomizableObjectInstance::execSetIntParameterSelectedOption },
			{ "SetObject", &UCustomizableObjectInstance::execSetObject },
			{ "SetProjectorValue", &UCustomizableObjectInstance::execSetProjectorValue },
			{ "SetRandomValues", &UCustomizableObjectInstance::execSetRandomValues },
			{ "SetReplacePhysicsAssets", &UCustomizableObjectInstance::execSetReplacePhysicsAssets },
			{ "SetTextureParameterSelectedOptionT", &UCustomizableObjectInstance::execSetTextureParameterSelectedOptionT },
			{ "SetVectorParameterSelectedOption", &UCustomizableObjectInstance::execSetVectorParameterSelectedOption },
			{ "UpdateSkeletalMeshAsync", &UCustomizableObjectInstance::execUpdateSkeletalMeshAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToFloatRange_Statics
	{
		struct CustomizableObjectInstance_eventAddValueToFloatRange_Parms
		{
			FString ParamName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToFloatRange_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToFloatRange_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventAddValueToFloatRange_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToFloatRange_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToFloatRange_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToFloatRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventAddValueToFloatRange_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToFloatRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToFloatRange_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToFloatRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToFloatRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Increases the range of values of the float with ParamName, returns the index of the new float value, -1 otherwise.\n// The added value is initialized with 0.5f and is the last one of the range.\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Increases the range of values of the float with ParamName, returns the index of the new float value, -1 otherwise.\nThe added value is initialized with 0.5f and is the last one of the range." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToFloatRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "AddValueToFloatRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToFloatRange_Statics::CustomizableObjectInstance_eventAddValueToFloatRange_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToFloatRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToFloatRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToFloatRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToFloatRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToFloatRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToFloatRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToIntRange_Statics
	{
		struct CustomizableObjectInstance_eventAddValueToIntRange_Parms
		{
			FString ParamName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToIntRange_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToIntRange_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventAddValueToIntRange_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToIntRange_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToIntRange_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToIntRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventAddValueToIntRange_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToIntRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToIntRange_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToIntRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToIntRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Increases the range of values of the integer with ParamName, returns the index of the new integer value, -1 otherwise.\n// The added value is initialized with the first integer option and is the last one of the range.\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Increases the range of values of the integer with ParamName, returns the index of the new integer value, -1 otherwise.\nThe added value is initialized with the first integer option and is the last one of the range." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToIntRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "AddValueToIntRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToIntRange_Statics::CustomizableObjectInstance_eventAddValueToIntRange_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToIntRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToIntRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToIntRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToIntRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToIntRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToIntRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToProjectorRange_Statics
	{
		struct CustomizableObjectInstance_eventAddValueToProjectorRange_Parms
		{
			FString ParamName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToProjectorRange_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToProjectorRange_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventAddValueToProjectorRange_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToProjectorRange_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToProjectorRange_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToProjectorRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventAddValueToProjectorRange_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToProjectorRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToProjectorRange_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToProjectorRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToProjectorRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Increases the range of values of the projector with ParamName, returns the index of the new projector value, -1 otherwise.\n// The added value is initialized with the default projector as set up in the editor and is the last one of the range.\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Increases the range of values of the projector with ParamName, returns the index of the new projector value, -1 otherwise.\nThe added value is initialized with the default projector as set up in the editor and is the last one of the range." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToProjectorRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "AddValueToProjectorRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToProjectorRange_Statics::CustomizableObjectInstance_eventAddValueToProjectorRange_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToProjectorRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToProjectorRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToProjectorRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToProjectorRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToProjectorRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToProjectorRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_Clone_Statics
	{
		struct CustomizableObjectInstance_eventClone_Parms
		{
			UCustomizableObjectInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_Clone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventClone_Parms, ReturnValue), Z_Construct_UClass_UCustomizableObjectInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_Clone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_Clone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_Clone_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Clones the instance creating a new identical transient instance.\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Clones the instance creating a new identical transient instance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_Clone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "Clone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_Clone_Statics::CustomizableObjectInstance_eventClone_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_Clone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_Clone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_Clone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_Clone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_Clone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_Clone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_CloneStatic_Statics
	{
		struct CustomizableObjectInstance_eventCloneStatic_Parms
		{
			UObject* Outer;
			UCustomizableObjectInstance* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_CloneStatic_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventCloneStatic_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_CloneStatic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventCloneStatic_Parms, ReturnValue), Z_Construct_UClass_UCustomizableObjectInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_CloneStatic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_CloneStatic_Statics::NewProp_Outer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_CloneStatic_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_CloneStatic_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Clones the instance creating a new identical static instance.\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Clones the instance creating a new identical static instance." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_CloneStatic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "CloneStatic", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_CloneStatic_Statics::CustomizableObjectInstance_eventCloneStatic_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_CloneStatic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_CloneStatic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_CloneStatic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_CloneStatic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_CloneStatic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_CloneStatic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_CreateMultiLayerProjector_Statics
	{
		struct CustomizableObjectInstance_eventCreateMultiLayerProjector_Parms
		{
			FName ProjectorParamName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectorParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProjectorParamName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_CreateMultiLayerProjector_Statics::NewProp_ProjectorParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_CreateMultiLayerProjector_Statics::NewProp_ProjectorParamName = { "ProjectorParamName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventCreateMultiLayerProjector_Parms, ProjectorParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_CreateMultiLayerProjector_Statics::NewProp_ProjectorParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_CreateMultiLayerProjector_Statics::NewProp_ProjectorParamName_MetaData)) };
	void Z_Construct_UFunction_UCustomizableObjectInstance_CreateMultiLayerProjector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomizableObjectInstance_eventCreateMultiLayerProjector_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_CreateMultiLayerProjector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomizableObjectInstance_eventCreateMultiLayerProjector_Parms), &Z_Construct_UFunction_UCustomizableObjectInstance_CreateMultiLayerProjector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_CreateMultiLayerProjector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_CreateMultiLayerProjector_Statics::NewProp_ProjectorParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_CreateMultiLayerProjector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_CreateMultiLayerProjector_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "/** Given Multilayer Projector name, create a new Multilayer Projector Helper (if non-existent). See FMultilayerProjector.\n\x09 *\n\x09 * @return ture if successfully created (or was already created).\n\x09 */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Given Multilayer Projector name, create a new Multilayer Projector Helper (if non-existent). See FMultilayerProjector.\n\n@return ture if successfully created (or was already created)." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_CreateMultiLayerProjector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "CreateMultiLayerProjector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_CreateMultiLayerProjector_Statics::CustomizableObjectInstance_eventCreateMultiLayerProjector_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_CreateMultiLayerProjector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_CreateMultiLayerProjector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_CreateMultiLayerProjector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_CreateMultiLayerProjector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_CreateMultiLayerProjector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_CreateMultiLayerProjector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_FindBoolParameterNameIndex_Statics
	{
		struct CustomizableObjectInstance_eventFindBoolParameterNameIndex_Parms
		{
			FString ParamName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_FindBoolParameterNameIndex_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_FindBoolParameterNameIndex_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventFindBoolParameterNameIndex_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_FindBoolParameterNameIndex_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_FindBoolParameterNameIndex_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_FindBoolParameterNameIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventFindBoolParameterNameIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_FindBoolParameterNameIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_FindBoolParameterNameIndex_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_FindBoolParameterNameIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_FindBoolParameterNameIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Finds in BoolParameters a parameter with name ParamName, returns the index if found, -1 otherwise\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Finds in BoolParameters a parameter with name ParamName, returns the index if found, -1 otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_FindBoolParameterNameIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "FindBoolParameterNameIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_FindBoolParameterNameIndex_Statics::CustomizableObjectInstance_eventFindBoolParameterNameIndex_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_FindBoolParameterNameIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_FindBoolParameterNameIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_FindBoolParameterNameIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_FindBoolParameterNameIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_FindBoolParameterNameIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_FindBoolParameterNameIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_FindFloatParameterNameIndex_Statics
	{
		struct CustomizableObjectInstance_eventFindFloatParameterNameIndex_Parms
		{
			FString ParamName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_FindFloatParameterNameIndex_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_FindFloatParameterNameIndex_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventFindFloatParameterNameIndex_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_FindFloatParameterNameIndex_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_FindFloatParameterNameIndex_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_FindFloatParameterNameIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventFindFloatParameterNameIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_FindFloatParameterNameIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_FindFloatParameterNameIndex_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_FindFloatParameterNameIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_FindFloatParameterNameIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Finds in FloatParameters a parameter with name ParamName, returns the index if found, -1 otherwise\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Finds in FloatParameters a parameter with name ParamName, returns the index if found, -1 otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_FindFloatParameterNameIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "FindFloatParameterNameIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_FindFloatParameterNameIndex_Statics::CustomizableObjectInstance_eventFindFloatParameterNameIndex_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_FindFloatParameterNameIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_FindFloatParameterNameIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_FindFloatParameterNameIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_FindFloatParameterNameIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_FindFloatParameterNameIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_FindFloatParameterNameIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_FindIntParameterNameIndex_Statics
	{
		struct CustomizableObjectInstance_eventFindIntParameterNameIndex_Parms
		{
			FString ParamName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_FindIntParameterNameIndex_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_FindIntParameterNameIndex_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventFindIntParameterNameIndex_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_FindIntParameterNameIndex_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_FindIntParameterNameIndex_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_FindIntParameterNameIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventFindIntParameterNameIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_FindIntParameterNameIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_FindIntParameterNameIndex_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_FindIntParameterNameIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_FindIntParameterNameIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Finds in IntParameters a parameter with name ParamName, returns the index if found, -1 otherwise\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Finds in IntParameters a parameter with name ParamName, returns the index if found, -1 otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_FindIntParameterNameIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "FindIntParameterNameIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_FindIntParameterNameIndex_Statics::CustomizableObjectInstance_eventFindIntParameterNameIndex_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_FindIntParameterNameIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_FindIntParameterNameIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_FindIntParameterNameIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_FindIntParameterNameIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_FindIntParameterNameIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_FindIntParameterNameIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_FindProjectorParameterNameIndex_Statics
	{
		struct CustomizableObjectInstance_eventFindProjectorParameterNameIndex_Parms
		{
			FString ParamName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_FindProjectorParameterNameIndex_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_FindProjectorParameterNameIndex_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventFindProjectorParameterNameIndex_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_FindProjectorParameterNameIndex_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_FindProjectorParameterNameIndex_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_FindProjectorParameterNameIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventFindProjectorParameterNameIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_FindProjectorParameterNameIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_FindProjectorParameterNameIndex_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_FindProjectorParameterNameIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_FindProjectorParameterNameIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Finds in ProjectorParameters a parameter with name ParamName, returns the index if found, -1 otherwise\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Finds in ProjectorParameters a parameter with name ParamName, returns the index if found, -1 otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_FindProjectorParameterNameIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "FindProjectorParameterNameIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_FindProjectorParameterNameIndex_Statics::CustomizableObjectInstance_eventFindProjectorParameterNameIndex_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_FindProjectorParameterNameIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_FindProjectorParameterNameIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_FindProjectorParameterNameIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_FindProjectorParameterNameIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_FindProjectorParameterNameIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_FindProjectorParameterNameIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_FindVectorParameterNameIndex_Statics
	{
		struct CustomizableObjectInstance_eventFindVectorParameterNameIndex_Parms
		{
			FString ParamName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_FindVectorParameterNameIndex_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_FindVectorParameterNameIndex_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventFindVectorParameterNameIndex_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_FindVectorParameterNameIndex_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_FindVectorParameterNameIndex_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_FindVectorParameterNameIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventFindVectorParameterNameIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_FindVectorParameterNameIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_FindVectorParameterNameIndex_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_FindVectorParameterNameIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_FindVectorParameterNameIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Finds in VectorParameters a parameter with name ParamName, returns the index if found, -1 otherwise\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Finds in VectorParameters a parameter with name ParamName, returns the index if found, -1 otherwise" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_FindVectorParameterNameIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "FindVectorParameterNameIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_FindVectorParameterNameIndex_Statics::CustomizableObjectInstance_eventFindVectorParameterNameIndex_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_FindVectorParameterNameIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_FindVectorParameterNameIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_FindVectorParameterNameIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_FindVectorParameterNameIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_FindVectorParameterNameIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_FindVectorParameterNameIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_ForEachAnimInstance_Statics
	{
		struct CustomizableObjectInstance_eventForEachAnimInstance_Parms
		{
			int32 ComponentIndex;
			FScriptDelegate Delegate;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ComponentIndex;
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_Delegate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_ForEachAnimInstance_Statics::NewProp_ComponentIndex = { "ComponentIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventForEachAnimInstance_Parms, ComponentIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_ForEachAnimInstance_Statics::NewProp_Delegate = { "Delegate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventForEachAnimInstance_Parms, Delegate), Z_Construct_UDelegateFunction_CustomizableObject_EachComponentAnimInstanceClassDelegate__DelegateSignature, METADATA_PARAMS(nullptr, 0) }; // 1234994980
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_ForEachAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_ForEachAnimInstance_Statics::NewProp_ComponentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_ForEachAnimInstance_Statics::NewProp_Delegate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_ForEachAnimInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_ForEachAnimInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "ForEachAnimInstance", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_ForEachAnimInstance_Statics::CustomizableObjectInstance_eventForEachAnimInstance_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_ForEachAnimInstance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_ForEachAnimInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_ForEachAnimInstance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_ForEachAnimInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_ForEachAnimInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_ForEachAnimInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimationGameplayTags_Statics
	{
		struct CustomizableObjectInstance_eventGetAnimationGameplayTags_Parms
		{
			FGameplayTagContainer ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimationGameplayTags_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimationGameplayTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetAnimationGameplayTags_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimationGameplayTags_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimationGameplayTags_Statics::NewProp_ReturnValue_MetaData)) }; // 3057219007
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimationGameplayTags_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimationGameplayTags_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimationGameplayTags_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimationGameplayTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "GetAnimationGameplayTags", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimationGameplayTags_Statics::CustomizableObjectInstance_eventGetAnimationGameplayTags_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimationGameplayTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimationGameplayTags_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimationGameplayTags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimationGameplayTags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimationGameplayTags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimationGameplayTags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimBP_Statics
	{
		struct CustomizableObjectInstance_eventGetAnimBP_Parms
		{
			int32 ComponentIndex;
			int32 SlotIndex;
			TSubclassOf<UAnimInstance>  ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ComponentIndex;
		static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimBP_Statics::NewProp_ComponentIndex = { "ComponentIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetAnimBP_Parms, ComponentIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimBP_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetAnimBP_Parms, SlotIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetAnimBP_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimBP_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimBP_Statics::NewProp_ComponentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimBP_Statics::NewProp_SlotIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimBP_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimBP_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Returns the animation BP for the parameter component and slot, gathered from all the meshes that compose this instance\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Returns the animation BP for the parameter component and slot, gathered from all the meshes that compose this instance" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "GetAnimBP", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimBP_Statics::CustomizableObjectInstance_eventGetAnimBP_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameters_Statics
	{
		struct CustomizableObjectInstance_eventGetBoolParameters_Parms
		{
			TArray<FCustomizableObjectBoolParameterValue> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameters_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue, METADATA_PARAMS(nullptr, 0) }; // 709592541
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetBoolParameters_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 709592541
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameters_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "GetBoolParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameters_Statics::CustomizableObjectInstance_eventGetBoolParameters_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameterSelectedOption_Statics
	{
		struct CustomizableObjectInstance_eventGetBoolParameterSelectedOption_Parms
		{
			FString BoolParamName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BoolParamName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameterSelectedOption_Statics::NewProp_BoolParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameterSelectedOption_Statics::NewProp_BoolParamName = { "BoolParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetBoolParameterSelectedOption_Parms, BoolParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameterSelectedOption_Statics::NewProp_BoolParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameterSelectedOption_Statics::NewProp_BoolParamName_MetaData)) };
	void Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameterSelectedOption_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomizableObjectInstance_eventGetBoolParameterSelectedOption_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameterSelectedOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomizableObjectInstance_eventGetBoolParameterSelectedOption_Parms), &Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameterSelectedOption_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameterSelectedOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameterSelectedOption_Statics::NewProp_BoolParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameterSelectedOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameterSelectedOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Sets the bool value \"BoolValue\" of a bool parameter with name \"BoolParamName\"\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Sets the bool value \"BoolValue\" of a bool parameter with name \"BoolParamName\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameterSelectedOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "GetBoolParameterSelectedOption", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameterSelectedOption_Statics::CustomizableObjectInstance_eventGetBoolParameterSelectedOption_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameterSelectedOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameterSelectedOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameterSelectedOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameterSelectedOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameterSelectedOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameterSelectedOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_GetBuildParameterDecorations_Statics
	{
		struct CustomizableObjectInstance_eventGetBuildParameterDecorations_Parms
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
	void Z_Construct_UFunction_UCustomizableObjectInstance_GetBuildParameterDecorations_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomizableObjectInstance_eventGetBuildParameterDecorations_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetBuildParameterDecorations_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomizableObjectInstance_eventGetBuildParameterDecorations_Parms), &Z_Construct_UFunction_UCustomizableObjectInstance_GetBuildParameterDecorations_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_GetBuildParameterDecorations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetBuildParameterDecorations_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetBuildParameterDecorations_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_GetBuildParameterDecorations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "GetBuildParameterDecorations", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_GetBuildParameterDecorations_Statics::CustomizableObjectInstance_eventGetBuildParameterDecorations_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_GetBuildParameterDecorations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetBuildParameterDecorations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetBuildParameterDecorations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetBuildParameterDecorations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_GetBuildParameterDecorations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_GetBuildParameterDecorations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_GetColorParameterSelectedOption_Statics
	{
		struct CustomizableObjectInstance_eventGetColorParameterSelectedOption_Parms
		{
			FString ColorParamName;
			FLinearColor ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ColorParamName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetColorParameterSelectedOption_Statics::NewProp_ColorParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetColorParameterSelectedOption_Statics::NewProp_ColorParamName = { "ColorParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetColorParameterSelectedOption_Parms, ColorParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetColorParameterSelectedOption_Statics::NewProp_ColorParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetColorParameterSelectedOption_Statics::NewProp_ColorParamName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetColorParameterSelectedOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetColorParameterSelectedOption_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_GetColorParameterSelectedOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetColorParameterSelectedOption_Statics::NewProp_ColorParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetColorParameterSelectedOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetColorParameterSelectedOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Gets the value of a color parameter with name \"ColorParamName\"\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Gets the value of a color parameter with name \"ColorParamName\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_GetColorParameterSelectedOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "GetColorParameterSelectedOption", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_GetColorParameterSelectedOption_Statics::CustomizableObjectInstance_eventGetColorParameterSelectedOption_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_GetColorParameterSelectedOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetColorParameterSelectedOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetColorParameterSelectedOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetColorParameterSelectedOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_GetColorParameterSelectedOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_GetColorParameterSelectedOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_GetCurrentState_Statics
	{
		struct CustomizableObjectInstance_eventGetCurrentState_Parms
		{
			FString ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetCurrentState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetCurrentState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_GetCurrentState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetCurrentState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_GetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "GetCurrentState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_GetCurrentState_Statics::CustomizableObjectInstance_eventGetCurrentState_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_GetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetCurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_GetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_GetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_GetCustomizableObject_Statics
	{
		struct CustomizableObjectInstance_eventGetCustomizableObject_Parms
		{
			UCustomizableObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetCustomizableObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetCustomizableObject_Parms, ReturnValue), Z_Construct_UClass_UCustomizableObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_GetCustomizableObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetCustomizableObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetCustomizableObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "//Get the current CustomizableObject \n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Get the current CustomizableObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_GetCustomizableObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "GetCustomizableObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_GetCustomizableObject_Statics::CustomizableObjectInstance_eventGetCustomizableObject_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_GetCustomizableObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetCustomizableObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetCustomizableObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetCustomizableObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_GetCustomizableObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_GetCustomizableObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameters_Statics
	{
		struct CustomizableObjectInstance_eventGetFloatParameters_Parms
		{
			TArray<FCustomizableObjectFloatParameterValue> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameters_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue, METADATA_PARAMS(nullptr, 0) }; // 248359709
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetFloatParameters_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 248359709
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameters_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "GetFloatParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameters_Statics::CustomizableObjectInstance_eventGetFloatParameters_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameterSelectedOption_Statics
	{
		struct CustomizableObjectInstance_eventGetFloatParameterSelectedOption_Parms
		{
			FString FloatParamName;
			int32 RangeIndex;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FloatParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RangeIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameterSelectedOption_Statics::NewProp_FloatParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameterSelectedOption_Statics::NewProp_FloatParamName = { "FloatParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetFloatParameterSelectedOption_Parms, FloatParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameterSelectedOption_Statics::NewProp_FloatParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameterSelectedOption_Statics::NewProp_FloatParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameterSelectedOption_Statics::NewProp_RangeIndex = { "RangeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetFloatParameterSelectedOption_Parms, RangeIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameterSelectedOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetFloatParameterSelectedOption_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameterSelectedOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameterSelectedOption_Statics::NewProp_FloatParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameterSelectedOption_Statics::NewProp_RangeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameterSelectedOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameterSelectedOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Gets the value of a float parameter with name \"FloatParamName\"\n" },
		{ "CPP_Default_RangeIndex", "-1" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Gets the value of a float parameter with name \"FloatParamName\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameterSelectedOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "GetFloatParameterSelectedOption", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameterSelectedOption_Statics::CustomizableObjectInstance_eventGetFloatParameterSelectedOption_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameterSelectedOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameterSelectedOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameterSelectedOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameterSelectedOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameterSelectedOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameterSelectedOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameters_Statics
	{
		struct CustomizableObjectInstance_eventGetIntParameters_Parms
		{
			TArray<FCustomizableObjectIntParameterValue> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameters_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue, METADATA_PARAMS(nullptr, 0) }; // 3556153112
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetIntParameters_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3556153112
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameters_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "GetIntParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameters_Statics::CustomizableObjectInstance_eventGetIntParameters_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameterSelectedOption_Statics
	{
		struct CustomizableObjectInstance_eventGetIntParameterSelectedOption_Parms
		{
			FString ParamName;
			int32 RangeIndex;
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RangeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameterSelectedOption_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameterSelectedOption_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetIntParameterSelectedOption_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameterSelectedOption_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameterSelectedOption_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameterSelectedOption_Statics::NewProp_RangeIndex = { "RangeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetIntParameterSelectedOption_Parms, RangeIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameterSelectedOption_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameterSelectedOption_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetIntParameterSelectedOption_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameterSelectedOption_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameterSelectedOption_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameterSelectedOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameterSelectedOption_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameterSelectedOption_Statics::NewProp_RangeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameterSelectedOption_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameterSelectedOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// DEPRECATED: Use the method in the CustomizableObject instead which takes an index among all parameters\n// Gets the Name of the option at position K in the list of available options for the int parameter. Useful to enumerate the int parameter's possible options (Ex: \"Hat1\", \"Hat2\", \"Cap\", \"Nothing\")\n//const FString& GetIntParameterAvailableOption(int32 IntParamIndex, int32 K);\n" },
		{ "CPP_Default_RangeIndex", "-1" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "DEPRECATED: Use the method in the CustomizableObject instead which takes an index among all parameters\nGets the Name of the option at position K in the list of available options for the int parameter. Useful to enumerate the int parameter's possible options (Ex: \"Hat1\", \"Hat2\", \"Cap\", \"Nothing\")\nconst FString& GetIntParameterAvailableOption(int32 IntParamIndex, int32 K);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameterSelectedOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "GetIntParameterSelectedOption", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameterSelectedOption_Statics::CustomizableObjectInstance_eventGetIntParameterSelectedOption_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameterSelectedOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameterSelectedOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameterSelectedOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameterSelectedOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameterSelectedOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameterSelectedOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_GetParameterDescription_Statics
	{
		struct CustomizableObjectInstance_eventGetParameterDescription_Parms
		{
			FString ParamName;
			int32 DescIndex;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_DescIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetParameterDescription_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetParameterDescription_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetParameterDescription_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetParameterDescription_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetParameterDescription_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetParameterDescription_Statics::NewProp_DescIndex = { "DescIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetParameterDescription_Parms, DescIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetParameterDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetParameterDescription_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_GetParameterDescription_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetParameterDescription_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetParameterDescription_Statics::NewProp_DescIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetParameterDescription_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetParameterDescription_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Returns de description texture (ex: color bar) for this parameter and DescIndex\n// This will only be valid if bBuildParameterDecorations was set to true before the last update.\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Returns de description texture (ex: color bar) for this parameter and DescIndex\nThis will only be valid if bBuildParameterDecorations was set to true before the last update." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_GetParameterDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "GetParameterDescription", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_GetParameterDescription_Statics::CustomizableObjectInstance_eventGetParameterDescription_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_GetParameterDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetParameterDescription_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetParameterDescription_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetParameterDescription_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_GetParameterDescription()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_GetParameterDescription_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorAngle_Statics
	{
		struct CustomizableObjectInstance_eventGetProjectorAngle_Parms
		{
			FString ParamName;
			int32 RangeIndex;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RangeIndex;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorAngle_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorAngle_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorAngle_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorAngle_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorAngle_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorAngle_Statics::NewProp_RangeIndex = { "RangeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorAngle_Parms, RangeIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorAngle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorAngle_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorAngle_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorAngle_Statics::NewProp_RangeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorAngle_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Get the current cylindrical projector angle for the parameter with the given name\n" },
		{ "CPP_Default_RangeIndex", "-1" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Get the current cylindrical projector angle for the parameter with the given name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "GetProjectorAngle", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorAngle_Statics::CustomizableObjectInstance_eventGetProjectorAngle_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorAngle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorAngle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorAngle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorDirection_Statics
	{
		struct CustomizableObjectInstance_eventGetProjectorDirection_Parms
		{
			FString ParamName;
			int32 RangeIndex;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RangeIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorDirection_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorDirection_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorDirection_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorDirection_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorDirection_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorDirection_Statics::NewProp_RangeIndex = { "RangeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorDirection_Parms, RangeIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorDirection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorDirection_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorDirection_Statics::NewProp_RangeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Get the current projector direction vector for the parameter with the given name\n" },
		{ "CPP_Default_RangeIndex", "-1" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Get the current projector direction vector for the parameter with the given name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "GetProjectorDirection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorDirection_Statics::CustomizableObjectInstance_eventGetProjectorDirection_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameters_Statics
	{
		struct CustomizableObjectInstance_eventGetProjectorParameters_Parms
		{
			TArray<FCustomizableObjectProjectorParameterValue> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameters_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue, METADATA_PARAMS(nullptr, 0) }; // 2841439205
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorParameters_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2841439205
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameters_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "GetProjectorParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameters_Statics::CustomizableObjectInstance_eventGetProjectorParameters_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameterType_Statics
	{
		struct CustomizableObjectInstance_eventGetProjectorParameterType_Parms
		{
			FString ParamName;
			int32 RangeIndex;
			ECustomizableObjectProjectorType ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RangeIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameterType_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameterType_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorParameterType_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameterType_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameterType_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameterType_Statics::NewProp_RangeIndex = { "RangeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorParameterType_Parms, RangeIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameterType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameterType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorParameterType_Parms, ReturnValue), Z_Construct_UEnum_CustomizableObject_ECustomizableObjectProjectorType, METADATA_PARAMS(nullptr, 0) }; // 4204272212
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameterType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameterType_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameterType_Statics::NewProp_RangeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameterType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameterType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameterType_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Get the current projector type for the parameter with the given name\n" },
		{ "CPP_Default_RangeIndex", "-1" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Get the current projector type for the parameter with the given name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameterType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "GetProjectorParameterType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameterType_Statics::CustomizableObjectInstance_eventGetProjectorParameterType_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameterType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameterType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameterType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameterType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameterType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameterType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorPosition_Statics
	{
		struct CustomizableObjectInstance_eventGetProjectorPosition_Parms
		{
			FString ParamName;
			int32 RangeIndex;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RangeIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorPosition_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorPosition_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorPosition_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorPosition_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorPosition_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorPosition_Statics::NewProp_RangeIndex = { "RangeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorPosition_Parms, RangeIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorPosition_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorPosition_Statics::NewProp_RangeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Get the current projector position for the parameter with the given name\n" },
		{ "CPP_Default_RangeIndex", "-1" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Get the current projector position for the parameter with the given name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "GetProjectorPosition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorPosition_Statics::CustomizableObjectInstance_eventGetProjectorPosition_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorScale_Statics
	{
		struct CustomizableObjectInstance_eventGetProjectorScale_Parms
		{
			FString ParamName;
			int32 RangeIndex;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RangeIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorScale_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorScale_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorScale_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorScale_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorScale_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorScale_Statics::NewProp_RangeIndex = { "RangeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorScale_Parms, RangeIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorScale_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorScale_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorScale_Statics::NewProp_RangeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Get the current projector scale for the parameter with the given name\n" },
		{ "CPP_Default_RangeIndex", "-1" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Get the current projector scale for the parameter with the given name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "GetProjectorScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorScale_Statics::CustomizableObjectInstance_eventGetProjectorScale_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorUp_Statics
	{
		struct CustomizableObjectInstance_eventGetProjectorUp_Parms
		{
			FString ParamName;
			int32 RangeIndex;
			FVector ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RangeIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorUp_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorUp_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorUp_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorUp_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorUp_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorUp_Statics::NewProp_RangeIndex = { "RangeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorUp_Parms, RangeIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorUp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorUp_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorUp_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorUp_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorUp_Statics::NewProp_RangeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorUp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Get the current projector up vector for the parameter with the given name\n" },
		{ "CPP_Default_RangeIndex", "-1" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Get the current projector up vector for the parameter with the given name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "GetProjectorUp", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorUp_Statics::CustomizableObjectInstance_eventGetProjectorUp_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorUp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics
	{
		struct CustomizableObjectInstance_eventGetProjectorValue_Parms
		{
			FString ProjectorParamName;
			FVector OutPos;
			FVector OutDirection;
			FVector OutUp;
			FVector OutScale;
			float OutAngle;
			ECustomizableObjectProjectorType OutType;
			int32 RangeIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectorParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProjectorParamName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPos;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutDirection;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutUp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutScale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutAngle;
		static const UECodeGen_Private::FBytePropertyParams NewProp_OutType_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_OutType;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RangeIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::NewProp_ProjectorParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::NewProp_ProjectorParamName = { "ProjectorParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorValue_Parms, ProjectorParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::NewProp_ProjectorParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::NewProp_ProjectorParamName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::NewProp_OutPos = { "OutPos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorValue_Parms, OutPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::NewProp_OutDirection = { "OutDirection", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorValue_Parms, OutDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::NewProp_OutUp = { "OutUp", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorValue_Parms, OutUp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::NewProp_OutScale = { "OutScale", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorValue_Parms, OutScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::NewProp_OutAngle = { "OutAngle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorValue_Parms, OutAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::NewProp_OutType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::NewProp_OutType = { "OutType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorValue_Parms, OutType), Z_Construct_UEnum_CustomizableObject_ECustomizableObjectProjectorType, METADATA_PARAMS(nullptr, 0) }; // 4204272212
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::NewProp_RangeIndex = { "RangeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorValue_Parms, RangeIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::NewProp_ProjectorParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::NewProp_OutPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::NewProp_OutDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::NewProp_OutUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::NewProp_OutScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::NewProp_OutAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::NewProp_OutType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::NewProp_OutType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::NewProp_RangeIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Get the projector values of a projector parameter with index \"ProjectorParamIndex\"\n" },
		{ "CPP_Default_RangeIndex", "-1" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Get the projector values of a projector parameter with index \"ProjectorParamIndex\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "GetProjectorValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::CustomizableObjectInstance_eventGetProjectorValue_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValueRange_Statics
	{
		struct CustomizableObjectInstance_eventGetProjectorValueRange_Parms
		{
			FString ParamName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValueRange_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValueRange_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorValueRange_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValueRange_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValueRange_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValueRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetProjectorValueRange_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValueRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValueRange_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValueRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValueRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValueRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "GetProjectorValueRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValueRange_Statics::CustomizableObjectInstance_eventGetProjectorValueRange_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValueRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValueRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValueRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValueRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValueRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValueRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_GetSkeletalMesh_Statics
	{
		struct CustomizableObjectInstance_eventGetSkeletalMesh_Parms
		{
			int32 ComponentIndex;
			USkeletalMesh* ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ComponentIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetSkeletalMesh_Statics::NewProp_ComponentIndex = { "ComponentIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetSkeletalMesh_Parms, ComponentIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetSkeletalMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetSkeletalMesh_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_GetSkeletalMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetSkeletalMesh_Statics::NewProp_ComponentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetSkeletalMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetSkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "CPP_Default_ComponentIndex", "0" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_GetSkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "GetSkeletalMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_GetSkeletalMesh_Statics::CustomizableObjectInstance_eventGetSkeletalMesh_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_GetSkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetSkeletalMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetSkeletalMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetSkeletalMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_GetSkeletalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_GetSkeletalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameters_Statics
	{
		struct CustomizableObjectInstance_eventGetTextureParameters_Parms
		{
			TArray<FCustomizableObjectTextureParameterValue> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameters_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue, METADATA_PARAMS(nullptr, 0) }; // 1140826405
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetTextureParameters_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1140826405
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameters_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "GetTextureParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameters_Statics::CustomizableObjectInstance_eventGetTextureParameters_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameterSelectedOptionT_Statics
	{
		struct CustomizableObjectInstance_eventGetTextureParameterSelectedOptionT_Parms
		{
			FString TextureParamName;
			int32 RangeIndex;
			UTexture2D* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TextureParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RangeIndex;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameterSelectedOptionT_Statics::NewProp_TextureParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameterSelectedOptionT_Statics::NewProp_TextureParamName = { "TextureParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetTextureParameterSelectedOptionT_Parms, TextureParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameterSelectedOptionT_Statics::NewProp_TextureParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameterSelectedOptionT_Statics::NewProp_TextureParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameterSelectedOptionT_Statics::NewProp_RangeIndex = { "RangeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetTextureParameterSelectedOptionT_Parms, RangeIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameterSelectedOptionT_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetTextureParameterSelectedOptionT_Parms, ReturnValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameterSelectedOptionT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameterSelectedOptionT_Statics::NewProp_TextureParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameterSelectedOptionT_Statics::NewProp_RangeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameterSelectedOptionT_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameterSelectedOptionT_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "/** Gets the texture of a texture parameter with name \"TextureParamName\". */" },
		{ "CPP_Default_RangeIndex", "-1" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Gets the texture of a texture parameter with name \"TextureParamName\"." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameterSelectedOptionT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "GetTextureParameterSelectedOptionT", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameterSelectedOptionT_Statics::CustomizableObjectInstance_eventGetTextureParameterSelectedOptionT_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameterSelectedOptionT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameterSelectedOptionT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameterSelectedOptionT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameterSelectedOptionT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameterSelectedOptionT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameterSelectedOptionT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_GetVectorParameters_Statics
	{
		struct CustomizableObjectInstance_eventGetVectorParameters_Parms
		{
			TArray<FCustomizableObjectVectorParameterValue> ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetVectorParameters_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue, METADATA_PARAMS(nullptr, 0) }; // 1245826816
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_GetVectorParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventGetVectorParameters_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 1245826816
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_GetVectorParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetVectorParameters_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_GetVectorParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_GetVectorParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_GetVectorParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "GetVectorParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_GetVectorParameters_Statics::CustomizableObjectInstance_eventGetVectorParameters_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_GetVectorParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetVectorParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_GetVectorParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_GetVectorParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_GetVectorParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_GetVectorParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_HasAnyParameters_Statics
	{
		struct CustomizableObjectInstance_eventHasAnyParameters_Parms
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
	void Z_Construct_UFunction_UCustomizableObjectInstance_HasAnyParameters_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomizableObjectInstance_eventHasAnyParameters_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_HasAnyParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomizableObjectInstance_eventHasAnyParameters_Parms), &Z_Construct_UFunction_UCustomizableObjectInstance_HasAnyParameters_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_HasAnyParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_HasAnyParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_HasAnyParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "/** See FCustomizableObjectInstanceDescriptor::HasAnyParameters. */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "See FCustomizableObjectInstanceDescriptor::HasAnyParameters." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_HasAnyParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "HasAnyParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_HasAnyParameters_Statics::CustomizableObjectInstance_eventHasAnyParameters_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_HasAnyParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_HasAnyParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_HasAnyParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_HasAnyParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_HasAnyParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_HasAnyParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_HasAnySkeletalMesh_Statics
	{
		struct CustomizableObjectInstance_eventHasAnySkeletalMesh_Parms
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
	void Z_Construct_UFunction_UCustomizableObjectInstance_HasAnySkeletalMesh_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomizableObjectInstance_eventHasAnySkeletalMesh_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_HasAnySkeletalMesh_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomizableObjectInstance_eventHasAnySkeletalMesh_Parms), &Z_Construct_UFunction_UCustomizableObjectInstance_HasAnySkeletalMesh_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_HasAnySkeletalMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_HasAnySkeletalMesh_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_HasAnySkeletalMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_HasAnySkeletalMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "HasAnySkeletalMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_HasAnySkeletalMesh_Statics::CustomizableObjectInstance_eventHasAnySkeletalMesh_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_HasAnySkeletalMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_HasAnySkeletalMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_HasAnySkeletalMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_HasAnySkeletalMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_HasAnySkeletalMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_HasAnySkeletalMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_IsParameterRelevant_Statics
	{
		struct CustomizableObjectInstance_eventIsParameterRelevant_Parms
		{
			FString ParamName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_IsParameterRelevant_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_IsParameterRelevant_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventIsParameterRelevant_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_IsParameterRelevant_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_IsParameterRelevant_Statics::NewProp_ParamName_MetaData)) };
	void Z_Construct_UFunction_UCustomizableObjectInstance_IsParameterRelevant_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomizableObjectInstance_eventIsParameterRelevant_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_IsParameterRelevant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomizableObjectInstance_eventIsParameterRelevant_Parms), &Z_Construct_UFunction_UCustomizableObjectInstance_IsParameterRelevant_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_IsParameterRelevant_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_IsParameterRelevant_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_IsParameterRelevant_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_IsParameterRelevant_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "//! This is only valid if bBuildParameterDecorations has been set before the last update.\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "! This is only valid if bBuildParameterDecorations has been set before the last update." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_IsParameterRelevant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "IsParameterRelevant", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_IsParameterRelevant_Statics::CustomizableObjectInstance_eventIsParameterRelevant_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_IsParameterRelevant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_IsParameterRelevant_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_IsParameterRelevant_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_IsParameterRelevant_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_IsParameterRelevant()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_IsParameterRelevant_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_IsParamMultidimensional_Statics
	{
		struct CustomizableObjectInstance_eventIsParamMultidimensional_Parms
		{
			FString ParamName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_IsParamMultidimensional_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_IsParamMultidimensional_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventIsParamMultidimensional_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_IsParamMultidimensional_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_IsParamMultidimensional_Statics::NewProp_ParamName_MetaData)) };
	void Z_Construct_UFunction_UCustomizableObjectInstance_IsParamMultidimensional_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CustomizableObjectInstance_eventIsParamMultidimensional_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_IsParamMultidimensional_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomizableObjectInstance_eventIsParamMultidimensional_Parms), &Z_Construct_UFunction_UCustomizableObjectInstance_IsParamMultidimensional_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_IsParamMultidimensional_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_IsParamMultidimensional_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_IsParamMultidimensional_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_IsParamMultidimensional_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_IsParamMultidimensional_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "IsParamMultidimensional", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_IsParamMultidimensional_Statics::CustomizableObjectInstance_eventIsParamMultidimensional_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_IsParamMultidimensional_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_IsParamMultidimensional_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_IsParamMultidimensional_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_IsParamMultidimensional_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_IsParamMultidimensional()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_IsParamMultidimensional_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateLayer_Statics
	{
		struct CustomizableObjectInstance_eventMultilayerProjectorCreateLayer_Parms
		{
			FName ProjectorParamName;
			int32 Index;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectorParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProjectorParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateLayer_Statics::NewProp_ProjectorParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateLayer_Statics::NewProp_ProjectorParamName = { "ProjectorParamName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventMultilayerProjectorCreateLayer_Parms, ProjectorParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateLayer_Statics::NewProp_ProjectorParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateLayer_Statics::NewProp_ProjectorParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateLayer_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventMultilayerProjectorCreateLayer_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateLayer_Statics::NewProp_ProjectorParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateLayer_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "/** See FMultilayerProjector::CreateLayer. */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "See FMultilayerProjector::CreateLayer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "MultilayerProjectorCreateLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateLayer_Statics::CustomizableObjectInstance_eventMultilayerProjectorCreateLayer_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer_Statics
	{
		struct CustomizableObjectInstance_eventMultilayerProjectorCreateVirtualLayer_Parms
		{
			FName ProjectorParamName;
			FName Id;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectorParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProjectorParamName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer_Statics::NewProp_ProjectorParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer_Statics::NewProp_ProjectorParamName = { "ProjectorParamName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventMultilayerProjectorCreateVirtualLayer_Parms, ProjectorParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer_Statics::NewProp_ProjectorParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer_Statics::NewProp_ProjectorParamName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer_Statics::NewProp_Id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventMultilayerProjectorCreateVirtualLayer_Parms, Id), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer_Statics::NewProp_Id_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer_Statics::NewProp_ProjectorParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer_Statics::NewProp_Id,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "/** See FMultilayerProjector::VirtualLayer. */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "See FMultilayerProjector::VirtualLayer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "MultilayerProjectorCreateVirtualLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer_Statics::CustomizableObjectInstance_eventMultilayerProjectorCreateVirtualLayer_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer_Statics
	{
		struct CustomizableObjectInstance_eventMultilayerProjectorFindOrCreateVirtualLayer_Parms
		{
			FName ProjectorParamName;
			FName Id;
			FMultilayerProjectorVirtualLayer ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectorParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProjectorParamName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Id;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer_Statics::NewProp_ProjectorParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer_Statics::NewProp_ProjectorParamName = { "ProjectorParamName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventMultilayerProjectorFindOrCreateVirtualLayer_Parms, ProjectorParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer_Statics::NewProp_ProjectorParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer_Statics::NewProp_ProjectorParamName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer_Statics::NewProp_Id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventMultilayerProjectorFindOrCreateVirtualLayer_Parms, Id), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer_Statics::NewProp_Id_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventMultilayerProjectorFindOrCreateVirtualLayer_Parms, ReturnValue), Z_Construct_UScriptStruct_FMultilayerProjectorVirtualLayer, METADATA_PARAMS(nullptr, 0) }; // 2879365485
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer_Statics::NewProp_ProjectorParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "/** See FMultilayerProjector::FindOrCreateVirtualLayer. */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "See FMultilayerProjector::FindOrCreateVirtualLayer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "MultilayerProjectorFindOrCreateVirtualLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer_Statics::CustomizableObjectInstance_eventMultilayerProjectorFindOrCreateVirtualLayer_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetLayer_Statics
	{
		struct CustomizableObjectInstance_eventMultilayerProjectorGetLayer_Parms
		{
			FName ProjectorParamName;
			int32 Index;
			FMultilayerProjectorLayer ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectorParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProjectorParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetLayer_Statics::NewProp_ProjectorParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetLayer_Statics::NewProp_ProjectorParamName = { "ProjectorParamName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventMultilayerProjectorGetLayer_Parms, ProjectorParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetLayer_Statics::NewProp_ProjectorParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetLayer_Statics::NewProp_ProjectorParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetLayer_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventMultilayerProjectorGetLayer_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventMultilayerProjectorGetLayer_Parms, ReturnValue), Z_Construct_UScriptStruct_FMultilayerProjectorLayer, METADATA_PARAMS(nullptr, 0) }; // 1631463628
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetLayer_Statics::NewProp_ProjectorParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetLayer_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "/** See FMultilayerProjector::GetLayer. */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "See FMultilayerProjector::GetLayer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "MultilayerProjectorGetLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetLayer_Statics::CustomizableObjectInstance_eventMultilayerProjectorGetLayer_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayer_Statics
	{
		struct CustomizableObjectInstance_eventMultilayerProjectorGetVirtualLayer_Parms
		{
			FName ProjectorParamName;
			FName Id;
			FMultilayerProjectorVirtualLayer ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectorParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProjectorParamName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Id;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayer_Statics::NewProp_ProjectorParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayer_Statics::NewProp_ProjectorParamName = { "ProjectorParamName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventMultilayerProjectorGetVirtualLayer_Parms, ProjectorParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayer_Statics::NewProp_ProjectorParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayer_Statics::NewProp_ProjectorParamName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayer_Statics::NewProp_Id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayer_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventMultilayerProjectorGetVirtualLayer_Parms, Id), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayer_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayer_Statics::NewProp_Id_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventMultilayerProjectorGetVirtualLayer_Parms, ReturnValue), Z_Construct_UScriptStruct_FMultilayerProjectorVirtualLayer, METADATA_PARAMS(nullptr, 0) }; // 2879365485
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayer_Statics::NewProp_ProjectorParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayer_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "/** See FMultilayerProjector::GetVirtualLayer. */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "See FMultilayerProjector::GetVirtualLayer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "MultilayerProjectorGetVirtualLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayer_Statics::CustomizableObjectInstance_eventMultilayerProjectorGetVirtualLayer_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayers_Statics
	{
		struct CustomizableObjectInstance_eventMultilayerProjectorGetVirtualLayers_Parms
		{
			FName ProjectorParamName;
			TArray<FName> ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectorParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProjectorParamName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayers_Statics::NewProp_ProjectorParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayers_Statics::NewProp_ProjectorParamName = { "ProjectorParamName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventMultilayerProjectorGetVirtualLayers_Parms, ProjectorParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayers_Statics::NewProp_ProjectorParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayers_Statics::NewProp_ProjectorParamName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayers_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventMultilayerProjectorGetVirtualLayers_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayers_Statics::NewProp_ProjectorParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayers_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "/** See FMultilayerProjector::GetVirtualLayers. */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "See FMultilayerProjector::GetVirtualLayers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "MultilayerProjectorGetVirtualLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayers_Statics::CustomizableObjectInstance_eventMultilayerProjectorGetVirtualLayers_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorNumLayers_Statics
	{
		struct CustomizableObjectInstance_eventMultilayerProjectorNumLayers_Parms
		{
			FName ProjectorParamName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectorParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProjectorParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorNumLayers_Statics::NewProp_ProjectorParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorNumLayers_Statics::NewProp_ProjectorParamName = { "ProjectorParamName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventMultilayerProjectorNumLayers_Parms, ProjectorParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorNumLayers_Statics::NewProp_ProjectorParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorNumLayers_Statics::NewProp_ProjectorParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorNumLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventMultilayerProjectorNumLayers_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorNumLayers_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorNumLayers_Statics::NewProp_ProjectorParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorNumLayers_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorNumLayers_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "/** See FMultilayerProjector::NumLayers. */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "See FMultilayerProjector::NumLayers." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorNumLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "MultilayerProjectorNumLayers", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorNumLayers_Statics::CustomizableObjectInstance_eventMultilayerProjectorNumLayers_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorNumLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorNumLayers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorNumLayers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorNumLayers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorNumLayers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorNumLayers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveLayerAt_Statics
	{
		struct CustomizableObjectInstance_eventMultilayerProjectorRemoveLayerAt_Parms
		{
			FName ProjectorParamName;
			int32 Index;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectorParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProjectorParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveLayerAt_Statics::NewProp_ProjectorParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveLayerAt_Statics::NewProp_ProjectorParamName = { "ProjectorParamName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventMultilayerProjectorRemoveLayerAt_Parms, ProjectorParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveLayerAt_Statics::NewProp_ProjectorParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveLayerAt_Statics::NewProp_ProjectorParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveLayerAt_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventMultilayerProjectorRemoveLayerAt_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveLayerAt_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveLayerAt_Statics::NewProp_ProjectorParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveLayerAt_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveLayerAt_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "/** See FMultilayerProjector::RemoveLayerAt. */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "See FMultilayerProjector::RemoveLayerAt." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveLayerAt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "MultilayerProjectorRemoveLayerAt", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveLayerAt_Statics::CustomizableObjectInstance_eventMultilayerProjectorRemoveLayerAt_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveLayerAt_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveLayerAt_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveLayerAt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveLayerAt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveLayerAt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveLayerAt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer_Statics
	{
		struct CustomizableObjectInstance_eventMultilayerProjectorRemoveVirtualLayer_Parms
		{
			FName ProjectorParamName;
			FName Id;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectorParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProjectorParamName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Id;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer_Statics::NewProp_ProjectorParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer_Statics::NewProp_ProjectorParamName = { "ProjectorParamName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventMultilayerProjectorRemoveVirtualLayer_Parms, ProjectorParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer_Statics::NewProp_ProjectorParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer_Statics::NewProp_ProjectorParamName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer_Statics::NewProp_Id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventMultilayerProjectorRemoveVirtualLayer_Parms, Id), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer_Statics::NewProp_Id_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer_Statics::NewProp_ProjectorParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer_Statics::NewProp_Id,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "/** See FMultilayerProjector::RemoveVirtualLayer. */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "See FMultilayerProjector::RemoveVirtualLayer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "MultilayerProjectorRemoveVirtualLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer_Statics::CustomizableObjectInstance_eventMultilayerProjectorRemoveVirtualLayer_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateLayer_Statics
	{
		struct CustomizableObjectInstance_eventMultilayerProjectorUpdateLayer_Parms
		{
			FName ProjectorParamName;
			int32 Index;
			FMultilayerProjectorLayer Layer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectorParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProjectorParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Layer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateLayer_Statics::NewProp_ProjectorParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateLayer_Statics::NewProp_ProjectorParamName = { "ProjectorParamName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventMultilayerProjectorUpdateLayer_Parms, ProjectorParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateLayer_Statics::NewProp_ProjectorParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateLayer_Statics::NewProp_ProjectorParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateLayer_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventMultilayerProjectorUpdateLayer_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateLayer_Statics::NewProp_Layer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateLayer_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventMultilayerProjectorUpdateLayer_Parms, Layer), Z_Construct_UScriptStruct_FMultilayerProjectorLayer, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateLayer_Statics::NewProp_Layer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateLayer_Statics::NewProp_Layer_MetaData)) }; // 1631463628
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateLayer_Statics::NewProp_ProjectorParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateLayer_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateLayer_Statics::NewProp_Layer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "/** See FMultilayerProjector::UpdateLayer. */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "See FMultilayerProjector::UpdateLayer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "MultilayerProjectorUpdateLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateLayer_Statics::CustomizableObjectInstance_eventMultilayerProjectorUpdateLayer_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer_Statics
	{
		struct CustomizableObjectInstance_eventMultilayerProjectorUpdateVirtualLayer_Parms
		{
			FName ProjectorParamName;
			FName Id;
			FMultilayerProjectorVirtualLayer Layer;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectorParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProjectorParamName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_Id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Layer_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Layer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer_Statics::NewProp_ProjectorParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer_Statics::NewProp_ProjectorParamName = { "ProjectorParamName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventMultilayerProjectorUpdateVirtualLayer_Parms, ProjectorParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer_Statics::NewProp_ProjectorParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer_Statics::NewProp_ProjectorParamName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer_Statics::NewProp_Id_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventMultilayerProjectorUpdateVirtualLayer_Parms, Id), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer_Statics::NewProp_Id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer_Statics::NewProp_Layer_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer_Statics::NewProp_Layer = { "Layer", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventMultilayerProjectorUpdateVirtualLayer_Parms, Layer), Z_Construct_UScriptStruct_FMultilayerProjectorVirtualLayer, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer_Statics::NewProp_Layer_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer_Statics::NewProp_Layer_MetaData)) }; // 2879365485
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer_Statics::NewProp_ProjectorParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer_Statics::NewProp_Id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer_Statics::NewProp_Layer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "/** See FMultilayerProjector::UpdateVirtualLayer. */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "See FMultilayerProjector::UpdateVirtualLayer." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "MultilayerProjectorUpdateVirtualLayer", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer_Statics::CustomizableObjectInstance_eventMultilayerProjectorUpdateVirtualLayer_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_RemoveMultilayerProjector_Statics
	{
		struct CustomizableObjectInstance_eventRemoveMultilayerProjector_Parms
		{
			FName ProjectorParamName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectorParamName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ProjectorParamName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_RemoveMultilayerProjector_Statics::NewProp_ProjectorParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_RemoveMultilayerProjector_Statics::NewProp_ProjectorParamName = { "ProjectorParamName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventRemoveMultilayerProjector_Parms, ProjectorParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_RemoveMultilayerProjector_Statics::NewProp_ProjectorParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_RemoveMultilayerProjector_Statics::NewProp_ProjectorParamName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_RemoveMultilayerProjector_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_RemoveMultilayerProjector_Statics::NewProp_ProjectorParamName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_RemoveMultilayerProjector_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "/** Given Multilayer Projector name, remove a Multilayer Projector Helper. See FMultilayerProjector. */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Given Multilayer Projector name, remove a Multilayer Projector Helper. See FMultilayerProjector." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_RemoveMultilayerProjector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "RemoveMultilayerProjector", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_RemoveMultilayerProjector_Statics::CustomizableObjectInstance_eventRemoveMultilayerProjector_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_RemoveMultilayerProjector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_RemoveMultilayerProjector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_RemoveMultilayerProjector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_RemoveMultilayerProjector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_RemoveMultilayerProjector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_RemoveMultilayerProjector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromFloatRange_Statics
	{
		struct CustomizableObjectInstance_eventRemoveValueFromFloatRange_Parms
		{
			FString ParamName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromFloatRange_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromFloatRange_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventRemoveValueFromFloatRange_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromFloatRange_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromFloatRange_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromFloatRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventRemoveValueFromFloatRange_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromFloatRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromFloatRange_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromFloatRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromFloatRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Remove the last of the float range of values from the parameter ParamName, returns the index of the last valid float, -1 if no values left.\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Remove the last of the float range of values from the parameter ParamName, returns the index of the last valid float, -1 if no values left." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromFloatRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "RemoveValueFromFloatRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromFloatRange_Statics::CustomizableObjectInstance_eventRemoveValueFromFloatRange_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromFloatRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromFloatRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromFloatRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromFloatRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromFloatRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromFloatRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromIntRange_Statics
	{
		struct CustomizableObjectInstance_eventRemoveValueFromIntRange_Parms
		{
			FString ParamName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromIntRange_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromIntRange_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventRemoveValueFromIntRange_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromIntRange_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromIntRange_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromIntRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventRemoveValueFromIntRange_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromIntRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromIntRange_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromIntRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromIntRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Remove the last of the integer range of values from the parameter ParamName, returns the index of the last valid integer, -1 if no values left.\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Remove the last of the integer range of values from the parameter ParamName, returns the index of the last valid integer, -1 if no values left." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromIntRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "RemoveValueFromIntRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromIntRange_Statics::CustomizableObjectInstance_eventRemoveValueFromIntRange_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromIntRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromIntRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromIntRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromIntRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromIntRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromIntRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromProjectorRange_Statics
	{
		struct CustomizableObjectInstance_eventRemoveValueFromProjectorRange_Parms
		{
			FString ParamName;
			int32 ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromProjectorRange_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromProjectorRange_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventRemoveValueFromProjectorRange_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromProjectorRange_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromProjectorRange_Statics::NewProp_ParamName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromProjectorRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventRemoveValueFromProjectorRange_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromProjectorRange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromProjectorRange_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromProjectorRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromProjectorRange_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Remove the last of the projector range of values from the parameter ParamName, returns the index of the last valid projector, -1 if no values left.\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Remove the last of the projector range of values from the parameter ParamName, returns the index of the last valid projector, -1 if no values left." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromProjectorRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "RemoveValueFromProjectorRange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromProjectorRange_Statics::CustomizableObjectInstance_eventRemoveValueFromProjectorRange_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromProjectorRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromProjectorRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromProjectorRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromProjectorRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromProjectorRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromProjectorRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_SetBoolParameterSelectedOption_Statics
	{
		struct CustomizableObjectInstance_eventSetBoolParameterSelectedOption_Parms
		{
			FString BoolParamName;
			bool BoolValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BoolParamName;
		static void NewProp_BoolValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_BoolValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_SetBoolParameterSelectedOption_Statics::NewProp_BoolParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_SetBoolParameterSelectedOption_Statics::NewProp_BoolParamName = { "BoolParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventSetBoolParameterSelectedOption_Parms, BoolParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_SetBoolParameterSelectedOption_Statics::NewProp_BoolParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetBoolParameterSelectedOption_Statics::NewProp_BoolParamName_MetaData)) };
	void Z_Construct_UFunction_UCustomizableObjectInstance_SetBoolParameterSelectedOption_Statics::NewProp_BoolValue_SetBit(void* Obj)
	{
		((CustomizableObjectInstance_eventSetBoolParameterSelectedOption_Parms*)Obj)->BoolValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_SetBoolParameterSelectedOption_Statics::NewProp_BoolValue = { "BoolValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomizableObjectInstance_eventSetBoolParameterSelectedOption_Parms), &Z_Construct_UFunction_UCustomizableObjectInstance_SetBoolParameterSelectedOption_Statics::NewProp_BoolValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_SetBoolParameterSelectedOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_SetBoolParameterSelectedOption_Statics::NewProp_BoolParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_SetBoolParameterSelectedOption_Statics::NewProp_BoolValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_SetBoolParameterSelectedOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Sets the bool value \"BoolValue\" of a bool parameter with name \"BoolParamName\"\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Sets the bool value \"BoolValue\" of a bool parameter with name \"BoolParamName\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_SetBoolParameterSelectedOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "SetBoolParameterSelectedOption", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_SetBoolParameterSelectedOption_Statics::CustomizableObjectInstance_eventSetBoolParameterSelectedOption_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_SetBoolParameterSelectedOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetBoolParameterSelectedOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_SetBoolParameterSelectedOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetBoolParameterSelectedOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_SetBoolParameterSelectedOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_SetBoolParameterSelectedOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_SetBuildParameterDecorations_Statics
	{
		struct CustomizableObjectInstance_eventSetBuildParameterDecorations_Parms
		{
			bool Value;
		};
		static void NewProp_Value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCustomizableObjectInstance_SetBuildParameterDecorations_Statics::NewProp_Value_SetBit(void* Obj)
	{
		((CustomizableObjectInstance_eventSetBuildParameterDecorations_Parms*)Obj)->Value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_SetBuildParameterDecorations_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomizableObjectInstance_eventSetBuildParameterDecorations_Parms), &Z_Construct_UFunction_UCustomizableObjectInstance_SetBuildParameterDecorations_Statics::NewProp_Value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_SetBuildParameterDecorations_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_SetBuildParameterDecorations_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_SetBuildParameterDecorations_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_SetBuildParameterDecorations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "SetBuildParameterDecorations", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_SetBuildParameterDecorations_Statics::CustomizableObjectInstance_eventSetBuildParameterDecorations_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_SetBuildParameterDecorations_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetBuildParameterDecorations_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_SetBuildParameterDecorations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetBuildParameterDecorations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_SetBuildParameterDecorations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_SetBuildParameterDecorations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_SetColorParameterSelectedOption_Statics
	{
		struct CustomizableObjectInstance_eventSetColorParameterSelectedOption_Parms
		{
			FString ColorParamName;
			FLinearColor ColorValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ColorParamName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColorValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ColorValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_SetColorParameterSelectedOption_Statics::NewProp_ColorParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_SetColorParameterSelectedOption_Statics::NewProp_ColorParamName = { "ColorParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventSetColorParameterSelectedOption_Parms, ColorParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_SetColorParameterSelectedOption_Statics::NewProp_ColorParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetColorParameterSelectedOption_Statics::NewProp_ColorParamName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_SetColorParameterSelectedOption_Statics::NewProp_ColorValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_SetColorParameterSelectedOption_Statics::NewProp_ColorValue = { "ColorValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventSetColorParameterSelectedOption_Parms, ColorValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_SetColorParameterSelectedOption_Statics::NewProp_ColorValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetColorParameterSelectedOption_Statics::NewProp_ColorValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_SetColorParameterSelectedOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_SetColorParameterSelectedOption_Statics::NewProp_ColorParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_SetColorParameterSelectedOption_Statics::NewProp_ColorValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_SetColorParameterSelectedOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Sets the color value \"ColorValue\" of a color parameter with index \"ColorParamIndex\"\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Sets the color value \"ColorValue\" of a color parameter with index \"ColorParamIndex\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_SetColorParameterSelectedOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "SetColorParameterSelectedOption", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_SetColorParameterSelectedOption_Statics::CustomizableObjectInstance_eventSetColorParameterSelectedOption_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_SetColorParameterSelectedOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetColorParameterSelectedOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_SetColorParameterSelectedOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetColorParameterSelectedOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_SetColorParameterSelectedOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_SetColorParameterSelectedOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_SetCurrentState_Statics
	{
		struct CustomizableObjectInstance_eventSetCurrentState_Parms
		{
			FString StateName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StateName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_StateName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_SetCurrentState_Statics::NewProp_StateName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_SetCurrentState_Statics::NewProp_StateName = { "StateName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventSetCurrentState_Parms, StateName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_SetCurrentState_Statics::NewProp_StateName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetCurrentState_Statics::NewProp_StateName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_SetCurrentState_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_SetCurrentState_Statics::NewProp_StateName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_SetCurrentState_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_SetCurrentState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "SetCurrentState", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_SetCurrentState_Statics::CustomizableObjectInstance_eventSetCurrentState_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_SetCurrentState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetCurrentState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_SetCurrentState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetCurrentState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_SetCurrentState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_SetCurrentState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_SetFloatParameterSelectedOption_Statics
	{
		struct CustomizableObjectInstance_eventSetFloatParameterSelectedOption_Parms
		{
			FString FloatParamName;
			float FloatValue;
			int32 RangeIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FloatParamName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FloatValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RangeIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_SetFloatParameterSelectedOption_Statics::NewProp_FloatParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_SetFloatParameterSelectedOption_Statics::NewProp_FloatParamName = { "FloatParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventSetFloatParameterSelectedOption_Parms, FloatParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_SetFloatParameterSelectedOption_Statics::NewProp_FloatParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetFloatParameterSelectedOption_Statics::NewProp_FloatParamName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_SetFloatParameterSelectedOption_Statics::NewProp_FloatValue = { "FloatValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventSetFloatParameterSelectedOption_Parms, FloatValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_SetFloatParameterSelectedOption_Statics::NewProp_RangeIndex = { "RangeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventSetFloatParameterSelectedOption_Parms, RangeIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_SetFloatParameterSelectedOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_SetFloatParameterSelectedOption_Statics::NewProp_FloatParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_SetFloatParameterSelectedOption_Statics::NewProp_FloatValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_SetFloatParameterSelectedOption_Statics::NewProp_RangeIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_SetFloatParameterSelectedOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Sets the float value \"FloatValue\" of a float parameter with index \"FloatParamIndex\"\n" },
		{ "CPP_Default_RangeIndex", "-1" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Sets the float value \"FloatValue\" of a float parameter with index \"FloatParamIndex\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_SetFloatParameterSelectedOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "SetFloatParameterSelectedOption", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_SetFloatParameterSelectedOption_Statics::CustomizableObjectInstance_eventSetFloatParameterSelectedOption_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_SetFloatParameterSelectedOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetFloatParameterSelectedOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_SetFloatParameterSelectedOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetFloatParameterSelectedOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_SetFloatParameterSelectedOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_SetFloatParameterSelectedOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_SetIntParameterSelectedOption_Statics
	{
		struct CustomizableObjectInstance_eventSetIntParameterSelectedOption_Parms
		{
			FString ParamName;
			FString SelectedOptionName;
			int32 RangeIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ParamName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SelectedOptionName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedOptionName;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RangeIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_SetIntParameterSelectedOption_Statics::NewProp_ParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_SetIntParameterSelectedOption_Statics::NewProp_ParamName = { "ParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventSetIntParameterSelectedOption_Parms, ParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_SetIntParameterSelectedOption_Statics::NewProp_ParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetIntParameterSelectedOption_Statics::NewProp_ParamName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_SetIntParameterSelectedOption_Statics::NewProp_SelectedOptionName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_SetIntParameterSelectedOption_Statics::NewProp_SelectedOptionName = { "SelectedOptionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventSetIntParameterSelectedOption_Parms, SelectedOptionName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_SetIntParameterSelectedOption_Statics::NewProp_SelectedOptionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetIntParameterSelectedOption_Statics::NewProp_SelectedOptionName_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_SetIntParameterSelectedOption_Statics::NewProp_RangeIndex = { "RangeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventSetIntParameterSelectedOption_Parms, RangeIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_SetIntParameterSelectedOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_SetIntParameterSelectedOption_Statics::NewProp_ParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_SetIntParameterSelectedOption_Statics::NewProp_SelectedOptionName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_SetIntParameterSelectedOption_Statics::NewProp_RangeIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_SetIntParameterSelectedOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Sets the selected option of an int parameter, by the option's name\n" },
		{ "CPP_Default_RangeIndex", "-1" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Sets the selected option of an int parameter, by the option's name" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_SetIntParameterSelectedOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "SetIntParameterSelectedOption", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_SetIntParameterSelectedOption_Statics::CustomizableObjectInstance_eventSetIntParameterSelectedOption_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_SetIntParameterSelectedOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetIntParameterSelectedOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_SetIntParameterSelectedOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetIntParameterSelectedOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_SetIntParameterSelectedOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_SetIntParameterSelectedOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_SetObject_Statics
	{
		struct CustomizableObjectInstance_eventSetObject_Parms
		{
			UCustomizableObject* InObject;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_SetObject_Statics::NewProp_InObject = { "InObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventSetObject_Parms, InObject), Z_Construct_UClass_UCustomizableObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_SetObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_SetObject_Statics::NewProp_InObject,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_SetObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_SetObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "SetObject", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_SetObject_Statics::CustomizableObjectInstance_eventSetObject_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_SetObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_SetObject_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_SetObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_SetObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics
	{
		struct CustomizableObjectInstance_eventSetProjectorValue_Parms
		{
			FString ProjectorParamName;
			FVector OutPos;
			FVector OutDirection;
			FVector OutUp;
			FVector OutScale;
			float OutAngle;
			int32 RangeIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectorParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ProjectorParamName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutPos_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutDirection_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutDirection;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutUp_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutUp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OutScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutScale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OutAngle;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RangeIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_ProjectorParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_ProjectorParamName = { "ProjectorParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventSetProjectorValue_Parms, ProjectorParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_ProjectorParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_ProjectorParamName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_OutPos_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_OutPos = { "OutPos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventSetProjectorValue_Parms, OutPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_OutPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_OutPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_OutDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_OutDirection = { "OutDirection", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventSetProjectorValue_Parms, OutDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_OutDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_OutDirection_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_OutUp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_OutUp = { "OutUp", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventSetProjectorValue_Parms, OutUp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_OutUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_OutUp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_OutScale_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_OutScale = { "OutScale", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventSetProjectorValue_Parms, OutScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_OutScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_OutScale_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_OutAngle = { "OutAngle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventSetProjectorValue_Parms, OutAngle), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_RangeIndex = { "RangeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventSetProjectorValue_Parms, RangeIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_ProjectorParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_OutPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_OutDirection,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_OutUp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_OutScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_OutAngle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::NewProp_RangeIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Sets the projector values of a projector parameter with index \"ProjectorParamIndex\"\n" },
		{ "CPP_Default_RangeIndex", "-1" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Sets the projector values of a projector parameter with index \"ProjectorParamIndex\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "SetProjectorValue", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::CustomizableObjectInstance_eventSetProjectorValue_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_SetRandomValues_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_SetRandomValues_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "//! Set random values to the parameters. Useful for testing only.\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "! Set random values to the parameters. Useful for testing only." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_SetRandomValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "SetRandomValues", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_SetRandomValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetRandomValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_SetRandomValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_SetRandomValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_SetReplacePhysicsAssets_Statics
	{
		struct CustomizableObjectInstance_eventSetReplacePhysicsAssets_Parms
		{
			bool bReplaceEnabled;
		};
		static void NewProp_bReplaceEnabled_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReplaceEnabled;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCustomizableObjectInstance_SetReplacePhysicsAssets_Statics::NewProp_bReplaceEnabled_SetBit(void* Obj)
	{
		((CustomizableObjectInstance_eventSetReplacePhysicsAssets_Parms*)Obj)->bReplaceEnabled = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_SetReplacePhysicsAssets_Statics::NewProp_bReplaceEnabled = { "bReplaceEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomizableObjectInstance_eventSetReplacePhysicsAssets_Parms), &Z_Construct_UFunction_UCustomizableObjectInstance_SetReplacePhysicsAssets_Statics::NewProp_bReplaceEnabled_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_SetReplacePhysicsAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_SetReplacePhysicsAssets_Statics::NewProp_bReplaceEnabled,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_SetReplacePhysicsAssets_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Enable physics asset replacement so that generated skeletal meshes have the merged physics assets of their skeletal mesh parts and reference mesh\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Enable physics asset replacement so that generated skeletal meshes have the merged physics assets of their skeletal mesh parts and reference mesh" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_SetReplacePhysicsAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "SetReplacePhysicsAssets", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_SetReplacePhysicsAssets_Statics::CustomizableObjectInstance_eventSetReplacePhysicsAssets_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_SetReplacePhysicsAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetReplacePhysicsAssets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_SetReplacePhysicsAssets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetReplacePhysicsAssets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_SetReplacePhysicsAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_SetReplacePhysicsAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_SetTextureParameterSelectedOptionT_Statics
	{
		struct CustomizableObjectInstance_eventSetTextureParameterSelectedOptionT_Parms
		{
			FString TextureParamName;
			UTexture2D* TextureValue;
			int32 RangeIndex;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TextureParamName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureValue;
		static const UECodeGen_Private::FIntPropertyParams NewProp_RangeIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_SetTextureParameterSelectedOptionT_Statics::NewProp_TextureParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_SetTextureParameterSelectedOptionT_Statics::NewProp_TextureParamName = { "TextureParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventSetTextureParameterSelectedOptionT_Parms, TextureParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_SetTextureParameterSelectedOptionT_Statics::NewProp_TextureParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetTextureParameterSelectedOptionT_Statics::NewProp_TextureParamName_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_SetTextureParameterSelectedOptionT_Statics::NewProp_TextureValue = { "TextureValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventSetTextureParameterSelectedOptionT_Parms, TextureValue), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_SetTextureParameterSelectedOptionT_Statics::NewProp_RangeIndex = { "RangeIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventSetTextureParameterSelectedOptionT_Parms, RangeIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_SetTextureParameterSelectedOptionT_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_SetTextureParameterSelectedOptionT_Statics::NewProp_TextureParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_SetTextureParameterSelectedOptionT_Statics::NewProp_TextureValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_SetTextureParameterSelectedOptionT_Statics::NewProp_RangeIndex,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_SetTextureParameterSelectedOptionT_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "/** Sets the texture \"Texture\" of a texture parameter with index \"TextureParamIndex\". */" },
		{ "CPP_Default_RangeIndex", "-1" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Sets the texture \"Texture\" of a texture parameter with index \"TextureParamIndex\"." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_SetTextureParameterSelectedOptionT_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "SetTextureParameterSelectedOptionT", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_SetTextureParameterSelectedOptionT_Statics::CustomizableObjectInstance_eventSetTextureParameterSelectedOptionT_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_SetTextureParameterSelectedOptionT_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetTextureParameterSelectedOptionT_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_SetTextureParameterSelectedOptionT_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetTextureParameterSelectedOptionT_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_SetTextureParameterSelectedOptionT()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_SetTextureParameterSelectedOptionT_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_SetVectorParameterSelectedOption_Statics
	{
		struct CustomizableObjectInstance_eventSetVectorParameterSelectedOption_Parms
		{
			FString VectorParamName;
			FLinearColor VectorValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorParamName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_VectorParamName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorValue_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_SetVectorParameterSelectedOption_Statics::NewProp_VectorParamName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_SetVectorParameterSelectedOption_Statics::NewProp_VectorParamName = { "VectorParamName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventSetVectorParameterSelectedOption_Parms, VectorParamName), METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_SetVectorParameterSelectedOption_Statics::NewProp_VectorParamName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetVectorParameterSelectedOption_Statics::NewProp_VectorParamName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_SetVectorParameterSelectedOption_Statics::NewProp_VectorValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_SetVectorParameterSelectedOption_Statics::NewProp_VectorValue = { "VectorValue", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CustomizableObjectInstance_eventSetVectorParameterSelectedOption_Parms, VectorValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_SetVectorParameterSelectedOption_Statics::NewProp_VectorValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetVectorParameterSelectedOption_Statics::NewProp_VectorValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_SetVectorParameterSelectedOption_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_SetVectorParameterSelectedOption_Statics::NewProp_VectorParamName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_SetVectorParameterSelectedOption_Statics::NewProp_VectorValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_SetVectorParameterSelectedOption_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "// Sets the vector value \"VectorValue\" of a bool parameter with index \"VectorParamIndex\"\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Sets the vector value \"VectorValue\" of a bool parameter with index \"VectorParamIndex\"" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_SetVectorParameterSelectedOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "SetVectorParameterSelectedOption", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_SetVectorParameterSelectedOption_Statics::CustomizableObjectInstance_eventSetVectorParameterSelectedOption_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_SetVectorParameterSelectedOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetVectorParameterSelectedOption_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_SetVectorParameterSelectedOption_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_SetVectorParameterSelectedOption_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_SetVectorParameterSelectedOption()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_SetVectorParameterSelectedOption_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCustomizableObjectInstance_UpdateSkeletalMeshAsync_Statics
	{
		struct CustomizableObjectInstance_eventUpdateSkeletalMeshAsync_Parms
		{
			bool bIgnoreCloseDist;
			bool bForceHighPriority;
		};
		static void NewProp_bIgnoreCloseDist_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreCloseDist;
		static void NewProp_bForceHighPriority_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceHighPriority;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCustomizableObjectInstance_UpdateSkeletalMeshAsync_Statics::NewProp_bIgnoreCloseDist_SetBit(void* Obj)
	{
		((CustomizableObjectInstance_eventUpdateSkeletalMeshAsync_Parms*)Obj)->bIgnoreCloseDist = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_UpdateSkeletalMeshAsync_Statics::NewProp_bIgnoreCloseDist = { "bIgnoreCloseDist", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomizableObjectInstance_eventUpdateSkeletalMeshAsync_Parms), &Z_Construct_UFunction_UCustomizableObjectInstance_UpdateSkeletalMeshAsync_Statics::NewProp_bIgnoreCloseDist_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UCustomizableObjectInstance_UpdateSkeletalMeshAsync_Statics::NewProp_bForceHighPriority_SetBit(void* Obj)
	{
		((CustomizableObjectInstance_eventUpdateSkeletalMeshAsync_Parms*)Obj)->bForceHighPriority = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCustomizableObjectInstance_UpdateSkeletalMeshAsync_Statics::NewProp_bForceHighPriority = { "bForceHighPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(CustomizableObjectInstance_eventUpdateSkeletalMeshAsync_Parms), &Z_Construct_UFunction_UCustomizableObjectInstance_UpdateSkeletalMeshAsync_Statics::NewProp_bForceHighPriority_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCustomizableObjectInstance_UpdateSkeletalMeshAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_UpdateSkeletalMeshAsync_Statics::NewProp_bIgnoreCloseDist,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCustomizableObjectInstance_UpdateSkeletalMeshAsync_Statics::NewProp_bForceHighPriority,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCustomizableObjectInstance_UpdateSkeletalMeshAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "//\n" },
		{ "CPP_Default_bForceHighPriority", "false" },
		{ "CPP_Default_bIgnoreCloseDist", "false" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCustomizableObjectInstance_UpdateSkeletalMeshAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCustomizableObjectInstance, nullptr, "UpdateSkeletalMeshAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UCustomizableObjectInstance_UpdateSkeletalMeshAsync_Statics::CustomizableObjectInstance_eventUpdateSkeletalMeshAsync_Parms), Z_Construct_UFunction_UCustomizableObjectInstance_UpdateSkeletalMeshAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_UpdateSkeletalMeshAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCustomizableObjectInstance_UpdateSkeletalMeshAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UCustomizableObjectInstance_UpdateSkeletalMeshAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCustomizableObjectInstance_UpdateSkeletalMeshAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCustomizableObjectInstance_UpdateSkeletalMeshAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCustomizableObjectInstance);
	UClass* Z_Construct_UClass_UCustomizableObjectInstance_NoRegister()
	{
		return UCustomizableObjectInstance::StaticClass();
	}
	struct Z_Construct_UClass_UCustomizableObjectInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeginUpdateDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BeginUpdateDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_UpdatedDelegate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeginDestroyDelegate_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_BeginDestroyDelegate;
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SkeletalMeshes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SkeletalMeshes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshStatus_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_SkeletalMeshStatus;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Descriptor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Descriptor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrivateData_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PrivateData;
#if WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_TextureParameterDeclarations_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureParameterDeclarations_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureParameterDeclarations;
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CustomizableObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CustomizableObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoolParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoolParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoolParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_IntParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_IntParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_FloatParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FloatParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_FloatParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_TextureParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextureParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_TextureParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VectorParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VectorParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VectorParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ProjectorParameters_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ProjectorParameters_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ProjectorParameters;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MultilayerProjectors_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_MultilayerProjectors_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MultilayerProjectors_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_MultilayerProjectors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBuildParameterDecorations_MetaData[];
#endif
		static void NewProp_bBuildParameterDecorations_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBuildParameterDecorations;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCustomizableObjectInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_CustomizableObject,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCustomizableObjectInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToFloatRange, "AddValueToFloatRange" }, // 3689831819
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToIntRange, "AddValueToIntRange" }, // 3066706596
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_AddValueToProjectorRange, "AddValueToProjectorRange" }, // 1832572257
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_Clone, "Clone" }, // 2576113826
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_CloneStatic, "CloneStatic" }, // 683378418
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_CreateMultiLayerProjector, "CreateMultiLayerProjector" }, // 3793973451
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_FindBoolParameterNameIndex, "FindBoolParameterNameIndex" }, // 1097884870
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_FindFloatParameterNameIndex, "FindFloatParameterNameIndex" }, // 4037888467
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_FindIntParameterNameIndex, "FindIntParameterNameIndex" }, // 2510170653
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_FindProjectorParameterNameIndex, "FindProjectorParameterNameIndex" }, // 4065625200
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_FindVectorParameterNameIndex, "FindVectorParameterNameIndex" }, // 1690618678
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_ForEachAnimInstance, "ForEachAnimInstance" }, // 2601334780
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimationGameplayTags, "GetAnimationGameplayTags" }, // 1977697097
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_GetAnimBP, "GetAnimBP" }, // 4084850331
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameters, "GetBoolParameters" }, // 1780244332
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_GetBoolParameterSelectedOption, "GetBoolParameterSelectedOption" }, // 475064993
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_GetBuildParameterDecorations, "GetBuildParameterDecorations" }, // 1797460039
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_GetColorParameterSelectedOption, "GetColorParameterSelectedOption" }, // 4103168985
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_GetCurrentState, "GetCurrentState" }, // 2152243292
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_GetCustomizableObject, "GetCustomizableObject" }, // 3580690460
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameters, "GetFloatParameters" }, // 3715454691
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_GetFloatParameterSelectedOption, "GetFloatParameterSelectedOption" }, // 2386854086
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameters, "GetIntParameters" }, // 917883434
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_GetIntParameterSelectedOption, "GetIntParameterSelectedOption" }, // 4071632083
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_GetParameterDescription, "GetParameterDescription" }, // 2740706887
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorAngle, "GetProjectorAngle" }, // 3068774212
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorDirection, "GetProjectorDirection" }, // 2201331418
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameters, "GetProjectorParameters" }, // 2524326191
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorParameterType, "GetProjectorParameterType" }, // 2530934554
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorPosition, "GetProjectorPosition" }, // 3819320949
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorScale, "GetProjectorScale" }, // 2151143323
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorUp, "GetProjectorUp" }, // 2658354948
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValue, "GetProjectorValue" }, // 1028393680
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_GetProjectorValueRange, "GetProjectorValueRange" }, // 446485809
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_GetSkeletalMesh, "GetSkeletalMesh" }, // 1283912560
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameters, "GetTextureParameters" }, // 3731601875
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_GetTextureParameterSelectedOptionT, "GetTextureParameterSelectedOptionT" }, // 1590153516
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_GetVectorParameters, "GetVectorParameters" }, // 559589244
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_HasAnyParameters, "HasAnyParameters" }, // 2392683799
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_HasAnySkeletalMesh, "HasAnySkeletalMesh" }, // 1888580012
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_IsParameterRelevant, "IsParameterRelevant" }, // 114019768
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_IsParamMultidimensional, "IsParamMultidimensional" }, // 1011944480
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateLayer, "MultilayerProjectorCreateLayer" }, // 760031255
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorCreateVirtualLayer, "MultilayerProjectorCreateVirtualLayer" }, // 3551718951
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorFindOrCreateVirtualLayer, "MultilayerProjectorFindOrCreateVirtualLayer" }, // 10623986
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetLayer, "MultilayerProjectorGetLayer" }, // 4158590242
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayer, "MultilayerProjectorGetVirtualLayer" }, // 2621396974
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorGetVirtualLayers, "MultilayerProjectorGetVirtualLayers" }, // 2718095064
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorNumLayers, "MultilayerProjectorNumLayers" }, // 2596525853
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveLayerAt, "MultilayerProjectorRemoveLayerAt" }, // 1665591304
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorRemoveVirtualLayer, "MultilayerProjectorRemoveVirtualLayer" }, // 4257810235
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateLayer, "MultilayerProjectorUpdateLayer" }, // 122774112
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_MultilayerProjectorUpdateVirtualLayer, "MultilayerProjectorUpdateVirtualLayer" }, // 2060450519
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_RemoveMultilayerProjector, "RemoveMultilayerProjector" }, // 2555027478
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromFloatRange, "RemoveValueFromFloatRange" }, // 779699142
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromIntRange, "RemoveValueFromIntRange" }, // 1910107452
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_RemoveValueFromProjectorRange, "RemoveValueFromProjectorRange" }, // 3792414688
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_SetBoolParameterSelectedOption, "SetBoolParameterSelectedOption" }, // 3204413545
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_SetBuildParameterDecorations, "SetBuildParameterDecorations" }, // 2363905595
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_SetColorParameterSelectedOption, "SetColorParameterSelectedOption" }, // 3144255333
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_SetCurrentState, "SetCurrentState" }, // 183005305
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_SetFloatParameterSelectedOption, "SetFloatParameterSelectedOption" }, // 265624543
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_SetIntParameterSelectedOption, "SetIntParameterSelectedOption" }, // 2322556833
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_SetObject, "SetObject" }, // 2700531094
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_SetProjectorValue, "SetProjectorValue" }, // 389708498
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_SetRandomValues, "SetRandomValues" }, // 3263663224
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_SetReplacePhysicsAssets, "SetReplacePhysicsAssets" }, // 166892634
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_SetTextureParameterSelectedOptionT, "SetTextureParameterSelectedOptionT" }, // 819350688
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_SetVectorParameterSelectedOption, "SetVectorParameterSelectedOption" }, // 2333912508
		{ &Z_Construct_UFunction_UCustomizableObjectInstance_UpdateSkeletalMeshAsync, "UpdateSkeletalMeshAsync" }, // 941177954
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "CustomizableObjectInstance" },
		{ "IncludePath", "MuCO/CustomizableObjectInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_BeginUpdateDelegate_MetaData[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "/** Broadcast at the beginning of an Instance update. */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Broadcast at the beginning of an Instance update." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_BeginUpdateDelegate = { "BeginUpdateDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectInstance, BeginUpdateDelegate), Z_Construct_UDelegateFunction_CustomizableObject_BeginUpdateDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_BeginUpdateDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_BeginUpdateDelegate_MetaData)) }; // 1366225552
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_UpdatedDelegate_MetaData[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "/** Broadcast when the Customizable Object Instance is updated. */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Broadcast when the Customizable Object Instance is updated." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_UpdatedDelegate = { "UpdatedDelegate", nullptr, (EPropertyFlags)0x0010000010082000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectInstance, UpdatedDelegate), Z_Construct_UDelegateFunction_CustomizableObject_ObjectInstanceUpdatedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_UpdatedDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_UpdatedDelegate_MetaData)) }; // 973264339
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_BeginDestroyDelegate_MetaData[] = {
		{ "Category", "CustomizableObjectInstance" },
		{ "Comment", "/** Broadcast when UObject::BeginDestroy is being called. */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Broadcast when UObject::BeginDestroy is being called." },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_BeginDestroyDelegate = { "BeginDestroyDelegate", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectInstance, BeginDestroyDelegate), Z_Construct_UDelegateFunction_CustomizableObject_BeginDestroyDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_BeginDestroyDelegate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_BeginDestroyDelegate_MetaData)) }; // 2053270612
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_SkeletalMeshes_Inner = { "SkeletalMeshes", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_SkeletalMeshes_MetaData[] = {
		{ "Category", "CustomizableSkeletalMesh" },
		{ "Comment", "/** The generated skeletal meshes for this Instance, one for each component */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "The generated skeletal meshes for this Instance, one for each component" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_SkeletalMeshes = { "SkeletalMeshes", nullptr, (EPropertyFlags)0x0014000000022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectInstance, SkeletalMeshes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_SkeletalMeshes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_SkeletalMeshes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_SkeletalMeshStatus_MetaData[] = {
		{ "Comment", "// Will store status description of current skeletal mesh generation (for instance, \"EmptyLOD0\" or \"EmptyMesh\"\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Will store status description of current skeletal mesh generation (for instance, \"EmptyLOD0\" or \"EmptyMesh\"" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_SkeletalMeshStatus = { "SkeletalMeshStatus", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectInstance, SkeletalMeshStatus), METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_SkeletalMeshStatus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_SkeletalMeshStatus_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_Descriptor_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_Descriptor = { "Descriptor", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectInstance, Descriptor), Z_Construct_UScriptStruct_FCustomizableObjectInstanceDescriptor, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_Descriptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_Descriptor_MetaData)) }; // 3072689739
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_PrivateData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_PrivateData = { "PrivateData", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectInstance, PrivateData), Z_Construct_UClass_UCustomizableInstancePrivateData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_PrivateData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_PrivateData_MetaData)) };
#if WITH_EDITORONLY_DATA
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_TextureParameterDeclarations_Inner = { "TextureParameterDeclarations", nullptr, (EPropertyFlags)0x0004000800000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_TextureParameterDeclarations_MetaData[] = {
		{ "Category", "TextureParameter" },
		{ "Comment", "/** Textures used in the Texture Parameters. */" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Textures used in the Texture Parameters." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_TextureParameterDeclarations = { "TextureParameterDeclarations", nullptr, (EPropertyFlags)0x0044000800000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectInstance, TextureParameterDeclarations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_TextureParameterDeclarations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_TextureParameterDeclarations_MetaData)) };
#endif // WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_CustomizableObject_MetaData[] = {
		{ "Comment", "// Deprecated properties\n" },
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
		{ "ToolTip", "Deprecated properties" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_CustomizableObject = { "CustomizableObject", nullptr, (EPropertyFlags)0x0044000020000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectInstance, CustomizableObject_DEPRECATED), Z_Construct_UClass_UCustomizableObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_CustomizableObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_CustomizableObject_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_BoolParameters_Inner = { "BoolParameters", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectBoolParameterValue, METADATA_PARAMS(nullptr, 0) }; // 709592541
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_BoolParameters_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_BoolParameters = { "BoolParameters", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectInstance, BoolParameters_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_BoolParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_BoolParameters_MetaData)) }; // 709592541
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_IntParameters_Inner = { "IntParameters", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectIntParameterValue, METADATA_PARAMS(nullptr, 0) }; // 3556153112
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_IntParameters_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_IntParameters = { "IntParameters", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectInstance, IntParameters_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_IntParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_IntParameters_MetaData)) }; // 3556153112
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_FloatParameters_Inner = { "FloatParameters", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectFloatParameterValue, METADATA_PARAMS(nullptr, 0) }; // 248359709
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_FloatParameters_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_FloatParameters = { "FloatParameters", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectInstance, FloatParameters_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_FloatParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_FloatParameters_MetaData)) }; // 248359709
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_TextureParameters_Inner = { "TextureParameters", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectTextureParameterValue, METADATA_PARAMS(nullptr, 0) }; // 1140826405
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_TextureParameters_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_TextureParameters = { "TextureParameters", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectInstance, TextureParameters_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_TextureParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_TextureParameters_MetaData)) }; // 1140826405
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_VectorParameters_Inner = { "VectorParameters", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectVectorParameterValue, METADATA_PARAMS(nullptr, 0) }; // 1245826816
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_VectorParameters_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_VectorParameters = { "VectorParameters", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectInstance, VectorParameters_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_VectorParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_VectorParameters_MetaData)) }; // 1245826816
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_ProjectorParameters_Inner = { "ProjectorParameters", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FCustomizableObjectProjectorParameterValue, METADATA_PARAMS(nullptr, 0) }; // 2841439205
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_ProjectorParameters_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_ProjectorParameters = { "ProjectorParameters", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectInstance, ProjectorParameters_DEPRECATED), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_ProjectorParameters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_ProjectorParameters_MetaData)) }; // 2841439205
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_MultilayerProjectors_ValueProp = { "MultilayerProjectors", nullptr, (EPropertyFlags)0x0000000020000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FMultilayerProjector, METADATA_PARAMS(nullptr, 0) }; // 3527378634
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_MultilayerProjectors_Key_KeyProp = { "MultilayerProjectors_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_MultilayerProjectors_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_MultilayerProjectors = { "MultilayerProjectors", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UCustomizableObjectInstance, MultilayerProjectors_DEPRECATED), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_MultilayerProjectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_MultilayerProjectors_MetaData)) }; // 3527378634
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_bBuildParameterDecorations_MetaData[] = {
		{ "ModuleRelativePath", "Classes/MuCO/CustomizableObjectInstance.h" },
	};
#endif
	void Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_bBuildParameterDecorations_SetBit(void* Obj)
	{
		((UCustomizableObjectInstance*)Obj)->bBuildParameterDecorations_DEPRECATED = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_bBuildParameterDecorations = { "bBuildParameterDecorations", nullptr, (EPropertyFlags)0x0040000020000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UCustomizableObjectInstance), &Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_bBuildParameterDecorations_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_bBuildParameterDecorations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_bBuildParameterDecorations_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCustomizableObjectInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_BeginUpdateDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_UpdatedDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_BeginDestroyDelegate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_SkeletalMeshes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_SkeletalMeshes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_SkeletalMeshStatus,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_Descriptor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_PrivateData,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_TextureParameterDeclarations_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_TextureParameterDeclarations,
#endif // WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_CustomizableObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_BoolParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_BoolParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_IntParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_IntParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_FloatParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_FloatParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_TextureParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_TextureParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_VectorParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_VectorParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_ProjectorParameters_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_ProjectorParameters,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_MultilayerProjectors_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_MultilayerProjectors_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_MultilayerProjectors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCustomizableObjectInstance_Statics::NewProp_bBuildParameterDecorations,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCustomizableObjectInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCustomizableObjectInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCustomizableObjectInstance_Statics::ClassParams = {
		&UCustomizableObjectInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UCustomizableObjectInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectInstance_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCustomizableObjectInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCustomizableObjectInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCustomizableObjectInstance()
	{
		if (!Z_Registration_Info_UClass_UCustomizableObjectInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCustomizableObjectInstance.OuterSingleton, Z_Construct_UClass_UCustomizableObjectInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCustomizableObjectInstance.OuterSingleton;
	}
	template<> CUSTOMIZABLEOBJECT_API UClass* StaticClass<UCustomizableObjectInstance>()
	{
		return UCustomizableObjectInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCustomizableObjectInstance);
	UCustomizableObjectInstance::~UCustomizableObjectInstance() {}
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UCustomizableObjectInstance)
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_Statics::ScriptStructInfo[] = {
		{ FCustomizedMaterialTexture2D::StaticStruct, Z_Construct_UScriptStruct_FCustomizedMaterialTexture2D_Statics::NewStructOps, TEXT("CustomizedMaterialTexture2D"), &Z_Registration_Info_UScriptStruct_CustomizedMaterialTexture2D, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCustomizedMaterialTexture2D), 2168727160U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCustomizableObjectInstance, UCustomizableObjectInstance::StaticClass, TEXT("UCustomizableObjectInstance"), &Z_Registration_Info_UClass_UCustomizableObjectInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCustomizableObjectInstance), 2750411030U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_3477479572(TEXT("/Script/CustomizableObject"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_Mutable_Source_CustomizableObject_Classes_MuCO_CustomizableObjectInstance_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
