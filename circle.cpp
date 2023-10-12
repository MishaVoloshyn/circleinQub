#pragma once
#include "circle.h"
#include <iostream>
using namespace std;


Circle::Circle()
{
}
Circle::Circle(int dia) {
		diametr = dia;
	}
void Circle::Input() {
		cout << "Enter diametr: ";
		cin >> diametr;
	}
void Circle::ShowConsole() {
		cout << "diametr: " << diametr << endl;
	}
void Circle::SetDiametr(int dia) {
		diametr = dia;
	}
int Circle::GetDiametr() {
		return diametr;
	}




