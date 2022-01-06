class Solution {
public:
    bool isValid(string x) {
     stack<char>s;
       for(int i=0;i<x.length();i++){
           if(x[i]=='['||x[i]=='{'||x[i]=='('){
               s.push(x[i]);
           }
           else{
               if(s.empty()){
                   return false;
               }
               if((x[i]==']'&& s.top()=='[')||(x[i]=='}'&&s.top()=='{')||(x[i]==')'&&s.top()=='(')){
                   s.pop();
               }
               else
               return false;
           }
       }
       if(s.size()==0){
           return true;
       }
       else return false;
    }
};
