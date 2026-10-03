#include <iostream>
using namespace std;

//iterative function
double facto(int n){
    double facto = 1;
    for(int i=1; i<=n; i++){
        facto = facto*i;
    }
    return facto;
}
//recursive function
double facto_rec(int n){
    if(n<=1){
        return 1;
    }
    return n*facto(n-1);
}

int main(){
    int n;
    for(n=0; n<=10; n++){
        cout<<n<<"!="<<facto_rec(n)<<endl;
    }
    return 0;

    
}