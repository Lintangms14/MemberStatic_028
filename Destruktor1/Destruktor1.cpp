#include <iostream>
using namespace std;

class angka {
private:
	int* arr;
	int panjang;
public:
	angka(int);
	~angka();
	void cetakdata();
	void isidata();
};

angka::angka(int i) {
	panjang = i;
	arr = new int[i];
	isidata();
}

angka::~angka() {
	cout << endl;
	cetakdata();
	delete[]arr;
	cout << "Alamat Array Sudah Dilepaskan" << endl;
}

void angka::cetakdata() {
	for (int i = i <= panjang; i++;) {
		cout << i << " = " << arr[i] << endl;
	}
}