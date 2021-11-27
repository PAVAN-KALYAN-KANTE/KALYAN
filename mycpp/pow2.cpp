 {
 vector<int>v1;
 for(auto n:arr){
 if(n==0){
   v1.push_back(0);
 }
   else if(ceil(log2(n)) == floor(log2(n))){
   v1.push_back(1) ;
   }
   else if(ceil(log2(n)) != floor(log2(n))){
   v1.push_back(0) ;
   }
 }
 return v1;
 }
