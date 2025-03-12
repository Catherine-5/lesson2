#include <iostream>
using namespace std;
// x=(5*(y/3))*10
void myswap(int *b, int *a){
    int temp = * a;

    *a= *b;
    *b= temp;
}

  int*search(int*arr, int size){ 
    int*max= arr;
    for(int i=1; i<size; i++){ 
            if (*(arr+i)>*max) {
            max = arr+i;
            }
           
        
               
        }
        return max;
    }
 
    char *copyStr(char* str, int size){ 
         
        char newStr[size];
         
     return newStr;

    }

int main (){
   string world = "hellow";
   string copyworld= world;
   char worldChar[]= {'H','e','l','l','o'}
   char CopuWorldChar[]= wordChar;

   CopuWorldChar

}
