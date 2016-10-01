#define LANG_KOR
#define WIN32

#include <string>
#include <chrono>
#include <tuple>

#include <CppNet/CppNet.h>

using namespace std;
using namespace System;
using namespace System::Collections::Generic;
using namespace CppNet;
using namespace CppNet::KMC;

int main(void)
{
	cout.imbue(locale("korean"));
	cin.imbue(locale("korean"));

	Fraction64 f(1, 6);

	Fraction64 f2(2, 12);

	f = std::get<0>(f.RTCD(f2));

	f.ROAF();

	MAIN_END
}