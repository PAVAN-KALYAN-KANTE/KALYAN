#include<bits/stdc++.h>
using namespace std;
class kalyan{
    public:
 int sem=1,empty=3,full=0;
 
void producer(int x){
    empty--; 
    sem--; 
    cout<<"Producer produces item "<<x<<endl;
    sem++; 
    full++; 
}
void consumer(int x){
    full--;
    sem--; 
    cout<<"Consumer consumes item "<<x<<endl;
   // x--;
    sem++; 
    empty++; 
}
};
int main(){
    kalyan k;
    int n,x=0;
    int full=0,empty=3;
    while(true){
        cout<<k.full<<"  "<<k.empty<<endl;
        cout<<"1.produce\n2.consume"<<endl;
        cin>>n;
        switch(n){
            case 1:
            if(k.sem==1 and k.empty!=0){
               k.producer(x);
               x++;
            }
            else{
                cout<<"buffer is full"<<endl;
            }
            break;

            case 2:
            if(k.sem==1 and k.full!=0){
                k.consumer(x);
                x--;
            }
            else{
                cout<<"buffer is empty"<<endl;
            }
            break;
        }
    }
}

