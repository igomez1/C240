#ifndef CALLCENTER_H
#define	CALLCENTER_H
#include "Call.h"
#include "priorityQ.h"
class CallCenter{
	public:
	CallCenter();
	priorityQ getWL ();
	bool arrCall(Call enter, double timeArr);
	double update(Call enter);
	void displaySim(int count, double runTime);
	void displayCurr(double time, int count);
	private:
		priorityQ waitList;

};
#endif
