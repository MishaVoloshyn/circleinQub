#pragma once
#include <iostream>
using namespace std;

class Circle {
protected:
	int diametr;
public:
	Circle();

	Circle(int dia);
	void Input();
	void ShowConsole();
	void SetDiametr(int dia);
	int GetDiametr();
};



