#include "counter.h"
#include <iostream>


counter::counter()
{
}
counter::~counter()
{
}

void counter::setCnt(int z, int f)
{
	
	int _cnt;
	if (counter::getMin() > 0)
	{
		if (z < counter::getMax())
		{
			_cnt = z + counter::getMin();
			cnt = _cnt;
		}
		else if	(z >= counter::getMax())
		{
			_cnt = z - (counter::getMax())*f + counter::getMin();
			cnt = _cnt;
		}
	}
	if (counter::getMin() == 0)
	{
		if (z <= counter::getMax())
		{
			_cnt = z + counter::getMin();
			cnt = _cnt;
		}
		else if (z > counter::getMax())
		{
			_cnt = f + counter::getMin();
			cnt = _cnt;
		}

	}
}
int counter::getCnt() {
	
	return counter::cnt;
}
void counter::setMax() {
	int _max;
	std::cout << "Enter MAX" << std::endl;
	std::cin >> _max;
	max = _max;
}
int counter::getMax() {
	return counter::max;
}
void counter::setMin() {
	int _min;
	std::cout << "Enter MIN" << std::endl;
	std::cin >> _min;
	min = _min;
}
int counter::getMin() {
	return counter::min;
}
;

