// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "d3fragv3/Public/D3fragCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeD3fragCharacter() {}

// Begin Cross Module References
D3FRAGV3_API UClass* Z_Construct_UClass_AD3fragCharacter();
D3FRAGV3_API UClass* Z_Construct_UClass_AD3fragCharacter_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_d3fragv3();
// End Cross Module References

// Begin Class AD3fragCharacter
void AD3fragCharacter::StaticRegisterNativesAD3fragCharacter()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AD3fragCharacter);
UClass* Z_Construct_UClass_AD3fragCharacter_NoRegister()
{
	return AD3fragCharacter::StaticClass();
}
struct Z_Construct_UClass_AD3fragCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "D3fragCharacter.h" },
		{ "ModuleRelativePath", "Public/D3fragCharacter.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AD3fragCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AD3fragCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_d3fragv3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AD3fragCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AD3fragCharacter_Statics::ClassParams = {
	&AD3fragCharacter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AD3fragCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AD3fragCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AD3fragCharacter()
{
	if (!Z_Registration_Info_UClass_AD3fragCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AD3fragCharacter.OuterSingleton, Z_Construct_UClass_AD3fragCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AD3fragCharacter.OuterSingleton;
}
template<> D3FRAGV3_API UClass* StaticClass<AD3fragCharacter>()
{
	return AD3fragCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AD3fragCharacter);
AD3fragCharacter::~AD3fragCharacter() {}
// End Class AD3fragCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_phili_Documents_Unreal_Projects_d3fragv3_Source_d3fragv3_Public_D3fragCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AD3fragCharacter, AD3fragCharacter::StaticClass, TEXT("AD3fragCharacter"), &Z_Registration_Info_UClass_AD3fragCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AD3fragCharacter), 3048436852U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_phili_Documents_Unreal_Projects_d3fragv3_Source_d3fragv3_Public_D3fragCharacter_h_2467323066(TEXT("/Script/d3fragv3"),
	Z_CompiledInDeferFile_FID_Users_phili_Documents_Unreal_Projects_d3fragv3_Source_d3fragv3_Public_D3fragCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_phili_Documents_Unreal_Projects_d3fragv3_Source_d3fragv3_Public_D3fragCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
