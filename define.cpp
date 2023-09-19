#include <iostream>
using namespace std;
#define SQL_HOST "localhost"
#define SQL_USER "root"
#define SQL_PASS ""
#define SQL_DATA "ab_db"
int main()
{
    cout << "Hostname: " << SQL_HOST << endl;
    cout << "User: " << SQL_USER << endl;
    cout << "Password: " << SQL_PASS << endl;
    cout << "Database: " << SQL_DATA << endl;
    return 1;
}
