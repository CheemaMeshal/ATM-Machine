//============================================================================
// Name        : ATM.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string.h>
#include <ctime>
#include <cstdlib>
//#include <unistd.h>
//#include <stdlib.h>
#include "settings.h"
#include "MAINmenu.h"
#include "settings.cpp"
#include "MAINmenu.cpp"
//using namespace std;


int main()
{     
     
    settings c1;   //clears screen
	c1.cleAR();
	MAIN_menu m1;//acessing our main class
	m1.Accessing(); 
    return 0; 

}
 

