#include<bits/stdc++.h>
using namespace std;
bool getresult(vector<int>parent, vector<int>level,vector<int>visit,vector<int>query,int key,int nodewithmaxdepth){
           visit[nodewithmaxdepth]=key;
        //cout<<"here"<<endl;
        while(parent[nodewithmaxdepth] != -1) {
        nodewithmaxdepth = parent[nodewithmaxdepth];
        visit[nodewithmaxdepth] =key;}
        int maxdepth=0;
        nodewithmaxdepth=-1;
        for(auto q:query){
            if(visit[q] != key && level[q] > maxdepth) {
             maxdepth = level[q];
             nodewithmaxdepth = q;
            }
        }//cout<<"here"<<endl;
        if(nodewithmaxdepth==-1){return true;}
        while(visit[nodewithmaxdepth] != key) {
           visit[nodewithmaxdepth] = key;
           nodewithmaxdepth = parent[nodewithmaxdepth];
        }
        for(auto q:query){
            if(visit[q] != key || level[q] < level[nodewithmaxdepth]) return false;
        }
        return true;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>>v(n+1);
        vector<int>level(n+1),parent(n+1);
        vector<bool>visited(n+1);
        for(int i=0;i<n-1;i++){int p,q;cin>>p>>q;v[p].push_back(q);v[q].push_back(p);}
        //cout<<"here"<<endl;
        list<int>traverselist;
        int u=1;
        parent[u]=-1;
        traverselist.push_back(u);
        visited[u]=true;
        while(!traverselist.empty()){
            int n=traverselist.size();
            while(n--){
               // cout<<traverselist.front()<<" ";
                int parentnode=traverselist.front();
                traverselist.pop_front();
                int z=v[parentnode].size();
                vector<int>::iterator p;
                for(auto p=v[parentnode].begin(); p!=v[parentnode].end(); p++) {
                    if(!visited[*p]){
                        parent[*p]=parentnode;
                        level[*p]=level[parentnode]+1;
                        visited[*p]=true;
                        traverselist.push_back(*p);
                    }
                }
            }
        }//cout<<endl;
       /* for(auto t:level){cout<<t<<" ";}cout<<endl;
        for(auto t:parent){cout<<t<<" ";}cout<<endl;
        for(auto t:visited){cout<<t<<" ";}cout<<endl;*/
        int q;
        cin>>q;
        for(int i=1;i<=q;i++){
            int k;
            cin>>k;
            vector<int>query;
            query.resize(k);
            //int* query=new int[k];
            int maxdepth=0;
            int nodewithmaxdepth =-1;
            for(int j=0;j<k;j++){int u;cin>>u; auto it = query.insert(query.begin() + j, u);
                if(level[query[j]]>maxdepth){maxdepth=level[query[j]];
                nodewithmaxdepth=query[j];
            }
        }//for(auto d:query){cout<<d<<" ";} cout<<endl<<nodewithmaxdepth<<"???"<<endl;
        int key=i;//cout<<key<<" key"<<endl;
        vector<int>visit(n+1);
        bool result=getresult(parent,level,visit,query,key,nodewithmaxdepth);
        if(result){cout<<"yes"<<endl;}else{cout<<"no"<<endl;}
     }
    }  
}