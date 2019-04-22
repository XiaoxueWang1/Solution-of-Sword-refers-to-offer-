string LeftRotateString(string str, int n) {
    if(str=="") return "";
    n=n%str.length();
    if(n==0) return str;
    string left=str.substr(0,n);
    string right=str.substr(n);
    return right+left;
}
