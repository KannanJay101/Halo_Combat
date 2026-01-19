// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Spartan.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeSpartan() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
HALO_COMBAT_API UClass* Z_Construct_UClass_ASpartan();
HALO_COMBAT_API UClass* Z_Construct_UClass_ASpartan_NoRegister();
UPackage* Z_Construct_UPackage__Script_Halo_Combat();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ASpartan *****************************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_ASpartan;
UClass* ASpartan::GetPrivateStaticClass()
{
	using TClass = ASpartan;
	if (!Z_Registration_Info_UClass_ASpartan.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("Spartan"),
			Z_Registration_Info_UClass_ASpartan.InnerSingleton,
			StaticRegisterNativesASpartan,
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
	return Z_Registration_Info_UClass_ASpartan.InnerSingleton;
}
UClass* Z_Construct_UClass_ASpartan_NoRegister()
{
	return ASpartan::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ASpartan_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Spartan.h" },
		{ "ModuleRelativePath", "Spartan.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class ASpartan constinit property declarations *********************************
// ********** End Class ASpartan constinit property declarations ***********************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpartan>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_ASpartan_Statics
UObject* (*const Z_Construct_UClass_ASpartan_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_Halo_Combat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartan_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpartan_Statics::ClassParams = {
	&ASpartan::StaticClass,
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
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ASpartan_Statics::Class_MetaDataParams), Z_Construct_UClass_ASpartan_Statics::Class_MetaDataParams)
};
void ASpartan::StaticRegisterNativesASpartan()
{
}
UClass* Z_Construct_UClass_ASpartan()
{
	if (!Z_Registration_Info_UClass_ASpartan.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpartan.OuterSingleton, Z_Construct_UClass_ASpartan_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ASpartan.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, ASpartan);
ASpartan::~ASpartan() {}
// ********** End Class ASpartan *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_Halo_Combat_Source_Halo_Combat_Spartan_h__Script_Halo_Combat_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ASpartan, ASpartan::StaticClass, TEXT("ASpartan"), &Z_Registration_Info_UClass_ASpartan, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpartan), 4001779117U) },
	};
}; // Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_Halo_Combat_Source_Halo_Combat_Spartan_h__Script_Halo_Combat_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_Halo_Combat_Source_Halo_Combat_Spartan_h__Script_Halo_Combat_3456297977{
	TEXT("/Script/Halo_Combat"),
	Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_Halo_Combat_Source_Halo_Combat_Spartan_h__Script_Halo_Combat_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_kanna_h0c0yc0_Documents_Unreal_Projects_Halo_Combat_Source_Halo_Combat_Spartan_h__Script_Halo_Combat_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
