/*
ʵ�ֶ��ⲿ�������ϸ��
��'NormalClass'�У�˽�б�����Ȼ����ͨ��ͷ�ļ���ȡ�õ�
��'HideClassDetail'�У���˽�б���'HideClassDetailImp'��ϸ���ƶ�����.cpp�ļ��У��Ӷ������������ϸ��
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