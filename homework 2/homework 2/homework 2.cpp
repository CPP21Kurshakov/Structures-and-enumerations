#include <iostream>
#include <string>

struct workPerson
{
	int account;
	std::string name;
	std::string surname;
	float balance;
	float newBalance;
};

void swB(workPerson& person, float newBalance)
{
	person.balance = newBalance;
}

int main()
{
	setlocale(LC_ALL, "Russian");

	workPerson employee;
	std::cout << "Введите номер счёта: ";
	std::cin >> employee.account;
	std::cout << "Введите имя владельца: ";
	std::cin >> employee.name;
	std::cout << "Введите фамилию владельца: ";
	std::cin >> employee.surname;
	std::cout << "Введите баланс: ";
	std::cin >> employee.balance;
	std::cout << "Введите новый баланс: ";
	std::cin >> employee.newBalance;

	swB(employee, employee.newBalance);

	std::cout << "Ваш счёт: " << employee.account << ", " << employee.name << ", " << employee.surname << ", " << employee.balance;
	
	return 0;
}