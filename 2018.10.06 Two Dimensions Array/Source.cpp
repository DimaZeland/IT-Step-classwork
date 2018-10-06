#include<ctime>
#include<iostream>

using namespace std;

void SetArr(int[][10], int = 10); // set 
void SetArr1(int[][10], int = 10);
int** CreateDynamicArr(int = 5); // create 2 dynamic array
void DeleteDynamicArr(int**, int rouds = 5, int columns = 5); // delete 2 dynamic array
void SetDynamicArr(int**, int rouds = 5, int columns = 5); // set the value of 2 dynamic array
void ShowDynamicArr(int**, int rouds = 5, int columns = 5); // set the value of 2 dynamic array
void ChangeRoudsArr(int**, int firstroud, int secondroud, int rouds = 5, int columns = 5); // change the value of 2 dynamic array

int main() {
	srand(time(0));
	//int Arr[10][10];
	int** pArr = CreateDynamicArr(10);
	SetDynamicArr(pArr);
	ChangeRoudsArr(pArr, 0, 4);
	cout << endl;
	ShowDynamicArr(pArr);
	DeleteDynamicArr(pArr);

	//system("pause");
	cout << "DDDDDD";
	cin.get();
	return 0;
}

void SetArr(int Arr[][10], int size) {
		for (int i = 0; i < size; ++i){
		for (int j = 0; j < size; ++j){
			Arr[i][j] = rand() % 10;
			cout << Arr[i][j] << ' ';
		}
		cout << '\n';
		}
}

void SetArr1(int Arr[][10], int size) {
	for (int i = 0; i < size*size; ++i) {
		cout << Arr[0][i] << ' ';
		if (0 == i % 5)
			cout << endl;
	}

}

int** CreateDynamicArr(int size) { // create 2 dynamic array
	int** Arr = new int*[5];
	for (int i = 0; i < size; ++i)
		Arr[i] = new int[size];
	return Arr;


	for (int i = 0; i < size*size; ++i) {
		cout << Arr[0][i] << ' ';
		if (0 == i % 5)
			cout << endl;
	}

}

void DeleteDynamicArr(int** Arr, int rouds, int columns) { // delete 2 dynamic array
	for (int i = 0; i < rouds; ++i)
		delete Arr[i];
	delete[]Arr;
}

void SetDynamicArr(int** Arr, int rouds, int columns) { // set the value of 2 dynamic array
	for (int i = 0; i < rouds; ++i) {
		for (int j = 0; j < rouds; ++j) {
			Arr[i][j] = rand() % 10;
			cout << Arr[i][j] << ' ';
		}
		cout << '\n';
	}
}

void ShowDynamicArr(int** Arr, int rouds, int columns) { // set the value of 2 dynamic array
	for (int i = 0; i < rouds; ++i) {
		for (int j = 0; j < rouds; ++j)
			cout << Arr[i][j] << ' ';
		cout << '\n';
	}
}

void ChangeRoudsArr(int** Arr, int firstroud, int secondroud, int rouds, int columns) { // change the value of 2 dynamic array
	for (int i = 0; i < columns; ++i)
		swap(Arr[firstroud][i], Arr[secondroud][i]);
}












