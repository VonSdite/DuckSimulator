#pragma once

#include "Observer.h"

class Quackable : public QuackObservable
{
public:
	virtual void quack() = 0;
};

class QuackableCounter : public Quackable
{
private:
	Quackable *duck;
	static int numberOfQuacks;

public:
	QuackableCounter(Quackable *duck);
	~QuackableCounter();

	virtual void quack();
	virtual void registerObserver(Observer * observer);
	virtual void notifyObservers();

	static int getQuacks();
};