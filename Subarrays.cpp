// bruteforce - 3 nested loops (n^3)

//approach 2 - prefix sums
// 1. Create prefix array
// ps[i] = ps[i-1] + ps[i]
// for sub array sum --> ps[j] - ps[i-1]

// Prefix array creation
int prefix[n];
        int prefix[0] =nums[0];
        for (int i =1; i<n; i++){
            prefix[i]= prefix[i-1] + nums[i];
        }

vector<int> prefix;
        prefix.push_back(nums[0]);
        for (int i =1; i<c; i++){
            int l = prefix[i-1] + nums[i];
            prefix.push_back(l);
        }

//Approach 3 - Kadane's Algorithm 
//we maintain a running sum
//we ignore negative sum and take it as 0
//Sliding window
int cs =0; //current sum
int largest =0;  //max sum
for(int i =0; i<n;i++){
cs = cs+ arr[i];
if(cs<0){
  cs=0;
}
      largest = max(largest,cs);  
  
}
