#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


// WeaponScript
struct WeaponScript_t574148135;

#include "mscorlib_System_Array2840145358.h"
#include "AssemblyU2DCSharp_WeaponScript574148135.h"

#pragma once
// WeaponScript[]
struct WeaponScriptU5BU5D_t3475179870  : public Il2CppArray
{
public:
	ALIGN_TYPE (8) WeaponScript_t574148135 * m_Items[1];

public:
	inline WeaponScript_t574148135 * GetAt(il2cpp_array_size_t index) const { return m_Items[index]; }
	inline WeaponScript_t574148135 ** GetAddressAt(il2cpp_array_size_t index) { return m_Items + index; }
	inline void SetAt(il2cpp_array_size_t index, WeaponScript_t574148135 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
