#include <iostream>
using namespace std;

void myswap(int *b, int *a){
    int temp =  *a;
    *a=*b;
    *b= temp;

}
int main() {
    int a= 10;
    int b= 21;
    int *ptr= nullptr;
     cout<< a << " "<<b<< endl;
     myswap(&a,&b);
     cout<< a<< " "<<b<< endl;


}