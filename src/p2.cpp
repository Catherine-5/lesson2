#include <iostream>
using namespace std;
// x=(5*(y/3))*10
void myswap(int *b, int *a){
    int temp = * a;

    *a= *b;
    *b= temp;
}

  
int main (){
   int a[5]={3,56,2,43,2};

   int *ptra = a;

  cout <<*(ptra+1)<<endl;
  cout <<*(ptra+2)<<endl;
  cout <<*(ptra+3)<<endl;
  cout <<*(ptra+4)<<endl;

}