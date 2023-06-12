int maxMeetings(int start[], int end[], int n)
{
vector<pair<int,int>>temp;
for(int i=0;i<n;i++)
{
temp.push_back({end[i],start[i]});
}
sort(temp.begin(),temp.end());
int count=0;
int starting;
for(int i=0;i<n;i++)
{
if(i==0)
{
count++;
starting=temp[i].first;
}
else if(temp[i].second>starting)
{
count++;
starting=temp[i].first;
}
}
 
return count ;
}