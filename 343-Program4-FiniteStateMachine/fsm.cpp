#include <iostream>
#include <istream>
#include <string>

#include "state.h"

#include "fsm.h"

//class StateInterface;

FSM::FSM() {

  static Base s1;
  //... declare all

  //starting ptr
  this->currentState_ = &s1;
  return;
}

void FSM::BeginMachine()
{
  while(true) {
    //Display Current State
    //Prompt
    //Show result, repeat
    //TODO, lock the choices down with checking, maybe a menu selection

    int selection = 0;

    std::cout << "Current State: " << currentState_->StateName() << std::endl;
    std::cout << "Input Action: ";

    std::cin >> selection;

    std::cout << "Output: ";

    switch(selection){
      case 1:
      currentState_->One(currentState_);
      break;
      case 2:
      currentState_->Two(currentState_);
      break;
      case 3:
      currentState_->Add(currentState_);
      break;
      case 4:
      currentState_->Multiply(currentState_);
      break;
    }

    std::cout << std::endl << std::endl;

  }
}
