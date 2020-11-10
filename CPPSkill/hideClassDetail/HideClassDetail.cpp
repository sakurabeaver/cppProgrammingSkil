#include <iostream>
#include "HideClassDetail.h"

class HideClassDetail::HideClassDetailImp {
public:
	HideClassDetailImp(int s) : start_(s) {}
	void PrintHideClassDetailImp(int num)
	{
		for (int i = start_; i < num; ++i)
		{
			std::cout << i << std::endl;
		}
	}

private:
	int start_ = 0;
};

HideClassDetail::HideClassDetail(int s)
{
	hideClassDetailPtr = new HideClassDetailImp(s);
}

void HideClassDetail::printHideClassDetail(int num)
{
	hideClassDetailPtr->PrintHideClassDetailImp(num);
}

HideClassDetail::~HideClassDetail()
{
	delete hideClassDetailPtr;
}

void NormalClass::PrintNormalClass(int num)
{
	for (int i = start_; i < num; ++i)
	{
		std::cout << i << std::endl;
	}
};