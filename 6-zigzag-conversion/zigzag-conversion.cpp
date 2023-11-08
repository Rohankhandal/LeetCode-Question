class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        
        vector<string> zigzag(numRows);
        int i =0 , row =0;
        bool direction =1;  //1 for Top->Bottom

        while(true)
        {
            if(direction)
            {
                while(row<numRows && i<s.size())
                {
                    zigzag[row++].push_back(s[i++]);

                }
                row=numRows-2;  
            }
            else
            {
                while(row>=0 && i<s.size())
                {
                    zigzag[row--].push_back(s[i++]);

                }
                row=1;
            }

            if(i>=s.size())   break;

            direction = ! direction;  //change direction fromm TB->BT && BT->TB(top to bottom && bottom to top)
        }

        string ans="";
        for(int i=0;i<zigzag.size();i++){
            ans+=zigzag[i];
            //cout<<zigzag[i]<<endl;
        }

        return ans;
    }
};


// Second Method
// class Solution {
// public:

//     string convert(string s, int numRows) {
    
//     if(numRows <= 1) return s;

//     vector<string>v(numRows, ""); 

//     int j = 0, dir = -1;

//     for(int i = 0; i < s.length(); i++)
//     {

//         if(j == numRows - 1 || j == 0) dir *= (-1); 
		 
//         v[j] += s[i];

//         if(dir == 1) j++;

//         else j--;
//     }

//     string res;

//     for(auto &it : v) res += it; 

//     return res;

//     }
// };