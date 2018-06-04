#include "DuckFactory.h"

Quackable* DuckFactory::createMallardDuck()
{
	return new MallardDuck();
}

Quackable* DuckFactory::createRedHeadDuck()
{
	return new RedHeadDuck();
}

Quackable* DuckFactory::createDuckCall()
{
	return new DuckCall();
}

Quackable* DuckFactory::createRubberDuck()
{
	return new RubberDuck();
}

Quackable * CountingDuckFactory::createMallardDuck()
{
	return new QuackableCounter(new MallardDuck());
}

Quackable * CountingDuckFactory::createRedHeadDuck()
{
	return new QuackableCounter(new RedHeadDuck());
}

Quackable * CountingDuckFactory::createDuckCall()
{
	return new QuackableCounter(new DuckCall());
}

Quackable * CountingDuckFactory::createRubberDuck()
{
	return new QuackableCounter(new RubberDuck());
}
