#pragma once
#include <iostream>
using namespace std;

class Qub {
protected:
	int storona;
public:
	Qub();
	Qub(int s);
	void Input();
	void ShowConsole();
	void SetStorona(int s);
	int GetStorona();
};