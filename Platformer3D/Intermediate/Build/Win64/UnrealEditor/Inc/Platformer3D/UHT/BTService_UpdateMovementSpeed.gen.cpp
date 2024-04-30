// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Platformer3D/Public/Core/Characters/Enemy/BasicEnemy/Services/BTService_UpdateMovementSpeed.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_UpdateMovementSpeed() {}
// Cross Module References
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	PLATFORMER3D_API UClass* Z_Construct_UClass_UBTService_UpdateMovementSpeed();
	PLATFORMER3D_API UClass* Z_Construct_UClass_UBTService_UpdateMovementSpeed_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Platformer3D();
// End Cross Module References
	void UBTService_UpdateMovementSpeed::StaticRegisterNativesUBTService_UpdateMovementSpeed()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBTService_UpdateMovementSpeed);
	UClass* Z_Construct_UClass_UBTService_UpdateMovementSpeed_NoRegister()
	{
		return UBTService_UpdateMovementSpeed::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_UpdateMovementSpeed_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MovementSpeed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_MovementSpeed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_UpdateMovementSpeed_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_Platformer3D,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateMovementSpeed_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_UpdateMovementSpeed_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Core/Characters/Enemy/BasicEnemy/Services/BTService_UpdateMovementSpeed.h" },
		{ "ModuleRelativePath", "Public/Core/Characters/Enemy/BasicEnemy/Services/BTService_UpdateMovementSpeed.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_UpdateMovementSpeed_Statics::NewProp_MovementSpeed_MetaData[] = {
		{ "Category", "Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//-------------------------------------------------------------------------- Attributes\n// check if we should focus\n" },
#endif
		{ "ModuleRelativePath", "Public/Core/Characters/Enemy/BasicEnemy/Services/BTService_UpdateMovementSpeed.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "-------------------------------------------------------------------------- Attributes\n check if we should focus" },
#endif
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTService_UpdateMovementSpeed_Statics::NewProp_MovementSpeed = { "MovementSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBTService_UpdateMovementSpeed, MovementSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateMovementSpeed_Statics::NewProp_MovementSpeed_MetaData), Z_Construct_UClass_UBTService_UpdateMovementSpeed_Statics::NewProp_MovementSpeed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_UpdateMovementSpeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_UpdateMovementSpeed_Statics::NewProp_MovementSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_UpdateMovementSpeed_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_UpdateMovementSpeed>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBTService_UpdateMovementSpeed_Statics::ClassParams = {
		&UBTService_UpdateMovementSpeed::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_UpdateMovementSpeed_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateMovementSpeed_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateMovementSpeed_Statics::Class_MetaDataParams), Z_Construct_UClass_UBTService_UpdateMovementSpeed_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_UpdateMovementSpeed_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBTService_UpdateMovementSpeed()
	{
		if (!Z_Registration_Info_UClass_UBTService_UpdateMovementSpeed.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBTService_UpdateMovementSpeed.OuterSingleton, Z_Construct_UClass_UBTService_UpdateMovementSpeed_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBTService_UpdateMovementSpeed.OuterSingleton;
	}
	template<> PLATFORMER3D_API UClass* StaticClass<UBTService_UpdateMovementSpeed>()
	{
		return UBTService_UpdateMovementSpeed::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_UpdateMovementSpeed);
	UBTService_UpdateMovementSpeed::~UBTService_UpdateMovementSpeed() {}
	struct Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Enemy_BasicEnemy_Services_BTService_UpdateMovementSpeed_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Enemy_BasicEnemy_Services_BTService_UpdateMovementSpeed_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBTService_UpdateMovementSpeed, UBTService_UpdateMovementSpeed::StaticClass, TEXT("UBTService_UpdateMovementSpeed"), &Z_Registration_Info_UClass_UBTService_UpdateMovementSpeed, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBTService_UpdateMovementSpeed), 274639300U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Enemy_BasicEnemy_Services_BTService_UpdateMovementSpeed_h_722230864(TEXT("/Script/Platformer3D"),
		Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Enemy_BasicEnemy_Services_BTService_UpdateMovementSpeed_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Platformer3D_Source_Platformer3D_Public_Core_Characters_Enemy_BasicEnemy_Services_BTService_UpdateMovementSpeed_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
