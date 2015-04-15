//
//  stack.h
//  Cplusplus11
//
//  Created by Sagar J on 2/16/15.
//  Copyright (c) 2015 Sagar J. All rights reserved.
//

#ifndef __Cplusplus11__stack__
#define __Cplusplus11__stack__

#include <vector>
#include <string>
#include <stdexcept>


using namespace std;

template <class T>
class Stack {
private:
    vector<T> elems;     // elements
    
public:
    void push(T const&);  // push element
    void pop();               // pop element
    T top() const;            // return top element
    bool empty() const{       // return true if empty.
        return elems.empty();
    }
};

//
//  stack.cpp
//  Cplusplus11
//
//  Created by Sagar J on 2/16/15.
//  Copyright (c) 2015 Sagar J. All rights reserved.
//

#include "stack.h"

template <class T>
void Stack<T>::push (T const& elem)
{
    // append copy of passed element
    elems.push_back(elem);
}

template <class T>
void Stack<T>::pop ()
{
    if (elems.empty()) {
        throw out_of_range("Stack<>::pop(): empty stack");
    }
    // remove last element
    elems.pop_back();
}

template <class T>
T Stack<T>::top () const
{
    if (elems.empty()) {
        throw out_of_range("Stack<>::top(): empty stack");
    }
    // return copy of last element
    return elems.back();
}


#endif /* defined(__Cplusplus11__stack__) */
