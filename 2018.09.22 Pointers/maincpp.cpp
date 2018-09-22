#include<iostream>
#include<ctime>

using namespace std;

int main() {

	srand(time(0));
	
	int size = 10;
	int* pArr = new int[size];

	for (int i = 0; i < size; ++i) // initialization pArr[]
		*(pArr + i) = rand() % 11;

	cout << "pArr[10]:\n"; // show the value of pArr[]
	for (int i = 0; i < size; ++i)
		cout << *(pArr + i);

	int number = 0;
	cout << "\nEnter number:";
	cin >> number;
	--size;
	for (int i = number; i < size; ++i) // redefinition the value of the pArr's[] elements
		*(pArr + i) = *(pArr + i + 1);

	int* pArr1 = new int[size]; // 
	for (int i = 0; i < size; ++i)
		*(pArr1 + i) = *(pArr + i);

	delete pArr;
	pArr = NULL;

	cout << "pArr[9]:\n"; // show the value of the pArr1[]
	for (int i = 0; i < size; ++i)
		cout << *(pArr1 + i);
	cout << '\n';

	delete pArr1;
	pArr1 = NULL;

	system("pause");
	return 0;
}