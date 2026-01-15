#include<iostream>
#include<algorithm>
using namespace std;
string add_string(string nums1,string nums2){
    int i = nums1.size()-1;
    int j = nums2.size()-1;
    int carry = 0;
    string result = "";
    while(i>=0 || j>=0 || carry!=0){
        int digit1 = 0;
        if(i>=0){
            digit1=nums1[i]-'0';
        }
        int digit2 = 0;
        if(j>=0){
            digit2 = nums2[j]-'0';
        }
        int sum = digit1+digit2+carry;
        result+=sum%10+'0';
        carry = sum/10;
        i--;
        j--;
    }
    reverse(result.begin(), result.end());
    return result;
}
int main(){
    string nums1 = "11";
    string nums2 = "123";
    cout<<"The addition of two string is "<<add_string(nums1,nums2);
    return 0;
}