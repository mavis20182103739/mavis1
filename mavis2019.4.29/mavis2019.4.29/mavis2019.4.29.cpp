// mavis2019.4.29.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
const float PI = 3.141593;
const float FENCE_PRICE = 35;
const float CONCERETE_PRICE = 20;
class Circle
{
public:
	Circle(float r);
	float circumference();
	float area();
private:
	float radius;
};
Circle::Circle(float r)
{
	radius = r;
}
float Circle::circumference()
{
	return 2 * PI*radius;
}
float Circle::area()
{
	return PI*radius*radius;
}
int main()
{
	float radius;
	cout << "";
	cin >> radius;
	Circle pool(radius);
	Circle poolRin(radius + 3);
	float fenceCost = poolRin.circumference()* FENCE_PRICE;
	cout << "" << fenceCost << endl;
	float concreteCost = (poolRin.area() - pool.area())*CONCERETE_PRICE;
	cout << "" << concreteCost << endl;
	return 0;
}


