#ifndef _job_inc_h_  //have to write dont know why

#define _job_inc_h_  //have to write dont know why

#include<iostream>
#include<bits/stdc++.h>
#include"admin.h"
using namespace std;



class job: virtual public admin
{
public:  //will change to protected;
string company_name;
float ctc;
string info;

public:
void showjobdata();
void input(string company_name , float ctc, string info);
};

#endif