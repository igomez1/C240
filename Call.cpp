#include <stdio.h>
#include <iostream>
#include <ctime>
#include <time.h>
#include "Call.h"
using namespace std;

Call::Call(){
	time = 0;
	timeAns = rand()%(8-3 + 1) + 3;	
	int p = rand() * 100;
	if (p < 11){ // 0-11
    		priority = 1;
	}
	else if (p < 31){
    		priority = 2;
	}
	else{
    		priority = 3;
	}
}
bool operator < (const Call & object, const Call object2){
	if (object.priority < object2.priority){
		return true;
	}
	else{
		return false;
	}
}
bool operator == (const Call & object, const Call object2){
	if (object.priority == object2.priority){
		return true;
	}	
	else{	
		return false;
	}
}
bool operator > (const Call & object, const Call object2){
	if (object.priority > object2.priority){
		return true;
	}
	else{
		return false;
	}
}
