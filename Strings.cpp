#include <string>
#include <iostream>
using namespace std; //std::string

int main() {
	string s1, s2;
	cin >> s1;
	s2 = "copy of " + s1;

	s1 = "new string";
	cout << s1 << endl << s2 << endl;

	char buffer[20] = "try me";
	string str = buffer;

	str.c_str(); //string to array

	str.data(); //access inside buffer, we cann't change

	cout << str.length() << endl << str.size() << endl; //same

	string str1 = "try me ";
	string str2 = "now";
	string str3 = str1 + str2; //try me now
	str1.append(str2); //try me now
	str1 += " again"; // (append) try me now again

	//access to characters
	cout << str3 << endl;
	cout << str3[2] << endl;
	str3[4] = 'i';
	str3[5] = 't';
	cout << str3 << endl; //try it now

	str1 = "Android";
	str2 = "Androids";

	bool _2gt1 = str1 < str2; //true
	str1 = "Android4.2";
	str2 = "Android3.2";
	_2gt1 = str1 < str2; //false

	str1 = "Andro";
	str2 = "Andras";
	_2gt1 = str1 < str2; //false

	//sub-string
	str1 = "I am a healthy camel";
	str2 = "am";

	size_t pos = str1.find(str2); //pos == 2
	pos = str1.find(str2, pos + 1); //pos == 16 (after position 3)

	//locale
	str2 = "Ελληνικά\n";
	setlocale(LC_ALL, "Greek");
	cout << str2;

	//printf
	int hits = 33;
	long total = 1000;
	printf("We scored %d out of %ld points.\nThis is %.2f%%.\n", hits, total, 100.f*hits / (float)total);

	//scanf
	char name[80];
	int age;
	int read = scanf_s("name: %s, %d ", name, &age);

	system("PAUSE");
	return 0;
}
