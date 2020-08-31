//
// Created by ariad on 30/8/2020.
//

#ifndef MY_PROJECT_NAME_IPROCESSPAYMENT_H
#define MY_PROJECT_NAME_IPROCESSPAYMENT_H
#include<iostream>
#include<sstream>
using namespace std;

class IProcessPayment{
   virtual  std::string sendPayment() const =0;
};

#endif //MY_PROJECT_NAME_IPROCESSPAYMENT_H
