class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;

        for(int i = 0; i < timePoints.size(); i++){
            string time = timePoints[i];
            int hour = stoi(time.substr(0,2));
            int minute = stoi(time.substr(3,2));
            minutes.push_back(hour * 60 + minute);
        }

        sort(minutes.begin(), minutes.end());

        int mini = INT_MAX;
        for(int i = 0; i < minutes.size() - 1; i++){
            int diff = minutes[i + 1] - minutes[i];
            mini = min(mini, diff);
        }

        int lastDiff = (minutes[0] + 1440) - minutes[minutes.size() - 1];
        mini = min(mini, lastDiff);

        return mini;
    }
};
