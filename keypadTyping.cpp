string printNumber(string s, int n) 
{
    //code here
    string str;
    for(int i=0;i<n;i++){
        if(s[i]=='a' || s[i]=='b' || s[i]=='c'){
            str+="2";
        }
        else if(s[i]=='d' || s[i]=='e' || s[i]=='f'){
            str+="3";
        }else if(s[i]=='g' || s[i]=='h' || s[i]=='i'){
            str+="4";
        }else if(s[i]=='j' || s[i]=='k' || s[i]=='l'){
            str+="5";
        }else if(s[i]=='m' || s[i]=='n' || s[i]=='o'){
            str+="6";
        }else if(s[i]=='p' || s[i]=='q' || s[i]=='r' || s[i]=='s'){
            str+="7";
        }else if(s[i]=='t' || s[i]=='u' || s[i]=='v'){
            str+="8";
        }else if(s[i]=='w' || s[i]=='x' || s[i]=='y' || s[i]=='z'){
            str+="9";
        }
    }
    return str;
}
