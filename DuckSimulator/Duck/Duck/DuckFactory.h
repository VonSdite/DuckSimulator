#pragma once

#include "Duck.h"

class AbstractDuckFactory
{
public:
	virtual Quackable* createMallardDuck() = 0;
	virtual Quackable* createRedHeadDuck() = 0;
	virtual Quackable* createDuckCall() = 0;
	virtual Quackable* createRubberDuck() = 0;
};

class DuckFactory : public AbstractDuckFactory
{
public:
	virtual Quackable* createMallardDuck();
	virtual Quackable* createRedHeadDuck();
	virtual Quackable* createDuckCall();
	virtual Quackable* createRubberDuck();
};

class CountingDuckFactory : public AbstractDuckFactory
{
public:
	virtual Quackable* createMallardDuck();
	virtual Quackable* createRedHeadDuck();
	virtual Quackable* createDuckCall();
	virtual Quackable* createRubberDuck();
};