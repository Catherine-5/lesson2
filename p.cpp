#include <iostream>
using namespace std;

int main (){
                int num [10]= {4,65,2,23,76,23,1,98,4,21};
                
              
            
                int temp=0;
              for(int i= 0; i < 10; i++) {
                cout << num [i]<< endl;
              }
             
                for(int i= 0; i < 10; i++) {
               for(int j= 0; j < 10-i; j++){
               
                 if( num [j] > num[j+1] ) {

                     int temp =num [j] ;
                     num [j] = num [j+1] ;
                     num [j+1] = temp;
                 }

               }
                }
                for(int i= 0; i < 10; i++) {
                cout << num [i] << endl;
                }
                 return 0;
}
