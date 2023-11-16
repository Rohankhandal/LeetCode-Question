class Solution
{
    public:
        string defangIPaddr(string address)
        {
            string ans;
            for (int i = 0; i < address.length(); i++)
            {
                
                if (address[i] == '.')
                {
                    ans.push_back('[');
                    ans.push_back('.');
                    ans.push_back(']');
                }
                else
                {
                    ans.push_back(address[i]);
                }
            }
            return ans;
        }
};
//Method -2 without using other variable
// class Solution {
// public:
//     string defangIPaddr(string address) {
//         int i=0;
//         while(i<address.length()){
//             if(address[i]=='.'){
//                 address=address.substr(0,i)+"[.]"+address.substr(i+1,-1);
//                 i=i+2;
//             }
//             else{
//                 i++;
//             }
//         }
//         return address;
//     }
// };