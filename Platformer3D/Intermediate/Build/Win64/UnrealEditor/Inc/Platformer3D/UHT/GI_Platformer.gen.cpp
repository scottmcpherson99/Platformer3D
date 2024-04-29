// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer3D/Public/Core/GameSettings/GI_Platformer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGI_Platformer() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	PLATFORMER3D_API UClass* Z_Construct_UClass_UGI_Platformer();
	PLATFORMER3D_API UClass* Z_Construct_UClass_UGI_Platformer_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer3D();
// End Cross Module References
	DEFINE_FUNCTION(UGI_Platformer::execGetLastFocusedButton)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UButton**)Z_Param__Result=P_THIS->GetLastFocusedButton();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGI_Platformer::execSetLastFocusedButton)
	{
		P_GET_OBJECT(UButton,Z_Param_NewButtonRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLastFocusedButton(Z_Param_NewButtonRef);
		P_NATIVE_END;
	}
	void UGI_Platformer::StaticRegisterNativesUGI_Platformer()
	{
		UClass* Class = UGI_Platformer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetLastFocusedButton", &UGI_Platformer::execGetLastFocusedButton },
			{ "SetLastFocusedButton", &UGI_Platformer::execSetLastFocusedButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGI_Platformer_GetLastFocusedButton_Statics
	{
		struct GI_Platformer_eventGetLastFocusedButton_Parms
		{
			UButton* ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGI_Platformer_GetLastFocusedButton_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGI_Platformer_GetLastFocusedButton_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GI_Platformer_eventGetLastFocusedButton_Parms, ReturnValue), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGI_Platformer_GetLastFocusedButton_Statics::NewProp_ReturnValue_MetaData), Z_Construct_UFunction_UGI_Platformer_GetLastFocusedButton_Statics::NewProp_ReturnValue_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGI_Platformer_GetLastFocusedButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGI_Platformer_GetLastFocusedButton_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGI_Platformer_GetLastFocusedButton_Statics::Function_MetaDataParams[] = {
		{ "Category", "Focus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// return the reference of the last focused button\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/GameSettings/GI_Platformer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "return the reference of the last focused button" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGI_Platformer_GetLastFocusedButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGI_Platformer, nullptr, "GetLastFocusedButton", nullptr, nullptr, Z_Construct_UFunction_UGI_Platformer_GetLastFocusedButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGI_Platformer_GetLastFocusedButton_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGI_Platformer_GetLastFocusedButton_Statics::GI_Platformer_eventGetLastFocusedButton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGI_Platformer_GetLastFocusedButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGI_Platformer_GetLastFocusedButton_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGI_Platformer_GetLastFocusedButton_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGI_Platformer_GetLastFocusedButton_Statics::GI_Platformer_eventGetLastFocusedButton_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGI_Platformer_GetLastFocusedButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGI_Platformer_GetLastFocusedButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGI_Platformer_SetLastFocusedButton_Statics
	{
		struct GI_Platformer_eventSetLastFocusedButton_Parms
		{
			UButton* NewButtonRef;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewButtonRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewButtonRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGI_Platformer_SetLastFocusedButton_Statics::NewProp_NewButtonRef_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGI_Platformer_SetLastFocusedButton_Statics::NewProp_NewButtonRef = { "NewButtonRef", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GI_Platformer_eventSetLastFocusedButton_Parms, NewButtonRef), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGI_Platformer_SetLastFocusedButton_Statics::NewProp_NewButtonRef_MetaData), Z_Construct_UFunction_UGI_Platformer_SetLastFocusedButton_Statics::NewProp_NewButtonRef_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGI_Platformer_SetLastFocusedButton_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGI_Platformer_SetLastFocusedButton_Statics::NewProp_NewButtonRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGI_Platformer_SetLastFocusedButton_Statics::Function_MetaDataParams[] = {
		{ "Category", "Focus" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// set the new reference for the last focused button\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/GameSettings/GI_Platformer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "set the new reference for the last focused button" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGI_Platformer_SetLastFocusedButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGI_Platformer, nullptr, "SetLastFocusedButton", nullptr, nullptr, Z_Construct_UFunction_UGI_Platformer_SetLastFocusedButton_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGI_Platformer_SetLastFocusedButton_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGI_Platformer_SetLastFocusedButton_Statics::GI_Platformer_eventSetLastFocusedButton_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGI_Platformer_SetLastFocusedButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGI_Platformer_SetLastFocusedButton_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGI_Platformer_SetLastFocusedButton_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UGI_Platformer_SetLastFocusedButton_Statics::GI_Platformer_eventSetLastFocusedButton_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UGI_Platformer_SetLastFocusedButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGI_Platformer_SetLastFocusedButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGI_Platformer);
	UClass* Z_Construct_UClass_UGI_Platformer_NoRegister()
	{
		return UGI_Platformer::StaticClass();
	}
	struct Z_Construct_UClass_UGI_Platformer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGI_Platformer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer3D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGI_Platformer_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UGI_Platformer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGI_Platformer_GetLastFocusedButton, "GetLastFocusedButton" }, // 2972449383
		{ &Z_Construct_UFunction_UGI_Platformer_SetLastFocusedButton, "SetLastFocusedButton" }, // 2404727761
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGI_Platformer_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGI_Platformer_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/GameSettings/GI_Platformer.h" },
		{ "ModuleRelativePath", "Public/Core/GameSettings/GI_Platformer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGI_Platformer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGI_Platformer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UGI_Platformer_Statics::ClassParams = {
		&UGI_Platformer::StaticClass,
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
		0x009000A8u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGI_Platformer_Statics::Class_MetaDataParams), Z_Construct_UClass_UGI_Platformer_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UGI_Platformer()
	{
		if (!Z_Registration_Info_UClass_UGI_Platformer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGI_Platformer.OuterSingleton, Z_Construct_UClass_UGI_Platformer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UGI_Platformer.OuterSingleton;
	}
	template<> PLATFORMER3D_API UClass* StaticClass<UGI_Platformer>()
	{
		return UGI_Platformer::StaticClass();
	}
	UGI_Platformer::UGI_Platformer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGI_Platformer);
	UGI_Platformer::~UGI_Platformer() {}
	struct Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GI_Platformer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GI_Platformer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UGI_Platformer, UGI_Platformer::StaticClass, TEXT("UGI_Platformer"), &Z_Registration_Info_UClass_UGI_Platformer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGI_Platformer), 2621636084U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GI_Platformer_h_414907286(TEXT("/Script/Platformer3D"),
		Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GI_Platformer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GI_Platformer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
