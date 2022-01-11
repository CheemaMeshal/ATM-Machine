/*
 * MAINPROC.cpp
 *
 *  Created on: Dec 24, 2020
 *      Author: menal
 */

#include "MAINPROC.h"
#include <iostream>
#include <fstream>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include <stdlib.h>
#include "ATMcustomers.h"
#include "ATMcustomers.cpp"
using namespace std;
void MAIN_PROC::MAIN_SCREEN()
{ 
         settings c1;
	    c1.cleAR();
	      cout<<"1)Deposit Funds"<<endl;
	      cout<<"2)Widdraw Cash"<<endl;
	      cout<<"3)Account Details"<<endl;
	      cout<<"4)EXIT"<<endl;
	      cout<<"ENTER : ";
	      cin>>val1;
	      settings c3;
	    c3.cleAR();
	      if (val1==1)
	      {
	       custno1.deposit_Envelop();
	      }
	      if (val1==2)
	      {
	       custno1.with_draw();
	      }
	      if (val1==3)
	      {
	    
	       custno1.Information();
	      }
	      if (val1==4)
	      {

	       cout<<"THANKYOU-FOR VISITING US"<<endl;
	      }
}

