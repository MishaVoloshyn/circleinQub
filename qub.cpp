#pragma once
#include "qub.h"
#include <iostream>

using namespace std;


	Qub::Qub() {
		storona = 0;
	}
	Qub::Qub(int s)
	{
		storona = s;
	}
	void Qub::Input()
	{
		cout << "Enter storona: ";
		cin >> storona;
	}
	void Qub::ShowConsole()
	{
		cout << "storona: " << storona << endl;
	}
	void Qub::SetStorona(int s) {
		storona = s;
	}
	int Qub::GetStorona()
	{
		return storona;
	}
