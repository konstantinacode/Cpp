#include<corecrt_memcpy_s.h>
#include<iostream>
using namespace std;

class Array {
	float* buffer;
	int size;
private:
	void Replicate(const Array& in) {
		size = proto.size;
		buffer = new float[size];
		memcpy(buffer, proto.buffer, size * sizeof(float));
	}
public:
	Array(int items) {
		size = items;
		buffer = new float[items];
	}
	Array() :size(0), buffer(nullptr) {}
	~Array() {
		if (buffer) delete[] buffer;
	}
	Array(const Array& proto) {
		/*size = proto.size;
		buffer = new float[size];
		memcpy(buffer, proto.buffer, size * sizeof(float));*/
		Replicate(proto);
	}
	Array& operator =(const Array & src) {
		if (&src == this)
			return *this;
		if (buffer != nullptr)
			delete[] buffer;
		size = src.size;
		buffer = new float[size];
		memcpy(buffer, src.buffer, size * sizeof(float));
		//Replicate(src);
		return *this;
	}
	
};

void main(int argc, char* argv[]) {
	/*Array a1(4);
	a1[0] = 1.f;

	Array a2 = a1; //calls the copy constructor
	a2[0] = 2.f;

	Array a3(a2);
	a3[0] = 3.f;*/

	Array a1(4);
	Array a2, a3;
	a3 = a2 = a1; //with the second version we cannot do that
	//a1 = a1; // it's not wrong but it doesn't work right

	cout << a1[0] << " " << a2[0] << " " << a3[0]; //prints 1 2 3 

	system("Pause");
	return 0;
}
