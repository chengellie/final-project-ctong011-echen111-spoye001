#ifndef __FACTORY_HPP__
#define __FACTORY_HPP__

/*#include API info*/
#include "pricebreakdown.hpp"
#include "timebreakdown.hpp"
#include "restaurant.hpp"

class Factory {
    protected:
        PriceBreakdown* pbd;
        TimeBreakdown* tbd;
        Restaurant* rest;
    public:
        /* Pure Virtual Functions */
        Factory(Restaurant* rest) : rest(rest) {};
        virtual void createPriceBreakdown() = 0;
        virtual void createTimeBreakdown() = 0;
        // virtual void createRestaurantList() = 0;
};

class UberEatsFactory : public Factory{
    public:
        UberEatsFactory(Restaurant* rest);
        virtual PriceBreakdown* createPriceBreakdown();
        virtual TimeBreakdown* createTimeBreakdown();
        // virtual void createRestaurantList();
};

class DoorDashFactory : public Factory{
    public:
        DoorDashFactory(Restaurant* rest);
        virtual PriceBreakdown* createPriceBreakdown();
        virtual TimeBreakdown* createTimeBreakdown();
        // virtual void createRestaurantList();
};

#endif //__FACTORY_HPP__