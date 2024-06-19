#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter first number  : " ;
    cin>>x;
    cout<<"Enter second number  : " ;
    cin>>y;
    cout<<endl;
    int zu;
    zu= x-y;
    cout<<" Arithmetic operations : "<< endl;
    cout<<" x + y is : "<< x+y<< endl;
    cout<<" x - y is : "<< x-y<< endl;
    cout<<" x * y is : "<< zu<< endl;
    cout<<" x / y is : "<< x/y<< endl;
    cout<<" x % y is : "<< x%y<< endl;    
    cout<<" x ++ is : "<< x++<< endl;    
    cout<<" y++ is : "<< y++<< endl;    
    cout<<" ++ x is : "<< ++x << endl;    
    cout<<" x-- is : "<< x-- << endl;    
    cout<<" --x is : "<< --x<< endl;  
    cout<<endl;

    cout<<" Comparision operator : 1 is true while 0 is false "<< endl;
    cout<<"Is x > y : "<< (x>y) << endl;
    cout<<"Is x < y : "<< (x<y)<< endl;  
    cout<<"Is x < y : "<< (x>=y)<< endl;  
    cout<<"Is x < y : "<< (x<=y)<< endl;  
    cout<<"Is x < y : "<< (x==y)<< endl;  
    cout<<"Is x < y : "<< (x!=y)<< endl;  
    cout<<"Is x < y : "<< not(x<y)<< endl;  
    cout<<endl;
    
    cout<<" Logical Operator : 1 is true while 0 is false "<< endl;
    cout<<"Is x < y and x > 10 : "<< ((x<=y)&& (x>10))<< endl;  
    cout<<"Is x < y or x > 10  : " << ((x<=y) || (x>10))<< endl;  
    cout<<"Is x < y and not (x > 10) : "<< ((x<=y)&&(not (x>10)))<< endl;  
   

    



    


}