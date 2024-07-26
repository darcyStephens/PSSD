#include <iostream>
#include <string>
using namespace std;

class StreetParking
{
    public:
    int freeParks(string Street)
    {
        if (Street.length() > 50)
        {
            cout << "Street too long" << endl;
            return -1;
        }
        if (Street.length() < 1)
        {
            cout << "Street too short" << endl;
            return -1;
        }
        int numParks = 0;

        for (int i = 0; i < Street.length(); i++)
        {
            if (Street[i] == '-')
            {
                bool canPark = true;
                
                if (i + 1 < Street.length() && (Street[i + 1] == 'B' || Street[i + 1] == 'S'))
                {
                    canPark = false;
                }
                if (i + 2 < Street.length() && Street[i + 2] == 'B')
                {
                    canPark = false;
                }
                if (i > 0 && Street[i - 1] == 'S')
                {
                    canPark = false;
                }

                if (canPark)
                {
                    numParks++;
                }
            }
        }
        return numParks;
    }
};

