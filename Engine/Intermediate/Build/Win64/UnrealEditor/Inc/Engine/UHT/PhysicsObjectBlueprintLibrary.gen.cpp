// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/PhysicsEngine/PhysicsObjectBlueprintLibrary.h"
#include "Chaos/PhysicsObjectInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhysicsObjectBlueprintLibrary() {}
// Cross Module References
	CHAOS_API UScriptStruct* Z_Construct_UScriptStruct_FClosestPhysicsObjectResult();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsObjectBlueprintLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	DEFINE_FUNCTION(UPhysicsObjectBlueprintLibrary::execGetPhysicsObjectWorldTransform)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
		P_GET_PROPERTY(FNameProperty,Z_Param_BoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTransform*)Z_Param__Result=UPhysicsObjectBlueprintLibrary::GetPhysicsObjectWorldTransform(Z_Param_Component,Z_Param_BoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsObjectBlueprintLibrary::execExtractClosestPhysicsObjectResults)
	{
		P_GET_STRUCT_REF(FClosestPhysicsObjectResult,Z_Param_Out_Result);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_OutName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UPhysicsObjectBlueprintLibrary::ExtractClosestPhysicsObjectResults(Z_Param_Out_Result,Z_Param_Out_OutName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPhysicsObjectBlueprintLibrary::execGetClosestPhysicsObjectFromWorldLocation)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FClosestPhysicsObjectResult*)Z_Param__Result=UPhysicsObjectBlueprintLibrary::GetClosestPhysicsObjectFromWorldLocation(Z_Param_Component,Z_Param_Out_WorldLocation);
		P_NATIVE_END;
	}
	void UPhysicsObjectBlueprintLibrary::StaticRegisterNativesUPhysicsObjectBlueprintLibrary()
	{
		UClass* Class = UPhysicsObjectBlueprintLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ExtractClosestPhysicsObjectResults", &UPhysicsObjectBlueprintLibrary::execExtractClosestPhysicsObjectResults },
			{ "GetClosestPhysicsObjectFromWorldLocation", &UPhysicsObjectBlueprintLibrary::execGetClosestPhysicsObjectFromWorldLocation },
			{ "GetPhysicsObjectWorldTransform", &UPhysicsObjectBlueprintLibrary::execGetPhysicsObjectWorldTransform },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics
	{
		struct PhysicsObjectBlueprintLibrary_eventExtractClosestPhysicsObjectResults_Parms
		{
			FClosestPhysicsObjectResult Result;
			FName OutName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Result;
		static const UECodeGen_Private::FNamePropertyParams NewProp_OutName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsObjectBlueprintLibrary_eventExtractClosestPhysicsObjectResults_Parms, Result), Z_Construct_UScriptStruct_FClosestPhysicsObjectResult, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::NewProp_Result_MetaData)) }; // 1923849362
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::NewProp_OutName = { "OutName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsObjectBlueprintLibrary_eventExtractClosestPhysicsObjectResults_Parms, OutName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((PhysicsObjectBlueprintLibrary_eventExtractClosestPhysicsObjectResults_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(PhysicsObjectBlueprintLibrary_eventExtractClosestPhysicsObjectResults_Parms), &Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::NewProp_OutName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics Object" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsObjectBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsObjectBlueprintLibrary, nullptr, "ExtractClosestPhysicsObjectResults", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::PhysicsObjectBlueprintLibrary_eventExtractClosestPhysicsObjectResults_Parms), Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics
	{
		struct PhysicsObjectBlueprintLibrary_eventGetClosestPhysicsObjectFromWorldLocation_Parms
		{
			UPrimitiveComponent* Component;
			FVector WorldLocation;
			FClosestPhysicsObjectResult ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsObjectBlueprintLibrary_eventGetClosestPhysicsObjectFromWorldLocation_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::NewProp_Component_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsObjectBlueprintLibrary_eventGetClosestPhysicsObjectFromWorldLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::NewProp_WorldLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::NewProp_WorldLocation_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsObjectBlueprintLibrary_eventGetClosestPhysicsObjectFromWorldLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FClosestPhysicsObjectResult, METADATA_PARAMS(nullptr, 0) }; // 1923849362
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::NewProp_WorldLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics Object" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsObjectBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsObjectBlueprintLibrary, nullptr, "GetClosestPhysicsObjectFromWorldLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::PhysicsObjectBlueprintLibrary_eventGetClosestPhysicsObjectFromWorldLocation_Parms), Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics
	{
		struct PhysicsObjectBlueprintLibrary_eventGetPhysicsObjectWorldTransform_Parms
		{
			UPrimitiveComponent* Component;
			FName BoneName;
			FTransform ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsObjectBlueprintLibrary_eventGetPhysicsObjectWorldTransform_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::NewProp_Component_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsObjectBlueprintLibrary_eventGetPhysicsObjectWorldTransform_Parms, BoneName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(PhysicsObjectBlueprintLibrary_eventGetPhysicsObjectWorldTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::NewProp_Component,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::NewProp_BoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "Physics Object" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsObjectBlueprintLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPhysicsObjectBlueprintLibrary, nullptr, "GetPhysicsObjectWorldTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::PhysicsObjectBlueprintLibrary_eventGetPhysicsObjectWorldTransform_Parms), Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPhysicsObjectBlueprintLibrary);
	UClass* Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_NoRegister()
	{
		return UPhysicsObjectBlueprintLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_ExtractClosestPhysicsObjectResults, "ExtractClosestPhysicsObjectResults" }, // 1411110153
		{ &Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetClosestPhysicsObjectFromWorldLocation, "GetClosestPhysicsObjectFromWorldLocation" }, // 2865912623
		{ &Z_Construct_UFunction_UPhysicsObjectBlueprintLibrary_GetPhysicsObjectWorldTransform, "GetPhysicsObjectWorldTransform" }, // 902659947
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PhysicsEngine/PhysicsObjectBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Classes/PhysicsEngine/PhysicsObjectBlueprintLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPhysicsObjectBlueprintLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_Statics::ClassParams = {
		&UPhysicsObjectBlueprintLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPhysicsObjectBlueprintLibrary()
	{
		if (!Z_Registration_Info_UClass_UPhysicsObjectBlueprintLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPhysicsObjectBlueprintLibrary.OuterSingleton, Z_Construct_UClass_UPhysicsObjectBlueprintLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPhysicsObjectBlueprintLibrary.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UPhysicsObjectBlueprintLibrary>()
	{
		return UPhysicsObjectBlueprintLibrary::StaticClass();
	}
	UPhysicsObjectBlueprintLibrary::UPhysicsObjectBlueprintLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPhysicsObjectBlueprintLibrary);
	UPhysicsObjectBlueprintLibrary::~UPhysicsObjectBlueprintLibrary() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPhysicsObjectBlueprintLibrary, UPhysicsObjectBlueprintLibrary::StaticClass, TEXT("UPhysicsObjectBlueprintLibrary"), &Z_Registration_Info_UClass_UPhysicsObjectBlueprintLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPhysicsObjectBlueprintLibrary), 4038873319U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_2489459371(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_PhysicsEngine_PhysicsObjectBlueprintLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
