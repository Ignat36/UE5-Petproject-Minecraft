// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FastNoiseWrapper.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EFastNoise_CellularDistanceFunction : uint8;
enum class EFastNoise_CellularReturnType : uint8;
enum class EFastNoise_FractalType : uint8;
enum class EFastNoise_Interp : uint8;
enum class EFastNoise_NoiseType : uint8;
#ifdef FASTNOISEGENERATOR_FastNoiseWrapper_generated_h
#error "FastNoiseWrapper.generated.h already included, missing '#pragma once' in FastNoiseWrapper.h"
#endif
#define FASTNOISEGENERATOR_FastNoiseWrapper_generated_h

#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_23_SPARSE_DATA
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_23_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetReturnType); \
	DECLARE_FUNCTION(execSetDistanceFunction); \
	DECLARE_FUNCTION(execSetCellularJitter); \
	DECLARE_FUNCTION(execSetGain); \
	DECLARE_FUNCTION(execSetLacunarity); \
	DECLARE_FUNCTION(execSetOctaves); \
	DECLARE_FUNCTION(execSetFractalType); \
	DECLARE_FUNCTION(execSetInterpolation); \
	DECLARE_FUNCTION(execSetFrequency); \
	DECLARE_FUNCTION(execSetSeed); \
	DECLARE_FUNCTION(execSetNoiseType); \
	DECLARE_FUNCTION(execGetReturnType); \
	DECLARE_FUNCTION(execGetDistanceFunction); \
	DECLARE_FUNCTION(execGetCellularJitter); \
	DECLARE_FUNCTION(execGetGain); \
	DECLARE_FUNCTION(execGetLacunarity); \
	DECLARE_FUNCTION(execGetOctaves); \
	DECLARE_FUNCTION(execGetFractalType); \
	DECLARE_FUNCTION(execGetInterpolation); \
	DECLARE_FUNCTION(execGetFrequency); \
	DECLARE_FUNCTION(execGetSeed); \
	DECLARE_FUNCTION(execGetNoiseType); \
	DECLARE_FUNCTION(execGetNoise3D); \
	DECLARE_FUNCTION(execGetNoise2D); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execSetupFastNoise);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetReturnType); \
	DECLARE_FUNCTION(execSetDistanceFunction); \
	DECLARE_FUNCTION(execSetCellularJitter); \
	DECLARE_FUNCTION(execSetGain); \
	DECLARE_FUNCTION(execSetLacunarity); \
	DECLARE_FUNCTION(execSetOctaves); \
	DECLARE_FUNCTION(execSetFractalType); \
	DECLARE_FUNCTION(execSetInterpolation); \
	DECLARE_FUNCTION(execSetFrequency); \
	DECLARE_FUNCTION(execSetSeed); \
	DECLARE_FUNCTION(execSetNoiseType); \
	DECLARE_FUNCTION(execGetReturnType); \
	DECLARE_FUNCTION(execGetDistanceFunction); \
	DECLARE_FUNCTION(execGetCellularJitter); \
	DECLARE_FUNCTION(execGetGain); \
	DECLARE_FUNCTION(execGetLacunarity); \
	DECLARE_FUNCTION(execGetOctaves); \
	DECLARE_FUNCTION(execGetFractalType); \
	DECLARE_FUNCTION(execGetInterpolation); \
	DECLARE_FUNCTION(execGetFrequency); \
	DECLARE_FUNCTION(execGetSeed); \
	DECLARE_FUNCTION(execGetNoiseType); \
	DECLARE_FUNCTION(execGetNoise3D); \
	DECLARE_FUNCTION(execGetNoise2D); \
	DECLARE_FUNCTION(execIsInitialized); \
	DECLARE_FUNCTION(execSetupFastNoise);


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_23_ACCESSORS
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFastNoiseWrapper(); \
	friend struct Z_Construct_UClass_UFastNoiseWrapper_Statics; \
public: \
	DECLARE_CLASS(UFastNoiseWrapper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FastNoiseGenerator"), NO_API) \
	DECLARE_SERIALIZER(UFastNoiseWrapper)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUFastNoiseWrapper(); \
	friend struct Z_Construct_UClass_UFastNoiseWrapper_Statics; \
public: \
	DECLARE_CLASS(UFastNoiseWrapper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FastNoiseGenerator"), NO_API) \
	DECLARE_SERIALIZER(UFastNoiseWrapper)


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFastNoiseWrapper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFastNoiseWrapper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFastNoiseWrapper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFastNoiseWrapper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFastNoiseWrapper(UFastNoiseWrapper&&); \
	NO_API UFastNoiseWrapper(const UFastNoiseWrapper&); \
public: \
	NO_API virtual ~UFastNoiseWrapper();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFastNoiseWrapper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFastNoiseWrapper(UFastNoiseWrapper&&); \
	NO_API UFastNoiseWrapper(const UFastNoiseWrapper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFastNoiseWrapper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFastNoiseWrapper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFastNoiseWrapper) \
	NO_API virtual ~UFastNoiseWrapper();


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_20_PROLOG
#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_23_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_23_RPC_WRAPPERS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_23_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_23_INCLASS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_23_SPARSE_DATA \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_23_ACCESSORS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_23_INCLASS_NO_PURE_DECLS \
	FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FASTNOISEGENERATOR_API UClass* StaticClass<class UFastNoiseWrapper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h


#define FOREACH_ENUM_EFASTNOISE_NOISETYPE(op) \
	op(EFastNoise_NoiseType::Value) \
	op(EFastNoise_NoiseType::ValueFractal) \
	op(EFastNoise_NoiseType::Perlin) \
	op(EFastNoise_NoiseType::PerlinFractal) \
	op(EFastNoise_NoiseType::Simplex) \
	op(EFastNoise_NoiseType::SimplexFractal) \
	op(EFastNoise_NoiseType::Cellular) \
	op(EFastNoise_NoiseType::WhiteNoise) \
	op(EFastNoise_NoiseType::Cubic) \
	op(EFastNoise_NoiseType::CubicFractal) 

enum class EFastNoise_NoiseType : uint8;
template<> struct TIsUEnumClass<EFastNoise_NoiseType> { enum { Value = true }; };
template<> FASTNOISEGENERATOR_API UEnum* StaticEnum<EFastNoise_NoiseType>();

#define FOREACH_ENUM_EFASTNOISE_INTERP(op) \
	op(EFastNoise_Interp::Linear) \
	op(EFastNoise_Interp::Hermite) \
	op(EFastNoise_Interp::Quintic) 

enum class EFastNoise_Interp : uint8;
template<> struct TIsUEnumClass<EFastNoise_Interp> { enum { Value = true }; };
template<> FASTNOISEGENERATOR_API UEnum* StaticEnum<EFastNoise_Interp>();

#define FOREACH_ENUM_EFASTNOISE_FRACTALTYPE(op) \
	op(EFastNoise_FractalType::FBM) \
	op(EFastNoise_FractalType::Billow) \
	op(EFastNoise_FractalType::RigidMulti) 

enum class EFastNoise_FractalType : uint8;
template<> struct TIsUEnumClass<EFastNoise_FractalType> { enum { Value = true }; };
template<> FASTNOISEGENERATOR_API UEnum* StaticEnum<EFastNoise_FractalType>();

#define FOREACH_ENUM_EFASTNOISE_CELLULARDISTANCEFUNCTION(op) \
	op(EFastNoise_CellularDistanceFunction::Euclidean) \
	op(EFastNoise_CellularDistanceFunction::Manhattan) \
	op(EFastNoise_CellularDistanceFunction::Natural) 

enum class EFastNoise_CellularDistanceFunction : uint8;
template<> struct TIsUEnumClass<EFastNoise_CellularDistanceFunction> { enum { Value = true }; };
template<> FASTNOISEGENERATOR_API UEnum* StaticEnum<EFastNoise_CellularDistanceFunction>();

#define FOREACH_ENUM_EFASTNOISE_CELLULARRETURNTYPE(op) \
	op(EFastNoise_CellularReturnType::CellValue) \
	op(EFastNoise_CellularReturnType::Distance) \
	op(EFastNoise_CellularReturnType::Distance2) \
	op(EFastNoise_CellularReturnType::Distance2Add) \
	op(EFastNoise_CellularReturnType::Distance2Sub) \
	op(EFastNoise_CellularReturnType::Distance2Mul) \
	op(EFastNoise_CellularReturnType::Distance2Div) 

enum class EFastNoise_CellularReturnType : uint8;
template<> struct TIsUEnumClass<EFastNoise_CellularReturnType> { enum { Value = true }; };
template<> FASTNOISEGENERATOR_API UEnum* StaticEnum<EFastNoise_CellularReturnType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
