/*
 * ATMcustomers.h
 *
 *  Created on: Dec 24, 2020
 *      Author: menal
 */

#ifndef ATMCUSTOMERS_H_
#define ATMCUSTOMERS_H_
#include <iostream>
#include <fstream>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include <stdlib.h>
#include "DataBase.h"
#include "settings.h"
using namespace std;
class ATM_customers:public settings,public DataBase
{
        public:
        int PIN;
        int total_Balance;
	    string Customers;
	    double widdrawn_limit;
        string customer_name;
        int acc_nO;
        double account_Balance;
        double cash;
        int count;
	    void deposit_Envelop();
	    void with_draw();
        void virtual Information();
	    ATM_customers()
	    {
	     acc_nO = 10999;
	     customer_name = "MIKE";
	     total_Balance =23000 ;
	     account_Balance=23000;
	    }
};

#endif /* ATMCUSTOMERS_H_ */
