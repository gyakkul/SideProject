// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/Viewport.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewport() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UMG_API UClass* Z_Construct_UClass_UViewport();
	UMG_API UClass* Z_Construct_UClass_UViewport_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(UViewport::execSpawn)
	{
		P_GET_OBJECT(UClass,Z_Param_ActorClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->Spawn(Z_Param_ActorClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewport::execSetViewRotation)
	{
		P_GET_STRUCT(FRotator,Z_Param_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetViewRotation(Z_Param_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewport::execGetViewRotation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FRotator*)Z_Param__Result=P_THIS->GetViewRotation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewport::execSetViewLocation)
	{
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetViewLocation(Z_Param_Location);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewport::execGetViewLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetViewLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UViewport::execGetViewportWorld)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UWorld**)Z_Param__Result=P_THIS->GetViewportWorld();
		P_NATIVE_END;
	}
	void UViewport::GetBackgroundColor_WrapperImpl(const void* Object, void* OutValue)
	{
		const UViewport* Obj = (const UViewport*)Object;
		FLinearColor& Result = *(FLinearColor*)OutValue;
		Result = (FLinearColor)Obj->GetBackgroundColor();
	}
	void UViewport::SetBackgroundColor_WrapperImpl(void* Object, const void* InValue)
	{
		UViewport* Obj = (UViewport*)Object;
		FLinearColor& Value = *(FLinearColor*)InValue;
		Obj->SetBackgroundColor(Value);
	}
	void UViewport::StaticRegisterNativesUViewport()
	{
		UClass* Class = UViewport::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetViewLocation", &UViewport::execGetViewLocation },
			{ "GetViewportWorld", &UViewport::execGetViewportWorld },
			{ "GetViewRotation", &UViewport::execGetViewRotation },
			{ "SetViewLocation", &UViewport::execSetViewLocation },
			{ "SetViewRotation", &UViewport::execSetViewRotation },
			{ "Spawn", &UViewport::execSpawn },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UViewport_GetViewLocation_Statics
	{
		struct Viewport_eventGetViewLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewport_GetViewLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Viewport_eventGetViewLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewport_GetViewLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewport_GetViewLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewport_GetViewLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Components/Viewport.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewport_GetViewLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewport, nullptr, "GetViewLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewport_GetViewLocation_Statics::Viewport_eventGetViewLocation_Parms), Z_Construct_UFunction_UViewport_GetViewLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_GetViewLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewport_GetViewLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_GetViewLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewport_GetViewLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewport_GetViewLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewport_GetViewportWorld_Statics
	{
		struct Viewport_eventGetViewportWorld_Parms
		{
			UWorld* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Viewport_eventGetViewportWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Public/Components/Viewport.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewport, nullptr, "GetViewportWorld", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::Viewport_eventGetViewportWorld_Parms), Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewport_GetViewportWorld()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewport_GetViewportWorld_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewport_GetViewRotation_Statics
	{
		struct Viewport_eventGetViewRotation_Parms
		{
			FRotator ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewport_GetViewRotation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Viewport_eventGetViewRotation_Parms, ReturnValue), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewport_GetViewRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewport_GetViewRotation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewport_GetViewRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Components/Viewport.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewport_GetViewRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewport, nullptr, "GetViewRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewport_GetViewRotation_Statics::Viewport_eventGetViewRotation_Parms), Z_Construct_UFunction_UViewport_GetViewRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_GetViewRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewport_GetViewRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_GetViewRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewport_GetViewRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewport_GetViewRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewport_SetViewLocation_Statics
	{
		struct Viewport_eventSetViewLocation_Parms
		{
			FVector Location;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewport_SetViewLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Viewport_eventSetViewLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewport_SetViewLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewport_SetViewLocation_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewport_SetViewLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Components/Viewport.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewport_SetViewLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewport, nullptr, "SetViewLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewport_SetViewLocation_Statics::Viewport_eventSetViewLocation_Parms), Z_Construct_UFunction_UViewport_SetViewLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_SetViewLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewport_SetViewLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_SetViewLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewport_SetViewLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewport_SetViewLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewport_SetViewRotation_Statics
	{
		struct Viewport_eventSetViewRotation_Parms
		{
			FRotator Rotation;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UViewport_SetViewRotation_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Viewport_eventSetViewRotation_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewport_SetViewRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewport_SetViewRotation_Statics::NewProp_Rotation,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewport_SetViewRotation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/Components/Viewport.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewport_SetViewRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewport, nullptr, "SetViewRotation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewport_SetViewRotation_Statics::Viewport_eventSetViewRotation_Parms), Z_Construct_UFunction_UViewport_SetViewRotation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_SetViewRotation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewport_SetViewRotation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_SetViewRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewport_SetViewRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewport_SetViewRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UViewport_Spawn_Statics
	{
		struct Viewport_eventSpawn_Parms
		{
			TSubclassOf<AActor>  ActorClass;
			AActor* ReturnValue;
		};
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UViewport_Spawn_Statics::NewProp_ActorClass = { "ActorClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Viewport_eventSpawn_Parms, ActorClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UViewport_Spawn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(Viewport_eventSpawn_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UViewport_Spawn_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewport_Spawn_Statics::NewProp_ActorClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UViewport_Spawn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UViewport_Spawn_Statics::Function_MetaDataParams[] = {
		{ "Category", "Viewport" },
		{ "ModuleRelativePath", "Public/Components/Viewport.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UViewport_Spawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UViewport, nullptr, "Spawn", nullptr, nullptr, sizeof(Z_Construct_UFunction_UViewport_Spawn_Statics::Viewport_eventSpawn_Parms), Z_Construct_UFunction_UViewport_Spawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_Spawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UViewport_Spawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UViewport_Spawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UViewport_Spawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UViewport_Spawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UViewport);
	UClass* Z_Construct_UClass_UViewport_NoRegister()
	{
		return UViewport::StaticClass();
	}
	struct Z_Construct_UClass_UViewport_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewport_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UViewport_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UViewport_GetViewLocation, "GetViewLocation" }, // 2984981127
		{ &Z_Construct_UFunction_UViewport_GetViewportWorld, "GetViewportWorld" }, // 930829590
		{ &Z_Construct_UFunction_UViewport_GetViewRotation, "GetViewRotation" }, // 309090403
		{ &Z_Construct_UFunction_UViewport_SetViewLocation, "SetViewLocation" }, // 1639756483
		{ &Z_Construct_UFunction_UViewport_SetViewRotation, "SetViewRotation" }, // 1392651267
		{ &Z_Construct_UFunction_UViewport_Spawn, "Spawn" }, // 4066231617
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewport_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "DevelopmentStatus", "Experimental" },
		{ "IncludePath", "Components/Viewport.h" },
		{ "ModuleRelativePath", "Public/Components/Viewport.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewport_Statics::NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Appearance" },
		{ "ModuleRelativePath", "Public/Components/Viewport.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UViewport_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, &UViewport::SetBackgroundColor_WrapperImpl, &UViewport::GetBackgroundColor_WrapperImpl, STRUCT_OFFSET(UViewport, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UViewport_Statics::NewProp_BackgroundColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UViewport_Statics::NewProp_BackgroundColor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UViewport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UViewport_Statics::NewProp_BackgroundColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewport_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UViewport>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UViewport_Statics::ClassParams = {
		&UViewport::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UViewport_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UViewport_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UViewport_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UViewport_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UViewport()
	{
		if (!Z_Registration_Info_UClass_UViewport.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UViewport.OuterSingleton, Z_Construct_UClass_UViewport_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UViewport.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<UViewport>()
	{
		return UViewport::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewport);
	UViewport::~UViewport() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UViewport, UViewport::StaticClass, TEXT("UViewport"), &Z_Registration_Info_UClass_UViewport, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UViewport), 2096501125U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_2944643987(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_Viewport_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
