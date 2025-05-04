// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "d3fragv3/Public/D3fragHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeD3fragHUD() {}

// Begin Cross Module References
D3FRAGV3_API UClass* Z_Construct_UClass_AD3fragHUD();
D3FRAGV3_API UClass* Z_Construct_UClass_AD3fragHUD_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
UPackage* Z_Construct_UPackage__Script_d3fragv3();
// End Cross Module References

// Begin Class AD3fragHUD
void AD3fragHUD::StaticRegisterNativesAD3fragHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AD3fragHUD);
UClass* Z_Construct_UClass_AD3fragHUD_NoRegister()
{
	return AD3fragHUD::StaticClass();
}
struct Z_Construct_UClass_AD3fragHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "D3fragHUD.h" },
		{ "ModuleRelativePath", "Public/D3fragHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AD3fragHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AD3fragHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_d3fragv3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AD3fragHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AD3fragHUD_Statics::ClassParams = {
	&AD3fragHUD::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AD3fragHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AD3fragHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AD3fragHUD()
{
	if (!Z_Registration_Info_UClass_AD3fragHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AD3fragHUD.OuterSingleton, Z_Construct_UClass_AD3fragHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AD3fragHUD.OuterSingleton;
}
template<> D3FRAGV3_API UClass* StaticClass<AD3fragHUD>()
{
	return AD3fragHUD::StaticClass();
}
AD3fragHUD::AD3fragHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AD3fragHUD);
AD3fragHUD::~AD3fragHUD() {}
// End Class AD3fragHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_phili_Documents_Unreal_Projects_d3fragv3_Source_d3fragv3_Public_D3fragHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AD3fragHUD, AD3fragHUD::StaticClass, TEXT("AD3fragHUD"), &Z_Registration_Info_UClass_AD3fragHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AD3fragHUD), 561317375U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_phili_Documents_Unreal_Projects_d3fragv3_Source_d3fragv3_Public_D3fragHUD_h_55801056(TEXT("/Script/d3fragv3"),
	Z_CompiledInDeferFile_FID_Users_phili_Documents_Unreal_Projects_d3fragv3_Source_d3fragv3_Public_D3fragHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_phili_Documents_Unreal_Projects_d3fragv3_Source_d3fragv3_Public_D3fragHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
