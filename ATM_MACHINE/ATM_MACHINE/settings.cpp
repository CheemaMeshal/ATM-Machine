/*
 * settings.cpp
 *
 *  Created on: Dec 24, 2020
 *      Author: menal
 */

#include "settings.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include <stdlib.h>
using namespace std;
void settings::displaytime()
{
  cout<<"DATE : ";
  time(&t1);
  cout<<ctime(&t1);
}
void settings::cleAR()
{
  usleep(speedforsleep);
  std::system("clear");
  cout<<"\033[2J\033[1;1H";
}

