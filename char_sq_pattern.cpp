// here's how to print the square pattern of characters
#include<iostream>
using namespace std;

int main(){

    int n ;
    cout<<"Enter the number if rows you want : ";
    cin>>n;

    for(int i=1;i<=n;i++){
      char ch='A'; //initialize the character in inner loop to make sure that every next character should be diff.
      for(int j=1;j<=n;j++){
        cout<<ch<<" ";
        ch+=1; //to ptint the next character in the series
      }
      cout<<endl;
    }
    return 0 ;
}