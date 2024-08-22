// Program to convert a decimal number to binary.
#include<iostream>
using namespace std;
// int decimal(int n)
// {
//     int nums[32];
//     int i=0;
//     while(n>0)
//     {
//         nums[i]=n%2;
//         n=n/2;
//         i++;
//     }
//     for(int j=i-1;j>=0;j--)
//     {
//         cout<<nums[j]<<" ";
//     }
// }
void decimalrec(int n)
{
    if(n==0)return;
    decimalrec(n/2);
    cout<<n%2<<" ";

}
int main()
{
    int n;
    cin>>n;
    decimalrec(n);
}