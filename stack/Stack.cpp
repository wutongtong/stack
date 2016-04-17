//
//  Stack.cpp
//  stack
//
//  Created by 吴桐 on 16/4/17.
//  Copyright © 2016年 吴桐. All rights reserved.
//

#include "Stack.hpp"
#include <iostream>


using namespace std;

Stack::Stack(){
    stackPtr = NULL;
}

Stack::~Stack(){
    item* p1;
    item* p2;
    
    p1 = stackPtr;
    while(p1 != NULL){
        p2 = p1;
        p1 = p1->prev;
        p2->prev = NULL;
        delete p2;
    }
}

void Stack::Push(string name, int value){
    item* n = new item;
    n->name = name;
    n->value = value;
    if(stackPtr == NULL){
        stackPtr = n;
        stackPtr->prev = NULL;
    }else{
        n->prev = stackPtr;
        stackPtr = n;
    }
}


void Stack::ReadItem(Stack::item *r){
    cout<< "--------------------\n";
    cout<< "name:  "<< r->name << endl;
    cout<< "value:  "<< r->value << endl;
    cout<< "--------------------\n";
}


void Stack::Pop(){
    if(stackPtr == NULL){
        cout<< "There is nothing on the stack\n";
    }else{
        item* p = stackPtr;
        ReadItem(p);
        stackPtr = stackPtr->prev;
        p->prev = NULL;
        delete p;
    }
}


void Stack::Print(){
    item* p = stackPtr;
    while(p != NULL){
        ReadItem(p);
        p = p->prev;
    }
}





















