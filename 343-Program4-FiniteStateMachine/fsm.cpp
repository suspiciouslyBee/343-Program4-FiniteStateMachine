#include "fsm.h"

#include <iostream>
#include <istream>
#include <string>

#include "state.h"

// class StateInterface;

FSM::FSM() {
  static Base s1;
  //... declare all

  // starting ptr
  this->currentState_ = &s1;
  return;
}

void FSM::BeginMachine() {
  while (true) {
    // Display Current State
    // Prompt
    // Show result, repeat
    // TODO, lock the choices down with checking, maybe a menu selection

    char selection = 0;

    std::cout << "Current State: " << currentState_->StateName() << std::endl;
    std::cout << "Input Action (1, 2, +, x): ";

    std::cin >> selection;

    std::cout << "Output: ";

    switch (selection) {
      case '1':
        currentState_->One(currentState_);
        break;
      case '2':
        currentState_->Two(currentState_);
        break;
      case '+':
        currentState_->Add(currentState_);
        break;
      case 'x':
        currentState_->Multiply(currentState_);
      default:  // may introduce technically introduce a state
        std::cout << "\rInput not recognized, reloading state" << std::endl;
        break;
    }

    std::cout << std::endl << std::endl;
  }
}
