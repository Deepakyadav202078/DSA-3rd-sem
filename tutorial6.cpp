#include<iostream>    
using namespace std;    
    void print(int a[], int n) //function to print array elements  
    {  
    int i;  
    for(i = 0; i < n; i++)    
    {    
       cout<<a[i]<<" ";     
    }        
    }  
 void bubble(int a[], int n) // function to implement bubble sort  
 {  
 int i, j, temp;  
   for(i = 0; i < n; i++)    
    {    
      for(j = i+1; j < n; j++)    
        {    
            if(a[j] < a[i])    
            {    
                temp = a[i];    
                a[i] = a[j];    
                a[j] = temp;     
            }     
        }     
    }     
    
 }  
int main()    
{    
    int i, j,temp;     
    int a[9] = {3, 1, 7, 13, 9,4,5,6,11};     
    int n = sizeof(a)/sizeof(a[0]);   
    cout<<"Before sorting array elements are - \n";  
    print(a, n);  
    bubble(a, n);  
    cout<<"\nAfter sorting array elements are - \n";    
    print(a, n);  
return 0;  
}
