/*
 * MAINmenu.h
 *
 *  Created on: Dec 24, 2020
 *      Author: menal
 */

#ifndef MAINMENU_H_
#define MAINMENU_H_
#include <iostream>
#include <fstream>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include <stdlib.h>
#include "ATMcustomers.h"
#include "DataBase.h"
#include "settings.h"
#include "MAINPROC.h"
using namespace std;
class MAIN_menu:public MAIN_PROC,public settings,public DataBase,public ATM_customers
{
private:
int i, PIN,ACC_NUM;
int option;
public:
void Accessing();
};

#endif /* MAINMENU_H_ */
