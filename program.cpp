#include <stdio.h>
#include <iostream>
#include <ctime>
#include <vector>
#include <stdlib.h>
#include <string>
#include "CallCenter.h"
#include "Call.h"

#include "priorityQ.h"

using namespace std;
vector<string> prompt();
void conductSim(vector<string>inputs, CallCenter center);
int main(){

	vector<string> in = prompt();
	CallCenter center;
	conductSim (in, center);

}
vector <string> prompt(){
	string a;
	string b;
	vector <string> res;
	cout << "Enter system variables: " << endl;
	cout << "Simulation length (mins): " ;
	cin >> a;
	cout << endl;
	cout << "Arrival rate of calls, i.e. the probability of a call arriving during a given minute (between .1 and 1) ";
	cin >> b;
	res.push_back(a);
	res.push_back(b);
	return res;
}
void conductSim(vector <string> inputs, CallCenter center){
	//for every minute of the simulation
	int mins ; 
	size_t offset = 0;
	double rate;
	int answeredCalls = 0;
	mins = atoi(inputs.at(0).c_str());
	rate = stod(inputs.at(1).c_str(), &offset);
	int seconds = 60* mins;
	int rateSec = rate * 6 * 10;
	double totTime;
	for (int i = 0 ; i <= seconds ; i ++){
	if (i % rateSec == 0){
		Call arrived;
		double timeArr;
		timeArr = i / 60 ;
		center.arrCall(arrived, timeArr);
		totTime = center.update(arrived);
//		answeredCalls ++;
	}
	if ( i % 300 == 0 ){
		double time ;
		time = i / 60 ;
		center.displayCurr(time, answeredCalls);
	}	
// for each minute until all calls have been answered 
	}
	double finished;
	int count = 0;
	/*for (int j = 0 ; j <= seconds ; j++){
	while (center.getWL().isEmpty() != true){
		center.update();
		count ++;
		answeredCalls++;
		finished = j / 60 ;
	}
	center.displaySim(answeredCalls, finished);
	}*/

}
