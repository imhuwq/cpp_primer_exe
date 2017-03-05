#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>

struct SalesData {
    std::string bookNo;
    unsigned unitsSold;
    double revenue;
};

#endif