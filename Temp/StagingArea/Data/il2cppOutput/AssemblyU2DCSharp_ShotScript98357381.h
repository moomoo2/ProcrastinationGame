﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ShotScript
struct  ShotScript_t98357381  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 ShotScript::damage
	int32_t ___damage_2;
	// System.Boolean ShotScript::isEnemyShot
	bool ___isEnemyShot_3;

public:
	inline static int32_t get_offset_of_damage_2() { return static_cast<int32_t>(offsetof(ShotScript_t98357381, ___damage_2)); }
	inline int32_t get_damage_2() const { return ___damage_2; }
	inline int32_t* get_address_of_damage_2() { return &___damage_2; }
	inline void set_damage_2(int32_t value)
	{
		___damage_2 = value;
	}

	inline static int32_t get_offset_of_isEnemyShot_3() { return static_cast<int32_t>(offsetof(ShotScript_t98357381, ___isEnemyShot_3)); }
	inline bool get_isEnemyShot_3() const { return ___isEnemyShot_3; }
	inline bool* get_address_of_isEnemyShot_3() { return &___isEnemyShot_3; }
	inline void set_isEnemyShot_3(bool value)
	{
		___isEnemyShot_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
