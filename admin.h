#ifndef _admin_inc_h_  //have to write dont know why

#define _admin_inc_h_  //have to write dont know why

#include<iostream>
#include<sqlite3.h>
#include<bits/stdc++.h>
#include<iostream>
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