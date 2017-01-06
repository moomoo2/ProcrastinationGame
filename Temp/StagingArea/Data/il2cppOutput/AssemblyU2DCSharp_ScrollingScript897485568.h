#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<UnityEngine.SpriteRenderer>
struct List_1_t3020743694;
// System.Func`2<UnityEngine.SpriteRenderer,System.Single>
struct Func_2_t2059939580;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScrollingScript
struct  ScrollingScript_t897485568  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.Vector2 ScrollingScript::speed
	Vector2_t3525329788  ___speed_2;
	// UnityEngine.Vector2 ScrollingScript::direction
	Vector2_t3525329788  ___direction_3;
	// System.Boolean ScrollingScript::isLinkedToCamera
	bool ___isLinkedToCamera_4;
	// System.Boolean ScrollingScript::isLooping
	bool ___isLooping_5;
	// System.Collections.Generic.List`1<UnityEngine.SpriteRenderer> ScrollingScript::backgroundPart
	List_1_t3020743694 * ___backgroundPart_6;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(ScrollingScript_t897485568, ___speed_2)); }
	inline Vector2_t3525329788  get_speed_2() const { return ___speed_2; }
	inline Vector2_t3525329788 * get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(Vector2_t3525329788  value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_direction_3() { return static_cast<int32_t>(offsetof(ScrollingScript_t897485568, ___direction_3)); }
	inline Vector2_t3525329788  get_direction_3() const { return ___direction_3; }
	inline Vector2_t3525329788 * get_address_of_direction_3() { return &___direction_3; }
	inline void set_direction_3(Vector2_t3525329788  value)
	{
		___direction_3 = value;
	}

	inline static int32_t get_offset_of_isLinkedToCamera_4() { return static_cast<int32_t>(offsetof(ScrollingScript_t897485568, ___isLinkedToCamera_4)); }
	inline bool get_isLinkedToCamera_4() const { return ___isLinkedToCamera_4; }
	inline bool* get_address_of_isLinkedToCamera_4() { return &___isLinkedToCamera_4; }
	inline void set_isLinkedToCamera_4(bool value)
	{
		___isLinkedToCamera_4 = value;
	}

	inline static int32_t get_offset_of_isLooping_5() { return static_cast<int32_t>(offsetof(ScrollingScript_t897485568, ___isLooping_5)); }
	inline bool get_isLooping_5() const { return ___isLooping_5; }
	inline bool* get_address_of_isLooping_5() { return &___isLooping_5; }
	inline void set_isLooping_5(bool value)
	{
		___isLooping_5 = value;
	}

	inline static int32_t get_offset_of_backgroundPart_6() { return static_cast<int32_t>(offsetof(ScrollingScript_t897485568, ___backgroundPart_6)); }
	inline List_1_t3020743694 * get_backgroundPart_6() const { return ___backgroundPart_6; }
	inline List_1_t3020743694 ** get_address_of_backgroundPart_6() { return &___backgroundPart_6; }
	inline void set_backgroundPart_6(List_1_t3020743694 * value)
	{
		___backgroundPart_6 = value;
		Il2CppCodeGenWriteBarrier(&___backgroundPart_6, value);
	}
};

struct ScrollingScript_t897485568_StaticFields
{
public:
	// System.Func`2<UnityEngine.SpriteRenderer,System.Single> ScrollingScript::<>f__am$cache5
	Func_2_t2059939580 * ___U3CU3Ef__amU24cache5_7;

public:
	inline static int32_t get_offset_of_U3CU3Ef__amU24cache5_7() { return static_cast<int32_t>(offsetof(ScrollingScript_t897485568_StaticFields, ___U3CU3Ef__amU24cache5_7)); }
	inline Func_2_t2059939580 * get_U3CU3Ef__amU24cache5_7() const { return ___U3CU3Ef__amU24cache5_7; }
	inline Func_2_t2059939580 ** get_address_of_U3CU3Ef__amU24cache5_7() { return &___U3CU3Ef__amU24cache5_7; }
	inline void set_U3CU3Ef__amU24cache5_7(Func_2_t2059939580 * value)
	{
		___U3CU3Ef__amU24cache5_7 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__amU24cache5_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
