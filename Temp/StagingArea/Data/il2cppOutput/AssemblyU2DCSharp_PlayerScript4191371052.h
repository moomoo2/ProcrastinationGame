#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody2D
struct Rigidbody2D_t3632243084;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerScript
struct  PlayerScript_t4191371052  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Vector2 PlayerScript::speed
	Vector2_t3525329788  ___speed_2;
	// UnityEngine.Vector2 PlayerScript::movement
	Vector2_t3525329788  ___movement_3;
	// UnityEngine.Rigidbody2D PlayerScript::rigidbodyComponent
	Rigidbody2D_t3632243084 * ___rigidbodyComponent_4;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(PlayerScript_t4191371052, ___speed_2)); }
	inline Vector2_t3525329788  get_speed_2() const { return ___speed_2; }
	inline Vector2_t3525329788 * get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(Vector2_t3525329788  value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_movement_3() { return static_cast<int32_t>(offsetof(PlayerScript_t4191371052, ___movement_3)); }
	inline Vector2_t3525329788  get_movement_3() const { return ___movement_3; }
	inline Vector2_t3525329788 * get_address_of_movement_3() { return &___movement_3; }
	inline void set_movement_3(Vector2_t3525329788  value)
	{
		___movement_3 = value;
	}

	inline static int32_t get_offset_of_rigidbodyComponent_4() { return static_cast<int32_t>(offsetof(PlayerScript_t4191371052, ___rigidbodyComponent_4)); }
	inline Rigidbody2D_t3632243084 * get_rigidbodyComponent_4() const { return ___rigidbodyComponent_4; }
	inline Rigidbody2D_t3632243084 ** get_address_of_rigidbodyComponent_4() { return &___rigidbodyComponent_4; }
	inline void set_rigidbodyComponent_4(Rigidbody2D_t3632243084 * value)
	{
		___rigidbodyComponent_4 = value;
		Il2CppCodeGenWriteBarrier(&___rigidbodyComponent_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
