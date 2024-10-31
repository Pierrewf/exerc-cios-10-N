#include<iostream>
using namespace std;
int main()
{
int NumbF, NumbP;
do{
cout<<"\nquantas pessoas vão comer? ";
cin>>NumbP;
cout<<"\nquantas fatias o bolo tem? ";
cin>>NumbF;
if(NumbP>NumbF)
{
cout<<"o números de pessoas não pode\nser maior que o numero de fatias";break;
}
cout<< "cada pessoa vai receber "<< NumbF/NumbP<<" pedaços\n";
cout<<"sobrou " <<NumbF%NumbP <<" pedaços\n";
}while(NumbF>=NumbP);
}




    