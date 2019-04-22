int StrToInt(string str) {
    if(str=="") return 0;
    int k=1,s=0,a;
    if(str[0]=='+') k=1;
    else if(str[0]=='-') k=-1;
    for(int i=0;i<str.length();i++){
        if(i==0){
            if(str[0]=='+'||str[0]=='-')
                continue;
        }
        if(str[i]<='9' && str[i]>='0'){
            a=str[i]-'0';
            s = s*10 + a;
        }else{
            return 0;
        }
    }
    return s*k;
}
