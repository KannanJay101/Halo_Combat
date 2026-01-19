// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Halo_CombatGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeHalo_CombatGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
HALO_COMBAT_API UClass* Z_Construct_UClass_AHalo_CombatGameMode();
HALO_COMBAT_API UClass* Z_Construct_UClass_AHalo_CombatGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Halo_Combat();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AHalo_CombatGameMode *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_AHalo_CombatGameMode;
UClass* AHalo_CombatGameMode::GetPrivateStaticClass()
{
	using TClass = AHalo_CombatGameMode;
	if (!Z_Registration_Info_UClass_AHalo_CombatGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Halo_CombatGameMode"),
			Z_Registration_Info_UClass_AHalo_CombatGameMode.InnerSingleton,
			StaticRegisterNativesAHalo_CombatGameMode,
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
	return Z_Registration_Info_UClass_AHalo_CombatGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AHalo_CombatGameMode_NoRegister()
{
	return AHalo_CombatGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHalo_CombatGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Halo_CombatGameMode.h" },
		{ "ModuleRelativePath", "Halo_CombatGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class AHalo_CombatGameMode constinit property declarations *********************
// ********** End Class AHalo_CombatGameMode constinit property declarations ***********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHalo_CombatGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_AHalo_CombatGameMode_Statics
UObject* (*const Z_Construct_UClass_AHalo_CombatGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Halo_Combat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHalo_CombatGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHalo_CombatGameMode_Statics::ClassParams = {
	&AHalo_CombatGameMode::StaticClass,
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
	0x008002ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHalo_CombatGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AHalo_CombatGameMode_Statics::Class_MetaDataParams)
};
void AHalo_CombatGameMode::StaticRegisterNativesAHalo_CombatGameMode()
{
}
UClass* Z_Construct_UClass_AHalo_CombatGameMode()
{
	if (!Z_Registration_Info_UClass_AHalo_CombatGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHalo_CombatGameMode.OuterSingleton, Z_Construct_UClass_AHalo_CombatGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHalo_CombatGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, AHalo_CombatGameMode);
AHalo_CombatGameMode::~AHalo_CombatGameMode() {}
// ********** End Class AHalo_CombatGameMode *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_Halo_Combat_Source_Halo_Combat_Halo_CombatGameMode_h__Script_Halo_Combat_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHalo_CombatGameMode, AHalo_CombatGameMode::StaticClass, TEXT("AHalo_CombatGameMode"), &Z_Registration_Info_UClass_AHalo_CombatGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHalo_CombatGameMode), 1921746423U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_Halo_Combat_Source_Halo_Combat_Halo_CombatGameMode_h__Script_Halo_Combat_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_Halo_Combat_Source_Halo_Combat_Halo_CombatGameMode_h__Script_Halo_Combat_4272393057{
	TEXT("/Script/Halo_Combat"),
	Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_Halo_Combat_Source_Halo_Combat_Halo_CombatGameMode_h__Script_Halo_Combat_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_Halo_Combat_Source_Halo_Combat_Halo_CombatGameMode_h__Script_Halo_Combat_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
