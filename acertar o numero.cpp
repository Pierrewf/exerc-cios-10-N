#include<iostream>
using namespace std;
int main()
{
int NR, NH;
  srand(time(0));
NR=rand()%100+1;
  cout<<"\nadivinhe um numero de 1 a 100\n";
  do{
  cin>>NH;
if(NH<NR){
cout<<"\né maior que\n"<<NH<<"\n";}
if(NH>NR){
cout<<"\né menor que\n"<<NH<<"\n";}
if(NH==NR){
cout<<"\nacertou o numero\n";}
}while(NH!=NR);
}