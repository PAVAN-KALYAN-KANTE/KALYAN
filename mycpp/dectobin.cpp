#include <iostream>
using namespace std;
 
// function to convert decimal to binary
int decToBinary(int n)
{
    // array to store binary number
    int binaryNum[32];
 
    // counter for binary array
    int i = 0;
    while (n > 0) {
 
        // storing remainder in binary array
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    int k;
    // printing binary array in reverse order
    for(int i=0;i<32;i++) {
        if(binaryNum[i]==1){
           k=binaryNum[i+4];
           break;
        }
    }
    return k;
}     
 
// Driver program to test above function
int main()
{
    int n = 17;
    int d=decToBinary(n);
    cout<<d;
    return 0;
}