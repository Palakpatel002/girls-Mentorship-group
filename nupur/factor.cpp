include<iostream>
using namespace std;
int factor (int n){
    for(int i=1;i<=n;i++)
    {
        int r=n%i;
          n/=i;
        while ( r == 0){
        cout<<i<<" * ";
        return r;
    }
    }
}
int main(){
    int n;
 cout<<"enter a number :";
    cin>>n;
   cout<<factor(n)<<endl;
    return 0;

}