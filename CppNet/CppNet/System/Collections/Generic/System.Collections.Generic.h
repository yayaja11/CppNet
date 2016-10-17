#ifndef N_SYSTEM_COLLECTIONS_GENERIC_H
#define N_SYSTEM_COLLECTIONS_GENERIC_H

#include "ICollection.h"
#include "IEnumerable.h"
#include "IEnumerator.h"
#include "IList.h"
#include "Queue.h"
#include "IDictionary.h"

#include <vector>
#include <map>

namespace System
{
	namespace Collections
	{
		namespace Generic
		{
			template<class T>
			using List = std::vector<T>;

			template<class TKey, class TValue>
			using Dictionary = std::map<TKey, TValue>;
		}
	}
}

#endif