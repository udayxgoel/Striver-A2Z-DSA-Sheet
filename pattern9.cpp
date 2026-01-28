#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no of rows : "<<endl;
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){ // for space
            cout<<" ";
        }

        for(int k=0;k<i*2+1;k++){ // for stars
            cout<<"*";
        }

        for(int j=0;j<n-i-1;j++){ // for space
            cout<<" ";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){ // for space
            cout<<" ";
        }

        for(int k=0;k<2*n-(2*i+1);k++){ // for stars
            cout<<"*";
        }

        for(int j=0;j<i;j++){ // for space
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}