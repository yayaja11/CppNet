
/*
	2016.09.07
	Created by kmc7468
*/

#ifndef SYSTEM_H

#define SYSTEM_H

namespace System
{
	using Boolean = bool;
	using Char = wchar_t;

	using Byte = unsigned char;
	using SByte = signed char;

	using Int16 = short;
	using Int32 = int;
	using Int64 = long long;

	using UInt16 = unsigned short;
	using UInt32 = unsigned int;
	using UInt64 = unsigned long long;

	using Single = float;
	using Double = double;

	using String = const Char*;
}

#include "Object.h"
#include "Console.h"
#include "Math.h"

System::Console Console;
System::Math Math;

#endif