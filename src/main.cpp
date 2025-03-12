#include <iostream>

using namespace std;
// x=(5*(y/3))*10
 void urav(int *b, int *a){
  *b=(5*(*a/3))*10;
  *a= *b/13*7;
 }
int main (){


   int a= 13;
   int b= 100;
   int *ptrb= &b;

   cout<< "PRT b:"<< *ptrb<< endl ;
    
   cout<< "Before b:"<< &b<< endl ;
   cout<< "Before a:"<< &a<< endl ;

   urav(&b,&a); 
   
   cout<< "After b:"<< &b<< endl ;
   cout<< "After a:"<< &a<< endl ;

   cout<< "Resul b:"<< b;
   cout<< "Resul a:"<< a;
} 
