//CS311 Yoshii S22 stack.h
//INSTRUCTION:
//Stack class header file template based on Notes-1
//You must complete the ** parts and then complete stack.cpp
//EMACS HINT:
//  control-S does searches
//  Tab on each line will indent perfectly for C++

// =======================================================
// HW#: HW1P1 stack
// Your name: **Salma Rashed
// Compiler:  g++ 
// File type: headher file stack.h
//=======================================================

//----- Globally setting up the aliases ----------------

const int MAX = 10;   // The MAX number of elements for the stack
                      // MAX is unknown to the client

typedef int  el_t;      // the el_t type is ** for now  
                      // el_t is unknown to the client
//-------------------------------------------------------


class stack
{ 
  
 private: // to be hidden from the client
  
   el_t     el[MAX];       // el is  an array of el_t's
   int      top;           // top is index to the top of stack

 public:  // available to the client
  
  // Add exception handling classes here
   //**

   class Overflow{};
   class Underflow{};
  // prototypes to be used by the client
  // Note that no parameter variables are given

  stack();   // constructor to create an object
  ~stack();  // destructor  to destroy an object
  
  // PURPOSE: if not full, enters an element at the top;
  //          otherwise throws an exception - Overflow
  // PARAMETER: push an element on the top of the stacl
  void push(el_t);
  
  // PURPOSE: if not empty, removes and gives back the top eleent;
  //          otherwise throws an exception - Underflow
  // PARAMETER: provide variable to receive the popped element (by ref)
  void pop(el_t&);
  
  // PURPOSE: if not empty, gives the top element without removing it;
  //          otherwise, throws an exception - Underflow
  // PARAMETER: **empty parameters
  void topElem(el_t&);
  
  // ** Must add good comments for each function - See Notes1B
  //PURPOSE: **checks to see if stack is empty,and in somecases we want to display everything in the stack  
  bool isEmpty();

  //PURPOSE: **checks to see if the stack is full
  bool isFull();

  //PURPOSE: **display all the elements without changing the stack
  void displayAll();

  //PURPOSE: **empties the stack completely 
  void clearIt();
  
};  

// Note: semicolon is needed at the end of the header file

