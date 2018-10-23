#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <set>
#include <vector>
#include <string.h>
#include <algorithm>

#include "Utils.h"

using namespace std;
/*
void string_examples ( void ) {
	// For an extented set of examples with std::strings check this URL http://anaturb.net/C/string_exapm.htm
	char *line = "Some text";

	// Initialization 
	// Using a char *
    string s1 (line);
    cout << "s1  is: " << s1 << endl;

    // copy constructor
    string s2 (s1);
    cout << "s2  is: " << s2 << endl;
		
    // 1st arg - C++ string
    // 2nd arg - start position
    // 3rd arg - number of characters
    string s3 (s2,5,4); // copy word 'text' from s2
    cout << "s3  is: " << s3 << endl;

	// again using iterators
	// 1 - start iterator
    // 2 - end iterator
    string s4 (s2.begin()+5,s2.end());
    cout << "s4  is: " << s4 << endl;

	// We can add strings
	string s5 = s4 + " Some";
	cout << "s5  is: " << s5 << endl;

	// We can append to strings
	s5 += " And Some";
	cout << "s5  is: " << s5 << endl;
	// or by using append()
	s5.append(" And Again");
	cout << "s5  is: " << s5 << endl;

	// Iterate all characters
	string s6("Hello World");
	string::iterator it;
	cout << "s6 char-by-char: " << endl;
	// TODO: use the iterator to print the characters of the string

	// Get the const char * from a string
	const char *buf = s6.c_str();	// or .data()
	cout << "buf is: " << buf << endl;

	// Compare
	if (s1.compare(s2) == 0) {
		cout << "s1 is equal to s2" << endl;
	}

	// Check if empty
	string s7;
	if (s7.empty())
		cout << "s7 is empty" << endl;

	// Find last occurence of sub string
	cout << "Location of last \"And\" in s5 (" << s5 << ") is :: " << s5.rfind("And") << endl;

	// TODO Now try string.find(string s) and see the difference

	// Get the substring of a string
	// substr member function returns the substring of a string
	// string.substr(size_t pos = 0, size_t len = npos) const;
	// TODO: use substr to get the substring of s5 from the last "And" to the end of it and show it on console
}
*/
void simpleFileWriteExample ( void ) {
	// Creates an instance of ofstream, and opens example.txt (in ASCII (Text) Mode)
	cout << "Opening ofstream_ascii_example.txt file for writing...\n";
	/* ofstream :: Output stream class to operate on files.
	 *             File streams are associated with files either on construction (as next line), 
	 *             or by calling member open (see the point we call open to append something at the end of the file).
	 *
	 * Some basic public members of ofstream
	 *
	 * operator <<	:: outputs formatted text
	 * put			:: puts a character
					-- put (char c)

	 * write		:: writes a block of data (binary format)
					-- write(const char* s, streamsize n)

	 * tellp		:: tells us where we are (which position)
					-- tellp()

     * seekp		:: set the position
					-- seekp (streampos pos);
					-- seekp (streamoff offset, ios_base::seekdir way)
						- way can be one of the following
						-	ios_base::beg	beginning of the stream
						-	ios_base::cur	current position in the stream
						-	ios_base::end	end of the stream

	 * flush		:: flushed data from output stream buffer to the file

	 * close		:: closes the file
	 */

	//δημιουργούμαι ένα ρεύμα αρχείου που θα γράφει στο αρχείο
	//ofstream μόνο για γράψιμο, αν δεν το βρει το φτιάχνει
	ofstream oFile("ofstream_ascii_example.txt");

	//The file could not be opened
	if (!oFile.is_open()) {
		printf("Could not open ofstream_ascii_example.txt!\n");
		return;
	}
	//Safely use the file stream
	else {
		//Outputs to example.txt trough a_file
		string text("Output some text to the file\n\n");
		cout << "Writing text to file\n";
		oFile << text;

		//Now lets output some int values
		cout << "Writing int values to file\n";
		for (int i = 0; i < 10; i++) {
			oFile << i << endl;
		}
		oFile << "\n";

		//And some doubles with different precissions;
		double PI = 3.1415926536;
		cout << "Writing double values to file\n";
		for (int i = 0; i < 11; i++) {
			//setprecission is defined in <iosmanip>
			oFile << setprecision(11 - i) << PI << endl;
		}
		oFile << endl;

		//Go to the first line in the file and write
		oFile.seekp(0, ios_base::beg);
		oFile << "Surname Name\n";
		//cout << "Don't forget to close file!\n";
		//Close the file stream explicitly
		oFile.close();
	}

	//Now lets append some values in the file
	oFile.open("ofstream_ascii_example.txt", ios::app);
	oFile << endl << "Appended String!" << endl;
	oFile.close();
	
}

void simpleReadExample ( const char *fName ) {
	/* ifstream :: Input stream class to read from files.
	 * 
	 * Some basic public members of ifstream
	 *
	 * operator >>	:: extracts formatted input
	 * get			:: get characters
				    -- get (char& c)
					-- get (char* s, streamsize n);		// default delim '\n'
				    -- get (char* s, streamsize n, char delim);

	 * getline		:: get a line
					-- get (char* s, streamsize n ); 	// default delim '\n'
					-- getline (char* s, streamsize n, char delim );

	 * read			:: the write equivalent
					-- read (char* s, streamsize n);

	 * tellg		:: as previously stated but not its tellg NOT tellp
					-- tellg()

     * seekg		:: as previously stated but not its seekg NOT seekp
					-- seekg (streampos pos);
					-- seekg (streamoff offset, ios_base::seekdir way)
						- way can be one of the following
						-	ios_base::beg	beginning of the stream
						-	ios_base::cur	current position in the stream
						-	ios_base::end	end of the stream

	 * clear			:: clears error bit properties (ex. when you reach end of file eof bit is raised)
					   in order to use seekp to go back to start you have to first use clear

     * close			:: closes the file
	 */

	// Example of reading data from ASCII file
	ifstream iFile(fName);
	string text;
	string x;
	float y;

	//>> to string will return characters until the next 
	iFile >> text >> x >> y;
	cout << "Read from iFile::\n" << text << " " << x << " " << y << endl;

	iFile.close();
	
}

void readWriteBinaryExample ( void ) {
	fstream file("binaryReadWriteExample.txt",ios::out | ios::in | ios::binary);

	if (!file.is_open()) {
		printf("Could not open binaryReadWriteExample.txt!\n");
		return;
	}
	string text = "CUSTOM HEADER FILE\n";
	file.write(text.c_str(), text.size());

	int numOfInts;
	cout << "Give an int\n";
	cin >> numOfInts;
	cout << "Computing and storing factorial of 0-to-" << numOfInts << endl;

	file.write((char *)&numOfInts, sizeof(int));

	for (int i = 0; i < numOfInts; i++) {
		int val = (i*i);
		file.write((char *)&val, sizeof(int));
	}

	//Make sure everything passed into the file
	file.flush();

	//Now go back to start of file and lets read it
	file.clear();
	file.seekg(0, ios_base::beg);

	const int bufSize = 64;
	char buf[bufSize];
	file.getline(buf, bufSize);

	if (_stricmp(buf, "CUSTOM HEADER FILE") == 0) { //συγκρίνει δύο string μεταξύ τους
		cout << "This is a file of our own custom format!\n";

		int numVals;
		file.read((char *)&numVals, sizeof(int));
		cout << "File contains " << numVals << " integers\n";

		int *valsArray = new int[numVals];
		file.read((char *)valsArray, sizeof(int)*numVals);

		for (int i = 0; i < numOfInts; i++) {
			cout << "Value " << i << " is :: " << valsArray[i] << endl;
		}

		delete[]valsArray;
	}
}
/*
int readInputFile (char *inputFile, vector<string> vContainer) {
	
}
*/