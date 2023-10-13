#include "Calculations.h"
#include <iostream>

Calculations::Calculations()
{
	Mean = 0;
	SD = 0;
}

Calculations::~Calculations()
{
}

void Calculations::setMean(float Mean_)
{
	Mean = Mean_;
}
void Calculations::setSD(float SD_)
{
	SD = SD_;
}

float Calculations::getMean()
{
	return Mean
}
float Calculations::getSD()
{
	return SD;
}