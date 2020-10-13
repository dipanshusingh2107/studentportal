#include<iostream>
#include<map>
#include<bits/stdc++.h>
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

class library{
protected:
map<string,int>book_status; //checks number of books of one type present
vector<string>books;        //my books issued

public:
void search_book();
void mybooks();
};


class hostel{
protected:
float mess_fees;
int room_alloted;
bool fees_paid;

public:
void showhosteldata();

};

class job{
protected:
float ctc;
string info;

public:
void showjobdata();
};


class student{
protected:
string username,password;

public:
void login();

};


int main()
{
    
}