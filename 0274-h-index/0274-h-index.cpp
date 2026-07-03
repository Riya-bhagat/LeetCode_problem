class Solution {
public:
    int hIndex(vector<int>& citations) {
     int n= citations.size();
     int temp;
     int res=0;
    //  for (int i = 0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //         if(citations[j]>citations[j+1]){
    //             temp=citations[j];
    //             citations[j]=citations[j+1];
    //             citations[j+1]=temp;
    //         }
    //     }
    //  }
    sort(citations.begin(),citations.end());
     for (int i = 0;i<n;i++){
        if(citations[i]>=n-i){
            return n-i;
        }
     }  
      return 0;
    }
};