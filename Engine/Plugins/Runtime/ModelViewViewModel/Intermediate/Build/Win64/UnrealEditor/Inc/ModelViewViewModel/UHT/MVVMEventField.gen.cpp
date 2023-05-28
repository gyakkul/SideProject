// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Types/MVVMEventField.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMVVMEventField() {}
// Cross Module References
	MODELVIEWVIEWMODEL_API UScriptStruct* Z_Construct_UScriptStruct_FMVVMEventField();
	UPackage* Z_Construct_UPackage__Script_ModelViewViewModel();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MVVMEventField;
class UScriptStruct* FMVVMEventField::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MVVMEventField.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MVVMEventField.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMVVMEventField, (UObject*)Z_Construct_UPackage__Script_ModelViewViewModel(), TEXT("MVVMEventField"));
	}
	return Z_Registration_Info_UScriptStruct_MVVMEventField.OuterSingleton;
}
template<> MODELVIEWVIEWMODEL_API UScriptStruct* StaticStruct<FMVVMEventField>()
{
	return FMVVMEventField::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FMVVMEventField_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMVVMEventField_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * Generic structure to notify when an event occurs.\n * \n * class UMyViewmodel : public UMVVMViewModelBase\n * {\n *   UPROPERTY(FieldNotify)\n *   FMVVMEventField SomeEvent;\n *\n *   void OnSomeEvent()\n *   {\n *     UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(SomeEvent);\n *   }\n * };\n};\n */" },
		{ "ModuleRelativePath", "Public/Types/MVVMEventField.h" },
		{ "ToolTip", "Generic structure to notify when an event occurs.\n\nclass UMyViewmodel : public UMVVMViewModelBase\n{\n  UPROPERTY(FieldNotify)\n  FMVVMEventField SomeEvent;\n\n  void OnSomeEvent()\n  {\n    UE_MVVM_BROADCAST_FIELD_VALUE_CHANGED(SomeEvent);\n  }\n};\n};" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMVVMEventField_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMVVMEventField>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMVVMEventField_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_ModelViewViewModel,
		nullptr,
		&NewStructOps,
		"MVVMEventField",
		sizeof(FMVVMEventField),
		alignof(FMVVMEventField),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMVVMEventField_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMVVMEventField_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMVVMEventField()
	{
		if (!Z_Registration_Info_UScriptStruct_MVVMEventField.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MVVMEventField.InnerSingleton, Z_Construct_UScriptStruct_FMVVMEventField_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_MVVMEventField.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMEventField_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMEventField_h_Statics::ScriptStructInfo[] = {
		{ FMVVMEventField::StaticStruct, Z_Construct_UScriptStruct_FMVVMEventField_Statics::NewStructOps, TEXT("MVVMEventField"), &Z_Registration_Info_UScriptStruct_MVVMEventField, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMVVMEventField), 3612837647U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMEventField_h_3162239260(TEXT("/Script/ModelViewViewModel"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMEventField_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_ModelViewViewModel_Source_ModelViewViewModel_Public_Types_MVVMEventField_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
