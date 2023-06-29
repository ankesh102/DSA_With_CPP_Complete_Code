#include <bits/stdc++.h> 
#include<vector>
using namespace std;



bool isPossible(int n, int m, int time[], int mid)
{
	long long daysCount = 1;
	long long timeSum = 0;
	for(int i = 0; i<m; i++)
	{
		if(timeSum + time[i] <= mid)
		{
			timeSum += time[i];
		}
		else {
			daysCount++;
			if(daysCount > n || time[i] > mid)
			{
				return false;
			}
			// timeSum = 0;
			timeSum = time[i];
		}
	}
	return true;
}
long long ayushGivesNinjatest(int n, int m, int time[]) 
{	
	long long start = 0;
	long long sum = 0;
	for(int i = 0; i < m; i++)
	{
		sum += time[i];
	}
	long long end = sum;
	long long ans = -1;
	long long int mid = start + (end-start) / 2;
	if(n > m)
	{
		return -1;
	}
	while(start <= end)
	{
		if(isPossible(n, m, time, mid))
		{
			ans = mid;
			end = mid - 1;
		} else {
			start = mid + 1;
		}
		mid = start + (end - start) / 2;
	}
	return ans;
}

int main() 
{
    int n, m;
    int time[10000];
    cout<< "Please Enter the no of days and chapter respectively : " << endl;
    cin >> n >> m;
    for(int i = 0; i < m; i++)
    {
        cout<< "Please Enter the time of "<< i << "book" << endl;
        cin >> time[i];
    }
    long long ans = ayushGivesNinjatest(n, m, time);    
    cout << "The maximum no of chapter which minimise the per day workload is : " << ans << endl;
    return 0;

} 