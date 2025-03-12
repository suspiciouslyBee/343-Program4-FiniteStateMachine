// 343-Program4-FiniteStateMachine.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "fsm.h"

struct FSMNode {
  FSMNode* operators_[4];
  char output[4];
};

/*
enum STATES {
  s1,
  ,
  2
};
*/

int main() { 
  FSM StateMachine;
  StateMachine.BeginMachine();

   
}