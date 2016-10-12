#ifndef UTILITY_H
#define UTILITY_H

#include "Defines.h"

#include "System/Boolean.h"

#include <type_traits>

#define interface struct
#define var auto

#define nameof(x) String(#x);
#define typeof(x) typeid(x)
#define MAIN_END system("pause");return 0;

#define dref(t) std::remove_reference<##t>::type
#define dcst(from, to_type) (*const_cast<to_type##*>(&##from))

#define _is(from_type, to_type) is<to_type, from_type>()
#define __is(from, to_type) is<to_type>(from)

#define _as(from, to_type) as<to_type>(from)

#define GET
#define SET

// 일반적인 프로퍼티
#define prop(type, name, getter, setter) \
class{\
private:\
type value;\
public:\
operator type() {\
getter\
;\
}\
type##& operator=(const type##&value){\
setter\
;return this->value;\
}\
} name;

// 초기 값이 있는 일반적인 프로퍼티
#define props(type, name, getter, setter, start) \
class{\
private:\
type value = start;\
public:\
operator type() {\
getter\
;\
}\
type##& operator=(const type##&value){\
setter\
;return this->value;\
}\
} name;

// value 변수가 내장되지 않은 일반적인 프로퍼티
#define propv(type, name, getter, setter) \
class{\
public:\
operator type() {\
getter\
;\
}\
type##& operator=(const type##&value){\
setter\
;return this->value;\
}\
} name;

// 읽기 전용인 프로퍼티
#define propg(type, name, getter) \
class{\
private:\
type value;\
public:\
operator type() {\
getter\
;\
}\
} name;

// 읽기 전용이고 초기 값이 있는 프로퍼티
#define propgs(type, name, getter, start) \
class{\
private:\
type value = start;\
public:\
operator type() {\
getter\
;\
}\
} name;

// value 변수가 내장되지 않고 읽기 전용인 프로퍼티
#define propgv(type, name, getter) \
class{\
public:\
operator type() {\
getter\
;\
}\
} name;

template <typename T, typename U>
inline System::Boolean is(U&& u)
{
	std::is_base_of<U, T> r;

	System::Boolean result = r();

	if (result) return result;
	else
	{
		std::is_base_of<T, U> r2;

		return r2();
	}
}

template<typename T, typename U>
inline System::Boolean is()
{
	std::is_base_of<U, T> r;

	System::Boolean result = r();

	if (result) return result;
	else
	{
		std::is_base_of<T, U> r2;

		return r2();
	}
}

template <typename T, typename U>
inline T as(U&& u)
{
	return dynamic_cast<T>(u);
}

#endif