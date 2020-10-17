#ifndef _student_inc_h_  //have to write dont know why

#define _student_inc_h_  //have to write dont know why

#include<iostream>
#include"hostel.h"
#include"job.h"

using namespace std;


class student:public hostel,public job
{
public:
bool login();

};

#endif