#include <iostream>
#include <map>
#include <vector>
using namespace std;

class ThrowTheBall
{
public:
    int timesThrown(int numPlayers, int maxPos, int passOnBy)
    {
        int timesThrown, currentPlayer, diff;
        timesThrown = 0;
        currentPlayer = 0;
        
        //create vector of size N and popualte with zeros
        std::vector<int> players(numPlayers, 0);
       

        if (numPlayers < 3 || numPlayers > 50)
        {
            std::cout << "error N invalid" << std::endl;
            return -1;
        }
        if (maxPos < 1 || maxPos > 50)
        {
            std::cout << "error M invalid" << std::endl;
            return -1;
        }
        if (passOnBy < 1)
        {
            std::cout << "error L invalid" << std::endl;
            return -1;
        }

        while (true)
        {
            //increment possesion of player with the ball
            players[currentPlayer]++;

            //checking if game end is met
            if (players[0] > 1)
            {
                return timesThrown * (maxPos -1);
            }

            //figuring out who to pass to

            //check if even, pass clockwise
            if(players[currentPlayer] % 2 == 0)
            {
                diff = currentPlayer + passOnBy;

                //broken over boundry, loop back around the circle
                if(diff > numPlayers)
                {
                    currentPlayer = diff - numPlayers;

                }
                else
                {
                    currentPlayer = diff;
                }
                
            }
            else{
                //possession is odd, pass ant-clockwise

                diff = currentPlayer - passOnBy;

                //broken over boundry, loop back around the circle
                if(diff < 0)
                {
                    currentPlayer = numPlayers + diff; 

                }
                else
                {
                    currentPlayer = diff;
                }

            }

            timesThrown++;

        }
        return timesThrown;
    }
};