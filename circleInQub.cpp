#pragma once
#include "circleInQub.h"
#include "qub.h"
#include "circle.h"
#include <iostream>
using namespace std;

	CircleInQub::CircleInQub(int r, int s) {
		Circle::SetDiametr(r);
		Qub::SetStorona(s);
	}
	void CircleInQub::Showconsole()
	{
		cout << "Radius: " << Circle::GetDiametr() << endl;
		cout << "Storona: " << Qub::GetStorona() << endl;
		if (Circle::GetDiametr() == (Qub::GetStorona())) {
			cout << "Circle in Qub!" << endl;
		}
		else {
			cout << "Error" << endl;
		}
	}
