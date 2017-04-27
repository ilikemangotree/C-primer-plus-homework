/******************************************************************
Filename:area of a circle.cpp
Author:卢恺翔  ；Date:2017/04/27
Function:定义外部函数：		aoc（用于根据用户输入的半径计算圆的面积并打印结果）
*******************************************************************/

#include<iostream>
#include"area of a circle.h"
using namespace std;
#define PI 3.1415926   //定义π的值
void S::aoc()        //根据用户输入的半径计算圆的面积
{
	cout << "请输入圆的半径：";
	cin >> r;				//输入圆的半径
	s = r*r*PI;				//计算圆的面积
	cout <<"该圆形面积为："<< s << endl;		//打印结果
}