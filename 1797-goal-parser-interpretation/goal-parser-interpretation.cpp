class Solution {
public:
    string interpret(string command) {
        string ans="";
        int n=command.length();
       for(int i=0;i<n;i++)
       {
           if(command[i]=='G')
           {
               ans.push_back('G');
           }
           else if(command[i]=='(' && command[i+1]==')')
           {
               ans.push_back('o');
               i++;
           }
           else{
               ans.push_back('a');
               ans.push_back('l');
               i=i+3;
           }
       } 
       return ans;
    }
};