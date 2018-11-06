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


int get_target_size(const std::string&, std::ifstream*&, int& );
int find_size_matches(const int&);
int find_data_matches(const std::ifstream* const &);

int main(int argc, const char * argv[]) {
    
    // check filename
    std::ifstream* target;
    int target_size = 0;
    get_target_size(argv[1], target, target_size);
    std::cout << target_size << std::endl; // Show target file size for testing
    if (target_size == 0) return 0;
    
    // check sizes of files
    
    find_size_matches(target_size);
    
    // check data matches from size matches
    
    find_data_matches(target);
    
    // list true matches
    return 0;
}

int get_target_size(const std::string& target_name, std::ifstream*& target_dest, int& size)
{
    std::ifstream* target = new std::ifstream(target_name, std::ifstream::ate | std::ifstream::binary );
    if(!target)
    {
        std::cout << "File " << target_name << " failed to open" << std::endl;
        size = 0;
        return 0;
    }
    target_dest = target;
    size = (int)target->tellg();
    return size;
}

int find_size_matches(const int& target_size)
{
    // TODO
    return 1;
}

int find_data_matches(const std::ifstream* const & target)
{
    // TODO
    return 0;
}
