// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FastNoiseGenerator/Public/FastNoiseWrapper.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFastNoiseWrapper() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	FASTNOISEGENERATOR_API UClass* Z_Construct_UClass_UFastNoiseWrapper();
	FASTNOISEGENERATOR_API UClass* Z_Construct_UClass_UFastNoiseWrapper_NoRegister();
	FASTNOISEGENERATOR_API UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction();
	FASTNOISEGENERATOR_API UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType();
	FASTNOISEGENERATOR_API UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType();
	FASTNOISEGENERATOR_API UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp();
	FASTNOISEGENERATOR_API UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType();
	UPackage* Z_Construct_UPackage__Script_FastNoiseGenerator();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFastNoise_NoiseType;
	static UEnum* EFastNoise_NoiseType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFastNoise_NoiseType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFastNoise_NoiseType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType, Z_Construct_UPackage__Script_FastNoiseGenerator(), TEXT("EFastNoise_NoiseType"));
		}
		return Z_Registration_Info_UEnum_EFastNoise_NoiseType.OuterSingleton;
	}
	template<> FASTNOISEGENERATOR_API UEnum* StaticEnum<EFastNoise_NoiseType>()
	{
		return EFastNoise_NoiseType_StaticEnum();
	}
	struct Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType_Statics::Enumerators[] = {
		{ "EFastNoise_NoiseType::Value", (int64)EFastNoise_NoiseType::Value },
		{ "EFastNoise_NoiseType::ValueFractal", (int64)EFastNoise_NoiseType::ValueFractal },
		{ "EFastNoise_NoiseType::Perlin", (int64)EFastNoise_NoiseType::Perlin },
		{ "EFastNoise_NoiseType::PerlinFractal", (int64)EFastNoise_NoiseType::PerlinFractal },
		{ "EFastNoise_NoiseType::Simplex", (int64)EFastNoise_NoiseType::Simplex },
		{ "EFastNoise_NoiseType::SimplexFractal", (int64)EFastNoise_NoiseType::SimplexFractal },
		{ "EFastNoise_NoiseType::Cellular", (int64)EFastNoise_NoiseType::Cellular },
		{ "EFastNoise_NoiseType::WhiteNoise", (int64)EFastNoise_NoiseType::WhiteNoise },
		{ "EFastNoise_NoiseType::Cubic", (int64)EFastNoise_NoiseType::Cubic },
		{ "EFastNoise_NoiseType::CubicFractal", (int64)EFastNoise_NoiseType::CubicFractal },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Cellular.Name", "EFastNoise_NoiseType::Cellular" },
		{ "Comment", "// Fast Noise UE4 enum wrappers\n" },
		{ "Cubic.Name", "EFastNoise_NoiseType::Cubic" },
		{ "CubicFractal.Name", "EFastNoise_NoiseType::CubicFractal" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "Perlin.Name", "EFastNoise_NoiseType::Perlin" },
		{ "PerlinFractal.Name", "EFastNoise_NoiseType::PerlinFractal" },
		{ "Simplex.Name", "EFastNoise_NoiseType::Simplex" },
		{ "SimplexFractal.Name", "EFastNoise_NoiseType::SimplexFractal" },
		{ "ToolTip", "Fast Noise UE4 enum wrappers" },
		{ "Value.Name", "EFastNoise_NoiseType::Value" },
		{ "ValueFractal.Name", "EFastNoise_NoiseType::ValueFractal" },
		{ "WhiteNoise.Name", "EFastNoise_NoiseType::WhiteNoise" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FastNoiseGenerator,
		nullptr,
		"EFastNoise_NoiseType",
		"EFastNoise_NoiseType",
		Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType()
	{
		if (!Z_Registration_Info_UEnum_EFastNoise_NoiseType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFastNoise_NoiseType.InnerSingleton, Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFastNoise_NoiseType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFastNoise_Interp;
	static UEnum* EFastNoise_Interp_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFastNoise_Interp.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFastNoise_Interp.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp, Z_Construct_UPackage__Script_FastNoiseGenerator(), TEXT("EFastNoise_Interp"));
		}
		return Z_Registration_Info_UEnum_EFastNoise_Interp.OuterSingleton;
	}
	template<> FASTNOISEGENERATOR_API UEnum* StaticEnum<EFastNoise_Interp>()
	{
		return EFastNoise_Interp_StaticEnum();
	}
	struct Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp_Statics::Enumerators[] = {
		{ "EFastNoise_Interp::Linear", (int64)EFastNoise_Interp::Linear },
		{ "EFastNoise_Interp::Hermite", (int64)EFastNoise_Interp::Hermite },
		{ "EFastNoise_Interp::Quintic", (int64)EFastNoise_Interp::Quintic },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Hermite.Name", "EFastNoise_Interp::Hermite" },
		{ "Linear.Name", "EFastNoise_Interp::Linear" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "Quintic.Name", "EFastNoise_Interp::Quintic" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FastNoiseGenerator,
		nullptr,
		"EFastNoise_Interp",
		"EFastNoise_Interp",
		Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp()
	{
		if (!Z_Registration_Info_UEnum_EFastNoise_Interp.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFastNoise_Interp.InnerSingleton, Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFastNoise_Interp.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFastNoise_FractalType;
	static UEnum* EFastNoise_FractalType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFastNoise_FractalType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFastNoise_FractalType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType, Z_Construct_UPackage__Script_FastNoiseGenerator(), TEXT("EFastNoise_FractalType"));
		}
		return Z_Registration_Info_UEnum_EFastNoise_FractalType.OuterSingleton;
	}
	template<> FASTNOISEGENERATOR_API UEnum* StaticEnum<EFastNoise_FractalType>()
	{
		return EFastNoise_FractalType_StaticEnum();
	}
	struct Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType_Statics::Enumerators[] = {
		{ "EFastNoise_FractalType::FBM", (int64)EFastNoise_FractalType::FBM },
		{ "EFastNoise_FractalType::Billow", (int64)EFastNoise_FractalType::Billow },
		{ "EFastNoise_FractalType::RigidMulti", (int64)EFastNoise_FractalType::RigidMulti },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType_Statics::Enum_MetaDataParams[] = {
		{ "Billow.Name", "EFastNoise_FractalType::Billow" },
		{ "BlueprintType", "true" },
		{ "FBM.Name", "EFastNoise_FractalType::FBM" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "RigidMulti.Name", "EFastNoise_FractalType::RigidMulti" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FastNoiseGenerator,
		nullptr,
		"EFastNoise_FractalType",
		"EFastNoise_FractalType",
		Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType()
	{
		if (!Z_Registration_Info_UEnum_EFastNoise_FractalType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFastNoise_FractalType.InnerSingleton, Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFastNoise_FractalType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFastNoise_CellularDistanceFunction;
	static UEnum* EFastNoise_CellularDistanceFunction_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFastNoise_CellularDistanceFunction.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFastNoise_CellularDistanceFunction.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction, Z_Construct_UPackage__Script_FastNoiseGenerator(), TEXT("EFastNoise_CellularDistanceFunction"));
		}
		return Z_Registration_Info_UEnum_EFastNoise_CellularDistanceFunction.OuterSingleton;
	}
	template<> FASTNOISEGENERATOR_API UEnum* StaticEnum<EFastNoise_CellularDistanceFunction>()
	{
		return EFastNoise_CellularDistanceFunction_StaticEnum();
	}
	struct Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction_Statics::Enumerators[] = {
		{ "EFastNoise_CellularDistanceFunction::Euclidean", (int64)EFastNoise_CellularDistanceFunction::Euclidean },
		{ "EFastNoise_CellularDistanceFunction::Manhattan", (int64)EFastNoise_CellularDistanceFunction::Manhattan },
		{ "EFastNoise_CellularDistanceFunction::Natural", (int64)EFastNoise_CellularDistanceFunction::Natural },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Euclidean.Name", "EFastNoise_CellularDistanceFunction::Euclidean" },
		{ "Manhattan.Name", "EFastNoise_CellularDistanceFunction::Manhattan" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "Natural.Name", "EFastNoise_CellularDistanceFunction::Natural" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FastNoiseGenerator,
		nullptr,
		"EFastNoise_CellularDistanceFunction",
		"EFastNoise_CellularDistanceFunction",
		Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction()
	{
		if (!Z_Registration_Info_UEnum_EFastNoise_CellularDistanceFunction.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFastNoise_CellularDistanceFunction.InnerSingleton, Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFastNoise_CellularDistanceFunction.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EFastNoise_CellularReturnType;
	static UEnum* EFastNoise_CellularReturnType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EFastNoise_CellularReturnType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EFastNoise_CellularReturnType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType, Z_Construct_UPackage__Script_FastNoiseGenerator(), TEXT("EFastNoise_CellularReturnType"));
		}
		return Z_Registration_Info_UEnum_EFastNoise_CellularReturnType.OuterSingleton;
	}
	template<> FASTNOISEGENERATOR_API UEnum* StaticEnum<EFastNoise_CellularReturnType>()
	{
		return EFastNoise_CellularReturnType_StaticEnum();
	}
	struct Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType_Statics::Enumerators[] = {
		{ "EFastNoise_CellularReturnType::CellValue", (int64)EFastNoise_CellularReturnType::CellValue },
		{ "EFastNoise_CellularReturnType::Distance", (int64)EFastNoise_CellularReturnType::Distance },
		{ "EFastNoise_CellularReturnType::Distance2", (int64)EFastNoise_CellularReturnType::Distance2 },
		{ "EFastNoise_CellularReturnType::Distance2Add", (int64)EFastNoise_CellularReturnType::Distance2Add },
		{ "EFastNoise_CellularReturnType::Distance2Sub", (int64)EFastNoise_CellularReturnType::Distance2Sub },
		{ "EFastNoise_CellularReturnType::Distance2Mul", (int64)EFastNoise_CellularReturnType::Distance2Mul },
		{ "EFastNoise_CellularReturnType::Distance2Div", (int64)EFastNoise_CellularReturnType::Distance2Div },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CellValue.Name", "EFastNoise_CellularReturnType::CellValue" },
		{ "Distance.Comment", "/*NoiseLookup,*/" },
		{ "Distance.Name", "EFastNoise_CellularReturnType::Distance" },
		{ "Distance.ToolTip", "NoiseLookup," },
		{ "Distance2.Name", "EFastNoise_CellularReturnType::Distance2" },
		{ "Distance2Add.Name", "EFastNoise_CellularReturnType::Distance2Add" },
		{ "Distance2Div.Name", "EFastNoise_CellularReturnType::Distance2Div" },
		{ "Distance2Mul.Name", "EFastNoise_CellularReturnType::Distance2Mul" },
		{ "Distance2Sub.Name", "EFastNoise_CellularReturnType::Distance2Sub" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_FastNoiseGenerator,
		nullptr,
		"EFastNoise_CellularReturnType",
		"EFastNoise_CellularReturnType",
		Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType()
	{
		if (!Z_Registration_Info_UEnum_EFastNoise_CellularReturnType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EFastNoise_CellularReturnType.InnerSingleton, Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EFastNoise_CellularReturnType.InnerSingleton;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execSetReturnType)
	{
		P_GET_ENUM(EFastNoise_CellularReturnType,Z_Param_cellularReturnType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetReturnType(EFastNoise_CellularReturnType(Z_Param_cellularReturnType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execSetDistanceFunction)
	{
		P_GET_ENUM(EFastNoise_CellularDistanceFunction,Z_Param_distanceFunction);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDistanceFunction(EFastNoise_CellularDistanceFunction(Z_Param_distanceFunction));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execSetCellularJitter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_cellularJitter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCellularJitter(Z_Param_cellularJitter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execSetGain)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_gain);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGain(Z_Param_gain);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execSetLacunarity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_lacunarity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLacunarity(Z_Param_lacunarity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execSetOctaves)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_octaves);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOctaves(Z_Param_octaves);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execSetFractalType)
	{
		P_GET_ENUM(EFastNoise_FractalType,Z_Param_fractalType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFractalType(EFastNoise_FractalType(Z_Param_fractalType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execSetInterpolation)
	{
		P_GET_ENUM(EFastNoise_Interp,Z_Param_interp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInterpolation(EFastNoise_Interp(Z_Param_interp));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execSetFrequency)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_frequency);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFrequency(Z_Param_frequency);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execSetSeed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_seed);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSeed(Z_Param_seed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execSetNoiseType)
	{
		P_GET_ENUM(EFastNoise_NoiseType,Z_Param_noiseType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNoiseType(EFastNoise_NoiseType(Z_Param_noiseType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execGetReturnType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EFastNoise_CellularReturnType*)Z_Param__Result=P_THIS->GetReturnType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execGetDistanceFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EFastNoise_CellularDistanceFunction*)Z_Param__Result=P_THIS->GetDistanceFunction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execGetCellularJitter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCellularJitter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execGetGain)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGain();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execGetLacunarity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLacunarity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execGetOctaves)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetOctaves();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execGetFractalType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EFastNoise_FractalType*)Z_Param__Result=P_THIS->GetFractalType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execGetInterpolation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EFastNoise_Interp*)Z_Param__Result=P_THIS->GetInterpolation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execGetFrequency)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetFrequency();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execGetSeed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSeed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execGetNoiseType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EFastNoise_NoiseType*)Z_Param__Result=P_THIS->GetNoiseType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execGetNoise3D)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_GET_PROPERTY(FFloatProperty,Z_Param_z);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNoise3D(Z_Param_x,Z_Param_y,Z_Param_z);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execGetNoise2D)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_x);
		P_GET_PROPERTY(FFloatProperty,Z_Param_y);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetNoise2D(Z_Param_x,Z_Param_y);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execIsInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInitialized();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UFastNoiseWrapper::execSetupFastNoise)
	{
		P_GET_ENUM(EFastNoise_NoiseType,Z_Param_noiseType);
		P_GET_PROPERTY(FIntProperty,Z_Param_seed);
		P_GET_PROPERTY(FFloatProperty,Z_Param_frequency);
		P_GET_ENUM(EFastNoise_Interp,Z_Param_interp);
		P_GET_ENUM(EFastNoise_FractalType,Z_Param_fractaltype);
		P_GET_PROPERTY(FIntProperty,Z_Param_octaves);
		P_GET_PROPERTY(FFloatProperty,Z_Param_lacunarity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_gain);
		P_GET_PROPERTY(FFloatProperty,Z_Param_cellularJitter);
		P_GET_ENUM(EFastNoise_CellularDistanceFunction,Z_Param_cellularDistanceFunction);
		P_GET_ENUM(EFastNoise_CellularReturnType,Z_Param_cellularReturnType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupFastNoise(EFastNoise_NoiseType(Z_Param_noiseType),Z_Param_seed,Z_Param_frequency,EFastNoise_Interp(Z_Param_interp),EFastNoise_FractalType(Z_Param_fractaltype),Z_Param_octaves,Z_Param_lacunarity,Z_Param_gain,Z_Param_cellularJitter,EFastNoise_CellularDistanceFunction(Z_Param_cellularDistanceFunction),EFastNoise_CellularReturnType(Z_Param_cellularReturnType));
		P_NATIVE_END;
	}
	void UFastNoiseWrapper::StaticRegisterNativesUFastNoiseWrapper()
	{
		UClass* Class = UFastNoiseWrapper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCellularJitter", &UFastNoiseWrapper::execGetCellularJitter },
			{ "GetDistanceFunction", &UFastNoiseWrapper::execGetDistanceFunction },
			{ "GetFractalType", &UFastNoiseWrapper::execGetFractalType },
			{ "GetFrequency", &UFastNoiseWrapper::execGetFrequency },
			{ "GetGain", &UFastNoiseWrapper::execGetGain },
			{ "GetInterpolation", &UFastNoiseWrapper::execGetInterpolation },
			{ "GetLacunarity", &UFastNoiseWrapper::execGetLacunarity },
			{ "GetNoise2D", &UFastNoiseWrapper::execGetNoise2D },
			{ "GetNoise3D", &UFastNoiseWrapper::execGetNoise3D },
			{ "GetNoiseType", &UFastNoiseWrapper::execGetNoiseType },
			{ "GetOctaves", &UFastNoiseWrapper::execGetOctaves },
			{ "GetReturnType", &UFastNoiseWrapper::execGetReturnType },
			{ "GetSeed", &UFastNoiseWrapper::execGetSeed },
			{ "IsInitialized", &UFastNoiseWrapper::execIsInitialized },
			{ "SetCellularJitter", &UFastNoiseWrapper::execSetCellularJitter },
			{ "SetDistanceFunction", &UFastNoiseWrapper::execSetDistanceFunction },
			{ "SetFractalType", &UFastNoiseWrapper::execSetFractalType },
			{ "SetFrequency", &UFastNoiseWrapper::execSetFrequency },
			{ "SetGain", &UFastNoiseWrapper::execSetGain },
			{ "SetInterpolation", &UFastNoiseWrapper::execSetInterpolation },
			{ "SetLacunarity", &UFastNoiseWrapper::execSetLacunarity },
			{ "SetNoiseType", &UFastNoiseWrapper::execSetNoiseType },
			{ "SetOctaves", &UFastNoiseWrapper::execSetOctaves },
			{ "SetReturnType", &UFastNoiseWrapper::execSetReturnType },
			{ "SetSeed", &UFastNoiseWrapper::execSetSeed },
			{ "SetupFastNoise", &UFastNoiseWrapper::execSetupFastNoise },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics
	{
		struct FastNoiseWrapper_eventGetCellularJitter_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventGetCellularJitter_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Cellular settings" },
		{ "Comment", "/** Gets cellular jitter. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets cellular jitter." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetCellularJitter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::FastNoiseWrapper_eventGetCellularJitter_Parms), Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics
	{
		struct FastNoiseWrapper_eventGetDistanceFunction_Parms
		{
			EFastNoise_CellularDistanceFunction ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventGetDistanceFunction_Parms, ReturnValue), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction, METADATA_PARAMS(nullptr, 0) }; // 1232447991
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Cellular settings" },
		{ "Comment", "/** Gets cellular distance function. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets cellular distance function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetDistanceFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::FastNoiseWrapper_eventGetDistanceFunction_Parms), Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics
	{
		struct FastNoiseWrapper_eventGetFractalType_Parms
		{
			EFastNoise_FractalType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventGetFractalType_Parms, ReturnValue), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType, METADATA_PARAMS(nullptr, 0) }; // 978473801
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Fractal settings" },
		{ "Comment", "/** Gets fractal type. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets fractal type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetFractalType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::FastNoiseWrapper_eventGetFractalType_Parms), Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics
	{
		struct FastNoiseWrapper_eventGetFrequency_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventGetFrequency_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|General settings" },
		{ "Comment", "/** Gets frequency. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets frequency." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::FastNoiseWrapper_eventGetFrequency_Parms), Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics
	{
		struct FastNoiseWrapper_eventGetGain_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventGetGain_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Fractal settings" },
		{ "Comment", "/** Gets fractal gain. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets fractal gain." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::FastNoiseWrapper_eventGetGain_Parms), Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics
	{
		struct FastNoiseWrapper_eventGetInterpolation_Parms
		{
			EFastNoise_Interp ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventGetInterpolation_Parms, ReturnValue), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp, METADATA_PARAMS(nullptr, 0) }; // 3023681180
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|General settings" },
		{ "Comment", "/** Gets interpolation type. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets interpolation type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetInterpolation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::FastNoiseWrapper_eventGetInterpolation_Parms), Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics
	{
		struct FastNoiseWrapper_eventGetLacunarity_Parms
		{
			float ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventGetLacunarity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Fractal settings" },
		{ "Comment", "/** Gets fractal lacunarity. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets fractal lacunarity." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetLacunarity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::FastNoiseWrapper_eventGetLacunarity_Parms), Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics
	{
		struct FastNoiseWrapper_eventGetNoise2D_Parms
		{
			float x;
			float y;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventGetNoise2D_Parms, x), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventGetNoise2D_Parms, y), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_y_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventGetNoise2D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise" },
		{ "Comment", "/**\n\x09* Returns the noise calculation given x and y values\n\x09*\n\x09* @param x\x09- The x axis value\n\x09* @param y\x09- The y axis value\n\x09*/" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Returns the noise calculation given x and y values\n\n@param x      - The x axis value\n@param y      - The y axis value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetNoise2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::FastNoiseWrapper_eventGetNoise2D_Parms), Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics
	{
		struct FastNoiseWrapper_eventGetNoise3D_Parms
		{
			float x;
			float y;
			float z;
			float ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_x_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_x;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_y_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_y;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_z_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_z;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_x_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_x = { "x", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventGetNoise3D_Parms, x), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_x_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_x_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_y_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_y = { "y", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventGetNoise3D_Parms, y), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_y_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_y_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_z_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_z = { "z", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventGetNoise3D_Parms, z), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_z_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_z_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventGetNoise3D_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_x,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_y,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_z,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise" },
		{ "Comment", "/**\n\x09* Returns the noise calculation given x, y and z values\n\x09*\n\x09* @param x\x09- The x axis value\n\x09* @param y\x09- The y axis value\n\x09* @param z\x09- The z axis value\n\x09*/" },
		{ "CPP_Default_z", "0.000000" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Returns the noise calculation given x, y and z values\n\n@param x      - The x axis value\n@param y      - The y axis value\n@param z      - The z axis value" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetNoise3D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::FastNoiseWrapper_eventGetNoise3D_Parms), Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics
	{
		struct FastNoiseWrapper_eventGetNoiseType_Parms
		{
			EFastNoise_NoiseType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventGetNoiseType_Parms, ReturnValue), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType, METADATA_PARAMS(nullptr, 0) }; // 590119321
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|General settings" },
		{ "Comment", "/** Gets noise type */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets noise type" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetNoiseType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::FastNoiseWrapper_eventGetNoiseType_Parms), Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics
	{
		struct FastNoiseWrapper_eventGetOctaves_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventGetOctaves_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Fractal settings" },
		{ "Comment", "/** Gets fractal octaves. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets fractal octaves." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetOctaves", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::FastNoiseWrapper_eventGetOctaves_Parms), Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics
	{
		struct FastNoiseWrapper_eventGetReturnType_Parms
		{
			EFastNoise_CellularReturnType ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventGetReturnType_Parms, ReturnValue), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType, METADATA_PARAMS(nullptr, 0) }; // 3154570264
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Cellular settings" },
		{ "Comment", "/** Gets cellular return type. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets cellular return type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetReturnType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::FastNoiseWrapper_eventGetReturnType_Parms), Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics
	{
		struct FastNoiseWrapper_eventGetSeed_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventGetSeed_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|General settings" },
		{ "Comment", "/** Gets seed. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Gets seed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "GetSeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::FastNoiseWrapper_eventGetSeed_Parms), Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_GetSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_GetSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics
	{
		struct FastNoiseWrapper_eventIsInitialized_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FastNoiseWrapper_eventIsInitialized_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FastNoiseWrapper_eventIsInitialized_Parms), &Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise" },
		{ "Comment", "/** Returns if Fast Noise properties are initialized or not */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Returns if Fast Noise properties are initialized or not" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "IsInitialized", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::FastNoiseWrapper_eventIsInitialized_Parms), Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics
	{
		struct FastNoiseWrapper_eventSetCellularJitter_Parms
		{
			float cellularJitter;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cellularJitter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_cellularJitter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::NewProp_cellularJitter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::NewProp_cellularJitter = { "cellularJitter", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventSetCellularJitter_Parms, cellularJitter), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::NewProp_cellularJitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::NewProp_cellularJitter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::NewProp_cellularJitter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Cellular settings" },
		{ "Comment", "/** Set cellular jitter. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set cellular jitter." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetCellularJitter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::FastNoiseWrapper_eventSetCellularJitter_Parms), Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics
	{
		struct FastNoiseWrapper_eventSetDistanceFunction_Parms
		{
			EFastNoise_CellularDistanceFunction distanceFunction;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_distanceFunction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_distanceFunction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_distanceFunction;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::NewProp_distanceFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::NewProp_distanceFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::NewProp_distanceFunction = { "distanceFunction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventSetDistanceFunction_Parms, distanceFunction), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::NewProp_distanceFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::NewProp_distanceFunction_MetaData)) }; // 1232447991
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::NewProp_distanceFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::NewProp_distanceFunction,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Cellular settings" },
		{ "Comment", "/** Set cellular distance function. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set cellular distance function." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetDistanceFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::FastNoiseWrapper_eventSetDistanceFunction_Parms), Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics
	{
		struct FastNoiseWrapper_eventSetFractalType_Parms
		{
			EFastNoise_FractalType fractalType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_fractalType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fractalType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_fractalType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::NewProp_fractalType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::NewProp_fractalType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::NewProp_fractalType = { "fractalType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventSetFractalType_Parms, fractalType), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::NewProp_fractalType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::NewProp_fractalType_MetaData)) }; // 978473801
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::NewProp_fractalType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::NewProp_fractalType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Fractal settings" },
		{ "Comment", "/** Set fractal type. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set fractal type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetFractalType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::FastNoiseWrapper_eventSetFractalType_Parms), Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics
	{
		struct FastNoiseWrapper_eventSetFrequency_Parms
		{
			float frequency;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_frequency;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::NewProp_frequency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::NewProp_frequency = { "frequency", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventSetFrequency_Parms, frequency), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::NewProp_frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::NewProp_frequency_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::NewProp_frequency,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|General settings" },
		{ "Comment", "/** Set frequency. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set frequency." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetFrequency", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::FastNoiseWrapper_eventSetFrequency_Parms), Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics
	{
		struct FastNoiseWrapper_eventSetGain_Parms
		{
			float gain;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gain;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::NewProp_gain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::NewProp_gain = { "gain", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventSetGain_Parms, gain), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::NewProp_gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::NewProp_gain_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::NewProp_gain,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Fractal settings" },
		{ "Comment", "/** Set fractal gain. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set fractal gain." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetGain", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::FastNoiseWrapper_eventSetGain_Parms), Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetGain()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetGain_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics
	{
		struct FastNoiseWrapper_eventSetInterpolation_Parms
		{
			EFastNoise_Interp interp;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_interp_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_interp_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_interp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::NewProp_interp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::NewProp_interp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::NewProp_interp = { "interp", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventSetInterpolation_Parms, interp), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::NewProp_interp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::NewProp_interp_MetaData)) }; // 3023681180
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::NewProp_interp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::NewProp_interp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|General settings" },
		{ "Comment", "/** Set interpolation type. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set interpolation type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetInterpolation", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::FastNoiseWrapper_eventSetInterpolation_Parms), Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics
	{
		struct FastNoiseWrapper_eventSetLacunarity_Parms
		{
			float lacunarity;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lacunarity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lacunarity;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::NewProp_lacunarity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::NewProp_lacunarity = { "lacunarity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventSetLacunarity_Parms, lacunarity), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::NewProp_lacunarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::NewProp_lacunarity_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::NewProp_lacunarity,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Fractal settings" },
		{ "Comment", "/** Set fractal lacunarity. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set fractal lacunarity." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetLacunarity", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::FastNoiseWrapper_eventSetLacunarity_Parms), Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics
	{
		struct FastNoiseWrapper_eventSetNoiseType_Parms
		{
			EFastNoise_NoiseType noiseType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_noiseType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_noiseType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_noiseType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::NewProp_noiseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::NewProp_noiseType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::NewProp_noiseType = { "noiseType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventSetNoiseType_Parms, noiseType), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::NewProp_noiseType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::NewProp_noiseType_MetaData)) }; // 590119321
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::NewProp_noiseType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::NewProp_noiseType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|General settings" },
		{ "Comment", "/** Set noise type. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set noise type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetNoiseType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::FastNoiseWrapper_eventSetNoiseType_Parms), Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics
	{
		struct FastNoiseWrapper_eventSetOctaves_Parms
		{
			int32 octaves;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_octaves_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_octaves;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::NewProp_octaves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::NewProp_octaves = { "octaves", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventSetOctaves_Parms, octaves), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::NewProp_octaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::NewProp_octaves_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::NewProp_octaves,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Fractal settings" },
		{ "Comment", "/** Set fractal octaves. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set fractal octaves." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetOctaves", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::FastNoiseWrapper_eventSetOctaves_Parms), Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics
	{
		struct FastNoiseWrapper_eventSetReturnType_Parms
		{
			EFastNoise_CellularReturnType cellularReturnType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_cellularReturnType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cellularReturnType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_cellularReturnType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::NewProp_cellularReturnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::NewProp_cellularReturnType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::NewProp_cellularReturnType = { "cellularReturnType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventSetReturnType_Parms, cellularReturnType), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::NewProp_cellularReturnType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::NewProp_cellularReturnType_MetaData)) }; // 3154570264
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::NewProp_cellularReturnType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::NewProp_cellularReturnType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|Cellular settings" },
		{ "Comment", "/** Set cellular return type. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set cellular return type." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetReturnType", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::FastNoiseWrapper_eventSetReturnType_Parms), Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics
	{
		struct FastNoiseWrapper_eventSetSeed_Parms
		{
			int32 seed;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_seed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::NewProp_seed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::NewProp_seed = { "seed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventSetSeed_Parms, seed), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::NewProp_seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::NewProp_seed_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::NewProp_seed,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise|General settings" },
		{ "Comment", "/** Set seed. */" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set seed." },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetSeed", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::FastNoiseWrapper_eventSetSeed_Parms), Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetSeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetSeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics
	{
		struct FastNoiseWrapper_eventSetupFastNoise_Parms
		{
			EFastNoise_NoiseType noiseType;
			int32 seed;
			float frequency;
			EFastNoise_Interp interp;
			EFastNoise_FractalType fractaltype;
			int32 octaves;
			float lacunarity;
			float gain;
			float cellularJitter;
			EFastNoise_CellularDistanceFunction cellularDistanceFunction;
			EFastNoise_CellularReturnType cellularReturnType;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_noiseType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_noiseType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_noiseType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_seed_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_seed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_frequency_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_frequency;
		static const UECodeGen_Private::FBytePropertyParams NewProp_interp_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_interp_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_interp;
		static const UECodeGen_Private::FBytePropertyParams NewProp_fractaltype_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_fractaltype_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_fractaltype;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_octaves_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_octaves;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_lacunarity_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_lacunarity;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gain_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gain;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cellularJitter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_cellularJitter;
		static const UECodeGen_Private::FBytePropertyParams NewProp_cellularDistanceFunction_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cellularDistanceFunction_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_cellularDistanceFunction;
		static const UECodeGen_Private::FBytePropertyParams NewProp_cellularReturnType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cellularReturnType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_cellularReturnType;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_noiseType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_noiseType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_noiseType = { "noiseType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, noiseType), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_NoiseType, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_noiseType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_noiseType_MetaData)) }; // 590119321
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_seed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_seed = { "seed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, seed), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_seed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_seed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_frequency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_frequency = { "frequency", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, frequency), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_frequency_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_frequency_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_interp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_interp_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_interp = { "interp", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, interp), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_Interp, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_interp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_interp_MetaData)) }; // 3023681180
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_fractaltype_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_fractaltype_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_fractaltype = { "fractaltype", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, fractaltype), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_FractalType, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_fractaltype_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_fractaltype_MetaData)) }; // 978473801
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_octaves_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_octaves = { "octaves", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, octaves), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_octaves_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_octaves_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_lacunarity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_lacunarity = { "lacunarity", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, lacunarity), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_lacunarity_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_lacunarity_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_gain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_gain = { "gain", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, gain), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_gain_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_gain_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularJitter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularJitter = { "cellularJitter", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, cellularJitter), METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularJitter_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularJitter_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularDistanceFunction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularDistanceFunction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularDistanceFunction = { "cellularDistanceFunction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, cellularDistanceFunction), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularDistanceFunction, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularDistanceFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularDistanceFunction_MetaData)) }; // 1232447991
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularReturnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularReturnType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularReturnType = { "cellularReturnType", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FastNoiseWrapper_eventSetupFastNoise_Parms, cellularReturnType), Z_Construct_UEnum_FastNoiseGenerator_EFastNoise_CellularReturnType, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularReturnType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularReturnType_MetaData)) }; // 3154570264
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_noiseType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_noiseType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_seed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_frequency,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_interp_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_interp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_fractaltype_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_fractaltype,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_octaves,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_lacunarity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_gain,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularJitter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularDistanceFunction_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularDistanceFunction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularReturnType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::NewProp_cellularReturnType,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::Function_MetaDataParams[] = {
		{ "Category", "Fast Noise" },
		{ "Comment", "/**\n\x09* Set all the properties needed to generate the noise\n\x09*\n\x09* @param noiseType\x09\x09\x09\x09\x09- Noise return type of GetNoise(...). Default value: Simplex\n\x09* @param seed\x09\x09\x09\x09\x09\x09- Seed used for all noise types. Using different seeds will cause the noise output to change. Default value: 1337\n\x09* @param frequency\x09\x09\x09\x09\x09- Frequency for all noise types, except White Noise. Affects how coarse the noise output is. Default value: 0.01\n\x09* @param interp\x09\x09\x09\x09\x09\x09- Interpolation method used to smooth between noise values in Value and Perlin Noise. Possible interpolation methods (lowest to highest quality): Linear; Hermite; Quintic. Default value: Quintic\n\x09* @param fractaltype\x09\x09\x09\x09- Method for combining octaves in all fractal noise types. Default value: FBM\n\x09* @param octaves\x09\x09\x09\x09\x09- Octave count for all fractal noise types. The amount of noise layers used to create the fractal. Default value: 3\n\x09* @param lacunarity\x09\x09\x09\x09\x09- Octave lacunarity for all fractal noise types. The frequency multiplier between each octave. Default value: 2.0\n\x09* @param gain\x09\x09\x09\x09\x09\x09- Octave gain for all fractal noise types. The relative strength of noise from each layer when compared to the last. Default value: 0.5\n\x09* @param cellularJitter\x09\x09\x09\x09- Maximum distance a cellular point can move from its grid position. Setting this high will make artifacts more common. Default value: 0.45\n\x09* @param cellularDistanceFunction\x09- Distance function used in cellular noise calculations. The distance function used to calculate the cell for a given point. Natural is a blend of Euclidean and Manhattan to give curved cell boundaries. Default value: Euclidean\n\x09* @param cellularReturnType\x09\x09\x09- Return type from cellular noise calculations. Default value: CellValue\n\x09*/" },
		{ "CPP_Default_cellularDistanceFunction", "Euclidean" },
		{ "CPP_Default_cellularJitter", "0.450000" },
		{ "CPP_Default_cellularReturnType", "CellValue" },
		{ "CPP_Default_fractaltype", "FBM" },
		{ "CPP_Default_frequency", "0.010000" },
		{ "CPP_Default_gain", "0.500000" },
		{ "CPP_Default_interp", "Quintic" },
		{ "CPP_Default_lacunarity", "2.000000" },
		{ "CPP_Default_noiseType", "Simplex" },
		{ "CPP_Default_octaves", "3" },
		{ "CPP_Default_seed", "1337" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "Set all the properties needed to generate the noise\n\n@param noiseType                                      - Noise return type of GetNoise(...). Default value: Simplex\n@param seed                                           - Seed used for all noise types. Using different seeds will cause the noise output to change. Default value: 1337\n@param frequency                                      - Frequency for all noise types, except White Noise. Affects how coarse the noise output is. Default value: 0.01\n@param interp                                         - Interpolation method used to smooth between noise values in Value and Perlin Noise. Possible interpolation methods (lowest to highest quality): Linear; Hermite; Quintic. Default value: Quintic\n@param fractaltype                            - Method for combining octaves in all fractal noise types. Default value: FBM\n@param octaves                                        - Octave count for all fractal noise types. The amount of noise layers used to create the fractal. Default value: 3\n@param lacunarity                                     - Octave lacunarity for all fractal noise types. The frequency multiplier between each octave. Default value: 2.0\n@param gain                                           - Octave gain for all fractal noise types. The relative strength of noise from each layer when compared to the last. Default value: 0.5\n@param cellularJitter                         - Maximum distance a cellular point can move from its grid position. Setting this high will make artifacts more common. Default value: 0.45\n@param cellularDistanceFunction       - Distance function used in cellular noise calculations. The distance function used to calculate the cell for a given point. Natural is a blend of Euclidean and Manhattan to give curved cell boundaries. Default value: Euclidean\n@param cellularReturnType                     - Return type from cellular noise calculations. Default value: CellValue" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UFastNoiseWrapper, nullptr, "SetupFastNoise", nullptr, nullptr, sizeof(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::FastNoiseWrapper_eventSetupFastNoise_Parms), Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFastNoiseWrapper);
	UClass* Z_Construct_UClass_UFastNoiseWrapper_NoRegister()
	{
		return UFastNoiseWrapper::StaticClass();
	}
	struct Z_Construct_UClass_UFastNoiseWrapper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFastNoiseWrapper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_FastNoiseGenerator,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UFastNoiseWrapper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetCellularJitter, "GetCellularJitter" }, // 723690005
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetDistanceFunction, "GetDistanceFunction" }, // 326813787
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetFractalType, "GetFractalType" }, // 2797310381
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetFrequency, "GetFrequency" }, // 68465586
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetGain, "GetGain" }, // 3878075897
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetInterpolation, "GetInterpolation" }, // 1039720821
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetLacunarity, "GetLacunarity" }, // 3025875013
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetNoise2D, "GetNoise2D" }, // 2170371305
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetNoise3D, "GetNoise3D" }, // 27614038
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetNoiseType, "GetNoiseType" }, // 951316161
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetOctaves, "GetOctaves" }, // 1622753820
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetReturnType, "GetReturnType" }, // 2628196425
		{ &Z_Construct_UFunction_UFastNoiseWrapper_GetSeed, "GetSeed" }, // 3256252230
		{ &Z_Construct_UFunction_UFastNoiseWrapper_IsInitialized, "IsInitialized" }, // 404243043
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetCellularJitter, "SetCellularJitter" }, // 1745380180
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetDistanceFunction, "SetDistanceFunction" }, // 223132921
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetFractalType, "SetFractalType" }, // 2390042836
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetFrequency, "SetFrequency" }, // 4213194479
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetGain, "SetGain" }, // 3170126669
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetInterpolation, "SetInterpolation" }, // 604018093
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetLacunarity, "SetLacunarity" }, // 3962453074
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetNoiseType, "SetNoiseType" }, // 2695948093
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetOctaves, "SetOctaves" }, // 614931328
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetReturnType, "SetReturnType" }, // 1889102135
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetSeed, "SetSeed" }, // 1906881079
		{ &Z_Construct_UFunction_UFastNoiseWrapper_SetupFastNoise, "SetupFastNoise" }, // 2953773753
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFastNoiseWrapper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * UE4 Wrapper for Auburns's FastNoise library, also available for blueprints usage.\n */" },
		{ "IncludePath", "FastNoiseWrapper.h" },
		{ "ModuleRelativePath", "Public/FastNoiseWrapper.h" },
		{ "ToolTip", "UE4 Wrapper for Auburns's FastNoise library, also available for blueprints usage." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFastNoiseWrapper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFastNoiseWrapper>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFastNoiseWrapper_Statics::ClassParams = {
		&UFastNoiseWrapper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFastNoiseWrapper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFastNoiseWrapper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFastNoiseWrapper()
	{
		if (!Z_Registration_Info_UClass_UFastNoiseWrapper.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFastNoiseWrapper.OuterSingleton, Z_Construct_UClass_UFastNoiseWrapper_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFastNoiseWrapper.OuterSingleton;
	}
	template<> FASTNOISEGENERATOR_API UClass* StaticClass<UFastNoiseWrapper>()
	{
		return UFastNoiseWrapper::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFastNoiseWrapper);
	UFastNoiseWrapper::~UFastNoiseWrapper() {}
	struct Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_Statics::EnumInfo[] = {
		{ EFastNoise_NoiseType_StaticEnum, TEXT("EFastNoise_NoiseType"), &Z_Registration_Info_UEnum_EFastNoise_NoiseType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 590119321U) },
		{ EFastNoise_Interp_StaticEnum, TEXT("EFastNoise_Interp"), &Z_Registration_Info_UEnum_EFastNoise_Interp, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3023681180U) },
		{ EFastNoise_FractalType_StaticEnum, TEXT("EFastNoise_FractalType"), &Z_Registration_Info_UEnum_EFastNoise_FractalType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 978473801U) },
		{ EFastNoise_CellularDistanceFunction_StaticEnum, TEXT("EFastNoise_CellularDistanceFunction"), &Z_Registration_Info_UEnum_EFastNoise_CellularDistanceFunction, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1232447991U) },
		{ EFastNoise_CellularReturnType_StaticEnum, TEXT("EFastNoise_CellularReturnType"), &Z_Registration_Info_UEnum_EFastNoise_CellularReturnType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3154570264U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFastNoiseWrapper, UFastNoiseWrapper::StaticClass, TEXT("UFastNoiseWrapper"), &Z_Registration_Info_UClass_UFastNoiseWrapper, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFastNoiseWrapper), 1508580656U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_1615027052(TEXT("/Script/FastNoiseGenerator"),
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Marketplace_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_FastNoiseGenerator_Source_FastNoiseGenerator_Public_FastNoiseWrapper_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
