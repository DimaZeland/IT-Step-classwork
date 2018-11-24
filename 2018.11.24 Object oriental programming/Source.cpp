#include<iostream>
#include"Person.h"


int main() {
	Person Dima;
	Dima.Set_Data();
	Dima.Show_Data();
	Dima.Input_Birth();
	std::cout << "\nBirth: " << Dima.Get_Birth() << '\n';
	Dima.Input_Name();
	std::cout << "\nName: " << Dima.Get_Name() << '\n';
	Dima.Input_Hobby();
	std::cout << "\nHobby: " << Dima.Get_Hobby() << '\n';



	system("pause");
	return 0;
}