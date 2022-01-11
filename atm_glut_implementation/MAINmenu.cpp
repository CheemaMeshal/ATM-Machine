/*
 * MAINmenu.cpp
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
#include "MAINmenu.h"
#include "DataBase.h"
#include "settings.h"
#include "MAINPROC.h"
#include "DataBase.cpp"
#include "MAINPROC.cpp"
using namespace std;


void MAIN_menu::Accessing()
{
settings t1;
t1.displaytime();
cout<<"1)Access my Account "<<endl;
 cout<<"Enter : ";

cin>>option;
 settings c4;
	    c4.cleAR();
  if (option==1)
  {
        int amo;

	    DataBase b,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16;
        string acc;
        a1.writefile("12344","17533",10440,"MESHAL");
        a2.writefile("19876","17456",11500,"MENAL");
        a3.writefile("16744","18533",39000,"NAWAL");
        a4.writefile("17643","11111",21456,"HAMMAD");
        a5.writefile("12333","22223",98765,"MUSA");
        a6.writefile("15634","17635",55500,"USAMA");
        a7.writefile("19777","19864",98712,"SOBIA");
        a8.writefile("10876","13486",76123,"HAJIRA");
        a9.writefile("10999","15546",23000,"SAQIB");
        a10.writefile("11112","76433",40000,"RIMSHA");
        a11.writefile("16342","87422",3456,"IDREES");
        a12.writefile("11296","98636",1244,"MATEEM");
        a13.writefile("16732","45664",900000,"KAINAT");
        a14.writefile("19754","61785",876434,"HUDA");
        a15.writefile("13464","64972",185753,"MOMINAH");
        a16.writefile("10987","54321",138533,"HAMZA");
        
        cout<<"Enter account number : ";
        cin>>acc;
        settings c5;
	    c5.cleAR();
        amo=b.readonaccount(acc);
        if (amo!=-1)
        {

	    MAIN_PROC m3;
        m3.MAIN_SCREEN();
         settings c6;
	    c6.cleAR();
        MAIN_menu m4;
        m4.Accessing();
        }
        else
        {
        settings c7;
	    c7.cleAR();
	    MAIN_menu m3;
        m3.Accessing();
       
        }
  	}
 
  if (option!=1)
  {
  cout<<"AUTHENTICATION-FAILED"<<endl;
  cout<<"Press Enter to return"<<endl;
  cin.ignore().get();
  settings c8;
  c8.cleAR();
  MAIN_menu m2;
  m2.Accessing();
  }
} 

