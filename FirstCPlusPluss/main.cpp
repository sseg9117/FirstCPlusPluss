//
//  main.cpp
//  FirstCPlusPluss
//
//  Created by Segota, Sheradon on 1/23/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//

#include <iostream>

using namespace std;

int oldMain(){
    // insert code here...
    cout << "What is your name?" << endl;
    string word;
    getline(cin,word);
//    cin >> word;
    cout << "Hello " << word << endl;
    cout << (3 + 5 * 43) << endl;
    return 17;
}
