#include "Span.hpp"

int randomNumber(void)
{
	int x = rand() % 1000;
	return (x);
}

int main ()
{
	std::cout << "\n------------------ subject test ----------------------\n";

	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "longest span: " << sp.longestSpan() << std::endl;

	std::cout << "\n------------ simple array to Span test ---------------\n";
	
	int array[] = {0, 4, 8, 10, -1, 30};
	Span test(6);
	for (int i = 0; i < 6; i++)
	{
		test.addNumber(array[i]);
	}
	std::cout << "shortest span: " << test.shortestSpan() << std::endl; 
	std::cout << "longest span: " << test.longestSpan() << std::endl; 

	std::cout << "\n--------------- list to Span test --------------------\n";

	std::list<int> testList(10000);
	std::generate(testList.begin(), testList.end(), randomNumber);
	printContainer(testList);

	Span test2(testList.size());
	test2.rangeIterators(testList);
	// test2.printStorage();
	std::cout << "shortest span: " << test2.shortestSpan() << std::endl;
	std::cout << "longest span: " << test2.longestSpan() << std::endl;

	std::cout << "\n------------------------------------------------------\n";
	return (0);
}