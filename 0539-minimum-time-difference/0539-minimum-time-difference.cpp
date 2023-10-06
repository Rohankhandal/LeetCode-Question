class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;
        for(int i=0;i<timePoints.size();i++){
            string curr=timePoints[i];
            int hour=stoi(curr.substr(0,2));
            int min=stoi(curr.substr(3,2));
            int totalMinutes=(hour)*60+min;
            minutes.push_back(totalMinutes);
            
        }
        //Step 2: Sort
        sort(minutes.begin(),minutes.end());

        //Step 3: difference and calcualte min diff
        int mini=INT_MAX;
        int n=minutes.size();
        for(int i=0;i<n-1;i++)
        {
            int diff=minutes[i+1]-minutes[i];
            mini=min(mini,diff);
        }

        //Something missing -> THIS IS THE GAME
        int lastDiff1=(minutes[0]+1440) - minutes[n-1];   //for ["00:00","23:50"]
        int lastDiff2 = minutes[n-1]-minutes[0];           //for ["00:10","12:20"]
        int lastDiff=min(lastDiff1,lastDiff2);
        mini=min(mini,lastDiff);
        return mini;
        
    }
};