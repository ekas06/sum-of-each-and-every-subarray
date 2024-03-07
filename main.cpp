#include <iostream>
using namespace std;

int main() {
  cout<<"enter number of elements";
  int n;
  cin>>n;
  int a[n];
  
  cout<<"enter all elements";
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    int sum=0;
  int j=i;
  while(j<n){
    sum+=a[j];
      cout<<sum<<endl;
    j++;
  }
  }
  return 0;
  
}