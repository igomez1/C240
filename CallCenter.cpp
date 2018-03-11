#include <stdio.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Call.h"
#include "CallCenter.h"
using namespace std;


CallCenter::CallCenter(){
	priorityQ waitList;
}
bool CallCenter::arrCall(Call enter, double timeArr){
	enter.time = timeArr;
	//waitList.enqueue(1, enter);
	return true;
}
double CallCenter::update(Call enter){
	cout << "Updating . . ."<< endl;
	
	if (waitList.isEmpty()){
		waitList.enqueue (1, enter);
	}
	else { 
		if (waitList.front() < enter){
			waitList.enqueue(1, enter);
		}
		else if (waitList.front() > enter){
			Call hold = waitList.front();
			waitList.dequeue();
			waitList.enqueue(1, enter);
			waitList.enqueue(1, hold);
		}
		else{
			waitList.enqueue(1, enter);
		}
	}	
	
	

}
priorityQ CallCenter::getWL (){
	return waitList;
}
void CallCenter::displaySim(int count, double runTime ){
	cout << "Total number of calls entered and answered: "<< count << endl;	
	cout << "Total time taken to answer all calls: " << runTime << " mins"<< endl;
	cout << "Average wait time for a call to be answered: " << endl;
	cout << "Average wait time for calls with priority 1, 2, 3 respectively: "<< endl;
}
void CallCenter:: displayCurr(double time, int count){
	cout << "Current simulation time: "<< time << " mins" << endl;
	cout << "Number of calls in waiting list: "<< waitList.getLength()<< endl;
	cout << "Number of calls completed: "<< count <<endl;
}
