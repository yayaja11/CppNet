#include "event.h"
using namespace CppNet;

template<typename delegate>
event<delegate>& event<delegate>::operator+=(delegate& func)
{
	functions.push_back(func);

	return *this;
}

template<typename delegate>
event<delegate>& event<delegate>::operator-=(delegate& func)
{
	auto a = std::find(functions.begin(), functions.end(), func);

	if (a != functions.cend())
		functions.erase(a);

	return *this;
}

template<typename delegate>
template<typename... Args>
void event<delegate>::operator()(Args... args) const
{
	for (auto a : functions)
	{
		a(args...);
	}
}

template<typename delegate>
template<typename Result>
inline event<delegate>& CppNet::event<delegate>::operator+=(Result* func)
{
	operator+=(del(func));

	return *this;
}

template<typename delegate>
template<typename Result>
inline event<delegate>& CppNet::event<delegate>::operator-=(Result* func)
{
	operator-=(del(func));

	return *this;
}