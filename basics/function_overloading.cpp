#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);

int main()
{
	std::string topping1, topping2;

	topping1 = "pepperoni";
	topping2 = "mushroom";

	bakePizza();
	bakePizza(topping1);
	bakePizza(topping1, topping2);

	return (0);
}

void bakePizza()
{
	std::cout << "here is your pizza!\n";
}

void bakePizza(std::string topping1)
{
	std::cout << "Here is your " << topping1 << " pizza!\n";
}


void bakePizza(std::string topping1, std::string topping2)
{
	std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}
