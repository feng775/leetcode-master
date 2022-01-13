### 前K个高频元素

 vector<int> topKFrequent(vector<int>& nums, int k) {

​    unordered_map<int,int> s;

​    vector<int> ret;

​    int maxtime=0;

​    for(int i:nums)

​       s[i]++;

​    for(auto i:s) 

​    {

​      if(i.second>maxtime)

​        maxtime=i.second;得到最大频率元素

​    }

​    while(k>0)

​    {

​      for(auto i:s)

​      {

​        if(i.second==maxtime)

​        {

​          ret.push_back(i.first);

​          k--;

​        }  

​      }

​      maxtime--;

​    }

​    return ret;  

  }