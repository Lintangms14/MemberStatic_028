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

