// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassRepresentation/Public/MassRepresentationFragments.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassRepresentationFragments() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UScriptStruct();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassFragment();
	MASSENTITY_API UScriptStruct* Z_Construct_UScriptStruct_FMassSharedFragment();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationActorManagement_NoRegister();
	MASSREPRESENTATION_API UClass* Z_Construct_UClass_UMassRepresentationSubsystem_NoRegister();
	MASSREPRESENTATION_API UEnum* Z_Construct_UEnum_MassRepresentation_EMassRepresentationType();
	MASSREPRESENTATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassRepresentationFragment();
	MASSREPRESENTATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassRepresentationLODFragment();
	MASSREPRESENTATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassRepresentationParameters();
	MASSREPRESENTATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassRepresentationSubsystemSharedFragment();
	MASSREPRESENTATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassVisualizationLODParameters();
	MASSREPRESENTATION_API UScriptStruct* Z_Construct_UScriptStruct_FMassVisualizationLODSharedFragment();
	UPackage* Z_Construct_UPackage__Script_MassRepresentation();
// End Cross Module References

static_assert(std::is_polymorphic<FMassRepresentationLODFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassRepresentationLODFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassRepresentationLODFragment;
class UScriptStruct* FMassRepresentationLODFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassRepresentationLODFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassRepresentationLODFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassRepresentationLODFragment, (UObject*)Z_Construct_UPackage__Script_MassRepresentation(), TEXT("MassRepresentationLODFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassRepresentationLODFragment.OuterSingleton;
}
template<> MASSREPRESENTATION_API UScriptStruct* StaticStruct<FMassRepresentationLODFragment>()
{
	return FMassRepresentationLODFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassRepresentationLODFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassRepresentationLODFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassRepresentationFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassRepresentationLODFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassRepresentationLODFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassRepresentationLODFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassRepresentation,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassRepresentationLODFragment",
		sizeof(FMassRepresentationLODFragment),
		alignof(FMassRepresentationLODFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassRepresentationLODFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassRepresentationLODFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassRepresentationLODFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassRepresentationLODFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassRepresentationLODFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassRepresentationLODFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassRepresentationLODFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassRepresentationFragment>() == std::is_polymorphic<FMassFragment>(), "USTRUCT FMassRepresentationFragment cannot be polymorphic unless super FMassFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassRepresentationFragment;
class UScriptStruct* FMassRepresentationFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassRepresentationFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassRepresentationFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassRepresentationFragment, (UObject*)Z_Construct_UPackage__Script_MassRepresentation(), TEXT("MassRepresentationFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassRepresentationFragment.OuterSingleton;
}
template<> MASSREPRESENTATION_API UScriptStruct* StaticStruct<FMassRepresentationFragment>()
{
	return FMassRepresentationFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassRepresentationFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassRepresentationFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassRepresentationFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassRepresentationFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassRepresentationFragment>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassRepresentationFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassRepresentation,
		Z_Construct_UScriptStruct_FMassFragment,
		&NewStructOps,
		"MassRepresentationFragment",
		sizeof(FMassRepresentationFragment),
		alignof(FMassRepresentationFragment),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassRepresentationFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassRepresentationFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassRepresentationFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassRepresentationFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassRepresentationFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassRepresentationFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassRepresentationFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassRepresentationSubsystemSharedFragment>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FMassRepresentationSubsystemSharedFragment cannot be polymorphic unless super FMassSharedFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassRepresentationSubsystemSharedFragment;
class UScriptStruct* FMassRepresentationSubsystemSharedFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassRepresentationSubsystemSharedFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassRepresentationSubsystemSharedFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassRepresentationSubsystemSharedFragment, (UObject*)Z_Construct_UPackage__Script_MassRepresentation(), TEXT("MassRepresentationSubsystemSharedFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassRepresentationSubsystemSharedFragment.OuterSingleton;
}
template<> MASSREPRESENTATION_API UScriptStruct* StaticStruct<FMassRepresentationSubsystemSharedFragment>()
{
	return FMassRepresentationSubsystemSharedFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassRepresentationSubsystemSharedFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepresentationSubsystem_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_RepresentationSubsystem;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassRepresentationSubsystemSharedFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassRepresentationFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassRepresentationSubsystemSharedFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassRepresentationSubsystemSharedFragment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassRepresentationSubsystemSharedFragment_Statics::NewProp_RepresentationSubsystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassRepresentationFragments.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMassRepresentationSubsystemSharedFragment_Statics::NewProp_RepresentationSubsystem = { "RepresentationSubsystem", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassRepresentationSubsystemSharedFragment, RepresentationSubsystem), Z_Construct_UClass_UMassRepresentationSubsystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassRepresentationSubsystemSharedFragment_Statics::NewProp_RepresentationSubsystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassRepresentationSubsystemSharedFragment_Statics::NewProp_RepresentationSubsystem_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassRepresentationSubsystemSharedFragment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassRepresentationSubsystemSharedFragment_Statics::NewProp_RepresentationSubsystem,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassRepresentationSubsystemSharedFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassRepresentation,
		Z_Construct_UScriptStruct_FMassSharedFragment,
		&NewStructOps,
		"MassRepresentationSubsystemSharedFragment",
		sizeof(FMassRepresentationSubsystemSharedFragment),
		alignof(FMassRepresentationSubsystemSharedFragment),
		Z_Construct_UScriptStruct_FMassRepresentationSubsystemSharedFragment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassRepresentationSubsystemSharedFragment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassRepresentationSubsystemSharedFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassRepresentationSubsystemSharedFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassRepresentationSubsystemSharedFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassRepresentationSubsystemSharedFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassRepresentationSubsystemSharedFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassRepresentationSubsystemSharedFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassRepresentationSubsystemSharedFragment.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassRepresentationParameters>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FMassRepresentationParameters cannot be polymorphic unless super FMassSharedFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassRepresentationParameters;
class UScriptStruct* FMassRepresentationParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassRepresentationParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassRepresentationParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassRepresentationParameters, (UObject*)Z_Construct_UPackage__Script_MassRepresentation(), TEXT("MassRepresentationParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MassRepresentationParameters.OuterSingleton;
}
template<> MASSREPRESENTATION_API UScriptStruct* StaticStruct<FMassRepresentationParameters>()
{
	return FMassRepresentationParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RepresentationActorManagementClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_RepresentationActorManagementClass;
		static const UECodeGen_Private::FBytePropertyParams NewProp_LODRepresentation_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODRepresentation_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_LODRepresentation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepLowResActors_MetaData[];
#endif
		static void NewProp_bKeepLowResActors_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepLowResActors;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeepActorExtraFrame_MetaData[];
#endif
		static void NewProp_bKeepActorExtraFrame_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeepActorExtraFrame;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSpreadFirstVisualizationUpdate_MetaData[];
#endif
		static void NewProp_bSpreadFirstVisualizationUpdate_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpreadFirstVisualizationUpdate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldPartitionGridNameContainingCollision_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_WorldPartitionGridNameContainingCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NotVisibleUpdateRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NotVisibleUpdateRate;
		static const UECodeGen_Private::FBytePropertyParams NewProp_CachedDefaultRepresentationType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedDefaultRepresentationType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_CachedDefaultRepresentationType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CachedRepresentationActorManagement_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_CachedRepresentationActorManagement;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassRepresentationFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassRepresentationParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_RepresentationActorManagementClass_MetaData[] = {
		{ "Category", "Mass|Visual" },
		{ "Comment", "/** Allow subclasses to override the representation actor management behavior */" },
		{ "ModuleRelativePath", "Public/MassRepresentationFragments.h" },
		{ "ToolTip", "Allow subclasses to override the representation actor management behavior" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_RepresentationActorManagementClass = { "RepresentationActorManagementClass", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassRepresentationParameters, RepresentationActorManagementClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMassRepresentationActorManagement_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_RepresentationActorManagementClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_RepresentationActorManagementClass_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_LODRepresentation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_LODRepresentation_MetaData[] = {
		{ "ArraySizeEnum", "/Script/MassLOD.EMassLOD" },
		{ "Category", "Mass|Representation" },
		{ "Comment", "/** What should be the representation of this entity for each specific LOD */" },
		{ "ModuleRelativePath", "Public/MassRepresentationFragments.h" },
		{ "ToolTip", "What should be the representation of this entity for each specific LOD" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_LODRepresentation = { "LODRepresentation", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(LODRepresentation, FMassRepresentationParameters), nullptr, nullptr, STRUCT_OFFSET(FMassRepresentationParameters, LODRepresentation), Z_Construct_UEnum_MassRepresentation_EMassRepresentationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_LODRepresentation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_LODRepresentation_MetaData)) }; // 3602014643
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_bKeepLowResActors_MetaData[] = {
		{ "Category", "Mass|Representation" },
		{ "Comment", "/** If true, LowRes actors will be kept around, disabled, whilst StaticMeshInstance representation is active */" },
		{ "ModuleRelativePath", "Public/MassRepresentationFragments.h" },
		{ "ToolTip", "If true, LowRes actors will be kept around, disabled, whilst StaticMeshInstance representation is active" },
	};
#endif
	void Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_bKeepLowResActors_SetBit(void* Obj)
	{
		((FMassRepresentationParameters*)Obj)->bKeepLowResActors = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_bKeepLowResActors = { "bKeepLowResActors", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMassRepresentationParameters), &Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_bKeepLowResActors_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_bKeepLowResActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_bKeepLowResActors_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_bKeepActorExtraFrame_MetaData[] = {
		{ "Category", "Mass|Representation" },
		{ "Comment", "/** When switching to ISM keep the actor an extra frame, helps cover rendering glitches (i.e. occlusion query being one frame late) */" },
		{ "ModuleRelativePath", "Public/MassRepresentationFragments.h" },
		{ "ToolTip", "When switching to ISM keep the actor an extra frame, helps cover rendering glitches (i.e. occlusion query being one frame late)" },
	};
#endif
	void Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_bKeepActorExtraFrame_SetBit(void* Obj)
	{
		((FMassRepresentationParameters*)Obj)->bKeepActorExtraFrame = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_bKeepActorExtraFrame = { "bKeepActorExtraFrame", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMassRepresentationParameters), &Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_bKeepActorExtraFrame_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_bKeepActorExtraFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_bKeepActorExtraFrame_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_bSpreadFirstVisualizationUpdate_MetaData[] = {
		{ "Category", "Mass|Representation" },
		{ "Comment", "/** If true, will spread the first visualization update over the period specified in NotVisibleUpdateRate member */" },
		{ "ModuleRelativePath", "Public/MassRepresentationFragments.h" },
		{ "ToolTip", "If true, will spread the first visualization update over the period specified in NotVisibleUpdateRate member" },
	};
#endif
	void Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_bSpreadFirstVisualizationUpdate_SetBit(void* Obj)
	{
		((FMassRepresentationParameters*)Obj)->bSpreadFirstVisualizationUpdate = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_bSpreadFirstVisualizationUpdate = { "bSpreadFirstVisualizationUpdate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FMassRepresentationParameters), &Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_bSpreadFirstVisualizationUpdate_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_bSpreadFirstVisualizationUpdate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_bSpreadFirstVisualizationUpdate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_WorldPartitionGridNameContainingCollision_MetaData[] = {
		{ "Category", "Mass|Representation" },
		{ "Comment", "/** World Partition grid name to test collision against, default None will be the main grid */" },
		{ "ModuleRelativePath", "Public/MassRepresentationFragments.h" },
		{ "ToolTip", "World Partition grid name to test collision against, default None will be the main grid" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_WorldPartitionGridNameContainingCollision = { "WorldPartitionGridNameContainingCollision", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassRepresentationParameters, WorldPartitionGridNameContainingCollision), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_WorldPartitionGridNameContainingCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_WorldPartitionGridNameContainingCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_NotVisibleUpdateRate_MetaData[] = {
		{ "Category", "Mass|Visualization" },
		{ "Comment", "/** At what rate should the not visible entity be updated in seconds */" },
		{ "ModuleRelativePath", "Public/MassRepresentationFragments.h" },
		{ "ToolTip", "At what rate should the not visible entity be updated in seconds" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_NotVisibleUpdateRate = { "NotVisibleUpdateRate", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassRepresentationParameters, NotVisibleUpdateRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_NotVisibleUpdateRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_NotVisibleUpdateRate_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_CachedDefaultRepresentationType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_CachedDefaultRepresentationType_MetaData[] = {
		{ "Comment", "/** Default representation when unable to spawn an actor, gets calculated at initialization */" },
		{ "ModuleRelativePath", "Public/MassRepresentationFragments.h" },
		{ "ToolTip", "Default representation when unable to spawn an actor, gets calculated at initialization" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_CachedDefaultRepresentationType = { "CachedDefaultRepresentationType", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassRepresentationParameters, CachedDefaultRepresentationType), Z_Construct_UEnum_MassRepresentation_EMassRepresentationType, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_CachedDefaultRepresentationType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_CachedDefaultRepresentationType_MetaData)) }; // 3602014643
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_CachedRepresentationActorManagement_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassRepresentationFragments.h" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_CachedRepresentationActorManagement = { "CachedRepresentationActorManagement", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassRepresentationParameters, CachedRepresentationActorManagement), Z_Construct_UClass_UMassRepresentationActorManagement_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_CachedRepresentationActorManagement_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_CachedRepresentationActorManagement_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_RepresentationActorManagementClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_LODRepresentation_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_LODRepresentation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_bKeepLowResActors,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_bKeepActorExtraFrame,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_bSpreadFirstVisualizationUpdate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_WorldPartitionGridNameContainingCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_NotVisibleUpdateRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_CachedDefaultRepresentationType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_CachedDefaultRepresentationType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewProp_CachedRepresentationActorManagement,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassRepresentation,
		Z_Construct_UScriptStruct_FMassSharedFragment,
		&NewStructOps,
		"MassRepresentationParameters",
		sizeof(FMassRepresentationParameters),
		alignof(FMassRepresentationParameters),
		Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassRepresentationParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_MassRepresentationParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassRepresentationParameters.InnerSingleton, Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassRepresentationParameters.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassVisualizationLODParameters>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FMassVisualizationLODParameters cannot be polymorphic unless super FMassSharedFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassVisualizationLODParameters;
class UScriptStruct* FMassVisualizationLODParameters::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassVisualizationLODParameters.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassVisualizationLODParameters.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassVisualizationLODParameters, (UObject*)Z_Construct_UPackage__Script_MassRepresentation(), TEXT("MassVisualizationLODParameters"));
	}
	return Z_Registration_Info_UScriptStruct_MassVisualizationLODParameters.OuterSingleton;
}
template<> MASSREPRESENTATION_API UScriptStruct* StaticStruct<FMassVisualizationLODParameters>()
{
	return FMassVisualizationLODParameters::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseLODDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BaseLODDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VisibleLODDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_VisibleLODDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BufferHysteresisOnDistancePercentage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_BufferHysteresisOnDistancePercentage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LODMaxCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_LODMaxCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToFrustum_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToFrustum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DistanceToFrustumHysteresis_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DistanceToFrustumHysteresis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterTag_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FilterTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassRepresentationFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassVisualizationLODParameters>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_BaseLODDistance_MetaData[] = {
		{ "ArraySizeEnum", "/Script/MassLOD.EMassLOD" },
		{ "Category", "Mass|LOD" },
		{ "Comment", "/** Distances where each LOD becomes relevant */" },
		{ "ModuleRelativePath", "Public/MassRepresentationFragments.h" },
		{ "ToolTip", "Distances where each LOD becomes relevant" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_BaseLODDistance = { "BaseLODDistance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(BaseLODDistance, FMassVisualizationLODParameters), nullptr, nullptr, STRUCT_OFFSET(FMassVisualizationLODParameters, BaseLODDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_BaseLODDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_BaseLODDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_VisibleLODDistance_MetaData[] = {
		{ "ArraySizeEnum", "/Script/MassLOD.EMassLOD" },
		{ "Category", "Mass|LOD" },
		{ "ModuleRelativePath", "Public/MassRepresentationFragments.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_VisibleLODDistance = { "VisibleLODDistance", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(VisibleLODDistance, FMassVisualizationLODParameters), nullptr, nullptr, STRUCT_OFFSET(FMassVisualizationLODParameters, VisibleLODDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_VisibleLODDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_VisibleLODDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_BufferHysteresisOnDistancePercentage_MetaData[] = {
		{ "Category", "Mass|LOD" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/MassRepresentationFragments.h" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_BufferHysteresisOnDistancePercentage = { "BufferHysteresisOnDistancePercentage", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassVisualizationLODParameters, BufferHysteresisOnDistancePercentage), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_BufferHysteresisOnDistancePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_BufferHysteresisOnDistancePercentage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_LODMaxCount_MetaData[] = {
		{ "ArraySizeEnum", "/Script/MassLOD.EMassLOD" },
		{ "Category", "Mass|LOD" },
		{ "Comment", "/** Maximum limit for each entity per LOD */" },
		{ "ModuleRelativePath", "Public/MassRepresentationFragments.h" },
		{ "ToolTip", "Maximum limit for each entity per LOD" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_LODMaxCount = { "LODMaxCount", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(LODMaxCount, FMassVisualizationLODParameters), nullptr, nullptr, STRUCT_OFFSET(FMassVisualizationLODParameters, LODMaxCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_LODMaxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_LODMaxCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_DistanceToFrustum_MetaData[] = {
		{ "Category", "Mass|LOD" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** How far away from frustum does this entities are considered visible */" },
		{ "ModuleRelativePath", "Public/MassRepresentationFragments.h" },
		{ "ToolTip", "How far away from frustum does this entities are considered visible" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_DistanceToFrustum = { "DistanceToFrustum", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassVisualizationLODParameters, DistanceToFrustum), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_DistanceToFrustum_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_DistanceToFrustum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_DistanceToFrustumHysteresis_MetaData[] = {
		{ "Category", "Mass|LOD" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Once visible how much further than DistanceToFrustum does the entities need to be before being cull again */" },
		{ "ModuleRelativePath", "Public/MassRepresentationFragments.h" },
		{ "ToolTip", "Once visible how much further than DistanceToFrustum does the entities need to be before being cull again" },
		{ "UIMin", "0.0" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_DistanceToFrustumHysteresis = { "DistanceToFrustumHysteresis", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassVisualizationLODParameters, DistanceToFrustumHysteresis), METADATA_PARAMS(Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_DistanceToFrustumHysteresis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_DistanceToFrustumHysteresis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_FilterTag_MetaData[] = {
		{ "BaseStruct", "/Script/MassEntity.MassTag" },
		{ "Category", "Mass|LOD" },
		{ "Comment", "/** Filter these settings with specified tag */" },
		{ "ModuleRelativePath", "Public/MassRepresentationFragments.h" },
		{ "ToolTip", "Filter these settings with specified tag" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_FilterTag = { "FilterTag", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassVisualizationLODParameters, FilterTag), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_FilterTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_FilterTag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_BaseLODDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_VisibleLODDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_BufferHysteresisOnDistancePercentage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_LODMaxCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_DistanceToFrustum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_DistanceToFrustumHysteresis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewProp_FilterTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassRepresentation,
		Z_Construct_UScriptStruct_FMassSharedFragment,
		&NewStructOps,
		"MassVisualizationLODParameters",
		sizeof(FMassVisualizationLODParameters),
		alignof(FMassVisualizationLODParameters),
		Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassVisualizationLODParameters()
	{
		if (!Z_Registration_Info_UScriptStruct_MassVisualizationLODParameters.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassVisualizationLODParameters.InnerSingleton, Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassVisualizationLODParameters.InnerSingleton;
	}

static_assert(std::is_polymorphic<FMassVisualizationLODSharedFragment>() == std::is_polymorphic<FMassSharedFragment>(), "USTRUCT FMassVisualizationLODSharedFragment cannot be polymorphic unless super FMassSharedFragment is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MassVisualizationLODSharedFragment;
class UScriptStruct* FMassVisualizationLODSharedFragment::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MassVisualizationLODSharedFragment.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MassVisualizationLODSharedFragment.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMassVisualizationLODSharedFragment, (UObject*)Z_Construct_UPackage__Script_MassRepresentation(), TEXT("MassVisualizationLODSharedFragment"));
	}
	return Z_Registration_Info_UScriptStruct_MassVisualizationLODSharedFragment.OuterSingleton;
}
template<> MASSREPRESENTATION_API UScriptStruct* StaticStruct<FMassVisualizationLODSharedFragment>()
{
	return FMassVisualizationLODSharedFragment::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMassVisualizationLODSharedFragment_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilterTag_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPtrPropertyParams NewProp_FilterTag;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassVisualizationLODSharedFragment_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MassRepresentationFragments.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMassVisualizationLODSharedFragment_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMassVisualizationLODSharedFragment>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMassVisualizationLODSharedFragment_Statics::NewProp_FilterTag_MetaData[] = {
		{ "ModuleRelativePath", "Public/MassRepresentationFragments.h" },
		{ "NativeConstTemplateArg", "" },
	};
#endif
	const UECodeGen_Private::FObjectPtrPropertyParams Z_Construct_UScriptStruct_FMassVisualizationLODSharedFragment_Statics::NewProp_FilterTag = { "FilterTag", nullptr, (EPropertyFlags)0x0014000000002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FMassVisualizationLODSharedFragment, FilterTag), Z_Construct_UClass_UScriptStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FMassVisualizationLODSharedFragment_Statics::NewProp_FilterTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassVisualizationLODSharedFragment_Statics::NewProp_FilterTag_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMassVisualizationLODSharedFragment_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMassVisualizationLODSharedFragment_Statics::NewProp_FilterTag,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMassVisualizationLODSharedFragment_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MassRepresentation,
		Z_Construct_UScriptStruct_FMassSharedFragment,
		&NewStructOps,
		"MassVisualizationLODSharedFragment",
		sizeof(FMassVisualizationLODSharedFragment),
		alignof(FMassVisualizationLODSharedFragment),
		Z_Construct_UScriptStruct_FMassVisualizationLODSharedFragment_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassVisualizationLODSharedFragment_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMassVisualizationLODSharedFragment_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMassVisualizationLODSharedFragment_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMassVisualizationLODSharedFragment()
	{
		if (!Z_Registration_Info_UScriptStruct_MassVisualizationLODSharedFragment.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MassVisualizationLODSharedFragment.InnerSingleton, Z_Construct_UScriptStruct_FMassVisualizationLODSharedFragment_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MassVisualizationLODSharedFragment.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationFragments_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationFragments_h_Statics::ScriptStructInfo[] = {
		{ FMassRepresentationLODFragment::StaticStruct, Z_Construct_UScriptStruct_FMassRepresentationLODFragment_Statics::NewStructOps, TEXT("MassRepresentationLODFragment"), &Z_Registration_Info_UScriptStruct_MassRepresentationLODFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassRepresentationLODFragment), 1735465896U) },
		{ FMassRepresentationFragment::StaticStruct, Z_Construct_UScriptStruct_FMassRepresentationFragment_Statics::NewStructOps, TEXT("MassRepresentationFragment"), &Z_Registration_Info_UScriptStruct_MassRepresentationFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassRepresentationFragment), 2329148132U) },
		{ FMassRepresentationSubsystemSharedFragment::StaticStruct, Z_Construct_UScriptStruct_FMassRepresentationSubsystemSharedFragment_Statics::NewStructOps, TEXT("MassRepresentationSubsystemSharedFragment"), &Z_Registration_Info_UScriptStruct_MassRepresentationSubsystemSharedFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassRepresentationSubsystemSharedFragment), 2035685005U) },
		{ FMassRepresentationParameters::StaticStruct, Z_Construct_UScriptStruct_FMassRepresentationParameters_Statics::NewStructOps, TEXT("MassRepresentationParameters"), &Z_Registration_Info_UScriptStruct_MassRepresentationParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassRepresentationParameters), 4265060599U) },
		{ FMassVisualizationLODParameters::StaticStruct, Z_Construct_UScriptStruct_FMassVisualizationLODParameters_Statics::NewStructOps, TEXT("MassVisualizationLODParameters"), &Z_Registration_Info_UScriptStruct_MassVisualizationLODParameters, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassVisualizationLODParameters), 2881503271U) },
		{ FMassVisualizationLODSharedFragment::StaticStruct, Z_Construct_UScriptStruct_FMassVisualizationLODSharedFragment_Statics::NewStructOps, TEXT("MassVisualizationLODSharedFragment"), &Z_Registration_Info_UScriptStruct_MassVisualizationLODSharedFragment, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMassVisualizationLODSharedFragment), 2476603062U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationFragments_h_3054008798(TEXT("/Script/MassRepresentation"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationFragments_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassRepresentation_Public_MassRepresentationFragments_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
