//
//  Runner.cpp
//  FirstCPlusPluss
//
//  Created by Segota, Sheradon on 1/23/18.
//  Copyright © 2018 Segota, Sheradon. All rights reserved.
//

#include <iostream>
#include "Controller.hpp"

int main()
{
    Controller * app = new Controller();
    
    (*app).start();
    
    app->start();
    
    return 0;
}
