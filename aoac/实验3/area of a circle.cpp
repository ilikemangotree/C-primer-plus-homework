#include<iostream>
#include"area of a circle.h"
using namespace std;
#define PI 3.1415926   //定义π的值
void S::aoc()        //根据用户输入的半径计算圆的面积
{
	cin >> r;		//输入圆的半径
	s = r*r*PI;		//计算圆的面积
	cout << s << endl;		//打印结果
}