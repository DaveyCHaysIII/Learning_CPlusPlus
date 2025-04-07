#include <iostream>

template <typename T, typename U>

auto max(T x, U y)
{
	return (x > y) ? x : y;
}

int main()
{
	std::cout << max(1, 2) << "\n";
	std::cout << max('a', 'z') << "\n";
	std::cout << max(1.1, 2.1) << "\n";
	std::cout << max(5, 2.2) << "\n";
	std::cout << max('a', 55) << "\n";

	return (0);
}

/*
 * the template T and U act like wildcards for type - we no longer have to specifically define input types
 * the auto keyword lets the compliler decide what to output. Its just like javascript!
 * so auto max(T x, U y) means max will take in whatever type T is, and whatever type U is, and ouput any type
 * neccessary for the function to make senes.
 */
