#include<iostream>
#include<cmath>
using namespace std;

int findDivisor(int n){
    int a=2;
    if(n>1){
        while(n>a){
        if(n%a==0){
            return a;
        }
        else
        {
            a++;
        }
        
        }
    }
     

}
   
 
 int main(){
   int x,y;
   cin >> x;
   cout << findDivisor(x);}

    
       
       
        
       


