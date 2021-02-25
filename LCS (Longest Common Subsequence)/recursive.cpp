/*
* Time Complexity ~ O(2^n)
* Top to Down Approach
*/

#include<bits/stdc++.h>
using namespace std;
char A[] = "bd";
char B[] = "abcd";

int LCS(int i,int j) {
    if(A[i]=='\0' || B[j]=='\0') 
    return 0;

    else  if(A[i]==B[j])
    return 1 + LCS(i+1,j+1);

    else
    return max(LCS(i+1,j),LCS(i,j+1));
}

int main(){

int res = LCS(0,0);
printf("%d",res);
}