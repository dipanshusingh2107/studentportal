#include"admin.h"
#include<iostream>
#include<sqlite3.h>

/*
     unused - Ignored in this case, see the documentation for sqlite3_exec
     count - The number of columns in the result set
     data - The row's data
     columns - The column names
*/
static int callback(void *unused, int count, char **data, char **columns)
{
    int idx;

    printf("There are %d column(s)\n", count);

    for (idx = 0; idx < count; idx++) {
        printf("The data in column \"%s\" is: %s\n", columns[idx], data[idx]);
    }

    printf("\n");

    return 0;
}
void admin::showrecord(string rollno)
{
    sqlite3 * db;
    int exit = sqlite3_open("admin.db",&db); // location of database and address of pointer to store db
    
    string sql = " select * from admin_table where rollno = '"+rollno+"';" ; //sql command to be executed;
    sqlite3_exec(db,sql.c_str(),callback,NULL,NULL);  //c_str convert string to char*

}