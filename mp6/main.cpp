#include <iostream>
#include "dsets.h"
#include "maze.h"
#include "cs225/PNG.h"

using namespace std;

int main()
{
    // Write your own main here
  //  cout << "Add your own tests here! Modify main.cpp" << endl;
  SquareMaze maze;
  	PNG * actualOutput = maze.drawCreativeMaze();
  	actualOutput->writeToFile("mp7creative"+ string(".png"));
    return 0;
}
