// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../../../../Plugins/Runtime/MassGameplay/Source/MassActors/Public/MassActorPoolableInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMassActorPoolableInterface() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassActorPoolableInterface();
	MASSACTORS_API UClass* Z_Construct_UClass_UMassActorPoolableInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_MassActors();
// End Cross Module References
	DEFINE_FUNCTION(IMassActorPoolableInterface::execPrepareForGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrepareForGame_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMassActorPoolableInterface::execPrepareForPooling)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrepareForPooling_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(IMassActorPoolableInterface::execCanBePooled)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanBePooled_Implementation();
		P_NATIVE_END;
	}
	struct MassActorPoolableInterface_eventCanBePooled_Parms
	{
		bool ReturnValue;

		/** Constructor, initializes return property only **/
		MassActorPoolableInterface_eventCanBePooled_Parms()
			: ReturnValue(false)
		{
		}
	};
	bool IMassActorPoolableInterface::CanBePooled()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanBePooled instead.");
		MassActorPoolableInterface_eventCanBePooled_Parms Parms;
		return Parms.ReturnValue;
	}
	void IMassActorPoolableInterface::PrepareForGame()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PrepareForGame instead.");
	}
	void IMassActorPoolableInterface::PrepareForPooling()
	{
		check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PrepareForPooling instead.");
	}
	void UMassActorPoolableInterface::StaticRegisterNativesUMassActorPoolableInterface()
	{
		UClass* Class = UMassActorPoolableInterface::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanBePooled", &IMassActorPoolableInterface::execCanBePooled },
			{ "PrepareForGame", &IMassActorPoolableInterface::execPrepareForGame },
			{ "PrepareForPooling", &IMassActorPoolableInterface::execPrepareForPooling },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMassActorPoolableInterface_CanBePooled_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMassActorPoolableInterface_CanBePooled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MassActorPoolableInterface_eventCanBePooled_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMassActorPoolableInterface_CanBePooled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(MassActorPoolableInterface_eventCanBePooled_Parms), &Z_Construct_UFunction_UMassActorPoolableInterface_CanBePooled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMassActorPoolableInterface_CanBePooled_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMassActorPoolableInterface_CanBePooled_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassActorPoolableInterface_CanBePooled_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass|Actor Pooling" },
		{ "ModuleRelativePath", "Public/MassActorPoolableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassActorPoolableInterface_CanBePooled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassActorPoolableInterface, nullptr, "CanBePooled", nullptr, nullptr, sizeof(MassActorPoolableInterface_eventCanBePooled_Parms), Z_Construct_UFunction_UMassActorPoolableInterface_CanBePooled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassActorPoolableInterface_CanBePooled_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMassActorPoolableInterface_CanBePooled_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassActorPoolableInterface_CanBePooled_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMassActorPoolableInterface_CanBePooled()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassActorPoolableInterface_CanBePooled_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMassActorPoolableInterface_PrepareForGame_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassActorPoolableInterface_PrepareForGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass|Actor Pooling" },
		{ "ModuleRelativePath", "Public/MassActorPoolableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassActorPoolableInterface_PrepareForGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassActorPoolableInterface, nullptr, "PrepareForGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMassActorPoolableInterface_PrepareForGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassActorPoolableInterface_PrepareForGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMassActorPoolableInterface_PrepareForGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassActorPoolableInterface_PrepareForGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMassActorPoolableInterface_PrepareForPooling_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMassActorPoolableInterface_PrepareForPooling_Statics::Function_MetaDataParams[] = {
		{ "Category", "Mass|Actor Pooling" },
		{ "ModuleRelativePath", "Public/MassActorPoolableInterface.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMassActorPoolableInterface_PrepareForPooling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMassActorPoolableInterface, nullptr, "PrepareForPooling", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMassActorPoolableInterface_PrepareForPooling_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMassActorPoolableInterface_PrepareForPooling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMassActorPoolableInterface_PrepareForPooling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMassActorPoolableInterface_PrepareForPooling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMassActorPoolableInterface);
	UClass* Z_Construct_UClass_UMassActorPoolableInterface_NoRegister()
	{
		return UMassActorPoolableInterface::StaticClass();
	}
	struct Z_Construct_UClass_UMassActorPoolableInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMassActorPoolableInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_MassActors,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMassActorPoolableInterface_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMassActorPoolableInterface_CanBePooled, "CanBePooled" }, // 2698059420
		{ &Z_Construct_UFunction_UMassActorPoolableInterface_PrepareForGame, "PrepareForGame" }, // 2194572977
		{ &Z_Construct_UFunction_UMassActorPoolableInterface_PrepareForPooling, "PrepareForPooling" }, // 972951288
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMassActorPoolableInterface_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/MassActorPoolableInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMassActorPoolableInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMassActorPoolableInterface>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UMassActorPoolableInterface_Statics::ClassParams = {
		&UMassActorPoolableInterface::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UMassActorPoolableInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMassActorPoolableInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMassActorPoolableInterface()
	{
		if (!Z_Registration_Info_UClass_UMassActorPoolableInterface.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMassActorPoolableInterface.OuterSingleton, Z_Construct_UClass_UMassActorPoolableInterface_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UMassActorPoolableInterface.OuterSingleton;
	}
	template<> MASSACTORS_API UClass* StaticClass<UMassActorPoolableInterface>()
	{
		return UMassActorPoolableInterface::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMassActorPoolableInterface);
	UMassActorPoolableInterface::~UMassActorPoolableInterface() {}
	static FName NAME_UMassActorPoolableInterface_CanBePooled = FName(TEXT("CanBePooled"));
	bool IMassActorPoolableInterface::Execute_CanBePooled(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMassActorPoolableInterface::StaticClass()));
		MassActorPoolableInterface_eventCanBePooled_Parms Parms;
		UFunction* const Func = O->FindFunction(NAME_UMassActorPoolableInterface_CanBePooled);
		if (Func)
		{
			O->ProcessEvent(Func, &Parms);
		}
		else if (auto I = (IMassActorPoolableInterface*)(O->GetNativeInterfaceAddress(UMassActorPoolableInterface::StaticClass())))
		{
			Parms.ReturnValue = I->CanBePooled_Implementation();
		}
		return Parms.ReturnValue;
	}
	static FName NAME_UMassActorPoolableInterface_PrepareForGame = FName(TEXT("PrepareForGame"));
	void IMassActorPoolableInterface::Execute_PrepareForGame(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMassActorPoolableInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UMassActorPoolableInterface_PrepareForGame);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IMassActorPoolableInterface*)(O->GetNativeInterfaceAddress(UMassActorPoolableInterface::StaticClass())))
		{
			I->PrepareForGame_Implementation();
		}
	}
	static FName NAME_UMassActorPoolableInterface_PrepareForPooling = FName(TEXT("PrepareForPooling"));
	void IMassActorPoolableInterface::Execute_PrepareForPooling(UObject* O)
	{
		check(O != NULL);
		check(O->GetClass()->ImplementsInterface(UMassActorPoolableInterface::StaticClass()));
		UFunction* const Func = O->FindFunction(NAME_UMassActorPoolableInterface_PrepareForPooling);
		if (Func)
		{
			O->ProcessEvent(Func, NULL);
		}
		else if (auto I = (IMassActorPoolableInterface*)(O->GetNativeInterfaceAddress(UMassActorPoolableInterface::StaticClass())))
		{
			I->PrepareForPooling_Implementation();
		}
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UMassActorPoolableInterface, UMassActorPoolableInterface::StaticClass, TEXT("UMassActorPoolableInterface"), &Z_Registration_Info_UClass_UMassActorPoolableInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMassActorPoolableInterface), 2346815386U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_302516564(TEXT("/Script/MassActors"),
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_MassGameplay_Source_MassActors_Public_MassActorPoolableInterface_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
