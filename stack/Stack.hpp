//
//  Stack.hpp
//  stack
//
//  Created by 吴桐 on 16/4/17.
//  Copyright © 2016年 吴桐. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include <stdio.h>
#include <string>
using namespace std;
class Stack{
private:
    struct item{
        string name;
        int value;
        item* prev;
    };
    
    item* stackPtr;
    
public:
    void Push(string name, int value);//push the item on the top of the stack
    void Pop();
    void ReadItem(item* r);
    void Print();
    
    Stack();
    ~Stack();

};

#endif /* Stack_hpp */
