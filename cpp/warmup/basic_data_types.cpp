#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int a; long b; char c; float d; double e;
    
    /*
    Note: You can also use cin and cout instead of scanf and printf; 
    however, if you are taking a million numbers as input and printing 
    a million lines, it is faster to use scanf and printf.
    */
    
    scanf("%d %ld %c %f %lf",&a,&b,&c,&d,&e);
    printf("%d\n%ld\n%c\n%f\n%lf",a,b,c,d,e);
    return 0;
}
