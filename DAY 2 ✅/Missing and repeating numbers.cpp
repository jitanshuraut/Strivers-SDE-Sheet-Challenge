map<int, int> map;
  int vis[n];
  pair<int, int> ans;

  for (int i = 0; i <= n; i++) {
    map[arr[i]]++;
    vis[arr[i]] = 1;
  }
  for (auto i : map) {
    if (i.second > 1) {
      ans.second = i.first;
      break;
    }
  }
  for (int i = 1; i <= n; i++) {
    if (vis[i] != 1) {
      ans.first = i;
    }
  }
  return ans;
