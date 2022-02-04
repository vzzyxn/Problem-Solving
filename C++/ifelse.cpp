#include<iostream> 
using namespace std;
int main()
{
    int x;
    string n[10] = {"one","two","three","four","five","six","seven","eight","nine","Greater than 9"};
    cin >> x;
    if(x==1){
        cout<<n[0];
    }
    else if(x==2){
        cout<<n[1];
    }
    else if(x==3){
        cout<<n[2];
    }
    else if(x==4){
    cout<<n[3];
     }
     else if(x==5){
         cout<<n[4];
    }
    else if(x==6){
    cout<<n[5];
    }
    else if(x==7){
    cout<<n[6];
    }
    else if(x==8){
    cout<<n[7];
    }
    else if(x==9){
    cout<<n[8];
    }
    else{
    cout<<n[9];
        }
}
