#include "DuckSimulator.h"

int main(int argc, char const *argv[])
{
	DuckSimulator * simulator = new DuckSimulator();
	AbstractDuckFactory * duckFactory = new CountingDuckFactory();
	simulator->simulate(duckFactory);

	delete simulator;
	delete duckFactory;
	return 0;
}