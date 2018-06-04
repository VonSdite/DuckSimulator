#pragma once

#include <iostream>
#include <vector>
#include "Quackable.h"

// ÂÌÍ·Ñ¼
class MallardDuck : public Quackable
{
private:
	Observable * observable;
public:
	MallardDuck();

	virtual void quack();
	virtual void registerObserver(Observer * observer);
	virtual void notifyObservers();
};

// ºìÍ·Ñ¼
class RedHeadDuck : public Quackable
{
private:
	Observable * observable;
public:
	RedHeadDuck();

	virtual void quack();
	virtual void registerObserver(Observer * observer);
	virtual void notifyObservers();
};

// Ñ¼ÃùÆ÷
class DuckCall : public Quackable
{
private:
	Observable * observable;
public:
	DuckCall();

	virtual void quack();
	virtual void registerObserver(Observer * observer);
	virtual void notifyObservers();
};

// ÏðÆ¤Ñ¼
class RubberDuck : public Quackable
{
private:
	Observable * observable;
public:
	RubberDuck();

	virtual void quack();
	virtual void registerObserver(Observer * observer);
	virtual void notifyObservers();
};

// Ñ¼Èº
class Flock : public Quackable
{
private:
	std::vector<Quackable *> quackers;
	Observable * observable;
public:
	Flock();

	virtual void quack();
	void addQuacker(Quackable * quacker);
	virtual void registerObserver(Observer * observer);
	virtual void notifyObservers();
};
