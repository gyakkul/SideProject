// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../Source/Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNotifyState_Trail() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_Trail();
	ENGINE_API UClass* Z_Construct_UClass_UAnimNotifyState_Trail_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETrailWidthMode();
	UPackage* Z_Construct_UPackage__Script_Engine();
// End Cross Module References
	struct AnimNotifyState_Trail_eventOverridePSTemplate_Parms
	{
		USkeletalMeshComponent* MeshComp;
		UAnimSequenceBase* Animation;
		UParticleSystem* ReturnValue;

		/** Constructor, initializes return property only **/
		AnimNotifyState_Trail_eventOverridePSTemplate_Parms()
			: ReturnValue(NULL)
		{
		}
	};
	static FName NAME_UAnimNotifyState_Trail_OverridePSTemplate = FName(TEXT("OverridePSTemplate"));
	UParticleSystem* UAnimNotifyState_Trail::OverridePSTemplate(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const
	{
		AnimNotifyState_Trail_eventOverridePSTemplate_Parms Parms;
		Parms.MeshComp=MeshComp;
		Parms.Animation=Animation;
		const_cast<UAnimNotifyState_Trail*>(this)->ProcessEvent(FindFunctionChecked(NAME_UAnimNotifyState_Trail_OverridePSTemplate),&Parms);
		return Parms.ReturnValue;
	}
	void UAnimNotifyState_Trail::StaticRegisterNativesUAnimNotifyState_Trail()
	{
	}
	struct Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::NewProp_MeshComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_Trail_eventOverridePSTemplate_Parms, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::NewProp_MeshComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_Trail_eventOverridePSTemplate_Parms, Animation), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AnimNotifyState_Trail_eventOverridePSTemplate_Parms, ReturnValue), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::NewProp_MeshComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::NewProp_Animation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAnimNotifyState_Trail, nullptr, "OverridePSTemplate", nullptr, nullptr, sizeof(AnimNotifyState_Trail_eventOverridePSTemplate_Parms), Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimNotifyState_Trail);
	UClass* Z_Construct_UClass_UAnimNotifyState_Trail_NoRegister()
	{
		return UAnimNotifyState_Trail::StaticClass();
	}
	struct Z_Construct_UClass_UAnimNotifyState_Trail_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PSTemplate_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_PSTemplate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FirstSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FirstSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SecondSocketName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SecondSocketName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidthScaleMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_WidthScaleMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WidthScaleCurve_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WidthScaleCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRecycleSpawnedSystems_MetaData[];
#endif
		static void NewProp_bRecycleSpawnedSystems_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRecycleSpawnedSystems;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderGeometry_MetaData[];
#endif
		static void NewProp_bRenderGeometry_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderGeometry;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderSpawnPoints_MetaData[];
#endif
		static void NewProp_bRenderSpawnPoints_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderSpawnPoints;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderTangents_MetaData[];
#endif
		static void NewProp_bRenderTangents_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderTangents;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRenderTessellation_MetaData[];
#endif
		static void NewProp_bRenderTessellation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRenderTessellation;
#endif // WITH_EDITORONLY_DATA
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimNotifyState_Trail_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimNotifyState,
		(UObject* (*)())Z_Construct_UPackage__Script_Engine,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAnimNotifyState_Trail_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAnimNotifyState_Trail_OverridePSTemplate, "OverridePSTemplate" }, // 2223906233
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_Trail_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "Trail" },
		{ "HideCategories", "Object Object" },
		{ "IncludePath", "Animation/AnimNotifies/AnimNotifyState_Trail.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
		{ "ShowWorldContextPin", "" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_PSTemplate_MetaData[] = {
		{ "Category", "Trail" },
		{ "Comment", "/** The particle system to use for this trail. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
		{ "ToolTip", "The particle system to use for this trail." },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_PSTemplate = { "PSTemplate", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotifyState_Trail, PSTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_PSTemplate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_PSTemplate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_FirstSocketName_MetaData[] = {
		{ "Category", "Trail" },
		{ "Comment", "/** Name of the first socket defining this trail. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
		{ "ToolTip", "Name of the first socket defining this trail." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_FirstSocketName = { "FirstSocketName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotifyState_Trail, FirstSocketName), METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_FirstSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_FirstSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_SecondSocketName_MetaData[] = {
		{ "Category", "Trail" },
		{ "Comment", "/** Name of the second socket defining this trail. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
		{ "ToolTip", "Name of the second socket defining this trail." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_SecondSocketName = { "SecondSocketName", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotifyState_Trail, SecondSocketName), METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_SecondSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_SecondSocketName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_WidthScaleMode_MetaData[] = {
		{ "Category", "Trail" },
		{ "Comment", "/** \n\x09""Controls the way width scale is applied. In each method a width scale of 1.0 will mean the width is unchanged from the position of the sockets. A width scale of 0.0 will cause a trail of zero width.\n\x09""From Centre = Trail width is scaled outwards from the centre point between the two sockets.\n\x09""From First = Trail width is scaled outwards from the position of the first socket.\n\x09""From Second = Trail width is scaled outwards from the position of the Second socket.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
		{ "ToolTip", "Controls the way width scale is applied. In each method a width scale of 1.0 will mean the width is unchanged from the position of the sockets. A width scale of 0.0 will cause a trail of zero width.\nFrom Centre = Trail width is scaled outwards from the centre point between the two sockets.\nFrom First = Trail width is scaled outwards from the position of the first socket.\nFrom Second = Trail width is scaled outwards from the position of the Second socket." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_WidthScaleMode = { "WidthScaleMode", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotifyState_Trail, WidthScaleMode), Z_Construct_UEnum_Engine_ETrailWidthMode, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_WidthScaleMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_WidthScaleMode_MetaData)) }; // 1564502693
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_WidthScaleCurve_MetaData[] = {
		{ "Category", "Trail" },
		{ "Comment", "/** Name of the curve to drive the width scale. */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
		{ "ToolTip", "Name of the curve to drive the width scale." },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_WidthScaleCurve = { "WidthScaleCurve", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimNotifyState_Trail, WidthScaleCurve), METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_WidthScaleCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_WidthScaleCurve_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRecycleSpawnedSystems_MetaData[] = {
		{ "Category", "Trail" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
	};
#endif
	void Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRecycleSpawnedSystems_SetBit(void* Obj)
	{
		((UAnimNotifyState_Trail*)Obj)->bRecycleSpawnedSystems = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRecycleSpawnedSystems = { "bRecycleSpawnedSystems", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimNotifyState_Trail), &Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRecycleSpawnedSystems_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRecycleSpawnedSystems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRecycleSpawnedSystems_MetaData)) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderGeometry_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true, render the trail geometry (this should typically be on) */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
		{ "ToolTip", "If true, render the trail geometry (this should typically be on)" },
	};
#endif
	void Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderGeometry_SetBit(void* Obj)
	{
		((UAnimNotifyState_Trail*)Obj)->bRenderGeometry = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderGeometry = { "bRenderGeometry", nullptr, (EPropertyFlags)0x0010000800002011, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimNotifyState_Trail), &Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderGeometry_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderGeometry_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderGeometry_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderSpawnPoints_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true, render stars at each spawned particle point along the trail */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
		{ "ToolTip", "If true, render stars at each spawned particle point along the trail" },
	};
#endif
	void Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderSpawnPoints_SetBit(void* Obj)
	{
		((UAnimNotifyState_Trail*)Obj)->bRenderSpawnPoints = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderSpawnPoints = { "bRenderSpawnPoints", nullptr, (EPropertyFlags)0x0010000800002011, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimNotifyState_Trail), &Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderSpawnPoints_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderSpawnPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderSpawnPoints_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderTangents_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true, render a line showing the tangent at each spawned particle point along the trail */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
		{ "ToolTip", "If true, render a line showing the tangent at each spawned particle point along the trail" },
	};
#endif
	void Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderTangents_SetBit(void* Obj)
	{
		((UAnimNotifyState_Trail*)Obj)->bRenderTangents = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderTangents = { "bRenderTangents", nullptr, (EPropertyFlags)0x0010000800002011, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimNotifyState_Trail), &Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderTangents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderTangents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderTangents_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderTessellation_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** If true, render the tessellated path between spawned particles */" },
		{ "ModuleRelativePath", "Classes/Animation/AnimNotifies/AnimNotifyState_Trail.h" },
		{ "ToolTip", "If true, render the tessellated path between spawned particles" },
	};
#endif
	void Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderTessellation_SetBit(void* Obj)
	{
		((UAnimNotifyState_Trail*)Obj)->bRenderTessellation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderTessellation = { "bRenderTessellation", nullptr, (EPropertyFlags)0x0010000800002011, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(uint8), sizeof(UAnimNotifyState_Trail), &Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderTessellation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderTessellation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderTessellation_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimNotifyState_Trail_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_PSTemplate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_FirstSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_SecondSocketName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_WidthScaleMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_WidthScaleCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRecycleSpawnedSystems,
#if WITH_EDITORONLY_DATA
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderGeometry,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderSpawnPoints,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderTangents,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimNotifyState_Trail_Statics::NewProp_bRenderTessellation,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimNotifyState_Trail_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimNotifyState_Trail>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimNotifyState_Trail_Statics::ClassParams = {
		&UAnimNotifyState_Trail::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAnimNotifyState_Trail_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::PropPointers),
		0,
		0x001130A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimNotifyState_Trail_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimNotifyState_Trail()
	{
		if (!Z_Registration_Info_UClass_UAnimNotifyState_Trail.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimNotifyState_Trail.OuterSingleton, Z_Construct_UClass_UAnimNotifyState_Trail_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimNotifyState_Trail.OuterSingleton;
	}
	template<> ENGINE_API UClass* StaticClass<UAnimNotifyState_Trail>()
	{
		return UAnimNotifyState_Trail::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimNotifyState_Trail);
	UAnimNotifyState_Trail::~UAnimNotifyState_Trail() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimNotifyState_Trail, UAnimNotifyState_Trail::StaticClass, TEXT("UAnimNotifyState_Trail"), &Z_Registration_Info_UClass_UAnimNotifyState_Trail, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimNotifyState_Trail), 1367084006U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_4160434613(TEXT("/Script/Engine"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Engine_Classes_Animation_AnimNotifies_AnimNotifyState_Trail_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
