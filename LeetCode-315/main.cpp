//
//  main.cpp
//  LeetCode-315
//
//  Created by BruceChi on 2016/2/2.
//  Copyright © 2016年 lazyBear. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> countSmaller( vector<int>& nums )
{
    vector<int> countVec( nums.size(), 0 );
    unsigned int idx, idx2;
    int value, count;
    for( idx = 0; idx < nums.size(); ++idx )
    {
        value = nums[idx];
        count = 0;
        for( idx2 = idx; idx2 < nums.size(); ++idx2 )
        {
            if( nums[idx2] >= value )
                continue;
            ++count;
        }
        countVec[idx] = count;
    }
    
    return countVec;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    
    
    return 0;
}
