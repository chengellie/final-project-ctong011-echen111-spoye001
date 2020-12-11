#ifndef __STRAT_TEST_HPP__
#define __STRAT_TEST_HPP__
#include "gtest/gtest.h"
#include "../header/restaurant.hpp"
#include "../header/item.hpp"
#include "../header/tag.hpp"
#include "../header/fooditem.hpp"
#include "../header/category.hpp"
#include "../header/pricebreakdown.hpp"
#include "../header/ddpricebreakdown.hpp"
#include "../header/uepricebreakdown.hpp"
#include "../header/strategy.hpp"
#include "../header/pricestrategy.hpp"
#include "../header/timestrategy.hpp"

TEST(PriceStrategyTest, Test) {
    Restaurant* rest = new Restaurant("Chick-Fil-A");
    
    Strategy* test = new PriceStrategy(rest);
    test->compare();
}

#endif //__STRAT_TEST_HPP__