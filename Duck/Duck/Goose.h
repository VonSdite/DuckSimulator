#pragma once

#include <iostream>
#include "Quackable.h"

class Goose
{
public:
	void honk();
};

class GooseAdapter : public Quackable
{
private:
	Goose *goose;
	Observable * observable;

public:
	GooseAdapter(Goose *goose);
	~GooseAdapter();

	virtual void quack();
	virtual void registerObserver(Observer * observer);
	virtual void notifyObservers();
};