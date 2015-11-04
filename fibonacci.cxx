#include<iostream>
using namespace std;

int main (){
int N,f1,f2,f;
cout<< "N" <<endl;
cin>>N;
f1=0;
f2=1;
for(int i=0; i<N-1; i++){
  f=f1+f2;
  f1=f2;
  f2=f;
 }
cout<<f<<endl;

}
