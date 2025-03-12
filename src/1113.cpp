#include <iostream>
using namespace std;
void myswap (int &a, int &b) {
    int temp= a;
    a = b ;
    b= temp;
     
}

void bubbleSort(int *arr, int size) {
for(int i= 0; i < size; i++) 
{
    for(int j= 0; j < size-i-1; j++) 
{ 
    if (arr[j] > arr[j + 1]) 
    {
         myswap (arr[j], arr[j+1]);
}
}
}
}
int main (){
             int a [10]= {4,65,2,23,76,23,1,98,4,21};
                
        
              for(int i= 0; i < 10; i++) {
                cout << a[i]<< " " << endl;
              }
            
            bubbleSort (a,10);
             
            for (int i= 0; i < 10; i++){
                cout << a[i] << " ";
            }
        }
               