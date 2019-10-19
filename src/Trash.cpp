#include "Trash.h"
#include <iostream>

using namespace std;
Trash::Trash()
{
    cout << "hello" << endl;
}


void Trash::raf(int a[], int n){
for(int i=0;i<n-i;i++)
for(int j=0;j<n-1;j++){
    if(a[j]>a[j+1]){int temp=a[j];a[j]=a[j+1];a[j+1]=temp;
    }
}

}

Trash::~Trash()
{
    cout<<endl;
    cout << "end" << endl;
}

Bello::Bello(){

cout<<"radja"<<endl;
}
