#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define yes cout<<"YES"<<endl;
#define no cout <<"NO"<<endl;
#define MW ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;


int main(){ MW
  ll ntimes;
  cin >> ntimes;
  for (ll j = 1; j <= ntimes; j++)
  {
    ll size;
    cin >> size;
    ll arr [size];
    for (ll i = 0; i < size; i++)
    {
      cin >> arr[i];
    }
    if (size % 2)
    {
      for (ll i = 0; i < size/2; i++)
      {
        cout << arr[i] << " " << arr[size-i-1] << " ";
      }
      cout << arr[(size/2)] << endl;
    }
    else
    {
      for (ll i = 0; i < size/2; i++)
      {
        if (i == (size/2)-1)
        {
          cout << arr[i] << " " << arr[size-i-1] << endl;
        }
        else
        {
          cout << arr[i] << " " << arr[size-i-1] << " ";
        }
      }
    }
  }
}