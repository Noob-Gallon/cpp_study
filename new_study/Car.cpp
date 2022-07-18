#define _CRT_SECURE_NO_WARNINGS

#include <cstring>
#include "Car.h"

using namespace std;

void Car::InitMembers(const char* ID, int fuel)
{
	strcpy(gamerID, ID);
	fuelGauge = fuel; // 이 함수는 class 내에서 선언되었으므로,
					  // class의 멤버변수에 접근할 수 있다.
	curSpeed = 0;
}

void Car::Accel()
{
	if (fuelGauge <= 0)
	{
		return;
	}
	else
	{
		fuelGauge -= CAR_CONST::FUEL_STEP;
	}

	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}

	curSpeed += CAR_CONST::ACC_STEP;
}

