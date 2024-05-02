// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlatformer3D_init() {}
	PLATFORMER3D_API UFunction* Z_Construct_UDelegateFunction_Platformer3D_OnCooldownChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Platformer3D;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Platformer3D()
	{
		if (!Z_Registration_Info_UPackage__Script_Platformer3D.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Platformer3D_OnCooldownChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Platformer3D",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xAF06D5B8,
				0xADC7EAC3,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Platformer3D.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Platformer3D.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Platformer3D(Z_Construct_UPackage__Script_Platformer3D, TEXT("/Script/Platformer3D"), Z_Registration_Info_UPackage__Script_Platformer3D, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xAF06D5B8, 0xADC7EAC3));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
