#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// WeaponScript[]
struct WeaponScriptU5BU5D_t3475179870;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// EnemyScript
struct  EnemyScript_t1731161683  : public MonoBehaviour_t3012272455
{
public:
	// WeaponScript[] EnemyScript::weapons
	WeaponScriptU5BU5D_t3475179870* ___weapons_2;

public:
	inline static int32_t get_offset_of_weapons_2() { return static_cast<int32_t>(offsetof(EnemyScript_t1731161683, ___weapons_2)); }
	inline WeaponScriptU5BU5D_t3475179870* get_weapons_2() const { return ___weapons_2; }
	inline WeaponScriptU5BU5D_t3475179870** get_address_of_weapons_2() { return &___weapons_2; }
	inline void set_weapons_2(WeaponScriptU5BU5D_t3475179870* value)
	{
		___weapons_2 = value;
		Il2CppCodeGenWriteBarrier(&___weapons_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
