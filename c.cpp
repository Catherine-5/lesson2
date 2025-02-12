#include <iostream>
using namespace std;

int main (){
             int num [10]= {4,65,2,23,76,23,1,98,4,21};
                
               int index=0;
            
                int max;
              for(int i= 0; i < 10; i++) {
                cout << num [i]<< " ";
              }
             
                for(int i= 0; i < 10; i++) {
               for(int j= 0; j < 10-i; j++) {
                         max=num [0];
                         if(max< num[j]){
                            max=num [j];
                         }
                         cout<< max << endl;
                         }
                        cout << num [i]<< " "<< num[j] << endl;
                       
               }
               
               
}
            return 0;
}