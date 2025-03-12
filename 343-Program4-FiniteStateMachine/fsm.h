////
//
////

#ifndef FSM_H_
#define FSM_H_

#include "state.h"



class FSM {
  public:
  FSM();
  void BeginMachine();

  private:
  StateInterface* currentState_{nullptr};
};

#endif //FSM_H_
