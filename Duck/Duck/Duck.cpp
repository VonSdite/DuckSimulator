#include "Duck.h"

MallardDuck::MallardDuck()
{
	observable = new Observable(this);
}

void MallardDuck::quack()
{
	std::cout << "Quack" << std::endl;
	notifyObservers();
}

void MallardDuck::registerObserver(Observer * observer)
{
	observable->registerObserver(observer);
}

void MallardDuck::notifyObservers()
{
	observable->notifyObservers();
}

RedHeadDuck::RedHeadDuck()
{
	observable = new Observable(this);
}

void RedHeadDuck::quack()
{
	std::cout << "Quack" << std::endl;
	notifyObservers();
}

void RedHeadDuck::registerObserver(Observer * observer)
{
	observable->registerObserver(observer);
}

void RedHeadDuck::notifyObservers()
{
	observable->notifyObservers();
}

DuckCall::DuckCall()
{
	observable = new Observable(this);
}

void DuckCall::quack()
{
	std::cout << "Kwak" << std::endl;
	notifyObservers();
}

void DuckCall::registerObserver(Observer * observer)
{
	observable->registerObserver(observer);
}

void DuckCall::notifyObservers()
{
	observable->notifyObservers();
}

RubberDuck::RubberDuck()
{
	observable = new Observable(this);
}

void RubberDuck::quack()
{
	std::cout << "Squeak" << std::endl;
	notifyObservers();
}

void RubberDuck::registerObserver(Observer * observer)
{
	observable->registerObserver(observer);
}

void RubberDuck::notifyObservers()
{
	observable->notifyObservers();
}

Flock::Flock()
{
	//observable = new Observable(this);
}
#include <iostream>
void Flock::quack()
{
	for (Quackable* quacker : quackers)
	{
		quacker->quack();
	}
	//notifyObservers();
}

void Flock::addQuacker(Quackable * quacker)
{
	quackers.push_back(quacker);
}

void Flock::registerObserver(Observer * observer)
{
	for (auto quacker : quackers)
	{
		quacker->registerObserver(observer);
	}
	//observable->registerObserver(observer);
}

void Flock::notifyObservers()
{
	//observable->notifyObservers();
}
