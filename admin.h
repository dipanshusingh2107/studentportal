#ifndef _admin_inc_h_  //have to write dont know why

#define _admin_inc_h_  //have to write dont know why

#include<iostream>
#include<map>
#include<bits/stdc++.h>
#include"hostel.h"
#include"job.h"
#include"library.h"
#include"student.h"
using namespace std;

class admin{
protected:
string name;
string rollno;
map<string,float>marks;
float cgpa;
public: 
void showmarks();
};


#endif