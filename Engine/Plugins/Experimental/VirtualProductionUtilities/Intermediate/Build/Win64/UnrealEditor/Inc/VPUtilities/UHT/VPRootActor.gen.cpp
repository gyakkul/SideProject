// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VPRootActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVPRootActor() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
	ENGINE_API UClass* Z_Construct_UClass_UBillboardComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VPUtilities();
	VPUTILITIES_API UClass* Z_Construct_UClass_AVPRootActor();
	VPUTILITIES_API UClass* Z_Construct_UClass_AVPRootActor_NoRegister();
	VPUTILITIES_API UClass* Z_Construct_UClass_UVPWorldAssetUserData();
	VPUTILITIES_API UClass* Z_Construct_UClass_UVPWorldAssetUserData_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVPRootActor::execGetCineCameraActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ACineCameraActor**)Z_Param__Result=P_THIS->GetCineCameraActor_Implementation();
		P_NATIVE_END;
	}
#if WITH_EDITOR
	DEFINE_FUNCTION(AVPRootActor::execMoveLevelToRootActor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MoveLevelToRootActor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AVPRootActor::execToggleComponentsVisibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToggleComponentsVisibility();
		P_NATIVE_END;
	}
#endif //WITH_EDITOR
	struct VPRootActor_eventGetCineCameraActor_Parms
	{
		ACineCameraActor* ReturnValue;

		/** Constructor, initializes return property only **/
		VPRootActor_eventGetCineCameraActor_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	static FName NAME_AVPRootActor_GetCineCameraActor = FName(TEXT("GetCineCameraActor"));
	ACineCameraActor* AVPRootActor::GetCineCameraActor() const
	{
		VPRootActor_eventGetCineCameraActor_Parms Parms;
		const_cast<AVPRootActor*>(this)->ProcessEvent(FindFunctionChecked(NAME_AVPRootActor_GetCineCameraActor),&Parms);
		return Parms.ReturnValue;
	}
	void AVPRootActor::StaticRegisterNativesAVPRootActor()
	{
		UClass* Class = AVPRootActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCineCameraActor", &AVPRootActor::execGetCineCameraActor },
#if WITH_EDITOR
			{ "MoveLevelToRootActor", &AVPRootActor::execMoveLevelToRootActor },
			{ "ToggleComponentsVisibility", &AVPRootActor::execToggleComponentsVisibility },
#endif // WITH_EDITOR
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVPRootActor_GetCineCameraActor_Statics
	{
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVPRootActor_GetCineCameraActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VPRootActor_eventGetCineCameraActor_Parms, ReturnValue), Z_Construct_UClass_ACineCameraActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVPRootActor_GetCineCameraActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVPRootActor_GetCineCameraActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVPRootActor_GetCineCameraActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Get the current camera used by the virtual production. */" },
		{ "ModuleRelativePath", "Public/VPRootActor.h" },
		{ "ToolTip", "Get the current camera used by the virtual production." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVPRootActor_GetCineCameraActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVPRootActor, nullptr, "GetCineCameraActor", nullptr, nullptr, sizeof(VPRootActor_eventGetCineCameraActor_Parms), Z_Construct_UFunction_AVPRootActor_GetCineCameraActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVPRootActor_GetCineCameraActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVPRootActor_GetCineCameraActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVPRootActor_GetCineCameraActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVPRootActor_GetCineCameraActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVPRootActor_GetCineCameraActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#if WITH_EDITOR
	struct Z_Construct_UFunction_AVPRootActor_MoveLevelToRootActor_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVPRootActor_MoveLevelToRootActor_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VPRootActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVPRootActor_MoveLevelToRootActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVPRootActor, nullptr, "MoveLevelToRootActor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVPRootActor_MoveLevelToRootActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVPRootActor_MoveLevelToRootActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVPRootActor_MoveLevelToRootActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVPRootActor_MoveLevelToRootActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
#if WITH_EDITOR
	struct Z_Construct_UFunction_AVPRootActor_ToggleComponentsVisibility_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVPRootActor_ToggleComponentsVisibility_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VPRootActor.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVPRootActor_ToggleComponentsVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVPRootActor, nullptr, "ToggleComponentsVisibility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVPRootActor_ToggleComponentsVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVPRootActor_ToggleComponentsVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVPRootActor_ToggleComponentsVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVPRootActor_ToggleComponentsVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
#endif //WITH_EDITOR
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVPRootActor);
	UClass* Z_Construct_UClass_AVPRootActor_NoRegister()
	{
		return AVPRootActor::StaticClass();
	}
	struct Z_Construct_UClass_AVPRootActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RealWorldSceneRepresentation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RealWorldSceneRepresentation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CinematicCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CinematicCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAreComponentsVisible_MetaData[];
#endif
		static void NewProp_bAreComponentsVisible_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAreComponentsVisible;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SpriteComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_SpriteComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ArrowComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_ArrowComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMoveLevelWithActor_MetaData[];
#endif
		static void NewProp_bMoveLevelWithActor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMoveLevelWithActor;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVPRootActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilities,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVPRootActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVPRootActor_GetCineCameraActor, "GetCineCameraActor" }, // 2996704645
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AVPRootActor_MoveLevelToRootActor, "MoveLevelToRootActor" }, // 3361516120
#endif //WITH_EDITOR
#if WITH_EDITOR
		{ &Z_Construct_UFunction_AVPRootActor_ToggleComponentsVisibility, "ToggleComponentsVisibility" }, // 1358839538
#endif //WITH_EDITOR
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPRootActor_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * AVPRootActor\n */" },
		{ "DisplayName", "VP Root Actor" },
		{ "HideCategories", "Actor Collision Input HLOD Replication" },
		{ "IncludePath", "VPRootActor.h" },
		{ "ModuleRelativePath", "Public/VPRootActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "AVPRootActor" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPRootActor_Statics::NewProp_RealWorldSceneRepresentation_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Actor used to show the size of the scene. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VPRootActor.h" },
		{ "ToolTip", "Actor used to show the size of the scene." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVPRootActor_Statics::NewProp_RealWorldSceneRepresentation = { "RealWorldSceneRepresentation", nullptr, (EPropertyFlags)0x0014000000090009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVPRootActor, RealWorldSceneRepresentation), Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVPRootActor_Statics::NewProp_RealWorldSceneRepresentation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVPRootActor_Statics::NewProp_RealWorldSceneRepresentation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPRootActor_Statics::NewProp_CinematicCamera_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "Comment", "/** Actor used to show the size of the scene. */" },
		{ "ModuleRelativePath", "Public/VPRootActor.h" },
		{ "ToolTip", "Actor used to show the size of the scene." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVPRootActor_Statics::NewProp_CinematicCamera = { "CinematicCamera", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVPRootActor, CinematicCamera), Z_Construct_UClass_ACineCameraActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVPRootActor_Statics::NewProp_CinematicCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVPRootActor_Statics::NewProp_CinematicCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPRootActor_Statics::NewProp_bAreComponentsVisible_MetaData[] = {
		{ "ModuleRelativePath", "Public/VPRootActor.h" },
	};
#endif
	void Z_Construct_UClass_AVPRootActor_Statics::NewProp_bAreComponentsVisible_SetBit(void* Obj)
	{
		((AVPRootActor*)Obj)->bAreComponentsVisible = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVPRootActor_Statics::NewProp_bAreComponentsVisible = { "bAreComponentsVisible", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AVPRootActor), &Z_Construct_UClass_AVPRootActor_Statics::NewProp_bAreComponentsVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVPRootActor_Statics::NewProp_bAreComponentsVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVPRootActor_Statics::NewProp_bAreComponentsVisible_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPRootActor_Statics::NewProp_SpriteComponent_MetaData[] = {
		{ "Comment", "/** Billboard used to see the scene in the editor */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VPRootActor.h" },
		{ "ToolTip", "Billboard used to see the scene in the editor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVPRootActor_Statics::NewProp_SpriteComponent = { "SpriteComponent", nullptr, (EPropertyFlags)0x0024080800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVPRootActor, SpriteComponent), Z_Construct_UClass_UBillboardComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVPRootActor_Statics::NewProp_SpriteComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVPRootActor_Statics::NewProp_SpriteComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPRootActor_Statics::NewProp_ArrowComponent_MetaData[] = {
		{ "Comment", "/** Arrow used to see the orientation of the scene in the editor */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VPRootActor.h" },
		{ "ToolTip", "Arrow used to see the orientation of the scene in the editor" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_AVPRootActor_Statics::NewProp_ArrowComponent = { "ArrowComponent", nullptr, (EPropertyFlags)0x0024080800080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVPRootActor, ArrowComponent), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVPRootActor_Statics::NewProp_ArrowComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVPRootActor_Statics::NewProp_ArrowComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVPRootActor_Statics::NewProp_bMoveLevelWithActor_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VPRootActor.h" },
	};
#endif
	void Z_Construct_UClass_AVPRootActor_Statics::NewProp_bMoveLevelWithActor_SetBit(void* Obj)
	{
		((AVPRootActor*)Obj)->bMoveLevelWithActor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVPRootActor_Statics::NewProp_bMoveLevelWithActor = { "bMoveLevelWithActor", nullptr, (EPropertyFlags)0x0010000800000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AVPRootActor), &Z_Construct_UClass_AVPRootActor_Statics::NewProp_bMoveLevelWithActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVPRootActor_Statics::NewProp_bMoveLevelWithActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVPRootActor_Statics::NewProp_bMoveLevelWithActor_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVPRootActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVPRootActor_Statics::NewProp_RealWorldSceneRepresentation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVPRootActor_Statics::NewProp_CinematicCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVPRootActor_Statics::NewProp_bAreComponentsVisible,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVPRootActor_Statics::NewProp_SpriteComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVPRootActor_Statics::NewProp_ArrowComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVPRootActor_Statics::NewProp_bMoveLevelWithActor,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVPRootActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVPRootActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVPRootActor_Statics::ClassParams = {
		&AVPRootActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVPRootActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVPRootActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVPRootActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVPRootActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVPRootActor()
	{
		if (!Z_Registration_Info_UClass_AVPRootActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVPRootActor.OuterSingleton, Z_Construct_UClass_AVPRootActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVPRootActor.OuterSingleton;
	}
	template<> VPUTILITIES_API UClass* StaticClass<AVPRootActor>()
	{
		return AVPRootActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVPRootActor);
	AVPRootActor::~AVPRootActor() {}
	void UVPWorldAssetUserData::StaticRegisterNativesUVPWorldAssetUserData()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVPWorldAssetUserData);
	UClass* Z_Construct_UClass_UVPWorldAssetUserData_NoRegister()
	{
		return UVPWorldAssetUserData::StaticClass();
	}
	struct Z_Construct_UClass_UVPWorldAssetUserData_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LastSelectedRootActor_MetaData[];
#endif
		static const UECodeGen_Private::FLazyObjectPropertyParams NewProp_LastSelectedRootActor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVPWorldAssetUserData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetUserData,
		(UObject* (*)())Z_Construct_UPackage__Script_VPUtilities,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPWorldAssetUserData_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * UVPWorldAssetUserData\n */" },
		{ "IncludePath", "VPRootActor.h" },
		{ "ModuleRelativePath", "Public/VPRootActor.h" },
		{ "ToolTip", "UVPWorldAssetUserData" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVPWorldAssetUserData_Statics::NewProp_LastSelectedRootActor_MetaData[] = {
		{ "Category", "Virtual Production" },
		{ "ModuleRelativePath", "Public/VPRootActor.h" },
	};
#endif
	const UECodeGen_Private::FLazyObjectPropertyParams Z_Construct_UClass_UVPWorldAssetUserData_Statics::NewProp_LastSelectedRootActor = { "LastSelectedRootActor", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::LazyObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVPWorldAssetUserData, LastSelectedRootActor), Z_Construct_UClass_AVPRootActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVPWorldAssetUserData_Statics::NewProp_LastSelectedRootActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVPWorldAssetUserData_Statics::NewProp_LastSelectedRootActor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVPWorldAssetUserData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVPWorldAssetUserData_Statics::NewProp_LastSelectedRootActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVPWorldAssetUserData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVPWorldAssetUserData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVPWorldAssetUserData_Statics::ClassParams = {
		&UVPWorldAssetUserData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVPWorldAssetUserData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVPWorldAssetUserData_Statics::PropPointers),
		0,
		0x002810A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVPWorldAssetUserData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVPWorldAssetUserData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVPWorldAssetUserData()
	{
		if (!Z_Registration_Info_UClass_UVPWorldAssetUserData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVPWorldAssetUserData.OuterSingleton, Z_Construct_UClass_UVPWorldAssetUserData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVPWorldAssetUserData.OuterSingleton;
	}
	template<> VPUTILITIES_API UClass* StaticClass<UVPWorldAssetUserData>()
	{
		return UVPWorldAssetUserData::StaticClass();
	}
	UVPWorldAssetUserData::UVPWorldAssetUserData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVPWorldAssetUserData);
	UVPWorldAssetUserData::~UVPWorldAssetUserData() {}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVPRootActor, AVPRootActor::StaticClass, TEXT("AVPRootActor"), &Z_Registration_Info_UClass_AVPRootActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVPRootActor), 2803281887U) },
		{ Z_Construct_UClass_UVPWorldAssetUserData, UVPWorldAssetUserData::StaticClass, TEXT("UVPWorldAssetUserData"), &Z_Registration_Info_UClass_UVPWorldAssetUserData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVPWorldAssetUserData), 2492385670U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_2176345063(TEXT("/Script/VPUtilities"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Experimental_VirtualProductionUtilities_Source_VPUtilities_Public_VPRootActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
