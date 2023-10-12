#pragma once
#include "qub.h"
#include "circle.h"
#include <iostream>
using namespace std;
class CircleInQub :public Circle, public Qub
{
public:
	CircleInQub(int r, int s);
	void Showconsole();
};