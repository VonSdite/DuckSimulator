#pragma once

#include "Goose.h"
#include "DuckFactory.h"

class DuckSimulator
{
public:
	void simulate(AbstractDuckFactory * duckFactory);				// ģ��

private:
	void simulate(Quackable *duck); // ģ��Ѽ�ӽ�
};
