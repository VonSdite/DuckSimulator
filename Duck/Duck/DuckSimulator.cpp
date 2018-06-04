#include "DuckSimulator.h"

void DuckSimulator::simulate(AbstractDuckFactory * duckFactory)
{
	std::cout << "Duck Simulator: With Observer" 
		<< std::endl 
		<< std::endl;

	Quackologist * quackologist = new Quackologist();

	Quackable *mallardDuck = duckFactory->createMallardDuck();
	Quackable *redHeadDuck = duckFactory->createRedHeadDuck();
	Quackable *duckCall = duckFactory->createDuckCall();
	Quackable *rubberDuck = duckFactory->createRubberDuck();
	Quackable *gooseDuck = new GooseAdapter(new Goose());

	// ѼȺ
	Flock * flockOfDucks = new Flock();
	flockOfDucks->addQuacker(mallardDuck);
	flockOfDucks->addQuacker(redHeadDuck);
	flockOfDucks->addQuacker(duckCall);
	flockOfDucks->addQuacker(rubberDuck);
	flockOfDucks->addQuacker(gooseDuck);

	flockOfDucks->registerObserver(quackologist);

	// ��ͷѼȺ
	Flock * flockOfMallardDucks = new Flock();
	Quackable * mallardDuckOne = duckFactory->createMallardDuck();
	Quackable * mallardDuckTwo = duckFactory->createMallardDuck();
	Quackable * mallardDuckThree = duckFactory->createMallardDuck();
	Quackable * mallardDuckFour = duckFactory->createMallardDuck();
	flockOfMallardDucks->addQuacker(mallardDuckOne);
	flockOfMallardDucks->addQuacker(mallardDuckTwo);
	flockOfMallardDucks->addQuacker(mallardDuckThree);
	flockOfMallardDucks->addQuacker(mallardDuckFour);

	// ѼȺ���������ͷѼȺ
	// ��˹
	flockOfDucks->addQuacker(flockOfMallardDucks);


	std::cout << "Duck Simulator: Whole Flock Simulation" 
		<< std::endl;
	simulate(flockOfDucks);
	
	std::cout << "Duck Simulator: Mallard Flock Simulation" 
		<< std::endl 
		<< std::endl;
	simulate(flockOfMallardDucks);

	std::cout << "The ducks quacked "
		<< QuackableCounter::getQuacks()
		<< " times" << std::endl;
}

void DuckSimulator::simulate(Quackable * duck)
{
	duck->quack();
}
