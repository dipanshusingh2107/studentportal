#include"hostel.h"
#include<iostream>
using namespace std;
/*
     unused - the pointer passed in 4th arg of sqlite3_exec()
     count - The number of columns in the result set
     data - The row's data
     columns - The column names
*/
static int callback(void *unused, int count, char **data, char **columns)
{
    hostel* ptr= (hostel*)unused;
    float mess_fees= atof(data[0]);
    int room_alloted= atoi(data[1]);
    bool fees_paid;
    string s = data[2];
    if(s=="NO")
    fees_paid=false;
    else
    fees_paid=true;

    ptr->input(mess_fees , room_alloted , fees_paid);
    

    return 0;
}

void hostel::showhosteldata()
{
    sqlite3 * db;
    int exit = sqlite3_open("admin.db",&db); // location of database and address of pointer to store db
    
    string sql = "select * from hostel_table where rollno = '"+this->rollno+"';" ; //sql command to be executed;
    sqlite3_exec(db,sql.c_str(),callback,this,NULL);  //c_str convert string to char*
    cout<<"Mess fees: "<<this->mess_fees<<" Room alloted "<<this->room_alloted<<" Fess paid "<<this->fees_paid<<endl;

}


void hostel::input(float mess_fees, int room_alloted, bool fees_paid)
{
    this->mess_fees = mess_fees;
    this->room_alloted = room_alloted;
    this-> fees_paid = fees_paid;
   
}
