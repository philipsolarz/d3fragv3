// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "d3fragv3/Public/D3fragCharacterMovementComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeD3fragCharacterMovementComponent() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
D3FRAGV3_API UClass* Z_Construct_UClass_UD3fragCharacterMovementComponent();
D3FRAGV3_API UClass* Z_Construct_UClass_UD3fragCharacterMovementComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
UPackage* Z_Construct_UPackage__Script_d3fragv3();
// End Cross Module References

// Begin Class UD3fragCharacterMovementComponent
void UD3fragCharacterMovementComponent::StaticRegisterNativesUD3fragCharacterMovementComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UD3fragCharacterMovementComponent);
UClass* Z_Construct_UClass_UD3fragCharacterMovementComponent_NoRegister()
{
	return UD3fragCharacterMovementComponent::StaticClass();
}
struct Z_Construct_UClass_UD3fragCharacterMovementComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "D3fragCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/D3fragCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentInput_MetaData[] = {
		{ "Category", "Defrag Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Raw 2D input: X = forward/back, Y = strafe\n" },
#endif
		{ "ModuleRelativePath", "Public/D3fragCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Raw 2D input: X = forward/back, Y = strafe" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefragGroundFriction_MetaData[] = {
		{ "Category", "Defrag Physics" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Tweakable Defrag physics parameters\n" },
#endif
		{ "ModuleRelativePath", "Public/D3fragCharacterMovementComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tweakable Defrag physics parameters" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefragGroundAccel_MetaData[] = {
		{ "Category", "Defrag Physics" },
		{ "ModuleRelativePath", "Public/D3fragCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefragAirAccel_MetaData[] = {
		{ "Category", "Defrag Physics" },
		{ "ModuleRelativePath", "Public/D3fragCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefragAirControl_MetaData[] = {
		{ "Category", "Defrag Physics" },
		{ "ModuleRelativePath", "Public/D3fragCharacterMovementComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefragStrafeBoost_MetaData[] = {
		{ "Category", "Defrag Physics" },
		{ "ModuleRelativePath", "Public/D3fragCharacterMovementComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentInput;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefragGroundFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefragGroundAccel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefragAirAccel;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefragAirControl;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefragStrafeBoost;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UD3fragCharacterMovementComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UD3fragCharacterMovementComponent_Statics::NewProp_CurrentInput = { "CurrentInput", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UD3fragCharacterMovementComponent, CurrentInput), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentInput_MetaData), NewProp_CurrentInput_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UD3fragCharacterMovementComponent_Statics::NewProp_DefragGroundFriction = { "DefragGroundFriction", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UD3fragCharacterMovementComponent, DefragGroundFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefragGroundFriction_MetaData), NewProp_DefragGroundFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UD3fragCharacterMovementComponent_Statics::NewProp_DefragGroundAccel = { "DefragGroundAccel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UD3fragCharacterMovementComponent, DefragGroundAccel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefragGroundAccel_MetaData), NewProp_DefragGroundAccel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UD3fragCharacterMovementComponent_Statics::NewProp_DefragAirAccel = { "DefragAirAccel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UD3fragCharacterMovementComponent, DefragAirAccel), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefragAirAccel_MetaData), NewProp_DefragAirAccel_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UD3fragCharacterMovementComponent_Statics::NewProp_DefragAirControl = { "DefragAirControl", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UD3fragCharacterMovementComponent, DefragAirControl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefragAirControl_MetaData), NewProp_DefragAirControl_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UD3fragCharacterMovementComponent_Statics::NewProp_DefragStrafeBoost = { "DefragStrafeBoost", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UD3fragCharacterMovementComponent, DefragStrafeBoost), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefragStrafeBoost_MetaData), NewProp_DefragStrafeBoost_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UD3fragCharacterMovementComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UD3fragCharacterMovementComponent_Statics::NewProp_CurrentInput,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UD3fragCharacterMovementComponent_Statics::NewProp_DefragGroundFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UD3fragCharacterMovementComponent_Statics::NewProp_DefragGroundAccel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UD3fragCharacterMovementComponent_Statics::NewProp_DefragAirAccel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UD3fragCharacterMovementComponent_Statics::NewProp_DefragAirControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UD3fragCharacterMovementComponent_Statics::NewProp_DefragStrafeBoost,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UD3fragCharacterMovementComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UD3fragCharacterMovementComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_d3fragv3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UD3fragCharacterMovementComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UD3fragCharacterMovementComponent_Statics::ClassParams = {
	&UD3fragCharacterMovementComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UD3fragCharacterMovementComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UD3fragCharacterMovementComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UD3fragCharacterMovementComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UD3fragCharacterMovementComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UD3fragCharacterMovementComponent()
{
	if (!Z_Registration_Info_UClass_UD3fragCharacterMovementComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UD3fragCharacterMovementComponent.OuterSingleton, Z_Construct_UClass_UD3fragCharacterMovementComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UD3fragCharacterMovementComponent.OuterSingleton;
}
template<> D3FRAGV3_API UClass* StaticClass<UD3fragCharacterMovementComponent>()
{
	return UD3fragCharacterMovementComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UD3fragCharacterMovementComponent);
UD3fragCharacterMovementComponent::~UD3fragCharacterMovementComponent() {}
// End Class UD3fragCharacterMovementComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_phili_Documents_Unreal_Projects_d3fragv3_Source_d3fragv3_Public_D3fragCharacterMovementComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UD3fragCharacterMovementComponent, UD3fragCharacterMovementComponent::StaticClass, TEXT("UD3fragCharacterMovementComponent"), &Z_Registration_Info_UClass_UD3fragCharacterMovementComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UD3fragCharacterMovementComponent), 1627674505U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_phili_Documents_Unreal_Projects_d3fragv3_Source_d3fragv3_Public_D3fragCharacterMovementComponent_h_3460564132(TEXT("/Script/d3fragv3"),
	Z_CompiledInDeferFile_FID_Users_phili_Documents_Unreal_Projects_d3fragv3_Source_d3fragv3_Public_D3fragCharacterMovementComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_phili_Documents_Unreal_Projects_d3fragv3_Source_d3fragv3_Public_D3fragCharacterMovementComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
