#include <iostream>
#include "counter.h"
using namespace std;
int main() {
	int n = 0, inside_counter = 0;
	counter cnt_;
	cnt_.setMin();
	cnt_.setMax();
	while (n != 5)
	{
		cout << "Start counter 0-update counter 1-view value of counter 5-exit" << endl;
		cin >> n;
		if (n == 0)
		{

			int s = 0;
			if (cnt_.getMin() > 0)
			{
				s = inside_counter / cnt_.getMax();
			}
			else if (cnt_.getMin() == 0)
			{
				s = (inside_counter) % cnt_.getMax();

			}
			cout << "s=  " << s << "   " << inside_counter << endl;
			cnt_.setCnt(inside_counter,s);
			++inside_counter;
		
		}
		if (n == 1)
		{
			cout <<"Counter=   " <<cnt_.getCnt() << endl;
		}
	}
	system("pause");
	return 0;
}