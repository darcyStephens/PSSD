#include <iostream>
#include <string>
using namespace std;
#include "StreetParking.hpp"
int main() {
    StreetParking sp;
    string street = "---B--S-D--S--";
    cout << "Free parking spaces: " << sp.freeParks(street) << endl;
    return 0;
}