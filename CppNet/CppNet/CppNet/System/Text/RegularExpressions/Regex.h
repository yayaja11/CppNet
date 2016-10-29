#ifndef CPPNET_SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_H
#define CPPNET_SYSTEM_TEXT_REGULAREXPRESSIONS_REGEX_H

#include "../../../../Defines.h"

#include "../../Runtime/Serialization/ISerializable.h"

#include "RegexRunnerFactory.h"

namespace CppNet
{
	namespace System
	{
		namespace Text
		{
			namespace RegularExpressions
			{
				class Regex : public Runtime::Serialization::ISerializable
				{
				protected:
					String pattern;
				};
			}
		}
	}
}

#endif