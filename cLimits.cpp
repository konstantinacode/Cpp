#include <iostream>
#include <climits>
using namespace std;

int main() {
	short smax = SHRT_MAX;
	int imax = INT_MAX;
	unsigned uimax = UINT_MAX;
	long lmax = LONG_MAX;
	unsigned long ulmax = ULONG_MAX;
	cout << "Short max: " << smax << endl << "Integer max: " << imax << endl
		<< "Unsigned integer max: " << uimax << endl << "long max: " << lmax << endl
		<< "Unsigned long max: " << ulmax << "\n"<< endl;

	//overflow!!!
	unsigned short s = USHRT_MAX;
	cout << "short = " << s << endl;
	s++;
	cout << "short = " << s << endl;

	system("PAUSE"); //so the window stays open

	return 0;
}