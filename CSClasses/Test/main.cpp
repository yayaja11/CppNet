#define LANG_KOR
#define WIN32

#include <string>
#include <CSClasses\CSClasses.h>

using namespace std;
using namespace System;
using namespace System::Collections::Generic;

int main(void)
{
	cout.imbue(locale("korean"));
	cin.imbue(locale("korean"));

	CSClasses::KMC::Decimal64 d = 2.0;
	CSClasses::KMC::Decimal64 d2 = 2.6;

	d -= d2;

	Console::WriteLine(d.ToString());
	Console::WriteLine(d2.ToString());

	MAIN_END
}