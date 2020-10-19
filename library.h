#ifndef _library_inc_h_  //have to write dont know why

#define _library_inc_h_  //have to write dont know why

#include<iostream>
#include<bits/stdc++.h>
#include"admin.h"
using namespace std;



class library: virtual public admin
{
public:  //need to change
int book_number;
string book_name;
vector<pair<string,int> >books;        //my books issued
public:
void search_book();
void mybooks();
};



#endif