/*
实现对外部隐藏类的细节
在'NormalClass'中，私有变量依然可以通过头文件获取得到
在'HideClassDetail'中，将私有变量'HideClassDetailImp'的细节移动到了.cpp文件中，从而对外界隐藏了细节
*/

#include <iostream>
#include "HideClassDetail.h"

int main()
{
	NormalClass nc(10);
	nc.PrintNormalClass(20);

	HideClassDetail hd(10);
	hd.printHideClassDetail(20);

	return 0;
}