/*
 * DataBase.cpp
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
#include "DataBase.h"
using namespace std;


void DataBase::writefile(string Accno, string pin,int Amount, string name)
{

        fstream open("account.txt",std::ios_base::app);
        open<<Accno;
        open<<",";
        open<<pin;
        open<<",";
        open<<Amount;
        open<<",";
        open<<name;
        open<<"\n";
}
int DataBase::readonaccount(string accountno)
{
        string acc;
        ifstream open("account.txt");
        while(!open.eof())
        {
         getline(open, acc, ',');
         if(acc == accountno)
         {
           settings c4;
	    c4.cleAR();
          string pinasked="";
          cout<<"Enter Pin : ";
          cin>>pinasked;
           settings c5;
	    c5.cleAR();
          getline(open, acc, ',');
           if(acc == pinasked)
           {

           int amo;
           getline(open, acc, ',');
           amo = atoi(acc.c_str());
           return amo;
           }
         
           else
           {

           cout<<"AUTENTICATION-FAILED"<<endl;
           cout<<"Press Enter to return"<<endl;
           cin.ignore().get();
            settings c6;
	    c6.cleAR();
           return -1;
           }
         }
         getline(open, acc, '\n');
}
        cout<<"AUTENTICATION-FAILED"<<endl;
        cout<<"Press Enter to return"<<endl;
        cin.ignore().get();
         settings c7;
	    c7.cleAR();
        return -1;
}

