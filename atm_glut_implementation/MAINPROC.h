/*
 * MAINPROC.h
 *
 *  Created on: Dec 24, 2020
 *      Author: menal
 */

#ifndef MAINPROC_H_
#define MAINPROC_H_
#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <stdlib.h>
#include "ATMcustomers.h"
#include "settings.h"
using namespace std;
class MAIN_PROC:public ATM_customers,public settings
{
 private:
 int val1;
 ATM_customers custno1;
 public:
 void MAIN_SCREEN();
};

#endif /* MAINPROC_H_ */
