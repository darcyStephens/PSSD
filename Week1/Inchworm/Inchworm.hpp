
#include <iostream>
using namespace std;
 
 
class Inchworm
{
  public:
  int lunchtime(int branch, int rest, int leaf)
  {
    int res = 0;
        for (int i = 0; i <= branch; i++)
        {
            if ((i % rest == 0) && (i % leaf == 0))
            {
                res++;
            }
        }

        std::cout << res << std::endl;
    
    return res;  // return your result
  }
};