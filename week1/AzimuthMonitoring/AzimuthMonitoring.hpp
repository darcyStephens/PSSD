#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

class AzimuthMonitoring
{   
    private:
    int getDegree(string instruction)
    {
        istringstream stream(instruction);
        string direction;
        int degree;
        stream >> direction >> degree ;
        return degree;
    }
    int fixDegree(int degree)
    {
        while (degree < 0)
        {
            degree += 360;
        }
        while (degree >= 360)
        {
            degree -= 360;
        }
        return degree;
    }
    public:

    int getAzimuth(vector<string> instructions)
    {
        int result = 0;
        for (int i = 0; i < instructions.size(); ++i)
        {
            //end of instructions
            if (instructions[i] == "HALT" )
            {
                result = fixDegree(result);
                return result;
            } 
            //turn left
            else if (instructions[i] == "LEFT")
            {
                result -= 90;
            }
            //turn right
            else if (instructions[i] == "RIGHT")
            {
                result += 90;
            }
            //turn around 180
            else if (instructions[i] == "TURN AROUND")
            {
                result += 180;
            }
            //turn left x
            else if (instructions[i].find("LEFT ") != string::npos)
            {
                 result -= getDegree(instructions[i]);
            }
            //turn right x
            else if (instructions[i].find("RIGHT ") != string::npos)
            {
                 result += getDegree(instructions[i]);
            }
            
        }
        result = fixDegree(result);
        return result;
    }

};