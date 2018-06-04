#pragma once

#include "Goose.h"
#include "DuckFactory.h"

class DuckSimulator
{
public:
	void simulate(AbstractDuckFactory * duckFactory);				// Ä£Äâ

private:
	void simulate(Quackable *duck); // Ä£ÄâÑ¼×Ó½Ð
};
