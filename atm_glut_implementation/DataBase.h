/*
 * DataBase.h
 *
 *  Created on: Dec 24, 2020
 *      Author: menal
 */

#ifndef DATABASE_H_
#define DATABASE_H_
#include <iostream>
#include <fstream>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <unistd.h>
#include <stdlib.h>
#include "settings.h"
using namespace std;
class DataBase
{
 private:
 string filename = "account.txt";
 public:
 void writefile(string,string ,int , string);
 virtual int  readonaccount(string);
};

#endif /* DATABASE_H_ */
