﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Linq.SortSequenceContext`2<System.Object,System.Single>
struct SortSequenceContext_2_t2323801301;
// System.Func`2<System.Object,System.Single>
struct Func_2_t2256885953;
// System.Collections.Generic.IComparer`1<System.Single>
struct IComparer_1_t3657916430;
// System.Linq.SortContext`1<System.Object>
struct SortContext_1_t70478024;
// System.Object[]
struct ObjectU5BU5D_t11523773;

#include "codegen/il2cpp-codegen.h"
#include "System_Core_System_Linq_SortDirection2805156518.h"

// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Single>::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Linq.SortDirection,System.Linq.SortContext`1<TElement>)
extern "C"  void SortSequenceContext_2__ctor_m314153801_gshared (SortSequenceContext_2_t2323801301 * __this, Func_2_t2256885953 * ___selector0, Il2CppObject* ___comparer1, int32_t ___direction2, SortContext_1_t70478024 * ___child_context3, const MethodInfo* method);
#define SortSequenceContext_2__ctor_m314153801(__this, ___selector0, ___comparer1, ___direction2, ___child_context3, method) ((  void (*) (SortSequenceContext_2_t2323801301 *, Func_2_t2256885953 *, Il2CppObject*, int32_t, SortContext_1_t70478024 *, const MethodInfo*))SortSequenceContext_2__ctor_m314153801_gshared)(__this, ___selector0, ___comparer1, ___direction2, ___child_context3, method)
// System.Void System.Linq.SortSequenceContext`2<System.Object,System.Single>::Initialize(TElement[])
extern "C"  void SortSequenceContext_2_Initialize_m1597384717_gshared (SortSequenceContext_2_t2323801301 * __this, ObjectU5BU5D_t11523773* ___elements0, const MethodInfo* method);
#define SortSequenceContext_2_Initialize_m1597384717(__this, ___elements0, method) ((  void (*) (SortSequenceContext_2_t2323801301 *, ObjectU5BU5D_t11523773*, const MethodInfo*))SortSequenceContext_2_Initialize_m1597384717_gshared)(__this, ___elements0, method)
// System.Int32 System.Linq.SortSequenceContext`2<System.Object,System.Single>::Compare(System.Int32,System.Int32)
extern "C"  int32_t SortSequenceContext_2_Compare_m707648596_gshared (SortSequenceContext_2_t2323801301 * __this, int32_t ___first_index0, int32_t ___second_index1, const MethodInfo* method);
#define SortSequenceContext_2_Compare_m707648596(__this, ___first_index0, ___second_index1, method) ((  int32_t (*) (SortSequenceContext_2_t2323801301 *, int32_t, int32_t, const MethodInfo*))SortSequenceContext_2_Compare_m707648596_gshared)(__this, ___first_index0, ___second_index1, method)
