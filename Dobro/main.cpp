//
//  main.cpp
//  Dobro
//
//  Created by Marcus Griffiths on 11/4/18.
//  Copyright © 2018 Marcus Griffiths. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>



int main(int argc, const char * argv[]) {
    // insert code here...
    // check filename
    std::string target_file_name = argv[1];
    std::ifstream target(target_file_name, std::ifstream::ate | std::ifstream::binary );
    int target_size = (int)target.tellg();
    std::cout << target_size << std::endl;
    
    // check sizes from root
    
    
    // check data matches from size matches
    // list true matches
    return 0;
}
