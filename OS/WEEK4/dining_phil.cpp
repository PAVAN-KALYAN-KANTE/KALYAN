#include<bits/stdc++.h>
#include<pthread.h>
#include<semaphore.h>
#include<unistd.h>
using namespace std;
    sem_t room,chopstick[5];

    void eat(int phil){
        cout<<"philospher "<<phil+1<<" is eating"<<endl;
    }
    
    void * philospher(void *num){
       int phil=*(int*)num;

       sem_wait(&room);
       cout<<"philospher "<<phil+1<<" entered room"<<endl;
       sem_wait(&chopstick[phil]);
       sem_wait(&chopstick[(phil+1)%5]);


       eat(phil);
       sleep(2);
       cout<<"philospher "<<phil+1<<" has finished eating"<<endl;

       sem_post(&chopstick[(phil+1)%5]);
       sem_post(&chopstick[(phil)]);
       sem_post(&room);
    }
signed main(){
    int a[5];
    pthread_t tid[5];

    sem_init(&room,0,4);

    for(int i=0;i<5;i++) {
        sem_init(&chopstick[i],0,1);
    }
    for(int i=0;i<5;i++){
        a[i]=i;
        pthread_create(&tid[i],NULL,philospher,(void *)&a[i]);
    }
    for(int i=0;i<5;i++) {
        pthread_join(tid[i],NULL);
    }
}