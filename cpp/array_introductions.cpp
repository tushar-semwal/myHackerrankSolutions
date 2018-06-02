#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int Arr[1000], n;
    scanf("%d",&n);
        
    for(int i=0;i<n;i++)
        scanf("%d ",&Arr[i]);
    
    for(int i=n-1; i>=0; i--)
        printf("%d ",Arr[i]);
    return 0;
}
