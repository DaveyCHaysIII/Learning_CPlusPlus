#include <iostream>
#include <vector>

void print_cars(std::vector<std::string> cars);

int main()
{
	std::string car[] = {"Corvette", "Mustang", "Camry"};

	std::cout << car << "\n";
	std::cout << car[1] << "\n";
	/*std::cout << car.length(); << "\n"; this will fail, does not exist*/
	std::vector<std::string> cars = {"Corvette", "Mustang", "Camry"};

	std::cout << cars.front() << "\n";
	std::cout << cars.back() << "\n";
	std::cout << cars[1] << "\n";
	std::cout << cars.at(2) << "\n";
	std::cout << cars.size() << "\n";

	print_cars(cars);
	cars.push_back("spark");
	cars.push_back("fiesta");
	print_cars(cars);
	cars.pop_back();
	print_cars(cars);
	std::cout << cars.empty() << "\n";
	while (cars.size() > 0)
		cars.pop_back();
	std::cout << cars.empty() << "\n";

	return (0);
}

void print_cars(std::vector<std::string> cars)
{
	for (std::string car : cars)
	{
		std::cout << car << " ";
	}
	std::cout << "\n";
}
