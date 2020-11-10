#pragma once
class HideClassDetail
{
public:
	HideClassDetail(int s);
	void printHideClassDetail(int num);
	~HideClassDetail();
private:
	class HideClassDetailImp;
	HideClassDetailImp* hideClassDetailPtr;
};

class NormalClass {
public:
	NormalClass(int s) : start_(s){}
	void PrintNormalClass(int num);
	~NormalClass() = default;

private:
	int start_ = 0;
};
