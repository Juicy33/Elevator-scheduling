#pragma once
#include<queue>
#ifndef Elevator_H//∑¿÷π÷ÿ∏¥∂®“Â
#define Elevator_H
class Elevator
{
public:
	queue<int>destinationQueue;
	int currentFloor;
	int indicator;
	void stop(int currentfloor);
	int goToFloor(int front);
	int updateDestinatiomQueue();
};
int Elevator::goToFloor(int currentfloor) 
{
	currentFloor = destinationQueue.front();
	}
void Elevator::stop(int currentfloor)
{



}
int Elevator::updateDestinatiomQueue()
{



}
#endif // !(elevator)
