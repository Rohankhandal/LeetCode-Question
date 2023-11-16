class Solution {
public:
void addRE(string &num1,int p1, string &num2, int p2,int carry, string &ans)
{
    if(p1<0 && p2<0)
    {
        if(carry!=0)
        {
            ans.push_back(carry+'0');
        
        }
        return ;
    }
    //ek case solve
    int n1=(p1>=0 ? num1[p1] : '0')-'0';
    int n2=(p2>=0 ? num2[p2] : '0')-'0';
    int csum=n1+n2+carry;
    int digit=csum%10;
    carry=csum/10;
    ans.push_back(digit+'0');

    //RE
    addRE(num1,p1-1,num2,p2-1,carry,ans);
    
}
    string addStrings(string num1, string num2) {
        string ans="";
        addRE(num1,num1.size()-1,num2, num2.size()-1,0 ,ans);
    reverse(ans.begin(),ans.end());

    return ans;
    }
};


//MEthod 2:
// class Solution {
// public:
//     char addChar(char a , char b , int &carry){
//         char ans = carry+a+b-48;
//         if(ans>57){
//             carry=1;
//             ans -= 10;
//             return ans;
//         }
//         else{
//             carry=0;
//             return ans;
//         }
//     }
//     string addStrings(string num1, string num2) {
//         int inum1=num1.length()-1;
//         int inum2=num2.length()-1;
//         int carry = 0;
//         string ans;
//         while(true){
//             if(inum1>=0 && inum2>=0){
//                 char ch = addChar(num1[inum1],num2[inum2],carry);
//                 ans.push_back(ch);
//                 inum1--;
//                 inum2--;
//             }
//             else if(inum1>=0){
//                 char ch = addChar(num1[inum1],'0',carry);
//                 ans.push_back(ch);
//                 inum1--;
//             }
//             else if(inum2>=0){
//                 char ch = addChar('0',num2[inum2],carry);
//                 ans.push_back(ch);
//                 inum2--;
//             }
//             else if(carry>0){
//                 ans.push_back(carry+48);
//                 carry = 0;
//             }
//             else{
//                 break;
//             }
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };