/*
13. Write a program in C++ to calculate the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... +
(1+2+3+4+...+n).
Sample Output:
Input the value for nth term: 5
1 = 1
1+2 = 3
1+2+3 = 6
1+2+3+4 = 10
1+2+3+4+5 = 15
The sum of the above series is: 35
*/
#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    int i,j, a,result=0,answer=0;
    cout<<"type series steps : "<<endl;
    cin>>a;
    for(i=1;i<=a;i++){
        for( j=1;j<i;j++){
            result = result+j;
        }
    answer = answer+result;
    }

    cout<<"The result is: "<<answer;

    return 0;
}

