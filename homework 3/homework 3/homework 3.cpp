#include <iostream>
#include <string>

struct Russia
{
	std::string city;
	std::string street;
	short houseNumber;
	short apartmentNumber;
	std::string index;
};

void print (const Russia& address)
{
	std::cout << "Город: " << address.city << std::endl;
	std::cout << "Улица: " << address.street << std::endl;
	std::cout << "Номер дома: " << address.houseNumber << std::endl;
	std::cout << "Номер квартиры: " << address.apartmentNumber << std::endl;
	std::cout << "Индекс: " << address.index << std::endl;
}


int main()
{
	setlocale (LC_ALL, "Russian");

	Russia firstAddress = { "Москва", "Арбат", 12, 8, "123456" };
	Russia secondAddress = { "Ижевск", "Пушкина", 59, 143, "953769" };

	print (firstAddress);
	std::cout << std::endl;
	print(secondAddress);

	return 0;
}