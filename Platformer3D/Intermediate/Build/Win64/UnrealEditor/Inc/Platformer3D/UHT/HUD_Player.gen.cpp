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
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	PLATFORMER3D_API UClass* Z_Construct_UClass_AHUD_Player();
	PLATFORMER3D_API UClass* Z_Construct_UClass_AHUD_Player_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer3D();
// End Cross Module References
	void AHUD_Player::StaticRegisterNativesAHUD_Player()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHUD_Player);
	UClass* Z_Construct_UClass_AHUD_Player_NoRegister()
	{
		return AHUD_Player::StaticClass();
	}
	struct Z_Construct_UClass_AHUD_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHUD_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer3D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Player_Statics::DependentSingletons) < 16);
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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHUD_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHUD_Player>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHUD_Player_Statics::ClassParams = {
		&AHUD_Player::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHUD_Player_Statics::Class_MetaDataParams), Z_Construct_UClass_AHUD_Player_Statics::Class_MetaDataParams)
	};
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
	AHUD_Player::AHUD_Player(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHUD_Player);
	AHUD_Player::~AHUD_Player() {}
	struct Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_HUD_Player_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_HUD_Player_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHUD_Player, AHUD_Player::StaticClass, TEXT("AHUD_Player"), &Z_Registration_Info_UClass_AHUD_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHUD_Player), 3309463453U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_HUD_Player_h_2287827232(TEXT("/Script/Platformer3D"),
		Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_HUD_Player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_HUD_Player_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
