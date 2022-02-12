// Завдання 1. Написати програму, яка дає користувачеві ввести 5 прізвищ студентів, а потім сортує їх за зростанням та спаданням
#include <iostream>
#include <string>
#include <stdlib.h>//бібліотека, яка містить функцію strcmp для сортування рядків
using namespace std;
void inputSurname(string* Surname);//функція вводу прізвищ
void printSurname(string* Surname);// функція виводу прізвищ
void sortSurnameIncrease(string* Surname);//функція сортування рядків за зростанням
void sortSurnameDecreace(string* Surname);// функція сортування рядків за спаданням
int main()
{
	string Surname[5];//використовуємо масив типу рядок, який містить 5 рядків 
	inputSurname(Surname);//звертаємось до функції вводу прізвищ
	cout << "Your studens are:" << endl;
	printSurname(Surname);//звертаємось до функції виводу прізвищ
	cout << "We have sorted your students in ascending order" << endl;
	sortSurnameIncrease(Surname);//звертаємось до функції сортування рядків за зростанням
	printSurname(Surname);//звертаємось до функції виводу прізвищ
	cout << "We have sorted your students in descending order" << endl;
	sortSurnameDecreace(Surname);//звертаємось до функції сортування рядків за спаданням
	printSurname(Surname);//звертаємось до функції виводу прізвищ
}
void inputSurname(string* Surname) {//функція вводу прізвищ
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter  surname  " << i + 1 << "  student" << endl;
		getline(cin, Surname[i]);
	}
}
void printSurname(string* Surname) {// функція виводу прізвищ
	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << " student is " << Surname[i] << " " << endl;
	}
}
void sortSurnameIncrease(string* Surname) {//функція сортування рядків за зростанням
	for (int i = 0; i < 5; i++) {
		for (int j = i + 1; j < 5; j++) {
			if (strcmp(Surname[i].c_str(), Surname[j].c_str()) > 0) swap(Surname[i], Surname[j]);//використовуємо функцію порівняння рядків strcmp, якщо вона більше 0, то значення першого рядка, більше за другий, тоді сортуєм за зростанням
		}
	}
}
void sortSurnameDecreace(string* Surname) {// функція сортування рядків за спаданням
	for (int i = 0; i < 5 - 1; i++)
		for (int j = i + 1; j < 5; j++) {
			if (strcmp(Surname[i].c_str(), Surname[j].c_str())< 0) swap(Surname[i], Surname[j]);//використовуємо функцію порівняння рядків strcmp, якщо вона менше 0, то значення першого рядка, менше за другий, тоді сортуєм за спаданням
		}
}
