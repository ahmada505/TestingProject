// Application.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include <iostream>
#include <sstream>
#include <assert.h>
#include <vector>
#include <iterator>
#include "Application.h"

int main()
{
	Application a;
	a.Test(a.AskInput(6));
}
