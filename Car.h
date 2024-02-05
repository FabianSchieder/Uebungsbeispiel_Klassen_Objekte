#pragma once
#include <iostream>

class Car
{
private:
	float position = 0;
	float velocity = 0;

public:
	void move(float time);
	void accelerate(float newVelocity);
	void brake();
	bool isMoving();

	float getPosition()
	{
		return position;
	}

	void setPosition(float position)
	{
		if (position >= 0)
		{
			this->position = position;
		}
	}
};