#include "Observer.h"

Observable::Observable(QuackObservable * duck)
{
	this->duck = duck;
}

void Observable::registerObserver(Observer * observer)
{
	observers.push_back(observer);
}

void Observable::notifyObservers()
{
	for (auto observer : observers)
	{
		observer->update(duck);
	}
}

void Quackologist::update(QuackObservable * duck)
{
	std::cout << "Quackologist: duck just quacked." << std::endl;
}
