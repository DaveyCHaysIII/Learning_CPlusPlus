#include <iostream>

/*
 * This module is all about GETTERS and SETTERS
 * PUBLIC attributes can be modified unexpectedly
 * PRIVATE attributes can only be read or modified by
 * explcitly written functions called GETTERS and SETTERS
 * GETTERS get attribute values
 * SETTERS set attribute values
 *
 * we can also use Templates like before to make
 * generic container classes
 *
 */

class Unsafe_stove
{
	public:
		int temperature = 0;
};

class Safe_stove
{
	private:
		int temperature = 0;
	public:
		int getTemperature()
		{
			return temperature;
		}
		void setTemperature(int temperature)
		{
			if (temperature < 0)
				this->temperature = 0;
			else if (temperature > 500)
				this->temperature = 500;
			else
				this->temperature = temperature;
		}

};

template <typename T>
class Box
{
	private:
		T value;
	public:
		Box(T v) : value (v) {}
		T getValue() const {return value;}
};

int main()
{
	Unsafe_stove stove1;
	Safe_stove stove2;

	stove1.temperature = 100000000;
	std::cout << "the temperature setting is " << stove1.temperature <<"\n";

	stove2.setTemperature(100000000);
	std::cout << "the tempeature setting is " << stove2.getTemperature() << "\n";

	Box<int> intBox(5);
	Box<double> doubleBox(3.14);

	std::cout << intBox.getValue() << "\n";
	std::cout << doubleBox.getValue() << "\n";
	return (0);
}
