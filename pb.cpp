#include<bits/stdc++.h>
#define int long long
using namespace std;
int p1000,p10001,p10002;
vector<int> discrete(vector<int> Q) {
  vector<int> a=Q;
  sort(a.begin(),a.end());
  a.erase(unique(a.begin(),a.end()),a.end());
  for (int ui=0;ui<(int)Q.size();++ui)
    Q[ui]=lower_bound(a.begin(),a.end(),Q[ui])-a.begin();
  return Q;
}
void solve() {
  vector<int> yua,yub,yuc,yus,yup,yur;
  cin >> p1000;p10001=0;p10002=0;
  for(int yui=1,x;yui<=p1000;++yui){cin >> x;yua.push_back(x);}
  for(int yuii=1,x;yuii<=p1000;++yuii){cin >> x;yub.push_back(x);}
  yua=discrete(yua);yub=discrete(yub);
  yuc.resize(p10001);yus.resize(p1000);yur.resize(p1000);
  for(int yuiii=0;yuiii<p1000;++yuiii){yuc[yua[yuiii]]=yub[yuiii];yus[yuiii]=yua[yuiii]+yub[yuiii];yur[yub[yuiii]]=yuiii;}
  for(int yui1=0;yui1<p1000;++yui1) {
    yup.insert(upper_bound(yup.begin(),yup.end(),yuc[yui1]),yuc[yui1]);
    yus[yur[yuc[yui1]]]-=lower_bound(yup.begin(),yup.end(),yuc[yui1])-yup.begin();
  }
  for(int i:yus) p10001=max(p10001,i);for(int i:yus) p10002+=(i==p10001);
  cout << p10002 << endl;
  return;
  cout << "????????????????" << endl;
}
signed main() {
  int Takes;cin >> Takes;
  while(Takes--) solve();
}

