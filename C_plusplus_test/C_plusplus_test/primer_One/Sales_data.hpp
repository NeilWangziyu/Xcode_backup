//
//  Sales_data.hpp
//  primer_One
//
//  Created by 王子昱 on 2018/11/9.
//  Copyright © 2018 王子昱. All rights reserved.
//

#ifndef Sales_data_hpp
#define Sales_data_hpp
#include <string>
#include <stdio.h>
struct Sales_data{
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0;
    
    
};
#endif /* Sales_data_hpp */
