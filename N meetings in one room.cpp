int maxMeetings(int start[], int end[], int n)
{
    vector<pair<int, int>> meetings;
    
    for (int i = 0; i < n; i++)
    {
        meetings.push_back({end[i], start[i]});
    }
    
    sort(meetings.begin(), meetings.end());
    
    int count = 1;
    int lastEnd = meetings[0].first;
    
    for (int i = 1; i < n; i++)
    {
        if (meetings[i].second > lastEnd)
        {
            count++;
            lastEnd = meetings[i].first;
        }
    }
    
    return count;
}