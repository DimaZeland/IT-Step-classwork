#include<iostream>
#include<vector>
#include"Animal.h"

int main() {
	Animal animal("Antony", 5);
	Cat cat("Meison", 7);
	Dog dog("Lord", 12);

	std::vector<Animal*> Zoo{ &animal, &cat, &dog };
	std::cout << "\nOur Zoo members:\n";
	for (Animal* x : Zoo)
		x->Print();


	system("pause");
	return 0;
}