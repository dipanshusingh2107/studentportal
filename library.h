#ifndef _library_inc_h_  //have to write dont know why

#define _library_inc_h_  //have to write dont know why

#include<iostream>
#include<map>
#include<bits/stdc++.h>
#include"admin.h"
#include"hostel.h"
#include"job.h"
#include"student.h"
using namespace std;



class library{
protected:
map<string,int>book_status; //checks number of books of one type present
vector<string>books;        //my books issued

public:
void search_book();
void mybooks();
};



#endif