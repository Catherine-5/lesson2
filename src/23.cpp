#include <iostream>
using namespace std;

int main (){
            int a= 5;
            int *ptra=&a;
            int &refa=a;
            int *b=ptra;
            int *ptrb=b;
            int **refd = &ptrb;
            cout << "a: " << &a  << endl;
            cout << "ptra: " << ptra  << endl;
            cout << "b: " <<  &refa << endl;
            cout << "ptrb: " << &ptrb << endl;
            cout << "refd: " << refd << endl;

}