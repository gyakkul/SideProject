// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTargetingSystem/Tasks/TargetingSelectionTask_AOE.h"
#include "../../Source/Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "GameplayTargetingSystem/Types/TargetingSystemTypes.h"
#include "ScalableFloat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetingSelectionTask_AOE() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EObjectTypeQuery();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FCollisionProfileName();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FScalableFloat();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingSelectionTask_AOE();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingSelectionTask_AOE_NoRegister();
	TARGETINGSYSTEM_API UClass* Z_Construct_UClass_UTargetingTask();
	TARGETINGSYSTEM_API UEnum* Z_Construct_UEnum_TargetingSystem_ETargetingAOEShape();
	TARGETINGSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTargetingRequestHandle();
	UPackage* Z_Construct_UPackage__Script_TargetingSystem();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETargetingAOEShape;
	static UEnum* ETargetingAOEShape_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_ETargetingAOEShape.OuterSingleton)
		{
			Z_Registration_Info_UEnum_ETargetingAOEShape.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TargetingSystem_ETargetingAOEShape, (UObject*)Z_Construct_UPackage__Script_TargetingSystem(), TEXT("ETargetingAOEShape"));
		}
		return Z_Registration_Info_UEnum_ETargetingAOEShape.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UEnum* StaticEnum<ETargetingAOEShape>()
	{
		return ETargetingAOEShape_StaticEnum();
	}
	struct Z_Construct_UEnum_TargetingSystem_ETargetingAOEShape_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_TargetingSystem_ETargetingAOEShape_Statics::Enumerators[] = {
		{ "ETargetingAOEShape::Box", (int64)ETargetingAOEShape::Box },
		{ "ETargetingAOEShape::Cylinder", (int64)ETargetingAOEShape::Cylinder },
		{ "ETargetingAOEShape::Sphere", (int64)ETargetingAOEShape::Sphere },
		{ "ETargetingAOEShape::Capsule", (int64)ETargetingAOEShape::Capsule },
		{ "ETargetingAOEShape::SourceComponent", (int64)ETargetingAOEShape::SourceComponent },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_TargetingSystem_ETargetingAOEShape_Statics::Enum_MetaDataParams[] = {
		{ "Box.Name", "ETargetingAOEShape::Box" },
		{ "Capsule.Name", "ETargetingAOEShape::Capsule" },
		{ "Comment", "/**\n*\x09@enum ETargetingAOEShape\x09\n*/" },
		{ "Cylinder.Name", "ETargetingAOEShape::Cylinder" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_AOE.h" },
		{ "SourceComponent.Name", "ETargetingAOEShape::SourceComponent" },
		{ "Sphere.Name", "ETargetingAOEShape::Sphere" },
		{ "ToolTip", "@enum ETargetingAOEShape" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TargetingSystem_ETargetingAOEShape_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_TargetingSystem,
		nullptr,
		"ETargetingAOEShape",
		"ETargetingAOEShape",
		Z_Construct_UEnum_TargetingSystem_ETargetingAOEShape_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_TargetingSystem_ETargetingAOEShape_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_TargetingSystem_ETargetingAOEShape_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_TargetingSystem_ETargetingAOEShape_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_TargetingSystem_ETargetingAOEShape()
	{
		if (!Z_Registration_Info_UEnum_ETargetingAOEShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETargetingAOEShape.InnerSingleton, Z_Construct_UEnum_TargetingSystem_ETargetingAOEShape_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_ETargetingAOEShape.InnerSingleton;
	}
	DEFINE_FUNCTION(UTargetingSelectionTask_AOE::execGetSourceOffset)
	{
		P_GET_STRUCT_REF(FTargetingRequestHandle,Z_Param_Out_TargetingHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSourceOffset_Implementation(Z_Param_Out_TargetingHandle);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTargetingSelectionTask_AOE::execGetSourceLocation)
	{
		P_GET_STRUCT_REF(FTargetingRequestHandle,Z_Param_Out_TargetingHandle);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetSourceLocation_Implementation(Z_Param_Out_TargetingHandle);
		P_NATIVE_END;
	}
	struct TargetingSelectionTask_AOE_eventGetSourceLocation_Parms
	{
		FTargetingRequestHandle TargetingHandle;
		FVector ReturnValue;

		/** Constructor, initializes return property only **/
		TargetingSelectionTask_AOE_eventGetSourceLocation_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	struct TargetingSelectionTask_AOE_eventGetSourceOffset_Parms
	{
		FTargetingRequestHandle TargetingHandle;
		FVector ReturnValue;

		/** Constructor, initializes return property only **/
		TargetingSelectionTask_AOE_eventGetSourceOffset_Parms()
			: ReturnValue(ForceInit)
		{
		}
	};
	static FName NAME_UTargetingSelectionTask_AOE_GetSourceLocation = FName(TEXT("GetSourceLocation"));
	FVector UTargetingSelectionTask_AOE::GetSourceLocation(FTargetingRequestHandle const& TargetingHandle) const
	{
		TargetingSelectionTask_AOE_eventGetSourceLocation_Parms Parms;
		Parms.TargetingHandle=TargetingHandle;
		const_cast<UTargetingSelectionTask_AOE*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTargetingSelectionTask_AOE_GetSourceLocation),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UTargetingSelectionTask_AOE_GetSourceOffset = FName(TEXT("GetSourceOffset"));
	FVector UTargetingSelectionTask_AOE::GetSourceOffset(FTargetingRequestHandle const& TargetingHandle) const
	{
		TargetingSelectionTask_AOE_eventGetSourceOffset_Parms Parms;
		Parms.TargetingHandle=TargetingHandle;
		const_cast<UTargetingSelectionTask_AOE*>(this)->ProcessEvent(FindFunctionChecked(NAME_UTargetingSelectionTask_AOE_GetSourceOffset),&Parms);
		return Parms.ReturnValue;
	}
	void UTargetingSelectionTask_AOE::StaticRegisterNativesUTargetingSelectionTask_AOE()
	{
		UClass* Class = UTargetingSelectionTask_AOE::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSourceLocation", &UTargetingSelectionTask_AOE::execGetSourceLocation },
			{ "GetSourceOffset", &UTargetingSelectionTask_AOE::execGetSourceOffset },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceLocation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetingHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceLocation_Statics::NewProp_TargetingHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceLocation_Statics::NewProp_TargetingHandle = { "TargetingHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSelectionTask_AOE_eventGetSourceLocation_Parms, TargetingHandle), Z_Construct_UScriptStruct_FTargetingRequestHandle, METADATA_PARAMS(Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceLocation_Statics::NewProp_TargetingHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceLocation_Statics::NewProp_TargetingHandle_MetaData)) }; // 951213696
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSelectionTask_AOE_eventGetSourceLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceLocation_Statics::NewProp_TargetingHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target AOE Selection" },
		{ "Comment", "/** Native Event to get the source location for the AOE */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_AOE.h" },
		{ "ToolTip", "Native Event to get the source location for the AOE" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetingSelectionTask_AOE, nullptr, "GetSourceLocation", nullptr, nullptr, sizeof(TargetingSelectionTask_AOE_eventGetSourceLocation_Parms), Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C80C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceOffset_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetingHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetingHandle;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceOffset_Statics::NewProp_TargetingHandle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceOffset_Statics::NewProp_TargetingHandle = { "TargetingHandle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSelectionTask_AOE_eventGetSourceOffset_Parms, TargetingHandle), Z_Construct_UScriptStruct_FTargetingRequestHandle, METADATA_PARAMS(Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceOffset_Statics::NewProp_TargetingHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceOffset_Statics::NewProp_TargetingHandle_MetaData)) }; // 951213696
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceOffset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(TargetingSelectionTask_AOE_eventGetSourceOffset_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceOffset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceOffset_Statics::NewProp_TargetingHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceOffset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceOffset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Target AOE Selection" },
		{ "Comment", "/** Native Event to get a source location offset for the AOE */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_AOE.h" },
		{ "ToolTip", "Native Event to get a source location offset for the AOE" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceOffset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTargetingSelectionTask_AOE, nullptr, "GetSourceOffset", nullptr, nullptr, sizeof(TargetingSelectionTask_AOE_eventGetSourceOffset_Parms), Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceOffset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceOffset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48C80C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceOffset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceOffset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceOffset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceOffset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTargetingSelectionTask_AOE);
	UClass* Z_Construct_UClass_UTargetingSelectionTask_AOE_NoRegister()
	{
		return UTargetingSelectionTask_AOE::StaticClass();
	}
	struct Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShapeType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ShapeType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ShapeType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionChannel_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionChannel;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionProfileName_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CollisionProfileName;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CollisionObjectTypes_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionObjectTypes_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CollisionObjectTypes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSourceOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSourceOffset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreSourceActor_MetaData[];
#endif
		static void NewProp_bIgnoreSourceActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreSourceActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreInstigatorActor_MetaData[];
#endif
		static void NewProp_bIgnoreInstigatorActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreInstigatorActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HalfExtent_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HalfExtent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HalfHeight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HalfHeight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentTag_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_ComponentTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTargetingTask,
		(UObject* (*)())Z_Construct_UPackage__Script_TargetingSystem,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceLocation, "GetSourceLocation" }, // 3041050564
		{ &Z_Construct_UFunction_UTargetingSelectionTask_AOE_GetSourceOffset, "GetSourceOffset" }, // 580109373
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09@class UTargetingSelectionTask_AOE\n*\n*\x09""Basic AOE based selection task. There are 4 shape types to choose from + a custom option.\n*\n*\x09""Box - Defined by a given half extent\n*\x09""Cylinder - Defined by the half extent (box) + radius\n*\x09Sphere\x09- Defined by a given radius\n*\x09""Capsule\x09- Defined by the radius + half height\n* \n*\x09SourceComponent - Use a collision component with a specific component tag as the shape\n*/" },
		{ "IncludePath", "Tasks/TargetingSelectionTask_AOE.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_AOE.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "@class UTargetingSelectionTask_AOE\n\nBasic AOE based selection task. There are 4 shape types to choose from + a custom option.\n\nBox - Defined by a given half extent\nCylinder - Defined by the half extent (box) + radius\nSphere  - Defined by a given radius\nCapsule - Defined by the radius + half height\n\nSourceComponent - Use a collision component with a specific component tag as the shape" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_ShapeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_ShapeType_MetaData[] = {
		{ "Category", "Target AOE Selection | Data" },
		{ "Comment", "/** The shape type to use for the AOE */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_AOE.h" },
		{ "ToolTip", "The shape type to use for the AOE" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_ShapeType = { "ShapeType", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetingSelectionTask_AOE, ShapeType), Z_Construct_UEnum_TargetingSystem_ETargetingAOEShape, METADATA_PARAMS(Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_ShapeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_ShapeType_MetaData)) }; // 1661170803
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_CollisionChannel_MetaData[] = {
		{ "Category", "Target AOE Selection | Data" },
		{ "Comment", "/** The collision channel to use for the overlap check (as long as Collision Profile Name is not set) */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_AOE.h" },
		{ "ToolTip", "The collision channel to use for the overlap check (as long as Collision Profile Name is not set)" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_CollisionChannel = { "CollisionChannel", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetingSelectionTask_AOE, CollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_CollisionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_CollisionChannel_MetaData)) }; // 727872708
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_CollisionProfileName_MetaData[] = {
		{ "Category", "Target AOE Selection | Data" },
		{ "Comment", "/** The collision profile name to use for the overlap check */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_AOE.h" },
		{ "ToolTip", "The collision profile name to use for the overlap check" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_CollisionProfileName = { "CollisionProfileName", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetingSelectionTask_AOE, CollisionProfileName), Z_Construct_UScriptStruct_FCollisionProfileName, METADATA_PARAMS(Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_CollisionProfileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_CollisionProfileName_MetaData)) }; // 2816100078
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_CollisionObjectTypes_Inner = { "CollisionObjectTypes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UEnum_Engine_EObjectTypeQuery, METADATA_PARAMS(nullptr, 0) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_CollisionObjectTypes_MetaData[] = {
		{ "Category", "Target AOE Selection | Data" },
		{ "Comment", "/** The collision profile name to use for the overlap check */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_AOE.h" },
		{ "ToolTip", "The collision profile name to use for the overlap check" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_CollisionObjectTypes = { "CollisionObjectTypes", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetingSelectionTask_AOE, CollisionObjectTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_CollisionObjectTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_CollisionObjectTypes_MetaData)) }; // 3629342158
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_DefaultSourceOffset_MetaData[] = {
		{ "Category", "Target AOE Selection | Data" },
		{ "Comment", "/** The default source location offset used by GetSourceOffset */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_AOE.h" },
		{ "ToolTip", "The default source location offset used by GetSourceOffset" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_DefaultSourceOffset = { "DefaultSourceOffset", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetingSelectionTask_AOE, DefaultSourceOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_DefaultSourceOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_DefaultSourceOffset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_bIgnoreSourceActor_MetaData[] = {
		{ "Category", "Target AOE Selection | Data" },
		{ "Comment", "/** Indicates the trace should ignore the source actor */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_AOE.h" },
		{ "ToolTip", "Indicates the trace should ignore the source actor" },
	};
#endif
	void Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_bIgnoreSourceActor_SetBit(void* Obj)
	{
		((UTargetingSelectionTask_AOE*)Obj)->bIgnoreSourceActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_bIgnoreSourceActor = { "bIgnoreSourceActor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTargetingSelectionTask_AOE), &Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_bIgnoreSourceActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_bIgnoreSourceActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_bIgnoreSourceActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_bIgnoreInstigatorActor_MetaData[] = {
		{ "Category", "Target AOE Selection | Data" },
		{ "Comment", "/** Indicates the trace should ignore the source actor */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_AOE.h" },
		{ "ToolTip", "Indicates the trace should ignore the source actor" },
	};
#endif
	void Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_bIgnoreInstigatorActor_SetBit(void* Obj)
	{
		((UTargetingSelectionTask_AOE*)Obj)->bIgnoreInstigatorActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_bIgnoreInstigatorActor = { "bIgnoreInstigatorActor", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UTargetingSelectionTask_AOE), &Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_bIgnoreInstigatorActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_bIgnoreInstigatorActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_bIgnoreInstigatorActor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_HalfExtent_MetaData[] = {
		{ "Category", "Target AOE Selection | Box and Cylinder" },
		{ "Comment", "/** The half extent to use for box and cylinder */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_AOE.h" },
		{ "ToolTip", "The half extent to use for box and cylinder" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_HalfExtent = { "HalfExtent", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetingSelectionTask_AOE, HalfExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_HalfExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_HalfExtent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "Target AOE Selection | Sphere and Capsule" },
		{ "Comment", "/** The radius to use for sphere and capsule overlaps */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_AOE.h" },
		{ "ToolTip", "The radius to use for sphere and capsule overlaps" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetingSelectionTask_AOE, Radius), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_Radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_Radius_MetaData)) }; // 1811381276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_HalfHeight_MetaData[] = {
		{ "Category", "Target AOE Selection | Capsule" },
		{ "Comment", "/** The half height to use for capsule overlap checks */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_AOE.h" },
		{ "ToolTip", "The half height to use for capsule overlap checks" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_HalfHeight = { "HalfHeight", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetingSelectionTask_AOE, HalfHeight), Z_Construct_UScriptStruct_FScalableFloat, METADATA_PARAMS(Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_HalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_HalfHeight_MetaData)) }; // 1811381276
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_ComponentTag_MetaData[] = {
		{ "Category", "Target AOE Selection | Custom Component" },
		{ "Comment", "/** The component tag to use if a custom component is desired as the overlap shape. \n\x09\x09Use to look up the component on the source actor */" },
		{ "ModuleRelativePath", "Tasks/TargetingSelectionTask_AOE.h" },
		{ "ToolTip", "The component tag to use if a custom component is desired as the overlap shape.\n              Use to look up the component on the source actor" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_ComponentTag = { "ComponentTag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UTargetingSelectionTask_AOE, ComponentTag), METADATA_PARAMS(Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_ComponentTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_ComponentTag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_ShapeType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_ShapeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_CollisionChannel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_CollisionProfileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_CollisionObjectTypes_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_CollisionObjectTypes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_DefaultSourceOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_bIgnoreSourceActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_bIgnoreInstigatorActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_HalfExtent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_HalfHeight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::NewProp_ComponentTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetingSelectionTask_AOE>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::ClassParams = {
		&UTargetingSelectionTask_AOE::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTargetingSelectionTask_AOE()
	{
		if (!Z_Registration_Info_UClass_UTargetingSelectionTask_AOE.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTargetingSelectionTask_AOE.OuterSingleton, Z_Construct_UClass_UTargetingSelectionTask_AOE_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UTargetingSelectionTask_AOE.OuterSingleton;
	}
	template<> TARGETINGSYSTEM_API UClass* StaticClass<UTargetingSelectionTask_AOE>()
	{
		return UTargetingSelectionTask_AOE::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetingSelectionTask_AOE);
	UTargetingSelectionTask_AOE::~UTargetingSelectionTask_AOE() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_AOE_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_AOE_h_Statics::EnumInfo[] = {
		{ ETargetingAOEShape_StaticEnum, TEXT("ETargetingAOEShape"), &Z_Registration_Info_UEnum_ETargetingAOEShape, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1661170803U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_AOE_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UTargetingSelectionTask_AOE, UTargetingSelectionTask_AOE::StaticClass, TEXT("UTargetingSelectionTask_AOE"), &Z_Registration_Info_UClass_UTargetingSelectionTask_AOE, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTargetingSelectionTask_AOE), 864984374U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_AOE_h_1012527937(TEXT("/Script/TargetingSystem"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_AOE_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_AOE_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_AOE_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_GameplayTargetingSystem_Source_GameplayTargetingSystem_Tasks_TargetingSelectionTask_AOE_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
