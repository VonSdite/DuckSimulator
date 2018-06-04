#pragma once

#include <vector>
#include <iostream>

class QuackObservable;

class Observer
{
public:
	virtual void update(QuackObservable * duck) = 0;
};

class QuackObservable
{
public:
	virtual void registerObserver(Observer * observer) = 0;
	virtual void notifyObservers() = 0;
};

class Observable : public QuackObservable
{
private:
	QuackObservable * duck;
	std::vector<Observer *> observers;

public:
	Observable(QuackObservable * duck);
	virtual void registerObserver(Observer * observer);
	virtual void notifyObservers();
};

class Quackologist : public Observer
{
public:
	virtual void update(QuackObservable * duck);
};