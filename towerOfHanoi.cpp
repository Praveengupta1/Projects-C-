#include<bits/stdc++.h>
using namespace std;
void TOH(int n , char A, char B, char C){
    if(n>= 1){
        TOH(n-1, A, C, B);
        cout<<A<<" To "<<B<<endl;
        TOH(n-1, C, B, A);
    }
    return ;

}
int main(){
    int n = 3;
    TOH(n, 'A', 'B','C');
    return 0;
}


