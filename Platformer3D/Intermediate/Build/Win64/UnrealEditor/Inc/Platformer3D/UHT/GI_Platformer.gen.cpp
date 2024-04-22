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
	UPackage* Z_Construct_UPackage__Script_Platformer3D();
// End Cross Module References
	void UGI_Platformer::StaticRegisterNativesUGI_Platformer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGI_Platformer);
	UClass* Z_Construct_UClass_UGI_Platformer_NoRegister()
	{
		return UGI_Platformer::StaticClass();
	}
	struct Z_Construct_UClass_UGI_Platformer_Statics
	{
		static UObject* (*const DependentSingletons[])();
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
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
		{ Z_Construct_UClass_UGI_Platformer, UGI_Platformer::StaticClass, TEXT("UGI_Platformer"), &Z_Registration_Info_UClass_UGI_Platformer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGI_Platformer), 3774826759U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GI_Platformer_h_766063824(TEXT("/Script/Platformer3D"),
		Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GI_Platformer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_GameSettings_GI_Platformer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
