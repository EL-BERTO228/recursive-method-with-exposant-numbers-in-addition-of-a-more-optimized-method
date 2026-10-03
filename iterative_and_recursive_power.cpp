#include<iostream>

using namespace std;

//iterative notation
double power(int n){
    double pow = 1;
    for(int i=1;i<=n;i++){
        pow = n*pow;
        
    }
    return pow;
    
}
//recursive notation
double rec_fact(int n, int exposant){
    if(exposant == 0){
        return 1;
    }
    else{
        return n*rec_fact(n,exposant-1);
    }
}
//more efficiant method for a recursive notation
double rec_fact_eff(int n, int exposant){
    double result;
    if(exposant == 0){
        return 1;
    }

    if(exposant%2 == 0){
        result = rec_fact_eff(n,exposant/2);
        return result*result;
        
    }
    else{
        result = rec_fact_eff(n,exposant/2);
        return n*result*result;
    }
    
}
int main(){
    int n;
    for(int n=0;n<=4;n++){
        cout<<n<<" to the power of 4"<< " is "<<rec_fact_eff(n,4)<<endl;
    }
    return 0;
}