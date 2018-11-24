#include "Person.h"

Person::Person(int birth, const char* name, const char* hobby): itsMyBirth(birth){
	strcpy_s(itsMyName, Person::SIZE, name);
	strcpy_s(itsMyHobby, Person::SIZE, hobby);
}


bool
Person::Set_Data() {
	std::cout << "\nEnter Birth: ";
	std::cin >> itsMyBirth;
	std::cout << "\nEnter Name: ";
	std::cin >> itsMyName;
	std::cout << "\nEnter hobby: ";
	std::cin >> itsMyHobby;
	return true;
}

void
Person::Show_Data() const {
	std::cout << "\nBirth: " << itsMyBirth << ", Name: " << itsMyName << ", Hobby: " << itsMyHobby << '\n';
}

bool
Person::Input_Name() {
	std::cout << "\nEnter Name: ";
	std::cin >> itsMyName;
	return true;
}

const char*
Person::Get_Name()const {
	return itsMyName;
}

bool
Person::Input_Hobby() {
	std::cout << "\nEnter hobby: ";
	std::cin >> itsMyHobby;
	return true;
}

const char*
Person::Get_Hobby()const {
	return itsMyHobby;
}

bool
Person::Input_Birth() {
	std::cout << "\nEnter Birth: ";
	std::cin >> itsMyBirth;
	return true;
}

unsigned int
Person::Get_Birth()const {
	return itsMyBirth;
}