#include <iostream>

using namespace std;

void toh(int n, char start, char helper, char finish){
    if(n==1){
        cout<<"move the disk "<<n<<" from "<<start<<" to "<<finish<<endl;
        return;
    }
    toh(n-1, start,finish,helper);
    cout<<"move the disk "<<n<<" from "<<start<<" to "<<finish<<endl;
    toh(n-1,helper,start,finish);
    



}
int main(){
    toh(3,'A','B','C');
    
    return 0;

}