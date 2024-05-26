#include <iostream>
#include <string>

enum class months
{
	january = 1,
	february,
	march,
	april,
	may,
	june,
	july,
	august,
	september,
	october,
	november,
	december
};

std::string mon(months moNths)
{
	switch (moNths)
	{
	case months::january:
		return "январь";
	case months::february:
		return "февраль";
	case months::march:
		return "март";
	case months::april:
		return "апрель";
	case months::may:
		return "май";
	case months::june:
		return "июнь";
	case months::july:
		return "июль";
	case months::august:
		return "август";
	case months::september:
		return "сеньтябрь";
	case months::october:
		return "октябрь";
	case months::november:
		return "ноябрь";
	case months::december:
		return "декабрь";
	}
}




int main()
{
	setlocale(LC_ALL, "Russian");

	int number;
	int stopNumber = 0;

	for ( ; ; )
	{
		std::cout << "Введите номер месяца: ";
		std::cin >> number;

		if (number == 0)
		{
			std::cout << "До свидания :)" << std::endl;
			break;
		}
	
		if (number < 13)
		{
			months result = static_cast<months>(number);
			std::string resultM = mon(result);
			std::cout << resultM << std::endl;
		} 
		else
		{
			 std::cout << "Введён несуществующий месяц. Повторите попытку!!!" << std::endl;
		}
	}

}

