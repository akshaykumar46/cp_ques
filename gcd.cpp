//Enter big number first
#include<iostream>
using namespace std;
int gcd(const long long int &a,const long long int &b);
int main(){
    long long int x,y;
    cout<<"Enter the first number : ";
    cin>>x;
    cout<<"Enter the second number : ";
    cin>>x;
    cout<<gcd(x,y)<<endl;
    return 0;

}
int gcd(const long long int &a, const long long int &b){
    if(b==0){
        return a;
    }
    return(gcd(b,a%b));
}