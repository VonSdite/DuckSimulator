#pragma once

#include <iostream>
#include <vector>
#include "Quackable.h"

// ��ͷѼ
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

// ��ͷѼ
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

// Ѽ����
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

// ��ƤѼ
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

// ѼȺ
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
