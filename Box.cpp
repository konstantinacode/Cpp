#include<iostream>
using namespace std;

class Box {
private:
	double height, width, length;
	static int Quantity;//την αρχική τιμή στις static μεταβλητές την δίνω έξω από την τάξη
public:
	double Get_Height() {
		return height;
	}
	void Change_Height(double x) {
		height = x;
	}
	double Get_Width() {
		return width;
	}
	void Change_Width(double x) {
		width = x;
	}
	double Get_Length() {
		return length;
	}
	void Change_Length(double x) {
		length = x;
	}

	Box() {
		height = 5;
		width = 7;
		length = 9;
		Quantity++;
		cout << "Constructor 1 called." << endl;
	}

	//Constructor 2 - passing values
	Box(double l, double w, double h) {
		length = l;
		width = w;
		height = h;
		Quantity++;
		cout << "Constructor 2 called." << endl;
	}

	Box(Box & or1) :length(or1.length), width(or1.width), height(or1.height) {
		Quantity++;
		cout << "CopyConstructor with Initialization list called." << endl;
	}

	/*
	Box(double l = 2.0, double w = 2.0, double h = 2.0) : length(l), width(w), height(h) {
		Quantity++;
		cout << "Constructor with Initialization list called." << endl;
	} */

	~Box() {
		Quantity--;
		cout << "Destructor called." << endl;
	}

	double Volume() {
		return width * length * height;
	}

	double Surface() {
		return 2 * height*width + 2 * height*length + 2 * width*length;
	}

	bool compare(Box &x) {
		return this->Volume() > x.Volume();
	}

	int Display_Quantity() {
		return Quantity;
	}
};

int Box::Quantity = 0;

int main() {
	Box A;
	cout << A.Surface() << endl;
	cout << "Quant:" << A.Display_Quantity() << endl;
	Box B(10, 3, 12);
	cout << B.Surface() << endl;
	cout << "Quant:" << A.Display_Quantity() << endl;
	cout << "Quant:" << B.Display_Quantity() << endl;
	if (A.compare(B)) {
		cout << "B is smaller than A" << endl;
	}
	else {
		cout << "B is equal to or larger than A" << endl;
	}

	{
		Box C[5];
		cout << C[2].Surface() << endl;
		cout << "Quant:" << A.Display_Quantity() << endl;
	}//åäþ ï ôá 5 áíôéêåßìåíá ôïõ ðßíáêá êáôáóôñÝöïíôáé
	cout << "Quant:" << A.Display_Quantity() << endl;

	Box *ptrBoxC = new Box;
	cout << "Surface of Box C: " << ptrBoxC->Surface() << endl;
	cout << "-----" << B.Display_Quantity() << endl;

	delete ptrBoxC; //äéáãñÜöåé ôçí ðåñéï÷Þ ðïõ äß÷íåé ï pointer ü÷é ï ßäéïò ï pointer
	ptrBoxC = &A; //ìðïñþ ôïí äåßêôç íá ôïí áíáèÝóù áëëïý

	cout << "Surface of Box A: " << ptrBoxC->Surface() << endl;
	cout << ptrBoxC->Display_Quantity() << endl; 
	cout << B.Display_Quantity() << endl;
	cout << "---//---" << endl;

	system("pause");
	
}
