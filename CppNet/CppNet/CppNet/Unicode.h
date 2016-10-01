#ifndef CPPNET_UNICODE_H
#define CPPNET_UNICODE_H

#include <memory>

#include "../System/Object.h"
#include "../System/Char.h"

namespace CppNet
{
	class Unicode : public System::Object
	{
	public:
		virtual ~Unicode() = default;

		virtual System::Int32 GetDecimalDightValue(const System::Char& c) const = 0;
		virtual Unicode* Clone() const = 0;

	private:
		static Unicode* unicode;

	public:
		static inline const Unicode* const GetUnicode();
//#ifdef UNICODE_CUSTOM
		static inline void SetUnicode(Unicode* uni);
//#endif
	};
}

#include "Unicode.inl"

#endif