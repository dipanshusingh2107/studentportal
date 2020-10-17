#ifndef _hostel_inc_h_  //have to write dont know why

#define _hostel_inc_h_  //

#include<iostream>
#include"admin.h"
using namespace std;



class hostel: virtual public admin
{
public:  //will change
float mess_fees;
int room_alloted;
bool fees_paid;

public:
void showhosteldata();
void input(float mess_fees,int room_alloted, bool fees_paid);

};

#endif