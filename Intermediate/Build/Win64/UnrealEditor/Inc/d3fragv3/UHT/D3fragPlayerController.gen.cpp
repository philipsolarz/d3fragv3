// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "d3fragv3/Public/D3fragPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeD3fragPlayerController() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
D3FRAGV3_API UClass* Z_Construct_UClass_AD3fragCharacter_NoRegister();
D3FRAGV3_API UClass* Z_Construct_UClass_AD3fragPlayerController();
D3FRAGV3_API UClass* Z_Construct_UClass_AD3fragPlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UPackage* Z_Construct_UPackage__Script_d3fragv3();
// End Cross Module References

// Begin Class AD3fragPlayerController Function GetCurrentMoveInput
struct Z_Construct_UFunction_AD3fragPlayerController_GetCurrentMoveInput_Statics
{
	struct D3fragPlayerController_eventGetCurrentMoveInput_Parms
	{
		FVector2D ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Public/D3fragPlayerController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AD3fragPlayerController_GetCurrentMoveInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(D3fragPlayerController_eventGetCurrentMoveInput_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AD3fragPlayerController_GetCurrentMoveInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AD3fragPlayerController_GetCurrentMoveInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AD3fragPlayerController_GetCurrentMoveInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AD3fragPlayerController_GetCurrentMoveInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AD3fragPlayerController, nullptr, "GetCurrentMoveInput", nullptr, nullptr, Z_Construct_UFunction_AD3fragPlayerController_GetCurrentMoveInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AD3fragPlayerController_GetCurrentMoveInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_AD3fragPlayerController_GetCurrentMoveInput_Statics::D3fragPlayerController_eventGetCurrentMoveInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AD3fragPlayerController_GetCurrentMoveInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_AD3fragPlayerController_GetCurrentMoveInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AD3fragPlayerController_GetCurrentMoveInput_Statics::D3fragPlayerController_eventGetCurrentMoveInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AD3fragPlayerController_GetCurrentMoveInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AD3fragPlayerController_GetCurrentMoveInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AD3fragPlayerController::execGetCurrentMoveInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector2D*)Z_Param__Result=P_THIS->GetCurrentMoveInput();
	P_NATIVE_END;
}
// End Class AD3fragPlayerController Function GetCurrentMoveInput

// Begin Class AD3fragPlayerController
void AD3fragPlayerController::StaticRegisterNativesAD3fragPlayerController()
{
	UClass* Class = AD3fragPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCurrentMoveInput", &AD3fragPlayerController::execGetCurrentMoveInput },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AD3fragPlayerController);
UClass* Z_Construct_UClass_AD3fragPlayerController_NoRegister()
{
	return AD3fragPlayerController::StaticClass();
}
struct Z_Construct_UClass_AD3fragPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "D3fragPlayerController.h" },
		{ "ModuleRelativePath", "Public/D3fragPlayerController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionMove_MetaData[] = {
		{ "Category", "Player Input|Character Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Input Action to map to movement.\n" },
#endif
		{ "ModuleRelativePath", "Public/D3fragPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Input Action to map to movement." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionLook_MetaData[] = {
		{ "Category", "Player Input|Character Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Input Action to map to looking around.\n" },
#endif
		{ "ModuleRelativePath", "Public/D3fragPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Input Action to map to looking around." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionJump_MetaData[] = {
		{ "Category", "Player Input|Character Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Input Action to map to jumping.\n" },
#endif
		{ "ModuleRelativePath", "Public/D3fragPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Input Action to map to jumping." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Player Input|Character Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// The Input Mapping Context to use.\n" },
#endif
		{ "ModuleRelativePath", "Public/D3fragPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Input Mapping Context to use." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EnhancedInputComponent_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// USed to store a reference to the InputComponent cast to an EnhancedInputComponent.\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/D3fragPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "USed to store a reference to the InputComponent cast to an EnhancedInputComponent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCharacter_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Used to store a reference to the pawn we are controlling\n" },
#endif
		{ "ModuleRelativePath", "Public/D3fragPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used to store a reference to the pawn we are controlling" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionMove;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionLook;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActionJump;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EnhancedInputComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCharacter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AD3fragPlayerController_GetCurrentMoveInput, "GetCurrentMoveInput" }, // 3282912731
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AD3fragPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AD3fragPlayerController_Statics::NewProp_ActionMove = { "ActionMove", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AD3fragPlayerController, ActionMove), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionMove_MetaData), NewProp_ActionMove_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AD3fragPlayerController_Statics::NewProp_ActionLook = { "ActionLook", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AD3fragPlayerController, ActionLook), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionLook_MetaData), NewProp_ActionLook_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AD3fragPlayerController_Statics::NewProp_ActionJump = { "ActionJump", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AD3fragPlayerController, ActionJump), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionJump_MetaData), NewProp_ActionJump_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AD3fragPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AD3fragPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AD3fragPlayerController_Statics::NewProp_EnhancedInputComponent = { "EnhancedInputComponent", nullptr, (EPropertyFlags)0x0144000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AD3fragPlayerController, EnhancedInputComponent), Z_Construct_UClass_UEnhancedInputComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EnhancedInputComponent_MetaData), NewProp_EnhancedInputComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AD3fragPlayerController_Statics::NewProp_PlayerCharacter = { "PlayerCharacter", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AD3fragPlayerController, PlayerCharacter), Z_Construct_UClass_AD3fragCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCharacter_MetaData), NewProp_PlayerCharacter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AD3fragPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AD3fragPlayerController_Statics::NewProp_ActionMove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AD3fragPlayerController_Statics::NewProp_ActionLook,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AD3fragPlayerController_Statics::NewProp_ActionJump,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AD3fragPlayerController_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AD3fragPlayerController_Statics::NewProp_EnhancedInputComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AD3fragPlayerController_Statics::NewProp_PlayerCharacter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AD3fragPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AD3fragPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_d3fragv3,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AD3fragPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AD3fragPlayerController_Statics::ClassParams = {
	&AD3fragPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AD3fragPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AD3fragPlayerController_Statics::PropPointers),
	0,
	0x009002A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AD3fragPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_AD3fragPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AD3fragPlayerController()
{
	if (!Z_Registration_Info_UClass_AD3fragPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AD3fragPlayerController.OuterSingleton, Z_Construct_UClass_AD3fragPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AD3fragPlayerController.OuterSingleton;
}
template<> D3FRAGV3_API UClass* StaticClass<AD3fragPlayerController>()
{
	return AD3fragPlayerController::StaticClass();
}
AD3fragPlayerController::AD3fragPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AD3fragPlayerController);
AD3fragPlayerController::~AD3fragPlayerController() {}
// End Class AD3fragPlayerController

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_phili_Documents_Unreal_Projects_d3fragv3_Source_d3fragv3_Public_D3fragPlayerController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AD3fragPlayerController, AD3fragPlayerController::StaticClass, TEXT("AD3fragPlayerController"), &Z_Registration_Info_UClass_AD3fragPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AD3fragPlayerController), 2219358684U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_phili_Documents_Unreal_Projects_d3fragv3_Source_d3fragv3_Public_D3fragPlayerController_h_2196419246(TEXT("/Script/d3fragv3"),
	Z_CompiledInDeferFile_FID_Users_phili_Documents_Unreal_Projects_d3fragv3_Source_d3fragv3_Public_D3fragPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_phili_Documents_Unreal_Projects_d3fragv3_Source_d3fragv3_Public_D3fragPlayerController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
