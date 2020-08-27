// Eric Truong
// 018149311
// April 10, 2020

#include <iostream>
#include "ModernLinkedList.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    ModernLinkedList test;
    
    test.PushFront(1);
    test.PushFront(2);
    test.PushFront(3);
    
    test.PushBack(5);
    test.PushBack(6);
        
    test.PopFront();
    test.PopFront();
        
    test.RemoveAt(2);
    
    test.PushBack(7);
    
    test.PrintList();
    
    test.Insert(1, 2);
    test.Insert(2, 3);
    test.Insert(0, 8);
    
    test.PrintList();
    
    cout << test[1] << endl;
    
    test.Clear();
    
    test.PrintList();
    
    return 0;
}
