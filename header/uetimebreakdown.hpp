#ifndef __UETIMEBREAKDOWN_HPP__
#define __UETIMEBREAKDOWN_HPP__
#include <vector>
#include <iostream>
#include "timebreakdown.hpp"
using namespace std;

class UETimeBreakdown:TimeBreakDown{
    private:

    public:
        UETimeBreakdown();
        void collectTimeMetaData();
};

#endif