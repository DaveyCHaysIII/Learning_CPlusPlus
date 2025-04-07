#include <iostream>



/*
 * This is all about CLASSES and OBJECTS
 * OBJECTS are entities with ATTRIBUTES and METHODS
 * CLASSES are a means of making OBJECTS
 * Their attributes are either PUBLIC or PRIVATE
 * Their METHODS have SCOPE to their ATTRIBUTES
 * Thier CONSTRUCTORS can be OVERLOADED like any other function
 */


class Pizza
{
	public:
		std::string topping1 = "void";
		std::string topping2 = "void";

		Pizza()
		{

		}

		Pizza(std::string topping1)
		{
			this->topping1 = topping1;
		}

		Pizza(std::string topping1, std::string topping2)
		{
			this->topping1 = topping1;
			this->topping2 = topping2;
		}

		void serve()
		{
			std::cout << "pizza with " << topping1 << " and " << topping2 << " ready to serve!\n";
		}
};
class Car
{
	public:
		std::string make;
		std::string model;
		int year;
		std::string color;

		Car(std::string make, std::string model, int year, std::string color)
		{
			this->make = make;
			this->model = model;
			this->year = year;
			this->color = color;
		}

		void accelerate()
		{
			std::cout << "You floor it!\n";
		}
};

class Human
{
	public:
		std::string name = "none";
		std::string occupation = "none";
		int age = 0;


		void eat()
		{
			std::cout << name << " is eating\n";
		}

		void drink()
		{
			std::cout << name << " is drinking and is " << age << "\n";
		}

		void sleep()
		{
			std::cout << name << " is sleeping and is a " << occupation << "\n";
		}
};

int main()
{
	Car car2("Chevy", "Spark", 2020, "Black");

	Pizza pizza0;
	Pizza pizza1("Pepperoni");
	Pizza pizza2("Pepperoni", "Peppers");

	Human human1, human2, human3;

	human1.name = "Davey";
	human1.occupation = "cog";
	human1.age = 39;

	human2.name = "Cory";
	human2.occupation = "programmer";
	human2.age = 39;

	human1.eat();
	human1.drink();
	human1.sleep();

	human2.eat();
	human2.drink();
	human2.sleep();

	human3.eat();
	human3.drink();
	human3.sleep();


	std::cout << car2.make << "\n";
	std::cout << car2.model << "\n";
	std::cout << car2.year << "\n";
	car2.accelerate();

	pizza0.serve();
	pizza1.serve();
	pizza2.serve();
	return (0);
}
