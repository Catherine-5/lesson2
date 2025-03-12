#include <iostream>
using namespace std;

void myswap(int *b, int *a){
    int temp = * a;

    *a= *b;
    *b= temp;
}

  
int main (){
   int a= 13;
   int b= 0;
   cout<< "Before :"<< &a<<" "<< &b<< endl ;
   cout<< a<< " "<< b <<  " "<< endl;
  
   myswap (&a, &b);
   
   cout<< a<< " "<< b <<  " "<< endl;
   cout<< "Aftert :"<< &a<<" "<< &b<< endl ;
}