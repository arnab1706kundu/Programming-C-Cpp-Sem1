#include "iostream"

using namespace std;

int main(){

    int a,b,c,d;

    cout<<"enter 3 number : ";

    cin>>a>>b>>c;

    d = (a>b?(a>c?a:c):(b>c?b:c));

    cout<<d;


}