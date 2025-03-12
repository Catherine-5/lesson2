#include <iostream>
using namespace std;

int main (){
     int arr[10];

     int *darr=new int;
     for(int i= 0; i<10;i++){
        cout<< arr[i]<< " ";
     }
      cout << endl;
      for (int i=0;i<10;i++)
      {
        cout<< darr[i]<< " ";

      }
     delete[] darr;
}