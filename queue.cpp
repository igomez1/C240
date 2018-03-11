#include <iostream>
#include <string>

#include "priorityQ.h"
using namespace std;

priorityQ::priorityQ(){
        head = nullptr;
        tail = nullptr;
        size = 0;
}
priorityQ::~priorityQ(){

        node *tmp = head;
        while (tmp != NULL){
                node *next = tmp ->next;
                delete tmp;
                tmp = next;
        }
        return;
}
Call priorityQ::front(){
        node *tmp = head;
	int priorityCheck = 0 ;
        Call s;
        if(head == NULL){
                cout<< "No data" << endl;
        }
        else{
		while(tmp->data.priority > priorityCheck ){
                	priorityCheck = tmp->data.priority;
			tmp = tmp->next;
			s = tmp->data;
		}
        }
        return s;
}
bool priorityQ::enqueue(int pos, Call item){
        //prepend item- insert as list head- top of stack 
        node *ins = new node;
        ins->data = item;
        node *tmp = new node;
        tmp = head;
        if(pos== 1){
                ins->next = tmp;
                head = ins;
                size++;
                return true;
        }
}
bool priorityQ::dequeue (){
        node *rm = new node;
        rm = head;
        head = rm->next;
        delete(rm);
        size--;
        if(rm == NULL){
                tail = NULL;
        }
        return true;
}
bool priorityQ::isEmpty(){
        if (size == 0 ){
                return true;
        }
        else{
                return false;
        }
}
int priorityQ::getLength(){
        return size;
}

