// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Halo_CombatCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeHalo_CombatCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
HALO_COMBAT_API UClass* Z_Construct_UClass_AHalo_CombatCameraManager();
HALO_COMBAT_API UClass* Z_Construct_UClass_AHalo_CombatCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_Halo_Combat();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHalo_CombatCameraManager ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AHalo_CombatCameraManager;
UClass* AHalo_CombatCameraManager::GetPrivateStaticClass()
{
	using TClass = AHalo_CombatCameraManager;
	if (!Z_Registration_Info_UClass_AHalo_CombatCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Halo_CombatCameraManager"),
			Z_Registration_Info_UClass_AHalo_CombatCameraManager.InnerSingleton,
			StaticRegisterNativesAHalo_CombatCameraManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AHalo_CombatCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AHalo_CombatCameraManager_NoRegister()
{
	return AHalo_CombatCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHalo_CombatCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "Halo_CombatCameraManager.h" },
		{ "ModuleRelativePath", "Halo_CombatCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AHalo_CombatCameraManager constinit property declarations ****************
// ********** End Class AHalo_CombatCameraManager constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHalo_CombatCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AHalo_CombatCameraManager_Statics
UObject* (*const Z_Construct_UClass_AHalo_CombatCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_Halo_Combat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHalo_CombatCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHalo_CombatCameraManager_Statics::ClassParams = {
	&AHalo_CombatCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHalo_CombatCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AHalo_CombatCameraManager_Statics::Class_MetaDataParams)
};
void AHalo_CombatCameraManager::StaticRegisterNativesAHalo_CombatCameraManager()
{
}
UClass* Z_Construct_UClass_AHalo_CombatCameraManager()
{
	if (!Z_Registration_Info_UClass_AHalo_CombatCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHalo_CombatCameraManager.OuterSingleton, Z_Construct_UClass_AHalo_CombatCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHalo_CombatCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AHalo_CombatCameraManager);
AHalo_CombatCameraManager::~AHalo_CombatCameraManager() {}
// ********** End Class AHalo_CombatCameraManager **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_Halo_Combat_Source_Halo_Combat_Halo_CombatCameraManager_h__Script_Halo_Combat_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHalo_CombatCameraManager, AHalo_CombatCameraManager::StaticClass, TEXT("AHalo_CombatCameraManager"), &Z_Registration_Info_UClass_AHalo_CombatCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHalo_CombatCameraManager), 1618386849U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_Halo_Combat_Source_Halo_Combat_Halo_CombatCameraManager_h__Script_Halo_Combat_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_Halo_Combat_Source_Halo_Combat_Halo_CombatCameraManager_h__Script_Halo_Combat_3995348659{
	TEXT("/Script/Halo_Combat"),
	Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_Halo_Combat_Source_Halo_Combat_Halo_CombatCameraManager_h__Script_Halo_Combat_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_Halo_Combat_Source_Halo_Combat_Halo_CombatCameraManager_h__Script_Halo_Combat_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
