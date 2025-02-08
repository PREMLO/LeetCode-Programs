class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int n1=nums1.size(),n2=nums2.size(),i=0,j=0,cnt=0,i1=-1,i2=-1;
       int n = n1 + n2;
       int ele1 = (n/2)-1;
       int ele2 = n/2;

       while(i<n1 && j<n2){
        if(nums1[i]<=nums2[j]){
            if(cnt==ele1) i1=nums1[i];
            if(cnt==ele2) i2=nums1[i];
            i++;
            cnt++;
        }
         else{
            if(cnt==ele1) i1=nums2[j];
            if(cnt==ele2) i2=nums2[j];
            j++;
            cnt++;
        }
       }
       while(i<n1){
         if(cnt==ele1) i1=nums1[i];
            if(cnt==ele2) i2=nums1[i];
            i++;
            cnt++;
       }
       while(j<n2){
         if(cnt==ele1) i1=nums2[j];
            if(cnt==ele2) i2=nums2[j];
            j++;
            cnt++;
       }
       if(n%2==1)return i2;

       return (double)((double)(i1+i2)/2.0);
    }
};