// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer3D/Public/Core/Characters/Player/PC_Player.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePC_Player() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	PLATFORMER3D_API UClass* Z_Construct_UClass_APC_Player();
	PLATFORMER3D_API UClass* Z_Construct_UClass_APC_Player_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer3D();
// End Cross Module References
	void APC_Player::StaticRegisterNativesAPC_Player()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APC_Player);
	UClass* Z_Construct_UClass_APC_Player_NoRegister()
	{
		return APC_Player::StaticClass();
	}
	struct Z_Construct_UClass_APC_Player_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APC_Player_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer3D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APC_Player_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APC_Player_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Core/Characters/Player/PC_Player.h" },
		{ "ModuleRelativePath", "Public/Core/Characters/Player/PC_Player.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APC_Player_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APC_Player>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_APC_Player_Statics::ClassParams = {
		&APC_Player::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APC_Player_Statics::Class_MetaDataParams), Z_Construct_UClass_APC_Player_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_APC_Player()
	{
		if (!Z_Registration_Info_UClass_APC_Player.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APC_Player.OuterSingleton, Z_Construct_UClass_APC_Player_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_APC_Player.OuterSingleton;
	}
	template<> PLATFORMER3D_API UClass* StaticClass<APC_Player>()
	{
		return APC_Player::StaticClass();
	}
	APC_Player::APC_Player(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(APC_Player);
	APC_Player::~APC_Player() {}
	struct Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_PC_Player_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_PC_Player_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_APC_Player, APC_Player::StaticClass, TEXT("APC_Player"), &Z_Registration_Info_UClass_APC_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APC_Player), 1475270037U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_PC_Player_h_2149570595(TEXT("/Script/Platformer3D"),
		Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_PC_Player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Player_PC_Player_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
