class Solution {
public:
void removeOCCRE(string &s,string &part)
{
    int found=s.find(part);
    if(found != string::npos)
    {
        //part string has been located
        //please remove it
        string left_part=s.substr(0,found);
        string right_part=s.substr(found+part.size(),s.size());
        s=left_part + right_part;

        removeOCCRE(s,part);
    }
    else
    {
        return ; //base case 
        //all the occureences of part has been removed from s.
    }
}
    string removeOccurrences(string s, string part) {
   //Method -2 Using Reccursion
   removeOCCRE(s,part);
   return s;
   
   //MEthod-1:-    
        // int index=s.find(part);
        // while(index != string::npos)
        // {
        //     s=s.erase(index,part.length());
        //     index=s.find(part);
        // }
        // return s;
    }
};