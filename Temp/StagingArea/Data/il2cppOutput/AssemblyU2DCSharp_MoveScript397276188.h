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

// MoveScript
struct  MoveScript_t397276188  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Vector2 MoveScript::speed
	Vector2_t3525329788  ___speed_2;
	// UnityEngine.Vector2 MoveScript::direction
	Vector2_t3525329788  ___direction_3;
	// UnityEngine.Vector2 MoveScript::movement
	Vector2_t3525329788  ___movement_4;
	// UnityEngine.Rigidbody2D MoveScript::rigidbodyComponent
	Rigidbody2D_t3632243084 * ___rigidbodyComponent_5;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(MoveScript_t397276188, ___speed_2)); }
	inline Vector2_t3525329788  get_speed_2() const { return ___speed_2; }
	inline Vector2_t3525329788 * get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(Vector2_t3525329788  value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_direction_3() { return static_cast<int32_t>(offsetof(MoveScript_t397276188, ___direction_3)); }
	inline Vector2_t3525329788  get_direction_3() const { return ___direction_3; }
	inline Vector2_t3525329788 * get_address_of_direction_3() { return &___direction_3; }
	inline void set_direction_3(Vector2_t3525329788  value)
	{
		___direction_3 = value;
	}

	inline static int32_t get_offset_of_movement_4() { return static_cast<int32_t>(offsetof(MoveScript_t397276188, ___movement_4)); }
	inline Vector2_t3525329788  get_movement_4() const { return ___movement_4; }
	inline Vector2_t3525329788 * get_address_of_movement_4() { return &___movement_4; }
	inline void set_movement_4(Vector2_t3525329788  value)
	{
		___movement_4 = value;
	}

	inline static int32_t get_offset_of_rigidbodyComponent_5() { return static_cast<int32_t>(offsetof(MoveScript_t397276188, ___rigidbodyComponent_5)); }
	inline Rigidbody2D_t3632243084 * get_rigidbodyComponent_5() const { return ___rigidbodyComponent_5; }
	inline Rigidbody2D_t3632243084 ** get_address_of_rigidbodyComponent_5() { return &___rigidbodyComponent_5; }
	inline void set_rigidbodyComponent_5(Rigidbody2D_t3632243084 * value)
	{
		___rigidbodyComponent_5 = value;
		Il2CppCodeGenWriteBarrier(&___rigidbodyComponent_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
