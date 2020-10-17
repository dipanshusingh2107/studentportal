#include"admin.h"


/*
     unused - 
     count - The number of columns in the result set
     data - The row's data
     columns - The column names
*/
static int callback(void *unused, int count, char **data, char **columns)
{
    admin* ptr= (admin*)unused;
    ptr->input(data[0],data[1],atof(data[2]), data[3]);

    return 0;
}
void admin::showrecord(string rollno)
{
    sqlite3 * db;
    int exit = sqlite3_open("admin.db",&db); // location of database and address of pointer to store db
    
    string sql = " select * from admin_table where rollno = '"+rollno+"';" ; //sql command to be executed;
    sqlite3_exec(db,sql.c_str(),callback,this,NULL);  //c_str convert string to char*

}


void admin::input(string rollno , string name , float cgpa,string password)
{
    this->rollno = rollno;
    this-> name= name;
    this-> cgpa =cgpa;
    this->password = password;
}
