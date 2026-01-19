// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHalo_Combat_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	HALO_COMBAT_API UFunction* Z_Construct_UDelegateFunction_Halo_Combat_BulletCountUpdatedDelegate__DelegateSignature();
	HALO_COMBAT_API UFunction* Z_Construct_UDelegateFunction_Halo_Combat_DamagedDelegate__DelegateSignature();
	HALO_COMBAT_API UFunction* Z_Construct_UDelegateFunction_Halo_Combat_PawnDeathDelegate__DelegateSignature();
	HALO_COMBAT_API UFunction* Z_Construct_UDelegateFunction_Halo_Combat_SprintStateChangedDelegate__DelegateSignature();
	HALO_COMBAT_API UFunction* Z_Construct_UDelegateFunction_Halo_Combat_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Halo_Combat;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Halo_Combat()
	{
		if (!Z_Registration_Info_UPackage__Script_Halo_Combat.OuterSingleton)
		{
		static UObject* (*const SingletonFuncArray[])() = {
			(UObject* (*)())Z_Construct_UDelegateFunction_Halo_Combat_BulletCountUpdatedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_Halo_Combat_DamagedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_Halo_Combat_PawnDeathDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_Halo_Combat_SprintStateChangedDelegate__DelegateSignature,
			(UObject* (*)())Z_Construct_UDelegateFunction_Halo_Combat_UpdateSprintMeterDelegate__DelegateSignature,
		};
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/Halo_Combat",
			SingletonFuncArray,
			UE_ARRAY_COUNT(SingletonFuncArray),
			PKG_CompiledIn | 0x00000000,
			0x51F356A5,
			0x5F107E24,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Halo_Combat.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_Halo_Combat.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Halo_Combat(Z_Construct_UPackage__Script_Halo_Combat, TEXT("/Script/Halo_Combat"), Z_Registration_Info_UPackage__Script_Halo_Combat, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x51F356A5, 0x5F107E24));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
