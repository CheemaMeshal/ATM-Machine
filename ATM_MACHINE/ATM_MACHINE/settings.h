/*
 * settings.h
 *
 *  Created on: Dec 24, 2020
 *      Author: menal
 */

#ifndef SETTINGS_H_
#define SETTINGS_H_
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include <stdlib.h>
class settings
{
private:
 time_t t1;
 unsigned int speedforsleep=100000;
 public:
 void displaytime();
 void cleAR();
};

#endif /* SETTINGS_H_ */
