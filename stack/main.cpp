//
//  main.cpp
//  stack
//
//  Created by 吴桐 on 16/4/17.
//  Copyright © 2016年 吴桐. All rights reserved.
//

#include <iostream>
#include "Stack.hpp"
using namespace std;
int main(int argc, const char * argv[]) {
    Stack wutong;
    wutong.Push("wutong", 3);
    wutong.Push("coffee", 0);
    wutong.Push("lunch", 0);
    wutong.Push("video", 6);
    wutong.Print();
    cout << "Popping\n";
    wutong.Pop();
    cout << "Popping\n";
    wutong.Pop();
    cout << "Popping\n";
    wutong.Pop();
    cout << "Popping\n";
    wutong.Pop();
    cout << "Popping\n";
    wutong.Pop();
    cout<< "\n\nNew stack\n";
    wutong.Push("Books", 100);
    wutong.Push("pencil", 1);
    wutong.Push("cook", 10);
    wutong.Print();
    return 0;
}
