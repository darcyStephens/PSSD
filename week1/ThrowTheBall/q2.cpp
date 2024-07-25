#include "ThrowTheBall.hpp"
#include "iostream"

int main()
{
    ThrowTheBall game;
    int result;
    result = game.timesThrown(15,4,9);
    std::cout<<result<<std::endl;
    return 0;

}