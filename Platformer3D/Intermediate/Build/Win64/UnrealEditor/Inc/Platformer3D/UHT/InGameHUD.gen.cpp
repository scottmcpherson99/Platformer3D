// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer3D/Public/UI/InGame/InGameHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInGameHUD() {}
// Cross Module References
	PLATFORMER3D_API UClass* Z_Construct_UClass_UBaseUserWidget();
	PLATFORMER3D_API UClass* Z_Construct_UClass_UInGameHUD();
	PLATFORMER3D_API UClass* Z_Construct_UClass_UInGameHUD_NoRegister();
	PLATFORMER3D_API UClass* Z_Construct_UClass_UInGameSliderStat_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer3D();
// End Cross Module References
	DEFINE_FUNCTION(UInGameHUD::execUpdateManaBar)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Percentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateManaBar(Z_Param_Percentage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInGameHUD::execUpdateHealthBar)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Percentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHealthBar(Z_Param_Percentage);
		P_NATIVE_END;
	}
	void UInGameHUD::StaticRegisterNativesUInGameHUD()
	{
		UClass* Class = UInGameHUD::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateHealthBar", &UInGameHUD::execUpdateHealthBar },
			{ "UpdateManaBar", &UInGameHUD::execUpdateManaBar },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInGameHUD_UpdateHealthBar_Statics
	{
		struct InGameHUD_eventUpdateHealthBar_Parms
		{
			float Percentage;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Percentage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInGameHUD_UpdateHealthBar_Statics::NewProp_Percentage = { "Percentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InGameHUD_eventUpdateHealthBar_Parms, Percentage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInGameHUD_UpdateHealthBar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInGameHUD_UpdateHealthBar_Statics::NewProp_Percentage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInGameHUD_UpdateHealthBar_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------------------------------- Progress Bars\n// update the health progress bar\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/InGame/InGameHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-------------------------------------------------------------------------- Progress Bars\n update the health progress bar" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInGameHUD_UpdateHealthBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameHUD, nullptr, "UpdateHealthBar", nullptr, nullptr, Z_Construct_UFunction_UInGameHUD_UpdateHealthBar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameHUD_UpdateHealthBar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInGameHUD_UpdateHealthBar_Statics::InGameHUD_eventUpdateHealthBar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameHUD_UpdateHealthBar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInGameHUD_UpdateHealthBar_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameHUD_UpdateHealthBar_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInGameHUD_UpdateHealthBar_Statics::InGameHUD_eventUpdateHealthBar_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInGameHUD_UpdateHealthBar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInGameHUD_UpdateHealthBar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInGameHUD_UpdateManaBar_Statics
	{
		struct InGameHUD_eventUpdateManaBar_Parms
		{
			float Percentage;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Percentage;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UInGameHUD_UpdateManaBar_Statics::NewProp_Percentage = { "Percentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InGameHUD_eventUpdateManaBar_Parms, Percentage), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInGameHUD_UpdateManaBar_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInGameHUD_UpdateManaBar_Statics::NewProp_Percentage,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInGameHUD_UpdateManaBar_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// update the health progress bar\n" },
#endif
		{ "ModuleRelativePath", "Public/UI/InGame/InGameHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "update the health progress bar" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInGameHUD_UpdateManaBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInGameHUD, nullptr, "UpdateManaBar", nullptr, nullptr, Z_Construct_UFunction_UInGameHUD_UpdateManaBar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameHUD_UpdateManaBar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInGameHUD_UpdateManaBar_Statics::InGameHUD_eventUpdateManaBar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameHUD_UpdateManaBar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInGameHUD_UpdateManaBar_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInGameHUD_UpdateManaBar_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UInGameHUD_UpdateManaBar_Statics::InGameHUD_eventUpdateManaBar_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UInGameHUD_UpdateManaBar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInGameHUD_UpdateManaBar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInGameHUD);
	UClass* Z_Construct_UClass_UInGameHUD_NoRegister()
	{
		return UInGameHUD::StaticClass();
	}
	struct Z_Construct_UClass_UInGameHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealthProgressBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealthProgressBar;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ManaProgressBar_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ManaProgressBar;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInGameHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer3D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInGameHUD_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UInGameHUD_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInGameHUD_UpdateHealthBar, "UpdateHealthBar" }, // 825628978
		{ &Z_Construct_UFunction_UInGameHUD_UpdateManaBar, "UpdateManaBar" }, // 1649941127
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInGameHUD_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameHUD_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/InGame/InGameHUD.h" },
		{ "ModuleRelativePath", "Public/UI/InGame/InGameHUD.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameHUD_Statics::NewProp_HealthProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------------------------------- Components\n// health progress bar\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InGame/InGameHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-------------------------------------------------------------------------- Components\n health progress bar" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInGameHUD_Statics::NewProp_HealthProgressBar = { "HealthProgressBar", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInGameHUD, HealthProgressBar), Z_Construct_UClass_UInGameSliderStat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInGameHUD_Statics::NewProp_HealthProgressBar_MetaData), Z_Construct_UClass_UInGameHUD_Statics::NewProp_HealthProgressBar_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInGameHUD_Statics::NewProp_ManaProgressBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Button" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// mana progress bar\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UI/InGame/InGameHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "mana progress bar" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInGameHUD_Statics::NewProp_ManaProgressBar = { "ManaProgressBar", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInGameHUD, ManaProgressBar), Z_Construct_UClass_UInGameSliderStat_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInGameHUD_Statics::NewProp_ManaProgressBar_MetaData), Z_Construct_UClass_UInGameHUD_Statics::NewProp_ManaProgressBar_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInGameHUD_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameHUD_Statics::NewProp_HealthProgressBar,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInGameHUD_Statics::NewProp_ManaProgressBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInGameHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInGameHUD>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UInGameHUD_Statics::ClassParams = {
		&UInGameHUD::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInGameHUD_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInGameHUD_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInGameHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_UInGameHUD_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInGameHUD_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UInGameHUD()
	{
		if (!Z_Registration_Info_UClass_UInGameHUD.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInGameHUD.OuterSingleton, Z_Construct_UClass_UInGameHUD_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UInGameHUD.OuterSingleton;
	}
	template<> PLATFORMER3D_API UClass* StaticClass<UInGameHUD>()
	{
		return UInGameHUD::StaticClass();
	}
	UInGameHUD::UInGameHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInGameHUD);
	UInGameHUD::~UInGameHUD() {}
	struct Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_UI_InGame_InGameHUD_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_UI_InGame_InGameHUD_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UInGameHUD, UInGameHUD::StaticClass, TEXT("UInGameHUD"), &Z_Registration_Info_UClass_UInGameHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInGameHUD), 3929299005U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_UI_InGame_InGameHUD_h_3636565989(TEXT("/Script/Platformer3D"),
		Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_UI_InGame_InGameHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_UI_InGame_InGameHUD_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
