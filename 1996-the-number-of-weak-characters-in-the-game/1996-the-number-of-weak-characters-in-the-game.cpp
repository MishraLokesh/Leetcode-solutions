class Solution {
public:
    //T.C=O(NLOGN)
    //APPROACH FIRST WE SORT THE ARRAY W.R.T ATTACK OF THE CHARACTER IF THE ATTACK OF BOTH THE CHARACTER IS SAME WE SORT BY DEFENSE BUT IN DESCENDING ORDER 
    //THE WE CHECK THE DEFENSE FOR THE LAST OF ARRAY IF THE CHARACTER IS LESS DEFENSE THE PREV CHARACTER THAT MEANS IT;S THE WEAK CHARACTER //WE CANNOT CHECK ATTACK BECAUSE WE ALREADY SORT THE ARRAY W.R.T ATTACK IN INCREASING ORDER 
    //dry run
    //[[6,9],[7,5],[7,9],[7,10],[10,4],[10,9]]
    //[6,9],[7,10],[7,9],[7,5],[10,9][10,4]
    //now run loop from n-1
    //maxx=0;
    // 4>0 ->maxx=4//this is not weak so we can't count
    // 9>4->maxx=9->also not weak
    // 5<9 ans because of soring 7<10 so this is weak ans++;=1,maxx=5
    // 9>5->maxx=9 not a weak maxx=9
    // 10>9->maxx=10
    //9<10->this is weak character ans++->2,max=9
    //our output is 2
    
    
    static bool comp(vector<int>&a,vector<int>&b){
        if(a[0]==b[0]){// for the case like [7,5],[7,9],[7,10]
            return a[1]>b[1];//if attack is same we sort them w.r.t defense but in decreasing order
        }
        else{
             return a[0]<b[0];//
        }
       
    }
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        int n=properties.size();
        sort(properties.begin(),properties.end(),comp);
        int maxx=0;
        int ans=0;
        for(int i=n-1;i>=0;i--){
            if(properties[i][1]<maxx){
                ans++;
                //it means both the characters are different and we already sort them in ascending order so if there defense is also in increasingmanner then we find weak character
            }
            maxx=max(maxx,properties[i][1]);//updating the maxx
        }
            return ans;
            
    }
};