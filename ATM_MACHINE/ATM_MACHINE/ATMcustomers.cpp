/*
 * ATMcustomers.cpp
 *
 *  Created on: Dec 24, 2020
 *      Author: menal
 */
#include <iostream>
#include <fstream>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include <stdlib.h>
#include "ATMcustomers.h"
#include "ATMcustomers.h"
using namespace std;


void ATM_customers::deposit_Envelop()
{
        settings c4;
	    c4.cleAR();
	    int var1;
	    cout<<"[1] Deposit  "<<endl;
	    cout<<"[0] Cancel Transaction "<<endl;
	    cout<<"ENTER : ";
	    cin>>var1;
	    double cash;
	   settings c5;
	    c5.cleAR();
	    if (var1==1)
	    {

	    cout<<"Enter Cash : ";
        cin>>cash;
         settings c6;   
	    c6.cleAR();
        account_Balance=total_Balance+cash/100 ;
        cout<<"New Balance : $"<<account_Balance<<endl ;//adds in the balance
	    }
	    if (var1==0)
	    {
         //happens nothing if we cancel
	    }
	    cout<<"Press Enter to return"<<endl; //returns to main accessing
        cin.ignore().get();

}
void ATM_customers::with_draw()//with_drawal Transactions
{ 
       
        settings c3;
	    c3.cleAR();
	    cout<<"WITHDRWAL OPTIONS"<<endl;
	    cout<<"[1] $20"<<endl;
	    cout<<"[2] $40"<<endl;
	    cout<<"[3] $60"<<endl;
	    cout<<"[4] $100"<<endl;
	    cout<<"[5] $200"<<endl;
	    cout<<"[6] Cancel Transaction"<<endl;
	    double cash;
	    cout<<"ENTER : ";
	    cin>>cash;
	    settings c4;
	    c4.cleAR();
	    while (cash > total_Balance)   //checking if balaance is less then cash
	    {
	    cout<<"Enter small amount, YOU DONT HAVE ENOUGH BALANCE : ";
	    cin>>cash;
	    }
	    settings c5;
	    c5.cleAR();
	    unsigned int microsecond=1000000;
	    cout<<"Insert Deposit Envelope please,and press 0"<<endl;
	    cin>>count;
	    if (count==0)
	    {
	    if (cash==1)
	    {
	    double b;
	    account_Balance=total_Balance-20 ;
	    cout<<"DONE"<<endl;
        cout<<"New Balance : $"<<account_Balance<<endl;
	    unsigned int microsecond=1000000;
	    sleep(3);
	    //usleep(3*microsecond);  //sleeps for 3 sec
	                       //goes to main menu
	    }
	   if (cash==2)
	   {
	      double b;
	      account_Balance=total_Balance-40;

	    cout<<"DONE"<<endl;
        cout<<"New Balance : $"<<account_Balance<<endl;
	    unsigned int microsecond=1000000;
	    usleep(3*microsecond);//sleeps for 3 sec
	     //goes to main menu
	     
	   }
	   if (cash==3)
	   {
	      double b;
	      account_Balance=total_Balance-60 ;

	        cout<<"DONE"<<endl;
        cout<<"New Balance : $"<<account_Balance<<endl;
	    unsigned int microsecond=1000000;
	    usleep(3*microsecond);//sleeps for 3 sec
	     //goes to main menu
	     
	    }
	   if (cash==4)
	   {
	       cout<<"DONE"<<endl;
        cout<<"New Balance : $"<<account_Balance<<endl;
	    unsigned int microsecond=1000000;
	    usleep(3*microsecond); //sleeps for 3 sec
	      //goes to main menu
	   }
	   if (cash==5)
	   {  
	     cout<<"DONE"<<endl;
        cout<<"New Balance : $"<<account_Balance<<endl;
	    unsigned int microsecond=1000000;
	    usleep(3*microsecond);//sleeps for 3 sec
	    //goes to main menu
	   }
	   if (cash==6)
	   {
         //goes to main menu
	   }
	   }
	   else
	   {
	    unsigned int microsecond=1000000;
	    usleep(120*microsecond); //sleeps for 2m
	   }
	  }

void ATM_customers::Information()
{
	    settings c1;
	    c1.cleAR();
	    cout<<"ATM ACCOUNT Information"<<endl;
        cout<<"Total Balance : "<< total_Balance<<endl;
	    cout<<"Name : "<<customer_name<<endl;
	    cout<<"Account Number  : "<<acc_nO<<endl;
	    cout<<"Press Enter to return"<<endl;
        cin.ignore().get();

}

