
#include <iostream>
#include <vector>
#include "Hash.h"
#include "stack.h"

using namespace std;

int test() {
    std::string str1 = "You are acrueal world";
    hashCompare* obj1 = new hashCompare(&str1);
    cout<< " The set String is : " << *obj1->getText();
    
    //New template test
    
    try {
        Stack<int>         intStack;  // stack of ints
        Stack<string> stringStack;    // stack of strings
        
        // manipulate int stack
        intStack.push(7);
        cout << intStack.top() <<endl;
        
        // manipulate string stack
        stringStack.push("hello");
        cout << stringStack.top() << std::endl;
        stringStack.pop();
        stringStack.pop();
    }
    catch (exception const& ex) {
        cerr << "Exception: " << ex.what() <<endl;
        return -1;
    }
    return 0;

}

