#include<bits/stdc++.h>
using namespace std;
class kalyan{
    public:
    int sem=1,empty=3,full=0,x=0;

    int wait(int s) {
      while(s<=0) ;
      s--;

      return s;
    }

    int signal(int s){
        s++;

        return s;
    }

    void producer(){
        sem=wait(sem);
        empty=wait(empty);
        x++;
        cout<<"producer produces item "<<x<<endl;
        full=signal(full);
        sem=signal(sem);
    }
    
    void consumer(){
        sem=wait(sem);
        full=wait(full);
        cout<<"consumer consumes item "<<x<<endl;
        x--;
        empty=signal(empty);
        sem=signal(sem);
    }
};
signed main(){
    kalyan k;
    int n;
    while(1){
        cout<<"1.produce\n2.consume"<<endl;
        cin>>n;
        switch(n){
            case 1:
            if(k.sem==1 and k.empty!=0){
                k.producer();
            }
            else{
                cout<<"buffer is full"<<endl;
            }
            break;

            case 2:
            if(k.sem==1 and k.full!=0){
                k.consumer();
            }
            else{
                cout<<"buffer is empty"<<endl;
            }
            break;
        }
    }
}