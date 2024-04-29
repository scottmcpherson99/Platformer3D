// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer3D/Public/Core/Characters/Player/HUD_Player.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHUD_Player() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	PLATFORMER3D_API UClass* Z_Construct_UClass_AHUD_Player();
	PLATFORMER3D_API UClass* Z_Construct_UClass_AHUD_Player_NoRegister();
	PLATFORMER3D_API UClass* Z_Construct_UClass_UInGameHUD_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer3D();
// End Cross Module References
	DEFINE_FUNCTION(AHUD_Player::execHideInGameHUD)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideInGameHUD();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AHUD_Player::execShowInGameHUD)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowInGameHUD();
		P_NATIVE_END;
	}
	void AHUD_Player::StaticRegisterNativesAHUD_Player()
	{
		UClass* Class = AHUD_Player::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HideInGameHUD", &AHUD_Player::execHideInGameHUD },
			{ "ShowInGameHUD", &AHUD_Player::execShowInGameHUD },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHUD_Player_HideInGameHUD_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_Player_HideInGameHUD_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// hide the hud widget\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Characters/Player/HUD_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "hide the hud widget" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_Player_HideInGameHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD_Player, nullptr, "HideInGameHUD", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_Player_HideInGameHUD_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHUD_Player_HideInGameHUD_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AHUD_Player_HideInGameHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHUD_Player_HideInGameHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_Player_ShowInGameHUD_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_Player_ShowInGameHUD_Statics::Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------------------------------- Show/Hide Widgets\n// show the hud widget\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Characters/Player/HUD_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-------------------------------------------------------------------------- Show/Hide Widgets\n show the hud widget" },
#endif
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_Player_ShowInGameHUD_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD_Player, nullptr, "ShowInGameHUD", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AHUD_Player_ShowInGameHUD_Statics::Function_MetaDataParams), Z_Construct_UFunction_AHUD_Player_ShowInGameHUD_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AHUD_Player_ShowInGameHUD()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AHUD_Player_ShowInGameHUD_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHUD_Player);
	UClass* Z_Construct_UClass_AHUD_Player_NoRegister()
	{
		return AHUD_Player::StaticClass();
	}
	struct Z_Construct_UClass_AHUD_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_HUDWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HUDWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HUDWidget;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHUD_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer3D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Player_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AHUD_Player_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHUD_Player_HideInGameHUD, "HideInGameHUD" }, // 580704224
		{ &Z_Construct_UFunction_AHUD_Player_ShowInGameHUD, "ShowInGameHUD" }, // 882427704
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Player_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Player_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Core/Characters/Player/HUD_Player.h" },
		{ "ModuleRelativePath", "Public/Core/Characters/Player/HUD_Player.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Player_Statics::NewProp_HUDWidgetClass_MetaData[] = {
		{ "Category", "Widgets" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------------------------------- Widgets\n// create a reference to the hud widget\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Characters/Player/HUD_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-------------------------------------------------------------------------- Widgets\n create a reference to the hud widget" },
#endif
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AHUD_Player_Statics::NewProp_HUDWidgetClass = { "HUDWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHUD_Player, HUDWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UInGameHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Player_Statics::NewProp_HUDWidgetClass_MetaData), Z_Construct_UClass_AHUD_Player_Statics::NewProp_HUDWidgetClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_Player_Statics::NewProp_HUDWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// keep a pointer to the hud wudget\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Core/Characters/Player/HUD_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "keep a pointer to the hud wudget" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHUD_Player_Statics::NewProp_HUDWidget = { "HUDWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHUD_Player, HUDWidget), Z_Construct_UClass_UInGameHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Player_Statics::NewProp_HUDWidget_MetaData), Z_Construct_UClass_AHUD_Player_Statics::NewProp_HUDWidget_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHUD_Player_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Player_Statics::NewProp_HUDWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_Player_Statics::NewProp_HUDWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHUD_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHUD_Player>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHUD_Player_Statics::ClassParams = {
		&AHUD_Player::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHUD_Player_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Player_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Player_Statics::Class_MetaDataParams), Z_Construct_UClass_AHUD_Player_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Player_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AHUD_Player()
	{
		if (!Z_Registration_Info_UClass_AHUD_Player.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHUD_Player.OuterSingleton, Z_Construct_UClass_AHUD_Player_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHUD_Player.OuterSingleton;
	}
	template<> PLATFORMER3D_API UClass* StaticClass<AHUD_Player>()
	{
		return AHUD_Player::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHUD_Player);
	AHUD_Player::~AHUD_Player() {}
	struct Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_HUD_Player_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_HUD_Player_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHUD_Player, AHUD_Player::StaticClass, TEXT("AHUD_Player"), &Z_Registration_Info_UClass_AHUD_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHUD_Player), 3282765942U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_HUD_Player_h_3508988237(TEXT("/Script/Platformer3D"),
		Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_HUD_Player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_HUD_Player_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
