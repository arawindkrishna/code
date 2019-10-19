#include <iostream>
#include <cstdlib>

#include "Trash.h"

using namespace std;





int main()
{
    Trash f;
    Bello b;
    int a[30];
    for(int i=0;i<30;i++)a[i]=rand();
    int n=sizeof(a)/sizeof(a[0]);
    f.raf(a,n);//bubble sort
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    return 0;
}
