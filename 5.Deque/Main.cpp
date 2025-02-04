#include <deque>
#include <iostream>

int main()
{
	std::deque<int> deq;

	deq.push_back(1);
	deq.push_front(2);

	std::cout << deq.front() << std::endl;
	std::cout << deq.back() << std::endl;

	for (std::deque<int>::iterator it = deq.begin(); it != deq.end(); ++it)
	{
		std::cout << *it << std::endl;
	}

	deq.clear();

	if (deq.empty())
	{
		std::cout << "ºñ¾úÀ½" << std::endl;
	}

	std::cin.get();
	return (0);
}