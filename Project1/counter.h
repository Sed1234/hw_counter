#pragma once
#include<iostream>
class counter
{
private:
	int cnt;
	int max;
	int min;
public:
	counter();
	~counter();
	int getCnt();
	void setCnt(int z, int f);
	void setMax();
	int getMax();
	void setMin();
	int getMin();
};