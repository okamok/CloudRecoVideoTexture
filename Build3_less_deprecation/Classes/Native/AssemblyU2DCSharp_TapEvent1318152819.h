﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TapEvent
struct  TapEvent_t1318152819  : public MonoBehaviour_t1158329972
{
public:
	// System.String TapEvent::targetURL
	String_t* ___targetURL_2;

public:
	inline static int32_t get_offset_of_targetURL_2() { return static_cast<int32_t>(offsetof(TapEvent_t1318152819, ___targetURL_2)); }
	inline String_t* get_targetURL_2() const { return ___targetURL_2; }
	inline String_t** get_address_of_targetURL_2() { return &___targetURL_2; }
	inline void set_targetURL_2(String_t* value)
	{
		___targetURL_2 = value;
		Il2CppCodeGenWriteBarrier(&___targetURL_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
