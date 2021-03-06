#ifndef SYSTEM_OBJECT_H
#define SYSTEM_OBJECT_H

#include "../../Defines.h"

#include "Boolean.h"
#include "String.h"

namespace CppNet
{
	namespace System
	{
		class Object
		{
		public:
			virtual ~Object() = default;

		public:
			virtual Boolean operator==(const Object& obj) const;
			virtual Boolean operator!=(const Object& obj) const;

		public:
			virtual inline Boolean Equals(const Object& obj) const;
			static inline Boolean Equals(const Object& obj, const Object& obj2);

			static inline Boolean ReferenceEquals(Object& obj, Object& obj2);

			virtual inline String ToString() const;
		};
	}
}

#include "Object.inl"

#endif