//
//  main.cpp
//  Fibonacci
//
//  Created by Jay Patel on 9/16/16.
//  Copyright © 2016 Jay Patel. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, firstTerm = 1, secondTerm = 1, nextTerm;
    cout << "Enter number of terms: ";
    cin >> n;
    
    cout << "Fibonacci Series: " << firstTerm << " + " << secondTerm << " + ";
    for (int i = 1; i <= n-2;++i) {
        nextTerm = firstTerm + secondTerm;
        cout << nextTerm << " + ";
        firstTerm = secondTerm;
        secondTerm = nextTerm;
    }
    return 0;
}
