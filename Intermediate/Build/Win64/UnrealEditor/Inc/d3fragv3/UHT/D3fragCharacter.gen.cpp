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
#if !UE_BUILD_SHIPPING
		{ "Comment", "//// Delegate for when stats based on integers are changed.\n//DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIntStatUpdated, int32, OldValue, int32, NewValue, int32, MaxValue);\n//\n//// Delegate for when the player dies\n//DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerIsDead);\n//\n//// Delegate for when stats based on floats are changed.\n//DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFloatStatUpdated, float, OldValue, float, NewValue, float, MaxValue);\n//\n//// Different actions involving the key wallet.\n//UENUM(BlueprintType)\n//enum class EPlayerItemAction : uint8\n//{\n//\x09""AddItem UMETA(Tooltip = \"Attempt to add an item to player's inventory.\"),\n//\x09RemoveItem UMETA(Tooltip = \"Attempt to remove an item from player's inventory.\"),\n//\x09HasItem UMETA(Tooltip = \"Check if the player has a specific item.\")\n//};\n//\n//DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FInventoryAction, FString, ItemString, EPlayerItemAction, ItemAction, bool, IsSuccess);\n" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "D3fragCharacter.h" },
		{ "ModuleRelativePath", "Public/D3fragCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "/ Delegate for when stats based on integers are changed.\nDECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIntStatUpdated, int32, OldValue, int32, NewValue, int32, MaxValue);\n\n/ Delegate for when the player dies\nDECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerIsDead);\n\n/ Delegate for when stats based on floats are changed.\nDECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFloatStatUpdated, float, OldValue, float, NewValue, float, MaxValue);\n\n/ Different actions involving the key wallet.\nUENUM(BlueprintType)\nenum class EPlayerItemAction : uint8\n{\n       AddItem UMETA(Tooltip = \"Attempt to add an item to player's inventory.\"),\n       RemoveItem UMETA(Tooltip = \"Attempt to remove an item from player's inventory.\"),\n       HasItem UMETA(Tooltip = \"Check if the player has a specific item.\")\n};\n\nDECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FInventoryAction, FString, ItemString, EPlayerItemAction, ItemAction, bool, IsSuccess);" },
#endif
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
		{ Z_Construct_UClass_AD3fragCharacter, AD3fragCharacter::StaticClass, TEXT("AD3fragCharacter"), &Z_Registration_Info_UClass_AD3fragCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AD3fragCharacter), 1871154307U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_phili_Documents_Unreal_Projects_d3fragv3_Source_d3fragv3_Public_D3fragCharacter_h_992731475(TEXT("/Script/d3fragv3"),
	Z_CompiledInDeferFile_FID_Users_phili_Documents_Unreal_Projects_d3fragv3_Source_d3fragv3_Public_D3fragCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_phili_Documents_Unreal_Projects_d3fragv3_Source_d3fragv3_Public_D3fragCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
