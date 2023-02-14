#include<iostream>
using namespace std;

int main(){
    int x=0;
    cin>>x;
    string output =(x<=2||x%2)?"NO":"YES";
    cout<<output<<endl;
    return 0;
}
