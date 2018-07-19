// Baloni.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

class Balloon
{

    int height;
    int distance;
};

int main()
{
    int arrowCount = 0;
    vector<int> balloonDistance(1000000, -1);
    vector<int> arrowDistance(1000000, -1);

    int count = 0;
    cin >> count;

    for (int i = 0; i < count; i++)
    {
        int height;
        cin >> height;
        balloonDistance[height - 1] = i;
    }

    for (int i = balloonDistance.size(); i >= 0; i--)
    {
        if (balloonDistance[i] != -1) //exists & this is the greatest height so far
        {
            if(arrowDistance[i] != -1)
            }
    }


    return 0;
}

s
