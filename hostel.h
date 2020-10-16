#ifndef _hostel_inc_h_  //have to write dont know why

#define _hostel_inc_h_  //

#include<iostream>
#include<map>
#include<bits/stdc++.h>
#include"admin.h"
#include"job.h"
#include"library.h"
#include"student.h"
using namespace std;



class hostel: public admin
{
public:  //will change
static float mess_fees;
int room_alloted;
bool fees_paid;

public:
void showhosteldata();
void input(float mess_fees,int room_alloted, bool fees_paid);

};

#endif