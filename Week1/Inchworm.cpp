#include <iostream>
#include <string>
#include "Inchworm.h"
#include <vector>
#include <cmath>
int Inchworm::lunchtime(int branch, int rest, int leaf)
{
    int res =  0;
    for (int i = 0; i <= branch; i++)
    {
        if ((i % rest == 0) && (i % leaf == 0))
        {
            res++;
        }
    }

    std::cout << res << std::endl;

    return res;
}