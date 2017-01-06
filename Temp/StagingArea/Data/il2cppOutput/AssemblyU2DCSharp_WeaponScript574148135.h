#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// WeaponScript
struct  WeaponScript_t574148135  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Transform WeaponScript::shotPrefab
	Transform_t284553113 * ___shotPrefab_2;
	// System.Single WeaponScript::shootingRate
	float ___shootingRate_3;
	// System.Single WeaponScript::shootCooldown
	float ___shootCooldown_4;

public:
	inline static int32_t get_offset_of_shotPrefab_2() { return static_cast<int32_t>(offsetof(WeaponScript_t574148135, ___shotPrefab_2)); }
	inline Transform_t284553113 * get_shotPrefab_2() const { return ___shotPrefab_2; }
	inline Transform_t284553113 ** get_address_of_shotPrefab_2() { return &___shotPrefab_2; }
	inline void set_shotPrefab_2(Transform_t284553113 * value)
	{
		___shotPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___shotPrefab_2, value);
	}

	inline static int32_t get_offset_of_shootingRate_3() { return static_cast<int32_t>(offsetof(WeaponScript_t574148135, ___shootingRate_3)); }
	inline float get_shootingRate_3() const { return ___shootingRate_3; }
	inline float* get_address_of_shootingRate_3() { return &___shootingRate_3; }
	inline void set_shootingRate_3(float value)
	{
		___shootingRate_3 = value;
	}

	inline static int32_t get_offset_of_shootCooldown_4() { return static_cast<int32_t>(offsetof(WeaponScript_t574148135, ___shootCooldown_4)); }
	inline float get_shootCooldown_4() const { return ___shootCooldown_4; }
	inline float* get_address_of_shootCooldown_4() { return &___shootCooldown_4; }
	inline void set_shootCooldown_4(float value)
	{
		___shootCooldown_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
