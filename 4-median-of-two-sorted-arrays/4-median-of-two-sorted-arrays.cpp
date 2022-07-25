class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int te=nums1.size()+nums2.size();
        int p=te/2,pr=0;
        int k=0,l1=0,l2=0;
        while(k<=p)
        {
            int a;
            if( l2>=nums2.size() || (l1<nums1.size() && nums1[l1]<nums2[l2]))
                a=nums1[l1++];
            else
                a=nums2[l2++];
            if(k==p)
            {
                if(te%2==1)
                    return (double)a;
                else
                    return (a+pr)/(double)2;
            }
            k++;
            pr=a;
        }
        return 0.00;
    }
};