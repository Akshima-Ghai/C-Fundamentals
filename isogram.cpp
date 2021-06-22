class Solution
{
    public:
    //Function to check if a string is Isogram or not.
    bool isIsogram(string s)
    {
        //Your code here
        int arr[26]={0},i;
        for(i=0;i<s.length();i++){
            arr[s[i]-'a']++;
            if(arr[s[i]-'a']>1){
                return 0;
            }
        }
        if(i==s.length()){
            return 1;
        }
    }
};
