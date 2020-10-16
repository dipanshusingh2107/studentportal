#ifndef _admin_inc_h_  //have to write dont know why

#define _admin_inc_h_  //have to write dont know why

#include<iostream>
#include<sqlite3.h>
#include<map>
#include<bits/stdc++.h>
#include"hostel.h"
#include"job.h"
#include"library.h"
#include"student.h"
using namespace std;

class admin{
public:  //will change to protected later
string name;
string rollno;
string password;
map<string,float>marks;
float cgpa;
public: 
void showrecord(string rollno);
void input(string rollno , string name , float cgpa,string password);  //takes the input
};


#endif