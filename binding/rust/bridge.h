#pragma once 

#include "ffi_types.h"
using namespace std; 

#include <iostream>
#include <vector> 

namespace aic :: security 
{
    uint32_t version(); 

    vector<uint8_t> hash(const vector<uint8_t> &input);
}