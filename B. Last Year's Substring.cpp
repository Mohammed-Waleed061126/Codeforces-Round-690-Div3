#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <fstream>
#define ll long long
#define ld long double
#define pl pair<ll, ll>
#define vi vector<ll>
#define sortx(X) sort(X.begin(),X.end());
#define el "\n"
#define yes cout<<"YES"<<el;
#define no cout<<"NO"<<el;
#define imp cout<<"-1"<<el;
#define MW_HY ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ordered_set tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update>
using namespace __gnu_pbds;
using namespace std;
// ----------------------------Functions---------------------------- //
ll string_to_num(char c, string word){
  ll val = 0;
  if (c == 'x')
  {
    for (ll i = 0; i < word.size(); i++)
    {
      val *= 10;
      val += word[i]-48;
    }
  }
  else
  {
    val += c-48;
  }
  return val;
}
bool isPrime(ll k)
{
  if (k == 1)
  {
    return false;
  }
  for (ll i = 2; i * i <= k; i++)
  {
    if (k % i == 0)
    {
      return false;
    }
  }
  return true;
}
// ----------------------------------------------------------------- //
void solution(){
  ll size, count = 0;
  string word, ref = "2020";
  cin >> size >> word;
  if (word == ref)
  {
    yes
    return;
  }
  for (ll i = 0; i < 4; i++)
  {
    if (word[i] == ref[i])
    {
      count++;
      if (count == 4)
      {
        yes
        return;
      }
      continue;
    }
    break;
  }
  for (ll i = 1; i <= 4; i++)
  {
    if (word[word.size()-i] == ref[ref.size()-i])
    {
      count++;
      if (count == 4)
      {
        yes
        return;
      }
      continue;
    }
    break;
  }
  no
}

int main(){ MW_HY
  //freopen("input.txt","r",stdin);
  //freopen("output.txt","w",stdout);
  int ntimes  = 1;
  cin >> ntimes;
  while (ntimes--)
  {
    solution();
  }
}