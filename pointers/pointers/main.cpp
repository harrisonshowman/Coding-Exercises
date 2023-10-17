//
//  main.cpp
//  pointers
//
//  Created by Harrison Showman on 10/17/23.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    string name = "Harrison\n";
    cout << name;
    cout << &name << "\n";
    long addressOfName = 6171914824;
    cout << *addressOfName << "\n";
    return 0;
}
