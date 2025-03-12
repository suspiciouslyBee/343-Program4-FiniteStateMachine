////
//
//  State Interface & States
//
//  Author: June
//
//  Description: This is the base class interface for the FSM implementation.
//  The header later on declares the twelve unique states. 
//
//  I've decided to try abstracting the inputs so that the higher context needs
//  not to do anything other than input. I wanted to challenge myself to
//  actually build something OO from the ground up with inheritence. I didn't 
//  get to mess with that in 342 due to the enforcement of the Google C++ Style
//  guide, which heavily discourages inheritence.
//  
//  There are sources that I referred to to refresh myself on inheritence. Will
//  link in the final README if I end up merging this branch
////
#ifndef STATE_H_
#define STATE_H_

#include <string>


//Abstract State Interface
class StateInterface {
  public:
  virtual void One(StateInterface*& state) = 0;
  virtual void Two(StateInterface*& state) = 0;
  virtual void Add(StateInterface*& state) = 0;
  virtual void Multiply(StateInterface*& state) = 0;
  virtual std::string StateName() = 0;

  private:
  
};

class Base : public StateInterface {
  public:
  void One(StateInterface*& state);
  void Two(StateInterface*& state);
  void Add(StateInterface*& state);
  void Multiply(StateInterface*& state);
  std::string StateName();
  private:
};

class OneState : public StateInterface {
 public:
  void One(StateInterface*& state);
  void Two(StateInterface*& state);
  void Add(StateInterface*& state);
  void Multiply(StateInterface*& state);
  std::string StateName();
 private:
};

class TwoState : public StateInterface {
 public:
  void One(StateInterface*& state);
  void Two(StateInterface*& state);
  void Add(StateInterface*& state);
  void Multiply(StateInterface*& state);
  std::string StateName();
 private:
}; 

class AddState : public StateInterface {
 public:
  void One(StateInterface*& state);
  void Two(StateInterface*& state);
  void Add(StateInterface*& state);
  void Multiply(StateInterface*& state);
  std::string StateName();

 private:
}; 

class MultiplyState : public StateInterface {
 public:
  void One(StateInterface*& state);
  void Two(StateInterface*& state);
  void Add(StateInterface*& state);
  void Multiply(StateInterface*& state);
  std::string StateName();
 private:
};

class OneOneState : public StateInterface {
 public:
  void One(StateInterface*& state);
  void Two(StateInterface*& state);
  void Add(StateInterface*& state);
  void Multiply(StateInterface*& state);
  std::string StateName();
 private:
};

class OneTwoState : public StateInterface {
 public:
  void One(StateInterface*& state);
  void Two(StateInterface*& state);
  void Add(StateInterface*& state);
  void Multiply(StateInterface*& state);
  std::string StateName();

 private:
};

class TwoTwoState : public StateInterface {
 public:
  void One(StateInterface*& state);
  void Two(StateInterface*& state);
  void Add(StateInterface*& state);
  void Multiply(StateInterface*& state);
  std::string StateName();

 private:
};

class OneAddState : public StateInterface {
 public:
  void One(StateInterface*& state);
  void Two(StateInterface*& state);
  void Add(StateInterface*& state);
  void Multiply(StateInterface*& state);
  std::string StateName();
 private:
};

class TwoAddState : public StateInterface {
 public:
  void One(StateInterface*& state);
  void Two(StateInterface*& state);
  void Add(StateInterface*& state);
  void Multiply(StateInterface*& state);
  std::string StateName();

 private:
};

class OneMultiplyState : public StateInterface {
 public:
  void One(StateInterface*& state);
  void Two(StateInterface*& state);
  void Add(StateInterface*& state);
  void Multiply(StateInterface*& state);
  std::string StateName();

 private:
};

class TwoMultiplyState : public StateInterface {
 public:
  void One(StateInterface*& state);
  void Two(StateInterface*& state);
  void Add(StateInterface*& state);
  void Multiply(StateInterface*& state);
  std::string StateName();

 private:
};



#endif // STATE_H_