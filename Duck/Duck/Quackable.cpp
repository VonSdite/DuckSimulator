#include "Quackable.h"

int QuackableCounter::numberOfQuacks = 0;

QuackableCounter::QuackableCounter(Quackable * duck)
{
	this->duck = duck;
}

QuackableCounter::~QuackableCounter()
{
	delete duck;
}

void QuackableCounter::quack()
{
	duck->quack();
	++numberOfQuacks;
	//notifyObservers();
}

void QuackableCounter::registerObserver(Observer * observer)
{
	duck->registerObserver(observer);
}

void QuackableCounter::notifyObservers()
{
	duck->notifyObservers();
}

int QuackableCounter::getQuacks()
{
	return numberOfQuacks;
}
