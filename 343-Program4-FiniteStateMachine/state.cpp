#include <iostream>

#include "state.h"

void Base::One(StateInterface *&state)
{
  static OneState nextState;
  state = &nextState;
}

void Base::Two(StateInterface *&state) {
  static TwoState nextState;
  state = &nextState;
}

void Base::Add(StateInterface *&state) {
  static AddState nextState;
  state = &nextState;
}

void Base::Multiply(StateInterface *&state) {
  static MultiplyState nextState;
  state = &nextState;
}

std::string Base::StateName() { return "s1"; }

//// One State

void OneState::One(StateInterface *&state) {
  static OneOneState nextState;
  state = &nextState;
}

void OneState::Two(StateInterface *&state) {
  static OneTwoState nextState;
  state = &nextState;
}

void OneState::Add(StateInterface *&state) {
  static OneAddState nextState;
  state = &nextState;
}

void OneState::Multiply(StateInterface *&state) {
  static OneMultiplyState nextState;
  state = &nextState;
}

std::string OneState::StateName() { return "[1]"; }

////Two State

void TwoState::One(StateInterface *&state) {
  static OneTwoState nextState;
  state = &nextState;
}

void TwoState::Two(StateInterface *&state) {
  static TwoTwoState nextState;
  state = &nextState;
}

void TwoState::Add(StateInterface *&state) {
  static TwoAddState nextState;
  state = &nextState;
}

void TwoState::Multiply(StateInterface *&state) {
  static TwoMultiplyState nextState;
  state = &nextState;
}

std::string TwoState::StateName() { return "[2]"; }

////Add
void AddState::One(StateInterface *&state) {
  static OneAddState nextState;
  state = &nextState;
}

void AddState::Two(StateInterface *&state) {
  static TwoAddState nextState;
  state = &nextState;
}

void AddState::Add(StateInterface *&state) {
  std::cout << "junk\n" << std::endl;
  static Base nextState;
  state = &nextState;
}

void AddState::Multiply(StateInterface *&state) {
  std::cout << "junk\n" << std::endl;
  static Base nextState;
  state = &nextState;
}

std::string AddState::StateName() { return "[Add]"; }


////Multiply

void MultiplyState::One(StateInterface *&state) {
  static OneMultiplyState nextState;
  state = &nextState;
}

void MultiplyState::Two(StateInterface *&state) {
  static TwoMultiplyState nextState;
  state = &nextState;
}

void MultiplyState::Add(StateInterface *&state) {
  std::cout << "junk" << std::endl;
  static Base nextState;
  state = &nextState;
}

void MultiplyState::Multiply(StateInterface *&state) {
  std::cout << "junk" << std::endl;
  static Base nextState;
  state = &nextState;
}

std::string MultiplyState::StateName() { return "[Multiply]"; }

// [1,1]

void OneOneState::One(StateInterface *&state) {
  std::cout << "junk" << std::endl;
  static Base nextState;
  state = &nextState;
}

void OneOneState::Two(StateInterface *&state) {
  std::cout << "junk" << std::endl;
  static Base nextState;
  state = &nextState;
}

void OneOneState::Add(StateInterface *&state) {
  std::cout << 2 << std::endl;
  static Base nextState;
  state = &nextState;
}

void OneOneState::Multiply(StateInterface *&state) {
  std::cout << 1 << std::endl;
  static Base nextState;
  state = &nextState;
}

std::string OneOneState::StateName() { return "[1,1]"; }

//[1, 2]
void OneTwoState::One(StateInterface *&state) {
  std::cout << "junk" << std::endl;
  static Base nextState;
  state = &nextState;
}

void OneTwoState::Two(StateInterface *&state) {
  std::cout << "junk" << std::endl;
  static Base nextState;
  state = &nextState;
}

void OneTwoState::Add(StateInterface *&state) {
  std::cout << 3 << std::endl;
  static Base nextState;
  state = &nextState;
}

void OneTwoState::Multiply(StateInterface *&state) {
  std::cout << 2 << std::endl;
  static Base nextState;
  state = &nextState;
}

std::string OneTwoState::StateName() { return "[1,2]"; }

//[2,2]
void TwoTwoState::One(StateInterface *&state) {
  std::cout << "junk" << std::endl;
  static Base nextState;
  state = &nextState;
}

void TwoTwoState::Two(StateInterface *&state) {
  std::cout << "junk" << std::endl;
  static Base nextState;
  state = &nextState;
}

void TwoTwoState::Add(StateInterface *&state) {
  std::cout << 4 << std::endl;
  static Base nextState;
  state = &nextState;
}

void TwoTwoState::Multiply(StateInterface *&state) {
  std::cout << 4 << std::endl;
  static Base nextState;
  state = &nextState;
}

std::string TwoTwoState::StateName() { return "[2,2]"; }

////[1, add]

void OneAddState::One(StateInterface *&state) {
  std::cout << 2 << std::endl;
  static Base nextState;
  state = &nextState;
}

void OneAddState::Two(StateInterface *&state) {
  std::cout << 3 << std::endl;
  static Base nextState;
  state = &nextState;
}

void OneAddState::Add(StateInterface *&state) {
  std::cout << "junk" << std::endl;
  static Base nextState;
  state = &nextState;
}

void OneAddState::Multiply(StateInterface *&state) {
  std::cout << "junk" << std::endl;
  static Base nextState;
  state = &nextState;
}

std::string OneAddState::StateName() { return "[1, add]"; }

////[2, add]

void TwoAddState::One(StateInterface *&state) {
  std::cout << 3 << std::endl;
  static Base nextState;
  state = &nextState;
}

void TwoAddState::Two(StateInterface *&state) {
  std::cout << 4 << std::endl;
  static Base nextState;
  state = &nextState;
}

void TwoAddState::Add(StateInterface *&state) {
  std::cout << "junk" << std::endl;
  static Base nextState;
  state = &nextState;
}

void TwoAddState::Multiply(StateInterface *&state) {
  std::cout << "junk" << std::endl;
  static Base nextState;
  state = &nextState;
}

std::string TwoAddState::StateName() { return "[2, Add]"; }

////[1, Multiply]
void OneMultiplyState::One(StateInterface *&state) {
  std::cout << 1 << std::endl;
  static Base nextState;
  state = &nextState;
}

void OneMultiplyState::Two(StateInterface *&state) {
  std::cout << 2 << std::endl;
  static Base nextState;
  state = &nextState;
}

void OneMultiplyState::Add(StateInterface *&state) {
  std::cout << "junk" << std::endl;
  static Base nextState;
  state = &nextState;
}

void OneMultiplyState::Multiply(StateInterface *&state) {
  std::cout << "junk" << std::endl;
  static Base nextState;
  state = &nextState;
}

std::string OneMultiplyState::StateName() { return "[1, Multiply]"; }

////[2, Multiply]
void TwoMultiplyState::One(StateInterface *&state) {
  std::cout << 2 << std::endl;
  static Base nextState;
  state = &nextState;
}

void TwoMultiplyState::Two(StateInterface *&state) {
  std::cout << 4 << std::endl;
  static Base nextState;
  state = &nextState;
}

void TwoMultiplyState::Add(StateInterface *&state) {
  std::cout << "junk" << std::endl;
  static Base nextState;
  state = &nextState;
}

void TwoMultiplyState::Multiply(StateInterface *&state) {
  std::cout << "junk" << std::endl;
  static Base nextState;
  state = &nextState;
}

std::string TwoMultiplyState::StateName() { return "[2, Multiply]"; }
