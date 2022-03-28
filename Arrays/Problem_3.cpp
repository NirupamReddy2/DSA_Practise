// Kth max and min elements in an array
#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Gimme the size of the array: ";
    cin>>n;

    int k;
    cout<<"Gimme the value of k: ";
    cin>>k;

    int *a;
    a = (int*)malloc(n*sizeof(int));

    cout<<"Gimme the array elements: ";
    for(int i=0;i < n;i++)
    {
        scanf("%d", &a[i]);
    }

    int kth_min, kth_max = 0;
    sort(a, a+n);

    kth_min = a[k-1];
    kth_max = a[n-k];

    cout<<"kth max element is: "<<kth_max<<'\n';
    cout<<"kth min element is: "<<kth_min<<'\n';

    return 0;
}