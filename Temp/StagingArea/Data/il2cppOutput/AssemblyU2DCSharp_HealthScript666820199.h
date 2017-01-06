#pragma once

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

// HealthScript
struct  HealthScript_t666820199  : public MonoBehaviour_t3012272455
{
public:
	// System.Int32 HealthScript::hp
	int32_t ___hp_2;
	// System.Boolean HealthScript::isEnemy
	bool ___isEnemy_3;

public:
	inline static int32_t get_offset_of_hp_2() { return static_cast<int32_t>(offsetof(HealthScript_t666820199, ___hp_2)); }
	inline int32_t get_hp_2() const { return ___hp_2; }
	inline int32_t* get_address_of_hp_2() { return &___hp_2; }
	inline void set_hp_2(int32_t value)
	{
		___hp_2 = value;
	}

	inline static int32_t get_offset_of_isEnemy_3() { return static_cast<int32_t>(offsetof(HealthScript_t666820199, ___isEnemy_3)); }
	inline bool get_isEnemy_3() const { return ___isEnemy_3; }
	inline bool* get_address_of_isEnemy_3() { return &___isEnemy_3; }
	inline void set_isEnemy_3(bool value)
	{
		___isEnemy_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
