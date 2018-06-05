#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n, q;
    int k;
    scanf("%d %d",&n,&q);
    
    int **arr = new int*[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d ",&k);
        arr[i] = new int[k];
        int temp;
        for(int j=0;j<k;j++)
        {
          scanf("%d ",&temp);
            arr[i][j] = temp;
            
        }
    }
    
    int v1,v2;
    for(int i=0;i<q;i++)
    {
        scanf("%d %d",&v1,&v2);
       
        printf("%d\n",arr[v1][v2]);
    }
        
    return 0;
}
