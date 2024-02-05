#include "Car.h"
using namespace std;

void Car::move(float time)
{
	position += velocity * time;
}

void Car::accelerate(float newVelocity)
{
	velocity = newVelocity;
}

void Car::brake()
{
	velocity = 0;
}

bool Car::isMoving()
{
	return velocity != 0;
}