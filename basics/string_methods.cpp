#include <iostream>

int main()
{
	std::string name, last_name, middle_name, new_name, not_name, no_name;

	name = "Davey";
	std::cout << name << name.length() << "\n";

	last_name = " Hays III";
	std::cout << name.append(last_name) << "\n";

	middle_name = "Danger ";
	std::cout << name.insert(6, middle_name) << "\n";

	std::cout << name.erase(6, 7) << "\n";

	new_name = "Judy";

	std::cout << name.replace(0, 5, new_name) << "\n";

	std::cout << name.find(last_name) << "\n";

	not_name = "Judo";

	std::cout << new_name.compare(not_name) << "\n";

	no_name = "";

	std::cout << no_name.empty() <<  " " << new_name.empty() << "\n";

	name.pop_back();

	std::cout << name  << "\n";

	return (0);
}
