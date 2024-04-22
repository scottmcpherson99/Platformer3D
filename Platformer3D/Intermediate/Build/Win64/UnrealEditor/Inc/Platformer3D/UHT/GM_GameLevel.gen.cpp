// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer3D/Public/Core/GameSettings/GM_GameLevel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGM_GameLevel() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	PLATFORMER3D_API UClass* Z_Construct_UClass_AGM_GameLevel();
	PLATFORMER3D_API UClass* Z_Construct_UClass_AGM_GameLevel_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer3D();
// End Cross Module References
	void AGM_GameLevel::StaticRegisterNativesAGM_GameLevel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGM_GameLevel);
	UClass* Z_Construct_UClass_AGM_GameLevel_NoRegister()
	{
		return AGM_GameLevel::StaticClass();
	}
	struct Z_Construct_UClass_AGM_GameLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGM_GameLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer3D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGM_GameLevel_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGM_GameLevel_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Core/GameSettings/GM_GameLevel.h" },
		{ "ModuleRelativePath", "Public/Core/GameSettings/GM_GameLevel.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGM_GameLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGM_GameLevel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGM_GameLevel_Statics::ClassParams = {
		&AGM_GameLevel::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGM_GameLevel_Statics::Class_MetaDataParams), Z_Construct_UClass_AGM_GameLevel_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AGM_GameLevel()
	{
		if (!Z_Registration_Info_UClass_AGM_GameLevel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGM_GameLevel.OuterSingleton, Z_Construct_UClass_AGM_GameLevel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGM_GameLevel.OuterSingleton;
	}
	template<> PLATFORMER3D_API UClass* StaticClass<AGM_GameLevel>()
	{
		return AGM_GameLevel::StaticClass();
	}
	AGM_GameLevel::AGM_GameLevel(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGM_GameLevel);
	AGM_GameLevel::~AGM_GameLevel() {}
	struct Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GM_GameLevel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GM_GameLevel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGM_GameLevel, AGM_GameLevel::StaticClass, TEXT("AGM_GameLevel"), &Z_Registration_Info_UClass_AGM_GameLevel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGM_GameLevel), 2457321561U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GM_GameLevel_h_3339969326(TEXT("/Script/Platformer3D"),
		Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GM_GameLevel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GM_GameLevel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
