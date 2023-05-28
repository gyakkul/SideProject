// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Components/SafeZone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSafeZone() {}
// Cross Module References
	UMG_API UClass* Z_Construct_UClass_UContentWidget();
	UMG_API UClass* Z_Construct_UClass_USafeZone();
	UMG_API UClass* Z_Construct_UClass_USafeZone_NoRegister();
	UPackage* Z_Construct_UPackage__Script_UMG();
// End Cross Module References
	DEFINE_FUNCTION(USafeZone::execSetSidesToPad)
	{
		P_GET_UBOOL(Z_Param_InPadLeft);
		P_GET_UBOOL(Z_Param_InPadRight);
		P_GET_UBOOL(Z_Param_InPadTop);
		P_GET_UBOOL(Z_Param_InPadBottom);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSidesToPad(Z_Param_InPadLeft,Z_Param_InPadRight,Z_Param_InPadTop,Z_Param_InPadBottom);
		P_NATIVE_END;
	}
	void USafeZone::GetPadLeft_WrapperImpl(const void* Object, void* OutValue)
	{
		const USafeZone* Obj = (const USafeZone*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->GetPadLeft();
	}
	void USafeZone::SetPadLeft_WrapperImpl(void* Object, const void* InValue)
	{
		USafeZone* Obj = (USafeZone*)Object;
		bool& Value = *(bool*)InValue;
		Obj->SetPadLeft(Value);
	}
	void USafeZone::GetPadRight_WrapperImpl(const void* Object, void* OutValue)
	{
		const USafeZone* Obj = (const USafeZone*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->GetPadRight();
	}
	void USafeZone::SetPadRight_WrapperImpl(void* Object, const void* InValue)
	{
		USafeZone* Obj = (USafeZone*)Object;
		bool& Value = *(bool*)InValue;
		Obj->SetPadRight(Value);
	}
	void USafeZone::GetPadTop_WrapperImpl(const void* Object, void* OutValue)
	{
		const USafeZone* Obj = (const USafeZone*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->GetPadTop();
	}
	void USafeZone::SetPadTop_WrapperImpl(void* Object, const void* InValue)
	{
		USafeZone* Obj = (USafeZone*)Object;
		bool& Value = *(bool*)InValue;
		Obj->SetPadTop(Value);
	}
	void USafeZone::GetPadBottom_WrapperImpl(const void* Object, void* OutValue)
	{
		const USafeZone* Obj = (const USafeZone*)Object;
		bool& Result = *(bool*)OutValue;
		Result = (bool)Obj->GetPadBottom();
	}
	void USafeZone::SetPadBottom_WrapperImpl(void* Object, const void* InValue)
	{
		USafeZone* Obj = (USafeZone*)Object;
		bool& Value = *(bool*)InValue;
		Obj->SetPadBottom(Value);
	}
	void USafeZone::StaticRegisterNativesUSafeZone()
	{
		UClass* Class = USafeZone::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSidesToPad", &USafeZone::execSetSidesToPad },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics
	{
		struct SafeZone_eventSetSidesToPad_Parms
		{
			bool InPadLeft;
			bool InPadRight;
			bool InPadTop;
			bool InPadBottom;
		};
		static void NewProp_InPadLeft_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InPadLeft;
		static void NewProp_InPadRight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InPadRight;
		static void NewProp_InPadTop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InPadTop;
		static void NewProp_InPadBottom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_InPadBottom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadLeft_SetBit(void* Obj)
	{
		((SafeZone_eventSetSidesToPad_Parms*)Obj)->InPadLeft = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadLeft = { "InPadLeft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SafeZone_eventSetSidesToPad_Parms), &Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadLeft_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadRight_SetBit(void* Obj)
	{
		((SafeZone_eventSetSidesToPad_Parms*)Obj)->InPadRight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadRight = { "InPadRight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SafeZone_eventSetSidesToPad_Parms), &Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadRight_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadTop_SetBit(void* Obj)
	{
		((SafeZone_eventSetSidesToPad_Parms*)Obj)->InPadTop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadTop = { "InPadTop", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SafeZone_eventSetSidesToPad_Parms), &Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadTop_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadBottom_SetBit(void* Obj)
	{
		((SafeZone_eventSetSidesToPad_Parms*)Obj)->InPadBottom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadBottom = { "InPadBottom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SafeZone_eventSetSidesToPad_Parms), &Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadBottom_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadTop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::NewProp_InPadBottom,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::Function_MetaDataParams[] = {
		{ "Category", "SafeZone" },
		{ "ModuleRelativePath", "Public/Components/SafeZone.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USafeZone, nullptr, "SetSidesToPad", nullptr, nullptr, sizeof(Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::SafeZone_eventSetSidesToPad_Parms), Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USafeZone_SetSidesToPad()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USafeZone_SetSidesToPad_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USafeZone);
	UClass* Z_Construct_UClass_USafeZone_NoRegister()
	{
		return USafeZone::StaticClass();
	}
	struct Z_Construct_UClass_USafeZone_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PadLeft_MetaData[];
#endif
		static void NewProp_PadLeft_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PadLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PadRight_MetaData[];
#endif
		static void NewProp_PadRight_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PadRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PadTop_MetaData[];
#endif
		static void NewProp_PadTop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PadTop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PadBottom_MetaData[];
#endif
		static void NewProp_PadBottom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_PadBottom;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USafeZone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UContentWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_UMG,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USafeZone_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USafeZone_SetSidesToPad, "SetSidesToPad" }, // 3365805982
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZone_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * The Safe-Zone widget is an essential part of developing a game UI that can run on lots of different non-PC platforms.\n * While a modern flat panel computer monitor may not have over scan issues, this is a common occurrence for Consoles.  \n * It's common for TVs to have extra pixels under the bezel, in addition to projectors and projection TVs having potentially\n * several vertical and horizontal columns of pixels hidden behind or against a black border of the projection screen.\n * \n * Useful testing console commands to help, simulate the safe zone on PC,\n *   r.DebugSafeZone.TitleRatio 0.96\n *   r.DebugActionZone.ActionRatio 0.96\n * \n * To enable a red band to visualize the safe zone, use this console command,\n * r.DebugSafeZone.Mode controls the debug visualization overlay (0..2, default 0).\n *   0: Do not display the safe zone overlay.\n *   1: Display the overlay for the title safe zone.\n *   2: Display the overlay for the action safe zone.\n */" },
		{ "IncludePath", "Components/SafeZone.h" },
		{ "ModuleRelativePath", "Public/Components/SafeZone.h" },
		{ "ToolTip", "The Safe-Zone widget is an essential part of developing a game UI that can run on lots of different non-PC platforms.\nWhile a modern flat panel computer monitor may not have over scan issues, this is a common occurrence for Consoles.\nIt's common for TVs to have extra pixels under the bezel, in addition to projectors and projection TVs having potentially\nseveral vertical and horizontal columns of pixels hidden behind or against a black border of the projection screen.\n\nUseful testing console commands to help, simulate the safe zone on PC,\n  r.DebugSafeZone.TitleRatio 0.96\n  r.DebugActionZone.ActionRatio 0.96\n\nTo enable a red band to visualize the safe zone, use this console command,\nr.DebugSafeZone.Mode controls the debug visualization overlay (0..2, default 0).\n  0: Do not display the safe zone overlay.\n  1: Display the overlay for the title safe zone.\n  2: Display the overlay for the action safe zone." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZone_Statics::NewProp_PadLeft_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "Comment", "/** If this safe zone should pad for the left side of the screen's safe zone */" },
		{ "ModuleRelativePath", "Public/Components/SafeZone.h" },
		{ "ToolTip", "If this safe zone should pad for the left side of the screen's safe zone" },
	};
#endif
	void Z_Construct_UClass_USafeZone_Statics::NewProp_PadLeft_SetBit(void* Obj)
	{
		((USafeZone*)Obj)->PadLeft = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USafeZone_Statics::NewProp_PadLeft = { "PadLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, &USafeZone::SetPadLeft_WrapperImpl, &USafeZone::GetPadLeft_WrapperImpl, sizeof(bool), sizeof(USafeZone), &Z_Construct_UClass_USafeZone_Statics::NewProp_PadLeft_SetBit, METADATA_PARAMS(Z_Construct_UClass_USafeZone_Statics::NewProp_PadLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USafeZone_Statics::NewProp_PadLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZone_Statics::NewProp_PadRight_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "Comment", "/** If this safe zone should pad for the right side of the screen's safe zone */" },
		{ "ModuleRelativePath", "Public/Components/SafeZone.h" },
		{ "ToolTip", "If this safe zone should pad for the right side of the screen's safe zone" },
	};
#endif
	void Z_Construct_UClass_USafeZone_Statics::NewProp_PadRight_SetBit(void* Obj)
	{
		((USafeZone*)Obj)->PadRight = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USafeZone_Statics::NewProp_PadRight = { "PadRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, &USafeZone::SetPadRight_WrapperImpl, &USafeZone::GetPadRight_WrapperImpl, sizeof(bool), sizeof(USafeZone), &Z_Construct_UClass_USafeZone_Statics::NewProp_PadRight_SetBit, METADATA_PARAMS(Z_Construct_UClass_USafeZone_Statics::NewProp_PadRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USafeZone_Statics::NewProp_PadRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZone_Statics::NewProp_PadTop_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "Comment", "/** If this safe zone should pad for the top side of the screen's safe zone */" },
		{ "ModuleRelativePath", "Public/Components/SafeZone.h" },
		{ "ToolTip", "If this safe zone should pad for the top side of the screen's safe zone" },
	};
#endif
	void Z_Construct_UClass_USafeZone_Statics::NewProp_PadTop_SetBit(void* Obj)
	{
		((USafeZone*)Obj)->PadTop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USafeZone_Statics::NewProp_PadTop = { "PadTop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, &USafeZone::SetPadTop_WrapperImpl, &USafeZone::GetPadTop_WrapperImpl, sizeof(bool), sizeof(USafeZone), &Z_Construct_UClass_USafeZone_Statics::NewProp_PadTop_SetBit, METADATA_PARAMS(Z_Construct_UClass_USafeZone_Statics::NewProp_PadTop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USafeZone_Statics::NewProp_PadTop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USafeZone_Statics::NewProp_PadBottom_MetaData[] = {
		{ "Category", "SafeZone" },
		{ "Comment", "/** If this safe zone should pad for the bottom side of the screen's safe zone */" },
		{ "ModuleRelativePath", "Public/Components/SafeZone.h" },
		{ "ToolTip", "If this safe zone should pad for the bottom side of the screen's safe zone" },
	};
#endif
	void Z_Construct_UClass_USafeZone_Statics::NewProp_PadBottom_SetBit(void* Obj)
	{
		((USafeZone*)Obj)->PadBottom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USafeZone_Statics::NewProp_PadBottom = { "PadBottom", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, &USafeZone::SetPadBottom_WrapperImpl, &USafeZone::GetPadBottom_WrapperImpl, sizeof(bool), sizeof(USafeZone), &Z_Construct_UClass_USafeZone_Statics::NewProp_PadBottom_SetBit, METADATA_PARAMS(Z_Construct_UClass_USafeZone_Statics::NewProp_PadBottom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USafeZone_Statics::NewProp_PadBottom_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USafeZone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZone_Statics::NewProp_PadLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZone_Statics::NewProp_PadRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZone_Statics::NewProp_PadTop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USafeZone_Statics::NewProp_PadBottom,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USafeZone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USafeZone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USafeZone_Statics::ClassParams = {
		&USafeZone::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USafeZone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USafeZone_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USafeZone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USafeZone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USafeZone()
	{
		if (!Z_Registration_Info_UClass_USafeZone.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USafeZone.OuterSingleton, Z_Construct_UClass_USafeZone_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USafeZone.OuterSingleton;
	}
	template<> UMG_API UClass* StaticClass<USafeZone>()
	{
		return USafeZone::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USafeZone);
	USafeZone::~USafeZone() {}
	struct Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USafeZone, USafeZone::StaticClass, TEXT("USafeZone"), &Z_Registration_Info_UClass_USafeZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USafeZone), 488821907U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_2903541314(TEXT("/Script/UMG"),
		Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Source_Runtime_UMG_Public_Components_SafeZone_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
