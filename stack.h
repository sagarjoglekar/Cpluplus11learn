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


#endif /* defined(__Cplusplus11__stack__) */
